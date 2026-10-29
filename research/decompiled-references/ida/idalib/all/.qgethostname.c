// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A78F0
// Name:            .qgethostname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A78F0 jmp     cs:off_2C79460
//
// Resolved target: qgethostname
// Target address:  0x83FFE0
// GOT/IAT slot:    0x2C79460
// Slot symbol:     off_2C79460
// Target type:     <no type info>
// ============================================================

void .qgethostname(/* see target signature */)
{
    // Tail-call to qgethostname via GOT/IAT indirection
    return qgethostname(/* forwarded args */);
}

