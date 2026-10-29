kern_return_t __cdecl mach_port_deallocate(ipc_space_t task, mach_port_name_t name)
{
  kern_return_t v4; // w19
  __int64 reply_port; // x0
  kern_return_t v6; // w0
  mach_msg_header_t v8; // [xsp+0h] [xbp-50h] BYREF
  __int64 v9; // [xsp+18h] [xbp-38h]
  mach_port_name_t v10; // [xsp+20h] [xbp-30h]
  __int64 v11; // [xsp+24h] [xbp-2Ch]

  v4 = _kernelrpc_mach_port_deallocate_trap(task, name);
  if ( v4 == 268435459 )
  {
    v11 = 0;
    v9 = 0x100000000LL;
    v10 = name;
    reply_port = mig_get_reply_port();
    *(_QWORD *)&v8.msgh_bits = 0x2400001513LL;
    v8.msgh_remote_port = task;
    v8.msgh_local_port = reply_port;
    *(_QWORD *)&v8.msgh_voucher_port = 0xC8600000000LL;
    v6 = mach_msg2_internal(
           &v8,
           0x200000003uLL,
           (void *)0x2400001513LL,
           (void *)(task | ((unsigned __int64)(unsigned int)reply_port << 32)),
           (void *)0xC8600000000LL,
           (void *)(reply_port << 32),
           &stru_20.segname[4],
           nullptr);
    v4 = v6;
    if ( (unsigned int)(v6 - 268435458) > 0xE || ((1 << (v6 - 2)) & 0x4003) == 0 )
    {
      if ( v6 )
      {
        mig_dealloc_reply_port(v8.msgh_local_port);
        return v4;
      }
      if ( v8.msgh_id == 71 )
      {
        v4 = -308;
      }
      else if ( v8.msgh_id == 3306 )
      {
        v4 = -300;
        if ( (v8.msgh_bits & 0x80000000) == 0 && *(_QWORD *)&v8.msgh_size == 36 )
        {
          v4 = v10;
          if ( !v10 )
            return v4;
        }
      }
      else
      {
        v4 = -301;
      }
      mach_msg_destroy(&v8);
    }
  }
  return v4;
}
