// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29F70
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x29F70 jmp     cs:off_4B97A0
//
// Resolved target: func_does_return
// Target address:  0x4BC198
// GOT/IAT slot:    0x4B97A0
// Slot symbol:     off_4B97A0
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

