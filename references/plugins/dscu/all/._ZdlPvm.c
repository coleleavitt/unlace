// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4280
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4280 jmp     cs:off_1F128
//
// Resolved target: _ZdlPvm
// Target address:  0x1F3D8
// GOT/IAT slot:    0x1F128
// Slot symbol:     off_1F128
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

