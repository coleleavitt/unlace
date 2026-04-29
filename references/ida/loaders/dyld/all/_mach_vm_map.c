kern_return_t __cdecl mach_vm_map(
        vm_map_t target_task,
        mach_vm_address_t *address,
        mach_vm_size_t size,
        mach_vm_offset_t mask,
        int flags,
        mem_entry_name_port_t object,
        memory_object_offset_t offset,
        boolean_t copy,
        vm_prot_t cur_protection,
        vm_prot_t max_protection,
        vm_inherit_t inheritance)
{
  vm_map_t v12; // w23
  mach_vm_address_t *v14; // x20
  mach_vm_size_t v15; // x27
  mach_vm_offset_t v16; // x26
  int v17; // w25
  boolean_t v18; // w23
  memory_object_offset_t v19; // x24
  kern_return_t v20; // w0
  kern_return_t v21; // w20
  mach_vm_address_t *v22; // x28
  mach_vm_address_t v23; // x9
  kern_return_t v24; // w0
  bool v25; // zf
  mach_msg_header_t v28; // [xsp+8h] [xbp-B8h] BYREF
  int v29; // [xsp+20h] [xbp-A0h]
  mem_entry_name_port_t v30; // [xsp+24h] [xbp-9Ch]
  __int128 v31; // [xsp+28h] [xbp-98h]
  mach_vm_address_t v32; // [xsp+38h] [xbp-88h]
  mach_vm_size_t v33; // [xsp+40h] [xbp-80h]
  mach_vm_offset_t v34; // [xsp+48h] [xbp-78h]
  int v35; // [xsp+50h] [xbp-70h]
  memory_object_offset_t v36; // [xsp+54h] [xbp-6Ch]
  boolean_t v37; // [xsp+5Ch] [xbp-64h]
  vm_prot_t v38; // [xsp+60h] [xbp-60h]
  vm_prot_t v39; // [xsp+64h] [xbp-5Ch]
  vm_inherit_t v40; // [xsp+68h] [xbp-58h]

  v12 = target_task;
  if ( object )
    goto LABEL_9;
  if ( max_protection != 7 || inheritance != 1 )
    goto LABEL_9;
  v14 = address;
  v15 = size;
  v16 = mask;
  v17 = flags;
  v18 = copy;
  v19 = offset;
  v20 = _kernelrpc_mach_vm_map_trap(target_task, address, size, mask, flags, cur_protection);
  size = v15;
  mask = v16;
  flags = v17;
  offset = v19;
  copy = v18;
  v12 = target_task;
  address = v14;
  v21 = v20;
  if ( v20 == 268435459 )
  {
LABEL_9:
    v29 = 1;
    v30 = object;
    *(_QWORD *)&v31 = 0x13000000000000LL;
    v22 = address;
    v23 = *address;
    *((_QWORD *)&v31 + 1) = 0x100000000LL;
    v32 = v23;
    v33 = size;
    v34 = mask;
    v35 = flags;
    v36 = offset;
    v37 = copy;
    v38 = cur_protection;
    v39 = max_protection;
    v40 = inheritance;
    *(_QWORD *)&v28.msgh_bits = 0x6480001513LL;
    v28.msgh_remote_port = v12;
    v28.msgh_local_port = mig_get_reply_port();
    *(_QWORD *)&v28.msgh_voucher_port = 0x12CB00000000LL;
    v24 = mach_msg2_internal(
            &v28,
            0x200000003uLL,
            (void *)0x6480001513LL,
            (void *)(v12 | ((unsigned __int64)v28.msgh_local_port << 32)),
            (void *)0x12CB00000000LL,
            (void *)(((unsigned __int64)v28.msgh_local_port << 32) | 1),
            &stru_20.segname[12],
            nullptr);
    v21 = v24;
    if ( (unsigned int)(v24 - 268435458) > 0xE || ((1 << (v24 - 2)) & 0x4003) == 0 )
    {
      if ( !v24 )
      {
        if ( v28.msgh_id == 71 )
        {
          v21 = -308;
        }
        else if ( v28.msgh_id == 4911 )
        {
          if ( (v28.msgh_bits & 0x80000000) == 0 )
          {
            if ( v28.msgh_size == 44 )
            {
              if ( !v28.msgh_remote_port )
              {
                v21 = v31;
                if ( !(_DWORD)v31 )
                {
                  *v22 = *(_QWORD *)((char *)&v31 + 4);
                  return v21;
                }
                goto LABEL_27;
              }
            }
            else if ( v28.msgh_size == 36 )
            {
              if ( v28.msgh_remote_port )
                v25 = 1;
              else
                v25 = (_DWORD)v31 == 0;
              if ( v25 )
                v21 = -300;
              else
                v21 = v31;
              goto LABEL_27;
            }
          }
          v21 = -300;
        }
        else
        {
          v21 = -301;
        }
LABEL_27:
        mach_msg_destroy(&v28);
        return v21;
      }
      mig_dealloc_reply_port(v28.msgh_local_port);
    }
  }
  return v21;
}
