// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7310
// Name:            .insn_add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7310 jmp     cs:off_19170
//
// Resolved target: insn_add_cref
// Target address:  0x196A0
// GOT/IAT slot:    0x19170
// Slot symbol:     off_19170
// Target type:     <no type info>
// ============================================================

void .insn_add_cref(/* see target signature */)
{
    // Tail-call to insn_add_cref via GOT/IAT indirection
    return insn_add_cref(/* forwarded args */);
}

