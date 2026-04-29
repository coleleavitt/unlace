// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1270
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1270 jmp     cs:off_6120
//
// Resolved target: _Unwind_Resume
// Target address:  0x62B8
// GOT/IAT slot:    0x6120
// Slot symbol:     off_6120
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

