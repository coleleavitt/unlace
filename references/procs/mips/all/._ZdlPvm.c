// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19760
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19760 jmp     cs:off_75398
//
// Resolved target: _ZdlPvm
// Target address:  0x75BE8
// GOT/IAT slot:    0x75398
// Slot symbol:     off_75398
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

