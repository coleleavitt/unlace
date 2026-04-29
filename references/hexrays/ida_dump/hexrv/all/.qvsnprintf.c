// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B710
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B710 jmp     cs:off_4BFB70
//
// Resolved target: qvsnprintf
// Target address:  0x4C3070
// GOT/IAT slot:    0x4BFB70
// Slot symbol:     off_4BFB70
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

