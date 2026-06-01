// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB290
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB290 jmp     cs:off_2C7B130
//
// Resolved target: segtype
// Target address:  0x5101E0
// GOT/IAT slot:    0x2C7B130
// Slot symbol:     off_2C7B130
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

