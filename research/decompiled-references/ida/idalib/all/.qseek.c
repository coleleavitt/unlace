// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABA60
// Name:            .qseek
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABA60 jmp     cs:off_2C7B518
//
// Resolved target: qseek
// Target address:  0x83E8A0
// GOT/IAT slot:    0x2C7B518
// Slot symbol:     off_2C7B518
// Target type:     <no type info>
// ============================================================

void .qseek(/* see target signature */)
{
    // Tail-call to qseek via GOT/IAT indirection
    return qseek(/* forwarded args */);
}

