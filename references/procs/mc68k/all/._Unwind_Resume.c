// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6660
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6660 jmp     cs:off_1D318
//
// Resolved target: _Unwind_Resume
// Target address:  0x1D820
// GOT/IAT slot:    0x1D318
// Slot symbol:     off_1D318
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

