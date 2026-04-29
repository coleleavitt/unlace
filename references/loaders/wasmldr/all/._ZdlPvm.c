// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_150A0
//
// Resolved target: _ZdlPvm
// Target address:  0x15290
// GOT/IAT slot:    0x150A0
// Slot symbol:     off_150A0
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

