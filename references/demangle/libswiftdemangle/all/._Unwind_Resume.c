// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA680
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA680 jmp     cs:off_48340
//
// Resolved target: _Unwind_Resume
// Target address:  0x485F0
// GOT/IAT slot:    0x48340
// Slot symbol:     off_48340
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

