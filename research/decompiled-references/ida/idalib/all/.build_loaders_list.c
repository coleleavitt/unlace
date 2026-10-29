// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7DB0
// Name:            .build_loaders_list
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7DB0 jmp     cs:off_2C796C0
//
// Resolved target: build_loaders_list
// Target address:  0x641930
// GOT/IAT slot:    0x2C796C0
// Slot symbol:     off_2C796C0
// Target type:     <no type info>
// ============================================================

void .build_loaders_list(/* see target signature */)
{
    // Tail-call to build_loaders_list via GOT/IAT indirection
    return build_loaders_list(/* forwarded args */);
}

