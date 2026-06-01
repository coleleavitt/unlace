// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABFB0
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABFB0 jmp     cs:off_2C7B7C0
//
// Resolved target: qstpncpy
// Target address:  0x841CA0
// GOT/IAT slot:    0x2C7B7C0
// Slot symbol:     off_2C7B7C0
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

