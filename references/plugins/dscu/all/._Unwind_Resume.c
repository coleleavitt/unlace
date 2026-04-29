// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4430
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4430 jmp     cs:off_1F200
//
// Resolved target: _Unwind_Resume
// Target address:  0x1F4D0
// GOT/IAT slot:    0x1F200
// Slot symbol:     off_1F200
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

