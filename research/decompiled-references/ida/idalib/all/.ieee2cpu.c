// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ACB60
// Name:            .ieee2cpu
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ACB60 jmp     cs:off_2C7BD98
//
// Resolved target: ieee2cpu
// Target address:  0x5A3EA0
// GOT/IAT slot:    0x2C7BD98
// Slot symbol:     off_2C7BD98
// Target type:     <no type info>
// ============================================================

void .ieee2cpu(/* see target signature */)
{
    // Tail-call to ieee2cpu via GOT/IAT indirection
    return ieee2cpu(/* forwarded args */);
}

