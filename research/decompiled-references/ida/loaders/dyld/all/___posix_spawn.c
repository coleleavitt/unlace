int __fastcall __posix_spawn(
        pid_t *a1,
        const char *a2,
        const posix_spawn_file_actions_t *a3,
        const posix_spawnattr_t *a4,
        char *const *a5,
        char *const *a6)
{
  char v6; // cf
  __int64 v7; // x0

  LODWORD(v7) = mac_syscall(SYS_posix_spawn, a1, a2, a3, a4, a5, a6);
  if ( v6 )
    LODWORD(v7) = cerror(v7);
  return v7;
}
