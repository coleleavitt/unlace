// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D620
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D620 jmp     cs:off_B32F8
//
// Resolved target: _ZdlPvm
// Target address:  0xB3A98
// GOT/IAT slot:    0xB32F8
// Slot symbol:     off_B32F8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

