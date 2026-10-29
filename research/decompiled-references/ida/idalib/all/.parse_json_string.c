// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9490
// Name:            .parse_json_string
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9490 jmp     cs:off_2C7A230
//
// Resolved target: parse_json_string
// Target address:  0x7ABC10
// GOT/IAT slot:    0x2C7A230
// Slot symbol:     off_2C7A230
// Target type:     <no type info>
// ============================================================

void .parse_json_string(/* see target signature */)
{
    // Tail-call to parse_json_string via GOT/IAT indirection
    return parse_json_string(/* forwarded args */);
}

