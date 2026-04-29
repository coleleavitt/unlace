// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2B340
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2B340 jmp     cs:off_4DA988
//
// Resolved target: qstpncpy
// Target address:  0x4DD388
// GOT/IAT slot:    0x4DA988
// Slot symbol:     off_4DA988
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

