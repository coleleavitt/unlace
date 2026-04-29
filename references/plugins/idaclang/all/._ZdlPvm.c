// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32F0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32F0 jmp     cs:off_29160
//
// Resolved target: _ZdlPvm
// Target address:  0x29510
// GOT/IAT slot:    0x29160
// Slot symbol:     off_29160
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

