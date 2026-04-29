// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C400
// Name:            .qstpncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C400 jmp     cs:off_4ED9E8
//
// Resolved target: qstpncpy
// Target address:  0x4F1D08
// GOT/IAT slot:    0x4ED9E8
// Slot symbol:     off_4ED9E8
// Target type:     <no type info>
// ============================================================

void .qstpncpy(/* see target signature */)
{
    // Tail-call to qstpncpy via GOT/IAT indirection
    return qstpncpy(/* forwarded args */);
}

