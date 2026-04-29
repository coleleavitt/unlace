// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CE20
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CE20 jmp     cs:off_4EDEF8
//
// Resolved target: qfwrite
// Target address:  0x4F2248
// GOT/IAT slot:    0x4EDEF8
// Slot symbol:     off_4EDEF8
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

