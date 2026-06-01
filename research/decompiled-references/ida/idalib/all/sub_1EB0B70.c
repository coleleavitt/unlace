__int64 __fastcall sub_1EB0B70(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rax
  __m128i si128; // xmm0
  __m128i v6[2]; // [rsp+0h] [rbp-28h] BYREF

  result = *a1;
  v3 = *a1 & 0xFFFFFFFFFFFFFFFCLL;
  if ( v3 )
  {
    if ( (result & 2) != 0 )
    {
      result = *(unsigned int *)(v3 + 8);
      if ( result + 1 > (unsigned __int64)*(unsigned int *)(v3 + 12) )
      {
        sub_2237220(*a1 & 0xFFFFFFFFFFFFFFFCLL, v3 + 16, result + 1, 8);
        result = *(unsigned int *)(v3 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v3 + 8 * result) = a2;
      ++*(_DWORD *)(v3 + 8);
    }
    else
    {
      v6[0].m128i_i64[0] = a2;
      v6[0] = (__m128i)_mm_loadh_ps((const double *)v6[0].m128i_i64);
      v4 = operator new(0x30u);
      si128 = _mm_load_si128(v6);
      *(_QWORD *)(v4 + 8) = 0x400000002LL;
      *(_QWORD *)v4 = v4 + 16;
      *(__m128i *)(v4 + 16) = si128;
      result = v4 | 2;
      *a1 = result;
    }
  }
  else
  {
    *a1 = a2 & 0xFFFFFFFFFFFFFFFDLL;
  }
  return result;
}
