// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10F0
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10F0 jmp     cs:off_5060
//
// Resolved target: qsnprintf
// Target address:  0x5178
// GOT/IAT slot:    0x5060
// Slot symbol:     off_5060
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

