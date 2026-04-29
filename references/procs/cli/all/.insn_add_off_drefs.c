// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3120
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3120 jmp     cs:off_1A078
//
// Resolved target: insn_add_off_drefs
// Target address:  0x1A330
// GOT/IAT slot:    0x1A078
// Slot symbol:     off_1A078
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

