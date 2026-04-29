// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3490
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3490 jmp     cs:off_29230
//
// Resolved target: create_tinfo
// Target address:  0x295F8
// GOT/IAT slot:    0x29230
// Slot symbol:     off_29230
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

