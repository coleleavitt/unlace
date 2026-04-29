// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32C0
// Name:            .qsnprintf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32C0 jmp     cs:off_13148
//
// Resolved target: qsnprintf
// Target address:  0x13838
// GOT/IAT slot:    0x13148
// Slot symbol:     off_13148
// Target type:     <no type info>
// ============================================================

void .qsnprintf(/* see target signature */)
{
    // Tail-call to qsnprintf via GOT/IAT indirection
    return qsnprintf(/* forwarded args */);
}

