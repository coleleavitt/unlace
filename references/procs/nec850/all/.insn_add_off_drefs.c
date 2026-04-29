// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92B0
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92B0 jmp     cs:off_2E140
//
// Resolved target: insn_add_off_drefs
// Target address:  0x2E7B0
// GOT/IAT slot:    0x2E140
// Slot symbol:     off_2E140
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

