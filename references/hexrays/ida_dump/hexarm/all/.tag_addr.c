// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2E0B0
// Name:            .tag_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2E0B0 jmp     cs:off_4E9840
//
// Resolved target: tag_addr
// Target address:  0x4EC260
// GOT/IAT slot:    0x4E9840
// Slot symbol:     off_4E9840
// Target type:     <no type info>
// ============================================================

void .tag_addr(/* see target signature */)
{
    // Tail-call to tag_addr via GOT/IAT indirection
    return tag_addr(/* forwarded args */);
}

