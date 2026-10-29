// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1172B0
// Name:            .calc_idasgn_state
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1172B0 jmp     cs:calc_idasgn_state_ptr
//
// Resolved target: calc_idasgn_state
// Target address:  0x8D6F98
// GOT/IAT slot:    0x8A25F8
// Slot symbol:     calc_idasgn_state_ptr
// Target type:     <no type info>
// ============================================================

void .calc_idasgn_state(/* see target signature */)
{
    // Tail-call to calc_idasgn_state via GOT/IAT indirection
    return calc_idasgn_state(/* forwarded args */);
}

