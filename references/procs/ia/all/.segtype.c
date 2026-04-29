// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73D0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73D0 jmp     cs:off_261D0
//
// Resolved target: segtype
// Target address:  0x264A0
// GOT/IAT slot:    0x261D0
// Slot symbol:     off_261D0
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

