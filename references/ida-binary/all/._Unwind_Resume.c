// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x113E30
// Name:            ._Unwind_Resume
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x113E30 jmp     cs:_Unwind_Resume_ptr
//
// Resolved target: _Unwind_Resume
// Target address:  0x8D4E60
// GOT/IAT slot:    0x8A0BB8
// Slot symbol:     _Unwind_Resume_ptr
// Target type:     void(struct _Unwind_Exception *)
// ============================================================

/* see target sig */ ._Unwind_Resume(/* see target signature */)
{
    // Tail-call to _Unwind_Resume via GOT/IAT indirection
    return _Unwind_Resume(/* forwarded args */);
}

