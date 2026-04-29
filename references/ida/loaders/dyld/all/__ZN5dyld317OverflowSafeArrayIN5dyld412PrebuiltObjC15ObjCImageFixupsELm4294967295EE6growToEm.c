__int64 __fastcall dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCImageFixups,4294967295ul>::growTo(
        vm_address_t *a1,
        unsigned __int64 a2)
{
  vm_address_t v3; // x19
  vm_size_t v4; // x20
  vm_address_t *v5; // x22
  unsigned __int64 v6; // x8
  vm_size_t v7; // x2
  __int64 result; // x0
  vm_address_t v9; // x8
  __int64 v10; // x9
  __int64 v11; // x10
  vm_address_t v12; // x12
  vm_address_t v13; // x11
  __int128 v14; // q1
  __int128 v15; // q2
  __int128 v16; // q4
  unsigned __int64 v17; // x9
  vm_map_t v18; // w0
  __int64 _38; // [xsp+38h] [xbp+8h]

  v3 = a1[3];
  v4 = a1[4];
  v5 = a1 + 3;
  v6 = 2 * a1[1];
  if ( v6 <= a2 )
    v6 = a2;
  v7 = (vm_page_size + 160 * v6 - 1) & -(__int64)vm_page_size;
  a1[4] = v7;
  result = vm_allocate(mach_task_self_, v5, v7, 1006632961);
  if ( (_DWORD)result )
    dyld3::OverflowSafeArray<dyld4::PrebuiltObjC::ObjCImageFixups,4294967295ul>::growTo();
  v9 = a1[3];
  if ( a1[2] )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = v9 + v10;
      v13 = *a1 + v10;
      v14 = *(_OWORD *)(v13 + 16);
      v15 = *(_OWORD *)(v13 + 32);
      v16 = *(_OWORD *)(v13 + 64);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)(v13 + 48);
      *(_OWORD *)(v12 + 64) = v16;
      *(_OWORD *)(v12 + 32) = v15;
      *(_OWORD *)v12 = *(_OWORD *)v13;
      *(_OWORD *)(v12 + 16) = v14;
      *(_OWORD *)(v12 + 80) = 0u;
      *(_OWORD *)(v12 + 96) = 0u;
      *(_QWORD *)(v12 + 112) = 0;
      *(_QWORD *)(v12 + 80) = *(_QWORD *)(v13 + 80);
      *(_OWORD *)(v12 + 88) = *(_OWORD *)(v13 + 88);
      *(_OWORD *)(v12 + 104) = *(_OWORD *)(v13 + 104);
      *(_QWORD *)(v13 + 112) = 0;
      *(_OWORD *)(v13 + 80) = 0u;
      *(_OWORD *)(v13 + 96) = 0u;
      *(_QWORD *)(v12 + 152) = 0;
      *(_OWORD *)(v12 + 136) = 0u;
      *(_OWORD *)(v12 + 120) = 0u;
      *(_QWORD *)(v12 + 120) = *(_QWORD *)(v13 + 120);
      *(_OWORD *)(v12 + 128) = *(_OWORD *)(v13 + 128);
      *(_OWORD *)(v12 + 144) = *(_OWORD *)(v13 + 144);
      *(_QWORD *)(v13 + 152) = 0;
      *(_OWORD *)(v13 + 136) = 0u;
      *(_OWORD *)(v13 + 120) = 0u;
      ++v11;
      v10 += 160;
    }
    while ( v11 != a1[2] );
    v9 = *v5;
  }
  v17 = a1[4] / 0xA0;
  *a1 = v9;
  a1[1] = v17;
  if ( v3 )
  {
    v18 = mach_task_self_;
    if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return vm_deallocate(v18, v3, v4);
  }
  return result;
}
