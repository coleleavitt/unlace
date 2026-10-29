_BYTE *__fastcall sub_222E840(__int64 a1, __int64 a2, char a3, char a4)
{
  _BYTE *result; // rax
  __m128i v7; // xmm0
  __m128i si128; // xmm1
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  __m128i v10[2]; // [rsp+10h] [rbp-28h] BYREF

  sub_2230760(&v9, a2);
  result = (_BYTE *)v9.m128i_i64[0];
  if ( v9.m128i_i64[1] )
  {
    v7 = _mm_load_si128(&v9);
    si128 = _mm_load_si128(v10);
    *(_BYTE *)(a1 + 32) = 1;
    *(_BYTE *)(a1 + 40) = a4;
    *(__m128i *)a1 = v7;
    *(__m128i *)(a1 + 16) = si128;
    *(_BYTE *)(a1 + 41) = a3;
    *(_DWORD *)(a1 + 44) = 1;
    *(_QWORD *)(a1 + 48) = result;
    *(_QWORD *)(a1 + 56) = 0;
    if ( a3 || *result != 10 && (*result != 13 || result[1] != 10) )
      return (_BYTE *)sub_222E680(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 40) = a4;
    *(_BYTE *)(a1 + 41) = a3;
    *(_DWORD *)(a1 + 44) = 1;
    *(_QWORD *)(a1 + 48) = 0;
    *(_QWORD *)(a1 + 56) = 0;
  }
  return result;
}
