__int64 __fastcall sub_2206780(__int64 *a1)
{
  __int64 v1; // r8
  unsigned int v2; // eax
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 result; // rax
  int v9; // r8d

  v1 = *((unsigned int *)a1 + 2);
  v2 = ((unsigned __int64)(v1 + 63) >> 6) - 1;
  if ( (unsigned int)((unsigned __int64)(v1 + 63) >> 6) )
  {
    v3 = *a1;
    v4 = 8LL * (int)v2;
    v5 = *(_QWORD *)(v3 + v4);
    if ( v5 )
    {
      LODWORD(result) = 0;
LABEL_10:
      _BitScanReverse64(&v5, v5);
      result = ((unsigned int)v5 ^ 0x3F) + (unsigned int)result;
    }
    else
    {
      v6 = v3 + v4 - 8;
      v7 = v6 - 8LL * v2;
      LODWORD(result) = 0;
      while ( 1 )
      {
        result = (unsigned int)(result + 64);
        if ( v6 == v7 )
          break;
        v6 -= 8;
        v5 = *(_QWORD *)(v6 + 8);
        if ( v5 )
          goto LABEL_10;
      }
    }
  }
  else
  {
    result = 0;
  }
  v9 = v1 & 0x3F;
  if ( v9 )
    return (unsigned int)(v9 + result - 64);
  return result;
}
