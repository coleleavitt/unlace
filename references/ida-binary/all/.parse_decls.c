// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x117E90
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x117E90 jmp     cs:parse_decls_ptr
//
// Resolved target: parse_decls
// Target address:  0x8D7740
// GOT/IAT slot:    0x8A2BE8
// Slot symbol:     parse_decls_ptr
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

