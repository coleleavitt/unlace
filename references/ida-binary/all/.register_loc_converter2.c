// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112110
// Name:            .register_loc_converter2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112110 jmp     cs:register_loc_converter2_ptr
//
// Resolved target: register_loc_converter2
// Target address:  0x8D3B70
// GOT/IAT slot:    0x89FD28
// Slot symbol:     register_loc_converter2_ptr
// Target type:     <no type info>
// ============================================================

void .register_loc_converter2(/* see target signature */)
{
    // Tail-call to register_loc_converter2 via GOT/IAT indirection
    return register_loc_converter2(/* forwarded args */);
}

