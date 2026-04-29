// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2BDA0
// Name:            .get_strid
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2BDA0 jmp     cs:off_4ED6B8
//
// Resolved target: get_strid
// Target address:  0x4F19C8
// GOT/IAT slot:    0x4ED6B8
// Slot symbol:     off_4ED6B8
// Target type:     <no type info>
// ============================================================

void .get_strid(/* see target signature */)
{
    // Tail-call to get_strid via GOT/IAT indirection
    return get_strid(/* forwarded args */);
}

