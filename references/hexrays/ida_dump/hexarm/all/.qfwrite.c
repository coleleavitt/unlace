// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ED30
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ED30 jmp     cs:off_4E9E80
//
// Resolved target: qfwrite
// Target address:  0x4EC8D0
// GOT/IAT slot:    0x4E9E80
// Slot symbol:     off_4E9E80
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

