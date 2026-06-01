// Alternative name is '_MACHOMERGER_TRAMPOLINE_mach_msg_overwrite'
// attributes: thunk
mach_msg_return_t __cdecl mach_msg_overwrite_0(
        mach_msg_header_t *msg,
        mach_msg_option_t option,
        mach_msg_size_t send_size,
        mach_msg_size_t rcv_size,
        mach_port_name_t rcv_name,
        mach_msg_timeout_t timeout,
        mach_port_name_t notify,
        mach_msg_header_t *rcv_msg,
        mach_msg_size_t rcv_limit)
{
  return mach_msg_overwrite(msg, option, send_size, rcv_size, rcv_name, timeout, notify, rcv_msg, rcv_limit);
}
