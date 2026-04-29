// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3370
// Name:            .close_linput
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3370 jmp     cs:off_201A0
//
// Resolved target: close_linput
// Target address:  0x21AC0
// GOT/IAT slot:    0x201A0
// Slot symbol:     off_201A0
// Target type:     <no type info>
// ============================================================

void .close_linput(/* see target signature */)
{
    // Tail-call to close_linput via GOT/IAT indirection
    return close_linput(/* forwarded args */);
}

