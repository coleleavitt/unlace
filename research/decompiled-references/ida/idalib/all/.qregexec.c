// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACD20
// Name:            .qregexec
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACD20 jmp     cs:off_2C7BE78
//
// Resolved target: qregexec
// Target address:  0x89FB80
// GOT/IAT slot:    0x2C7BE78
// Slot symbol:     off_2C7BE78
// Target type:     <no type info>
// ============================================================

void .qregexec(/* see target signature */)
{
    // Tail-call to qregexec via GOT/IAT indirection
    return qregexec(/* forwarded args */);
}

