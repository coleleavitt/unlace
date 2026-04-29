// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5500
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5500 jmp     cs:off_1A268
//
// Resolved target: _Unwind_Resume
// Target address:  0x1A608
// GOT/IAT slot:    0x1A268
// Slot symbol:     off_1A268
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

