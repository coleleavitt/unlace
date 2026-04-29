// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19980
// Name:            .save_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19980 jmp     cs:off_754A8
//
// Resolved target: save_tinfo
// Target address:  0x75D00
// GOT/IAT slot:    0x754A8
// Slot symbol:     off_754A8
// Target type:     <no type info>
// ============================================================

void .save_tinfo(/* see target signature */)
{
    // Tail-call to save_tinfo via GOT/IAT indirection
    return save_tinfo(/* forwarded args */);
}

