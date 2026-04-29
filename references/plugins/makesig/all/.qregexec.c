// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3530
// Name:            .qregexec
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3530 jmp     cs:off_20280
//
// Resolved target: qregexec
// Target address:  0x21BB0
// GOT/IAT slot:    0x20280
// Slot symbol:     off_20280
// Target type:     <no type info>
// ============================================================

void .qregexec(/* see target signature */)
{
    // Tail-call to qregexec via GOT/IAT indirection
    return qregexec(/* forwarded args */);
}

