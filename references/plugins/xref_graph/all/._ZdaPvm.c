// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16100
// Name:            ._ZdaPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16100 jmp     cs:off_4F068
//
// Resolved target: _ZdaPvm
// Target address:  0x4FE90
// GOT/IAT slot:    0x4F068
// Slot symbol:     off_4F068
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdaPvm(/* see target signature */)
{
    // Tail-call to _ZdaPvm via GOT/IAT indirection
    return _ZdaPvm(/* forwarded args */);
}

