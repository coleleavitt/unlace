// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABFE0
// Name:            .eltoe
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABFE0 jmp     cs:off_2C7B7D8
//
// Resolved target: eltoe
// Target address:  0x8318F0
// GOT/IAT slot:    0x2C7B7D8
// Slot symbol:     off_2C7B7D8
// Target type:     <no type info>
// ============================================================

void .eltoe(/* see target signature */)
{
    // Tail-call to eltoe via GOT/IAT indirection
    return eltoe(/* forwarded args */);
}

