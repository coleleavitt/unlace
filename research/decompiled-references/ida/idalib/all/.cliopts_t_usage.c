// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A91C0
// Name:            .cliopts_t_usage
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A91C0 jmp     cs:off_2C7A0C8
//
// Resolved target: cliopts_t_usage
// Target address:  0x8290F0
// GOT/IAT slot:    0x2C7A0C8
// Slot symbol:     off_2C7A0C8
// Target type:     <no type info>
// ============================================================

void .cliopts_t_usage(/* see target signature */)
{
    // Tail-call to cliopts_t_usage via GOT/IAT indirection
    return cliopts_t_usage(/* forwarded args */);
}

