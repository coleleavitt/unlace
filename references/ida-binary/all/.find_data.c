// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118A50
// Name:            .find_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118A50 jmp     cs:find_data_ptr
//
// Resolved target: find_data
// Target address:  0x8D7E60
// GOT/IAT slot:    0x8A31C8
// Slot symbol:     find_data_ptr
// Target type:     <no type info>
// ============================================================

void .find_data(/* see target signature */)
{
    // Tail-call to find_data via GOT/IAT indirection
    return find_data(/* forwarded args */);
}

