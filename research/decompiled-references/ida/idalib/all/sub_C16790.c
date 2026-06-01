__int64 __fastcall sub_C16790(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  char v4; // cl
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax
  int v7; // ecx
  unsigned __int64 v8; // rax

  result = *(unsigned int *)(a1 + 8);
  v2 = *(_QWORD *)a1;
  v3 = 1LL << ((unsigned __int8)result - 1);
  if ( (unsigned int)result <= 0x40 )
  {
    if ( (v3 & v2) != 0 )
    {
      if ( (_DWORD)result )
      {
        v4 = 64 - result;
        result = 64;
        v5 = ~(v2 << v4);
        if ( v5 )
        {
          _BitScanReverse64(&v6, v5);
          return (unsigned int)v6 ^ 0x3F;
        }
      }
    }
    else
    {
      v7 = result - 64;
      if ( v2 )
      {
        _BitScanReverse64(&v8, v2);
        return v7 + ((unsigned int)v8 ^ 0x3F);
      }
    }
  }
  else if ( (v3 & *(_QWORD *)(v2 + 8LL * ((unsigned int)(result - 1) >> 6))) != 0 )
  {
    return sub_2206800(a1);
  }
  else
  {
    return sub_2206780(a1);
  }
  return result;
}
