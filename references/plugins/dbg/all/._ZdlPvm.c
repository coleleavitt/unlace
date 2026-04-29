// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33A0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33A0 jmp     cs:off_131B8
//
// Resolved target: _ZdlPvm
// Target address:  0x13538
// GOT/IAT slot:    0x131B8
// Slot symbol:     off_131B8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

