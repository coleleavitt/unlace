__int64 __fastcall dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(
        __int64 result,
        _QWORD *a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  __int64 v6; // x9
  unsigned __int64 v7; // x10
  unsigned __int64 v8; // x8
  __int64 v9; // x9
  unsigned __int64 v10; // x12
  __int64 v11; // x13
  vm_address_t v12; // x1
  unsigned __int64 v13; // x10
  unsigned __int64 v14; // x9
  __int64 v15; // x12
  __int64 v16; // x13
  unsigned __int64 v17; // x14
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x8
  _OWORD v22[3]; // [xsp+0h] [xbp-50h] BYREF

  v3 = result;
  v4 = *(_QWORD *)(result + 8);
  if ( v4 == *(_QWORD *)result )
  {
    v5 = 2LL * *(_QWORD *)(result + 32);
    *(_QWORD *)result = 2 * v4;
    memset(v22, 0, 40);
    for ( result = (__int64)dyld3::OverflowSafeArray<unsigned long,4294967295ul>::reserve(v22, v5); v5; --v5 )
    {
      result = (__int64)dyld3::OverflowSafeArray<unsigned long,4294967295ul>::verifySpace(v22, 1);
      v6 = (*(_QWORD *)&v22[1])++;
      *(_QWORD *)(*(_QWORD *)&v22[0] + 8 * v6) = -1;
    }
    v7 = *(_QWORD *)(v3 + 72);
    if ( v7 )
    {
      v8 = 0;
      v9 = *(_QWORD *)&v22[0];
      do
      {
        if ( v7 <= v8 )
          dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(result);
        v10 = (*(_QWORD *)&v22[1] - 1LL) & *(_QWORD *)(*(_QWORD *)(v3 + 56) + 16 * v8);
        if ( *(_QWORD *)&v22[1] <= v10 )
LABEL_29:
          dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(result);
        v11 = 1;
        while ( *(_QWORD *)(v9 + 8 * v10) != -1 )
        {
          v10 = (*(_QWORD *)&v22[1] - 1LL) & (v10 + v11++);
          if ( *(_QWORD *)&v22[1] <= v10 )
            goto LABEL_29;
        }
        *(_QWORD *)(v9 + 8 * v10) = v8++;
        v7 = *(_QWORD *)(v3 + 72);
      }
      while ( v8 != v7 );
    }
    if ( (_OWORD *)(v3 + 16) == v22 )
    {
      *(_QWORD *)&v22[1] = 0;
      if ( *((_QWORD *)&v22[1] + 1) )
        result = vm_deallocate(mach_task_self_, *((vm_address_t *)&v22[1] + 1), *(vm_size_t *)&v22[2]);
    }
    else
    {
      v12 = *(_QWORD *)(v3 + 40);
      if ( v12 )
        result = vm_deallocate(mach_task_self_, v12, *(_QWORD *)(v3 + 48));
      *(_QWORD *)(v3 + 16) = *(_QWORD *)&v22[0];
      *(_OWORD *)(v3 + 24) = *(_OWORD *)((char *)v22 + 8);
      *(_OWORD *)(v3 + 40) = *(_OWORD *)((char *)&v22[1] + 8);
    }
  }
  v13 = *(_QWORD *)(v3 + 32);
  v14 = (v13 - 1) & *a2;
  if ( v13 <= v14 )
LABEL_25:
    dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(result);
  v15 = *(_QWORD *)(v3 + 16);
  v16 = 1;
  while ( 1 )
  {
    v17 = *(_QWORD *)(v15 + 8 * v14);
    if ( v17 == -1 )
      break;
    if ( *(_QWORD *)(v3 + 72) <= v17 )
      dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(result);
    result = *(_QWORD *)(v3 + 56) + 16 * v17;
    if ( *(_QWORD *)result == *a2 )
      return result;
    v14 = (v13 - 1) & (v14 + v16++);
    if ( v13 <= v14 )
      goto LABEL_25;
  }
  *(_QWORD *)(v15 + 8 * v14) = *(_QWORD *)(v3 + 72);
  ++*(_QWORD *)(v3 + 8);
  v18 = dyld3::OverflowSafeArray<dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::NodeT,4294967295ul>::verifySpace(
          v3 + 56,
          1);
  v19 = *(_QWORD *)(v3 + 56);
  v20 = *(_QWORD *)(v3 + 72);
  *(_QWORD *)(v3 + 72) = v20 + 1;
  *(_OWORD *)(v19 + 16 * v20) = *(_OWORD *)a2;
  v21 = *(_QWORD *)(v3 + 72);
  if ( !v21 )
    dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::insert(v18);
  return *(_QWORD *)(v3 + 56) + 16 * v21 - 16;
}
