// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AD980
// Name:            .posix_spawn_file_actions_addopen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AD980 jmp     cs:off_2C7C4A8
//
// Resolved target: posix_spawn_file_actions_addopen
// Target address:  0x2D12068
// GOT/IAT slot:    0x2C7C4A8
// Slot symbol:     off_2C7C4A8
// Target type:     int(posix_spawn_file_actions_t *file_actions, int fd, const char *path, int oflag, mode_t mode)
// ============================================================

/* see target sig */ .posix_spawn_file_actions_addopen(/* see target signature */)
{
    // Tail-call to posix_spawn_file_actions_addopen via GOT/IAT indirection
    return posix_spawn_file_actions_addopen(/* forwarded args */);
}

