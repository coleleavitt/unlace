kern_return_t __cdecl task_get_special_port(task_inspect_t task, int which_port, mach_port_t *special_port)
{
  __int64 reply_port_0; // x0
  kern_return_t result; // w0
  __int128 v7; // [xsp+0h] [xbp-60h] BYREF
  __int64 v8; // [xsp+10h] [xbp-50h]
  mach_port_t v9; // [xsp+1Ch] [xbp-44h]
  int v10; // [xsp+20h] [xbp-40h]
  __int128 v11; // [xsp+30h] [xbp-30h] BYREF
  __int64 v12; // [xsp+40h] [xbp-20h]

  v10 = which_port;
  reply_port_0 = mig_get_reply_port_0();
  *(_QWORD *)&v7 = 0x2400001513LL;
  *((_QWORD *)&v7 + 1) = __PAIR64__(reply_port_0, task);
  v8 = 0xD5100000000LL;
  v11 = v7;
  v12 = 0xD5100000000LL;
  result = mach_msg2(&v7, 0x200000003uLL, (unsigned int *)&v11, 36, 0x30u, reply_port_0, nullptr, 0);
  if ( !result )
    *special_port = v9;
  return result;
}
