// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119F60
// Name:            .get_view_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119F60 jmp     cs:get_view_options_ptr
//
// Resolved target: get_view_options
// Target address:  0x8D8BA0
// GOT/IAT slot:    0x8A3C50
// Slot symbol:     get_view_options_ptr
// Target type:     <no type info>
// ============================================================

void .get_view_options(/* see target signature */)
{
    // Tail-call to get_view_options via GOT/IAT indirection
    return get_view_options(/* forwarded args */);
}

