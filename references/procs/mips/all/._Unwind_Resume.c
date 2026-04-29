// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C60
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C60 jmp     cs:off_75618
//
// Resolved target: _Unwind_Resume
// Target address:  0x75E80
// GOT/IAT slot:    0x75618
// Slot symbol:     off_75618
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

