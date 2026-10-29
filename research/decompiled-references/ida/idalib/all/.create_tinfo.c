// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB010
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB010 jmp     cs:off_2C7AFF0
//
// Resolved target: create_tinfo
// Target address:  0x53A340
// GOT/IAT slot:    0x2C7AFF0
// Slot symbol:     off_2C7AFF0
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

