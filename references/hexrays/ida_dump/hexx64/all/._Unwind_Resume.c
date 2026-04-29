// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D020
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2D020 jmp     cs:off_4EDFF8
//
// Resolved target: _Unwind_Resume
// Target address:  0x4F2348
// GOT/IAT slot:    0x4EDFF8
// Slot symbol:     off_4EDFF8
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

