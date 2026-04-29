// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2440
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2440 jmp     cs:off_B208
//
// Resolved target: segtype
// Target address:  0xB4C8
// GOT/IAT slot:    0xB208
// Slot symbol:     off_B208
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

