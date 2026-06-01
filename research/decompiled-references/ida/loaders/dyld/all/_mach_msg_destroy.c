void __cdecl mach_msg_destroy(mach_msg_header_t *a1)
{
  mach_msg_bits_t msgh_bits; // w20
  mach_msg_bits_t v3; // w22
  int v4; // w23
  mach_msg_size_t *p_msgh_size; // x24
  mach_msg_size_t v6; // w8
  mach_port_name_t v7; // t1
  mach_vm_size_t v8; // x2
  __int64 v9; // x19
  mach_vm_address_t v10; // x20
  __int64 v11; // x8
  mach_port_t v12; // w19
  mach_port_name_t v13; // w20
  mach_vm_address_t v14; // x21
  __int64 reply_port; // x0
  int v16; // w0
  mach_msg_header_t v19; // [xsp+0h] [xbp-90h] BYREF
  __int64 v20; // [xsp+18h] [xbp-78h]
  mach_port_name_t v21; // [xsp+20h] [xbp-70h]
  mach_vm_address_t v22; // [xsp+24h] [xbp-6Ch]

  msgh_bits = a1->msgh_bits;
  mach_msg_destroy_port(a1->msgh_remote_port);
  mach_msg_destroy_port(a1->msgh_voucher_port);
  if ( (msgh_bits & 0x80000000) != 0 )
  {
    v3 = a1[1].msgh_bits;
    if ( v3 )
    {
      v4 = 0;
      p_msgh_size = &a1[1].msgh_size;
      do
      {
        v6 = p_msgh_size[2];
        if ( HIBYTE(v6) <= 4u )
        {
          switch ( HIBYTE(v6) )
          {
            case 0u:
              v7 = *p_msgh_size;
              p_msgh_size += 3;
              mach_msg_destroy_port(v7);
              break;
            case 1u:
              if ( (unsigned __int8)p_msgh_size[2] )
              {
                v8 = p_msgh_size[3];
                if ( (_DWORD)v8 )
                  goto LABEL_32;
              }
              goto LABEL_35;
            case 2u:
              if ( p_msgh_size[3] )
              {
                v9 = 0;
                v10 = *(_QWORD *)p_msgh_size;
                while ( 1 )
                {
                  mach_msg_destroy_port(*(_DWORD *)(v10 + 4 * v9));
                  v11 = p_msgh_size[3];
                  if ( (int)v9 + 1 >= (unsigned int)v11 )
                    break;
                  ++v9;
                }
                if ( *((_BYTE *)p_msgh_size + 8) && (_DWORD)v11 != 0 )
                {
                  v8 = 4 * v11;
LABEL_32:
                  mach_vm_deallocate(mach_task_self_, *(_QWORD *)p_msgh_size, v8);
                }
              }
              goto LABEL_35;
            case 3u:
              goto LABEL_35;
            case 4u:
              if ( (v6 & 2) == 0 )
              {
                v12 = mach_task_self_;
                v13 = p_msgh_size[3];
                v14 = *(_QWORD *)p_msgh_size;
                if ( _kernelrpc_mach_port_unguard_trap(mach_task_self_, v13, *(_QWORD *)p_msgh_size) == 268435459 )
                {
                  v20 = 0x100000000LL;
                  v21 = v13;
                  v22 = v14;
                  reply_port = mig_get_reply_port();
                  *(_QWORD *)&v19.msgh_bits = 0x2C00001513LL;
                  v19.msgh_remote_port = v12;
                  v19.msgh_local_port = reply_port;
                  *(_QWORD *)&v19.msgh_voucher_port = 0xCA200000000LL;
                  v16 = mach_msg2_internal(
                          &v19,
                          0x200000003uLL,
                          (void *)0x2C00001513LL,
                          (void *)(v12 | ((unsigned __int64)(unsigned int)reply_port << 32)),
                          (void *)0xCA200000000LL,
                          (void *)(reply_port << 32),
                          &stru_20.segname[4],
                          nullptr);
                  if ( (unsigned int)(v16 - 268435458) > 0xE || ((1 << (v16 - 2)) & 0x4003) == 0 )
                  {
                    if ( v16 )
                    {
                      mig_dealloc_reply_port(v19.msgh_local_port);
                    }
                    else if ( v19.msgh_id != 3334
                           || (v19.msgh_bits & 0x80000000) != 0
                           || *(_QWORD *)&v19.msgh_size != 36
                           || v21 )
                    {
                      mach_msg_destroy(&v19);
                    }
                  }
                }
              }
              mach_msg_destroy_port(p_msgh_size[3]);
LABEL_35:
              p_msgh_size += 4;
              break;
            default:
              break;
          }
        }
        ++v4;
      }
      while ( v4 != v3 );
    }
  }
}
