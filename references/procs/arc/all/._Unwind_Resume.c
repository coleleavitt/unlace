// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8850
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8850 jmp     cs:off_2A410
//
// Resolved target: _Unwind_Resume
// Target address:  0x2BE38
// GOT/IAT slot:    0x2A410
// Slot symbol:     off_2A410
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

