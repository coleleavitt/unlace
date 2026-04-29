// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8430
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8430 jmp     cs:off_2A200
//
// Resolved target: _ZdlPvm
// Target address:  0x2A770
// GOT/IAT slot:    0x2A200
// Slot symbol:     off_2A200
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

