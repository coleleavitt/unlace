// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A83A0
// Name:            .bitrange_t_extract_using_bitrange
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A83A0 jmp     cs:off_2C799B8
//
// Resolved target: bitrange_t_extract_using_bitrange
// Target address:  0x826B90
// GOT/IAT slot:    0x2C799B8
// Slot symbol:     off_2C799B8
// Target type:     <no type info>
// ============================================================

void .bitrange_t_extract_using_bitrange(/* see target signature */)
{
    // Tail-call to bitrange_t_extract_using_bitrange via GOT/IAT indirection
    return bitrange_t_extract_using_bitrange(/* forwarded args */);
}

