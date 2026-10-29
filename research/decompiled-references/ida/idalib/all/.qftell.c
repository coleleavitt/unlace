// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A84A0
// Name:            .qftell
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A84A0 jmp     cs:off_2C79A38
//
// Resolved target: qftell
// Target address:  0x83F130
// GOT/IAT slot:    0x2C79A38
// Slot symbol:     off_2C79A38
// Target type:     <no type info>
// ============================================================

void .qftell(/* see target signature */)
{
    // Tail-call to qftell via GOT/IAT indirection
    return qftell(/* forwarded args */);
}

