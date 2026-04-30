// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x119030
// Name:            ._ZSt15future_categoryv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x119030 jmp     cs:_ZSt15future_categoryv_ptr
//
// Resolved target: _ZSt15future_categoryv
// Target address:  0x8D81E8
// GOT/IAT slot:    0x8A34B8
// Slot symbol:     _ZSt15future_categoryv_ptr
// Target type:     _QWORD()
// ============================================================

/* see target sig */ ._ZSt15future_categoryv(/* see target signature */)
{
    // Tail-call to _ZSt15future_categoryv via GOT/IAT indirection
    return _ZSt15future_categoryv(/* forwarded args */);
}

