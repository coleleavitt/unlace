// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119300
// Name:            .get_data_elsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119300 jmp     cs:get_data_elsize_ptr
//
// Resolved target: get_data_elsize
// Target address:  0x8D83C8
// GOT/IAT slot:    0x8A3620
// Slot symbol:     get_data_elsize_ptr
// Target type:     <no type info>
// ============================================================

void .get_data_elsize(/* see target signature */)
{
    // Tail-call to get_data_elsize via GOT/IAT indirection
    return get_data_elsize(/* forwarded args */);
}

