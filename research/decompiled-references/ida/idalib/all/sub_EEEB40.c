unsigned __int64 __fastcall sub_EEEB40(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __m128i v9; // xmm0
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+18h] [rbp-20h]

  v7 = a1[294];
  a1[304] += 32LL;
  v11.m128i_i64[0] = a4;
  v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v8 + 32 && v7 )
    a1[294] = v8 + 32;
  else
    v8 = sub_986170((__int64)(a1 + 294), 32, 32, 3, a5, a6);
  v12 = a3;
  v11 = (__m128i)_mm_loadh_ps((const double *)v11.m128i_i64);
  sub_EE9650((_WORD *)v8, 138);
  v9 = _mm_load_si128(&v11);
  *(_DWORD *)(v8 + 8) = a2;
  *(__m128i *)(v8 + 16) = v9;
  return v8;
}
