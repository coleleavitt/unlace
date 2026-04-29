// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21F0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21F0 jmp     cs:off_A0E0
//
// Resolved target: _ZdlPvm
// Target address:  0xB3B0
// GOT/IAT slot:    0xA0E0
// Slot symbol:     off_A0E0
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

