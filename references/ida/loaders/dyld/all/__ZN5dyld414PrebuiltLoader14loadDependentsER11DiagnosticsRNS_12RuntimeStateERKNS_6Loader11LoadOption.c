void __fastcall dyld4::PrebuiltLoader::loadDependents(
        __int64 a1,
        Diagnostics *a2,
        dyld4::RuntimeState *a3,
        __int128 *a4)
{
  __int16 v8; // w8
  __int64 *v9; // x9
  __int64 v10; // x25
  __int64 v11; // x26
  unsigned __int64 v12; // x8
  __int64 v13; // x12
  char *v14; // x22
  size_t v15; // x1
  unsigned __int64 v16; // x8
  unsigned __int64 v17; // x24
  __int64 v18; // x0
  __int128 v19; // q1
  __int64 v20; // x9
  unsigned __int64 v21; // x23
  __int64 v22; // x0
  __int128 v23; // [xsp+0h] [xbp-90h] BYREF
  __int128 v24; // [xsp+10h] [xbp-80h]
  __int64 v25; // [xsp+20h] [xbp-70h]
  _QWORD v26[2]; // [xsp+28h] [xbp-68h] BYREF

  v8 = *(_WORD *)(a1 + 6);
  if ( v8 >= 0 )
    v9 = (__int64 *)((char *)a3 + 664);
  else
    v9 = (__int64 *)((char *)a3 + 688);
  v10 = *v9;
  v11 = v8 & 0x7FFF;
  dyld4::PrebuiltLoader::map(a1, a2, a3);
  if ( *(unsigned __int8 *)(v10 + v11) <= 3u )
  {
    *(_BYTE *)(v10 + v11) = 4;
    __chkstk_darwin();
    v14 = (char *)&v23 - v13;
    if ( v12 >= 0x200 )
      v15 = 512;
    else
      v15 = v12;
    __bzero((char *)&v23 - v13, v15);
    LODWORD(v16) = *(unsigned __int16 *)(a1 + 24);
    if ( *(_WORD *)(a1 + 24) )
    {
      v17 = 0;
      do
      {
        v18 = dyld4::PrebuiltLoader::dependent((_WORD *)a1, a3, v17, nullptr);
        *(_QWORD *)&v14[8 * v17] = v18;
        if ( v18 )
          dyld4::PrebuiltLoader::map(v18, a2, a3);
        ++v17;
        v16 = *(unsigned __int16 *)(a1 + 24);
      }
      while ( v17 < v16 );
    }
    v26[0] = *((_QWORD *)a4 + 2);
    v26[1] = a1;
    v19 = a4[1];
    v23 = *a4;
    v24 = v19;
    v20 = *((_QWORD *)a4 + 4);
    BYTE11(v23) = *(_BYTE *)(a1 + 5) & 1;
    v25 = v20;
    *(_QWORD *)&v24 = v26;
    if ( (_DWORD)v16 )
    {
      v21 = 0;
      do
      {
        v22 = *(_QWORD *)&v14[8 * v21];
        if ( v22 )
        {
          dyld4::PrebuiltLoader::loadDependents(v22, a2, a3, &v23);
          LOWORD(v16) = *(_WORD *)(a1 + 24);
        }
        ++v21;
      }
      while ( v21 < (unsigned __int16)v16 );
    }
    *(_BYTE *)(v10 + v11) = 5;
  }
}
