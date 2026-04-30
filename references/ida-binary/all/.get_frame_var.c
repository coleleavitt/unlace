// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x111FE0
// Name:            .get_frame_var
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x111FE0 jmp     cs:get_frame_var_ptr
//
// Resolved target: get_frame_var
// Target address:  0x8D3AB0
// GOT/IAT slot:    0x89FC90
// Slot symbol:     get_frame_var_ptr
// Target type:     <no type info>
// ============================================================

void .get_frame_var(/* see target signature */)
{
    // Tail-call to get_frame_var via GOT/IAT indirection
    return get_frame_var(/* forwarded args */);
}

