// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x112AC0
// Name:            ._ZdaPv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x112AC0 jmp     cs:_ZdaPv_ptr
//
// Resolved target: _ZdaPv
// Target address:  0x8D41A8
// GOT/IAT slot:    0x8A0200
// Slot symbol:     _ZdaPv_ptr
// Target type:     void(void *)
// ============================================================

/* see target sig */ ._ZdaPv(/* see target signature */)
{
    // Tail-call to _ZdaPv via GOT/IAT indirection
    return _ZdaPv(/* forwarded args */);
}

