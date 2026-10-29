// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7B40
// Name:            .get_errdesc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7B40 jmp     cs:off_2C79588
//
// Resolved target: get_errdesc
// Target address:  0x82F100
// GOT/IAT slot:    0x2C79588
// Slot symbol:     off_2C79588
// Target type:     __int64 __fastcall(void *src)
// ============================================================

/* see target sig */ .get_errdesc(/* see target signature */)
{
    // Tail-call to get_errdesc via GOT/IAT indirection
    return get_errdesc(/* forwarded args */);
}

