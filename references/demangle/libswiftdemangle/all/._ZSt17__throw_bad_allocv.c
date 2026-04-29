// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5B0
// Name:            ._ZSt17__throw_bad_allocv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5B0 jmp     cs:off_482D8
//
// Resolved target: _ZSt17__throw_bad_allocv
// Target address:  0x48588
// GOT/IAT slot:    0x482D8
// Slot symbol:     off_482D8
// Target type:     void __noreturn()
// ============================================================

/* see target sig */ ._ZSt17__throw_bad_allocv(/* see target signature */)
{
    // Tail-call to _ZSt17__throw_bad_allocv via GOT/IAT indirection
    return _ZSt17__throw_bad_allocv(/* forwarded args */);
}

