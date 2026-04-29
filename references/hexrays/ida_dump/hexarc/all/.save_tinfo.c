// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A780
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A780 jmp     cs:off_4B9BA8
//
// Resolved target: save_tinfo
// Target address:  0x4BC5B8
// GOT/IAT slot:    0x4B9BA8
// Slot symbol:     off_4B9BA8
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

