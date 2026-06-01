// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7E40
// Name:            .qveprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7E40 jmp     cs:off_2C79708
//
// Resolved target: qveprintf
// Target address:  0x84E530
// GOT/IAT slot:    0x2C79708
// Slot symbol:     off_2C79708
// Target type:     <no type info>
// ============================================================

void .qveprintf(/* see target signature */)
{
    // Tail-call to qveprintf via GOT/IAT indirection
    return qveprintf(/* forwarded args */);
}

