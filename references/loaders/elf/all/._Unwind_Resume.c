// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99A0
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99A0 jmp     cs:off_894B8
//
// Resolved target: _Unwind_Resume
// Target address:  0x8C7E8
// GOT/IAT slot:    0x894B8
// Slot symbol:     off_894B8
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

