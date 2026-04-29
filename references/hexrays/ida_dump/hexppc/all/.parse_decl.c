// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BCA0
// Name:            .parse_decl
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BCA0 jmp     cs:off_4DAE38
//
// Resolved target: parse_decl
// Target address:  0x4DD868
// GOT/IAT slot:    0x4DAE38
// Slot symbol:     off_4DAE38
// Target type:     <no type info>
// ============================================================

void .parse_decl(/* see target signature */)
{
    // Tail-call to parse_decl via GOT/IAT indirection
    return parse_decl(/* forwarded args */);
}

