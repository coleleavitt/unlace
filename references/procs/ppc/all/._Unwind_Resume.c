// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20E10
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20E10 jmp     cs:off_956F0
//
// Resolved target: _Unwind_Resume
// Target address:  0x96140
// GOT/IAT slot:    0x956F0
// Slot symbol:     off_956F0
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

