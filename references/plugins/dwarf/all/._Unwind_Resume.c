// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC60
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC60 jmp     cs:off_CA618
//
// Resolved target: _Unwind_Resume
// Target address:  0xD0F78
// GOT/IAT slot:    0xCA618
// Slot symbol:     off_CA618
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

