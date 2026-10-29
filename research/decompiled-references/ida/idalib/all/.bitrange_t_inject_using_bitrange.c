// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7CD0
// Name:            .bitrange_t_inject_using_bitrange
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7CD0 jmp     cs:off_2C79650
//
// Resolved target: bitrange_t_inject_using_bitrange
// Target address:  0x826D10
// GOT/IAT slot:    0x2C79650
// Slot symbol:     off_2C79650
// Target type:     <no type info>
// ============================================================

void .bitrange_t_inject_using_bitrange(/* see target signature */)
{
    // Tail-call to bitrange_t_inject_using_bitrange via GOT/IAT indirection
    return bitrange_t_inject_using_bitrange(/* forwarded args */);
}

