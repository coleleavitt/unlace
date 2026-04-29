// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4600
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4600 jmp     cs:off_4E2E8
//
// Resolved target: _ZdlPvm
// Target address:  0x4F8F8
// GOT/IAT slot:    0x4E2E8
// Slot symbol:     off_4E2E8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

