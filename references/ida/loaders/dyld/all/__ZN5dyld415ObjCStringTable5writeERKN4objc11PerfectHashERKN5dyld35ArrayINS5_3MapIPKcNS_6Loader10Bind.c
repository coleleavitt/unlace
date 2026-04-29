unsigned __int64 __fastcall dyld4::ObjCStringTable::write(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v6; // x8
  __int128 v7; // q0
  __int64 v8; // x22
  __int64 v9; // x23
  unsigned __int64 v10; // x8
  unsigned __int64 result; // x0
  unsigned __int64 v12; // x9
  unsigned __int64 v13; // x11
  unsigned __int64 v14; // x9
  __int64 v15; // x8
  __int64 v16; // x24
  __int64 v17; // x23
  __int64 v18; // x26
  _QWORD *v19; // x20
  unsigned int v20; // w21
  unsigned __int64 *v21; // x0
  const char *v22; // x22
  unsigned int v23; // [xsp+0h] [xbp-60h]
  unsigned __int64 v24; // [xsp+10h] [xbp-50h] BYREF
  unsigned __int64 v25; // [xsp+18h] [xbp-48h]

  v6 = 0;
  v7 = *(_OWORD *)a2;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  if ( (unsigned int)(HIDWORD(v7) + 1) > 8 )
    v8 = (unsigned int)(HIDWORD(v7) + 1);
  else
    v8 = 8;
  *(_DWORD *)(a1 + 16) = v8;
  if ( *a2 <= 8 )
    v9 = 8;
  else
    v9 = *a2;
  *(_DWORD *)(a1 + 20) = v9;
  *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 2);
  do
  {
    *(_DWORD *)(a1 + v6 * 4 + 32) = a2[v6 + 6];
    ++v6;
  }
  while ( v6 != 256 );
  if ( a2[3] != -1 )
  {
    v10 = 0;
    do
    {
      if ( *((_QWORD *)a2 + 133) <= v10 )
        dyld4::ObjCStringTable::write();
      *(_BYTE *)(a1 + 1056 + v10) = *(_BYTE *)(*((_QWORD *)a2 + 131) + v10);
      ++v10;
    }
    while ( v10 < a2[3] + 1 );
  }
  v23 = v7;
  result = dyld4::PrebuiltLoader::BindTargetRef::makeAbsolute(nullptr, (unsigned __int64)a2);
  v25 = result;
  if ( *a2 )
  {
    v12 = 0;
    do
    {
      if ( v23 == v12 )
        dyld4::ObjCStringTable::write();
      *(_QWORD *)(a1 + v9 + v8 + 1056 + 8 * v12++) = result;
      v13 = *a2;
    }
    while ( v12 < v13 );
    if ( (_DWORD)v13 )
    {
      v14 = 0;
      do
      {
        if ( v23 == v14 )
          dyld4::ObjCStringTable::write();
        *(_BYTE *)(a1 + v8 + 1056 + v14++) = 0;
      }
      while ( v14 < *a2 );
    }
  }
  v15 = a3[2];
  if ( v15 )
  {
    v16 = a1 + (unsigned int)v8 + 1056;
    v17 = v16 + (unsigned int)v9;
    v18 = 24 * v15;
    v19 = (_QWORD *)(*a3 + 8LL);
    do
    {
      if ( *v19 == v25 )
        dyld4::ObjCStringTable::write();
      v20 = dyld4::ObjCStringTable::hash((dyld4::ObjCStringTable *)a1, (const char *)*(v19 - 1));
      v21 = dyld4::PrebuiltLoader::BindTargetRef::BindTargetRef(&v24, v19);
      if ( v23 <= v20 )
        dyld4::ObjCStringTable::write(v21);
      *(_QWORD *)(v17 + 8LL * v20) = v24;
      v22 = (const char *)*(v19 - 1);
      result = _platform_strlen(v22) & 0x1F | (32 * (unsigned int)*(unsigned __int8 *)v22);
      *(_BYTE *)(v16 + v20) = result;
      v19 += 3;
      v18 -= 24;
    }
    while ( v18 );
  }
  return result;
}
