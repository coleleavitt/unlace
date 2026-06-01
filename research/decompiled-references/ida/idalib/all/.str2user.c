// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABD40
// Name:            .str2user
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABD40 jmp     cs:off_2C7B688
//
// Resolved target: str2user
// Target address:  0x8B6820
// GOT/IAT slot:    0x2C7B688
// Slot symbol:     off_2C7B688
// Target type:     <no type info>
// ============================================================

void .str2user(/* see target signature */)
{
    // Tail-call to str2user via GOT/IAT indirection
    return str2user(/* forwarded args */);
}

