// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B4F0
// Name:            ._ZSt17__throw_bad_allocv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B4F0 jmp     cs:off_4ED260
//
// Resolved target: _ZSt17__throw_bad_allocv
// Target address:  0x4F1558
// GOT/IAT slot:    0x4ED260
// Slot symbol:     off_4ED260
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt17__throw_bad_allocv(/* see target signature */)
{
    // Tail-call to _ZSt17__throw_bad_allocv via GOT/IAT indirection
    return _ZSt17__throw_bad_allocv(/* forwarded args */);
}

