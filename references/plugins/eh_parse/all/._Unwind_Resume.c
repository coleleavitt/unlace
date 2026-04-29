// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6960
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6960 jmp     cs:off_2F498
//
// Resolved target: _Unwind_Resume
// Target address:  0x2FB28
// GOT/IAT slot:    0x2F498
// Slot symbol:     off_2F498
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

