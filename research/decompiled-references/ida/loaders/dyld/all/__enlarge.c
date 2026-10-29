void *__fastcall _enlarge(__int64 a1)
{
  vm_size_t *v2; // x22
  void *result; // x0
  size_t v4; // x20
  vm_size_t v5; // x21
  vm_size_t v6; // x24
  vm_address_t v7; // x1
  vm_size_t v8; // x8
  vm_address_t address; // [xsp+8h] [xbp-48h] BYREF

  v2 = (vm_size_t *)(a1 + 16);
  address = *(_QWORD *)(a1 + 16) + 1LL;
  result = (void *)vm_allocate(mach_task_self_, &address, vm_page_size, 0);
  if ( (_DWORD)result )
  {
    v4 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1 + 1LL;
    v5 = (v4 + vm_page_size) & -(__int64)vm_page_size;
    if ( vm_allocate(mach_task_self_, &address, v5, 1) )
      _enlarge_cold_1();
    v6 = address - *(_QWORD *)a1;
    result = _platform_memmove((void *)address, *(const void **)a1, v4);
    v7 = *(_QWORD *)a1;
    if ( ((vm_page_size - 1) & *(_QWORD *)a1) != 0 )
    {
      v4 &= -(__int64)vm_page_size;
      v7 = (v7 + vm_page_size) & -(__int64)vm_page_size;
      *(_QWORD *)a1 = v7;
      v8 = v5 + address - 1;
    }
    else
    {
      v8 = *v2 + vm_page_size + v6;
    }
    *v2 = v8;
    if ( v4 )
      result = (void *)vm_deallocate(mach_task_self_, v7, v4);
    *(_QWORD *)a1 = address;
    v2 = (vm_size_t *)(a1 + 8);
  }
  else
  {
    v6 = vm_page_size;
  }
  *v2 += v6;
  return result;
}
