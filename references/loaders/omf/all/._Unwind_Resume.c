// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35D0
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35D0 jmp     cs:off_142D0
//
// Resolved target: _Unwind_Resume
// Target address:  0x148E0
// GOT/IAT slot:    0x142D0
// Slot symbol:     off_142D0
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

