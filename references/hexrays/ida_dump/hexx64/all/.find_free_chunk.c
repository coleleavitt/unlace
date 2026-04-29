// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2C170
// Name:            .find_free_chunk
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2C170 jmp     cs:off_4ED8A0
//
// Resolved target: find_free_chunk
// Target address:  0x4F1BC0
// GOT/IAT slot:    0x4ED8A0
// Slot symbol:     off_4ED8A0
// Target type:     <no type info>
// ============================================================

void .find_free_chunk(/* see target signature */)
{
    // Tail-call to find_free_chunk via GOT/IAT indirection
    return find_free_chunk(/* forwarded args */);
}

