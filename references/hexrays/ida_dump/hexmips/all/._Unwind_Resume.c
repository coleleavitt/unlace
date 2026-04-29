// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BEE0
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BEE0 jmp     cs:off_4CDF58
//
// Resolved target: _Unwind_Resume
// Target address:  0x4D09A8
// GOT/IAT slot:    0x4CDF58
// Slot symbol:     off_4CDF58
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

