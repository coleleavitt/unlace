// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A620
// Name:            .str2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A620 jmp     cs:off_4C02F8
//
// Resolved target: str2user
// Target address:  0x4C32C0
// GOT/IAT slot:    0x4C02F8
// Slot symbol:     off_4C02F8
// Target type:     <no type info>
// ============================================================

void .str2user(/* see target signature */)
{
    // Tail-call to str2user via GOT/IAT indirection
    return str2user(/* forwarded args */);
}

