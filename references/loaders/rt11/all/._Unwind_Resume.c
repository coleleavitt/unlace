// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1250
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1250 jmp     cs:off_5110
//
// Resolved target: _Unwind_Resume
// Target address:  0x52A0
// GOT/IAT slot:    0x5110
// Slot symbol:     off_5110
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

