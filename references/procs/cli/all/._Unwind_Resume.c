// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3380
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3380 jmp     cs:off_1A1A8
//
// Resolved target: _Unwind_Resume
// Target address:  0x1A478
// GOT/IAT slot:    0x1A1A8
// Slot symbol:     off_1A1A8
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

