// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A4E0
// Name:            ._ZSt17__throw_bad_allocv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A4E0 jmp     cs:off_4C0258
//
// Resolved target: _ZSt17__throw_bad_allocv
// Target address:  0x4C3220
// GOT/IAT slot:    0x4C0258
// Slot symbol:     off_4C0258
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt17__throw_bad_allocv(/* see target signature */)
{
    // Tail-call to _ZSt17__throw_bad_allocv via GOT/IAT indirection
    return _ZSt17__throw_bad_allocv(/* forwarded args */);
}

