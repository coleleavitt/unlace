// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_80C0
//
// Resolved target: _ZdlPvm
// Target address:  0x8290
// GOT/IAT slot:    0x80C0
// Slot symbol:     off_80C0
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

