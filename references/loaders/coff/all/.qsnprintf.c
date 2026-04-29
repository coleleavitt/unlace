// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4400
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4400 jmp     cs:off_231E8
//
// Resolved target: qsnprintf
// Target address:  0x23608
// GOT/IAT slot:    0x231E8
// Slot symbol:     off_231E8
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

