__m128i *__fastcall sub_1069150(__m128i *a1, __int64 a2)
{
  __m128i *v3; // r12
  _BYTE *v4; // rax
  __int64 v5; // rdx
  __m128i *v6; // rax
  __int64 v7; // rax
  __m128i si128; // xmm0
  _QWORD v9[2]; // [rsp+10h] [rbp-38h] BYREF
  __m128i v10[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_DWORD *)(a2 + 248) == 26 )
  {
    v3 = a1 + 1;
    if ( *(_DWORD *)(a2 + 512) )
    {
      v4 = (_BYTE *)sub_22B0B00();
      sub_102A6F0((__int64)v9, v4, v5, a2 + 528);
      v6 = (__m128i *)v9[0];
      a1->m128i_i64[0] = (__int64)v3;
      if ( v6 == v10 )
      {
        a1[1] = _mm_load_si128(v10);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)v6;
        a1[1].m128i_i64[0] = v10[0].m128i_i64[0];
      }
      v7 = v9[1];
      a1[2].m128i_i8[0] = 1;
      a1->m128i_i64[1] = v7;
      return a1;
    }
    else
    {
      v10[0].m128i_i8[0] = 0;
      si128 = _mm_load_si128(v10);
      a1->m128i_i64[0] = (__int64)v3;
      a1[1] = si128;
      a1->m128i_i64[1] = 0;
      a1[2].m128i_i8[0] = 1;
      return a1;
    }
  }
  else
  {
    a1[2].m128i_i8[0] = 0;
    return a1;
  }
}
