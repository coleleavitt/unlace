// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6390
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6390 jmp     cs:off_1D1B0
//
// Resolved target: func_does_return
// Target address:  0x1D6A0
// GOT/IAT slot:    0x1D1B0
// Slot symbol:     off_1D1B0
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

