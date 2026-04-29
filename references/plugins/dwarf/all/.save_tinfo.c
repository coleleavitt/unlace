// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA970
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA970 jmp     cs:off_CA4A0
//
// Resolved target: save_tinfo
// Target address:  0xD0DE8
// GOT/IAT slot:    0xCA4A0
// Slot symbol:     off_CA4A0
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

