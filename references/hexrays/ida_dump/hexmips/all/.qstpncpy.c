// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B340
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B340 jmp     cs:off_4CD988
//
// Resolved target: qstpncpy
// Target address:  0x4D03A8
// GOT/IAT slot:    0x4CD988
// Slot symbol:     off_4CD988
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

