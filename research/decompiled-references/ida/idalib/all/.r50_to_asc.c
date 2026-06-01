// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A7660
// Name:            .r50_to_asc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A7660 jmp     cs:off_2C79318
//
// Resolved target: r50_to_asc
// Target address:  0x588A40
// GOT/IAT slot:    0x2C79318
// Slot symbol:     off_2C79318
// Target type:     <no type info>
// ============================================================

void .r50_to_asc(/* see target signature */)
{
    // Tail-call to r50_to_asc via GOT/IAT indirection
    return r50_to_asc(/* forwarded args */);
}

