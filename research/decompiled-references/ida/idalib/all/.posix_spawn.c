// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2AC840
// Name:            .posix_spawn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2AC840 jmp     cs:off_2C7BC08
//
// Resolved target: posix_spawn
// Target address:  0x2D11E08
// GOT/IAT slot:    0x2C7BC08
// Slot symbol:     off_2C7BC08
// Target type:     int(pid_t *pid, const char *path, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *attrp, char *const argv[], char *const envp[])
// ============================================================

/* see target sig */ .posix_spawn(/* see target signature */)
{
    // Tail-call to posix_spawn via GOT/IAT indirection
    return posix_spawn(/* forwarded args */);
}

