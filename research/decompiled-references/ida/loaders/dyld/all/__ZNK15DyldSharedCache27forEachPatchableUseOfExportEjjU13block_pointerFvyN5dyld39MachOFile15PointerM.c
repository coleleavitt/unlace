int **__fastcall DyldSharedCache::forEachPatchableUseOfExport(int **result, __int64 a2, __int64 a3, __int64 a4)
{
  int *v4; // x8
  int v6; // w20
  unsigned int v7; // w21
  int **v8; // x22
  __int64 v9; // x9
  int v10; // w23
  unsigned __int64 v11; // x8
  __int64 v12; // x9
  __int64 v13; // x24
  __int64 v14; // x25
  __int64 v15; // x8
  _QWORD *v16; // x13
  char *v17; // x10
  unsigned int *v18; // x21
  unsigned int v19; // w9
  __int64 v20; // x11
  int v21; // w8
  __int64 v22; // x24
  int v23; // w14
  char *v24; // x25
  char *v25; // x26
  __int64 v26; // x9
  char *v27; // x22
  unsigned int v28; // w9
  unsigned int *v29; // x22
  unsigned int v30; // t1
  unsigned int v31; // w10
  __int64 i; // x20
  __int64 v33; // x23
  char *v34; // x8
  unsigned __int64 v35; // x9
  int *v36; // x8
  int v37; // [xsp+4h] [xbp-9Ch]
  _QWORD *v38; // [xsp+8h] [xbp-98h]
  int *v39; // [xsp+10h] [xbp-90h]
  int *v40[7]; // [xsp+18h] [xbp-88h] BYREF

  v4 = result[19];
  if ( v4 )
  {
    v6 = a3;
    v7 = a2;
    v8 = result;
    v9 = *((unsigned int *)result + 4);
    if ( (unsigned int)v9 > 0x180 )
    {
      v10 = *(_DWORD *)((char *)result + (_QWORD)v4 - *(char **)((char *)result + v9));
      DyldSharedCache::forEachPatchableGOTUseOfExport(result, a2, a3, a4);
      if ( v10 != 1 )
      {
        v40[2] = (int *)_NSConcreteStackBlock;
        v40[3] = (int *)0x40000000;
        v40[4] = (int *)___ZNK15DyldSharedCache27forEachPatchableUseOfExportEjjU13block_pointerFvyN5dyld39MachOFile15PointerMetaDataEybE_block_invoke;
        v40[5] = (int *)&__block_descriptor_tmp_31_1;
        v40[6] = (int *)v8;
        v36 = v8[19];
        v40[0] = (int *)((char *)v8 + (_QWORD)v36 - *(char **)((char *)v8 + *((unsigned int *)v8 + 4)));
        v40[1] = v36;
        return PatchTable::forEachPatchableCacheUseOfExport(v40);
      }
    }
    else
    {
      DyldSharedCache::forEachPatchableGOTUseOfExport(result, a2, a3, a4);
    }
    v11 = *((unsigned int *)v8 + 4);
    v12 = 3;
    if ( v11 > 0x1C3 )
      v12 = 56;
    v13 = v7;
    v14 = *(__int64 *)((char *)v8 + v11);
    result = (int **)dyld3::MachOFile::preferredLoadAddress((dyld3::MachOFile *)(*(char **)((char *)&v8[4 * v7]
                                                                                          + LODWORD(v8[v12]))
                                                                               + (_QWORD)v8
                                                                               - v14));
    v15 = *(__int64 *)((char *)v8 + *((unsigned int *)v8 + 4));
    v16 = (int **)((char *)v8 + (_QWORD)v8[19] - v15);
    if ( v16[1] >= (unsigned __int64)v7 )
    {
      v17 = (char *)v8 - v15;
      v18 = (unsigned int *)((char *)&v8[v7] + *v16 - v15);
      v19 = *v18;
      v20 = (__int64)&v8[v13] + *v16 - v15;
      v21 = *(_DWORD *)(v20 + 4);
      v39 = (int *)(v20 + 4);
      if ( v16[3] >= (unsigned __int64)(v21 + *v18) )
      {
        if ( v21 )
        {
          v22 = 0;
          v23 = (_DWORD)result - v14 + v6;
          v24 = &v17[v16[2]];
          v25 = &v17[v16[4]];
          v38 = v16;
          v37 = v23;
          while ( 1 )
          {
            v26 = v22 + v19;
            if ( *(_DWORD *)&v24[16 * v26] == v23 )
            {
              v27 = &v24[16 * v26];
              v30 = *((_DWORD *)v27 + 1);
              v29 = (unsigned int *)(v27 + 4);
              v28 = v30;
              v31 = v29[1];
              if ( v16[5] < (unsigned __int64)(v31 + v30) )
                return result;
              if ( v31 )
              {
                for ( i = 1; ; ++i )
                {
                  v33 = i + v28;
                  dyld3::MachOFile::PointerMetaData::PointerMetaData((dyld3::MachOFile::PointerMetaData *)v40);
                  v34 = &v25[8 * v33];
                  v35 = *((unsigned int *)v34 - 1);
                  LODWORD(v40[0]) = ((_DWORD)v35 << 17) & 0xFE0000
                                  | (__int64)v40[0] & 0xF0000000
                                  | (v35 >> 16)
                                  | ((_DWORD)v35 << 12) & 0x1000000
                                  | ((_DWORD)v35 << 11) & 0x6000000
                                  | ((_DWORD)v35 << 14) & 0x8000000;
                  result = (int **)(*(__int64 (__fastcall **)(__int64, _QWORD))(a4 + 16))(
                                     a4,
                                     *((unsigned int *)v34 - 2));
                  if ( i == v29[1] )
                    break;
                  v28 = *v29;
                }
                v16 = v38;
                v21 = *v39;
                v23 = v37;
              }
            }
            if ( ++v22 == v21 )
              break;
            v19 = *v18;
          }
        }
      }
    }
  }
  return result;
}
