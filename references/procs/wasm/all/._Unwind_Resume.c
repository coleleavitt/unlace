// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93C0
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93C0 jmp     cs:off_261C8
//
// Resolved target: _Unwind_Resume
// Target address:  0x264F0
// GOT/IAT slot:    0x261C8
// Slot symbol:     off_261C8
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

