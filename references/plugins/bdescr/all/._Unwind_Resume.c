// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_70B0
//
// Resolved target: _Unwind_Resume
// Target address:  0x71F8
// GOT/IAT slot:    0x70B0
// Slot symbol:     off_70B0
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

