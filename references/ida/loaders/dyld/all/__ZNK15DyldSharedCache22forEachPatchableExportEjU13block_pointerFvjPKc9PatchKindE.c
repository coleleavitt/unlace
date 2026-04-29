_DWORD **__fastcall DyldSharedCache::forEachPatchableExport(_DWORD **result, unsigned int a2, __int64 a3)
{
  _DWORD *v3; // x10
  _DWORD **v6; // x21
  __int64 v7; // x9
  __int64 v8; // x8
  bool v9; // cc
  __int64 v10; // x9
  __int64 v11; // x22
  __int64 v12; // x9
  char *v13; // x10
  _QWORD *v14; // x21
  char *v15; // x20
  unsigned int v16; // w8
  __int64 v17; // x22
  int v18; // w11
  _DWORD *v19; // x22
  int v20; // t1
  char *v21; // x23
  char *v22; // x24
  int v23; // w25
  __int64 i; // x27
  char *v25; // x8
  unsigned __int64 v26; // x9
  void *v27; // x2
  _DWORD *v28[2]; // [xsp+0h] [xbp-60h] BYREF

  v3 = result[19];
  if ( v3 )
  {
    v6 = result;
    v7 = *((unsigned int *)result + 4);
    if ( (unsigned int)v7 > 0x180 )
    {
      v8 = *(__int64 *)((char *)result + v7);
      if ( *(_DWORD *)((char *)result + (_QWORD)v3 - v8) != 1 )
      {
        v28[0] = (_DWORD *)((char *)result + (_QWORD)v3 - v8);
        v28[1] = v3;
        return PatchTable::forEachPatchableExport(v28);
      }
    }
    else
    {
      v8 = *(__int64 *)((char *)result + v7);
    }
    v9 = (unsigned int)v7 > 0x1C3;
    v10 = 3;
    if ( v9 )
      v10 = 56;
    v11 = a2;
    result = (_DWORD **)dyld3::MachOFile::preferredLoadAddress((dyld3::MachOFile *)(*(char **)((char *)&result[4 * a2]
                                                                                             + LODWORD(result[v10]))
                                                                                  + (_QWORD)result
                                                                                  - v8));
    v12 = *(__int64 *)((char *)v6 + *((unsigned int *)v6 + 4));
    v13 = (char *)v6 - v12;
    v14 = (_QWORD *)((char *)v6[19] + (_QWORD)v6 - v12);
    if ( v14[1] >= (unsigned __int64)a2 )
    {
      v15 = &v13[8 * a2 + *v14];
      v16 = *(_DWORD *)v15;
      v17 = (__int64)&v13[8 * v11 + *v14];
      v20 = *(_DWORD *)(v17 + 4);
      v19 = (_DWORD *)(v17 + 4);
      v18 = v20;
      if ( v14[3] >= (unsigned __int64)(unsigned int)(v20 + *(_DWORD *)v15) )
      {
        if ( v18 )
        {
          v21 = &v13[v14[2]];
          v22 = &v13[v14[6]];
          v23 = v12 - (_DWORD)result;
          for ( i = 1; ; ++i )
          {
            v25 = &v21[16 * i + 16 * v16];
            v26 = *((unsigned int *)v25 - 1);
            v27 = v14[7] <= v26 ? &unk_7E832 : &v22[v26];
            result = (_DWORD **)(*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD))(a3 + 16))(
                                  a3,
                                  (unsigned int)(*((_DWORD *)v25 - 4) + v23),
                                  v27,
                                  0);
            if ( i == *v19 )
              break;
            v16 = *(_DWORD *)v15;
          }
        }
      }
    }
  }
  return result;
}
