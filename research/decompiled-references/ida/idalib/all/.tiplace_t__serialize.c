// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AACD0
// Name:            .tiplace_t__serialize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AACD0 jmp     cs:off_2C7AE50
//
// Resolved target: tiplace_t__serialize
// Target address:  0x55BE20
// GOT/IAT slot:    0x2C7AE50
// Slot symbol:     off_2C7AE50
// Target type:     <no type info>
// ============================================================

void .tiplace_t__serialize(/* see target signature */)
{
    // Tail-call to tiplace_t__serialize via GOT/IAT indirection
    return tiplace_t__serialize(/* forwarded args */);
}

