// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2200
// Name:            .qvsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2200 jmp     cs:off_80E8
//
// Resolved target: qvsnprintf
// Target address:  0x82C0
// GOT/IAT slot:    0x80E8
// Slot symbol:     off_80E8
// Target type:     <no type info>
// ============================================================

void .qvsnprintf(/* see target signature */)
{
    // Tail-call to qvsnprintf via GOT/IAT indirection
    return qvsnprintf(/* forwarded args */);
}

