kern_return_t __cdecl vm_protect(
        vm_map_t target_task,
        vm_address_t address,
        vm_size_t size,
        boolean_t set_maximum,
        vm_prot_t new_protection)
{
  kern_return_t v10; // w19
  __int64 reply_port; // x0
  kern_return_t v12; // w0
  mach_msg_header_t v14; // [xsp+8h] [xbp-68h] BYREF
  __int64 v15; // [xsp+20h] [xbp-50h]
  vm_address_t v16; // [xsp+28h] [xbp-48h]
  vm_size_t v17; // [xsp+30h] [xbp-40h]
  boolean_t v18; // [xsp+38h] [xbp-38h]
  vm_prot_t v19; // [xsp+3Ch] [xbp-34h]

  v10 = _kernelrpc_mach_vm_protect_trap(target_task, address, size, set_maximum, new_protection);
  if ( v10 == 268435459 )
  {
    v15 = 0x100000000LL;
    v16 = address;
    v17 = size;
    v18 = set_maximum;
    v19 = new_protection;
    reply_port = mig_get_reply_port();
    *(_QWORD *)&v14.msgh_bits = 0x3800001513LL;
    v14.msgh_remote_port = target_task;
    v14.msgh_local_port = reply_port;
    *(_QWORD *)&v14.msgh_voucher_port = 0x12C200000000LL;
    v12 = mach_msg2_internal(
            &v14,
            0x200000003uLL,
            (void *)0x3800001513LL,
            (void *)(target_task | ((unsigned __int64)(unsigned int)reply_port << 32)),
            (void *)0x12C200000000LL,
            (void *)(reply_port << 32),
            &stru_20.segname[4],
            nullptr);
    v10 = v12;
    if ( (unsigned int)(v12 - 268435458) > 0xE || ((1 << (v12 - 2)) & 0x4003) == 0 )
    {
      if ( v12 )
      {
        mig_dealloc_reply_port(v14.msgh_local_port);
        return v10;
      }
      if ( v14.msgh_id == 71 )
      {
        v10 = -308;
      }
      else if ( v14.msgh_id == 4902 )
      {
        v10 = -300;
        if ( (v14.msgh_bits & 0x80000000) == 0 && v14.msgh_size == 36 && !v14.msgh_remote_port )
        {
          v10 = v16;
          if ( !(_DWORD)v16 )
            return v10;
        }
      }
      else
      {
        v10 = -301;
      }
      mach_msg_destroy(&v14);
    }
  }
  return v10;
}
