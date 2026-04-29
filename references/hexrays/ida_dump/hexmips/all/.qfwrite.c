// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BD00
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BD00 jmp     cs:off_4CDE68
//
// Resolved target: qfwrite
// Target address:  0x4D08B8
// GOT/IAT slot:    0x4CDE68
// Slot symbol:     off_4CDE68
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

