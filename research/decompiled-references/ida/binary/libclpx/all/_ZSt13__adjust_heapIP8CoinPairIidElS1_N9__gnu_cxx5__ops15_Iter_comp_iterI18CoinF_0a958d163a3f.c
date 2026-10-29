__int64 __fastcall std::__adjust_heap<CoinPair<int,double> *,long,CoinPair<int,double>,__gnu_cxx::__ops::_Iter_comp_iter<CoinFirstGreater_2<int,double>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int32 a4,
        double a5)
{
  __int64 result; // rax
  __int64 v6; // r11
  __int64 i; // r10
  __int64 v8; // r8
  __int64 v9; // r9
  const __m128i *j; // r10
  __int64 v11; // rdx

  result = a3 - 1;
  v6 = (a3 - 1) / 2;
  if ( a2 >= v6 )
  {
    if ( (a3 & 1) != 0 )
    {
      v8 = a1 + 16 * a2;
      goto LABEL_13;
    }
    result = a2;
  }
  else
  {
    for ( i = a2; ; i = result )
    {
      result = 2 * (i + 1);
      v8 = a1 + 32 * (i + 1);
      if ( *(_DWORD *)(v8 - 16) < *(_DWORD *)v8 )
      {
        --result;
        v8 = a1 + 16 * result;
      }
      *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128((const __m128i *)v8);
      if ( v6 <= result )
        break;
    }
    if ( (a3 & 1) != 0 )
      goto LABEL_8;
  }
  if ( (a3 - 2) / 2 == result )
  {
    *(__m128i *)(a1 + 16 * result) = _mm_loadu_si128((const __m128i *)(a1 + 32 * (result + 1) - 16));
    result = 2 * (result + 1) - 1;
  }
  v8 = a1 + 16 * result;
LABEL_8:
  v9 = (result - 1) / 2;
  if ( result > a2 )
  {
    for ( j = (const __m128i *)(a1 + 16 * v9); j->m128i_i32[0] > a4; j = (const __m128i *)(a1 + 16 * v11) )
    {
      *(__m128i *)(a1 + 16 * result) = _mm_loadu_si128(j);
      result = v9 - 1;
      v8 = a1 + 16 * v9;
      v11 = (v9 - 1) / 2;
      if ( a2 >= v9 )
        break;
      result = v9;
      v9 = (v9 - 1) / 2;
    }
  }
LABEL_13:
  *(_DWORD *)v8 = a4;
  *(double *)(v8 + 8) = a5;
  return result;
}

