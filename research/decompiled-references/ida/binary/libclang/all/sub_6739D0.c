__int64 __fastcall sub_6739D0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // rsi

  if ( !a2 )
    return 1;
  v7 = *(_QWORD *)(a2 + 8);
  if ( v7 <= 7 || (result = sub_6739D0(a1, v7 & 0xFFFFFFFFFFFFFFF8LL), (_BYTE)result) )
  {
    if ( (unsigned int)sub_A7AE10(a2) - 3 <= 1 )
    {
      v9 = 0;
      if ( ((*(__int64 *)(a2 + 8) >> 1) & 3uLL) - 2 <= 1 )
        v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      return sub_673340(a1, v9, a3, a4, a5, a6);
    }
    else
    {
      return 1;
    }
  }
  return result;
}

