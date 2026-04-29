// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B7A0
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B7A0 jmp     cs:off_4DABB8
//
// Resolved target: save_tinfo
// Target address:  0x4DD5C8
// GOT/IAT slot:    0x4DABB8
// Slot symbol:     off_4DABB8
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

