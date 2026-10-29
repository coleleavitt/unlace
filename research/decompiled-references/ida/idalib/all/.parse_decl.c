// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AAF70
// Name:            .parse_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AAF70 jmp     cs:off_2C7AFA0
//
// Resolved target: parse_decl
// Target address:  0x60A9D0
// GOT/IAT slot:    0x2C7AFA0
// Slot symbol:     off_2C7AFA0
// Target type:     <no type info>
// ============================================================

void .parse_decl(/* see target signature */)
{
    // Tail-call to parse_decl via GOT/IAT indirection
    return parse_decl(/* forwarded args */);
}

