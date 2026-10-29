// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A8120
// Name:            .get_free_disk_space
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A8120 jmp     cs:off_2C79878
//
// Resolved target: get_free_disk_space
// Target address:  0x833B80
// GOT/IAT slot:    0x2C79878
// Slot symbol:     off_2C79878
// Target type:     <no type info>
// ============================================================

void .get_free_disk_space(/* see target signature */)
{
    // Tail-call to get_free_disk_space via GOT/IAT indirection
    return get_free_disk_space(/* forwarded args */);
}

