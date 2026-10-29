dyld4::BumpAllocator *__fastcall dyld4::BumpAllocator::zeroFill(dyld4::BumpAllocator *this, char *a2)
{
  char *v2; // x20
  char *v4; // x8
  vm_size_t v5; // x21
  dyld4::BumpAllocator *result; // x0
  unsigned __int64 v7; // x8
  unsigned __int64 v8; // x1
  __int64 v9; // x8
  __int64 v10; // x22
  unsigned __int64 v11; // x8
  vm_address_t address; // [xsp+8h] [xbp-38h] BYREF

  v2 = a2;
  v5 = *((_QWORD *)this + 1);
  v4 = *((char **)this + 2);
  result = *(dyld4::BumpAllocator **)this;
  if ( (char *)result + v5 - (_QWORD)v4 < a2 )
  {
    v7 = 0x100000;
    if ( v5 > 0x100000 )
      v7 = v5;
    if ( v7 < (unsigned __int64)a2 )
      v7 = (unsigned __int64)(a2 + 0x100000) & 0xFFFFFFFFFFF00000LL;
    address = 0;
    v5 += v7;
    vm_allocate(mach_task_self_, &address, v5, 1006632961);
    result = (dyld4::BumpAllocator *)address;
    if ( !address )
      dyld4::BumpAllocator::zeroFill(nullptr, v8);
    v9 = *((_QWORD *)this + 2);
    a2 = *(char **)this;
    v10 = v9 - *(_QWORD *)this;
    if ( *(_QWORD *)this )
    {
      _platform_memmove((void *)address, a2, v9 - *(_QWORD *)this);
      vm_deallocate(mach_task_self_, *(_QWORD *)this, *((_QWORD *)this + 1));
      result = (dyld4::BumpAllocator *)address;
    }
    v4 = (char *)result + v10;
    *((_QWORD *)this + 1) = v5;
    *((_QWORD *)this + 2) = (char *)result + v10;
    *(_QWORD *)this = result;
  }
  v11 = (unsigned __int64)&v2[(_QWORD)v4];
  if ( v11 > (unsigned __int64)result + v5 )
    dyld4::BumpAllocator::zeroFill(result, (unsigned __int64)a2);
  *((_QWORD *)this + 2) = v11;
  return result;
}
