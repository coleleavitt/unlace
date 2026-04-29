// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3460
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3460 jmp     cs:off_13218
//
// Resolved target: qvsnprintf
// Target address:  0x13598
// GOT/IAT slot:    0x13218
// Slot symbol:     off_13218
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

