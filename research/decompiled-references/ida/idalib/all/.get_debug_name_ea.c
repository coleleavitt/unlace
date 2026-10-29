// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AACB0
// Name:            .get_debug_name_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AACB0 jmp     cs:off_2C7AE40
//
// Resolved target: get_debug_name_ea
// Target address:  0x4D4C70
// GOT/IAT slot:    0x2C7AE40
// Slot symbol:     off_2C7AE40
// Target type:     __int64 __fastcall(void *src)
// ============================================================

/* see target sig */ .get_debug_name_ea(/* see target signature */)
{
    // Tail-call to get_debug_name_ea via GOT/IAT indirection
    return get_debug_name_ea(/* forwarded args */);
}

