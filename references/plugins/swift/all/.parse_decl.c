// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4710
// Name:            .parse_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4710 jmp     cs:off_28370
//
// Resolved target: parse_decl
// Target address:  0x29D28
// GOT/IAT slot:    0x28370
// Slot symbol:     off_28370
// Target type:     <no type info>
// ============================================================

void .parse_decl(/* see target signature */)
{
    // Tail-call to parse_decl via GOT/IAT indirection
    return parse_decl(/* forwarded args */);
}

