// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2280
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2280 jmp     cs:off_15128
//
// Resolved target: _Unwind_Resume
// Target address:  0x15328
// GOT/IAT slot:    0x15128
// Slot symbol:     off_15128
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

