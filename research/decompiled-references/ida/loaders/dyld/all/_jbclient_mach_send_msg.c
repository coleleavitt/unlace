__int64 __fastcall jbclient_mach_send_msg(__int64 a1, mach_msg_header_t *a2)
{
  mach_port_t reply_port_0; // w0
  mach_port_name_t v5; // w21
  task_inspect_t v6; // w0
  mach_port_name_t v7; // w20
  mach_msg_size_t v8; // w2
  __int64 v9; // x0
  __int64 v10; // x19
  mach_port_name_t v11; // w0
  mach_port_t special_port; // [xsp+Ch] [xbp-24h] BYREF

  reply_port_0 = mig_get_reply_port_0();
  if ( !reply_port_0 )
    return 5;
  v5 = reply_port_0;
  special_port = 0;
  v6 = task_self_trap_0();
  task_get_special_port(v6, 4, &special_port);
  v7 = special_port;
  if ( !special_port )
    return 5;
  v8 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)a1 |= 0x1513u;
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = v5;
  *(_QWORD *)(a1 + 16) = 0x400000CE00000000LL;
  v9 = mach_msg((mach_msg_header_t *)a1, 1, v8, 0, 0, 0, 0);
  if ( (_DWORD)v9 || (v9 = mach_msg(a2, 2, 0, a2->msgh_size, v5, 0, 0), (_DWORD)v9) )
  {
    v10 = v9;
  }
  else
  {
    mach_msg_destroy_0(a2);
    v10 = 0;
  }
  v11 = task_self_trap_0();
  mach_port_deallocate_0(v11, v7);
  return v10;
}
