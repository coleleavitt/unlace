mach_msg_return_t __fastcall mach_msg_overwrite_trap(
        mach_msg_header_t *a1,
        mach_msg_option_t a2,
        mach_msg_size_t a3,
        mach_msg_size_t a4,
        mach_port_name_t a5,
        mach_msg_timeout_t a6,
        mach_port_name_t a7,
        mach_msg_header_t *a8)
{
  return mac_syscall(MACH_MSG_OVERWRITE_TRAP, a1, a2, a3, a4, a5, a6, a7, a8);
}
