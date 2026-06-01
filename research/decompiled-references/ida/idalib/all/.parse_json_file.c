// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB110
// Name:            .parse_json_file
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB110 jmp     cs:off_2C7B070
//
// Resolved target: parse_json_file
// Target address:  0x7ABC20
// GOT/IAT slot:    0x2C7B070
// Slot symbol:     off_2C7B070
// Target type:     <no type info>
// ============================================================

void .parse_json_file(/* see target signature */)
{
    // Tail-call to parse_json_file via GOT/IAT indirection
    return parse_json_file(/* forwarded args */);
}

