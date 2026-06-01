_QWORD *__fastcall PatchTableV4::forEachPatchableGOTUseOfExport(
        _QWORD *result,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  _QWORD *v4; // x9
  __int64 v5; // x11
  unsigned int *v6; // x10
  __int64 v7; // x12
  __int64 v9; // x8
  __int64 v10; // x10
  __int64 v11; // x14
  char *v12; // x11
  char *v13; // x9
  __int64 v14; // x12
  __int64 v15; // x14
  unsigned int v16; // w16
  __int64 v17; // x10
  __int64 v18; // x8
  char *v19; // x20
  char *v20; // x21
  unsigned int v21; // w8
  __int64 v22; // x3
  unsigned int v23; // [xsp+8h] [xbp-28h] BYREF

  v4 = (_QWORD *)*result;
  if ( *(_QWORD *)(*result + 112LL) > (unsigned __int64)a2 )
  {
    v5 = result[1];
    v6 = (unsigned int *)((char *)&v4[a2] + v4[13] - v5);
    v7 = v6[1];
    if ( (_DWORD)v7 )
    {
      v9 = 0;
      v10 = (__int64)v4 + 12 * *v6 + v4[15] - v5;
      v11 = v4[17] - v5;
      v12 = (char *)v4 + v4[3] - v5;
      v13 = (char *)v4 + v11;
      v14 = v7 - 1;
      while ( 1 )
      {
        v15 = (v9 + v14) / 2;
        v16 = *(_DWORD *)&v12[8 * *(unsigned int *)(v10 + 12LL * (unsigned int)v15)];
        if ( v16 == a3 )
          break;
        if ( v16 <= a3 )
          v9 = v15 + 1;
        else
          v14 = v15 - 1;
        if ( v9 > v14 )
          return result;
      }
      v17 = v10 + 12LL * (unsigned int)v15;
      v18 = *(unsigned int *)(v17 + 8);
      if ( (_DWORD)v18 )
      {
        v19 = &v13[16 * *(unsigned int *)(v17 + 4)];
        v20 = &v19[16 * v18];
        do
        {
          dyld3::MachOFile::PointerMetaData::PointerMetaData((dyld3::MachOFile::PointerMetaData *)&v23);
          dyld_cache_patchable_location_v4_got::getPMD(v19, &v23);
          v21 = *((_DWORD *)v19 + 2);
          if ( (v21 & 1) != 0 )
            v22 = (v21 >> 9) & 0x1F;
          else
            v22 = v21 >> 9;
          result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(a4 + 16))(
                               a4,
                               *(_QWORD *)v19,
                               v23,
                               v22,
                               (v21 >> 8) & 1);
          v19 += 16;
        }
        while ( v19 != v20 );
      }
    }
  }
  return result;
}
