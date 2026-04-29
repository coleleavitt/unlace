// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3360
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3360 jmp     cs:off_20198
//
// Resolved target: _ZdlPvm
// Target address:  0x21AB8
// GOT/IAT slot:    0x20198
// Slot symbol:     off_20198
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

