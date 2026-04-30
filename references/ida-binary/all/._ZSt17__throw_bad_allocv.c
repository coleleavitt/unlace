// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1170B0
// Name:            ._ZSt17__throw_bad_allocv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1170B0 jmp     cs:_ZSt17__throw_bad_allocv_ptr
//
// Resolved target: _ZSt17__throw_bad_allocv
// Target address:  0x8D6E40
// GOT/IAT slot:    0x8A24F8
// Slot symbol:     _ZSt17__throw_bad_allocv_ptr
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt17__throw_bad_allocv(/* see target signature */)
{
    // Tail-call to _ZSt17__throw_bad_allocv via GOT/IAT indirection
    return _ZSt17__throw_bad_allocv(/* forwarded args */);
}

