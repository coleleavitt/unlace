// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DB10
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DB10 jmp     cs:off_B3570
//
// Resolved target: _Unwind_Resume
// Target address:  0xB3D40
// GOT/IAT slot:    0xB3570
// Slot symbol:     off_B3570
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

