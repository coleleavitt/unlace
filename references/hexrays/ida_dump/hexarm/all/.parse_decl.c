// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ECE0
// Name:            .parse_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ECE0 jmp     cs:off_4E9E58
//
// Resolved target: parse_decl
// Target address:  0x4EC8A8
// GOT/IAT slot:    0x4E9E58
// Slot symbol:     off_4E9E58
// Target type:     <no type info>
// ============================================================

void .parse_decl(/* see target signature */)
{
    // Tail-call to parse_decl via GOT/IAT indirection
    return parse_decl(/* forwarded args */);
}

