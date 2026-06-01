// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAB00
// Name:            .getn_hidden_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAB00 jmp     cs:off_2C7AD68
//
// Resolved target: getn_hidden_range
// Target address:  0x3C76C0
// GOT/IAT slot:    0x2C7AD68
// Slot symbol:     off_2C7AD68
// Target type:     <no type info>
// ============================================================

void .getn_hidden_range(/* see target signature */)
{
    // Tail-call to getn_hidden_range via GOT/IAT indirection
    return getn_hidden_range(/* forwarded args */);
}

