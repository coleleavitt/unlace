// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A93A0
// Name:            .qfsize
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A93A0 jmp     cs:off_2C7A1B8
//
// Resolved target: qfsize
// Target address:  0x82F850
// GOT/IAT slot:    0x2C7A1B8
// Slot symbol:     off_2C7A1B8
// Target type:     <no type info>
// ============================================================

void .qfsize(/* see target signature */)
{
    // Tail-call to qfsize via GOT/IAT indirection
    return qfsize(/* forwarded args */);
}

