// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1147B0
// Name:            .parse_json_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1147B0 jmp     cs:parse_json_string_ptr
//
// Resolved target: parse_json_string
// Target address:  0x8D5438
// GOT/IAT slot:    0x8A1078
// Slot symbol:     parse_json_string_ptr
// Target type:     <no type info>
// ============================================================

void .parse_json_string(/* see target signature */)
{
    // Tail-call to parse_json_string via GOT/IAT indirection
    return parse_json_string(/* forwarded args */);
}

