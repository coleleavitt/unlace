// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119D80
// Name:            .get_sp_delta
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119D80 jmp     cs:get_sp_delta_ptr
//
// Resolved target: get_sp_delta
// Target address:  0x8D8A58
// GOT/IAT slot:    0x8A3B60
// Slot symbol:     get_sp_delta_ptr
// Target type:     <no type info>
// ============================================================

void .get_sp_delta(/* see target signature */)
{
    // Tail-call to get_sp_delta via GOT/IAT indirection
    return get_sp_delta(/* forwarded args */);
}

