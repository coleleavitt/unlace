// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11B9B0
// Name:            .is_attached_custom_data_format
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11B9B0 jmp     cs:is_attached_custom_data_format_ptr
//
// Resolved target: is_attached_custom_data_format
// Target address:  0x8D9C40
// GOT/IAT slot:    0x8A4978
// Slot symbol:     is_attached_custom_data_format_ptr
// Target type:     <no type info>
// ============================================================

void .is_attached_custom_data_format(/* see target signature */)
{
    // Tail-call to is_attached_custom_data_format via GOT/IAT indirection
    return is_attached_custom_data_format(/* forwarded args */);
}

