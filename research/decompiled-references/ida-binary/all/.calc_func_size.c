// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111E80
// Name:            .calc_func_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111E80 jmp     cs:calc_func_size_ptr
//
// Resolved target: calc_func_size
// Target address:  0x8D39E0
// GOT/IAT slot:    0x89FBE0
// Slot symbol:     calc_func_size_ptr
// Target type:     <no type info>
// ============================================================

void .calc_func_size(/* see target signature */)
{
    // Tail-call to calc_func_size via GOT/IAT indirection
    return calc_func_size(/* forwarded args */);
}

