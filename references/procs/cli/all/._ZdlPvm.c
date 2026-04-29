// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3230
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3230 jmp     cs:off_1A100
//
// Resolved target: _ZdlPvm
// Target address:  0x1A3B8
// GOT/IAT slot:    0x1A100
// Slot symbol:     off_1A100
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

