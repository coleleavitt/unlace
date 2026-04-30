// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1181F0
// Name:            ._ZSt17current_exceptionv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1181F0 jmp     cs:_ZSt17current_exceptionv_ptr
//
// Resolved target: _ZSt17current_exceptionv
// Target address:  0x8D7948
// GOT/IAT slot:    0x8A2D98
// Slot symbol:     _ZSt17current_exceptionv_ptr
// Target type:     _QWORD()
// ============================================================

/* see target sig */ ._ZSt17current_exceptionv(/* see target signature */)
{
    // Tail-call to _ZSt17current_exceptionv via GOT/IAT indirection
    return _ZSt17current_exceptionv(/* forwarded args */);
}

