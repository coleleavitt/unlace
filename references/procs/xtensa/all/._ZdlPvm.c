// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7270
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7270 jmp     cs:off_1D120
//
// Resolved target: _ZdlPvm
// Target address:  0x1D450
// GOT/IAT slot:    0x1D120
// Slot symbol:     off_1D120
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

