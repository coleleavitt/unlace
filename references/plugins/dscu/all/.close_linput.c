// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4290
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4290 jmp     cs:off_1F130
//
// Resolved target: close_linput
// Target address:  0x1F3E0
// GOT/IAT slot:    0x1F130
// Slot symbol:     off_1F130
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

