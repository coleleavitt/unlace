// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC80
// Name:            .parse_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC80 jmp     cs:off_4B9E28
//
// Resolved target: parse_decl
// Target address:  0x4BC858
// GOT/IAT slot:    0x4B9E28
// Slot symbol:     off_4B9E28
// Target type:     <no type info>
// ============================================================

void .parse_decl(/* see target signature */)
{
    // Tail-call to parse_decl via GOT/IAT indirection
    return parse_decl(/* forwarded args */);
}

