// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116B40
// Name:            .get_prev_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116B40 jmp     cs:get_prev_func_ptr
//
// Resolved target: get_prev_func
// Target address:  0x8D6AE8
// GOT/IAT slot:    0x8A2240
// Slot symbol:     get_prev_func_ptr
// Target type:     <no type info>
// ============================================================

void .get_prev_func(/* see target signature */)
{
    // Tail-call to get_prev_func via GOT/IAT indirection
    return get_prev_func(/* forwarded args */);
}

