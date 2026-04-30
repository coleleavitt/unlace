// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1128F0
// Name:            ._ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1128F0 jmp     cs:_ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE_ptr
//
// Resolved target: _ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE
// Target address:  0x8D4088
// GOT/IAT slot:    0x8A0118
// Slot symbol:     _ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE_ptr
// Target type:     <no type info>
// ============================================================

void ._ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE(/* see target signature */)
{
    // Tail-call to _ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE via GOT/IAT indirection
    return _ZSt17rethrow_exceptionNSt15__exception_ptr13exception_ptrE(/* forwarded args */);
}

