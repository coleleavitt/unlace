// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11C0
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11C0 jmp     cs:off_50C8
//
// Resolved target: qfwrite
// Target address:  0x5218
// GOT/IAT slot:    0x50C8
// Slot symbol:     off_50C8
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

