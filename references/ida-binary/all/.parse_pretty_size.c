// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118F60
// Name:            .parse_pretty_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118F60 jmp     cs:parse_pretty_size_ptr
//
// Resolved target: parse_pretty_size
// Target address:  0x8D8170
// GOT/IAT slot:    0x8A3450
// Slot symbol:     parse_pretty_size_ptr
// Target type:     <no type info>
// ============================================================

void .parse_pretty_size(/* see target signature */)
{
    // Tail-call to parse_pretty_size via GOT/IAT indirection
    return parse_pretty_size(/* forwarded args */);
}

