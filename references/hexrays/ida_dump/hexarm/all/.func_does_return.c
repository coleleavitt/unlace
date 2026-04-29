// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2DFA0
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2DFA0 jmp     cs:off_4E97B8
//
// Resolved target: func_does_return
// Target address:  0x4EC1D0
// GOT/IAT slot:    0x4E97B8
// Slot symbol:     off_4E97B8
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

