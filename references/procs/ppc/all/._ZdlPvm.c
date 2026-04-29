// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x208A0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x208A0 jmp     cs:off_95438
//
// Resolved target: _ZdlPvm
// Target address:  0x95E70
// GOT/IAT slot:    0x95438
// Slot symbol:     off_95438
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

