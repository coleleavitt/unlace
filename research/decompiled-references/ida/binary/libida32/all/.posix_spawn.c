// attributes: thunk
int posix_spawn(
        pid_t *pid,
        const char *path,
        const posix_spawn_file_actions_t *file_actions,
        const posix_spawnattr_t *attrp,
        char *const argv[],
        char *const envp[])
{
  return posix_spawn(pid, path, file_actions, attrp, argv, envp);
}

