// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA200
// Name:            .unmake_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA200 jmp     cs:off_2C7A8E8
//
// Resolved target: unmake_linput
// Target address:  0x837410
// GOT/IAT slot:    0x2C7A8E8
// Slot symbol:     off_2C7A8E8
// Target type:     <no type info>
// ============================================================

void .unmake_linput(/* see target signature */)
{
    // Tail-call to unmake_linput via GOT/IAT indirection
    return unmake_linput(/* forwarded args */);
}

