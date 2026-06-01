// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC020
// Name:            .qrename
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC020 jmp     cs:off_2C7B7F8
//
// Resolved target: qrename
// Target address:  0x83F280
// GOT/IAT slot:    0x2C7B7F8
// Slot symbol:     off_2C7B7F8
// Target type:     <no type info>
// ============================================================

void .qrename(/* see target signature */)
{
    // Tail-call to qrename via GOT/IAT indirection
    return qrename(/* forwarded args */);
}

