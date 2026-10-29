// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11AFA0
// Name:            .parse_binpat_str
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11AFA0 jmp     cs:parse_binpat_str_ptr
//
// Resolved target: parse_binpat_str
// Target address:  0x8D95F8
// GOT/IAT slot:    0x8A4470
// Slot symbol:     parse_binpat_str_ptr
// Target type:     <no type info>
// ============================================================

void .parse_binpat_str(/* see target signature */)
{
    // Tail-call to parse_binpat_str via GOT/IAT indirection
    return parse_binpat_str(/* forwarded args */);
}

