// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19380
// Name:            .insn_add_off_drefs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19380 jmp     cs:off_751A8
//
// Resolved target: insn_add_off_drefs
// Target address:  0x759F8
// GOT/IAT slot:    0x751A8
// Slot symbol:     off_751A8
// Target type:     <no type info>
// ============================================================

void .insn_add_off_drefs(/* see target signature */)
{
    // Tail-call to insn_add_off_drefs via GOT/IAT indirection
    return insn_add_off_drefs(/* forwarded args */);
}

