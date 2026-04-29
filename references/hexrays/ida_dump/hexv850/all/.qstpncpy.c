// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B340
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B340 jmp     cs:off_4C0988
//
// Resolved target: qstpncpy
// Target address:  0x4C3980
// GOT/IAT slot:    0x4C0988
// Slot symbol:     off_4C0988
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

