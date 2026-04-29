// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22B0
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22B0 jmp     cs:off_A140
//
// Resolved target: qvsnprintf
// Target address:  0xA3F0
// GOT/IAT slot:    0xA140
// Slot symbol:     off_A140
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

