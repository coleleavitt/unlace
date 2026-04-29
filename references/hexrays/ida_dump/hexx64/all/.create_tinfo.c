// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CE70
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CE70 jmp     cs:off_4EDF20
//
// Resolved target: create_tinfo
// Target address:  0x4F2270
// GOT/IAT slot:    0x4EDF20
// Slot symbol:     off_4EDF20
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

