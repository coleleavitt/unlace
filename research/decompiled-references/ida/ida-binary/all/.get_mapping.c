// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x116660
// Name:            .get_mapping
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x116660 jmp     cs:get_mapping_ptr
//
// Resolved target: get_mapping
// Target address:  0x8D67C0
// GOT/IAT slot:    0x8A1FD0
// Slot symbol:     get_mapping_ptr
// Target type:     <no type info>
// ============================================================

void .get_mapping(/* see target signature */)
{
    // Tail-call to get_mapping via GOT/IAT indirection
    return get_mapping(/* forwarded args */);
}

