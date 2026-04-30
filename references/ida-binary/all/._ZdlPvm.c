// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1116F0
// Name:            ._ZdlPvm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1116F0 jmp     cs:_ZdlPvm_ptr
//
// Resolved target: _ZdlPvm
// Target address:  0x8D3508
// GOT/IAT slot:    0x89F818
// Slot symbol:     _ZdlPvm_ptr
// Target type:     void(void *, unsigned __int64)
// ============================================================

/* see target sig */ ._ZdlPvm(/* see target signature */)
{
    // Tail-call to _ZdlPvm via GOT/IAT indirection
    return _ZdlPvm(/* forwarded args */);
}

