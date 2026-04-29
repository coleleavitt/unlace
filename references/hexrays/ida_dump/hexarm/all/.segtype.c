// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2F0A0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2F0A0 jmp     cs:off_4EA038
//
// Resolved target: segtype
// Target address:  0x4ECA88
// GOT/IAT slot:    0x4EA038
// Slot symbol:     off_4EA038
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

