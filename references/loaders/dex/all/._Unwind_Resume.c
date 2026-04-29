// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3700
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3700 jmp     cs:off_28368
//
// Resolved target: _Unwind_Resume
// Target address:  0x28830
// GOT/IAT slot:    0x28368
// Slot symbol:     off_28368
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

