__int64 __fastcall dyld4::Atlas::Mapper::unmap(dyld4::Atlas::Mapper *this, unsigned __int64 a2, __int64 a3)
{
  return munmap((void *)(-(__int64)vm_page_size & a2), a2 + a3 - (-(__int64)vm_page_size & a2));
}
