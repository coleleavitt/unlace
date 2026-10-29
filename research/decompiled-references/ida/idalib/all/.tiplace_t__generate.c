// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9FF0
// Name:            .tiplace_t__generate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9FF0 jmp     cs:off_2C7A7E0
//
// Resolved target: tiplace_t__generate
// Target address:  0x560930
// GOT/IAT slot:    0x2C7A7E0
// Slot symbol:     off_2C7A7E0
// Target type:     <no type info>
// ============================================================

void .tiplace_t__generate(/* see target signature */)
{
    // Tail-call to tiplace_t__generate via GOT/IAT indirection
    return tiplace_t__generate(/* forwarded args */);
}

