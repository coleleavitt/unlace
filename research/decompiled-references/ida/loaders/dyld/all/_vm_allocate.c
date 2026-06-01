kern_return_t __cdecl vm_allocate(vm_map_t target_task, vm_address_t *address, vm_size_t size, int flags)
{
  kern_return_t v8; // w20
  __int64 reply_port; // x0
  kern_return_t v10; // w0
  bool v11; // zf
  mach_vm_offset_t v13; // [xsp+0h] [xbp-70h] BYREF
  mach_msg_header_t v14; // [xsp+8h] [xbp-68h] BYREF
  __int64 v15; // [xsp+20h] [xbp-50h]
  __int128 v16; // [xsp+28h] [xbp-48h]
  int v17; // [xsp+38h] [xbp-38h]

  v13 = *address;
  v8 = _kernelrpc_mach_vm_allocate_trap(target_task, &v13, size, flags);
  if ( v8 == 268435459 )
  {
    v15 = 0x100000000LL;
    *(_QWORD *)&v16 = v13;
    *((_QWORD *)&v16 + 1) = size;
    v17 = flags;
    reply_port = mig_get_reply_port();
    *(_QWORD *)&v14.msgh_bits = 0x3400001513LL;
    v14.msgh_remote_port = target_task;
    v14.msgh_local_port = reply_port;
    *(_QWORD *)&v14.msgh_voucher_port = 0x12C000000000LL;
    v10 = mach_msg2_internal(
            &v14,
            0x200000003LL,
            0x3400001513LL,
            target_task | ((unsigned __int64)(unsigned int)reply_port << 32),
            0x12C000000000LL,
            reply_port << 32,
            52,
            0);
    v8 = v10;
    if ( (unsigned int)(v10 - 268435458) > 0xE || ((1 << (v10 - 2)) & 0x4003) == 0 )
    {
      if ( !v10 )
      {
        if ( v14.msgh_id == 71 )
        {
          v8 = -308;
        }
        else if ( v14.msgh_id == 4900 )
        {
          if ( (v14.msgh_bits & 0x80000000) == 0 )
          {
            if ( v14.msgh_size == 44 )
            {
              if ( !v14.msgh_remote_port )
              {
                v8 = v16;
                if ( !(_DWORD)v16 )
                {
                  v13 = *(_QWORD *)((char *)&v16 + 4);
                  goto LABEL_22;
                }
                goto LABEL_21;
              }
            }
            else if ( v14.msgh_size == 36 )
            {
              if ( v14.msgh_remote_port )
                v11 = 1;
              else
                v11 = (_DWORD)v16 == 0;
              if ( v11 )
                v8 = -300;
              else
                v8 = v16;
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
        mach_msg_destroy(&v14);
        goto LABEL_22;
      }
      mig_dealloc_reply_port(v14.msgh_local_port);
    }
  }
LABEL_22:
  *address = v13;
  return v8;
}
