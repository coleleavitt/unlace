// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6270
// Name:            .use_mapping
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6270 jmp     cs:off_24120
//
// Resolved target: use_mapping
// Target address:  0x25EF0
// GOT/IAT slot:    0x24120
// Slot symbol:     off_24120
// Target type:     <no type info>
// ============================================================

void .use_mapping(/* see target signature */)
{
    // Tail-call to use_mapping via GOT/IAT indirection
    return use_mapping(/* forwarded args */);
}

