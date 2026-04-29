// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B340
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B340 jmp     cs:off_4BF988
//
// Resolved target: qstpncpy
// Target address:  0x4C2E80
// GOT/IAT slot:    0x4BF988
// Slot symbol:     off_4BF988
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

