// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A9A0
// Name:            .find_custom_data_format
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A9A0 jmp     cs:find_custom_data_format_ptr
//
// Resolved target: find_custom_data_format
// Target address:  0x8D9258
// GOT/IAT slot:    0x8A4170
// Slot symbol:     find_custom_data_format_ptr
// Target type:     <no type info>
// ============================================================

void .find_custom_data_format(/* see target signature */)
{
    // Tail-call to find_custom_data_format via GOT/IAT indirection
    return find_custom_data_format(/* forwarded args */);
}

