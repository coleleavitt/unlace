// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2A9230
// Name:            .posix_spawn_file_actions_adddup2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2A9230 jmp     cs:off_2C7A100
//
// Resolved target: posix_spawn_file_actions_adddup2
// Target address:  0x2D11710
// GOT/IAT slot:    0x2C7A100
// Slot symbol:     off_2C7A100
// Target type:     int(posix_spawn_file_actions_t *file_actions, int fd, int newfd)
// ============================================================

/* see target sig */ .posix_spawn_file_actions_adddup2(/* see target signature */)
{
    // Tail-call to posix_spawn_file_actions_adddup2 via GOT/IAT indirection
    return posix_spawn_file_actions_adddup2(/* forwarded args */);
}

