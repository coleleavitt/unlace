__int64 __fastcall dyld3::OverflowSafeArray<dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::NodeT,4294967295ul>::reserve(
        __int64 result,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // x8
  vm_address_t *v3; // x19
  vm_address_t v4; // x20
  vm_size_t v5; // x21
  vm_address_t *v6; // x22
  unsigned __int64 v7; // x8
  vm_size_t v8; // x2
  vm_address_t v9; // x8
  __int64 v10; // x9
  __int64 v11; // x10
  _OWORD *v12; // x11
  _OWORD *v13; // x12
  __int128 v14; // q1
  vm_address_t v15; // x9
  vm_map_t v16; // w0
  __int64 _38; // [xsp+38h] [xbp+8h]

  v2 = *(_QWORD *)(result + 8);
  if ( v2 < a2 )
  {
    v3 = (vm_address_t *)result;
    v4 = *(_QWORD *)(result + 24);
    v5 = *(_QWORD *)(result + 32);
    v6 = (vm_address_t *)(result + 24);
    v7 = 2 * v2;
    if ( v7 <= a2 )
      v7 = a2;
    v8 = (vm_page_size + 32 * v7 - 1) & -(__int64)vm_page_size;
    *(_QWORD *)(result + 32) = v8;
    result = vm_allocate(mach_task_self_, v6, v8, 1006632961);
    if ( (_DWORD)result )
      dyld3::OverflowSafeArray<dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::NodeT,4294967295ul>::reserve();
    v9 = v3[3];
    if ( v3[2] )
    {
      v10 = 0;
      v11 = 0;
      do
      {
        v12 = (_OWORD *)(v9 + v10);
        v13 = (_OWORD *)(*v3 + v10);
        v14 = v13[1];
        *v12 = *v13;
        v12[1] = v14;
        ++v11;
        v10 += 32;
      }
      while ( v11 != v3[2] );
      v9 = *v6;
    }
    v15 = v3[4] >> 5;
    *v3 = v9;
    v3[1] = v15;
    if ( v4 )
    {
      v16 = mach_task_self_;
      if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return vm_deallocate(v16, v4, v5);
    }
  }
  return result;
}
