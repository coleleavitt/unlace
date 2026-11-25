//! (unlace `structsynth`) The program-wide layout ledger: which `struct_N` a
//! freshly measured layout should be, given the ones already minted.
//!
//! # The gap
//!
//! Two functions that read the same object rarely read all of it. `ls`'s two
//! `fileinfo` comparators are the same record twice: `sub_82b0` claims
//! `{0: char *, 0x48: long}` and `sub_a660` claims those two plus
//! `{0xa8: int, 0xac: uint}`. Comparing layouts for equality -- which is all the
//! first version of the pass did -- gives them a name each, and the reader has
//! two names for one type. With the rule below, `fmt`/`ls`/`sort`/`du`/`find`/`tar`
//! at O0 and O2 name 471 records where equality named 515.
//!
//! # The rule
//!
//! A layout `L` is SUBSUMED by a minted structure `S` when every field `L`
//! claims exists in `S` at the same offset, at the same width and with the same
//! type, and `S` is at least as large. `L` then reuses `S`: the larger record is
//! the better answer for both readers, and every offset `L` measured still lands
//! on the member it measured. Agreement is exact -- a field one reader could not
//! type is not a wildcard the other may fill in -- because a wildcard unifies
//! records that merely share a shape.
//!
//! Containment alone is not enough, because it stops being evidence once the
//! container dwarfs what was measured, or once what was measured is too
//! generic to name a record. So a container that says strictly more than the
//! reader measured must also claim at most [`MAX_CLAIM_GROWTH`] times as many
//! fields and be at most [`MAX_SIZE_GROWTH`] times as large, and the reader must
//! claim at least [`MIN_SHARED_CLAIMS`] fields of which one is a typed pointer,
//! or at least [`MIN_UNTYPED_CLAIMS`] without one: answering a reader that
//! measured two words of a `hash_entry` with a 200-byte record declares 174
//! bytes of members nothing measured, and two integer words are how
//! `struct stat`, gnulib's `cycle_check_state` and a list node all begin. The
//! reader is then never declared to have more than twice as many fields as it
//! measured. Two layouts of exactly the same shape always share a name, whatever
//! the bounds say.
//!
//! A pointer is evidence only through its pointee. `code *`, `void *` and
//! `undefined8 *` say nothing about which record holds them, and a layout whose
//! every claim past offset 0 is such a pointer is a table of slots: an
//! interface, an ops vector, a vtable. Distinct tables differ only in how many
//! slots they have, so every table reader is answered by its own shape. Without
//! that, `rsyslogd`'s seven `*_if_s` interface records, 80 to 136 bytes each, all
//! took the 144-byte layout of `statsobj_if_s`.
//!
//! A reader with no typed pointer claim is answered only by a structure of its
//! own size that claims nothing past the reader's last field. What it measured
//! says nothing about what follows its last field, and records that begin alike
//! part ways exactly there: every netlink reader in `ip` measures the same
//! `nlmsghdr` words ahead of a payload of its own, dpkg's 24-byte `pkg_queue`
//! begins the way a 40-byte command record does, and it ends in the padding
//! where the 24-byte `pkg_spec` keeps two flag bytes. A structure of the same
//! size can still fill in the holes between the fields it measured.
//!
//! No structure answers with a member inside the alignment padding that a
//! reader's claims leave between two of them. Records part ways in their first
//! words too: every `bash` command record begins with an `int flags`, `if_com`
//! then has a pointer at 8, and `for_com` puts its `int line` at 4, in exactly
//! the bytes `if_com` pads. A hole wider than its padding is still room for a
//! member the reader skipped.
//!
//! When the containment runs the other way -- the new layout strictly contains
//! one already minted -- the minted one cannot be widened, because
//! `TypeFactory::find_add` refuses a second, different definition of a name it
//! already holds and a completed structure is shared by every function that
//! took a pointer to it. So the new layout is minted under a fresh name and the
//! older one is SUPERSEDED: still defined, and handed out again only to a
//! layout no live structure answers for.
//!
//! Supersession is not stored anywhere. It is a property of the minted set --
//! `S` is superseded exactly when some other minted structure strictly subsumes
//! it -- so it is read from the factory on every lookup, for the entries that
//! answer, and cannot drift out of step with the types that are actually
//! defined.
//!
//! # Unclaimed bytes
//!
//! A reader can dereference bytes it claims no field for: the prune drops an
//! unaligned word, a 16-byte copy or a width the header cannot spell, and its
//! address then prints through whatever member holds its first byte. The
//! engine decides whether a load may print after a store by comparing the two
//! addresses, and it takes the same base plus two different constants to be two
//! different objects without asking how wide either access is. A container
//! that puts a member boundary inside such an access can therefore move a load
//! past a store that overwrites part of it. `rd_c8` loads four bytes at 7 and
//! stores one at 8. Its own layout spells the load `*(uint4 *)&a0->field_0x4[3]`,
//! which the comparison cannot tell apart from `a0->field_0x8`, so the load
//! stays first. Its writer's structure has a `char` at 7, and the same load
//! became `*(uint4 *)&a0->field_0x7`, printed after the store. So a structure
//! answers for a reader only if it lays exactly the reader's own members --
//! offsets, widths, types, filler -- over every byte range the reader accessed
//! without claiming. Every unclaimed access is then spelled as it is under the
//! reader's own layout. A reader turned away this way mints its own shape even
//! when a live structure contains it, so that entry can be superseded from the
//! moment it exists.
//!
//! # Records that point at themselves
//!
//! A field `structsynth nest` found to hold the record it belongs to is spelled
//! [`SELF_KEY`] rather than by the pointer's own type: the pointer names the
//! structure it sits in, whose number a layout measured in another function
//! cannot know in advance, and two self-pointing layouts of the same shape are
//! the same record whatever they are called. A structure holding such a field is
//! minted around its own incomplete shell -- `get_type_struct`, a pointer to the
//! shell, then the members -- since a completed structure is a fresh `Rc` and
//! cannot hold a pointer to itself. The pointer keeps naming the shell, which is
//! the model a DWARF `struct node { struct node *next; }` already lives with.
//!
//! # Order
//!
//! `decompile-all` visits functions in address order, so the ledger's shape
//! depends on that order: the smaller layout at the lower address is minted
//! first and superseded when the larger one arrives, while the reverse order
//! mints only the larger. [`superseded_names`] is what lets a whole-program
//! driver close that gap by re-deciding the functions that named a superseded
//! structure.
//!
//! The bounds are not transitive, so the order can still show through. `fb`
//! claims four fields, `fa` two of them and `fc` eight that include `fb`'s four.
//! In address order `fb` mints, `fa` reuses it and `fc` supersedes it; decided
//! again, `fb` moves to `fc`'s structure, but that structure is out of `fa`'s
//! reach, so `fa` keeps the superseded one. In the reverse order `fa` mints its
//! own shape. Either way the record has two names, and which one `fa` gets
//! depends on the order.

use std::rc::Rc;

use unlace_base::types::int4;

use crate::dtype::{Datatype, TypeFactory, TypeField, type_metatype};

/// The highest `struct_N` the ledger will probe.
#[doc(hidden)]
pub const MAX_LEDGER_SLOTS: u32 = 1024;

/// How far a pointer chain is followed when a field type is spelled.
const MAX_POINTEE_DEPTH: u32 = 3;

/// The prefix every synthesized member carries, and the guard that keeps a
/// same-named type from somewhere else (DWARF, a parsed header) out of the
/// ledger.
const FIELD_PREFIX: &str = "field_0x";

/// How a field that points at its own structure is spelled in a [`FieldKey`].
#[doc(hidden)]
pub const SELF_KEY: &str = "SELF";

/// How many times as many fields a container may claim as the layout it answers.
///
/// The reader measured at least half of what it is then declared to have. This
/// is the bound that does the work: `ls` O0 `sub_afe2` measured two fields of an
/// 80-byte layout and containment alone answered it with a sixteen-field
/// structure only 1.5x the size.
const MAX_CLAIM_GROWTH: usize = 2;

/// How many times its size a container may exceed the layout it answers.
///
/// The backstop for a small measurement inside a large record, where the claim
/// count says nothing: distinct records share their first words, so `ls`'s
/// `hash_entry`, `{void *, hash_entry *}`, is contained by the 200-byte layout
/// of its `stat`, which begins `{dev_t, ino_t}` and claims exactly twice as many
/// fields. Left unbounded that reader is declared to hold 174 bytes of members
/// nothing measured. Four, not two, because two records that really are one --
/// `ls`'s two `fileinfo` comparators, 80 bytes measured against 176 -- are only
/// just over a doubling apart, while the accidental containments measured over
/// the eight-binary census are an order of magnitude out.
const MAX_SIZE_GROWTH: usize = 4;

/// How many fields a layout must claim before a container that says strictly
/// more may answer for it.
///
/// The layout prune turns an access the exported header cannot spell at its own
/// offset into a hole, so a measured layout can reach the ledger with one
/// claimed field or none. That is not evidence of a record: an empty claim list
/// is contained by every structure alive. Such a layout is answered only by one
/// with exactly its shape.
const MIN_SHARED_CLAIMS: usize = 2;

/// How many fields a layout must claim before a container that says strictly
/// more may answer for it, when none of its claims is a pointer.
///
/// Two integer words are what distinct records share. `struct stat` begins
/// `{dev_t, ino_t}`, as do gnulib's `cycle_check_state` and `cp`'s `Src_to_dest`
/// (`{ino_t, dev_t}`); a list node, a `timespec` and a hash entry are two
/// integer words to a stripped reader too. Answering such a layout with the first
/// record that measured more declared `cycle_check`'s `struct stat *` as its
/// `cycle_check_state`. A typed pointer claim is stronger evidence, because its
/// pointee is part of the field's identity: that is what keeps `ls`'s two
/// `fileinfo` comparators, `{0: char *, 0x48: long}` inside four claims, on one
/// name.
const MIN_UNTYPED_CLAIMS: usize = 3;

/// One field a layout CLAIMS: an offset a dereference was actually seen at,
/// with the type the accesses agreed on spelled out.
///
/// Filler members -- the `undefined1[N]` arrays covering the holes -- are not
/// claims and never appear here.
///
/// Two fields are the same field when all three parts match, `undefined<N>`
/// included: two functions agree about a field or they are not looking at the
/// same field. A `char *` against an `unsigned int` at one offset is the obvious
/// conflict, and "no type at all" is its own answer rather than a wildcard the
/// other side may fill in. Letting `undefined8` be absorbed by anything 8 bytes
/// wide was measured on `du` O2 and it unifies records that only look alike:
/// `sub_c090` writes two double bit patterns and a zero byte at `{0, 8, 0x10}`,
/// which a wildcard rule reports as contained by an unrelated record whose
/// offset 0 is a pointer, and the body then prints
/// `field_0x0 = (void *)0x3f80000000000000`.
#[derive(Clone, PartialEq, Eq, Debug)]
#[doc(hidden)]
pub struct FieldKey {
    /// Byte offset inside the structure.
    pub offset: int4,
    /// Width of the access that minted it.
    pub width: int4,
    /// The field type, spelled by [`type_key`].
    pub ty: String,
    /// The field is a pointer whose pointee is a type: `char *`, `long *`,
    /// `struct_N *`.
    pub pointer: bool,
    /// The field is a pointer to code, to `void` or to an undefined type.
    pub opaque: bool,
}

/// A structural spelling of a type, deep enough that two different pointers are
/// two different fields: `PTR:8:>TYPE_INT:4:int4` is not `PTR:8:>TYPE_UINT:1:uint1`.
///
/// A pointer type has no name of its own, so comparing names alone makes every
/// `T **` the same field; the chain is followed instead, to the depth
/// `structsynth` can produce.
fn type_key(ct: &Datatype) -> String {
    let mut key = format!(
        "{:?}:{}:{}",
        ct.get_metatype(),
        ct.get_size(),
        ct.get_name()
    );
    let mut next = ct.get_ptr_to();
    for _ in 0..MAX_POINTEE_DEPTH {
        let Some(p) = next else { break };
        key.push_str(&format!(
            ">{:?}:{}:{}",
            p.get_metatype(),
            p.get_size(),
            p.get_name()
        ));
        next = p.get_ptr_to();
    }
    key
}

/// A synthesized structure reduced to what the dedup decision needs: its size
/// and its claimed fields, in offset order.
#[derive(Clone, PartialEq, Eq, Debug)]
#[doc(hidden)]
pub struct Layout {
    /// The structure's size in bytes, holes and tail rounding included.
    pub size: int4,
    /// Claimed fields, ascending by offset.
    pub fields: Vec<FieldKey>,
}

impl Layout {
    /// Does this layout contain every claim `other` makes, field for field?
    #[doc(hidden)]
    pub fn subsumes(&self, other: &Layout) -> bool {
        if self.size < other.size {
            return false;
        }
        other.fields.iter().all(|want| self.fields.contains(want))
    }

    /// Is every claim past offset 0 an opaque pointer -- a table of slots?
    fn is_table(&self) -> bool {
        let mut slots = self.fields.iter().filter(|f| f.offset != 0).peekable();
        slots.peek().is_some() && slots.all(|f| f.opaque)
    }

    /// Where the last claim ends.
    fn claimed_end(&self) -> int4 {
        self.fields
            .iter()
            .map(|f| f.offset.saturating_add(f.width))
            .max()
            .unwrap_or(0)
    }

    /// The `[lo, hi)` byte ranges this layout leaves as alignment padding
    /// between two of its claims: from the end of each claim up to the next
    /// claim or the next multiple of that claim's width, whichever comes first.
    fn interior_padding(&self) -> Vec<(int4, int4)> {
        self.fields
            .windows(2)
            .filter_map(|pair| {
                let lo = pair[0].offset.saturating_add(pair[0].width);
                let align = if matches!(pair[1].width, 1 | 2 | 4 | 8) {
                    pair[1].width
                } else {
                    1
                };
                let hi = pair[1]
                    .offset
                    .min(lo.saturating_add(align - 1) / align * align);
                (lo < hi).then_some((lo, hi))
            })
            .collect()
    }

    /// Does any claim of this layout overlap `[lo, hi)`?
    fn claims_over(&self, lo: int4, hi: int4) -> bool {
        self.fields
            .iter()
            .any(|f| f.offset < hi && f.offset.saturating_add(f.width) > lo)
    }

    /// Is this layout the answer a reader who measured `other` should be given?
    ///
    /// A layout answers for itself and for anything with exactly its shape
    /// whatever the bounds say -- two readers that measured the same thing are
    /// looking at the same record, and refusing them one name would mint a
    /// second `struct_N` for every function that measured it. Saying strictly
    /// more than the reader measured is where the bounds apply, a table is never
    /// answered by more than its own shape, no structure answers with a member
    /// in the reader's alignment padding, and a reader with no typed pointer is
    /// never answered by a structure that claims anything past its last field.
    #[doc(hidden)]
    pub fn answers_for(&self, other: &Layout) -> bool {
        if !self.subsumes(other) {
            return false;
        }
        if self.size == other.size && self.fields.len() == other.fields.len() {
            return true;
        }
        if other
            .interior_padding()
            .into_iter()
            .any(|(lo, hi)| self.claims_over(lo, hi))
        {
            return false;
        }
        let claims = other.fields.len();
        let typed = other.fields.iter().any(|f| f.pointer);
        let evidence = !other.is_table()
            && (claims >= MIN_UNTYPED_CLAIMS || (claims >= MIN_SHARED_CLAIMS && typed))
            && (typed
                || (self.size == other.size && !self.claims_over(other.claimed_end(), self.size)));
        evidence
            && self.size as usize <= (other.size as usize).saturating_mul(MAX_SIZE_GROWTH)
            && self.fields.len() <= claims.saturating_mul(MAX_CLAIM_GROWTH)
    }

    /// Does this layout answer for `other` while `other` does not answer back?
    fn strictly_subsumes(&self, other: &Layout) -> bool {
        self.answers_for(other) && !other.answers_for(self)
    }
}

/// Does this pointer chain end in code, `void` or an undefined type?
fn opaque_pointee(ct: &Datatype) -> bool {
    let mut next = ct.get_ptr_to();
    let mut last = None;
    for _ in 0..MAX_POINTEE_DEPTH {
        let Some(p) = next else { break };
        next = p.get_ptr_to();
        last = Some(p);
    }
    last.is_some_and(|p| {
        matches!(
            p.get_metatype(),
            type_metatype::TYPE_CODE | type_metatype::TYPE_VOID | type_metatype::TYPE_UNKNOWN
        )
    })
}

/// The key of a field that points at the structure holding it.
fn self_key(offset: int4, width: int4) -> FieldKey {
    FieldKey {
        offset,
        width,
        ty: SELF_KEY.to_string(),
        pointer: true,
        opaque: false,
    }
}

/// Does this field point at the structure named `owner`?
fn points_at(f: &TypeField, owner: &str) -> bool {
    f.field_type.get_ptr_to().is_some_and(|p| {
        p.get_metatype() == type_metatype::TYPE_STRUCT && !owner.is_empty() && p.get_name() == owner
    })
}

/// The key of one field of a completed structure, or `None` for a filler member.
fn key_of(f: &TypeField) -> Option<FieldKey> {
    if f.field_type.get_metatype() == type_metatype::TYPE_ARRAY {
        return None;
    }
    let is_ptr = f.field_type.get_ptr_to().is_some();
    let opaque = is_ptr && opaque_pointee(&f.field_type);
    Some(FieldKey {
        offset: f.offset,
        width: f.field_type.get_size(),
        ty: type_key(&f.field_type),
        pointer: is_ptr && !opaque,
        opaque,
    })
}

/// Read a completed structure's layout, or `None` when it is not one this pass
/// could have minted.
///
/// Every member of a synthesized structure is named for its own offset, so a
/// member named anything else says the name `struct_N` is held by a type that
/// came from somewhere else -- a DWARF record, a parsed header -- and such a
/// type is never handed out as the answer to an access pattern.
#[doc(hidden)]
pub fn layout_of(ct: &Datatype) -> Option<Layout> {
    if ct.get_metatype() != type_metatype::TYPE_STRUCT {
        return None;
    }
    let mut fields = Vec::new();
    for i in 0..ct.num_depend() {
        let f = ct.get_field(i)?;
        if !f.name.starts_with(FIELD_PREFIX) {
            return None;
        }
        if points_at(f, ct.get_name()) {
            fields.push(self_key(f.offset, f.field_type.get_size()));
        } else if let Some(k) = key_of(f) {
            fields.push(k);
        }
    }
    Some(Layout {
        size: ct.get_size(),
        fields,
    })
}

/// The same reading for a field list that has not been completed yet, the
/// fields at `selfs` pointing at the structure they will belong to.
#[doc(hidden)]
pub fn layout_of_fields(fields: &[TypeField], size: int4, selfs: &[int4]) -> Layout {
    Layout {
        size,
        fields: fields.iter().filter_map(|f| field_key(f, selfs)).collect(),
    }
}

/// [`key_of`], with a field at one of `selfs` spelled as a self pointer.
fn field_key(f: &TypeField, selfs: &[int4]) -> Option<FieldKey> {
    if selfs.contains(&f.offset) {
        return Some(self_key(f.offset, f.field_type.get_size()));
    }
    key_of(f)
}

/// One member of a structure as a body sees it: where it starts, how many bytes
/// it covers, and the field it claims (`None` for filler).
#[derive(Clone, PartialEq, Eq, Debug)]
#[doc(hidden)]
pub struct Member {
    /// Byte offset inside the structure.
    pub offset: int4,
    /// Bytes covered.
    pub size: int4,
    /// The claimed field, or `None` for an `undefined1[N]` filler.
    pub claim: Option<FieldKey>,
}

impl Member {
    #[doc(hidden)]
    pub fn of(f: &TypeField) -> Member {
        Member::of_with(f, &[])
    }

    /// [`Member::of`], with a field at one of `selfs` claimed as a self pointer.
    #[doc(hidden)]
    pub fn of_with(f: &TypeField, selfs: &[int4]) -> Member {
        Member {
            offset: f.offset,
            size: f.field_type.get_size(),
            claim: field_key(f, selfs),
        }
    }
}

/// Every member of a completed structure, filler included.
#[doc(hidden)]
pub fn members_of(ct: &Datatype) -> Vec<Member> {
    (0..ct.num_depend())
        .filter_map(|i| ct.get_field(i))
        .map(|f| {
            let own = if points_at(f, ct.get_name()) {
                vec![f.offset]
            } else {
                Vec::new()
            };
            Member::of_with(f, &own)
        })
        .collect()
}

/// Does `held` lay exactly the members `own` does over every byte range in
/// `unclaimed`? See "Unclaimed bytes" in the module documentation.
#[doc(hidden)]
pub fn keeps_unclaimed(held: &[Member], own: &[Member], unclaimed: &[(int4, int4)]) -> bool {
    let over = |members: &[Member], lo: int4, hi: int4| -> Vec<Member> {
        members
            .iter()
            .filter(|m| m.offset < hi && m.offset.saturating_add(m.size) > lo)
            .cloned()
            .collect()
    };
    unclaimed.iter().all(|&(off, width)| {
        let hi = off.saturating_add(width);
        over(held, off, hi) == over(own, off, hi)
    })
}

/// One minted entry.
struct Entry {
    /// The completed type.
    ct: Rc<Datatype>,
    /// Its claimed layout.
    layout: Layout,
}

/// Every `struct_N` the factory currently holds whose size lies in `sizes`,
/// plus the first free name.
///
/// The scan stops at the first unused slot, which is where a mint lands, so the
/// walk is as long as the ledger and no longer. `Err` from the factory ends it
/// with no mint name: a probe that cannot answer is not evidence that a name is
/// free. A structure outside `sizes` is skipped before its layout is read.
fn entries(
    types: &dyn TypeFactory,
    sizes: std::ops::RangeInclusive<i64>,
) -> (Vec<Entry>, Option<String>) {
    let mut out: Vec<Entry> = Vec::new();
    let mut free = None;
    for n in 0..MAX_LEDGER_SLOTS {
        let name = format!("struct_{n}");
        match types.find_by_name(&name) {
            Ok(None) => {
                free = Some(name);
                break;
            }
            Ok(Some(t)) => {
                if !sizes.contains(&i64::from(t.get_size())) {
                    continue;
                }
                if let Some(layout) = layout_of(&t) {
                    out.push(Entry { ct: t, layout });
                }
            }
            Err(_) => break,
        }
    }
    (out, free)
}

/// Does some other entry say strictly more than entry `i`?
#[doc(hidden)]
pub fn is_superseded(layouts: &[&Layout], i: usize) -> bool {
    layouts
        .iter()
        .enumerate()
        .any(|(j, l)| j != i && l.strictly_subsumes(layouts[i]))
}

/// The entry a new layout should reuse: the SMALLEST live one that answers for
/// it, or failing that the smallest that answers at all.
///
/// Smallest, not largest, because every extra field a reused structure carries
/// is a claim this function's evidence does not support. Supersession is read
/// only for the entries that answer, so a lookup costs one pass over the ledger
/// plus one per candidate.
///
/// The growth bounds cost the relation its transitivity -- the structure that
/// superseded the smallest match can be out of this layout's reach -- so a
/// superseded entry still answers when nothing live does. Minting there instead
/// would give a name that entry supersedes the moment it exists. A new name is
/// therefore minted only when nothing held answers at all. `fits` is the
/// per-reader veto of [`keeps_unclaimed`].
#[doc(hidden)]
pub fn best_of(layouts: &[&Layout], want: &Layout, fits: impl Fn(usize) -> bool) -> Option<usize> {
    let mut answering: Vec<usize> = (0..layouts.len())
        .filter(|&i| layouts[i].answers_for(want) && fits(i))
        .collect();
    answering.sort_by_key(|&i| (layouts[i].fields.len(), layouts[i].size));
    answering
        .iter()
        .copied()
        .find(|&i| !is_superseded(layouts, i))
        .or_else(|| answering.first().copied())
}

/// The sizes a lookup for a layout of `size` bytes has to read.
///
/// An entry that answers is at least `size` and at most [`MAX_SIZE_GROWTH`]
/// times it, and an entry that supersedes one of those is at most
/// [`MAX_SIZE_GROWTH`] times larger again. Nothing outside the window can change
/// the answer.
#[doc(hidden)]
pub fn lookup_window(size: int4) -> std::ops::RangeInclusive<i64> {
    let lo = i64::from(size);
    let growth = MAX_SIZE_GROWTH as i64;
    lo..=lo.saturating_mul(growth).saturating_mul(growth)
}

/// Find or mint the program-wide `struct_N` for this layout.
///
/// `unclaimed` is the `(offset, width)` of every access the reader made without
/// claiming a field; a structure answers only if it lays the reader's own
/// members over those bytes ([`keeps_unclaimed`]).
///
/// `selfs` are the offsets of the fields that point at the structure itself;
/// minting one around its shell is [`mint`].
///
/// `find_add` rejects a second, different definition of a held name with a hard
/// `Err`, so the mint declines rather than propagating and the caller keeps the
/// parameter untyped.
#[doc(hidden)]
pub fn lookup_or_mint(
    types: &dyn TypeFactory,
    fields: Vec<TypeField>,
    size: int4,
    unclaimed: &[(int4, int4)],
    selfs: &[int4],
    merge: crate::structmerge::StructMergeMode,
) -> Option<Rc<Datatype>> {
    let want = layout_of_fields(&fields, size, selfs);
    let (held, free) = entries(types, lookup_window(size));
    let layouts: Vec<&Layout> = held.iter().map(|e| &e.layout).collect();
    let own: Vec<Member> = fields.iter().map(|f| Member::of_with(f, selfs)).collect();
    let fits = |i: usize| {
        unclaimed.is_empty() || keeps_unclaimed(&members_of(&held[i].ct), &own, unclaimed)
    };
    if let Some(i) = best_of(&layouts, &want, fits) {
        return Some(Rc::clone(&held[i].ct));
    }
    let free = free?;
    // Nothing held answers for this layout. Under `structmerge` a held
    // structure measured over the same record may still be merged with it and
    // the union minted in its place; the union strictly contains that entry, so
    // the convergence sweep moves its readers onto it.
    if merge.fires() {
        let (wide, _) = entries(types, merge_window(size));
        let pairs: Vec<(Rc<Datatype>, Layout)> =
            wide.into_iter().map(|e| (e.ct, e.layout)).collect();
        if let Some((mfields, msize, mselfs)) =
            crate::structmerge::merge(types, &pairs, &want, &fields, size, selfs, unclaimed)
        {
            // A union that will not mint is not a reason to leave the reader
            // untyped: the layout it measured is still minted below, exactly as
            // `off` mints it.
            if let Some(ct) = mint(types, &free, mfields, msize, &mselfs) {
                return Some(ct);
            }
            crate::structmerge::trace_mint_failed(&free, &want);
        }
    }
    // Minting this layout supersedes every entry it strictly contains; that is
    // derived from the minted set on the next lookup, so there is nothing to
    // record here.
    mint(types, &free, fields, size, selfs)
}

/// The sizes a [`crate::structmerge`] partner search has to read.
///
/// The union is at least as large as either side and answers for both, so it is
/// at most [`MAX_SIZE_GROWTH`] times each of them: a partner is no smaller than
/// this layout divided by that bound and no larger than this layout times it.
fn merge_window(size: int4) -> std::ops::RangeInclusive<i64> {
    let lo = i64::from(size);
    let growth = MAX_SIZE_GROWTH as i64;
    (lo / growth).max(1)..=lo.saturating_mul(growth)
}

/// Complete `struct <name>` from `fields`, the fields at `selfs` retyped as a
/// pointer to the structure itself. A completed structure is a fresh `Rc`, so
/// such a pointer names the incomplete shell the members are installed on.
#[doc(hidden)]
pub fn mint(
    types: &dyn TypeFactory,
    name: &str,
    mut fields: Vec<TypeField>,
    size: int4,
    selfs: &[int4],
) -> Option<Rc<Datatype>> {
    let shell = types.get_type_struct(name).ok()?;
    for f in fields.iter_mut().filter(|f| selfs.contains(&f.offset)) {
        f.field_type = types
            .get_type_pointer(f.field_type.get_size(), Rc::clone(&shell), 1)
            .ok()?;
    }
    types
        .set_fields_struct_raw(&shell, fields, Vec::new(), size, 1, 0)
        .ok()
}

/// Is `ct` a structure this pass minted.
pub fn is_minted(ct: &Datatype) -> bool {
    minted_number(ct).is_some()
}

/// The number `N` of a structure this pass minted, or `None` for any other type.
#[doc(hidden)]
pub fn minted_number(ct: &Datatype) -> Option<u32> {
    let n = ct.get_name().strip_prefix("struct_")?;
    if n.is_empty() || !n.bytes().all(|c| c.is_ascii_digit()) || layout_of(ct).is_none() {
        return None;
    }
    n.parse().ok()
}

/// `order` with the synthesized structures it holds moved to its end, in
/// ascending `N`.
///
/// The factory keeps its types in a tree ordered by size and then field by
/// field, and two structures that agree that far are ordered by the ADDRESS of
/// a field's type; a pointer is ordered by the address of what it points at.
/// Minted structures agree that far all the time -- every one starts with
/// `field_0x0` -- so a header rendered in tree order lists them in an order that
/// changes from one run of the same export to the next. A minted structure
/// holds nothing by value but scalars and byte arrays -- under `nest` also a
/// pointer to another minted structure or to itself, which the forward
/// declarations already name -- and nothing holds one by value, so it may be
/// defined anywhere after the forward declarations; after everything else, in
/// ascending `N`, is the same place every run and in every process.
pub fn in_name_order(order: Vec<Rc<Datatype>>) -> Vec<Rc<Datatype>> {
    let (mut minted, mut rest): (Vec<Rc<Datatype>>, Vec<Rc<Datatype>>) = order
        .into_iter()
        .partition(|ct| minted_number(ct).is_some());
    minted.sort_by_key(|ct| minted_number(ct));
    rest.append(&mut minted);
    rest
}

/// The synthesized structures a later, larger layout has taken over.
///
/// A whole-program driver reads this after its batch: a function that named one
/// of these was decided before the structure that contains it existed, and
/// deciding it again answers with the survivor.
pub fn superseded_names(types: &dyn TypeFactory) -> Vec<String> {
    let (held, _) = entries(types, i64::MIN..=i64::MAX);
    let layouts: Vec<&Layout> = held.iter().map(|e| &e.layout).collect();
    (0..held.len())
        .filter(|&i| is_superseded(&layouts, i))
        .map(|i| held[i].ct.get_name().to_string())
        .collect()
}

#[cfg(test)]
mod tests;
