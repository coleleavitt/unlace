// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B1B0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B1B0 jmp     cs:off_4BF8C0
//
// Resolved target: _ZdlPvm
// Target address:  0x4C2DB8
// GOT/IAT slot:    0x4BF8C0
// Slot symbol:     off_4BF8C0
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

