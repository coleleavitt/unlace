//! **gobool** — narrow a Go boolean return's stale-high concatenation
//! (`docs/multilang.md` W4, the Go pack's return-ABI reading).
//!
//! ```text
//!   v2 = CONCAT71((undefined7)(v2 >> 8), a0[2] == '_');   -->  return a0[2] == '_';
//!   return v2 & 0xffffffff;
//! ```
//!
//! Go's ABI materializes a `bool` result as 0/1 in the LOW BYTE of the return
//! register and leaves the upper bytes unspecified: the compiler emits a bare
//! `SETcc AL` with no zeroing `XOR`, so the lifted dataflow is a
//! `PIECE(stale7, bool1)` feeding the `RETURN` — printed as the `CONCAT71`
//! artifact above. `SubvariableFlow::try_return_pull` rightly refuses to
//! narrow it (nothing proves the high bytes zero), and rustc never triggers
//! this because it zeroes first. The option asserts the ABI fact instead: a
//! RETURN whose value is a 7+1 concatenation whose low byte is a boolean
//! definition returns THAT BOOLEAN, so the value is rewritten to
//! `ZEXT(bool)` and the stale concatenation dies to ordinary dead code.
//!
//! The high bytes' content is deliberately overwritten (zeroed) — the
//! declared, documented intent of the option, mirroring `rustabi`'s reading
//! of the ScalarPair ABI: at `auto` (the default) the rule acts only when the
//! image's source language is Go, where those bytes are unspecified by the
//! ABI; `always` drops the language test (no-signal corpora, the stage test);
//! `off` keeps the faithful concatenation.
//!
//! A function with several returns usually reaches one RETURN through a
//! `MULTIEQUAL` of the constant returns and the concatenation. When the phi
//! feeds only the RETURN and each input is `0`, `1` or such a concatenation,
//! each concatenation input becomes `ZEXT(bool)` at the end of its
//! predecessor block (`narrow_phi`).

use unlace_num::opcodes::OpCode;

use unlace_base::address::Address;
use unlace_base::types::int4;

use crate::action::{ActionGroupList, Rule};
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// The three-valued `gobool` gate.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub enum GoBoolMode {
    /// Keep the faithful concatenation.
    Off,
    /// Narrow when the image's source language is Go (the shipped default).
    #[default]
    Auto,
    /// Narrow whatever the detected language.
    Always,
}

impl crate::optionset::UnlaceOption for GoBoolMode {
    const NAME: &'static str = "gobool";
    crate::unlace_option_id!();

    fn unset() -> Self {
        GoBoolMode::Auto
    }

    fn shipped() -> Self {
        GoBoolMode::Auto
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        parse_gobool_mode(value).map_err(unlace_base::error::UnlaceError::parse)
    }
}

impl GoBoolMode {
    /// The catalog `current` token.
    pub fn as_str(self) -> &'static str {
        match self {
            GoBoolMode::Off => "off",
            GoBoolMode::Auto => "auto",
            GoBoolMode::Always => "always",
        }
    }
}

/// Parse an `option gobool` value.
pub fn parse_gobool_mode(value: &str) -> Result<(GoBoolMode, String), String> {
    let mode = match value.trim().to_ascii_lowercase().as_str() {
        "off" | "0" | "false" => GoBoolMode::Off,
        "auto" | "" => GoBoolMode::Auto,
        "always" | "on" | "1" | "true" => GoBoolMode::Always,
        other => {
            return Err(format!(
                "unknown gobool value {other:?} (expected off, auto or always)"
            ));
        }
    };
    Ok((
        mode,
        format!("Go boolean-return narrowing set to {}", mode.as_str()),
    ))
}

/// Is `code` an opcode whose output is a genuine boolean (0/1) byte?
fn produces_boolean(code: OpCode) -> bool {
    matches!(
        code,
        OpCode::CPUI_INT_EQUAL
            | OpCode::CPUI_INT_NOTEQUAL
            | OpCode::CPUI_INT_LESS
            | OpCode::CPUI_INT_SLESS
            | OpCode::CPUI_INT_LESSEQUAL
            | OpCode::CPUI_INT_SLESSEQUAL
            | OpCode::CPUI_INT_CARRY
            | OpCode::CPUI_INT_SCARRY
            | OpCode::CPUI_INT_SBORROW
            | OpCode::CPUI_BOOL_NEGATE
            | OpCode::CPUI_BOOL_XOR
            | OpCode::CPUI_BOOL_AND
            | OpCode::CPUI_BOOL_OR
            | OpCode::CPUI_FLOAT_EQUAL
            | OpCode::CPUI_FLOAT_NOTEQUAL
            | OpCode::CPUI_FLOAT_LESS
            | OpCode::CPUI_FLOAT_LESSEQUAL
            | OpCode::CPUI_FLOAT_NAN
    )
}

/// (unlace) `RuleGoBoolReturn` — rewrite `RETURN(PIECE(stale7, bool1))` into
/// `RETURN(ZEXT(bool1))` (option `gobool`, default auto).
pub struct RuleGoBoolReturn {
    /// Unit-test OR-override of the mode gate (the scheduled instance
    /// registers `false` and reads the live mode off the ArchContext).
    enabled: bool,
    /// Rule group (C++ `Rule::basegroup`).
    group: String,
}

impl RuleGoBoolReturn {
    /// Construct in group `g`; `enabled` forces the rule on (unit tests).
    pub fn with_group(enabled: bool, g: impl Into<String>) -> RuleGoBoolReturn {
        RuleGoBoolReturn {
            enabled,
            group: g.into(),
        }
    }
}

/// Is the narrowing live for this function?
pub fn live(data: &Funcdata) -> bool {
    match data.get_arch().unlace_options.get::<GoBoolMode>() {
        GoBoolMode::Off => false,
        GoBoolMode::Auto => data.get_arch().source_lang.is_go(),
        GoBoolMode::Always => true,
    }
}

impl Rule for RuleGoBoolReturn {
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_RETURN]
    }

    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        if !grouplist.contains(&self.group) {
            return None;
        }
        Some(Box::new(RuleGoBoolReturn {
            enabled: self.enabled,
            group: self.group.clone(),
        }))
    }

    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        if !self.enabled && !live(data) {
            return 0;
        }
        // RETURN carries the value in slot 1 (slot 0 is the return address).
        let Some(o) = data.obank().get(op) else {
            return 0;
        };
        if o.num_input() < 2 {
            return 0;
        }
        let Some(ret_vn) = o.get_in(1) else { return 0 };
        let Some(rv) = data.vbank().get(ret_vn) else {
            return 0;
        };
        if rv.get_size() != 8 || !rv.is_written() {
            return 0;
        }
        let Some(def) = rv.get_def() else { return 0 };
        let Some(d) = data.obank().get(def) else {
            return 0;
        };
        if d.code() == OpCode::CPUI_MULTIEQUAL {
            return narrow_phi(data, op, ret_vn, def);
        }
        let Some(lo) = stale_bool_low(data, ret_vn) else {
            return 0;
        };
        // The rewrite: RETURN reads ZEXT(bool); the PIECE loses its reader and
        // dies to ordinary dead code, taking the stale high bytes with it.
        let at = data.obank().get(op).expect("return op").get_addr().clone();
        let Some(out) = new_zext(data, lo, at) else {
            return 0;
        };
        data.op_insert_before(out.0, op);
        if data.op_set_input(op, out.1, 1).is_err() {
            return 0;
        }
        1
    }
}

/// The boolean low byte of `vn` when `vn` is `PIECE(stale7, bool1)`: an eight-byte
/// concatenation of a seven-byte high half over a one-byte genuine boolean definition.
fn stale_bool_low(data: &Funcdata, vn: VarnodeId) -> Option<VarnodeId> {
    let v = data.vbank().get(vn)?;
    if v.get_size() != 8 || !v.is_written() {
        return None;
    }
    let p = data.obank().get(v.get_def()?)?;
    if p.code() != OpCode::CPUI_PIECE {
        return None;
    }
    // PIECE(most-significant, least-significant).
    let (hi, lo) = (p.get_in(0)?, p.get_in(1)?);
    if data.vbank().get(hi)?.get_size() != 7 {
        return None;
    }
    let lv = data.vbank().get(lo)?;
    if lv.get_size() != 1 || !lv.is_written() {
        return None;
    }
    let ld = data.obank().get(lv.get_def()?)?;
    produces_boolean(ld.code()).then_some(lo)
}

/// A new `INT_ZEXT` op at `at` reading `lo` into an eight-byte unique: the op and its
/// output, not yet inserted.
fn new_zext(data: &mut Funcdata, lo: VarnodeId, at: Address) -> Option<(OpId, VarnodeId)> {
    let zext = data.new_op(1, at);
    data.op_set_opcode_code(zext, OpCode::CPUI_INT_ZEXT);
    data.op_set_input(zext, lo, 0).ok()?;
    let out = data.new_unique_out(8, zext).ok()?;
    Some((zext, out))
}

/// The phi form: the RETURN `op` reads only the `MULTIEQUAL` `phi` (output `ret_vn`),
/// whose every input is the constant `0` or `1` or a `PIECE(stale7, bool1)`, at least
/// one of them a concatenation. Each concatenation input becomes `ZEXT(bool)`, placed at
/// the end of the input's predecessor block, so the merged value is the boolean on every
/// path. A phi read by anything else, or with any other input, is left alone.
fn narrow_phi(data: &mut Funcdata, op: OpId, ret_vn: VarnodeId, phi: OpId) -> int4 {
    if data.lone_descend(ret_vn) != Some(op) {
        return 0;
    }
    let Some(p) = data.obank().get(phi) else {
        return 0;
    };
    let Some(parent) = p.get_parent() else {
        return 0;
    };
    let mut lows = Vec::new();
    for slot in 0..p.num_input() {
        let Some(vn) = p.get_in(slot) else {
            return 0;
        };
        if let Some(lo) = stale_bool_low(data, vn) {
            lows.push((slot, lo));
            continue;
        }
        let constant = data
            .vbank()
            .get(vn)
            .is_some_and(|v| v.is_constant() && v.get_offset() <= 1);
        if !constant {
            return 0;
        }
    }
    if lows.is_empty() {
        return 0;
    }
    for (slot, lo) in lows {
        let bl = data.bblocks_ref().block(parent).get_in(slot);
        let at = match data.bb_op_tail(bl).and_then(|t| data.obank().get(t)) {
            Some(t) => t.get_addr().clone(),
            None => data.obank().get(phi).expect("phi op").get_addr().clone(),
        };
        let Some((zext, out)) = new_zext(data, lo, at) else {
            return 0;
        };
        data.op_insert_end(zext, bl);
        if data.op_set_input(phi, out, slot).is_err() {
            return 0;
        }
    }
    1
}

#[cfg(test)]
#[path = "gobool/tests.rs"]
mod tests;
