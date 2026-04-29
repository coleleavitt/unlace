// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2410
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2410 jmp     cs:off_B1F0
//
// Resolved target: _Unwind_Resume
// Target address:  0xB4A0
// GOT/IAT slot:    0xB1F0
// Slot symbol:     off_B1F0
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

