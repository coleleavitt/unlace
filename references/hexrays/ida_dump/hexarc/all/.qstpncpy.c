// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A340
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A340 jmp     cs:off_4B9988
//
// Resolved target: qstpncpy
// Target address:  0x4BC388
// GOT/IAT slot:    0x4B9988
// Slot symbol:     off_4B9988
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

