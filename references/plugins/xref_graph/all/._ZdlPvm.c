// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16180
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16180 jmp     cs:off_4F0A8
//
// Resolved target: _ZdlPvm
// Target address:  0x4FEF0
// GOT/IAT slot:    0x4F0A8
// Slot symbol:     off_4F0A8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

