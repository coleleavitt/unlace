__int64 __fastcall sub_19CF90(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 result; // rax

  if ( dbg )
  {
    result = 5;
    if ( *(_DWORD *)(a1 + 64) == 4 )
    {
      if ( !*(_QWORD *)(dbg + 72LL) || !*(_BYTE *)(dbg + 80LL) )
        return result;
    }
    else if ( (*(_BYTE *)(dbg + 37LL) & 2) == 0 )
    {
      return result;
    }
  }
  if ( *(_DWORD *)(a1 + 44) || sub_19A750(*(_DWORD *)(a1 + 64), *(_QWORD *)(a1 + 56), *(_DWORD *)(a1 + 80)) )
    return 2
         * ((unsigned __int8)sub_19CE20(
                               a1,
                               (const char *)xmmword_8CC810,
                               (__int64)"breakpoint",
                               a2,
                               a3,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9)
          ^ 1u);
  else
    return 1;
}
