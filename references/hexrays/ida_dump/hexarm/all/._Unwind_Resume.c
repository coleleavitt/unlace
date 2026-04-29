// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2EF10
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2EF10 jmp     cs:off_4E9F70
//
// Resolved target: _Unwind_Resume
// Target address:  0x4EC9C0
// GOT/IAT slot:    0x4E9F70
// Slot symbol:     off_4E9F70
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

