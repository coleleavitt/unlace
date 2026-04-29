// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2360
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2360 jmp     cs:off_13198
//
// Resolved target: _Unwind_Resume
// Target address:  0x13448
// GOT/IAT slot:    0x13198
// Slot symbol:     off_13198
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

