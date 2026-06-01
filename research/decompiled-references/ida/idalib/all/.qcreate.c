// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AA310
// Name:            .qcreate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AA310 jmp     cs:off_2C7A970
//
// Resolved target: qcreate
// Target address:  0x83EA40
// GOT/IAT slot:    0x2C7A970
// Slot symbol:     off_2C7A970
// Target type:     <no type info>
// ============================================================

void .qcreate(/* see target signature */)
{
    // Tail-call to qcreate via GOT/IAT indirection
    return qcreate(/* forwarded args */);
}

