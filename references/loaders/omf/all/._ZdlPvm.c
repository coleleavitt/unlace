// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3380
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3380 jmp     cs:off_141A8
//
// Resolved target: _ZdlPvm
// Target address:  0x14798
// GOT/IAT slot:    0x141A8
// Slot symbol:     off_141A8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

