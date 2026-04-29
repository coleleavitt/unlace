__int64 __fastcall dyld4::fixupPageAuth64(
        __int64 result,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        ptrauth_key a6)
{
  __int64 v6; // x8
  __int64 v8; // x21
  __int64 *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x22
  unsigned __int64 v12; // x23
  unsigned __int64 v13; // x9
  __int64 v14; // x8
  void *v15; // x2
  dyld4 *v16; // x0
  unsigned int v17; // w9
  unsigned int v18; // w10
  __int64 v19; // x8

  v6 = *(unsigned __int16 *)(a3 + 2LL * a4 + 22);
  if ( v6 != 0xFFFF )
  {
    v8 = a2 + *(unsigned int *)(a2 + 8);
    v9 = (__int64 *)(result + v6);
    v10 = 24;
    if ( a5 )
      v10 = 32;
    v11 = *(_QWORD *)(a2 + v10);
    do
    {
      v12 = *v9;
      if ( *v9 < 0 )
      {
        if ( (v12 & 0x4000000000000000LL) != 0 )
        {
          v18 = *(_DWORD *)(a2 + 12);
          if ( (v12 & 0xFFFFFF) >= v18 )
            return fprintf(__stderrp, "out of range bind ordinal %u (max %u)", v12 & 0xFFFFFF, v18);
          v15 = (void *)(HIWORD(v12) & 1);
          v16 = *(dyld4 **)(v8 + 8 * (*v9 & 0xFFFFFF));
        }
        else
        {
          v15 = (void *)(HIWORD(v12) & 1);
          v16 = (dyld4 *)(*(_QWORD *)(a2 + 32) + (unsigned int)v12);
        }
        result = dyld4::signPointer(v16, (unsigned __int64)v9, v15, SBYTE4(v12), (v12 >> 49) & 3, a6);
      }
      else
      {
        if ( (v12 & 0x4000000000000000LL) != 0 )
        {
          v17 = *(_DWORD *)(a2 + 12);
          if ( (v12 & 0xFFFFFF) >= v17 )
            return fprintf(__stderrp, "out of range bind ordinal %u (max %u)", v12 & 0xFFFFFF, v17);
          v13 = HIDWORD(v12) | 0xFFFFFFFFFFFC0000LL;
          if ( (v12 & 0x4000000000000LL) == 0 )
            v13 = HIDWORD(v12) & 0x7FFFF;
          v14 = *(_QWORD *)(v8 + 8 * (*v9 & 0xFFFFFF));
        }
        else
        {
          v13 = (v12 << 13) & 0xFF00000000000000LL;
          v14 = (v12 & 0x7FFFFFFFFFFLL) + v11;
        }
        result = v14 + v13;
      }
      v19 = (v12 >> 51) & 0x7FF;
      *v9 = result;
      v9 += v19;
    }
    while ( v19 );
  }
  return result;
}
