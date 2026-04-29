__int64 __fastcall DyldSharedCache::forEachCache(char *a1, __int64 a2)
{
  __int64 result; // x0
  int v5; // w22
  char *v6; // x9
  __int64 v7; // x11
  __int64 v8; // x9
  _QWORD *v9; // x8
  char v10; // [xsp+Fh] [xbp-31h] BYREF

  v10 = 0;
  result = (*(__int64 (__fastcall **)(__int64, char *, char *))(a2 + 16))(a2, a1, &v10);
  if ( !v10 && *((_DWORD *)a1 + 4) >= 0x18Du )
  {
    if ( *((_DWORD *)a1 + 99) )
    {
      result = (*(__int64 (__fastcall **)(__int64, char *, char *))(a2 + 16))(
                 a2,
                 &a1[*(_QWORD *)&a1[*((unsigned int *)a1 + 98) + 16]],
                 &v10);
      if ( !v10 )
      {
        v5 = 1;
        do
        {
          if ( v5 == *((_DWORD *)a1 + 99) )
            break;
          v6 = &a1[*((unsigned int *)a1 + 98)];
          v7 = (__int64)&v6[24 * (unsigned __int8)v5 + 16];
          v8 = (__int64)&v6[56 * (unsigned __int8)v5 + 16];
          v9 = (_QWORD *)(*((_DWORD *)a1 + 4) >= 0x1C9u ? v8 : v7);
          result = (*(__int64 (__fastcall **)(__int64, char *, char *))(a2 + 16))(a2, &a1[*v9], &v10);
          ++v5;
        }
        while ( !v10 );
      }
    }
  }
  return result;
}
