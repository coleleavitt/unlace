_QWORD *__fastcall PatchTableV4::forEachPatchableCacheUseOfExport(
        _QWORD *result,
        unsigned int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _QWORD *v8; // x8
  __int64 v9; // x9
  unsigned int *v10; // x10
  __int64 v11; // x10
  __int64 v12; // x11
  unsigned int *v13; // x20
  char *v14; // x26
  __int64 v15; // x8
  unsigned int *v16; // x27
  unsigned int *v17; // x20
  char *v18; // x28
  __int64 v19; // x8
  unsigned int *v20; // x23
  unsigned int *v21; // x25
  char *v22; // x24
  unsigned int v23; // w8
  __int64 v24; // x3
  char *v25; // [xsp+0h] [xbp-90h]
  unsigned int *v27; // [xsp+18h] [xbp-78h]
  unsigned int *v29; // [xsp+28h] [xbp-68h]
  char *v30; // [xsp+30h] [xbp-60h]
  unsigned int v31; // [xsp+38h] [xbp-58h] BYREF

  v8 = (_QWORD *)*result;
  if ( *(_QWORD *)(*result + 16LL) > (unsigned __int64)a2 )
  {
    v9 = result[1];
    v10 = (unsigned int *)((char *)&v8[2 * a2] + v8[1] - v9);
    v12 = *v10;
    v11 = v10[1];
    v13 = (unsigned int *)((char *)v8 + 12 * v12 + v8[5] - v9);
    if ( v11 )
    {
      v14 = (char *)v8 + v8[3] - v9;
      v25 = (char *)v8 + v8[7] - v9;
      v30 = (char *)v8 + v8[9] - v9;
      v27 = &v13[3 * v11];
      do
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(a5 + 16))(a5, *v13);
        v29 = v13;
        v15 = v13[2];
        if ( (_DWORD)v15 )
        {
          v16 = (unsigned int *)&v25[12 * v13[1]];
          v17 = &v16[3 * v15];
          v18 = (char *)result - a4;
          do
          {
            if ( *(_DWORD *)&v14[8 * *v16] == a3 )
            {
              v19 = v16[2];
              if ( (_DWORD)v19 )
              {
                v20 = (unsigned int *)&v30[8 * v16[1]];
                v21 = &v20[2 * v19];
                do
                {
                  v22 = &v18[*v20];
                  dyld3::MachOFile::PointerMetaData::PointerMetaData((dyld3::MachOFile::PointerMetaData *)&v31);
                  dyld_cache_patchable_location_v4::getPMD(v20, &v31);
                  v23 = v20[1];
                  if ( (v23 & 1) != 0 )
                    v24 = (v23 >> 9) & 0x1F;
                  else
                    v24 = v23 >> 9;
                  result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, _QWORD, __int64, _QWORD))(a6 + 16))(
                                       a6,
                                       v22,
                                       v31,
                                       v24,
                                       (v23 >> 8) & 1);
                  v20 += 2;
                }
                while ( v20 != v21 );
              }
            }
            v16 += 3;
          }
          while ( v16 != v17 );
        }
        v13 = v29 + 3;
      }
      while ( v29 + 3 != v27 );
    }
  }
  return result;
}
