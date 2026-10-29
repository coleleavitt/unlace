// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A91B0
// Name:            .qexit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A91B0 jmp     cs:off_2C7A0C0
//
// Resolved target: qexit
// Target address:  0x840D40
// GOT/IAT slot:    0x2C7A0C0
// Slot symbol:     off_2C7A0C0
// Target type:     void __fastcall __noreturn(int status)
// ============================================================

/* see target sig */ .qexit(/* see target signature */)
{
    // Tail-call to qexit via GOT/IAT indirection
    return qexit(/* forwarded args */);
}

