// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AC20
// Name:            ._exit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AC20 jmp     cs:_exit_ptr
//
// Resolved target: _exit
// Target address:  0x8D93D8
// GOT/IAT slot:    0x8A42B0
// Slot symbol:     _exit_ptr
// Target type:     void __noreturn(int status)
// ============================================================

/* see target sig */ ._exit(/* see target signature */)
{
    // Tail-call to _exit via GOT/IAT indirection
    return _exit(/* forwarded args */);
}

