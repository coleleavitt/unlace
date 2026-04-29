__int64 __fastcall dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::insert(
        __int64 a1,
        __int128 *a2)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  unsigned __int64 i; // x0
  __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 j; // x22
  char *v10; // x21
  size_t v11; // x0
  unsigned __int64 v12; // x10
  __int64 v13; // x12
  vm_address_t v14; // x1
  char *v15; // x21
  size_t v16; // x0
  unsigned __int64 v17; // x0
  unsigned __int64 v18; // x24
  unsigned __int64 v19; // x23
  __int64 v20; // x26
  const char *v21; // x21
  __int64 v22; // x27
  unsigned __int64 v23; // x8
  const char **v24; // x22
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x8
  __int128 v29; // q0
  __int64 v30; // x8
  _BYTE v32[40]; // [xsp+0h] [xbp-80h] BYREF
  _BYTE v33[8]; // [xsp+28h] [xbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == *(_QWORD *)a1 )
  {
    v5 = 2LL * *(_QWORD *)(a1 + 32);
    *(_QWORD *)a1 = 2 * v4;
    memset(v32, 0, sizeof(v32));
    for ( i = (unsigned __int64)dyld3::OverflowSafeArray<unsigned long,4294967295ul>::reserve(v32, v5); v5; --v5 )
    {
      i = (unsigned __int64)dyld3::OverflowSafeArray<unsigned long,4294967295ul>::verifySpace(v32, 1);
      v7 = (*(_QWORD *)&v32[16])++;
      *(_QWORD *)(*(_QWORD *)v32 + 8 * v7) = -1;
    }
    v8 = *(_QWORD *)(a1 + 72);
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        if ( v8 <= j )
          dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::insert(i);
        v10 = *(char **)(*(_QWORD *)(a1 + 56) + 24 * j);
        v11 = _platform_strlen(v10);
        i = std::__murmur2_or_cityhash<unsigned long,64ul>::operator()((__int64)v33, (__int64 *)v10, v11);
        v12 = (*(_QWORD *)&v32[16] - 1LL) & i;
        if ( *(_QWORD *)&v32[16] <= v12 )
LABEL_29:
          dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::insert();
        v13 = 1;
        while ( *(_QWORD *)(*(_QWORD *)v32 + 8 * v12) != -1 )
        {
          v12 = (*(_QWORD *)&v32[16] - 1LL) & (v12 + v13++);
          if ( *(_QWORD *)&v32[16] <= v12 )
            goto LABEL_29;
        }
        *(_QWORD *)(*(_QWORD *)v32 + 8 * v12) = j;
        v8 = *(_QWORD *)(a1 + 72);
      }
    }
    if ( (_BYTE *)(a1 + 16) == v32 )
    {
      *(_QWORD *)&v32[16] = 0;
      if ( *(_QWORD *)&v32[24] )
        vm_deallocate(mach_task_self_, *(vm_address_t *)&v32[24], *(vm_size_t *)&v32[32]);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 40);
      if ( v14 )
        vm_deallocate(mach_task_self_, v14, *(_QWORD *)(a1 + 48));
      *(_QWORD *)(a1 + 16) = *(_QWORD *)v32;
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v32[8];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v32[24];
    }
  }
  v15 = *(char **)a2;
  v16 = _platform_strlen(*(const char **)a2);
  v17 = std::__murmur2_or_cityhash<unsigned long,64ul>::operator()((__int64)v32, (__int64 *)v15, v16);
  v18 = *(_QWORD *)(a1 + 32);
  v19 = (v18 - 1) & v17;
  if ( v18 <= v19 )
LABEL_25:
    dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::insert();
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(const char **)a2;
  v22 = 1;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v20 + 8 * v19);
    if ( v23 == -1 )
      break;
    if ( *(_QWORD *)(a1 + 72) <= v23 )
      dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::insert();
    v24 = (const char **)(*(_QWORD *)(a1 + 56) + 24 * v23);
    if ( !_platform_strcmp(*v24, v21) )
      return (__int64)v24;
    v19 = (v18 - 1) & (v19 + v22++);
    if ( v18 <= v19 )
      goto LABEL_25;
  }
  *(_QWORD *)(v20 + 8 * v19) = *(_QWORD *)(a1 + 72);
  ++*(_QWORD *)(a1 + 8);
  v25 = dyld3::OverflowSafeArray<dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::NodeT,4294967295ul>::verifySpace(
          a1 + 56,
          1);
  v26 = *(_QWORD *)(a1 + 56);
  v27 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v27 + 1;
  v28 = v26 + 24 * v27;
  v29 = *a2;
  *(_QWORD *)(v28 + 16) = *((_QWORD *)a2 + 2);
  *(_OWORD *)v28 = v29;
  v30 = *(_QWORD *)(a1 + 72);
  if ( !v30 )
    dyld3::Map<char const*,dyld4::WeakDefMapValue,dyld3::HashCString,dyld3::EqualCString>::insert(v25);
  return *(_QWORD *)(a1 + 56) + 24 * v30 - 24;
}
