// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB4A0
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB4A0 jmp     cs:off_2C7B238
//
// Resolved target: parse_decls
// Target address:  0x60BAB0
// GOT/IAT slot:    0x2C7B238
// Slot symbol:     off_2C7B238
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

