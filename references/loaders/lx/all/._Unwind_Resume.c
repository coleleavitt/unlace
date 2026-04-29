// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2400
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2400 jmp     cs:off_B1E8
//
// Resolved target: _Unwind_Resume
// Target address:  0xB4A8
// GOT/IAT slot:    0xB1E8
// Slot symbol:     off_B1E8
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

