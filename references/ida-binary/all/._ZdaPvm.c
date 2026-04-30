// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1112E0
// Name:            ._ZdaPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1112E0 jmp     cs:_ZdaPvm_ptr
//
// Resolved target: _ZdaPvm
// Target address:  0x8D3238
// GOT/IAT slot:    0x89F610
// Slot symbol:     _ZdaPvm_ptr
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdaPvm(/* see target signature */)
{
    // Tail-call to _ZdaPvm via GOT/IAT indirection
    return _ZdaPvm(/* forwarded args */);
}

