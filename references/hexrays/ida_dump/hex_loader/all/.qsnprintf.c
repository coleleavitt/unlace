// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_5098
//
// Resolved target: qsnprintf
// Target address:  0x5268
// GOT/IAT slot:    0x5098
// Slot symbol:     off_5098
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

