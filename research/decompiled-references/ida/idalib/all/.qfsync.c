// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ADBA0
// Name:            .qfsync
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ADBA0 jmp     cs:off_2C7C5B8
//
// Resolved target: qfsync
// Target address:  0x83EA80
// GOT/IAT slot:    0x2C7C5B8
// Slot symbol:     off_2C7C5B8
// Target type:     <no type info>
// ============================================================

void .qfsync(/* see target signature */)
{
    // Tail-call to qfsync via GOT/IAT indirection
    return qfsync(/* forwarded args */);
}

