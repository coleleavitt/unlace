// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7390
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7390 jmp     cs:off_261B0
//
// Resolved target: _Unwind_Resume
// Target address:  0x26480
// GOT/IAT slot:    0x261B0
// Slot symbol:     off_261B0
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

