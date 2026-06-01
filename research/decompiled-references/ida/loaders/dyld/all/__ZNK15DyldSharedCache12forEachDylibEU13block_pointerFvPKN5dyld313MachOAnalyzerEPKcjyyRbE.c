unsigned int *__fastcall DyldSharedCache::forEachDylib(unsigned int *result, __int64 a2)
{
  __int64 *v2; // x8
  unsigned int *v3; // x20
  unsigned __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x24
  __int64 v8; // x5
  char *v9; // x2
  char *v10; // x1
  char v11; // [xsp+Fh] [xbp-31h] BYREF

  v2 = (__int64 *)((char *)result + result[4]);
  if ( !v2[2] )
  {
    v3 = result;
    if ( result[113] )
    {
      v5 = 0;
      v6 = *v2;
      v7 = (__int64)result + result[112] + 16;
      do
      {
        v8 = *(_QWORD *)(v7 - 8);
        v9 = (char *)v3 + *(unsigned int *)(v7 + 8);
        v10 = (char *)v3 + *(_QWORD *)(v7 - 16) - v6;
        v11 = 0;
        result = (unsigned int *)(*(__int64 (__fastcall **)(__int64, char *, char *, unsigned __int64, _QWORD, __int64, char *))(a2 + 16))(
                                   a2,
                                   v10,
                                   v9,
                                   v5,
                                   *(_QWORD *)v7,
                                   v8,
                                   &v11);
        if ( v11 )
          break;
        ++v5;
        v7 += 32;
      }
      while ( v5 < v3[113] );
    }
  }
  return result;
}
