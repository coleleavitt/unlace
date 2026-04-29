// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3320
// Name:            .get_bytes
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3320 jmp     cs:off_14178
//
// Resolved target: get_bytes
// Target address:  0x14768
// GOT/IAT slot:    0x14178
// Slot symbol:     off_14178
// Target type:     <no type info>
// ============================================================

void .get_bytes(/* see target signature */)
{
    // Tail-call to get_bytes via GOT/IAT indirection
    return get_bytes(/* forwarded args */);
}

