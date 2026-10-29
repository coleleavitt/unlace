boolean_t swtch(void)
{
  return mac_syscall(SWTCH_TRAP);
}
