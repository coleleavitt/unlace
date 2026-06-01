// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD9A0
// Name:            .is_attached_custom_data_format
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD9A0 jmp     cs:off_2C7C4B8
//
// Resolved target: is_attached_custom_data_format
// Target address:  0x3E8FB0
// GOT/IAT slot:    0x2C7C4B8
// Slot symbol:     off_2C7C4B8
// Target type:     <no type info>
// ============================================================

void .is_attached_custom_data_format(/* see target signature */)
{
    // Tail-call to is_attached_custom_data_format via GOT/IAT indirection
    return is_attached_custom_data_format(/* forwarded args */);
}

