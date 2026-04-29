// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B630
// Name:            .str2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B630 jmp     cs:off_4ED300
//
// Resolved target: str2user
// Target address:  0x4F15F8
// GOT/IAT slot:    0x4ED300
// Slot symbol:     off_4ED300
// Target type:     <no type info>
// ============================================================

void .str2user(/* see target signature */)
{
    // Tail-call to str2user via GOT/IAT indirection
    return str2user(/* forwarded args */);
}

