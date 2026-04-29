// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20770
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20770 jmp     cs:off_953A0
//
// Resolved target: func_does_return
// Target address:  0x95DD8
// GOT/IAT slot:    0x953A0
// Slot symbol:     off_953A0
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

