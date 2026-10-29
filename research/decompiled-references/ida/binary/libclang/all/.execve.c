// attributes: thunk
int execve(const char *path, char *const argv[], char *const envp[])
{
  return execve(path, argv, envp);
}

