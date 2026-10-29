__int64 __fastcall sub_A1DAB0(__int64 a1, const __m128i *a2, __int64 a3, char a4)
{
  __int64 result; // rax

  result = sub_98CA20((__m128i **)(a1 + 8), a2);
  if ( a4 )
    return sub_98D840((__int64 *)(a1 + 24), a3);
  return result;
}

