// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6790
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6790 jmp     cs:off_2D3B0
//
// Resolved target: _Unwind_Resume
// Target address:  0x2D8D0
// GOT/IAT slot:    0x2D3B0
// Slot symbol:     off_2D3B0
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

