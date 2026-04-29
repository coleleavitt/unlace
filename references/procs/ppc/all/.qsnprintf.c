// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20860
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20860 jmp     cs:off_95418
//
// Resolved target: qsnprintf
// Target address:  0x95E50
// GOT/IAT slot:    0x95418
// Slot symbol:     off_95418
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

