// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E150
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E150 jmp     cs:off_4E9890
//
// Resolved target: qsnprintf
// Target address:  0x4EC2B0
// GOT/IAT slot:    0x4E9890
// Slot symbol:     off_4E9890
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

