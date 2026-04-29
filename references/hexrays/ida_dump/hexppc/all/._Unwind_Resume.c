// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BED0
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BED0 jmp     cs:off_4DAF50
//
// Resolved target: _Unwind_Resume
// Target address:  0x4DD980
// GOT/IAT slot:    0x4DAF50
// Slot symbol:     off_4DAF50
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

