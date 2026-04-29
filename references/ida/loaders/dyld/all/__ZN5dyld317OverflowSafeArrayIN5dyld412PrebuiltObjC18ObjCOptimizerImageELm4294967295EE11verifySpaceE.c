__int64 __fastcall dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCOptimizerImage,4294967295ul>::verifySpace(
        __int64 result,
        __int64 a2)
{
  unsigned __int64 v2; // x9
  unsigned __int64 v3; // x8
  _QWORD *v4; // x19
  vm_address_t v5; // x20
  vm_size_t v6; // x21
  vm_address_t *v7; // x22
  unsigned __int64 v8; // x9
  vm_size_t v9; // x2
  vm_address_t v10; // x24
  __int64 v11; // x25
  __int64 v12; // x26
  unsigned __int64 v13; // x8
  vm_map_t v14; // w0
  __int64 _48; // [xsp+48h] [xbp+8h]

  v2 = *(_QWORD *)(result + 8);
  v3 = *(_QWORD *)(result + 16) + a2;
  if ( v3 > v2 )
  {
    v4 = (_QWORD *)result;
    v5 = *(_QWORD *)(result + 24);
    v6 = *(_QWORD *)(result + 32);
    v7 = (vm_address_t *)(result + 24);
    v8 = 2 * v2;
    if ( v8 > v3 )
      v3 = v8;
    v9 = (vm_page_size + 568 * v3 - 1) & -(__int64)vm_page_size;
    *(_QWORD *)(result + 32) = v9;
    result = vm_allocate(mach_task_self_, v7, v9, 1006632961);
    if ( (_DWORD)result )
      dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCOptimizerImage,4294967295ul>::verifySpace();
    v10 = v4[3];
    if ( v4[2] )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        result = dyld4::PrebuiltObjC::ObjCOptimizerImage::ObjCOptimizerImage(v10 + v11, *v4 + v11);
        ++v12;
        v11 += 568;
      }
      while ( v12 != v4[2] );
      v10 = *v7;
    }
    v13 = v4[4] / 0x238uLL;
    *v4 = v10;
    v4[1] = v13;
    if ( v5 )
    {
      v14 = mach_task_self_;
      if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return vm_deallocate(v14, v5, v6);
    }
  }
  return result;
}
