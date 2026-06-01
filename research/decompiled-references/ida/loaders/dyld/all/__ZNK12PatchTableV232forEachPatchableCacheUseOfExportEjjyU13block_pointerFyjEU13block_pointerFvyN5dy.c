_QWORD *__fastcall PatchTableV2::forEachPatchableCacheUseOfExport(
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
  char *v14; // x25
  __int64 v15; // x8
  unsigned int *v16; // x28
  unsigned int *v17; // x21
  char *v18; // x20
  __int64 v19; // x8
  unsigned int *v20; // x27
  unsigned int *v21; // x24
  char *v22; // x23
  unsigned __int64 v23; // x8
  char *v24; // [xsp+0h] [xbp-90h]
  unsigned int *v26; // [xsp+18h] [xbp-78h]
  unsigned int *v28; // [xsp+28h] [xbp-68h]
  char *v29; // [xsp+30h] [xbp-60h]
  int v30; // [xsp+38h] [xbp-58h] BYREF

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
      v24 = (char *)v8 + v8[7] - v9;
      v29 = (char *)v8 + v8[9] - v9;
      v26 = &v13[3 * v11];
      do
      {
        result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(a5 + 16))(a5, *v13);
        v28 = v13;
        v15 = v13[2];
        if ( (_DWORD)v15 )
        {
          v16 = (unsigned int *)&v24[12 * v13[1]];
          v17 = &v16[3 * v15];
          v18 = (char *)result - a4;
          do
          {
            if ( *(_DWORD *)&v14[8 * *v16] == a3 )
            {
              v19 = v16[2];
              if ( (_DWORD)v19 )
              {
                v20 = (unsigned int *)&v29[8 * v16[1]];
                v21 = &v20[2 * v19];
                do
                {
                  v22 = &v18[*v20];
                  dyld3::MachOFile::PointerMetaData::PointerMetaData((dyld3::MachOFile::PointerMetaData *)&v30);
                  v23 = v20[1];
                  v30 = v30 & 0xF0000000
                      | (v23 >> 16)
                      | ((_DWORD)v23 << 17) & 0xFE0000
                      | ((_DWORD)v23 << 12) & 0x1000000
                      | ((_DWORD)v23 << 11) & 0x6000000
                      | ((_DWORD)v23 << 14) & 0x8000000;
                  result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *))(a6 + 16))(a6, v22);
                  v20 += 2;
                }
                while ( v20 != v21 );
              }
            }
            v16 += 3;
          }
          while ( v16 != v17 );
        }
        v13 = v28 + 3;
      }
      while ( v28 + 3 != v26 );
    }
  }
  return result;
}
