__int64 __fastcall _os_alloc_slow(atomic_ullong *a1, unsigned __int64 a2)
{
  __int64 result; // x0
  mach_vm_address_t v5; // x1
  atomic_ullong *v6; // x8
  vm_size_t v7; // x8
  mach_vm_address_t address; // [xsp+28h] [xbp-48h] BYREF

  while ( 1 )
  {
    address = vm_page_size;
    result = mach_vm_map(mach_task_self_, &address, 2 * vm_page_size, 0, 1224736769, 0, 0, 0, 3, 7, 1u);
    if ( (_DWORD)result )
      break;
    v5 = address;
    v6 = a1;
    atomic_compare_exchange_strong_explicit(
      _os_alloc_heap,
      (unsigned __int64 *)&v6,
      address,
      memory_order_relaxed,
      memory_order_relaxed);
    if ( v6 == a1 )
    {
      *(_QWORD *)(v5 + 8) = a1;
      a1 = (atomic_ullong *)v5;
    }
    else
    {
      mach_vm_deallocate(mach_task_self_, v5, 2 * vm_page_size);
      a1 = (atomic_ullong *)_os_alloc_heap[0];
    }
    if ( a1 )
    {
      v7 = atomic_fetch_add_explicit(a1, a2, memory_order_relaxed) + a2;
      if ( v7 <= 2 * vm_page_size - 16 )
        return (__int64)a1 + v7 - a2 + 16;
    }
  }
  qword_9C1C0 = (__int64)"BUG IN LIBPLATFORM: Failed to allocate in os_alloc_once";
  qword_9C1F0 = (int)result;
  __break(1u);
  return result;
}
