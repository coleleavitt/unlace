kern_return_t __cdecl task_info(
        task_name_t target_task,
        task_flavor_t flavor,
        task_info_t task_info_out,
        mach_msg_type_number_t *task_info_outCnt)
{
  mach_msg_type_number_t v7; // w8
  __int64 reply_port; // x0
  kern_return_t v9; // w0
  kern_return_t v10; // w21
  bool v11; // zf
  mach_msg_type_number_t v14; // w22
  mach_msg_header_t v15; // [xsp+8h] [xbp-1C8h] BYREF
  __int64 v16; // [xsp+20h] [xbp-1B0h]
  task_flavor_t v17; // [xsp+28h] [xbp-1A8h]
  mach_msg_type_number_t v18; // [xsp+2Ch] [xbp-1A4h]
  _OWORD v19[23]; // [xsp+30h] [xbp-1A0h] BYREF

  memset(v19, 0, sizeof(v19));
  v16 = 0x100000000LL;
  v7 = *task_info_outCnt;
  if ( *task_info_outCnt >= 0x5A )
    v7 = 90;
  v17 = flavor;
  v18 = v7;
  reply_port = mig_get_reply_port();
  *(_QWORD *)&v15.msgh_bits = 0x2800001513LL;
  v15.msgh_remote_port = target_task;
  v15.msgh_local_port = reply_port;
  *(_QWORD *)&v15.msgh_voucher_port = 0xD4D00000000LL;
  v9 = mach_msg2_internal(
         &v15,
         0x200000003uLL,
         (void *)0x2800001513LL,
         (void *)(target_task | ((unsigned __int64)(unsigned int)reply_port << 32)),
         (void *)0xD4D00000000LL,
         (void *)(reply_port << 32),
         &stru_158.flags,
         nullptr);
  v10 = v9;
  if ( (unsigned int)(v9 - 268435458) > 0xE || ((1 << (v9 - 2)) & 0x4003) == 0 )
  {
    if ( v9 )
    {
      mig_dealloc_reply_port(v15.msgh_local_port);
      return v10;
    }
    if ( v15.msgh_id == 71 )
    {
      v10 = -308;
    }
    else if ( v15.msgh_id == 3505 )
    {
      if ( (v15.msgh_bits & 0x80000000) == 0 )
      {
        if ( v15.msgh_size - 401 <= 0xFFFFFE96 )
        {
          if ( v15.msgh_remote_port )
            v11 = 1;
          else
            v11 = v17 == 0;
          if ( !v11 && v15.msgh_size == 36 )
            v10 = v17;
          else
            v10 = -300;
          goto LABEL_24;
        }
        if ( !v15.msgh_remote_port )
        {
          v10 = v17;
          if ( v17 )
            goto LABEL_24;
          v14 = v18;
          if ( v18 <= 0x5A && v18 <= (v15.msgh_size - 40) >> 2 && v15.msgh_size == 4 * v18 + 40 )
          {
            if ( v18 <= *task_info_outCnt )
            {
              _platform_memmove(task_info_out, v19, 4LL * v18);
              v10 = 0;
              *task_info_outCnt = v14;
            }
            else
            {
              _platform_memmove(task_info_out, v19, 4 * *task_info_outCnt);
              *task_info_outCnt = v14;
              return -307;
            }
            return v10;
          }
        }
      }
      v10 = -300;
    }
    else
    {
      v10 = -301;
    }
LABEL_24:
    mach_msg_destroy(&v15);
  }
  return v10;
}
