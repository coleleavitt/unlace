// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x115E20
// Name:            .parse_json
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x115E20 jmp     cs:parse_json_ptr
//
// Resolved target: parse_json
// Target address:  0x8D6288
// GOT/IAT slot:    0x8A1BB0
// Slot symbol:     parse_json_ptr
// Target type:     <no type info>
// ============================================================

void .parse_json(/* see target signature */)
{
    // Tail-call to parse_json via GOT/IAT indirection
    return parse_json(/* forwarded args */);
}

