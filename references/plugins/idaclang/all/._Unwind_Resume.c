// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34E0
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34E0 jmp     cs:off_29258
//
// Resolved target: _Unwind_Resume
// Target address:  0x29620
// GOT/IAT slot:    0x29258
// Slot symbol:     off_29258
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

