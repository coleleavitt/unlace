double __fastcall dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::insert(
        __int64 a1,
        const char **a2)
{
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  unsigned __int64 i; // x0
  __int64 v7; // x9
  unsigned __int64 v8; // x8
  unsigned __int64 j; // x22
  __int64 v10; // x9
  char *v11; // x21
  size_t v12; // x0
  unsigned __int64 v13; // x10
  __int64 v14; // x12
  unsigned __int64 v15; // x10
  vm_address_t v16; // x1
  char *v17; // x21
  size_t v18; // x0
  unsigned __int64 v19; // x0
  unsigned __int64 v20; // x24
  unsigned __int64 v21; // x26
  __int64 v22; // x27
  __int64 *v23; // x21
  const char *v24; // x22
  __int64 v25; // x28
  unsigned __int64 v26; // x23
  unsigned __int64 v27; // x19
  __int64 v28; // x20
  __int64 v29; // x8
  int *v30; // x8
  unsigned __int64 v31; // x9
  unsigned int v32; // t1
  const char **v33; // x11
  _QWORD *v34; // x20
  int v35; // w10
  int v36; // w9
  __int64 v37; // x8
  __int64 v38; // x9
  __int64 v39; // x8
  double result; // d0
  const char *v41; // x19
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x8
  const char **v45; // [xsp+0h] [xbp-90h]
  _QWORD *v46; // [xsp+8h] [xbp-88h]
  _BYTE v47[40]; // [xsp+10h] [xbp-80h] BYREF
  char v48[8]; // [xsp+38h] [xbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 == *(_QWORD *)a1 )
  {
    v5 = 2LL * *(_QWORD *)(a1 + 32);
    *(_QWORD *)a1 = 2 * v4;
    memset(v47, 0, sizeof(v47));
    for ( i = (unsigned __int64)dyld3::OverflowSafeArray<unsigned long long,4294967295ul>::reserve(v47, v5); v5; --v5 )
    {
      i = (unsigned __int64)dyld3::OverflowSafeArray<unsigned long long,4294967295ul>::verifySpace(v47, 1);
      v7 = (*(_QWORD *)&v47[16])++;
      *(_QWORD *)(*(_QWORD *)v47 + 8 * v7) = -1;
    }
    v8 = *(_QWORD *)(a1 + 72);
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        if ( v8 <= j )
          dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::insert(i);
        v10 = *(_QWORD *)(a1 + 56);
        if ( (*(_BYTE *)(v10 + 32 * j + 24) & 6) == 0 )
        {
          v11 = *(char **)(v10 + 32 * j);
          v12 = _platform_strlen(v11);
          i = std::__murmur2_or_cityhash<unsigned long,64ul>::operator()((__int64)v48, (__int64 *)v11, v12);
          v13 = i & (*(_QWORD *)&v47[16] - 1LL);
          if ( *(_QWORD *)&v47[16] <= v13 )
LABEL_36:
            dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::insert();
          v14 = 1;
          while ( *(_QWORD *)(*(_QWORD *)v47 + 8 * v13) != -1 )
          {
            v15 = v13 + v14++;
            v13 = v15 & (*(_QWORD *)&v47[16] - 1LL);
            if ( *(_QWORD *)&v47[16] <= v13 )
              goto LABEL_36;
          }
          *(_QWORD *)(*(_QWORD *)v47 + 8 * v13) = j;
          v8 = *(_QWORD *)(a1 + 72);
        }
      }
    }
    if ( (_BYTE *)(a1 + 16) == v47 )
    {
      *(_QWORD *)&v47[16] = 0;
      if ( *(_QWORD *)&v47[24] )
        vm_deallocate(mach_task_self_, *(vm_address_t *)&v47[24], *(vm_size_t *)&v47[32]);
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 40);
      if ( v16 )
        vm_deallocate(mach_task_self_, v16, *(_QWORD *)(a1 + 48));
      *(_QWORD *)(a1 + 16) = *(_QWORD *)v47;
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v47[8];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v47[24];
    }
  }
  v45 = a2;
  v17 = (char *)*a2;
  v18 = _platform_strlen(*a2);
  v19 = std::__murmur2_or_cityhash<unsigned long,64ul>::operator()((__int64)v47, (__int64 *)v17, v18);
  v46 = (_QWORD *)a1;
  v20 = *(_QWORD *)(a1 + 32);
  v21 = (v20 - 1) & v19;
  if ( v20 <= v21 )
LABEL_27:
    dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::insert();
  v22 = *(_QWORD *)(a1 + 16);
  v23 = (__int64 *)(a1 + 56);
  v24 = *a2;
  v25 = 1;
  v26 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    v27 = *(_QWORD *)(v22 + 8 * v21);
    if ( v27 == -1 )
    {
      *(_QWORD *)(v22 + 8 * v21) = v26;
      ++v46[1];
      *(_OWORD *)v47 = *(_OWORD *)(v45 + 1);
      dyld3::OverflowSafeArray<dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::NodeEntryT,4294967295ul>::verifySpace(
        v23,
        1);
      v37 = v46[7];
      v38 = v46[9];
      v46[9] = v38 + 1;
      v39 = v37 + 32 * v38;
      *(_QWORD *)v39 = v24;
      result = *(double *)v47;
      *(_OWORD *)(v39 + 8) = *(_OWORD *)v47;
      *(_QWORD *)(v39 + 24) = 0;
      return result;
    }
    if ( v26 <= v27 )
      dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::insert();
    v28 = *v23;
    if ( !_platform_strcmp(*(const char **)(*v23 + 32 * v27), v24) )
      break;
    v21 = (v20 - 1) & (v21 + v25++);
    if ( v20 <= v21 )
      goto LABEL_27;
  }
  while ( 1 )
  {
    v29 = v28 + 32 * v27;
    v32 = *(_DWORD *)(v29 + 24);
    v30 = (int *)(v29 + 24);
    v31 = v32;
    if ( (v32 & 3) == 0 )
      break;
    v27 = v31 >> 3;
    if ( v26 <= v31 >> 3 )
      dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::insert();
  }
  if ( (v31 & 7) != 0 )
  {
    v33 = v45;
    v34 = v46;
    if ( (v31 & 4) == 0 )
      dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::insert();
    v36 = v31 & 0xFFFFFFF9 | 2;
    *v30 = v36;
    v35 = *((_DWORD *)v46 + 18);
    LOBYTE(v36) = v36 & 3;
  }
  else
  {
    v36 = v31 | 1;
    *v30 = v36;
    v33 = v45;
    v34 = v46;
    v35 = *((_DWORD *)v46 + 18);
  }
  *v30 = v36 & 7 | (8 * v35);
  v41 = *v33;
  *(_OWORD *)v47 = *(_OWORD *)(v33 + 1);
  dyld3::OverflowSafeArray<dyld3::MultiMap<char const*,dyld4::Loader::BindTarget,dyld3::HashCStringMulti,dyld3::EqualCStringMulti>::NodeEntryT,4294967295ul>::verifySpace(
    v23,
    1);
  v42 = v34[7];
  v43 = v34[9];
  v34[9] = v43 + 1;
  v44 = v42 + 32 * v43;
  *(_QWORD *)v44 = v41;
  result = *(double *)v47;
  *(_OWORD *)(v44 + 8) = *(_OWORD *)v47;
  *(_QWORD *)(v44 + 24) = 4;
  return result;
}
