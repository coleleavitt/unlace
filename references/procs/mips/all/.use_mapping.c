// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193A0
// Name:            .use_mapping
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193A0 jmp     cs:off_751B8
//
// Resolved target: use_mapping
// Target address:  0x75A08
// GOT/IAT slot:    0x751B8
// Slot symbol:     off_751B8
// Target type:     <no type info>
// ============================================================

void .use_mapping(/* see target signature */)
{
    // Tail-call to use_mapping via GOT/IAT indirection
    return use_mapping(/* forwarded args */);
}

