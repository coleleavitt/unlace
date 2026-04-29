// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25E0
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x25E0 jmp     cs:off_B2D8
//
// Resolved target: _Unwind_Resume
// Target address:  0xB790
// GOT/IAT slot:    0xB2D8
// Slot symbol:     off_B2D8
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

