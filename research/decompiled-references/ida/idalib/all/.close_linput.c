// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9CB0
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9CB0 jmp     cs:off_2C7A640
//
// Resolved target: close_linput
// Target address:  0x837430
// GOT/IAT slot:    0x2C7A640
// Slot symbol:     off_2C7A640
// Target type:     __int64 __fastcall(void *)
// ============================================================

/* see target sig */ .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

