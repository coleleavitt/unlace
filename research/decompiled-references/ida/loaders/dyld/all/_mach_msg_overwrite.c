mach_msg_return_t __cdecl mach_msg_overwrite(
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
  __int64 v9; // x13
  mach_port_name_t v10; // w12
  mach_msg_bits_t v12; // w8
  void *v13; // x7
  unsigned __int64 v14; // x8
  void *v15; // x6
  void *v16; // x2
  void *v17; // x3
  void *v18; // x4
  void *v19; // x5
  mach_port_name_t msgh_voucher_port; // w8
  unsigned int msgh_id; // w11
  mach_msg_bits_t msgh_bits; // w5
  __int64 v24; // [xsp+0h] [xbp-B0h] BYREF
  _QWORD v25[2]; // [xsp+80h] [xbp-30h] BYREF
  mach_msg_size_t v26; // [xsp+90h] [xbp-20h]
  mach_msg_size_t v27; // [xsp+94h] [xbp-1Ch]
  __int64 *v28; // [xsp+98h] [xbp-18h]
  __int64 v29; // [xsp+A0h] [xbp-10h]
  __int64 v30; // [xsp+A8h] [xbp-8h]

  if ( rcv_msg != nullptr && (option & 2LL) != 0 )
    v9 = option | 0x100000000LL;
  else
    v9 = option;
  if ( (v9 & 0x100000000LL) != 0 )
  {
    v25[0] = msg;
    v25[1] = rcv_msg;
    v26 = send_size;
    v27 = rcv_size;
    v28 = &v24;
    v29 = 0;
    v30 = 0x8000000000LL;
  }
  if ( (v9 & 1) != 0 )
    v10 = notify;
  else
    v10 = 0;
  if ( (v9 & 2) != 0 && (v9 & 1) == 0 && (v9 & 0x4000) != 0 )
    msg->msgh_remote_port = notify;
  if ( (v9 & 0x100000000LL) != 0 )
  {
    v13 = (void *)timeout;
    msgh_voucher_port = msg->msgh_voucher_port;
    msgh_id = msg->msgh_id;
    if ( (v9 & 1) != 0 && (msg->msgh_bits & 0x80000000) != 0 )
      msgh_bits = msg[1].msgh_bits;
    else
      msgh_bits = 0;
    v16 = (void *)(msg->msgh_bits | 0x200000000LL);
    v17 = (void *)(msg->msgh_remote_port | ((unsigned __int64)msg->msgh_local_port << 32));
    v19 = (void *)(msgh_bits | ((unsigned __int64)rcv_name << 32));
    v15 = (void *)(((unsigned __int64)v10 << 32) | 2);
    msg = (mach_msg_header_t *)v25;
    v18 = (void *)(msgh_voucher_port | ((unsigned __int64)msgh_id << 32));
  }
  else
  {
    v12 = 0;
    v13 = (void *)timeout;
    if ( (v9 & 1) != 0 && (msg->msgh_bits & 0x80000000) != 0 )
      v12 = msg[1].msgh_bits;
    v14 = v12 | ((unsigned __int64)rcv_name << 32);
    v15 = (void *)(rcv_size | ((unsigned __int64)v10 << 32));
    v16 = (void *)(msg->msgh_bits | ((unsigned __int64)send_size << 32));
    v17 = (void *)(msg->msgh_remote_port | ((unsigned __int64)msg->msgh_local_port << 32));
    v18 = (void *)(msg->msgh_voucher_port | ((unsigned __int64)(unsigned int)msg->msgh_id << 32));
    v19 = (void *)v14;
  }
  return mach_msg2_internal(msg, v9 | 0x400000000LL, v16, v17, v18, v19, v15, v13);
}
