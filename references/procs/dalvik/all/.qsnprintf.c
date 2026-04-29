// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x52E0
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x52E0 jmp     cs:off_1A158
//
// Resolved target: qsnprintf
// Target address:  0x1A4E0
// GOT/IAT slot:    0x1A158
// Slot symbol:     off_1A158
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

