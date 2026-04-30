// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113370
// Name:            ._ZdlPv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113370 jmp     cs:_ZdlPv_ptr
//
// Resolved target: _ZdlPv
// Target address:  0x8D4758
// GOT/IAT slot:    0x8A0658
// Slot symbol:     _ZdlPv_ptr
// Target type:     void(void *)
// ============================================================

/* see target sig */ ._ZdlPv(/* see target signature */)
{
    // Tail-call to _ZdlPv via GOT/IAT indirection
    return _ZdlPv(/* forwarded args */);
}

