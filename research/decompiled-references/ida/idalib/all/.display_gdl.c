// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8530
// Name:            .display_gdl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8530 jmp     cs:off_2C79A80
//
// Resolved target: display_gdl
// Target address:  0x5DC1B0
// GOT/IAT slot:    0x2C79A80
// Slot symbol:     off_2C79A80
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .display_gdl(/* see target signature */)
{
    // Tail-call to display_gdl via GOT/IAT indirection
    return display_gdl(/* forwarded args */);
}

