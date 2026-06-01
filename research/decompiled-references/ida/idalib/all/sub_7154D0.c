__int64 __fastcall sub_7154D0(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 *v10; // rbx
  __int64 v11; // r12
  __int64 result; // rax
  __int64 v13; // rsi

  if ( !a2 )
    return 1;
  v10 = (__int64 *)(a2 + 24);
  v11 = a2 + (unsigned int)(8 * *(_DWORD *)(a2 + 20)) + 24;
  if ( 8 * *(_DWORD *)(a2 + 20) )
  {
    while ( 1 )
    {
      if ( *v10 )
      {
        result = sub_709840(a1, *v10, a3, a4, a5, a6, a7, a8, a9, a10);
        if ( !(_BYTE)result )
          break;
      }
      if ( (__int64 *)v11 == ++v10 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    if ( (*(_BYTE *)(a2 + 23) & 0x40) != 0
      && (v13 = *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24)) != 0 )
    {
      return sub_70DBE0(a1, v13, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    else
    {
      return 1;
    }
  }
  return result;
}
