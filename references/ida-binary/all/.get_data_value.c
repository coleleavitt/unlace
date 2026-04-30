// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A6C0
// Name:            .get_data_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A6C0 jmp     cs:get_data_value_ptr
//
// Resolved target: get_data_value
// Target address:  0x8D9050
// GOT/IAT slot:    0x8A4000
// Slot symbol:     get_data_value_ptr
// Target type:     <no type info>
// ============================================================

void .get_data_value(/* see target signature */)
{
    // Tail-call to get_data_value via GOT/IAT indirection
    return get_data_value(/* forwarded args */);
}

