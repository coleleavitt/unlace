// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA500
// Name:            .func_does_return
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA500 jmp     cs:off_35268
//
// Resolved target: func_does_return
// Target address:  0x358B8
// GOT/IAT slot:    0x35268
// Slot symbol:     off_35268
// Target type:     <no type info>
// ============================================================

void .func_does_return(/* see target signature */)
{
    // Tail-call to func_does_return via GOT/IAT indirection
    return func_does_return(/* forwarded args */);
}

