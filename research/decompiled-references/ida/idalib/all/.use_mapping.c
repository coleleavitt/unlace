// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2ABA40
// Name:            .use_mapping
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2ABA40 jmp     cs:off_2C7B508
//
// Resolved target: use_mapping
// Target address:  0x453EA0
// GOT/IAT slot:    0x2C7B508
// Slot symbol:     off_2C7B508
// Target type:     <no type info>
// ============================================================

void .use_mapping(/* see target signature */)
{
    // Tail-call to use_mapping via GOT/IAT indirection
    return use_mapping(/* forwarded args */);
}

