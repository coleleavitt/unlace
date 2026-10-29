__int64 __fastcall dyld4::removeImageFromAllImages(dyld4 *this, const mach_header *a2)
{
  void *v3; // x8
  __int64 v4; // x21
  unsigned __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x11
  __int128 v8; // q0
  __int64 v9; // x22
  __int64 v10; // x9
  dyld4 **v11; // x0
  size_t v12; // x2
  dyld4 **v13; // x10
  dyld4 *v14; // t1
  uint64_t v15; // x0
  _QWORD *v16; // x8
  __int128 v18; // [xsp+0h] [xbp-40h] BYREF
  __int64 v19; // [xsp+10h] [xbp-30h]

  v3 = gProcessInfo;
  atomic_store(0, (unsigned __int64 *)gProcessInfo + 1);
  v4 = dyld4::sImageInfos;
  v5 = *(_QWORD *)(dyld4::sImageInfos + 8);
  v6 = *(_QWORD *)(dyld4::sImageInfos + 16);
  if ( v6 )
  {
    v7 = 0;
    while ( *(dyld4 **)(v5 + v7) != this )
    {
      v7 += 24;
      if ( 24 * v6 == v7 )
        goto LABEL_7;
    }
    v8 = *(_OWORD *)(v5 + v7);
    v19 = *(_QWORD *)(v5 + v7 + 16);
    v18 = v8;
    _platform_memmove(
      (void *)(v5 + v7),
      (const void *)(v5 + v7 + 24),
      *(_QWORD *)(dyld4::sImageInfos + 8) + 24LL * *(_QWORD *)(dyld4::sImageInfos + 16) - v5 - v7 - 24);
    v5 = *(_QWORD *)(v4 + 8);
    v6 = *(_QWORD *)(v4 + 16) - 1LL;
    *(_QWORD *)(v4 + 16) = v6;
    v3 = gProcessInfo;
  }
LABEL_7:
  *((_DWORD *)v3 + 1) = v6;
  atomic_store(v5, (unsigned __int64 *)v3 + 1);
  *((_QWORD *)v3 + 12) = 0;
  v9 = dyld4::sImageUUIDs;
  v10 = *(_QWORD *)(dyld4::sImageUUIDs + 16);
  if ( v10 )
  {
    v11 = *(dyld4 ***)(dyld4::sImageUUIDs + 8);
    v12 = 24 * v10 - 24;
    v13 = v11;
    while ( 1 )
    {
      v14 = *v13;
      v13 += 3;
      if ( v14 == this )
        break;
      v12 -= 24LL;
      v11 = v13;
      if ( v12 == -24 )
        goto LABEL_13;
    }
    _platform_memmove(v11, v11 + 3, v12);
    v10 = *(_QWORD *)(v9 + 16) - 1LL;
    *(_QWORD *)(v9 + 16) = v10;
    v3 = gProcessInfo;
  }
LABEL_13:
  *((_QWORD *)v3 + 11) = v10;
  v15 = mach_absolute_time();
  v16 = gProcessInfo;
  atomic_store(v15, (unsigned __int64 *)gProcessInfo + 23);
  v16[12] = *(_QWORD *)(dyld4::sImageUUIDs + 8);
  return ((__int64 (__fastcall *)(__int64, __int64, __int128 *))v16[2])(1, 1, &v18);
}
