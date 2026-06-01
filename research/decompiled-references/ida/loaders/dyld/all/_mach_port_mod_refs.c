kern_return_t __cdecl mach_port_mod_refs(
        ipc_space_t task,
        mach_port_name_t name,
        mach_port_right_t right,
        mach_port_delta_t delta)
{
  kern_return_t v8; // w19
  __int64 reply_port; // x0
  kern_return_t v10; // w0
  mach_msg_header_t v12; // [xsp+0h] [xbp-60h] BYREF
  __int64 v13; // [xsp+18h] [xbp-48h]
  mach_port_name_t v14; // [xsp+20h] [xbp-40h]
  mach_port_right_t v15; // [xsp+24h] [xbp-3Ch]
  mach_port_delta_t v16; // [xsp+28h] [xbp-38h]

  v8 = _kernelrpc_mach_port_mod_refs_trap(task, name, right, delta);
  if ( v8 == 268435459 )
  {
    v13 = 0x100000000LL;
    v14 = name;
    v15 = right;
    v16 = delta;
    reply_port = mig_get_reply_port();
    *(_QWORD *)&v12.msgh_bits = 0x2C00001513LL;
    v12.msgh_remote_port = task;
    v12.msgh_local_port = reply_port;
    *(_QWORD *)&v12.msgh_voucher_port = 0xC8800000000LL;
    v10 = mach_msg2_internal(
            &v12,
            0x200000003uLL,
            (void *)0x2C00001513LL,
            (void *)(task | ((unsigned __int64)(unsigned int)reply_port << 32)),
            (void *)0xC8800000000LL,
            (void *)(reply_port << 32),
            &stru_20.segname[4],
            nullptr);
    v8 = v10;
    if ( (unsigned int)(v10 - 268435458) > 0xE || ((1 << (v10 - 2)) & 0x4003) == 0 )
    {
      if ( v10 )
      {
        mig_dealloc_reply_port(v12.msgh_local_port);
        return v8;
      }
      if ( v12.msgh_id == 71 )
      {
        v8 = -308;
      }
      else if ( v12.msgh_id == 3308 )
      {
        v8 = -300;
        if ( (v12.msgh_bits & 0x80000000) == 0 && *(_QWORD *)&v12.msgh_size == 36 )
        {
          v8 = v14;
          if ( !v14 )
            return v8;
        }
      }
      else
      {
        v8 = -301;
      }
      mach_msg_destroy(&v12);
    }
  }
  return v8;
}
