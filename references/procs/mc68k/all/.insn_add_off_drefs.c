// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6210
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6210 jmp     cs:off_1D0F0
//
// Resolved target: insn_add_off_drefs
// Target address:  0x1D5E0
// GOT/IAT slot:    0x1D0F0
// Slot symbol:     off_1D0F0
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

