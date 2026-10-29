// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF20
// Name:            .rangeset_t_prev_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF20 jmp     cs:off_2C7AF78
//
// Resolved target: rangeset_t_prev_addr
// Target address:  0x848B70
// GOT/IAT slot:    0x2C7AF78
// Slot symbol:     off_2C7AF78
// Target type:     <no type info>
// ============================================================

void .rangeset_t_prev_addr(/* see target signature */)
{
    // Tail-call to rangeset_t_prev_addr via GOT/IAT indirection
    return rangeset_t_prev_addr(/* forwarded args */);
}

