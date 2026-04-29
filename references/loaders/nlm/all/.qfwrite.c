// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2300
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2300 jmp     cs:off_8168
//
// Resolved target: qfwrite
// Target address:  0x8858
// GOT/IAT slot:    0x8168
// Slot symbol:     off_8168
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

