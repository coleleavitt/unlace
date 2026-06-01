// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1123D0
// Name:            .bitrange_t_inject_using_bitrange
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1123D0 jmp     cs:bitrange_t_inject_using_bitrange_ptr
//
// Resolved target: bitrange_t_inject_using_bitrange
// Target address:  0x8D3D38
// GOT/IAT slot:    0x89FE88
// Slot symbol:     bitrange_t_inject_using_bitrange_ptr
// Target type:     <no type info>
// ============================================================

void .bitrange_t_inject_using_bitrange(/* see target signature */)
{
    // Tail-call to bitrange_t_inject_using_bitrange via GOT/IAT indirection
    return bitrange_t_inject_using_bitrange(/* forwarded args */);
}

