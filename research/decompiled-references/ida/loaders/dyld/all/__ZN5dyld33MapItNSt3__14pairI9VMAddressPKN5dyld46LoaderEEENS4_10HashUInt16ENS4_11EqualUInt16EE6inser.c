__int64 __fastcall dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::insert(
        __int64 result,
        unsigned __int16 *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  __int64 v6; // x9
  unsigned __int64 v7; // x10
  unsigned __int64 v8; // x8
  __int64 v9; // x9
  unsigned __int64 v10; // x11
  __int64 v11; // x13
  vm_address_t v12; // x1
  unsigned int v13; // w8
  unsigned __int64 v14; // x9
  unsigned __int64 v15; // x10
  __int64 v16; // x11
  __int64 v17; // x13
  unsigned __int64 v18; // x14
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // x8
  __int64 v23; // x8
  _OWORD v24[3]; // [xsp+0h] [xbp-50h] BYREF

  v3 = result;
  v4 = *(_QWORD *)(result + 8);
  if ( v4 == *(_QWORD *)result )
  {
    v5 = 2LL * *(_QWORD *)(result + 32);
    *(_QWORD *)result = 2 * v4;
    memset(v24, 0, 40);
    for ( result = (__int64)dyld3::OverflowSafeArray<unsigned long,4294967295ul>::reserve(v24, v5); v5; --v5 )
    {
      result = (__int64)dyld3::OverflowSafeArray<unsigned long,4294967295ul>::verifySpace(v24, 1);
      v6 = (*(_QWORD *)&v24[1])++;
      *(_QWORD *)(*(_QWORD *)&v24[0] + 8 * v6) = -1;
    }
    v7 = *(_QWORD *)(v3 + 72);
    if ( v7 )
    {
      v8 = 0;
      v9 = *(_QWORD *)&v24[0];
      do
      {
        if ( v7 <= v8 )
          dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::insert(result);
        v10 = (unsigned int)(LODWORD(v24[1]) - 1)
            & (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v3 + 56) + 32 * v8);
        if ( *(_QWORD *)&v24[1] <= v10 )
LABEL_29:
          dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::insert(result);
        v11 = 1;
        while ( *(_QWORD *)(v9 + 8 * v10) != -1 )
        {
          v10 = (*(_QWORD *)&v24[1] - 1LL) & (v10 + v11++);
          if ( *(_QWORD *)&v24[1] <= v10 )
            goto LABEL_29;
        }
        *(_QWORD *)(v9 + 8 * v10) = v8++;
        v7 = *(_QWORD *)(v3 + 72);
      }
      while ( v8 != v7 );
    }
    if ( (_OWORD *)(v3 + 16) == v24 )
    {
      *(_QWORD *)&v24[1] = 0;
      if ( *((_QWORD *)&v24[1] + 1) )
        result = vm_deallocate(mach_task_self_, *((vm_address_t *)&v24[1] + 1), *(vm_size_t *)&v24[2]);
    }
    else
    {
      v12 = *(_QWORD *)(v3 + 40);
      if ( v12 )
        result = vm_deallocate(mach_task_self_, v12, *(_QWORD *)(v3 + 48));
      *(_QWORD *)(v3 + 16) = *(_QWORD *)&v24[0];
      *(_OWORD *)(v3 + 24) = *(_OWORD *)((char *)v24 + 8);
      *(_OWORD *)(v3 + 40) = *(_OWORD *)((char *)&v24[1] + 8);
    }
  }
  v13 = *a2;
  v14 = *(_QWORD *)(v3 + 32);
  v15 = ((_DWORD)v14 - 1) & v13;
  if ( v14 <= v15 )
LABEL_25:
    dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::insert(result);
  v16 = *(_QWORD *)(v3 + 16);
  v17 = 1;
  while ( 1 )
  {
    v18 = *(_QWORD *)(v16 + 8 * v15);
    if ( v18 == -1 )
      break;
    if ( *(_QWORD *)(v3 + 72) <= v18 )
      dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::insert(result);
    result = *(_QWORD *)(v3 + 56) + 32 * v18;
    if ( *(unsigned __int16 *)result == v13 )
      return result;
    v15 = (v14 - 1) & (v15 + v17++);
    if ( v14 <= v15 )
      goto LABEL_25;
  }
  *(_QWORD *)(v16 + 8 * v15) = *(_QWORD *)(v3 + 72);
  ++*(_QWORD *)(v3 + 8);
  v19 = dyld3::OverflowSafeArray<dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::NodeT,4294967295ul>::verifySpace(
          v3 + 56,
          1);
  v20 = *(_QWORD *)(v3 + 56);
  v21 = *(_QWORD *)(v3 + 72);
  *(_QWORD *)(v3 + 72) = v21 + 1;
  v22 = v20 + 32 * v21;
  *(_WORD *)v22 = *a2;
  *(_OWORD *)(v22 + 8) = *(_OWORD *)(a2 + 4);
  *(_QWORD *)(v22 + 24) = *((_QWORD *)a2 + 3);
  v23 = *(_QWORD *)(v3 + 72);
  if ( !v23 )
    dyld3::Map<unsigned short,std::pair<VMAddress,dyld4::Loader const*>,dyld4::HashUInt16,dyld4::EqualUInt16>::insert(v19);
  return *(_QWORD *)(v3 + 56) + 32 * v23 - 32;
}
