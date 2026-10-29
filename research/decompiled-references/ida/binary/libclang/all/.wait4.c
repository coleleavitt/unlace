// attributes: thunk
__pid_t wait4(__pid_t pid, __WAIT_STATUS stat_loc, int options, struct rusage *usage)
{
  return wait4(pid, stat_loc, options, usage);
}

