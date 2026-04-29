// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA620
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA620 jmp     cs:off_CA2F8
//
// Resolved target: func_does_return
// Target address:  0xD0C30
// GOT/IAT slot:    0xCA2F8
// Slot symbol:     off_CA2F8
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

