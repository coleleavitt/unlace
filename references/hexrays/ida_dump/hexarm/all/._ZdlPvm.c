// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E1D0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E1D0 jmp     cs:off_4E98D0
//
// Resolved target: _ZdlPvm
// Target address:  0x4EC2F0
// GOT/IAT slot:    0x4E98D0
// Slot symbol:     off_4E98D0
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

