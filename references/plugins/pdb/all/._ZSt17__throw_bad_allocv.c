// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D170
// Name:            ._ZSt17__throw_bad_allocv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D170 jmp     cs:off_B30A0
//
// Resolved target: _ZSt17__throw_bad_allocv
// Target address:  0xB3828
// GOT/IAT slot:    0xB30A0
// Slot symbol:     off_B30A0
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt17__throw_bad_allocv(/* see target signature */)
{
    // Tail-call to _ZSt17__throw_bad_allocv via GOT/IAT indirection
    return _ZSt17__throw_bad_allocv(/* forwarded args */);
}

