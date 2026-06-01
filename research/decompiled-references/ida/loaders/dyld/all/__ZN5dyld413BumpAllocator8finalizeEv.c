vm_address_t __fastcall dyld4::BumpAllocator::finalize(dyld4::BumpAllocator *this)
{
  unsigned __int64 v2; // x10
  vm_address_t v3; // x20
  vm_size_t v4; // x21

  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)this;
  v4 = (~*(_QWORD *)this + *((_QWORD *)this + 2) + vm_page_size) & -(__int64)vm_page_size;
  if ( v2 > v4 )
  {
    vm_deallocate(mach_task_self_, v4 + v3, v2 - v4);
    *((_QWORD *)this + 1) = v4;
    *((_QWORD *)this + 2) = 0;
  }
  vm_protect(mach_task_self_, v3, v4, 0, 1);
  *(_QWORD *)this = 0;
  return v3;
}
