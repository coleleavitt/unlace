// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x102F0
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x102F0 jmp     cs:off_2E160
//
// Resolved target: _Unwind_Resume
// Target address:  0x36DF0
// GOT/IAT slot:    0x2E160
// Slot symbol:     off_2E160
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

