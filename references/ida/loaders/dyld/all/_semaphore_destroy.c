kern_return_t __cdecl semaphore_destroy(task_t task, semaphore_t semaphore)
{
  kern_return_t v2; // w0
  kern_return_t v3; // w19
  mach_msg_header_t v5; // [xsp+0h] [xbp-40h] BYREF
  int v6; // [xsp+18h] [xbp-28h]
  semaphore_t v7; // [xsp+1Ch] [xbp-24h]
  __int64 v8; // [xsp+20h] [xbp-20h]
  int v9; // [xsp+28h] [xbp-18h]

  v8 = 0x11000000000000LL;
  v6 = 1;
  v7 = semaphore;
  v9 = 0;
  *(_QWORD *)&v5.msgh_bits = 0x2880001513LL;
  v5.msgh_remote_port = task;
  v5.msgh_local_port = mig_get_reply_port();
  *(_QWORD *)&v5.msgh_voucher_port = 0xD5B00000000LL;
  v2 = mach_msg2_internal(
         &v5,
         0x200000003uLL,
         (void *)0x2880001513LL,
         (void *)(v5.msgh_remote_port | ((unsigned __int64)v5.msgh_local_port << 32)),
         (void *)0xD5B00000000LL,
         (void *)(((unsigned __int64)v5.msgh_local_port << 32) | 1),
         &stru_20.segname[4],
         nullptr);
  v3 = v2;
  if ( (unsigned int)(v2 - 268435458) > 0xE || ((1 << (v2 - 2)) & 0x4003) == 0 )
  {
    if ( v2 )
    {
      mig_dealloc_reply_port(v5.msgh_local_port);
      return v3;
    }
    if ( v5.msgh_id == 71 )
    {
      v3 = -308;
    }
    else if ( v5.msgh_id == 3519 )
    {
      v3 = -300;
      if ( (v5.msgh_bits & 0x80000000) == 0 && *(_QWORD *)&v5.msgh_size == 36 )
      {
        v3 = v8;
        if ( !(_DWORD)v8 )
          return v3;
      }
    }
    else
    {
      v3 = -301;
    }
    mach_msg_destroy(&v5);
  }
  return v3;
}
