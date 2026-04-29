// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BFF0
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BFF0 jmp     cs:off_4ED7E0
//
// Resolved target: func_does_return
// Target address:  0x4F1AF0
// GOT/IAT slot:    0x4ED7E0
// Slot symbol:     off_4ED7E0
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

