// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65A0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65A0 jmp     cs:off_2F2B8
//
// Resolved target: _ZdlPvm
// Target address:  0x2F928
// GOT/IAT slot:    0x2F2B8
// Slot symbol:     off_2F2B8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

