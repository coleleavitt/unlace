__int64 __fastcall dyld4::fixupPage64(__int64 result, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v5; // x9
  __int64 v6; // x8
  unsigned __int64 *v7; // x9
  __int64 v8; // x10
  __int64 v9; // x10
  unsigned __int64 v10; // x11
  unsigned __int64 v11; // x12
  unsigned int v12; // w13
  __int64 v13; // x11

  v5 = *(unsigned __int16 *)(a3 + 2LL * a4 + 22);
  if ( v5 != 0xFFFF )
  {
    v6 = a2 + *(unsigned int *)(a2 + 8);
    v7 = (unsigned __int64 *)(result + v5);
    v8 = 24;
    if ( a5 )
      v8 = 32;
    v9 = *(_QWORD *)(a2 + v8);
    do
    {
      v10 = *v7;
      if ( (*v7 & 0x8000000000000000LL) != 0 )
      {
        v12 = *(_DWORD *)(a2 + 12);
        if ( (v10 & 0xFFFFFF) >= v12 )
          return fprintf(__stderrp, "out of range bind ordinal %u (max %u)", v10 & 0xFFFFFF, v12);
        v11 = *(_QWORD *)(v6 + 8 * (*v7 & 0xFFFFFF)) + BYTE3(*v7);
      }
      else
      {
        v11 = (v10 & 0xFFFFFFFFFLL) + v9 + ((v10 << 20) & 0xFF00000000000000LL);
      }
      v13 = (v10 >> 51) & 0xFFF;
      *v7 = v11;
      v7 = (unsigned __int64 *)((char *)v7 + 4 * v13);
    }
    while ( v13 );
  }
  return result;
}
