//! Shared IR identifiers, opcode descriptors and per-function architecture context.
//!
//! [`VarnodeId`], [`OpId`] and [`BlockId`] identify entries in the function's
//! slotmap arenas. [`HighVariableId`] identifies a high-level variable in its
//! separate bank. [`ArchContext`] shares address spaces and services with the
//! engine and carries configuration and symbol snapshots used by the IR.
//!
//! The legacy [`Cover`], [`Scope`] and [`FuncProto`] marker types remain public;
//! the function's live coverage, scope and prototype use their owning modules.

use std::rc::Rc;

use slotmap::new_key_type;
use unlace_base::address::Address;
use unlace_base::error::{UnlaceError, UnlaceResult};
use unlace_base::space::{AddrSpace, AddrSpaceManager};
use unlace_base::types::{int4, uint4};
use unlace_num::opcodes::OpCode;

new_key_type! {
    /// Arena key for a `Varnode` (ADR 0001).  Generational, so a stale handle
    /// is a caught error, not a use-after-free.
    pub struct VarnodeId;

    /// Generational arena key for a [`PcodeOp`](crate::op::PcodeOp).
    pub struct OpId;

    /// Generational arena key for a [`FlowBlock`](crate::block::FlowBlock).
    pub struct BlockId;
}

/// A high-level variable's key in [`HighVariableBank`](crate::variable::HighVariableBank).
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct HighVariableId(pub u32);

/// Legacy coverage marker. Live Varnode coverage uses [`crate::cover::Cover`].
#[derive(Debug, Clone, Default)]
pub struct Cover;

/// Opcode, property flags and display name attached to a [`PcodeOp`](crate::op::PcodeOp).
/// Local type information comes from [`TypeOpInfo`](crate::typeop::TypeOpInfo);
/// emulation behavior is supplied separately through [`ArchContext::opbehaviors`].
#[derive(Debug, Clone)]
pub struct TypeOp {
    /// The op-code value (C++ `TypeOp::opcode`).
    pub opcode: OpCode,
    /// Cached pcode-op properties for this op-code (C++ `TypeOp::opflags`,
    /// the `PcodeOp::*` flag bits `setOpcode` ORs in).
    pub flags: uint4,
    /// Symbol denoting this operation (C++ `TypeOp::name`).  Every op holds its
    /// own TypeOp, so the architecture's static names are borrowed, not copied.
    pub name: std::borrow::Cow<'static, str>,
}

impl TypeOp {
    /// Construct an opcode descriptor.
    pub fn new(
        opcode: OpCode,
        flags: uint4,
        name: impl Into<std::borrow::Cow<'static, str>>,
    ) -> TypeOp {
        TypeOp {
            opcode,
            flags,
            name: name.into(),
        }
    }

    /// Get the op-code value (C++ `TypeOp::getOpcode`).
    #[inline]
    pub fn get_opcode(&self) -> OpCode {
        self.opcode
    }

    /// Get the properties associated with the op-code (C++ `TypeOp::getFlags`).
    #[inline]
    pub fn get_flags(&self) -> uint4 {
        self.flags
    }

    /// Get the display name of the op-code (C++ `TypeOp::getName`).
    pub fn get_name(&self) -> &str {
        &self.name
    }
}

/// One mapped global [`SymbolEntry`](crate::database::SymbolEntry) storage record, flattened for the read-only
/// `queryProperties` walk the [`ArchHandle`] performs in
/// [`Funcdata::set_varnode_properties`](crate::funcdata::Funcdata::set_varnode_properties).
///
/// Carries exactly the fields `Scope::findContainer` / `SymbolEntry::inUse` /
/// `SymbolEntry::getAllFlags` read (`database.cc:2278-2310`, `1268-1286`); a flat
/// per-space record set rather than the live `rangemap<SymbolEntry>` because the
/// global scope is frozen by the time the `Funcdata`'s `glb` is built (every
/// `map addr` ran before `load function`).
#[derive(Debug, Clone)]
pub struct GlobalEntry {
    /// Address-space index (C++ `addr.getSpace()->getIndex()`).
    pub space_index: int4,
    /// First offset of the storage (C++ `SymbolEntry::getFirst`).
    pub first: u64,
    /// Last offset of the storage (C++ `SymbolEntry::getLast`, `uintb` wrap).
    pub last: u64,
    /// Number of bytes consumed by this storage (C++ `SymbolEntry::getSize`).
    pub size: int4,
    /// `extraflags | symbol->getFlags()` (C++ `SymbolEntry::getAllFlags`).
    pub all_flags: uint4,
    /// `(symbol->getFlags() & addrtied) != 0` — drives `SymbolEntry::inUse`'s
    /// "valid throughout scope" branch without re-deriving from `all_flags`.
    pub addrtied: bool,
    /// Code-address ranges where this storage is valid (C++ `uselimit`); empty
    /// for the address-tied `map addr` globals.
    pub uselimit: unlace_base::address::RangeList,
    /// The owning Symbol's display name (C++ `SymbolEntry::getSymbol()->getDisplayName()`),
    /// for the naming pass — `Funcdata::linkSymbol`'s reach into the global scope
    /// returns the Symbol whose display name a global-mapped HighVariable carries.
    pub symbol_name: String,
    /// Byte offset of this storage piece within the owning Symbol (C++
    /// `SymbolEntry::getOffset`), for the `getSymbolOffset` member-access render.
    pub symbol_offset: int4,
    /// The owning Symbol's data-type (C++ `SymbolEntry::getSymbol()->getType()`),
    /// for the HighVariable's symbol type after a global name binds.
    pub symbol_type: Option<std::rc::Rc<crate::dtype::Datatype>>,
    /// Display names of the owning Symbol's scope chain, innermost first, from the
    /// Symbol's own scope outward, EXCLUDING the global scope (C++ the scope chain
    /// `Symbol::getScope()` -> `getParent()` ... up to but not including global).
    /// Empty when the Symbol lives directly in the global scope.  Used by the
    /// printer's `pushSymbolScope`/`getResolutionDepth` namespace qualification
    /// (`printc.cc:203`, `database.cc:324`).
    pub scope_path: Vec<String>,
    /// Whether the owning Symbol is a `FunctionSymbol` (C++ the entry's
    /// `getSymbol()` is a `FunctionSymbol`, so `Scope::queryFunction(addr)` returns
    /// its `Funcdata`).  A bare loader function symbol carries a generic code type
    /// with NO recovered prototype, so `query_function` must still resolve it (with
    /// the default void proto) for `ActionDeindirect` to convert a CALLIND through
    /// its address into a direct CALL.
    pub is_function: bool,
    /// The owning FunctionSymbol's parked call-fixup inject id (C++
    /// `FunctionSymbol::getFunction()->getFuncProto().getInjectId()`, set by
    /// `IfcFixupApply` → `setInjectId`, which ALSO marks the proto inline).  `-1`
    /// when none / not a function.  `query_function` carries this onto the proto it
    /// hands `ActionDeindirect` so the deindirect sees an inline (inject-bearing)
    /// callee and restarts — the restart re-flows and the now-direct CALL injects.
    pub func_inject_id: int4,
    /// (unlace) The owning FunctionSymbol's no-return flag (C++
    /// `FunctionSymbol::getFunction()->getFuncProto().isNoReturn()`, set by
    /// `option noreturn <name>` or the no-return analysis pass).  `false` when not
    /// a function.  The C++ `Scope::queryFunction` hands `ActionDeindirect` the
    /// callee's live `Funcdata`, so its no-return flow effect comes for free; the
    /// unlace snapshot has to carry the bit explicitly, and without it a deindirected
    /// CALLIND to a no-return callee never schedules the restart that re-flows the
    /// now-direct CALL with an artificial halt.
    pub func_no_return: bool,
    /// The owning FunctionSymbol's parked extrapop (C++
    /// `FunctionSymbol::getFunction()->getFuncProto().getExtraPop()` after
    /// `option extrapop <n> <name>`).  `None` when unset or not a function.
    pub func_extra_pop: Option<int4>,
    /// The owning Symbol's id (C++ `SymbolEntry::getSymbol()->getId()`), for the
    /// Phase-4 `<high symref>` echo: ghidra-mode carries the REAL host database
    /// id delivered by getMappedSymbols (0 when the host sent none — the encode
    /// then omits `symref` rather than fabricate an id); the standalone console
    /// snapshot carries the internal `SYMBOL_ID_BASE`-range id, which is legal
    /// on the wire in the native-to-Java direction.
    pub symbol_id: u64,
}

/// A read-only snapshot of the global [`Scope`](crate::database::Scope)
/// sufficient to reproduce `Scope::queryProperties` (`database.cc:1268-1286`)
/// from the [`ArchHandle`] in [`Funcdata::set_varnode_properties`](crate::funcdata::Funcdata::set_varnode_properties).
///
/// The C++ `glb` is the live `Architecture`, so `localmap->queryProperties` walks
/// the parent chain up to the live global scope.  The merged unlace `glb`
/// ([`ArchContext`]) holds per-function configuration and services, and the function's
/// `localmap` owns its own detached `Database`; this snapshot is the wire that
/// reconnects the global symbol table onto `glb` so global-mapped varnodes get
/// `persist`/`addrtied` painted and survive `ActionDeadCode`.  Built once per
/// `Funcdata` at [`build_arch_handle`](crate::architecture::Architecture::build_arch_handle).
#[derive(Debug, Clone, Default)]
pub struct GlobalQuery {
    /// Every whole-and-piece mapped storage in the global scope, stably grouped
    /// by address-space index by [`GlobalQuery::new`].
    entries: Vec<GlobalEntry>,
    /// Per-space offset indexes for mapped-storage containment queries.
    space_indexes: Vec<GlobalSpaceIndex>,
    /// The global scope's owned data ranges (C++ `Scope::rangetree`), for the
    /// `inScope` discovery branch of `queryProperties`.
    pub owned: unlace_base::address::RangeList,
    /// The boolean-property map (C++ `Database::flagbase`), for `getProperty`.
    pub flagbase: unlace_base::partmap::PartMap<Address, uint4>,
    /// Every entry's symbol name, built on first use by [`GlobalQuery::has_symbol_name`].
    symbol_name_set: std::cell::OnceCell<std::collections::BTreeSet<Box<str>>>,
    /// Whether any entry carries a parked `func_extra_pop`.
    has_extra_pop: bool,
}

/// Prototype evidence attached to an exact memory slot feeding a `CALLIND`.
///
/// A loader models an import pointer slot as a `FunctionSymbol` whose code type
/// receives separately parked prototype pieces.  An explicit data declaration
/// instead models the slot as a pointer to a prototype-bearing code type.  Keep
/// the two cases distinct so a plain `code`, integer, or pointer-to-data symbol
/// cannot borrow unrelated address-keyed function pieces.
#[derive(Debug, Clone)]
#[doc(hidden)]
pub enum IndirectSlotType {
    /// An exact function-symbol entry with a code type.  `ActionDefaultParams`
    /// may consult the prototype pieces parked at this same address.
    FunctionCode,
    /// A pointer-to-code data symbol carrying its complete prototype.
    Prototype(Rc<crate::fspec::FuncProto>),
    /// An exact symbol exists, but its type does not prove a callable prototype.
    Untyped,
}

#[derive(Debug, Clone)]
struct GlobalSpaceIndex {
    space_index: int4,
    interval_order: Vec<usize>,
    max_last: Vec<u64>,
    leaf_base: usize,
    function_starts: std::cell::OnceCell<Vec<u64>>,
}

impl GlobalSpaceIndex {
    fn new(
        space_index: int4,
        entry_start: usize,
        entry_end: usize,
        entries: &[GlobalEntry],
    ) -> Self {
        let mut interval_order: Vec<usize> = (entry_start..entry_end).collect();
        interval_order.sort_by_key(|&entry_index| entries[entry_index].first);

        let leaf_base = interval_order.len().next_power_of_two();
        let mut max_last = vec![0; leaf_base * 2];
        for (position, &entry_index) in interval_order.iter().enumerate() {
            max_last[leaf_base + position] = entries[entry_index].last;
        }
        for node in (1..leaf_base).rev() {
            max_last[node] = max_last[node * 2].max(max_last[node * 2 + 1]);
        }

        Self {
            space_index,
            interval_order,
            max_last,
            leaf_base,
            function_starts: std::cell::OnceCell::new(),
        }
    }

    /// The entries that start exactly at `start`, in their original order.
    fn starting_at<'a>(
        &'a self,
        entries: &'a [GlobalEntry],
        start: u64,
    ) -> impl Iterator<Item = &'a GlobalEntry> + 'a {
        let lo = self
            .interval_order
            .partition_point(|&entry_index| entries[entry_index].first < start);
        let hi = self
            .interval_order
            .partition_point(|&entry_index| entries[entry_index].first <= start);
        self.interval_order[lo..hi]
            .iter()
            .map(move |&entry_index| &entries[entry_index])
    }

    fn for_each_candidate(
        &self,
        entries: &[GlobalEntry],
        start: u64,
        end: u64,
        visit: &mut impl FnMut(usize),
    ) {
        let limit = self
            .interval_order
            .partition_point(|&entry_index| entries[entry_index].first <= start);
        self.visit_candidates(1, 0, self.leaf_base, limit, end, visit);
    }

    fn visit_candidates(
        &self,
        node: usize,
        node_start: usize,
        node_end: usize,
        limit: usize,
        end: u64,
        visit: &mut impl FnMut(usize),
    ) {
        if node_start >= limit || self.max_last[node] < end {
            return;
        }
        if node_end - node_start == 1 {
            visit(self.interval_order[node_start]);
            return;
        }
        let midpoint = node_start + (node_end - node_start) / 2;
        self.visit_candidates(node * 2, node_start, midpoint, limit, end, visit);
        self.visit_candidates(node * 2 + 1, midpoint, node_end, limit, end, visit);
    }
}

impl GlobalQuery {
    /// Build a snapshot whose entries are grouped by address space while
    /// retaining their original order within each space.
    pub fn new(
        mut entries: Vec<GlobalEntry>,
        owned: unlace_base::address::RangeList,
        flagbase: unlace_base::partmap::PartMap<Address, uint4>,
    ) -> Self {
        entries.sort_by_key(|entry| entry.space_index);
        let mut space_indexes = Vec::new();
        let mut entry_start = 0;
        while entry_start < entries.len() {
            let space_index = entries[entry_start].space_index;
            let entry_end = entry_start
                + entries[entry_start..].partition_point(|entry| entry.space_index == space_index);
            space_indexes.push(GlobalSpaceIndex::new(
                space_index,
                entry_start,
                entry_end,
                &entries,
            ));
            entry_start = entry_end;
        }
        let has_extra_pop = entries.iter().any(|entry| entry.func_extra_pop.is_some());
        Self {
            entries,
            space_indexes,
            owned,
            flagbase,
            symbol_name_set: std::cell::OnceCell::new(),
            has_extra_pop,
        }
    }

    /// Clone out the flattened entry records (the remote-provider merge input:
    /// the ghidra-mode [`RemoteScope`](crate::remote_provider::RemoteScope)
    /// rebuilds its merged snapshot from the base Database snapshot's entries
    /// plus its decoded ones).
    #[doc(hidden)]
    pub fn entries_cloned(&self) -> Vec<GlobalEntry> {
        self.entries.clone()
    }

    /// Every identifier owned by the snapshotted global scope.
    ///
    /// Declaration-name allocation uses this conservative set to prevent a
    /// generated local suffix from shadowing a global reference in the same C
    /// function. Multiple mapped pieces of one Symbol may repeat a name; callers
    /// that care about uniqueness can collect these into a set.
    pub fn symbol_names(&self) -> impl Iterator<Item = &str> {
        self.entries.iter().map(|entry| entry.symbol_name.as_str())
    }

    /// Whether any entry of this snapshot carries `name`. The set is built once
    /// per snapshot, so a declaration pass asks by name instead of copying every
    /// global identifier for every function it prints.
    pub fn has_symbol_name(&self, name: &str) -> bool {
        self.symbol_name_set
            .get_or_init(|| self.symbol_names().map(Box::from).collect())
            .contains(name)
    }

    /// The entry of the last function symbol at or before `offset` in
    /// `space_index`: the function whose body holds `offset` as far as the
    /// symbol table can tell. The sorted entries are built on first use.
    pub fn function_entry_at_or_before(&self, space_index: int4, offset: u64) -> Option<u64> {
        let starts = self.function_starts(space_index)?;
        let after = starts.partition_point(|&start| start <= offset);
        after.checked_sub(1).map(|at| starts[at])
    }

    /// The sorted function entries of `space_index`, built on first use.
    fn function_starts(&self, space_index: int4) -> Option<&[u64]> {
        let index = self.index_for_space(space_index)?;
        Some(index.function_starts.get_or_init(|| {
            let mut starts: Vec<u64> = index
                .interval_order
                .iter()
                .map(|&entry_index| &self.entries[entry_index])
                .filter(|entry| entry.is_function)
                .map(|entry| entry.first)
                .collect();
            starts.dedup();
            starts
        }))
    }

    /// The entry of the first function symbol after `offset` in `space_index`.
    pub fn function_entry_after(&self, space_index: int4, offset: u64) -> Option<u64> {
        let starts = self.function_starts(space_index)?;
        starts
            .get(starts.partition_point(|&start| start <= offset))
            .copied()
    }

    fn index_for_space(&self, space_index: int4) -> Option<&GlobalSpaceIndex> {
        let position = self
            .space_indexes
            .partition_point(|index| index.space_index < space_index);
        self.space_indexes
            .get(position)
            .filter(|index| index.space_index == space_index)
    }

    #[cfg(test)]
    fn entries_for_space(&self, space_index: int4) -> &[GlobalEntry] {
        let start = self
            .entries
            .partition_point(|entry| entry.space_index < space_index);
        let end = self
            .entries
            .partition_point(|entry| entry.space_index <= space_index);
        &self.entries[start..end]
    }

    /// The entries of one address space whose storage starts at `start`, in
    /// snapshot order, by binary search over the space's interval order rather
    /// than a scan of the whole space.
    fn entries_starting_at(
        &self,
        space_index: int4,
        start: u64,
    ) -> impl Iterator<Item = &GlobalEntry> {
        self.index_for_space(space_index)
            .into_iter()
            .flat_map(move |index| index.starting_at(&self.entries, start))
    }

    /// C++ `Database::getProperty(addr)` (`database.hh:949`): the boolean
    /// properties (read-only/volatile) painted on a memory range.
    fn get_property(&self, addr: &Address) -> uint4 {
        *self.flagbase.get_value(addr)
    }

    /// C++ `Scope::findContainer` (`database.cc:2278-2310`) restricted to the
    /// global scope: the smallest mapped storage containing `[addr, addr+size-1]`
    /// that is in-use at `usepoint`.  Returns its `getAllFlags()`.
    fn find_container_flags(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<uint4> {
        self.find_container_entry(addr, size, usepoint)
            .map(|entry| entry.all_flags)
    }

    /// C++ `Scope::findContainer` (`database.cc:2278-2310`) restricted to the
    /// global scope, returning the *smallest containing entry* itself (not just its
    /// flags) so the naming pass can read its Symbol.  Identical containment /
    /// `inUse` / smallest-size logic as [`find_container_flags`](Self::find_container_flags),
    /// factored out so both queries share one walk.
    fn find_container_entry(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<&GlobalEntry> {
        let space_index = addr.get_space()?.get_index();
        let index = self.index_for_space(space_index)?;
        let start = addr.get_offset();
        // end = addr + size - 1 (uintb wrap), as in find_container.
        // cast: int4 -> u64, the C++ `uintb` widening of the non-negative byte
        // count; a storage size is never negative so sign-extension is irrelevant.
        let end = start.wrapping_add(size as u64).wrapping_sub(1);
        let mut best: Option<usize> = None;
        let mut earliest_exact: Option<usize> = None;
        let mut earliest_smaller: Option<usize> = None;
        index.for_each_candidate(&self.entries, start, end, &mut |entry_index| {
            let entry = &self.entries[entry_index];
            let in_use = if entry.addrtied {
                true
            } else if usepoint.is_invalid() {
                false
            } else {
                entry.uselimit.in_range(usepoint, 1)
            };
            if !in_use {
                return;
            }

            if entry.size == size
                && earliest_exact.is_none_or(|exact_index| entry_index < exact_index)
            {
                earliest_exact = Some(entry_index);
            } else if entry.size < size
                && earliest_smaller.is_none_or(|smaller_index| entry_index < smaller_index)
            {
                earliest_smaller = Some(entry_index);
            }

            let is_better = match best {
                Some(best_index) => {
                    let best_entry = &self.entries[best_index];
                    entry.size < best_entry.size
                        || (entry.size == best_entry.size && entry_index < best_index)
                }
                None => true,
            };
            if is_better {
                best = Some(entry_index);
            }
        });
        let selected = match earliest_exact {
            Some(exact_index)
                if earliest_smaller.is_none_or(|smaller_index| exact_index < smaller_index) =>
            {
                Some(exact_index)
            }
            _ => best,
        };
        selected.map(|entry_index| &self.entries[entry_index])
    }

    /// Classify an exact global slot read by a `CALLIND` target `LOAD`.
    ///
    /// The address is never adjusted: a containing aggregate or an interior
    /// symbol piece is insufficient.  A later non-function symbol at the exact
    /// address (the assertion/data-map ordering) shadows loader function
    /// metadata even when its declared size is not the machine pointer width.
    fn indirect_slot_type(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<IndirectSlotType> {
        let space_index = addr.get_space()?.get_index();
        let start = addr.get_offset();

        let classify_data = |entry: &GlobalEntry| {
            if entry.first != start || entry.symbol_offset != 0 || entry.size != size {
                return IndirectSlotType::Untyped;
            }
            let Some(pointer) = entry.symbol_type.as_ref() else {
                return IndirectSlotType::Untyped;
            };
            if pointer.get_metatype() != crate::dtype::type_metatype::TYPE_PTR {
                return IndirectSlotType::Untyped;
            }
            let Some(code) = pointer.get_ptr_to() else {
                return IndirectSlotType::Untyped;
            };
            if code.get_metatype() != crate::dtype::type_metatype::TYPE_CODE {
                return IndirectSlotType::Untyped;
            }
            match code.get_code_prototype() {
                Some(proto) => IndirectSlotType::Prototype(Rc::clone(proto)),
                None => IndirectSlotType::Untyped,
            }
        };

        if let Some(entry) = self.find_container_entry(addr, size, usepoint) {
            if !entry.is_function {
                return Some(classify_data(entry));
            }
            if entry.first != start || entry.symbol_offset != 0 {
                return Some(IndirectSlotType::Untyped);
            }
        }

        let starting_at = || self.entries_starting_at(space_index, start);
        let active = |entry: &GlobalEntry| {
            entry.addrtied || (!usepoint.is_invalid() && entry.uselimit.in_range(usepoint, 1))
        };
        if let Some(entry) = starting_at()
            .filter(|entry| !entry.is_function && active(entry))
            .last()
        {
            return Some(classify_data(entry));
        }

        // FunctionSymbols use the code type's one-byte storage convention even
        // when they describe an import pointer slot.  Validate the LOAD itself
        // against the address-space pointer width instead of comparing it with
        // that synthetic symbol size.
        if size != addr.get_space()?.get_addr_size() as int4 {
            return Some(IndirectSlotType::Untyped);
        }

        let entry = starting_at().find(|entry| {
            entry.symbol_offset == 0
                && entry.is_function
                && active(entry)
                && entry
                    .symbol_type
                    .as_ref()
                    .is_some_and(|ty| ty.get_metatype() == crate::dtype::type_metatype::TYPE_CODE)
        })?;
        match entry
            .symbol_type
            .as_ref()
            .and_then(|ty| ty.get_code_prototype())
        {
            Some(proto) => Some(IndirectSlotType::Prototype(Rc::clone(proto))),
            None => Some(IndirectSlotType::FunctionCode),
        }
    }

    /// Resolve the global Symbol covering a Varnode for the naming pass — the C++
    /// `Funcdata::linkSymbol`'s reach into the global scope (`funcdata_varnode.cc:1190`
    /// `localmap->queryProperties` walks up to the global scope, returns the covering
    /// `SymbolEntry`, and `high->getSymbol()` then carries that Symbol's display name).
    ///
    /// Returns `(display_name, symbol_offset, symbol_type)` where `symbol_offset` is
    /// the byte offset of the access within the Symbol (C++ `(addr - entry_addr) +
    /// entry_offset`; 0 for a whole-symbol/scalar global, > 0 for an array/struct
    /// member).  `None` when no global Symbol covers `[addr, addr+size)`.
    pub fn name_for_varnode(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<(String, int4, Option<std::rc::Rc<crate::dtype::Datatype>>)> {
        self.name_for_varnode_scoped(addr, size, usepoint)
            .map(|(n, off, t, _)| (n, off, t))
    }

    /// Like [`name_for_varnode`](Self::name_for_varnode) but also returns the owning
    /// Symbol's scope-name chain (innermost first, global excluded) so the caller can
    /// apply the printer's namespace qualification (`pushSymbolScope`).  Empty chain
    /// for a Symbol that lives directly in the global scope.
    pub fn name_for_varnode_scoped(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<(
        String,
        int4,
        Option<std::rc::Rc<crate::dtype::Datatype>>,
        Vec<String>,
    )> {
        if addr.is_constant() {
            return None;
        }
        let e = self.find_container_entry(addr, size, usepoint)?;
        // sym_off = (access_addr - entry_addr) + entry_offset (C++
        // ScopeLocal::name_for_varnode / SymbolEntry geometry).  `e.first` is the
        // entry's starting offset (== entry addr offset).
        let sym_off =
            (addr.get_offset().wrapping_sub(e.first) as int4).wrapping_add(e.symbol_offset);
        Some((
            e.symbol_name.clone(),
            sym_off,
            e.symbol_type.clone(),
            e.scope_path.clone(),
        ))
    }

    /// The type-locked covering Symbol's sized geometry for a Varnode — the input
    /// to C++ `SymbolEntry::updateType`/`getSizedType` (`database.cc:136,151`).
    ///
    /// `setVarnodeProperties` (funcdata_varnode.cc:31) calls `setSymbolProperties`
    /// (varnode.cc:429) -> `entry->updateType(this)`, which type-locks the Varnode
    /// to `getSizedType(addr,size) = getExactPiece(symbol->getType(), off, size)`
    /// ONLY when `(symbol->getFlags() & typelock) != 0`.  This returns
    /// `(symbol_type, off)` for the covering entry when it is type-locked, so the
    /// caller can run `getExactPiece` against the shared `TypeFactory` and apply
    /// `Varnode::updateType(dt, lock=true, override=true)`.  `None` when no global
    /// Symbol covers `[addr, addr+size)` or its Symbol is not type-locked.
    pub fn sized_type_geometry(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<(std::rc::Rc<crate::dtype::Datatype>, int4)> {
        use crate::varnode::varnode_flags;
        if addr.is_constant() {
            return None;
        }
        let e = self.find_container_entry(addr, size, usepoint)?;
        // SymbolEntry::updateType: only a type-locked Symbol forces a type.
        if (e.all_flags & varnode_flags::typelock) == 0 {
            return None;
        }
        let ct = e.symbol_type.clone()?;
        // getSizedType: off = (inaddr - addr) + offset (non-dynamic entry).
        let off = (addr.get_offset().wrapping_sub(e.first) as int4).wrapping_add(e.symbol_offset);
        Some((ct, off))
    }

    /// C++ `Scope::queryProperties` (`database.cc:1268-1286`) for the parentless
    /// global scope: the Varnode boolean properties of the memory range, whether
    /// or not a covering Symbol exists.  Constant addresses never match (the
    /// `stackContainer` `addr.isConstant()` guard).
    pub fn query_properties(&self, addr: &Address, size: int4, usepoint: &Address) -> uint4 {
        use crate::varnode::varnode_flags;
        if addr.is_constant() {
            return 0;
        }
        if let Some(flags) = self.find_container_flags(addr, size, usepoint) {
            // res != 0: use the entry's flags.
            flags
        } else if self.owned.in_range(addr, size) {
            // finalscope != 0 (the global scope owns the range, no symbol).
            varnode_flags::mapped
                | varnode_flags::addrtied
                | varnode_flags::persist
                | self.get_property(addr)
        } else {
            // No symbol, no owning scope: just the range's boolean properties.
            self.get_property(addr)
        }
    }
}

#[cfg(test)]
#[path = "context_tests.rs"]
mod tests;

/// Per-function configuration and shared services built by
/// [`Architecture::build_arch_handle`](crate::architecture::Architecture::build_arch_handle).
///
/// Address-space identities, type and loader services are shared with the engine.
/// Options and global-query data are snapshotted for the function; Ghidra-backed
/// queries can use the remote scope. [`ArchHandle`] shares this context between
/// the function and its analysis passes.
pub struct ArchContext {
    /// The pass hooks the IR calls through ([`crate::passhooks`]).
    pub pass_hooks: &'static crate::passhooks::UnlaceHooks,
    /// The registered unlace options, copied from the engine.
    pub unlace_options: crate::optionset::OptionSet,
    pub x87_empty_storage: Option<crate::architecture::Storage>,
    /// (unlace `varargsave`) The System V argument registers, when the pass applies.
    pub vararg_regs: Option<crate::architecture::Regs>,
    /// (unlace `arm64evcall`) The architecture's resolved arm64e virtual calls.
    pub vcall_targets: Rc<std::collections::BTreeMap<u64, crate::architecture::VcallTargets>>,

    /// The unlace passes' architecture-wide tables, shared with the engine
    /// ([`crate::archstate`]): call mechanisms, jump assists, segment operations.
    pub unlace_states: crate::archstate::ArchStates,
    /// (unlace) `callmechanisms` — apply compiler-spec prototype entry/return p-code.
    pub call_mechanism_effects: bool,
    /// (unlace `dexmodel`) The loaded DEX file's constant pool and register
    /// payloads; `None` for any other image or with the option off.
    pub dex: Option<Rc<crate::dex::DexModel>>,
    /// (unlace `jvmmodel`) The class file holding the function, when it is a
    /// method of a loaded class.
    pub jvm: Option<Rc<crate::jvm::JvmModel>>,
    /// (unlace) `callmechanisms auto` — only return payloads whose stored slot the next instruction
    /// reloads, forwarded into that reload when possible.
    pub call_mechanism_reload_only: bool,
    /// Shared spaces retain the pointer identities and indices used by lifted
    /// Varnodes. [`Self::new_shared`] accepts the engine's manager; [`Self::new`]
    /// wraps an owned manager for fixtures.
    pub manage: Rc<AddrSpaceManager>,
    /// Minimum Varnode size to check as a laned register (C++
    /// `Architecture::getMinimumLanedRegisterSize`).
    pub min_laned_register_size: int4,
    /// Vector registers that have preferred lane sizes (C++
    /// `Architecture::lanerecords`), built from the pspec `<register_data>`
    /// `vector_lane_sizes` attributes by `Architecture::decodeRegisterData`.
    /// Each [`LanedRegister`](crate::transform::LanedRegister) is keyed by its
    /// whole size (the records are sorted ascending by whole size, one per size),
    /// so [`ArchContext::get_laned_register`] can binary-search on size exactly
    /// as the C++ `Architecture::getLanedRegister` does.  Empty for hand-built
    /// fixtures and non-vector architectures.
    pub lanerecords: Vec<crate::transform::LanedRegister>,
    /// (unlace) The compiler spec's `<prefersplit>` rows: whole registers heritage
    /// pass 0 splits into two independent pieces.  Copied from the engine
    /// `Architecture` in `build_arch_handle`; empty when the spec states none.
    pub split_records: Vec<crate::architecture::PreferSplitRecord>,
    /// The p-code OpBehavior emulation table (C++ `glb->inst[opc]->getBehavior()`),
    /// indexed by op-code.
    ///
    /// The C++ `Architecture` IS-A `AddrSpaceManager` and owns the `TypeOp`
    /// table (with each op's `OpBehavior`); the W3 `glb` skeleton carries the
    /// behavior slice the IR-transform passes reach — `RuleCollapseConstants`
    /// drives `PcodeOp::collapse` through it for constant folding.  Empty for
    /// hand-built fixtures (those never fold constants); the real lift+analyze
    /// path populates it from the engine's table in
    /// `Architecture::build_arch_handle`.
    pub opbehaviors: Vec<Option<Rc<dyn unlace_num::opbehavior::OpBehavior>>>,
    /// The processor's floating-point formats (C++ `glb->translate->floatformats`),
    /// shared from the real [`crate::architecture::Architecture`]'s SLEIGH engine
    /// through `build_arch_handle`.  `SubfloatFlow` reaches them off `glb` to
    /// decide the precision-trace and convert constant encodings.  Empty for
    /// hand-built fixtures (those never run float-precision narrowing).
    pub floatformats: Vec<unlace_num::float::FloatFormat>,
    /// The default prototype model (C++ `Architecture::defaultfp`), shared from
    /// the real [`crate::architecture::Architecture`] registry through
    /// `build_arch_handle`.  The proto-recovery actions read it to set the
    /// function's model when the prototype is unrecovered.  `None` for hand-built
    /// fixtures (no proto registry).
    pub defaultfp: Option<Rc<crate::fspec::ProtoModel>>,
    /// The current-evaluation prototype model (C++ `evalfp_current`); falls back
    /// to `defaultfp` when unset.  Shared from the real architecture.
    pub evalfp_current: Option<Rc<crate::fspec::ProtoModel>>,
    /// Default storage location of a function's return address (C++
    /// `Architecture::defaultReturnAddr`), carried from the real architecture's
    /// cspec `<returnaddress>` decode.  `None` (== `space == 0`) for hand-built
    /// fixtures and cspecs without a `<returnaddress>`.  Read by
    /// `Funcdata::test_for_return_address` to detect a BRANCHIND that is really a
    /// tail return through the return-address register.
    pub default_return_addr: Option<unlace_num::pcoderaw::VarnodeData>,
    /// Entry return-address storage for a bounded indirect-transfer proof.
    /// Falls back to a register the language names `ra` when the cspec names
    /// none, which only ever withholds entry facts from the proof.
    pub indirect_return_addr: Option<unlace_num::pcoderaw::VarnodeData>,
    /// Maximum recursion depth for `Funcdata::ancestorOpUse` (C++
    /// `Architecture::trim_recurse_max`).  Drives `ActionReturnRecovery`'s
    /// ancestor-realism walk.
    pub trim_recurse_max: int4,
    /// Maximum number of references to an implied Varnode before it is forced
    /// explicit (C++ `Architecture::max_implied_ref`, default 2).  Drives
    /// `ActionMarkExplicit::baseExplicit`.
    pub max_implied_ref: int4,
    /// Maximum number of duplicating terms allowed in an implied expression
    /// before the multi-descendant Varnode is forced explicit (C++
    /// `Architecture::max_term_duplication`, default 2).  Drives
    /// `ActionMarkExplicit::processMultiplier`.
    pub max_term_duplication: int4,
    /// (unlace) CALLOTHER user-op ids named in
    /// [`STATE_USEROP_NAMES`](crate::retsysreg::STATE_USEROP_NAMES), and
    /// those named in [`COP_USEROP_NAMES`](crate::retsysreg::COP_USEROP_NAMES),
    /// resolved from the program's user ops when the handle is built.
    pub retsysreg_userops: Vec<unlace_base::types::uint4>,
    pub retsysreg_cop_userops: Vec<unlace_base::types::uint4>,
    /// (unlace) The source language of this image (`option sourcelang` override
    /// applied): what `option rustabi auto` tests and `option reloadarg`
    /// stands down on.  Copied from the engine `Architecture` in
    /// `build_arch_handle`.
    pub source_lang: crate::sourcelang::SourceLang,
    /// (unlace `swifttypes`) Type Swift metadata accessor call results; read by
    /// [`crate::p5_types::swiftmetaresult`]. Copied from the engine
    /// `Architecture` in `build_arch_handle`.
    pub swift_metadata_results: bool,
    /// (unlace) The `SoftwareBreakpoint` user-op id when `option ptrauthtrap`
    /// is on; read by [`crate::ptrauthtrap`].
    pub ptrauth_trap_userop: Option<unlace_base::types::uint4>,
    /// (unlace) The language is arm64e's; read by
    /// [`crate::p4_calls::hiddenretarg`].
    pub arm64e: bool,
    /// (unlace) angr-style default naming: an unknown callee / global prints as
    /// `sub_<addr>` / `dat_<addr>` rather than `func_<addr>` (C++
    /// option `namestyle`, default `angr`).  Read by the call-spec
    /// printed-name resolution ([`FuncCallSpecs::fspec_printed_name`](crate::fspec::FuncCallSpecs::fspec_printed_name)).
    pub name_style_angr: bool,
    /// (unlace, Phase 3) Ghidra-convention fallback naming (`FUN_`/`DAT_`/`LAB_`),
    /// set only by the ghidra-mode registerProgram — see
    /// `Architecture::name_style_ghidra`.  Wins over `name_style_angr` in
    /// [`Self::unlace_name_style`].
    pub name_style_ghidra: bool,

    /// (unlace `opaquepredicate globals`) A comparison asked while the scan was
    /// pending.
    pub opaque_globals_wanted: std::cell::Cell<bool>,

    /// (unlace) CALLOTHER user-op ids the architecture registered under a byte
    /// shuffle name ([`SHUFFLE_USEROP_NAMES`](crate::simdlane::SHUFFLE_USEROP_NAMES)),
    /// resolved once per program in `Architecture::build_arch_handle` so
    /// [`RuleSimdShuffleLane`](crate::simdlane::RuleSimdShuffleLane) can
    /// name a CALLOTHER without reaching the full `Architecture`.
    pub simd_shuffle_userops: Vec<unlace_base::types::uint4>,
    /// (unlace `vecpairstore`) CALLOTHER ids of `vpunpcklqdq_avx` (kind 0) and
    /// `vpinsrq_avx` (kind 1), resolved once per program.
    pub vecpair_userops: Vec<(unlace_base::types::uint4, u8)>,
    /// (unlace) CALLOTHER ids of the x87 integer conversions read by
    /// [`RuleX87Truncate`](crate::x87truncate::RuleX87Truncate).
    pub x87_float_to_int_userops: Vec<unlace_base::types::uint4>,
    /// SLEIGH FIST/FISTP conversion userops and their signed output widths.
    /// Resolved by name once when building the architecture snapshot.
    pub x87_integer_userops: Vec<(unlace_base::types::uint4, int4)>,
    /// (unlace) CALLOTHER ids of the float roundings p-code has no operator for
    /// ([`USEROP_NAMES`](crate::roundingops::USEROP_NAMES)), typed float in
    /// and out by [`unlace_roundingops`](crate::roundingops).
    pub float_rounding_userops: Vec<unlace_base::types::uint4>,
    /// (unlace `calltargettype`) C output: a parameter or global takes the call's
    /// type too, and a target whose uses disagree is cast at each call. The
    /// Rust speller spells every pointer to code `*const ()`, so neither changes
    /// anything there. Read by
    /// [`retype_call_targets`](crate::calltargettype::retype_call_targets).
    pub call_target_c: bool,
    /// (unlace) The output is Java: decide casts as `CastStrategyJava`.
    pub java_casts: bool,
    /// (unlace `floatglobals`) A vote asked while the scan was pending.
    pub float_globals_wanted: std::cell::Cell<bool>,
    /// (unlace) The printer spells a residual one-byte TYPE_UNKNOWN as C `char`
    /// (`realtypes` on, C output), so its promotion sign-extends.  Read by
    /// [`unlace_truncarg`](crate::p9_emit::truncarg).
    pub unknown_byte_is_char: bool,
    /// (unlace) The printer spells residual TYPE_UNKNOWN bytes as an integer
    /// (`realtypes` on, or an output language with no unknown-bytes type), so a
    /// float assigned into them reads as a numeric conversion.  Read by
    /// [`unlace_floatstore`](crate::p9_emit::floatstore).
    pub unknown_is_integer: bool,
    /// (unlace) The output language promotes a sub-`int` argument to `int`
    /// (`LangCaps::integer_promotion`).  Read by
    /// [`unlace_truncarg`](crate::p9_emit::truncarg).
    pub int_promotion: bool,

    /// (unlace `elemptr`) The sections a program's data objects live in, sorted and
    /// inclusive; the `globalref` ranges, copied from the Architecture.
    pub elem_ptr_ranges: std::rc::Rc<Vec<(u64, u64)>>,
    /// (unlace `libctypes`) The named libc aggregate tables are on.  Copied from
    /// the option's [`LibcTypesLayout`](crate::libctypes::LibcTypesLayout) (not `off`);
    /// read by [`unlace_libcfit`](crate::p5_types::libcfit), which holds a
    /// named libc pointer vote to what the caller does through it.
    pub libctypes: bool,
    /// (unlace) `armfloatreturn` is on and the image states the ARM VFP calling
    /// convention.  Read by [`crate::p4_calls::armfloatreturn`].
    pub arm_float_return: bool,
    /// (unlace) `armfloatargs` is on and the image states the ARM VFP calling
    /// convention.  Read by [`crate::p4_calls::armfloatargs`].
    pub arm_float_args: bool,
    /// (unlace) The default model before `armfloatreturn` widens it, kept for the
    /// AEABI helpers that use the base standard in every image.  Read by
    /// [`crate::p4_calls::armfloatreturn::helper_model`].
    pub arm_base_model: Option<Rc<crate::fspec::ProtoModel>>,
    /// (unlace) The core-register (soft-float) model a declared AEABI helper
    /// prototype is laid out under on every 32-bit ARM image (RTABI32 3.1).  Read by
    /// [`crate::p4_calls::armfloatreturn::declared_helper_model`].
    pub arm_helper_model: Option<Rc<crate::fspec::ProtoModel>>,
    /// What the image says about floating-point arguments (`Some(false)`: they
    /// travel in integer registers).  Read by [`crate::p4_calls::typedcallabi`].
    pub float_arg_registers: Option<bool>,
    /// The spec's soft-float model on a soft-float image, if it has one.
    pub soft_float_model: Option<Rc<crate::fspec::ProtoModel>>,
    /// (unlace) The soft-float model a declaration that names no convention is
    /// laid out under, on an image without floating-point hardware.  Read by
    /// [`crate::p4_calls::typedcallabi::undeclared_model`].
    pub soft_float_declarations: Option<Rc<crate::fspec::ProtoModel>>,
    /// (unlace) The image is ARM and states the VFP variant, where a variadic
    /// declaration returns under the base standard.  Read by
    /// [`crate::p4_calls::typedcallabi::undeclared_model`].
    pub vfp_variadic: bool,
    /// The default model with the variadic return rules, derived on first use.
    pub variadic_declarations: std::cell::OnceCell<Option<Rc<crate::fspec::ProtoModel>>>,
    /// The narrowest return value, in bytes, that the caller rather than the
    /// callee extends to its register (`i32::MAX`: none).  Read by
    /// [`crate::p4_calls::typedcallabi`].
    pub caller_extends_returns_from: i32,
    /// (unlace) How the image passes a floating-point value in the variadic part
    /// of a call.  Read by [`crate::p4_calls::varargretreg`].
    pub vararg_floats: crate::architecture::VarargFloats,
    /// (unlace) how a narrow integer argument or return value fills its register
    /// (`narrowext`).  Read by [`crate::p4_calls::unlace_narrowext`].
    pub narrow_ext: NarrowExtRules,

    /// (unlace `vtabletypes`) A call made direct by an indirect-call override
    /// does not take the register that carried its target as an argument.
    pub vtable_types: bool,
    /// (unlace `calleereginputs custom`) Per-callee-entry input-register key, and
    /// the model for each key: so a function's own evaluation prints the same
    /// custom register parameters its callers pass. Copied from the global
    /// architecture per function; empty unless the whole-image rule decided one.
    pub unlace_custom_reg_callers: Rc<std::collections::HashMap<u64, u16>>,
    pub unlace_custom_reg_models: Rc<std::collections::HashMap<u16, Rc<crate::fspec::ProtoModel>>>,

    /// (unlace `loopcontinue`) The output language's do-while runs its test on
    /// `continue;`: C `do..while` and Go's `for` post statement do, Rust's
    /// `loop { ..; if !(c) { break; } }` restarts the body instead.
    pub do_while_continue: bool,
    /// (unlace) The loader identified the image as a Linux ELF: the fact
    /// `option linuxsyscall auto` acts on.
    pub image_linux_elf: bool,
    /// Exact GCC AMD64 target supporting the ordinary SysV stack model.
    pub x64_syscall_memory_target: bool,
    /// (unlace) The user-op indices the `SYSCALL` constructor emits, resolved once
    /// per program because the boundary `ArchContext` carries no userop table.
    /// A user-op a compiler spec specialized with its own `<callotherfixup>` is
    /// left out, so a spec-declared model always wins.  Read by
    /// [`ActionX64Syscall`](crate::x64syscall::ActionX64Syscall).
    pub x64_syscall_userops: Vec<unlace_base::types::uint4>,
    /// The Octeon atomic, reservation and ordering operations the language
    /// declares, resolved under [`Self::octeon_effects`]. Under `off` only a
    /// load-linked or store-conditional left without its upstream fixup (ghidra
    /// mode) remains; see `octeonops::userop_ids`.
    pub octeon_memory_userops: Vec<(u32, crate::octeonops::Effect)>,
    /// (unlace `atomics`) The x86 lock envelope or AArch64 ordering user
    /// operations an atomic instruction may carry; see `unlace_atomics`.
    pub atomic_userops: crate::atomicops::AtomicUserops,
    /// (unlace) `option syscallregs`, resolved against the loader's user-space
    /// fact: does the ARM/AArch64/RISC-V/MIPS/PowerPC system-call user-op read
    /// its setup registers and write its result?  Read by
    /// [`ActionSyscallRegs`](crate::syscallregs::ActionSyscallRegs).
    pub syscall_regs: bool,
    /// (unlace) The processor family of the loaded language, when `syscallregs`
    /// models it.
    pub syscall_regs_family: Option<SyscallFamily>,
    /// (unlace) The family's system-call user-op ids, minus any a compiler spec
    /// specialized with its own `<callotherfixup>`.
    pub syscall_regs_userops: Vec<unlace_base::types::uint4>,
    /// (unlace) The compiler spec is a Windows one: a fact `option pebnames` acts on.
    pub windows_cspec: bool,
    /// (unlace) The loader identified a Windows user-mode PE: the fact
    /// `option pebnames auto` acts on.
    pub image_windows_user: bool,
    /// (unlace `vaargaapcs`) An AArch64 image outside Apple and Windows: its va_list is the AAPCS64 struct.
    pub aapcs64_va_list: bool,
    /// AArch64 integer division returns zero for a zero divisor.
    pub go_keep_divide_checks: bool,
    /// Attempt conversion of `whiledo` loops to `for` loops (C++
    /// `Architecture::analyze_for_loops`, default-on).  Read by
    /// `Funcdata::finalize_forloop_transform` (the BlockWhileDo for-loop reroll).
    pub analyze_for_loops: bool,
    /// Ignore NaN operations entirely, assuming `nan()` always returns false
    /// (C++ `Architecture::nan_ignore_all`, default-off).  Read by
    /// [`RuleIgnoreNan`](crate::ruleaction_7::RuleIgnoreNan); set via the
    /// `nanignore all` option and shared from the real
    /// [`crate::architecture::Architecture`] through `build_arch_handle`.
    pub nan_ignore_all: bool,
    /// Ignore NaN effects around comparisons (C++ `nan_ignore_compare`; the
    /// shipped `nanignore compare` default). Also lets a floating round trip
    /// drop its signaling-NaN quieting
    /// ([`crate::p3_dataflow::floatquiet`]); fixtures default to off.
    pub nan_ignore_compare: bool,
    /// The data-type factory (C++ `glb->types`), shared from the real
    /// [`crate::architecture::Architecture`] through `build_arch_handle`.
    /// `ActionInferTypes` reaches `getBase`/`getTypePointer`/`down_chain` through
    /// it.  `None` for hand-built fixtures (no type factory registry).
    pub types: Option<Rc<crate::dtype::TypeFactoryImpl>>,
    /// The decoded-string manager (C++ `glb->stringManager`), shared from the
    /// real [`crate::architecture::Architecture`] through `build_arch_handle`.
    /// `Funcdata::getInternalString` (the `RuleStringStore`/`RuleStringCopy`
    /// transform) registers the assembled byte-array as an internal string here;
    /// the printer reads it back through the same shared instance on the real
    /// architecture.  `None` for hand-built fixtures (no internal strings).
    pub internal_strings: Option<Rc<std::cell::RefCell<crate::stringmanage::StringManagerUnicode>>>,
    /// Maximum number of entries in a single JumpTable (C++
    /// `Architecture::max_jumptable_size`), shared from the real architecture.
    /// Read by `JumpTable::recoverModel`.  `0` for hand-built fixtures.
    pub max_jumptable_size: uint4,
    /// Aliases blocked by 0=none,1=struct,2=array,3=all (C++
    /// `Architecture::alias_block_level`), shared from the real architecture.
    /// Read by `ScopeLocal::markUnaliased`.  Defaults to 2 (block structs and
    /// arrays), matching the real architecture's startup default.
    pub alias_block_level: int4,
    /// How many low bits of a recovered function pointer are forced to zero (C++
    /// `Architecture::funcptr_align`), shared from the real architecture.  Read
    /// by `JumpBasic::buildAddresses` to align recovered targets.  `0` (no
    /// alignment) for hand-built fixtures.
    pub funcptr_align: int4,
    /// (unlace `lazyfuncs`) The entry starts the commit installed as names only,
    /// sorted, so the run-on cut (`unlace_switchrunon`) sees the same functions
    /// with the option on.
    pub lazy_entry_starts: Rc<Vec<u64>>,
    /// (unlace) `Architecture::unlace_fde_extents`.
    pub unlace_fde_extents: Rc<Vec<(u64, u64)>>,
    /// The program load image (C++ `Architecture::loader`), shared from the
    /// engine through `build_arch_handle`.  Read by jump-table emulation
    /// (`EmulateFunction::executeLoad` -> `get_load_image_value`) to fetch the
    /// read-only switch table.  `None` for hand-built fixtures (no loader).
    pub loader: Option<Rc<std::cell::RefCell<Box<dyn unlace_sleigh::loadimage::LoadImage>>>>,
    /// Treat read-only values as constants (C++ `Architecture::readonlypropagate`,
    /// flipped by `option readonly`), carried into the per-function `glb` so
    /// `ActionVarnodeProps::apply` reaches `glb->readonlypropagate` to gate
    /// [`Funcdata::fillin_read_only`](crate::funcdata::Funcdata::fillin_read_only).
    /// `false` by default (C++ `Architecture::resetDefaults`).
    pub readonlypropagate: bool,
    /// (unlace `dynrelocs`) `[start, stop]` (inclusive) offsets whose read-only
    /// contents are foldable even with [`Self::readonlypropagate`] off: the
    /// dynamic-relocation slots the loader filled in that `PT_GNU_RELRO` freezes.
    /// The value is the linker's, the memory is `mprotect`ed read-only before
    /// `main`, and folding it is what turns a call through a GOT slot back into a
    /// named call — but `option readonly` is a program-wide switch, so these
    /// ranges carry the exception. Sorted ascending, disjoint, and EMPTY for
    /// every hand-built fixture and every XML `<binaryimage>` load, which is why
    /// the datatest parity oracle cannot see this field.
    pub dynreloc_const: Rc<Vec<(u64, u64)>>,
    /// (unlace `vectorabi`) The vector user-ops (AVX SLEIGH ops with an intrinsic
    /// name, and the `lanefuse` built-ins) with their element kind; their
    /// operands and results take the Intel vector types.
    pub vector_userops: Rc<Vec<(unlace_base::types::uint4, u8)>>,
    /// (unlace `vectorabi`) The default model widened with the vector entries,
    /// used for a function whose body holds vector operations.
    pub vector_fp: Option<Rc<crate::fspec::ProtoModel>>,
    /// (unlace `litpoolconst`) `[start, stop]` (inclusive) offsets of the image's
    /// executable, non-writable, file-backed regions — the instruction stream, and
    /// so the literal pools embedded in it. A read entirely inside one is foldable
    /// with [`Self::readonlypropagate`] off.
    /// Sorted ascending, disjoint, and EMPTY for every hand-built fixture and every
    /// XML `<binaryimage>` load, which is why the datatest parity oracle cannot see
    /// this field.
    pub litpool_const: Rc<Vec<(u64, u64)>>,
    /// Whether the volatile read/write userops display \e functionally (C++
    /// `VolatileReadOp`/`VolatileWriteOp` ctor `functional` flag — the `<volatile
    /// format="functional">` spec attribute).  Drives the `setHoldOutput` branch
    /// in [`Funcdata::replace_volatile`](crate::funcdata::Funcdata::replace_volatile):
    /// `getDisplay() != 0` is equivalent to `!functional` for the volatile-read op.
    /// `false` (non-functional) by default, matching the unconfigured `glb`.
    pub volatile_display_functional: bool,
    /// Data-type-splitting toggle bits (C++ `Architecture::split_datatype_config`,
    /// `option_struct`/`option_array`/`option_pointer`), carried into the
    /// per-function `glb` so [`SplitDatatype`](crate::subflow::SplitDatatype) and
    /// the `RuleSplit{Copy,Load,Store}` rules reach `glb->split_datatype_config`.
    /// Default `struct|array|pointer` (C++ `Architecture::resetDefaults`).
    pub split_datatype_config: uint4,
    /// Read-only snapshot of the global symbol table (C++ `glb->symboltab`'s
    /// global scope + property map), the wire for `localmap->queryProperties`'s
    /// walk up to the global scope.  Built at `build_arch_handle` (after every
    /// `map addr`); read by [`Funcdata::set_varnode_properties`](crate::funcdata::Funcdata::set_varnode_properties) to paint `persist`/`addrtied` on
    /// global-mapped varnodes so their stores survive `ActionDeadCode`.  `None`
    /// for hand-built fixtures (no symbol table).
    pub global_query: Option<Rc<GlobalQuery>>,
    /// (unlace, Phase 3) The ghidra-mode lazy symbol provider
    /// ([`RemoteScope`](crate::remote_provider::RemoteScope)); when installed,
    /// every global-scope read below queries through it (fetching unresolved
    /// addresses from the host) instead of the frozen `global_query`/
    /// `callee_protos` snapshots.  `None` on the standalone path, which stays
    /// byte-identical.
    pub remote_scope: Option<Rc<crate::remote_provider::RemoteScope>>,
    /// Infer pointers from likely-address constants (C++ `glb->infer_pointers`),
    /// shared from the real [`crate::architecture::Architecture`] through
    /// `build_arch_handle`.  Read by [`ActionConstantPtr`](crate::coreaction_render::ActionConstantPtr)'s `isPointer`/`checkCopy` (coreaction.cc:1056-1144) to gate
    /// the various pointer-inference arms.  Default-on (C++ `resetDefaults`); `false`
    /// for hand-built fixtures (no constant-pointer recovery exercised).
    pub infer_pointers: bool,
    /// (unlace `blobs`) The first address of each embedded image or archive,
    /// shared from the real architecture; empty for fixtures.
    pub blob_entries: Rc<std::collections::BTreeSet<u64>>,
    /// Ordered list of address spaces in which a constant pointer can be inferred
    /// (C++ `Architecture::inferPtrSpaces`, built by `cacheAddrSpaceProperties` +
    /// the cspec `<global>` push), shared from the real architecture through
    /// `build_arch_handle`.  Iterated by `ActionConstantPtr::selectInferSpace`
    /// (coreaction.cc:1020-1047).  Empty for hand-built fixtures.
    pub infer_ptr_spaces: Vec<Rc<AddrSpace>>,
    /// Source-declared callee prototypes, keyed by `(space_index, entry_offset)`
    /// (C++ the callee `Funcdata`'s lazily-built locked `FuncProto`).  Snapshotted
    /// from the global FunctionSymbols at `build_arch_handle`; read back by
    /// `ActionDefaultParams::apply` via [`Self::callee_proto_pieces`] to
    /// `fc->copy(otherfunc->getFuncProto())` (`coreaction.cc:2385`).  Empty for
    /// hand-built fixtures and undeclared callees.  Shared behind an `Rc`
    /// because `build_arch_handle` hands the same snapshot to every function of
    /// a run.
    pub callee_protos: Rc<
        Vec<(
            int4,
            unlace_base::types::uintb,
            crate::fspec::PrototypePieces,
        )>,
    >,
    /// Loader-proven tail transfers, flowed as a call and return; explicit
    /// per-function flow overrides take precedence.
    pub loader_transfer_sites: Rc<std::collections::BTreeSet<Address>>,
    /// Import entries the loader identifies (a MIPS GOT slot, a RISC-V call relocation
    /// to an undefined symbol), never ordinary definitions.
    pub loader_mips_imports: Rc<std::collections::BTreeSet<Address>>,
    pub nullable_literal_values: Rc<std::collections::BTreeSet<u64>>,
    /// The calling convention each declared callee was declared under, keyed the
    /// same way [`Self::callee_protos`] is.  Snapshotted at `build_arch_handle`
    /// from the architecture's declared-convention map and read back by
    /// [`Self::callee_proto_model`], so `ActionDefaultParams` seeds the locked
    /// callee pieces under the declared convention rather than `defaultfp`.
    /// Empty when no declaration named a convention.
    pub callee_proto_models: Vec<(
        int4,
        unlace_base::types::uintb,
        Rc<crate::fspec::ProtoModel>,
    )>,
    /// (unlace) The calling convention bound to a function with no declared
    /// signature, by entry `(space index, offset)`: the analysis tier's
    /// model-only facts ([`crate::Architecture::loader_proto_models`]). The
    /// function's own decompile recovers its parameters under it, and a call
    /// to it does the same at the call site.
    pub bound_proto_models: Rc<
        std::collections::BTreeMap<(int4, unlace_base::types::uintb), Rc<crate::fspec::ProtoModel>>,
    >,
    /// (unlace `swiftmetadata`) Each local Swift enum's case count by its
    /// metadata accessor's entry offset (`p2_lift/switchextent.rs`).
    pub swift_enum_cases: Rc<std::collections::BTreeMap<u64, u32>>,
    /// (unlace `calleereginputs`) The `__thiscall` model, the ECX storage a
    /// virtual call reads its `this` from and EAX's, when the option applies.
    pub virtual_this: Option<(
        Rc<crate::fspec::ProtoModel>,
        unlace_base::address::Address,
        int4,
        unlace_base::address::Address,
    )>,
    /// Snapshot of the engine's tracked-register database (C++ `glb->context`'s
    /// track base, populated by `set track <reg> <val> [start end]`).  The
    /// per-function `glb` skeleton does not hold the `ContextDatabase`, so
    /// `build_arch_handle` clones the part-map here; [`ActionConstbase`](crate::coreaction_early::ActionConstbase) queries it for the entry address to emit
    /// the `COPY #val -> reg` ops (`coreaction.cc:707`).  Empty for hand-built
    /// fixtures and when no register is tracked.
    pub tracked_sets:
        unlace_base::partmap::PartMap<Address, unlace_sleigh::globalcontext::TrackedSet>,
}

impl ArchContext {
    /// Construct a context from an owned [`AddrSpaceManager`].
    ///
    /// Used by hand-built test fixtures; the real path shares the engine's
    /// manager through [`Self::new_shared`].
    #[inline]
    pub fn new(manage: AddrSpaceManager) -> ArchContext {
        ArchContext::new_shared(Rc::new(manage))
    }

    /// Construct the skeleton sharing the engine's single [`AddrSpaceManager`]
    /// (LOSS-132 keystone).  The `Rc` is the one the SLEIGH translator
    /// populated (with fspec/iop/join inserted by `Architecture::restoreFromSpec`),
    /// so the lifted varnodes and the analysis passes see the same spaces.
    pub fn new_shared(manage: Rc<AddrSpaceManager>) -> ArchContext {
        // C++ default: getMinimumLanedRegisterSize() returns the configured
        // minimum; the upstream default when unset is 4.
        ArchContext {
            pass_hooks: crate::architecture::default_pass_hooks(),
            unlace_states: Default::default(),
            call_mechanism_effects: false,
            dex: None,
            jvm: None,
            call_mechanism_reload_only: false,
            manage,
            min_laned_register_size: 4,
            unlace_options: crate::optionset::OptionSet::new(),
            x87_empty_storage: None,
            vararg_regs: None,
            vcall_targets: Rc::default(),
            lanerecords: Vec::new(),
            split_records: Vec::new(),
            opbehaviors: Vec::new(),
            floatformats: Vec::new(),
            callee_proto_models: Vec::new(),
            bound_proto_models: Rc::default(),
            swift_enum_cases: Rc::default(),
            virtual_this: None,
            defaultfp: None,
            evalfp_current: None,
            default_return_addr: None,
            indirect_return_addr: None,
            // C++ Architecture default: trim_recurse_max = 5 (resetDefaults).
            trim_recurse_max: 5,
            // C++ Architecture default: max_implied_ref = 2 (resetDefaults).
            max_implied_ref: 2,
            // C++ Architecture default: max_term_duplication = 2 (resetDefaults).
            max_term_duplication: 2,
            retsysreg_userops: Vec::new(),
            retsysreg_cop_userops: Vec::new(),
            // (unlace) `option bejoin`; the real value is copied from the engine
            // Architecture in `build_arch_handle`.
            source_lang: Default::default(),
            // (unlace) `option gobool` default auto; copied the same way.
            // (unlace) `option gonewtype` default on; copied the same way.
            swift_metadata_results: false,
            ptrauth_trap_userop: None,
            arm64e: false,
            // (unlace) angr-style default naming is default-on (Architecture::reset).
            name_style_angr: true,
            // (unlace, Phase 3) ghidra-mode-only; never set on the standalone path.
            name_style_ghidra: false,
            // (unlace) default-off opt-in; the real value is copied from the engine
            // Architecture in `build_arch_handle` (`option dedupvardecls`).
            // (unlace) DIV-2 default-on (GH-558): resetDefaults sets present_lessequal=true.
            // (unlace) the real arch overwrites each of these in `build_arch_handle`;
            // hand-built fixtures (no `build_arch_handle`) get `false`, so a rule
            // registered `enabled=false` is inert there — matching the gate-off
            // unit tests.
            opaque_globals_wanted: std::cell::Cell::new(false),
            simd_shuffle_userops: Vec::new(),
            vecpair_userops: Vec::new(),
            x87_float_to_int_userops: Vec::new(),
            x87_integer_userops: Vec::new(),
            float_rounding_userops: Vec::new(),
            call_target_c: false, // (unlace) option calltargettype, C output
            java_casts: false,
            float_globals_wanted: std::cell::Cell::new(false),
            unknown_byte_is_char: false, // (unlace) realtypes + C output
            unknown_is_integer: false,   // (unlace) realtypes, or not C output
            int_promotion: true,         // (unlace) LangCaps::integer_promotion (C)
            elem_ptr_ranges: std::rc::Rc::new(Vec::new()), // (unlace) elemptr
            libctypes: false,            // (unlace) option libctypes, copied from Architecture
            // endptrbound only re-expresses an address the walk already compares
            // against, so the fixture seam carries the real default.
            // castobject only re-types a slot whose readers agree, so the fixture
            // seam carries the shipped default.
            // argclobber only drops a trailing argument the callee's own
            // recovered prototype says it never reads, and declines outright
            // when there is no callee to ask, so the fixture seam carries the
            // shipped default.
            arm_float_args: false, // (unlace) option armfloatargs (default off)
            arm_float_return: false, // (unlace) option armfloatreturn (default off)
            arm_base_model: None,
            arm_helper_model: None,
            float_arg_registers: None,
            soft_float_model: None,
            soft_float_declarations: None,
            vfp_variadic: false,
            variadic_declarations: std::cell::OnceCell::new(),
            caller_extends_returns_from: i32::MAX,
            vararg_floats: Default::default(),
            narrow_ext: NarrowExtRules::default(),

            vtable_types: false,
            unlace_custom_reg_callers: Rc::default(),
            unlace_custom_reg_models: Rc::default(),

            do_while_continue: true,
            image_linux_elf: false,
            x64_syscall_memory_target: false,
            x64_syscall_userops: Vec::new(),
            octeon_memory_userops: Vec::new(),
            atomic_userops: crate::atomicops::AtomicUserops::default(),
            syscall_regs: false,
            syscall_regs_family: None,
            syscall_regs_userops: Vec::new(),
            windows_cspec: false,
            aapcs64_va_list: false,
            image_windows_user: false,

            go_keep_divide_checks: false,
            // C++ Architecture default: analyze_for_loops = true (architecture.cc).
            analyze_for_loops: true,
            // C++ Architecture default: nan_ignore_all = false (architecture.cc:1453);
            // only `nanignore all` flips it. nan_ignore_compare drives the rule's
            // enabled state at registration, not this flag.
            nan_ignore_all: false,
            nan_ignore_compare: false,
            types: None,
            internal_strings: None,
            max_jumptable_size: 0,
            alias_block_level: 2, // Architecture default: block structs and arrays
            funcptr_align: 0,
            lazy_entry_starts: Rc::default(),
            unlace_fde_extents: Rc::new(Vec::new()),
            loader: None,
            // C++ Architecture default: readonlypropagate = false (resetDefaults);
            // `option readonly` flips it before the per-function build_arch_handle.
            readonlypropagate: false,
            // (unlace) No dynamic-relocation const slots until a real ELF load
            // installs them (see `Architecture::dynreloc_const`).
            dynreloc_const: Rc::new(Vec::new()),
            vector_userops: Rc::new(Vec::new()),
            vector_fp: None,
            // (unlace) No executable read-only ranges until a real object load
            // installs them (see `Architecture::litpool_const`).
            litpool_const: Rc::new(Vec::new()),
            // Default volatile ops are non-functional (`getDisplay() != 0`), so the
            // volatile-read op's output is held; matches the unconfigured glb.
            volatile_display_functional: false,
            // C++ Architecture default: struct|array|pointer (resetDefaults).
            split_datatype_config: crate::options::split_datatype::OPTION_STRUCT
                | crate::options::split_datatype::OPTION_ARRAY
                | crate::options::split_datatype::OPTION_POINTER,
            global_query: None,
            remote_scope: None,
            // C++ Architecture default: infer_pointers = true (resetDefaults);
            // a hand-built fixture never exercises constant-pointer recovery, but
            // the real lift+analyze path overwrites this from the real arch.
            infer_pointers: false,
            blob_entries: Rc::default(),
            // No inferable spaces until cacheAddrSpaceProperties runs on the real
            // arch and build_arch_handle shares the result.
            infer_ptr_spaces: Vec::new(),
            // No declared callee prototypes until build_arch_handle snapshots them.
            callee_protos: Rc::new(Vec::new()),
            loader_transfer_sites: Rc::default(),
            loader_mips_imports: Rc::default(),
            nullable_literal_values: Rc::default(),
            // No tracked registers until build_arch_handle snapshots the context DB.
            tracked_sets: unlace_base::partmap::PartMap::default(),
        }
    }

    /// (unlace, Phase 3) The active fallback naming vocabulary (see
    /// [`UnlaceNameStyle`](crate::database::UnlaceNameStyle)): `Ghidra` wins over
    /// `Angr` wins over the upstream `Func` default.
    pub fn unlace_name_style(&self) -> crate::database::UnlaceNameStyle {
        if self.name_style_ghidra {
            crate::database::UnlaceNameStyle::Ghidra
        } else if self.name_style_angr {
            crate::database::UnlaceNameStyle::Angr
        } else {
            crate::database::UnlaceNameStyle::Func
        }
    }

    /// Tracked-register values valid at `addr` (C++ `glb->context->getTrackedSet`).
    /// Reads the [`tracked_sets`](Self::tracked_sets) snapshot taken at
    /// `build_arch_handle`.
    pub fn get_tracked_set(&self, addr: &Address) -> &unlace_sleigh::globalcontext::TrackedSet {
        self.tracked_sets.get_value(addr)
    }

    /// Read a `sz`-byte value out of the program load image at `addr` (C++
    /// `EmulatePcodeOp::getLoadImageValue`, `emulateutil.cc:30`): `loadFill` a
    /// `uintb` worth of bytes, byte-swap to host order if the space endianness
    /// differs from the host, then mask/shift to `sz`.  Drives jump-table LOAD
    /// emulation.  Returns an error if no loader is shared (hand-built fixtures).
    pub fn get_load_image_value(&self, addr: &Address, sz: int4) -> UnlaceResult<u64> {
        use unlace_base::address::{byte_swap, calc_mask};
        use unlace_base::types::HOST_ENDIAN;
        let loader = self
            .loader
            .as_ref()
            .ok_or_else(|| UnlaceError::lowlevel("getLoadImageValue: no load image shared"))?;
        let mut buf = [0u8; 8]; // sizeof(uintb)
        loader.borrow_mut().load_fill(&mut buf, addr)?;
        let big = addr.is_big_endian();
        let mut res = if HOST_ENDIAN == 1 {
            u64::from_be_bytes(buf)
        } else {
            u64::from_le_bytes(buf)
        };
        if (HOST_ENDIAN == 1) != big {
            res = byte_swap(res, 8);
        }
        if big && (sz as usize) < 8 {
            res >>= (8 - sz as u32) * 8;
        } else {
            res &= calc_mask(sz);
        }
        Ok(res)
    }

    /// Borrow the data-type factory (C++ `glb->types`), if shared.
    /// Whether read-only values are treated as constants (C++
    /// `glb->readonlypropagate`).  Gates `ActionVarnodeProps`'s call into
    /// `Funcdata::fillinReadOnly`.
    pub fn readonly_propagate(&self) -> bool {
        self.readonlypropagate
    }

    /// (unlace `dynrelocs`) Whether `offset` lies in a dynamic-relocation slot that
    /// `PT_GNU_RELRO` freezes, so a read-only varnode there may be folded to its
    /// relocated value even with global read-only propagation off. Binary search
    /// over the sorted, disjoint [`Self::dynreloc_const`]; a plain `false` when
    /// that list is empty, which is every non-ELF path.
    pub fn dynreloc_const_contains(&self, offset: u64) -> bool {
        let r = &self.dynreloc_const;
        match r.binary_search_by(|(lo, _)| lo.cmp(&offset)) {
            Ok(_) => true,
            Err(0) => false,
            Err(i) => offset <= r[i - 1].1,
        }
    }

    /// (unlace `litpoolconst`) Whether the `size`-byte read at `offset` lies
    /// entirely inside the image's executable read-only memory, so a read-only
    /// varnode there may be folded to the constant it holds even with global
    /// read-only propagation off. A plain `false` when the range list is empty,
    /// which is every non-object path.
    pub fn litpool_const_contains(&self, offset: u64, size: u32) -> bool {
        (self.pass_hooks.litpoolconst_contains)(&self.litpool_const, offset, size)
    }

    /// Whether the volatile-read op's output must be held (C++
    /// `vr_op->getDisplay() != 0`).  For the default (non-functional) volatile
    /// read this is `true`, so `replaceVolatile` calls `setHoldOutput`.
    pub fn volatile_read_holds_output(&self) -> bool {
        !self.volatile_display_functional
    }

    /// Read `sz` bytes out of the program load image at `addr` into `buf`,
    /// mirroring C++ `glb->loader->loadFill(bytes, sz, addr)`.  Returns an error
    /// (the C++ `DataUnavailError` analogue) when no loader is shared or the
    /// region is unavailable.  Used by [`Funcdata::fillin_read_only`](crate::funcdata::Funcdata::fillin_read_only) to fetch a read-only Varnode's value.
    pub fn loader_fill(&self, buf: &mut [u8], addr: &Address) -> UnlaceResult<()> {
        let loader = self
            .loader
            .as_ref()
            .ok_or_else(|| UnlaceError::lowlevel("loadFill: no load image shared"))?;
        loader.borrow_mut().load_fill(buf, addr)
    }

    #[inline]
    pub fn types(&self) -> Option<&dyn crate::dtype::TypeFactory> {
        self.types
            .as_deref()
            .map(|t| t as &dyn crate::dtype::TypeFactory)
    }

    /// (unlace `dexmodel`, `jvmmodel`) The constant-pool record for `refs` (C++
    /// `glb->cpool->getRecord`).  Only a DEX image or a class file has a pool.
    pub fn cpool_record(&self, refs: &[u64]) -> Option<Rc<crate::cpool::CPoolRecord>> {
        if let Some(jvm) = self.jvm.as_ref() {
            return jvm.record(refs, self.types()?);
        }
        self.dex.as_ref()?.record(refs, self.types()?)
    }

    /// Get the floating-point format for the given size in bytes, or `None` if
    /// the processor has no format of that size (C++
    /// `glb->translate->getFloatFormat`).  Reads the [`floatformats`](Self::floatformats)
    /// table shared in `build_arch_handle`.
    pub fn get_float_format(&self, size: int4) -> Option<&unlace_num::float::FloatFormat> {
        self.floatformats.iter().find(|fmt| fmt.get_size() == size)
    }

    /// Borrow the concrete data-type factory (for the `TypeFactoryImpl`-only
    /// builders, e.g. `down_chain`, the type-propagation engine needs).
    pub fn types_impl(&self) -> Option<&crate::dtype::TypeFactoryImpl> {
        self.types.as_deref()
    }

    /// Clone the shared data-type factory `Rc` (so a caller can hold a type
    /// factory handle across a `&mut Funcdata`/`&mut ScopeLocal` borrow that
    /// would otherwise alias the `&self` arch read).
    #[inline]
    pub fn types_rc(&self) -> Option<Rc<crate::dtype::TypeFactoryImpl>> {
        self.types.clone()
    }

    /// The default prototype model (C++ `glb->defaultfp`), or `None`.
    #[inline]
    pub fn default_fp(&self) -> Option<&Rc<crate::fspec::ProtoModel>> {
        self.defaultfp.as_ref()
    }

    /// The source-declared prototype pieces for the callee whose entry is `addr`
    /// (C++ the callee `Funcdata`'s locked `FuncProto`), or `None` if that callee
    /// had no `parse line extern` declaration.  Read by `ActionDefaultParams::apply`
    /// to copy the locked callee prototype into the call site.  Matched by
    /// `(space_index, offset)` — the ArchContext carries no `Rc<AddrSpace>` identities for
    /// the global scope, only the snapshotted indices.
    /// The prototype MODEL a locked callee signature was declared under — the
    /// model `ActionDefaultParams` seeds the locked pieces under instead of
    /// `defaultfp`.  Two sources: ghidra-mode's host `<prototype model=…>`
    /// (Phase 3), and a standalone declaration that named a calling convention
    /// (`--assert 'prototype f void * __stdcall f(...)'`).  `None` when the
    /// declaration named none, which keeps the default-model seed.
    pub fn callee_proto_model(
        &self,
        addr: &Address,
    ) -> Option<std::rc::Rc<crate::fspec::ProtoModel>> {
        if let Some(remote) = &self.remote_scope {
            return remote.callee_model_at(addr);
        }
        let space_index = addr.get_space()?.get_index();
        let offset = addr.get_offset();
        self.callee_proto_models
            .iter()
            .find(|(sp, off, _)| *sp == space_index && *off == offset)
            .map(|(_, _, m)| std::rc::Rc::clone(m))
            .or_else(|| self.bound_proto_model(addr))
    }

    /// The model-only binding of the function at `addr` (see
    /// [`Self::bound_proto_models`]).
    pub fn bound_proto_model(
        &self,
        addr: &Address,
    ) -> Option<std::rc::Rc<crate::fspec::ProtoModel>> {
        let key = (addr.get_space()?.get_index(), addr.get_offset());
        self.bound_proto_models.get(&key).cloned()
    }

    /// (unlace `libcnames`) The library names the prototype parked on the
    /// callee at `addr` carries, without copying the prototype.
    pub fn callee_library_names(
        &self,
        addr: &Address,
    ) -> Option<&'static crate::fspec::LibraryNames> {
        if self.remote_scope.is_some() {
            return None;
        }
        let space_index = addr.get_space()?.get_index();
        let offset = addr.get_offset();
        self.callee_protos
            .iter()
            .find(|(si, off, _)| *si == space_index && *off == offset)
            .and_then(|(_, _, pieces)| pieces.unlace_library_names)
    }

    pub fn callee_proto_pieces(&self, addr: &Address) -> Option<crate::fspec::PrototypePieces> {
        if let Some(remote) = &self.remote_scope {
            // (unlace, Phase 3) ghidra-mode: the locked callee signatures decoded
            // from getMappedSymbols answers (query-through).
            return remote.callee_pieces_at(addr);
        }
        let space_index = addr.get_space()?.get_index();
        let offset = addr.get_offset();
        self.callee_protos
            .iter()
            .find(|(si, off, _)| *si == space_index && *off == offset)
            .map(|(_, _, pieces)| pieces.clone())
    }

    /// The current-evaluation model (C++ `glb->evalfp_current`), falling back to
    /// `defaultfp` when unset.
    pub fn eval_fp_current(&self) -> Option<&Rc<crate::fspec::ProtoModel>> {
        self.evalfp_current.as_ref().or(self.defaultfp.as_ref())
    }

    /// The called-function evaluation model (C++ `glb->evalfp_called`), falling
    /// back to `defaultfp` when unset (`ActionStackPtrFlow::analyzeExtraPop` reads
    /// `evalfp_called ?: defaultfp`).  The merged arch-handle carries no distinct
    /// `evalfp_called` field; absent that it is the same as `defaultfp`, which is
    /// the C++ fallback the `?:` would take anyway.
    #[inline]
    pub fn eval_fp_called(&self) -> Option<&Rc<crate::fspec::ProtoModel>> {
        self.defaultfp.as_ref()
    }

    /// Resolve an op-code to its emulation [`OpBehavior`](unlace_num::opbehavior::OpBehavior),
    /// or `None` (C++ `glb->inst[opc]->getBehavior()`).
    ///
    /// Drives `PcodeOp::collapse` (`RuleCollapseConstants`).  `None` for
    /// hand-built fixtures (empty table) or op-codes with no registered behavior.
    #[inline]
    pub fn op_behavior(
        &self,
        opc: unlace_num::opcodes::OpCode,
    ) -> Option<&Rc<dyn unlace_num::opbehavior::OpBehavior>> {
        self.opbehaviors.get(opc as usize).and_then(|o| o.as_ref())
    }

    /// Borrow the address-space manager (C++ `glb` viewed as an
    /// `AddrSpaceManager`).
    #[inline]
    pub fn manage(&self) -> &AddrSpaceManager {
        &self.manage
    }

    /// Query the global symbol table for the Varnode boolean properties of a
    /// storage range (C++ `localmap->queryProperties`'s reach into the global
    /// scope, `database.cc:1268-1286`).  Returns `0` when no global symbol table
    /// is shared (hand-built fixtures) or the range carries no global property.
    ///
    /// This is the global-scope half of `Funcdata::setVarnodeProperties`: a
    /// global-mapped Varnode picks up `mapped | addrtied | persist` (and any
    /// `readonly`/`volatile` on the range) here, so `ActionDeadCode` keeps its
    /// store alive.
    #[inline]
    pub fn query_global_properties(&self, addr: &Address, size: int4, usepoint: &Address) -> uint4 {
        match self.effective_global_query(addr) {
            Some(gq) => gq.query_properties(addr, size, usepoint),
            None => 0,
        }
    }

    /// Memory-range properties without a covering symbol's inherited flags.
    #[inline]
    #[doc(hidden)]
    pub fn query_global_range_properties(&self, addr: &Address) -> uint4 {
        self.effective_global_query(addr)
            .map_or(0, |gq| gq.get_property(addr))
    }

    /// The global-scope snapshot local-name allocation checks identifiers
    /// against. In remote mode this is the merged cache accumulated while
    /// resolving the function; standalone mode reads the frozen per-function
    /// Database snapshot.
    #[inline]
    pub fn global_name_scope(&self) -> Option<Rc<GlobalQuery>> {
        self.remote_scope
            .as_ref()
            .map(|remote| remote.snapshot())
            .or_else(|| self.global_query.clone())
    }

    /// The global-scope read source for one address: the ghidra-mode
    /// [`RemoteScope`](crate::remote_provider::RemoteScope) (query-through +
    /// merged snapshot) when installed, else the frozen per-function
    /// [`GlobalQuery`] snapshot.  Every global read below resolves through
    /// this, so the remote seam is exactly the C++ `ScopeGhidra` overriding of
    /// the base `Scope` lookups.
    fn effective_global_query(&self, addr: &Address) -> Option<Rc<GlobalQuery>> {
        if let Some(remote) = &self.remote_scope {
            return Some(remote.query_snapshot(addr));
        }
        self.global_query.clone()
    }

    /// Resolve the global Symbol covering a storage range for the naming pass (C++
    /// `Funcdata::linkSymbol`'s reach into the global scope; see
    /// [`GlobalQuery::name_for_varnode`]).  Returns `(display_name, symbol_offset,
    /// symbol_type)`, or `None` when no global symbol table is shared (hand-built
    /// fixtures) or no global Symbol covers the range.
    pub fn name_for_global_varnode(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<(String, int4, Option<std::rc::Rc<crate::dtype::Datatype>>)> {
        self.effective_global_query(addr)
            .and_then(|gq| gq.name_for_varnode(addr, size, usepoint))
    }

    /// The first offset and size of the smallest global Symbol whose storage
    /// holds `addr`, if any.
    #[doc(hidden)]
    pub fn global_symbol_extent(&self, addr: &Address) -> Option<(u64, int4)> {
        self.effective_global_query(addr).and_then(|gq| {
            gq.find_container_entry(addr, 1, &Address::default())
                .map(|e| (e.first, e.size))
        })
    }

    /// The first offset, size and name of the smallest global data Symbol
    /// whose storage holds `addr`, if any.
    #[doc(hidden)]
    pub fn global_data_symbol_at(&self, addr: &Address) -> Option<(u64, int4, String)> {
        let gq = self.effective_global_query(addr)?;
        let e = gq.find_container_entry(addr, 1, &Address::default())?;
        (!e.is_function).then(|| (e.first, e.size, e.symbol_name.clone()))
    }

    /// Like [`name_for_global_varnode`](Self::name_for_global_varnode) but also
    /// returns the owning Symbol's scope-name chain (innermost first, global
    /// excluded) for namespace-qualified rendering (`PrintC::pushSymbolScope`).
    pub fn name_for_global_varnode_scoped(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<(
        String,
        int4,
        Option<std::rc::Rc<crate::dtype::Datatype>>,
        Vec<String>,
    )> {
        self.effective_global_query(addr)
            .and_then(|gq| gq.name_for_varnode_scoped(addr, size, usepoint))
    }

    /// The type-locked covering global Symbol's `(symbol_type, in_symbol_offset)`
    /// for a Varnode storage range — the geometry C++ `SymbolEntry::getSizedType`
    /// (`database.cc:151`) feeds `getExactPiece`.  Drives the type-force half of
    /// `Funcdata::setVarnodeProperties` -> `Varnode::setSymbolProperties` ->
    /// `entry->updateType` (varnode.cc:429, database.cc:136): a global-mapped store
    /// to a type-locked Symbol (`map addr r0x301018 octint4 globaloct`) picks up
    /// that Symbol's data-type, so `ActionInferTypes` seeds the store + its COPY
    /// input from it and the forced display format (`oct`) reaches the constant.
    /// `None` when no global symbol table is shared or the covering Symbol is not
    /// type-locked.
    pub fn sized_type_for_global_varnode(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<(std::rc::Rc<crate::dtype::Datatype>, int4)> {
        self.effective_global_query(addr)
            .and_then(|gq| gq.sized_type_geometry(addr, size, usepoint))
    }

    /// Get the minimum laned-register size (C++
    /// `Architecture::getMinimumLanedRegisterSize`).
    pub fn get_minimum_laned_register_size(&self) -> int4 {
        self.min_laned_register_size
    }

    /// Look up the laned-register record for a storage location (C++
    /// `Architecture::getLanedRegister`, `architecture.cc:291`).
    ///
    /// As in the C++, the record is associated only with the *size* of the
    /// storage, not its address; `loc` is accepted to match the signature but is
    /// unused.  The records are sorted ascending by whole size, so this is a
    /// faithful transcription of the C++ binary search; returns `None` for the
    /// C++ `(const LanedRegister *)0` when no record matches the size.
    pub fn get_laned_register(
        &self,
        _loc: &Address,
        size: int4,
    ) -> Option<&crate::transform::LanedRegister> {
        let mut min: int4 = 0;
        let mut max: int4 = self.lanerecords.len() as int4 - 1;
        while min <= max {
            let mid = (min + max) / 2;
            let sz = self.lanerecords[mid as usize].get_whole_size();
            if sz < size {
                min = mid + 1;
            } else if size < sz {
                max = mid - 1;
            } else {
                return Some(&self.lanerecords[mid as usize]);
            }
        }
        None
    }

    /// Create a constant Varnode storage address in the constant space
    /// (C++ `AddrSpaceManager::getConstant`).
    pub fn get_constant(&self, val: u64) -> Address {
        self.manage.get_constant(val)
    }

    /// Infer pointers from likely-address constants (C++ `glb->infer_pointers`).
    /// Read by `ActionConstantPtr::isPointer`/`checkCopy`.
    pub fn infer_pointers(&self) -> bool {
        self.infer_pointers
    }

    /// The ordered inferable-pointer spaces (C++ `glb->inferPtrSpaces`), iterated
    /// by `ActionConstantPtr::selectInferSpace`.
    pub fn infer_ptr_spaces(&self) -> &[Rc<AddrSpace>] {
        &self.infer_ptr_spaces
    }

    /// Interpret a constant as a pointer into `spc` (C++ `glb->resolveConstant`,
    /// `AddrSpaceManager::resolveConstant`, `space.cc`).  A thin wrapper over the
    /// shared manager: for an un-segmented space it is just
    /// `Address(spc, byteToAddress(wrap(val)))` with `fullEncoding = val`; a
    /// near-pointer space routes through its registered `SegmentedResolver`.
    pub fn resolve_constant(
        &self,
        spc: &Rc<AddrSpace>,
        val: u64,
        sz: int4,
        point: &Address,
        full_encoding: &mut u64,
    ) -> UnlaceResult<Address> {
        if let Some(seg) = self.get_segment_op(spc.get_index()) {
            return Ok(seg.resolve(val, sz, point, full_encoding, |mem, at| {
                self.get_tracked_value(mem, at)
            }));
        }
        self.manage
            .resolve_constant(spc, val, sz, point, full_encoding)
    }

    /// The tracked value of `mem` at `point` (C++ `glb->context->getTrackedValue`).
    pub fn get_tracked_value(
        &self,
        mem: &unlace_num::pcoderaw::VarnodeData,
        point: &Address,
    ) -> u64 {
        unlace_sleigh::globalcontext::tracked_value(self.get_tracked_set(point), mem)
    }

    /// C++ `data.getScopeLocal()->getParent()->queryContainer(addr,size,usepoint)`
    /// restricted to the global scope (the merged unlace `glb` carries the global
    /// scope as the read-only [`GlobalQuery`] snapshot, not a live `Database`
    /// parent chain).  Returns the smallest covering Symbol's
    /// [`GlobalContainer`] (its data-type, entry address, and `getAllFlags()`), or
    /// `None` when no global symbol table is shared (hand-built fixtures) or no
    /// global Symbol covers `[addr, addr+size)`.
    ///
    /// This is the routing wire `ActionConstantPtr::isPointer` (coreaction.cc:1167)
    /// needs: the entry's `getSymbol()->getType()` (`symbol_type`), `getAddr()`
    /// (`entry_addr`), and — for `spacebase_constant`'s `sym->isTypeLocked()` —
    /// the `typelock` bit in `all_flags`.
    pub fn query_container_global(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<GlobalContainer> {
        let gq = self.effective_global_query(addr)?;
        let e = gq.find_container_entry(addr, size, usepoint)?;
        let space = addr.get_space()?;
        Some(GlobalContainer {
            symbol_type: e.symbol_type.clone(),
            entry_addr: Address::new(Rc::clone(space), e.first),
            all_flags: e.all_flags,
            symbol_offset: e.symbol_offset,
            symbol_id: e.symbol_id,
        })
    }

    /// C++ `data.getScopeLocal()->getParent()->queryFunction(entry)->getFuncProto()`
    /// restricted to the global-scope snapshot: resolve the callee's recovered
    /// prototype for a direct-call entry address.
    ///
    /// The frozen [`GlobalQuery`] carries every global SymbolEntry's `symbol_type`;
    /// for a FunctionSymbol that is a `TypeCode` whose `getPrototype()` returns the
    /// `FuncProto` the callee body would expose (a declared callee parks the locked
    /// signature there — `TypeFactory::getTypeCode(PrototypePieces)`).  We match the
    /// entry whose storage *starts* at `entry` (an exact function-entry hit) and
    /// borrow its code prototype.  Generic over the callee signature: keyed only by
    /// address, no name/value keying.  `None` when no global symbol table is shared
    /// (hand-built fixtures), no entry starts at `entry`, or the entry's type is not
    /// a code type with a prototype (an unknown callee).
    pub fn query_callee_proto(
        &self,
        entry: &Address,
    ) -> Option<std::rc::Rc<crate::fspec::FuncProto>> {
        let gq = self.effective_global_query(entry)?;
        let space_index = entry.get_space()?.get_index();
        let start = entry.get_offset();
        for e in gq.entries_starting_at(space_index, start) {
            if let Some(ct) = &e.symbol_type
                && let Some(proto) = ct.get_code_prototype() {
                    return Some(std::rc::Rc::clone(proto));
                }
        }
        None
    }

    /// The extrapop parked on the FunctionSymbol starting at `entry` (C++
    /// `queryFunction(entry)->getFuncProto().getExtraPop()` after
    /// `option extrapop <n> <name>`), or `None` when unset.
    pub fn query_function_extra_pop(&self, entry: &Address) -> Option<int4> {
        let gq = self
            .effective_global_query(entry)
            .filter(|gq| gq.has_extra_pop)?;
        let space_index = entry.get_space()?.get_index();
        
        gq
            .entries_starting_at(space_index, entry.get_offset())
            .find(|e| e.is_function)
            .and_then(|e| e.func_extra_pop)
    }

    /// Return the callable type attached to the exact global slot loaded as an
    /// indirect-call target.  See [`GlobalQuery::indirect_slot_type`].
    #[doc(hidden)]
    pub fn query_indirect_slot_type(
        &self,
        addr: &Address,
        size: int4,
        usepoint: &Address,
    ) -> Option<IndirectSlotType> {
        self.effective_global_query(addr)?
            .indirect_slot_type(addr, size, usepoint)
    }

    /// (unlace `switchrunon`) A lookup of the known function entry at or before
    /// an offset in `addr`'s space, over one global-scope snapshot and the
    /// entries `lazyfuncs` left as names.
    pub fn function_owner(&self, addr: &Address) -> Option<impl Fn(u64) -> Option<u64> + use<>> {
        let query = self.effective_global_query(addr)?;
        let space_index = addr.get_space()?.get_index();
        let parked = Rc::clone(&self.lazy_entry_starts);
        Some(move |offset| {
            let named = query.function_entry_at_or_before(space_index, offset);
            let after = parked.partition_point(|&start| start <= offset);
            named.max(after.checked_sub(1).map(|at| parked[at]))
        })
    }

    /// (unlace `switchextent`) The first known function entry above `addr`'s
    /// offset in its space, over the same functions [`Self::function_owner`]
    /// sees.
    pub fn function_entry_after(&self, addr: &Address) -> Option<u64> {
        let query = self.effective_global_query(addr)?;
        let space_index = addr.get_space()?.get_index();
        let offset = addr.get_offset();
        let named = query.function_entry_after(space_index, offset);
        let at = self
            .lazy_entry_starts
            .partition_point(|&start| start <= offset);
        let parked = self.lazy_entry_starts.get(at).copied();
        match (named, parked) {
            (Some(a), Some(b)) => Some(a.min(b)),
            (a, b) => a.or(b),
        }
    }

    /// (unlace `switchextent`) The name of the function symbol that starts at
    /// `entry`, without building its prototype as [`Self::query_function`] does.
    pub fn function_name_at(&self, entry: &Address) -> Option<String> {
        let query = self.effective_global_query(entry)?;
        let space_index = entry.get_space()?.get_index();
        
        query
            .entries_starting_at(space_index, entry.get_offset())
            .find(|e| e.is_function)
            .map(|e| e.symbol_name.clone())
    }

    /// (unlace `switchrunon`) Whether `b` lies in the load-image section that
    /// holds `a`; true when no section holds `a` or the image reports none.
    pub fn in_section_of(&self, a: &Address, b: &Address) -> bool {
        let Some(loader) = self.loader.as_ref() else {
            return true;
        };
        let Ok(loader) = loader.try_borrow() else {
            return true;
        };
        let holds = |section: &unlace_sleigh::loadimage::LoadImageSection, addr: &Address| {
            addr.get_offset().wrapping_sub(section.address.get_offset()) < section.size
        };
        loader.open_section_info();
        let mut verdict = true;
        loop {
            let mut section = unlace_sleigh::loadimage::LoadImageSection::default();
            let more = loader.get_next_section(&mut section);
            if holds(&section, a) {
                verdict = holds(&section, b);
                break;
            }
            if !more {
                break;
            }
        }
        loader.close_section_info();
        verdict
    }

    /// C++ `Scope::queryFunction(addr)` (`database.cc:1292`) restricted to the
    /// global-scope snapshot: resolve an address to the FunctionSymbol that
    /// *starts* there and report its display name, entry address, and recovered
    /// prototype.  A FunctionSymbol's storage is a `TYPE_CODE` Datatype whose
    /// `getPrototype()` is the callee `FuncProto` (the `Funcdata::getFuncProto()`
    /// the C++ `queryFunction` returns a `Funcdata *` for).  `None` when no global
    /// symbol table is shared (hand-built fixtures), no entry starts at `entry`, or
    /// the entry is not a code symbol with a prototype.
    ///
    /// This is the `ActionDeindirect::apply` lever: a CALLIND whose target is the
    /// constant `entry` deindirects to a direct CALL to this function.  The
    /// prototype carries the extrapop `option extrapop <n> <name>` parked on the
    /// symbol, as the C++ callee `getFuncProto()` does.
    pub fn query_function(
        &self,
        entry: &Address,
    ) -> Option<(String, Address, std::rc::Rc<crate::fspec::FuncProto>)> {
        let (name, addr, proto) = self.query_function_symbol(entry)?;
        let Some(expop) = self.query_function_extra_pop(&addr) else {
            return Some((name, addr, proto));
        };
        let mut popped = crate::fspec::FuncProto::new();
        popped.copy(&proto);
        popped.set_extra_pop(expop);
        Some((name, addr, std::rc::Rc::new(popped)))
    }

    fn query_function_symbol(
        &self,
        entry: &Address,
    ) -> Option<(String, Address, std::rc::Rc<crate::fspec::FuncProto>)> {
        let gq = self.effective_global_query(entry)?;
        let space = entry.get_space()?;
        let space_index = space.get_index();
        let start = entry.get_offset();
        for e in gq.entries_starting_at(space_index, start) {
            // C++ `Scope::queryFunction(addr)` returns the `FunctionSymbol`'s
            // `Funcdata`, whose `getFuncProto()` is its recovered prototype — or,
            // for a bare loader symbol, the default (void, unlocked) proto.  A
            // FunctionSymbol carries a generic code data-type that usually holds NO
            // recovered `FuncProto`, so resolve on the function-ness of the symbol,
            // not on a code prototype being present.
            if !e.is_function {
                continue;
            }
            let entry_addr = Address::new(std::rc::Rc::clone(space), e.first);
            if let Some(mut proto) = (self.pass_hooks.qualifiedcall_prototype)(self, &entry_addr) {
                if e.func_inject_id >= 0 {
                    proto.set_inject_id(e.func_inject_id);
                }
                if e.func_no_return {
                    proto.set_no_return(true);
                }
                return Some((e.symbol_name.clone(), entry_addr, std::rc::Rc::new(proto)));
            }
            // Prefer a recovered code prototype when the type carries one (a
            // declared callee, e.g. `parse line extern void f(...)`); otherwise
            // hand back the default void proto the C++ funcsym's `getFuncProto`
            // would return for an undeclared loader symbol.
            if let Some(ct) = &e.symbol_type
                && ct.get_metatype() == crate::dtype::type_metatype::TYPE_CODE
                    && let Some(proto) = ct.get_code_prototype() {
                        // A declared callee already carries its model/params; but the
                        // parked inject id (call-fixup) lives on the FunctionSymbol,
                        // not the type — re-apply it so `deindirect` sees an inline
                        // (inject-bearing) callee even for a typed prototype.
                        if e.func_inject_id >= 0 && proto.get_inject_id() < 0 {
                            let mut p = crate::fspec::FuncProto::new();
                            p.copy(proto);
                            p.set_inject_id(e.func_inject_id);
                            if e.func_no_return {
                                p.set_no_return(true);
                            }
                            return Some((e.symbol_name.clone(), entry_addr, std::rc::Rc::new(p)));
                        }
                        if e.func_no_return && !proto.is_no_return() {
                            let mut p = crate::fspec::FuncProto::new();
                            p.copy(proto);
                            p.set_no_return(true);
                            return Some((e.symbol_name.clone(), entry_addr, std::rc::Rc::new(p)));
                        }
                        return Some((
                            e.symbol_name.clone(),
                            entry_addr,
                            std::rc::Rc::clone(proto),
                        ));
                    }
            // Default (void, unlocked) proto on the default model — the shape the
            // C++ funcsym's `getFuncProto` carries after `setInternal(defaultfp,
            // void)`.  A model IS required: the deindirect proto-merge compares
            // models (`FuncProto::is_compatible` dereferences `op2->model()`).  If
            // the architecture has not shared its default model / type factory
            // (hand-built fixtures), fall back to a bare proto.
            let mut proto = crate::fspec::FuncProto::new();
            if let (Some(model), Some(types)) = (self.default_fp(), self.types())
                && let Ok(void) = types.get_type_void() {
                    proto.set_internal(std::rc::Rc::clone(model), void);
                }
            // C++ `IfcFixupApply`'s `setInjectId` also marks the funcsym proto
            // inline; carry that so `deindirect`'s `isInline()` test triggers the
            // restart that re-flows and injects the call-fixup at the now-direct
            // call site.
            if e.func_inject_id >= 0 {
                proto.set_inject_id(e.func_inject_id);
            }
            // (unlace) The callee's no-return flow effect: `deindirect` skips its
            // prototype merge for a no-return callee and schedules the restart
            // whose re-flow truncates at the call.
            if e.func_no_return {
                proto.set_no_return(true);
            }
            return Some((e.symbol_name.clone(), entry_addr, std::rc::Rc::new(proto)));
        }
        None
    }
}

/// The fields of a global [`SymbolEntry`](crate::database::SymbolEntry) that C++ `ActionConstantPtr::isPointer` /
/// `Funcdata::spacebaseConstant` read off the result of `queryContainer`
/// (`coreaction.cc:1167-1180`, `funcdata.cc:411-416`).  Flattened from a
/// [`GlobalEntry`] by [`ArchContext::query_container_global`] because the merged
/// `glb` holds the frozen global scope as a snapshot, not the live `Scope`.
#[derive(Debug, Clone)]
pub struct GlobalContainer {
    /// `entry->getSymbol()->getType()` — the covering Symbol's declared data-type
    /// (e.g. the `int4[3][5]` of a `map addr r... int4 myarray[3][5]`).  `None` for
    /// an entry whose snapshot carried no type (degrade as the C++ never would).
    pub symbol_type: Option<std::rc::Rc<crate::dtype::Datatype>>,
    /// `entry->getAddr()` — the entry's starting address (`Address(space, first)`),
    /// for the `needexacthit && entry->getAddr() != rampoint` exact-hit test.
    pub entry_addr: Address,
    /// `entry->getAllFlags()` — used for the `typelock` bit
    /// (`sym->isTypeLocked()`).
    pub all_flags: uint4,
    /// `entry->getOffset()` — the byte offset of this storage piece within the
    /// owning Symbol, for the `TypeSpacebase::getSubType` residual-offset
    /// computation (`funcdata.cc` / `type.cc:3431`).
    pub symbol_offset: int4,
    /// `entry->getSymbol()->getId()` — see [`GlobalEntry::symbol_id`].
    pub symbol_id: u64,
}

impl GlobalContainer {
    /// `entry->getSymbol()->isTypeLocked()` (C++ `funcdata.cc:414`): the covering
    /// Symbol's type is locked.
    pub fn is_type_locked(&self) -> bool {
        (self.all_flags & crate::varnode::varnode_flags::typelock) != 0
    }
}

/// Legacy scope marker. A function's live local map uses [`crate::varmap::ScopeLocal`].
#[derive(Debug, Clone, Default)]
pub struct Scope;

/// Legacy prototype marker. A function's live prototype uses [`crate::fspec::FuncProto`].
#[derive(Debug, Clone, Default)]
pub struct FuncProto;

impl FuncProto {
    /// The marker has no locked output storage.
    pub fn is_output_locked(&self) -> bool {
        false
    }

    /// The marker has no known consumed return bytes.
    pub fn get_return_bytes_consumed(&self) -> i32 {
        0
    }
}

// ===========================================================================
// DatabaseArch / TranslateAccess / TypeFactoryAccess on the ArchContext.
// ===========================================================================
//
// Shared architecture services used by the symbol database.

impl crate::database::TranslateAccess for ArchContext {
    /// C++ `Translate::getRegisterName(spc,off,sz)` — forward to the engine's
    /// register lookup installed on the shared `AddrSpaceManager`.
    fn get_register_name(&self, space: &Rc<AddrSpace>, off: u64, size: int4) -> String {
        match self.manage.register_lookup() {
            Some(rl) => rl.get_register_name(space, off, size),
            None => String::new(),
        }
    }
}

impl crate::database::TypeFactoryAccess for ArchContext {
    /// C++ `TypeFactory::getBase(size,metatype)` — forward to the shared
    /// `TypeFactoryImpl`, falling back to a bare placeholder when no factory is
    /// shared (hand-built fixtures) or the lookup errs.
    fn get_base(
        &self,
        size: int4,
        meta: crate::dtype::type_metatype,
    ) -> Rc<crate::dtype::Datatype> {
        use crate::dtype::TypeFactory;
        match self.types.as_deref() {
            Some(tf) => tf
                .get_base(size, meta)
                .unwrap_or_else(|_| Rc::new(crate::dtype::Datatype::new(size, meta))),
            None => Rc::new(crate::dtype::Datatype::new(size, meta)),
        }
    }

    /// C++ `TypeFactory::getTypeCode()` — the "code" placeholder for function
    /// symbols, forwarded to the shared factory with a placeholder fallback.
    fn get_type_code(&self) -> Rc<crate::dtype::Datatype> {
        use crate::dtype::TypeFactory;
        match self.types.as_deref() {
            Some(tf) => tf.get_type_code().unwrap_or_else(|_| {
                Rc::new(crate::dtype::Datatype::new(
                    1,
                    crate::dtype::type_metatype::TYPE_CODE,
                ))
            }),
            None => Rc::new(crate::dtype::Datatype::new(
                1,
                crate::dtype::type_metatype::TYPE_CODE,
            )),
        }
    }
}

impl crate::database::DatabaseArch for ArchContext {
    fn num_spaces(&self) -> int4 {
        self.manage.num_spaces()
    }
    fn types(&self) -> &dyn crate::database::TypeFactoryAccess {
        self
    }
    fn translate(&self) -> &dyn crate::database::TranslateAccess {
        self
    }
    fn min_funcsymbol_size(&self) -> int4 {
        // The ArchContext carries no `min_funcsymbol_size`; the symbol
        // database's only use of it is `FunctionSymbol` mapping (not the naming
        // path), and the engine default is 1.
        1
    }
    fn name_style_angr(&self) -> bool {
        self.name_style_angr
    }
    /// C++ `Datatype::printNameBase` (`type.hh:286`): the first char of the type
    /// name (the `iVar`/`uVar`/`fVar`/`pVar` prefix), empty for a nameless type.
    fn type_name_base(&self, dt: &crate::dtype::Datatype) -> String {
        match dt.get_name().chars().next() {
            Some(c) => c.to_string(),
            None => String::new(),
        }
    }
}

/// (unlace `syscallregs`) The processor families whose system-call user-op the pass models.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SyscallFamily {
    Arm,
    AArch64,
    RiscV,
    Mips,
    PowerPc,
}

impl SyscallFamily {
    /// The family a language id names, from its processor field.
    pub fn from_archid(archid: &str) -> Option<Self> {
        match archid.split(':').next()? {
            "ARM" => Some(SyscallFamily::Arm),
            "AARCH64" => Some(SyscallFamily::AArch64),
            "RISCV" => Some(SyscallFamily::RiscV),
            "MIPS" => Some(SyscallFamily::Mips),
            "PowerPC" => Some(SyscallFamily::PowerPc),
            _ => None,
        }
    }

    /// The user-op the family's system-call constructor emits.
    pub fn userop(self) -> &'static str {
        match self {
            SyscallFamily::Arm => "software_interrupt",
            SyscallFamily::AArch64 => "CallSupervisor",
            SyscallFamily::RiscV => "ecall",
            SyscallFamily::Mips | SyscallFamily::PowerPc => "syscall",
        }
    }

    /// The register the kernel returns its result in.
    pub fn result(self) -> &'static str {
        match self {
            SyscallFamily::Arm => "r0",
            SyscallFamily::AArch64 => "x0",
            SyscallFamily::RiscV => "a0",
            SyscallFamily::Mips => "v0",
            SyscallFamily::PowerPc => "r3",
        }
    }

    /// The register the kernel flags a failure in besides the result: `a3` is 0
    /// or 1 on MIPS, and the summary-overflow bit of `cr0` is set on PowerPC.
    pub fn error_flag(self) -> Option<&'static str> {
        match self {
            SyscallFamily::Mips => Some("a3"),
            SyscallFamily::PowerPc => Some("cr0"),
            _ => None,
        }
    }

    /// The registers the call may read, number register first. `wide` selects
    /// the 64-bit MIPS ABIs, whose fifth and sixth arguments are `t0`/`t1`.
    pub fn inputs(self, wide: bool) -> &'static [&'static str] {
        match self {
            SyscallFamily::Arm => &["r7", "r0", "r1", "r2", "r3", "r4", "r5", "r6"],
            SyscallFamily::AArch64 => &["x8", "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7"],
            SyscallFamily::RiscV => &["a7", "a0", "a1", "a2", "a3", "a4", "a5", "a6"],
            SyscallFamily::Mips if wide => &["v0", "a0", "a1", "a2", "a3", "t0", "t1"],
            SyscallFamily::Mips => &["v0", "a0", "a1", "a2", "a3"],
            SyscallFamily::PowerPc => &["r0", "r3", "r4", "r5", "r6", "r7", "r8"],
        }
    }
}

/// (unlace `narrowext`) The widening an image's arguments and return values follow, if known.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct NarrowExtRules {
    pub input: Option<crate::fspec::Widen>,
    pub output: Option<crate::fspec::Widen>,
}

/// Shared per-function configuration and services (`Funcdata::glb`).
pub type ArchHandle = Rc<ArchContext>;
