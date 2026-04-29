// Alternative name is '_MACHOMERGER_TRAMPOLINE_mig_get_reply_port'
// attributes: thunk
mach_port_t dyld_mig_get_reply_port(void)
{
  return mig_get_reply_port();
}
