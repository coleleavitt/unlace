// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC1F0
// Name:            .print_idcv
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC1F0 jmp     cs:off_2C7B8E0
//
// Resolved target: print_idcv
// Target address:  0x79B120
// GOT/IAT slot:    0x2C7B8E0
// Slot symbol:     off_2C7B8E0
// Target type:     <no type info>
// ============================================================

void .print_idcv(/* see target signature */)
{
    // Tail-call to print_idcv via GOT/IAT indirection
    return print_idcv(/* forwarded args */);
}

