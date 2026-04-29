// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29620
// Name:            .str2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29620 jmp     cs:off_4B92F8
//
// Resolved target: str2user
// Target address:  0x4BBCC8
// GOT/IAT slot:    0x4B92F8
// Slot symbol:     off_4B92F8
// Target type:     <no type info>
// ============================================================

void .str2user(/* see target signature */)
{
    // Tail-call to str2user via GOT/IAT indirection
    return str2user(/* forwarded args */);
}

