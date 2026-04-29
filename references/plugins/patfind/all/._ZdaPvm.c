// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23E0
// Name:            ._ZdaPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23E0 jmp     cs:off_131D8
//
// Resolved target: _ZdaPvm
// Target address:  0x13490
// GOT/IAT slot:    0x131D8
// Slot symbol:     off_131D8
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdaPvm(/* see target signature */)
{
    // Tail-call to _ZdaPvm via GOT/IAT indirection
    return _ZdaPvm(/* forwarded args */);
}

