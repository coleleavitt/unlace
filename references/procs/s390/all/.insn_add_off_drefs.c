// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10120
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10120 jmp     cs:off_2E078
//
// Resolved target: insn_add_off_drefs
// Target address:  0x36CF0
// GOT/IAT slot:    0x2E078
// Slot symbol:     off_2E078
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

