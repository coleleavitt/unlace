// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD050
// Name:            .find_custom_data_format
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD050 jmp     cs:off_2C7C010
//
// Resolved target: find_custom_data_format
// Target address:  0x3EA0A0
// GOT/IAT slot:    0x2C7C010
// Slot symbol:     off_2C7C010
// Target type:     __int64 __fastcall(void *src)
// ============================================================

/* see target sig */ .find_custom_data_format(/* see target signature */)
{
    // Tail-call to find_custom_data_format via GOT/IAT indirection
    return find_custom_data_format(/* forwarded args */);
}

