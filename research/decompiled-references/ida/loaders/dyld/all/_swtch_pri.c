boolean_t __cdecl swtch_pri(int pri)
{
  return mac_syscall(SWTCH_PRI_TRAP, pri);
}
