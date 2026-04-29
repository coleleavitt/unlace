// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5E0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5E0 jmp     cs:off_352D8
//
// Resolved target: _ZdlPvm
// Target address:  0x35928
// GOT/IAT slot:    0x352D8
// Slot symbol:     off_352D8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

