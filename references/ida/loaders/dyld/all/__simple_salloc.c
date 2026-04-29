vm_address_t _simple_salloc()
{
  vm_address_t result; // x0
  vm_address_t v1; // x9
  vm_address_t v2; // x8
  vm_address_t address; // [xsp+8h] [xbp-18h] BYREF

  if ( vm_allocate(mach_task_self_, &address, vm_page_size, 1) )
    return 0;
  v1 = address + 40;
  *(_QWORD *)address = address + 40;
  result = address;
  v2 = address + vm_page_size - 1;
  *(_QWORD *)(address + 8) = v1;
  *(_QWORD *)(result + 16) = v2;
  *(_QWORD *)(result + 32) = _enlarge;
  return result;
}
