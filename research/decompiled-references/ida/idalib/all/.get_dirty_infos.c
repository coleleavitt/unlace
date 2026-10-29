// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AB350
// Name:            .get_dirty_infos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AB350 jmp     cs:off_2C7B190
//
// Resolved target: get_dirty_infos
// Target address:  0x6529F0
// GOT/IAT slot:    0x2C7B190
// Slot symbol:     off_2C7B190
// Target type:     <no type info>
// ============================================================

void .get_dirty_infos(/* see target signature */)
{
    // Tail-call to get_dirty_infos via GOT/IAT indirection
    return get_dirty_infos(/* forwarded args */);
}

