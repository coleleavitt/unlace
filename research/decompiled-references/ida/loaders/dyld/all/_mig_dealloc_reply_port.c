void __cdecl mig_dealloc_reply_port(mach_port_t reply_port)
{
  unsigned __int64 StatusReg; // x21
  mach_port_name_t v2; // w20

  StatusReg = _ReadStatusReg(TPIDRRO_EL0);
  v2 = *(_DWORD *)(StatusReg + 16);
  if ( v2 && _task_reply_port != v2 )
  {
    *(_QWORD *)(StatusReg + 16) = (unsigned int)_task_reply_port;
    mach_port_mod_refs(mach_task_self_, v2, 1u, -1);
    if ( v2 != reply_port )
      mach_port_deallocate(mach_task_self_, reply_port);
    *(_QWORD *)(StatusReg + 16) = 0;
  }
}
