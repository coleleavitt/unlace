// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8440
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8440 jmp     cs:off_2A208
//
// Resolved target: func_does_return
// Target address:  0x2BC18
// GOT/IAT slot:    0x2A208
// Slot symbol:     off_2A208
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

