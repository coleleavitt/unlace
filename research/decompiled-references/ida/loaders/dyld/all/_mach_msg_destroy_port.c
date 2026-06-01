__int64 __fastcall mach_msg_destroy_port(__int64 name, int a2)
{
  mach_port_name_t v2; // w19
  mach_port_t v3; // w0
  mach_port_t v4; // w0
  mach_port_t v5; // w20
  int v6; // w0
  mach_port_t v7; // w20
  __int64 reply_port; // x0
  int v9; // w0
  mach_msg_header_t v11; // [xsp+8h] [xbp-58h] BYREF
  __int64 v12; // [xsp+20h] [xbp-40h]
  __int64 v13; // [xsp+28h] [xbp-38h]
  __int64 v14; // [xsp+30h] [xbp-30h]
  mach_port_name_t v15; // [xsp+38h] [xbp-28h]
  __int64 vars8; // [xsp+68h] [xbp+8h]

  if ( (unsigned int)(name - 1) <= 0xFFFFFFFD && (unsigned int)(a2 - 16) <= 5 )
  {
    v2 = name;
    switch ( a2 )
    {
      case 16:
        v4 = mach_task_self_;
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        name = mach_port_mod_refs(v4, v2, 1u, -1);
        break;
      case 17:
      case 18:
        v3 = mach_task_self_;
        goto LABEL_37;
      case 20:
        v5 = mach_task_self_;
        if ( _kernelrpc_mach_port_insert_right_trap(mach_task_self_, name, name, 0x14u) == 268435459 )
        {
          LODWORD(v12) = 1;
          HIDWORD(v12) = v2;
          v13 = 0x14000000000000LL;
          v14 = 0x100000000LL;
          v15 = v2;
          *(_QWORD *)&v11.msgh_bits = 0x3480001513LL;
          v11.msgh_remote_port = v5;
          v11.msgh_local_port = mig_get_reply_port();
          *(_QWORD *)&v11.msgh_voucher_port = 0xC8E00000000LL;
          v6 = mach_msg2_internal(
                 &v11,
                 0x200000003uLL,
                 (void *)0x3480001513LL,
                 (void *)(v5 | ((unsigned __int64)v11.msgh_local_port << 32)),
                 (void *)0xC8E00000000LL,
                 (void *)(((unsigned __int64)v11.msgh_local_port << 32) | 1),
                 &stru_20.segname[4],
                 nullptr);
          if ( (unsigned int)(v6 - 268435458) > 0xE || ((1 << (v6 - 2)) & 0x4003) == 0 )
          {
            if ( v6 )
            {
              mig_dealloc_reply_port(v11.msgh_local_port);
            }
            else if ( v11.msgh_id != 3314
                   || (v11.msgh_bits & 0x80000000) != 0
                   || v11.msgh_size != 36
                   || v11.msgh_remote_port
                   || (_DWORD)v13 )
            {
              mach_msg_destroy(&v11);
            }
          }
        }
        v3 = mach_task_self_;
LABEL_37:
        if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        name = mach_port_deallocate(v3, v2);
        break;
      case 21:
        v7 = mach_task_self_;
        v14 = 0;
        v12 = 0x100000000LL;
        v13 = (unsigned int)name | 0x1500000000LL;
        reply_port = mig_get_reply_port();
        *(_QWORD *)&v11.msgh_bits = 0x2800001513LL;
        v11.msgh_remote_port = v7;
        v11.msgh_local_port = reply_port;
        *(_QWORD *)&v11.msgh_voucher_port = 0xC8F00000000LL;
        v9 = mach_msg2_internal(
               &v11,
               0x200000003uLL,
               (void *)0x2800001513LL,
               (void *)(v7 | ((unsigned __int64)(unsigned int)reply_port << 32)),
               (void *)0xC8F00000000LL,
               (void *)(reply_port << 32),
               &stru_20.segname[8],
               nullptr);
        if ( (unsigned int)(v9 - 268435458) > 0xE || ((1 << (v9 - 2)) & 0x4003) == 0 )
        {
          if ( v9 )
          {
            mig_dealloc_reply_port(v11.msgh_local_port);
          }
          else if ( v11.msgh_id == 3315
                 && (v11.msgh_bits & 0x80000000) != 0
                 && (_DWORD)v12 == 1
                 && v11.msgh_size == 40
                 && !v11.msgh_remote_port
                 && !HIBYTE(HIDWORD(v13)) )
          {
            v2 = HIDWORD(v12);
          }
          else
          {
            mach_msg_destroy(&v11);
          }
        }
        name = mach_port_deallocate(mach_task_self_, v2);
        break;
      default:
        return name;
    }
  }
  return name;
}
