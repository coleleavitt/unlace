vm_address_t *__fastcall _simple_sfree(vm_address_t *address)
{
  vm_address_t v1; // x19
  __int64 v2; // x2
  vm_map_t v3; // w0
  __int64 _28; // [xsp+28h] [xbp+8h]

  if ( address )
  {
    v1 = (vm_address_t)address;
    if ( ((vm_page_size - 1) & *address) != 0 )
    {
      v2 = address[2] - (_QWORD)address + 1;
    }
    else
    {
      vm_deallocate(mach_task_self_, *address, address[2] - *address + 1);
      v2 = vm_page_size;
    }
    v3 = mach_task_self_;
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (vm_address_t *)vm_deallocate(v3, v1, v2);
  }
  return address;
}
