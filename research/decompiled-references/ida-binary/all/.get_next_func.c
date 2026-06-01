// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11ABE0
// Name:            .get_next_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11ABE0 jmp     cs:get_next_func_ptr
//
// Resolved target: get_next_func
// Target address:  0x8D93B0
// GOT/IAT slot:    0x8A4290
// Slot symbol:     get_next_func_ptr
// Target type:     <no type info>
// ============================================================

void .get_next_func(/* see target signature */)
{
    // Tail-call to get_next_func via GOT/IAT indirection
    return get_next_func(/* forwarded args */);
}

