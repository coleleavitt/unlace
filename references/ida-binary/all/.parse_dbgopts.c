// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x118B40
// Name:            .parse_dbgopts
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x118B40 jmp     cs:parse_dbgopts_ptr
//
// Resolved target: parse_dbgopts
// Target address:  0x8D7EE8
// GOT/IAT slot:    0x8A3240
// Slot symbol:     parse_dbgopts_ptr
// Target type:     <no type info>
// ============================================================

void .parse_dbgopts(/* see target signature */)
{
    // Tail-call to parse_dbgopts via GOT/IAT indirection
    return parse_dbgopts(/* forwarded args */);
}

