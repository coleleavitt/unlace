// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119DC0
// Name:            .get_func_frame
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119DC0 jmp     cs:get_func_frame_ptr
//
// Resolved target: get_func_frame
// Target address:  0x8D8A78
// GOT/IAT slot:    0x8A3B80
// Slot symbol:     get_func_frame_ptr
// Target type:     <no type info>
// ============================================================

void .get_func_frame(/* see target signature */)
{
    // Tail-call to get_func_frame via GOT/IAT indirection
    return get_func_frame(/* forwarded args */);
}

