// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED80
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED80 jmp     cs:off_4E9EA8
//
// Resolved target: create_tinfo
// Target address:  0x4EC8F8
// GOT/IAT slot:    0x4E9EA8
// Slot symbol:     off_4E9EA8
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

