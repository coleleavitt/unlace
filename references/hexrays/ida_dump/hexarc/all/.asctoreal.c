// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A890
// Name:            .asctoreal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A890 jmp     cs:off_4B9C30
//
// Resolved target: asctoreal
// Target address:  0x4BC648
// GOT/IAT slot:    0x4B9C30
// Slot symbol:     off_4B9C30
// Target type:     <no type info>
// ============================================================

void .asctoreal(/* see target signature */)
{
    // Tail-call to asctoreal via GOT/IAT indirection
    return asctoreal(/* forwarded args */);
}

