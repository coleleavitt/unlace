// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2250
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2250 jmp     cs:off_B110
//
// Resolved target: _ZdlPvm
// Target address:  0xB3A8
// GOT/IAT slot:    0xB110
// Slot symbol:     off_B110
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

