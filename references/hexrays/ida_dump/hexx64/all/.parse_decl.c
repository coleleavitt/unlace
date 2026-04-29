// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2CDC0
// Name:            .parse_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2CDC0 jmp     cs:off_4EDEC8
//
// Resolved target: parse_decl
// Target address:  0x4F2218
// GOT/IAT slot:    0x4EDEC8
// Slot symbol:     off_4EDEC8
// Target type:     <no type info>
// ============================================================

void .parse_decl(/* see target signature */)
{
    // Tail-call to parse_decl via GOT/IAT indirection
    return parse_decl(/* forwarded args */);
}

