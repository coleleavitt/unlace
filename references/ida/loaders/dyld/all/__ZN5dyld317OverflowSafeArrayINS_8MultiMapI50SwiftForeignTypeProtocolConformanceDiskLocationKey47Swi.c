_QWORD *__fastcall dyld3::OverflowSafeArray<dyld3::MultiMap<SwiftForeignTypeProtocolConformanceDiskLocationKey,SwiftForeignTypeProtocolConformanceDiskLocation,dyld4::HashForeignConformanceKey,dyld4::EqualForeignConformanceKey>::NodeEntryT,4294967295ul>::reserve(
        _QWORD *result,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // x9
  const void **v3; // x19
  vm_address_t v4; // x20
  vm_size_t v5; // x21
  unsigned __int64 v6; // x9
  vm_size_t v7; // x2
  unsigned __int64 v8; // x9
  vm_map_t v9; // w0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v2 = result[1];
  if ( v2 < a2 )
  {
    v3 = (const void **)result;
    v4 = result[3];
    v5 = result[4];
    v6 = 2 * v2;
    if ( v6 <= a2 )
      v6 = a2;
    v7 = (vm_page_size + 48 * v6 - 1) & -(__int64)vm_page_size;
    result[4] = v7;
    if ( vm_allocate(mach_task_self_, result + 3, v7, 1006632961) )
      dyld3::OverflowSafeArray<dyld3::MultiMap<SwiftForeignTypeProtocolConformanceDiskLocationKey,SwiftForeignTypeProtocolConformanceDiskLocation,dyld4::HashForeignConformanceKey,dyld4::EqualForeignConformanceKey>::NodeEntryT,4294967295ul>::reserve();
    result = _platform_memmove((void *)v3[3], *v3, 48LL * (_QWORD)v3[2]);
    v8 = (unsigned __int64)v3[4] / 0x30;
    *v3 = v3[3];
    v3[1] = (const void *)v8;
    if ( v4 )
    {
      v9 = mach_task_self_;
      if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return (_QWORD *)vm_deallocate(v9, v4, v5);
    }
  }
  return result;
}
