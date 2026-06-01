kern_return_t __fastcall syscall_thread_switch(mach_port_name_t a1, int a2, mach_msg_timeout_t a3)
{
  return mac_syscall(THREAD_SWITCH_TRAP, a1, a2, a3);
}
