// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9630
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9630 jmp     cs:off_89300
//
// Resolved target: qstpncpy
// Target address:  0x8C608
// GOT/IAT slot:    0x89300
// Slot symbol:     off_89300
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

