// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7580
// Name:            .tiplace_t__beginning
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7580 jmp     cs:off_2C792A8
//
// Resolved target: tiplace_t__beginning
// Target address:  0x55A780
// GOT/IAT slot:    0x2C792A8
// Slot symbol:     off_2C792A8
// Target type:     <no type info>
// ============================================================

void .tiplace_t__beginning(/* see target signature */)
{
    // Tail-call to tiplace_t__beginning via GOT/IAT indirection
    return tiplace_t__beginning(/* forwarded args */);
}

