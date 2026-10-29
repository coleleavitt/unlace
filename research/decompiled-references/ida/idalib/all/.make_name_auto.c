// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD8F0
// Name:            .make_name_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD8F0 jmp     cs:off_2C7C460
//
// Resolved target: make_name_auto
// Target address:  0x4CE600
// GOT/IAT slot:    0x2C7C460
// Slot symbol:     off_2C7C460
// Target type:     __int64 __fastcall(int)
// ============================================================

/* see target sig */ .make_name_auto(/* see target signature */)
{
    // Tail-call to make_name_auto via GOT/IAT indirection
    return make_name_auto(/* forwarded args */);
}

