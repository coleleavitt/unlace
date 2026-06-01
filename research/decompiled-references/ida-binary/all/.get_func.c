// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113A70
// Name:            .get_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113A70 jmp     cs:get_func_ptr
//
// Resolved target: get_func
// Target address:  0x8D4BD0
// GOT/IAT slot:    0x8A09D8
// Slot symbol:     get_func_ptr
// Target type:     <no type info>
// ============================================================

void .get_func(/* see target signature */)
{
    // Tail-call to get_func via GOT/IAT indirection
    return get_func(/* forwarded args */);
}

