_QWORD *__fastcall dyld3::OverflowSafeArray<unsigned char,4294967295ul>::verifySpace(_QWORD *result, __int64 a2)
{
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x8
  const void **v4; // x19
  vm_address_t v5; // x20
  vm_size_t v6; // x21
  unsigned __int64 v7; // x9
  vm_size_t v8; // x2
  const void *v9; // x9
  vm_map_t v10; // w0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v2 = result[1];
  v3 = result[2] + a2;
  if ( v3 > v2 )
  {
    v4 = (const void **)result;
    v5 = result[3];
    v6 = result[4];
    v7 = 2 * v2;
    if ( v7 > v3 )
      v3 = v7;
    v8 = (v3 + vm_page_size - 1) & -(__int64)vm_page_size;
    result[4] = v8;
    if ( vm_allocate(mach_task_self_, result + 3, v8, 1006632961) )
      dyld3::OverflowSafeArray<unsigned char,4294967295ul>::verifySpace();
    result = _platform_memmove((void *)v4[3], *v4, (size_t)v4[2]);
    v9 = v4[4];
    *v4 = v4[3];
    v4[1] = v9;
    if ( v5 )
    {
      v10 = mach_task_self_;
      if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (_QWORD *)vm_deallocate(v10, v5, v6);
    }
  }
  return result;
}
