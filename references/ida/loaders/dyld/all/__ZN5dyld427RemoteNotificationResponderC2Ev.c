mach_port_name_array_t __fastcall dyld4::RemoteNotificationResponder::RemoteNotificationResponder(
        mach_port_name_array_t names_addr)
{
  natural_t *v2; // x20
  mach_port_name_array_t *v3; // x21
  kern_return_t v4; // w22
  __int64 v5; // x8

  *(_OWORD *)names_addr = 0u;
  *((_OWORD *)names_addr + 1) = 0u;
  *((_QWORD *)names_addr + 4) = names_addr;
  names_addr[10] = 8;
  v2 = names_addr + 10;
  *((_QWORD *)names_addr + 6) = 0;
  if ( *((_DWORD *)gProcessInfo + 50) != 1229016646 )
    goto LABEL_11;
  v3 = (mach_port_name_array_t *)(names_addr + 8);
  v4 = task_dyld_process_info_notify_get(names_addr, names_addr + 10);
  while ( v4 == 3 )
  {
    LODWORD(v5) = 2 * names_addr[10];
    if ( (unsigned int)v5 <= 0x10 )
      v5 = 16;
    else
      v5 = (unsigned int)v5;
    names_addr[10] = v5;
    *((_QWORD *)names_addr + 6) = 4 * v5;
    if ( vm_allocate(mach_task_self_, (vm_address_t *)names_addr + 4, 4 * v5, 1) )
      goto LABEL_11;
    v4 = task_dyld_process_info_notify_get(*v3, v2);
    if ( v4 )
    {
      vm_deallocate(mach_task_self_, *((_QWORD *)names_addr + 4), *((_QWORD *)names_addr + 6));
      *((_QWORD *)names_addr + 6) = 0;
    }
  }
  if ( v4 )
LABEL_11:
    *v2 = 0;
  return names_addr;
}
