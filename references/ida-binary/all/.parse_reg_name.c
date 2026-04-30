// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1184A0
// Name:            .parse_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1184A0 jmp     cs:parse_reg_name_ptr
//
// Resolved target: parse_reg_name
// Target address:  0x8D7AE8
// GOT/IAT slot:    0x8A2EF0
// Slot symbol:     parse_reg_name_ptr
// Target type:     <no type info>
// ============================================================

void .parse_reg_name(/* see target signature */)
{
    // Tail-call to parse_reg_name via GOT/IAT indirection
    return parse_reg_name(/* forwarded args */);
}

