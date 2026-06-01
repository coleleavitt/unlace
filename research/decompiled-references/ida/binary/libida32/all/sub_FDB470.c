unsigned __int64 __fastcall sub_FDB470(int a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 result; // rax
  __int64 v4; // rcx

  v2 = (unsigned int)(a1 - 48);
  if ( (unsigned int)v2 > 0x3C
    || (v4 = 0x1000000000080001LL, result = 1, !_bittest64(&v4, v2))
    && (result = (unsigned int)(a1 - 51),
        LOBYTE(result) = (unsigned int)(a1 - 56) <= 3 || (unsigned int)result <= 1,
        !(_BYTE)result) )
  {
    result = 0;
    if ( *(_DWORD *)(a2 + 64) > 0x3Bu )
    {
      result = 1;
      if ( a1 != 4 && ((a1 - 102) & 0xFFFFFFFD) != 0 )
      {
        result = 0;
        if ( (unsigned int)(a1 - 39) <= 0x1E )
          return (0x40800001uLL >> ((unsigned __int8)a1 - 39)) & 1;
      }
    }
  }
  return result;
}

