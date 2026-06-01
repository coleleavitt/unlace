// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11A350
// Name:            .ieee2cpu
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11A350 jmp     cs:ieee2cpu_ptr
//
// Resolved target: ieee2cpu
// Target address:  0x8D8E00
// GOT/IAT slot:    0x8A3E48
// Slot symbol:     ieee2cpu_ptr
// Target type:     <no type info>
// ============================================================

void .ieee2cpu(/* see target signature */)
{
    // Tail-call to ieee2cpu via GOT/IAT indirection
    return ieee2cpu(/* forwarded args */);
}

