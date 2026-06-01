// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1110B0
// Name:            .find_not_func
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1110B0 jmp     cs:find_not_func_ptr
//
// Resolved target: find_not_func
// Target address:  0x8D30F0
// GOT/IAT slot:    0x89F4F8
// Slot symbol:     find_not_func_ptr
// Target type:     <no type info>
// ============================================================

void .find_not_func(/* see target signature */)
{
    // Tail-call to find_not_func via GOT/IAT indirection
    return find_not_func(/* forwarded args */);
}

