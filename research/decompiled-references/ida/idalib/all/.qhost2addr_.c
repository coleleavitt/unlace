// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A74D0
// Name:            .qhost2addr_
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A74D0 jmp     cs:off_2C79250
//
// Resolved target: qhost2addr_
// Target address:  0x83FEA0
// GOT/IAT slot:    0x2C79250
// Slot symbol:     off_2C79250
// Target type:     <no type info>
// ============================================================

void .qhost2addr_(/* see target signature */)
{
    // Tail-call to qhost2addr_ via GOT/IAT indirection
    return qhost2addr_(/* forwarded args */);
}

