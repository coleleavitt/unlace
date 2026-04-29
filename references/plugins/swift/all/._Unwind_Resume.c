// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4790
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4790 jmp     cs:off_283B0
//
// Resolved target: _Unwind_Resume
// Target address:  0x29D68
// GOT/IAT slot:    0x283B0
// Slot symbol:     off_283B0
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

