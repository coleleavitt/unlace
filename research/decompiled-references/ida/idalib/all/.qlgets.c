// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9AE0
// Name:            .qlgets
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9AE0 jmp     cs:off_2C7A558
//
// Resolved target: qlgets
// Target address:  0x8379C0
// GOT/IAT slot:    0x2C7A558
// Slot symbol:     off_2C7A558
// Target type:     <no type info>
// ============================================================

void .qlgets(/* see target signature */)
{
    // Tail-call to qlgets via GOT/IAT indirection
    return qlgets(/* forwarded args */);
}

