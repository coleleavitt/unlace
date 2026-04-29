// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D9C0
// Name:            .qclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D9C0 jmp     cs:off_B34C8
//
// Resolved target: qclose
// Target address:  0xB3C80
// GOT/IAT slot:    0xB34C8
// Slot symbol:     off_B34C8
// Target type:     <no type info>
// ============================================================

void .qclose(/* see target signature */)
{
    // Tail-call to qclose via GOT/IAT indirection
    return qclose(/* forwarded args */);
}

