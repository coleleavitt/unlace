kern_return_t __cdecl mach_port_construct(
        ipc_space_t task,
        mach_port_options_ptr_t options,
        mach_port_context_t context,
        mach_port_name_t *name)
{
  kern_return_t v8; // w20
  kern_return_t v9; // w0
  bool v10; // zf
  mach_msg_header_t v12; // [xsp+0h] [xbp-70h] BYREF
  int v13; // [xsp+18h] [xbp-58h]
  mach_port_options_ptr_t v14; // [xsp+1Ch] [xbp-54h]
  __int64 v15; // [xsp+24h] [xbp-4Ch]
  __int64 v16; // [xsp+2Ch] [xbp-44h]
  mach_port_context_t v17; // [xsp+34h] [xbp-3Ch]

  v8 = _kernelrpc_mach_port_construct_trap(task, options, context, name);
  if ( v8 == 268435459 )
  {
    v13 = 1;
    v14 = options;
    v15 = 0x1801000100LL;
    v16 = 0x100000000LL;
    v17 = context;
    *(_QWORD *)&v12.msgh_bits = 0x3C80001513LL;
    v12.msgh_remote_port = task;
    v12.msgh_local_port = mig_get_reply_port();
    *(_QWORD *)&v12.msgh_voucher_port = 0xC9F00000000LL;
    v9 = mach_msg2_internal(
           &v12,
           0x200000003uLL,
           (void *)0x3C80001513LL,
           (void *)(task | ((unsigned __int64)v12.msgh_local_port << 32)),
           (void *)0xC9F00000000LL,
           (void *)(((unsigned __int64)v12.msgh_local_port << 32) | 1),
           &stru_20.segname[8],
           nullptr);
    v8 = v9;
    if ( (unsigned int)(v9 - 268435458) > 0xE || ((1 << (v9 - 2)) & 0x4003) == 0 )
    {
      if ( !v9 )
      {
        if ( v12.msgh_id == 71 )
        {
          v8 = -308;
        }
        else if ( v12.msgh_id == 3331 )
        {
          if ( (v12.msgh_bits & 0x80000000) == 0 )
          {
            if ( v12.msgh_size == 40 )
            {
              if ( !v12.msgh_remote_port )
              {
                v8 = HIDWORD(v14);
                if ( !HIDWORD(v14) )
                {
                  *name = v15;
                  return v8;
                }
                goto LABEL_21;
              }
            }
            else if ( v12.msgh_size == 36 )
            {
              if ( v12.msgh_remote_port )
                v10 = 1;
              else
                v10 = HIDWORD(v14) == 0;
              if ( v10 )
                v8 = -300;
              else
                v8 = HIDWORD(v14);
              goto LABEL_21;
            }
          }
          v8 = -300;
        }
        else
        {
          v8 = -301;
        }
LABEL_21:
        mach_msg_destroy(&v12);
        return v8;
      }
      mig_dealloc_reply_port(v12.msgh_local_port);
    }
  }
  return v8;
}
