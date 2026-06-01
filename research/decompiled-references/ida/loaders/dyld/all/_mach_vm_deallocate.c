kern_return_t __cdecl mach_vm_deallocate(vm_map_t target, mach_vm_address_t address, mach_vm_size_t size)
{
  kern_return_t v6; // w19
  __int64 reply_port; // x0
  kern_return_t v8; // w0
  mach_msg_header_t v10; // [xsp+0h] [xbp-50h] BYREF
  __int64 v11; // [xsp+18h] [xbp-38h]
  mach_vm_address_t v12; // [xsp+20h] [xbp-30h]
  mach_vm_size_t v13; // [xsp+28h] [xbp-28h]

  v6 = _kernelrpc_mach_vm_deallocate_trap(target, address, size);
  if ( v6 == 268435459 )
  {
    v11 = 0x100000000LL;
    v12 = address;
    v13 = size;
    reply_port = mig_get_reply_port();
    *(_QWORD *)&v10.msgh_bits = 0x3000001513LL;
    v10.msgh_remote_port = target;
    v10.msgh_local_port = reply_port;
    *(_QWORD *)&v10.msgh_voucher_port = 0x12C100000000LL;
    v8 = mach_msg2_internal(
           &v10,
           0x200000003uLL,
           (void *)0x3000001513LL,
           (void *)(target | ((unsigned __int64)(unsigned int)reply_port << 32)),
           (void *)0x12C100000000LL,
           (void *)(reply_port << 32),
           &stru_20.segname[4],
           nullptr);
    v6 = v8;
    if ( (unsigned int)(v8 - 268435458) > 0xE || ((1 << (v8 - 2)) & 0x4003) == 0 )
    {
      if ( v8 )
      {
        mig_dealloc_reply_port(v10.msgh_local_port);
        return v6;
      }
      if ( v10.msgh_id == 71 )
      {
        v6 = -308;
      }
      else if ( v10.msgh_id == 4901 )
      {
        v6 = -300;
        if ( (v10.msgh_bits & 0x80000000) == 0 && *(_QWORD *)&v10.msgh_size == 36 )
        {
          v6 = v12;
          if ( !(_DWORD)v12 )
            return v6;
        }
      }
      else
      {
        v6 = -301;
      }
      mach_msg_destroy(&v10);
    }
  }
  return v6;
}
