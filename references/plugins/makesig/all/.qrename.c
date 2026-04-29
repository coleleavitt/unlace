// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3330
// Name:            .qrename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3330 jmp     cs:off_20180
//
// Resolved target: qrename
// Target address:  0x21A90
// GOT/IAT slot:    0x20180
// Slot symbol:     off_20180
// Target type:     <no type info>
// ============================================================

void .qrename(/* see target signature */)
{
    // Tail-call to qrename via GOT/IAT indirection
    return qrename(/* forwarded args */);
}

