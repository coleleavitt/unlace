// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1240
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1240 jmp     cs:off_5108
//
// Resolved target: _Unwind_Resume
// Target address:  0x52F0
// GOT/IAT slot:    0x5108
// Slot symbol:     off_5108
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

