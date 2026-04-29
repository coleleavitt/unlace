// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AF80
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AF80 jmp     cs:off_4DA7A8
//
// Resolved target: func_does_return
// Target address:  0x4DD1A0
// GOT/IAT slot:    0x4DA7A8
// Slot symbol:     off_4DA7A8
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

