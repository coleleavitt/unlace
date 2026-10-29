__int64 __fastcall dyld4::RemoteNotificationResponder::sendMessage(
        __int64 this,
        mach_msg_id_t a2,
        mach_msg_size_t a3,
        mach_msg_header_t *a4)
{
  __int64 v7; // x22
  unsigned int v8; // w8
  unsigned __int64 i; // x24
  __int64 v10; // x9
  mach_port_name_t v11; // w4
  mach_port_t v12; // w8
  mach_port_options_t options; // [xsp+10h] [xbp-C0h] BYREF
  mach_port_name_t name; // [xsp+28h] [xbp-A8h] BYREF
  mach_msg_header_t rcv_msg; // [xsp+2Ch] [xbp-A4h] BYREF

  if ( *(_DWORD *)(this + 40) )
  {
    v7 = this;
    name = 0;
    *(_OWORD *)&options.flags = xmmword_7C3C0;
    options.reserved[1] = 0;
    this = mach_port_construct(mach_task_self_, &options, (mach_port_context_t)&name, &name);
    if ( !(_DWORD)this )
    {
      v8 = *(_DWORD *)(v7 + 40);
      if ( v8 )
      {
        for ( i = 0; i < v8; ++i )
        {
          v10 = *(_QWORD *)(v7 + 32);
          if ( *(_DWORD *)(v10 + 4 * i) )
          {
            a4->msgh_bits = 5395;
            a4->msgh_id = a2;
            v11 = name;
            a4->msgh_local_port = name;
            v12 = *(_DWORD *)(v10 + 4 * i);
            a4->msgh_voucher_port = 0;
            a4->msgh_size = a3;
            a4->msgh_remote_port = v12;
            if ( mach_msg_overwrite(a4, 3, a3, 0x5Cu, v11, 0, 0, &rcv_msg, 0) )
            {
              mach_msg_destroy(a4);
              *(_DWORD *)(*(_QWORD *)(v7 + 32) + 4 * i) = 0;
            }
            v8 = *(_DWORD *)(v7 + 40);
          }
        }
      }
      return mach_port_destruct(mach_task_self_, name, 0, (mach_port_context_t)&name);
    }
  }
  return this;
}
