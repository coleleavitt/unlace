// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31E0
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31E0 jmp     cs:off_1A0D8
//
// Resolved target: func_does_return
// Target address:  0x1A390
// GOT/IAT slot:    0x1A0D8
// Slot symbol:     off_1A0D8
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

