// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C260
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C260 jmp     cs:off_4ED918
//
// Resolved target: _ZdlPvm
// Target address:  0x4F1C38
// GOT/IAT slot:    0x4ED918
// Slot symbol:     off_4ED918
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

