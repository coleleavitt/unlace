// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAC40
// Name:            .rangeset_t_next_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAC40 jmp     cs:off_2C7AE08
//
// Resolved target: rangeset_t_next_addr
// Target address:  0x848AE0
// GOT/IAT slot:    0x2C7AE08
// Slot symbol:     off_2C7AE08
// Target type:     <no type info>
// ============================================================

void .rangeset_t_next_addr(/* see target signature */)
{
    // Tail-call to rangeset_t_next_addr via GOT/IAT indirection
    return rangeset_t_next_addr(/* forwarded args */);
}

