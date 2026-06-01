bool __fastcall dyld4::PrebuiltLoader::isValid(dyld4::PrebuiltLoader *this, const dyld4::RuntimeState *a2)
{
  dyld4::PrebuiltLoader *v2; // x0
  const dyld4::RuntimeState *v3; // x1
  __int16 v4; // w8
  __int16 v5; // w9
  _QWORD *v6; // x10
  int v7; // w8
  _BOOL8 v8; // x19
  const dyld4::RuntimeState *v10; // x19
  dyld4::PrebuiltLoader *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x21
  unsigned int v14; // w9
  unsigned int i; // w22
  __int64 v16; // x23
  __int16 v17; // w10
  _QWORD *v18; // x11
  __int64 v19; // x10
  __int64 v20; // x21
  unsigned int v21; // w9
  unsigned int j; // w22
  __int64 v23; // x23
  __int16 v24; // w10
  _QWORD *v25; // x11
  __int64 v26; // x10
  dyld4::PrebuiltLoader **v27; // x21
  __int64 v28; // x22
  dyld4::PrebuiltLoader *v29; // t1
  char v30; // w21
  dyld4::PrebuiltLoader **v31; // x22
  __int64 v32; // x23
  __int16 v33; // w8
  __int64 *v34; // x9
  __int64 v35; // x24
  __int64 v36; // x25
  __int64 v37; // x8
  __int64 v38; // x9
  __int16 v39; // w12
  __int64 *v40; // x11
  __int64 v41; // x11
  __int64 v42; // x12
  __int16 v43; // w8
  _QWORD *v44; // x9
  _QWORD v45[2]; // [xsp+8h] [xbp-2078h] BYREF
  __int64 v46; // [xsp+18h] [xbp-2068h]
  vm_address_t address; // [xsp+20h] [xbp-2060h]
  vm_size_t size; // [xsp+28h] [xbp-2058h]
  char v49; // [xsp+30h] [xbp-2050h] BYREF

  v2 = (dyld4::PrebuiltLoader *)__chkstk_darwin();
  v4 = *((_WORD *)v2 + 3);
  v5 = v4;
  v6 = (_QWORD *)((char *)v3 + 688);
  if ( v4 >= 0 )
    v6 = (_QWORD *)((char *)v3 + 664);
  v7 = *(unsigned __int8 *)(*v6 + (v4 & 0x7FFF));
  if ( (unsigned int)(v7 - 2) < 7 )
    return 1;
  if ( v7 == 255 )
    return 0;
  v10 = v3;
  v11 = v2;
  if ( !v7 )
  {
    dyld4::PrebuiltLoader::recursiveMarkBeingValidated(v2, v3);
    v5 = *((_WORD *)v11 + 3);
  }
  v12 = 0;
  v45[0] = &v49;
  v45[1] = 1024;
  address = 0;
  size = 0;
  v46 = 0;
  if ( v5 < 0 )
  {
    v13 = *((_QWORD *)v10 + 85);
    v14 = *(_DWORD *)(v13 + 12);
    if ( v14 )
    {
      v12 = 0;
      for ( i = 0; i < v14; ++i )
      {
        if ( v14 <= (unsigned __int16)i )
          dyld4::PrebuiltLoader::isValid();
        v16 = v13 + *(unsigned int *)(v13 + *(unsigned int *)(v13 + 16) + 4LL * (unsigned __int16)i);
        v17 = *(_WORD *)(v16 + 6);
        if ( v17 >= 0 )
          v18 = (_QWORD *)((char *)v10 + 664);
        else
          v18 = (_QWORD *)((char *)v10 + 688);
        if ( *(_BYTE *)(*v18 + (v17 & 0x7FFF)) == 1 )
        {
          dyld3::OverflowSafeArray<dyld4::PrebuiltLoader const*,4294967295ul>::verifySpace(v45, 1);
          v19 = v46;
          v12 = ++v46;
          *(_QWORD *)(v45[0] + 8 * v19) = v16;
          v14 = *(_DWORD *)(v13 + 12);
        }
      }
    }
    else
    {
      v12 = 0;
    }
  }
  v20 = *((_QWORD *)v10 + 82);
  v21 = *(_DWORD *)(v20 + 12);
  if ( v21 )
  {
    for ( j = 0; j < v21; ++j )
    {
      if ( v21 <= (unsigned __int16)j )
        dyld4::PrebuiltLoader::isValid();
      v23 = v20 + *(unsigned int *)(v20 + *(unsigned int *)(v20 + 16) + 4LL * (unsigned __int16)j);
      v24 = *(_WORD *)(v23 + 6);
      if ( v24 >= 0 )
        v25 = (_QWORD *)((char *)v10 + 664);
      else
        v25 = (_QWORD *)((char *)v10 + 688);
      if ( *(_BYTE *)(*v25 + (v24 & 0x7FFF)) == 1 )
      {
        dyld3::OverflowSafeArray<dyld4::PrebuiltLoader const*,4294967295ul>::verifySpace(v45, 1);
        v26 = v46;
        v12 = ++v46;
        *(_QWORD *)(v45[0] + 8 * v26) = v23;
        v21 = *(_DWORD *)(v20 + 12);
      }
    }
  }
  if ( v12 )
  {
    v27 = (dyld4::PrebuiltLoader **)v45[0];
    v28 = 8 * v12;
    do
    {
      v29 = *v27++;
      dyld4::PrebuiltLoader::invalidateInIsolation(v29, v10);
      v28 -= 8;
    }
    while ( v28 );
  }
  while ( v46 )
  {
    v30 = 0;
    v31 = (dyld4::PrebuiltLoader **)v45[0];
    v32 = 8 * v46;
    do
    {
      v33 = *((_WORD *)*v31 + 3);
      if ( v33 >= 0 )
        v34 = (__int64 *)((char *)v10 + 664);
      else
        v34 = (__int64 *)((char *)v10 + 688);
      v35 = *v34;
      v36 = v33 & 0x7FFF;
      if ( *(_BYTE *)(*v34 + v36) == 1 )
      {
        dyld4::PrebuiltLoader::invalidateShallow(*v31, v10);
        if ( *(_BYTE *)(v35 + v36) != 1 )
          v30 = 1;
      }
      ++v31;
      v32 -= 8;
    }
    while ( v32 );
    if ( (v30 & 1) == 0 )
    {
      if ( v46 )
      {
        v37 = v45[0];
        v38 = 8 * v46;
        do
        {
          v39 = *(_WORD *)(*(_QWORD *)v37 + 6LL);
          if ( v39 >= 0 )
            v40 = (__int64 *)((char *)v10 + 664);
          else
            v40 = (__int64 *)((char *)v10 + 688);
          v41 = *v40;
          v42 = v39 & 0x7FFF;
          if ( *(_BYTE *)(v41 + v42) == 1 )
            *(_BYTE *)(v41 + v42) = 2;
          v37 += 8;
          v38 -= 8;
        }
        while ( v38 );
      }
      break;
    }
  }
  v43 = *((_WORD *)v11 + 3);
  if ( v43 >= 0 )
    v44 = (_QWORD *)((char *)v10 + 664);
  else
    v44 = (_QWORD *)((char *)v10 + 688);
  v8 = *(unsigned __int8 *)(*v44 + (v43 & 0x7FFF)) != 255;
  v46 = 0;
  if ( address )
    vm_deallocate(mach_task_self_, address, size);
  return v8;
}
