// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6750
// Name:            .qstrncat
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6750 jmp     cs:off_24390
//
// Resolved target: qstrncat
// Target address:  0x26178
// GOT/IAT slot:    0x24390
// Slot symbol:     off_24390
// Target type:     <no type info>
// ============================================================

void .qstrncat(/* see target signature */)
{
    // Tail-call to qstrncat via GOT/IAT indirection
    return qstrncat(/* forwarded args */);
}

