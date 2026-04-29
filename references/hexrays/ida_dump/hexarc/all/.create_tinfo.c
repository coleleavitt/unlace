// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD20
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD20 jmp     cs:off_4B9E78
//
// Resolved target: create_tinfo
// Target address:  0x4BC8A8
// GOT/IAT slot:    0x4B9E78
// Slot symbol:     off_4B9E78
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

