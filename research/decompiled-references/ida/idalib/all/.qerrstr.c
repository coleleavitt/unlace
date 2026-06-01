// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A86C0
// Name:            .qerrstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A86C0 jmp     cs:off_2C79B48
//
// Resolved target: qerrstr
// Target address:  0x82F3A0
// GOT/IAT slot:    0x2C79B48
// Slot symbol:     off_2C79B48
// Target type:     __int64 __fastcall(int errnum)
// ============================================================

/* see target sig */ .qerrstr(/* see target signature */)
{
    // Tail-call to qerrstr via GOT/IAT indirection
    return qerrstr(/* forwarded args */);
}

