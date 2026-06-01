// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD900
// Name:            .posix_spawn_file_actions_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD900 jmp     cs:off_2C7C468
//
// Resolved target: posix_spawn_file_actions_destroy
// Target address:  0x2D12058
// GOT/IAT slot:    0x2C7C468
// Slot symbol:     off_2C7C468
// Target type:     int(posix_spawn_file_actions_t *file_actions)
// ============================================================

/* see target sig */ .posix_spawn_file_actions_destroy(/* see target signature */)
{
    // Tail-call to posix_spawn_file_actions_destroy via GOT/IAT indirection
    return posix_spawn_file_actions_destroy(/* forwarded args */);
}

