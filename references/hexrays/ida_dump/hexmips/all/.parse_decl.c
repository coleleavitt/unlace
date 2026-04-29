// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCB0
// Name:            .parse_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCB0 jmp     cs:off_4CDE40
//
// Resolved target: parse_decl
// Target address:  0x4D0890
// GOT/IAT slot:    0x4CDE40
// Slot symbol:     off_4CDE40
// Target type:     <no type info>
// ============================================================

void .parse_decl(/* see target signature */)
{
    // Tail-call to parse_decl via GOT/IAT indirection
    return parse_decl(/* forwarded args */);
}

