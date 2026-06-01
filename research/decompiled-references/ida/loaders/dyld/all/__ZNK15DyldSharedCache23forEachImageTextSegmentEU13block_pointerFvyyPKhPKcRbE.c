__int64 __fastcall DyldSharedCache::forEachImageTextSegment(__int64 result, __int64 a2)
{
  __int64 v2; // x20
  __int64 v3; // x9
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  unsigned __int64 v7; // x23
  char v8; // [xsp+Fh] [xbp-31h] BYREF

  if ( *(_DWORD *)(result + 16) >= 0x89u )
  {
    v2 = result;
    v3 = *(_QWORD *)(result + 144);
    if ( v3 )
    {
      v4 = *(_QWORD *)(result + 136);
      v5 = result + v4 + 32 * v3;
      v8 = 0;
      if ( v5 > result + v4 )
      {
        v7 = v4 + result + 32;
        do
        {
          result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64, __int64, char *))(a2 + 16))(
                     a2,
                     *(_QWORD *)(v7 - 16),
                     *(unsigned int *)(v7 - 8),
                     v7 - 32,
                     v2 + *(unsigned int *)(v7 - 4),
                     &v8);
          if ( v7 >= v5 )
            break;
          v7 += 32LL;
        }
        while ( (v8 & 1) == 0 );
      }
    }
  }
  return result;
}
