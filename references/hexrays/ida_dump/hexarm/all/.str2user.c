// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D630
// Name:            .str2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D630 jmp     cs:off_4E9300
//
// Resolved target: str2user
// Target address:  0x4EBCF0
// GOT/IAT slot:    0x4E9300
// Slot symbol:     off_4E9300
// Target type:     <no type info>
// ============================================================

void .str2user(/* see target signature */)
{
    // Tail-call to str2user via GOT/IAT indirection
    return str2user(/* forwarded args */);
}

