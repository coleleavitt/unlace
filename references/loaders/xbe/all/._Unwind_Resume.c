// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11F0
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11F0 jmp     cs:off_50E0
//
// Resolved target: _Unwind_Resume
// Target address:  0x5250
// GOT/IAT slot:    0x50E0
// Slot symbol:     off_50E0
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

