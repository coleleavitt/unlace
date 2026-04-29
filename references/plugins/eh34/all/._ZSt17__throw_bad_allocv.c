// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6130
// Name:            ._ZSt17__throw_bad_allocv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6130 jmp     cs:off_8D080
//
// Resolved target: _ZSt17__throw_bad_allocv
// Target address:  0x8D600
// GOT/IAT slot:    0x8D080
// Slot symbol:     off_8D080
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt17__throw_bad_allocv(/* see target signature */)
{
    // Tail-call to _ZSt17__throw_bad_allocv via GOT/IAT indirection
    return _ZSt17__throw_bad_allocv(/* forwarded args */);
}

