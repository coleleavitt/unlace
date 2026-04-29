// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCB0
// Name:            .parse_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCB0 jmp     cs:off_4C0E40
//
// Resolved target: parse_decl
// Target address:  0x4C3E68
// GOT/IAT slot:    0x4C0E40
// Slot symbol:     off_4C0E40
// Target type:     <no type info>
// ============================================================

void .parse_decl(/* see target signature */)
{
    // Tail-call to parse_decl via GOT/IAT indirection
    return parse_decl(/* forwarded args */);
}

