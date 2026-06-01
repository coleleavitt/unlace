// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A94E0
// Name:            .find_custom_data_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A94E0 jmp     cs:off_2C7A258
//
// Resolved target: find_custom_data_type
// Target address:  0x3E9F80
// GOT/IAT slot:    0x2C7A258
// Slot symbol:     off_2C7A258
// Target type:     __int64 __fastcall(void *src)
// ============================================================

/* see target sig */ .find_custom_data_type(/* see target signature */)
{
    // Tail-call to find_custom_data_type via GOT/IAT indirection
    return find_custom_data_type(/* forwarded args */);
}

