// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1125E0
// Name:            .build_loaders_list
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1125E0 jmp     cs:build_loaders_list_ptr
//
// Resolved target: build_loaders_list
// Target address:  0x8D3EA0
// GOT/IAT slot:    0x89FF90
// Slot symbol:     build_loaders_list_ptr
// Target type:     <no type info>
// ============================================================

void .build_loaders_list(/* see target signature */)
{
    // Tail-call to build_loaders_list via GOT/IAT indirection
    return build_loaders_list(/* forwarded args */);
}

