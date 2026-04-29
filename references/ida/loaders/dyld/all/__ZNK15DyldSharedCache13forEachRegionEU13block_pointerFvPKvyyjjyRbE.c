__int64 __fastcall DyldSharedCache::forEachRegion(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  unsigned __int64 v7; // x21
  unsigned __int64 v8; // x23
  bool v9; // cf
  __int64 v10; // x8
  unsigned __int64 v11; // x21
  unsigned __int64 v12; // x23
  char v13; // [xsp+Eh] [xbp-32h] BYREF
  char v14; // [xsp+Fh] [xbp-31h] BYREF

  result = _platform_strncmp((const char *)a1, "dyld_v1", 7u);
  if ( !(_DWORD)result )
  {
    v5 = *(unsigned int *)(a1 + 16);
    if ( (unsigned int)v5 <= 0x400 )
    {
      v6 = *(unsigned int *)(a1 + 20);
      if ( (unsigned int)v6 <= 0x14 )
      {
        if ( (unsigned int)v5 > 0x138 )
        {
          v10 = *(unsigned int *)(a1 + 312);
          v11 = a1 + v10 + 56 * v6;
          if ( v11 > a1 + v10 )
          {
            v12 = v10 + a1 + 56;
            do
            {
              v13 = 0;
              result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, char *))(a2 + 16))(
                         a2,
                         a1 + *(_QWORD *)(v12 - 40),
                         *(_QWORD *)(v12 - 56),
                         *(_QWORD *)(v12 - 48),
                         *(unsigned int *)(v12 - 4),
                         *(unsigned int *)(v12 - 8),
                         *(_QWORD *)(v12 - 16),
                         &v13);
              if ( v13 )
                break;
              v9 = v12 >= v11;
              v12 += 56LL;
            }
            while ( !v9 );
          }
        }
        else
        {
          v7 = a1 + v5 + 32 * v6;
          if ( v7 > a1 + v5 )
          {
            v8 = v5 + a1 + 32;
            do
            {
              v14 = 0;
              result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, char *))(a2 + 16))(
                         a2,
                         a1 + *(_QWORD *)(v8 - 16),
                         *(_QWORD *)(v8 - 32),
                         *(_QWORD *)(v8 - 24),
                         *(unsigned int *)(v8 - 4),
                         *(unsigned int *)(v8 - 8),
                         0,
                         &v14);
              if ( v14 )
                v9 = 1;
              else
                v9 = v8 >= v7;
              v8 += 32LL;
            }
            while ( !v9 );
          }
        }
      }
    }
  }
  return result;
}
