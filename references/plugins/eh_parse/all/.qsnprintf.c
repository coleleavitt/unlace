// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6550
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6550 jmp     cs:off_2F290
//
// Resolved target: qsnprintf
// Target address:  0x2F900
// GOT/IAT slot:    0x2F290
// Slot symbol:     off_2F290
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

