unsigned __int64 __fastcall sub_EEEBE0(_QWORD *a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __m128i v10; // xmm0
  __m128i v12; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+18h] [rbp-30h]

  v8 = a1[294];
  a1[304] += 32LL;
  v12.m128i_i64[0] = a5;
  v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v9 + 32 && v8 )
    a1[294] = v9 + 32;
  else
    v9 = sub_986170((__int64)(a1 + 294), 32, 32, 3, a5, a6);
  v13 = a4;
  v12 = (__m128i)_mm_loadh_ps((const double *)v12.m128i_i64);
  sub_EE9650((_WORD *)v9, 135);
  v10 = _mm_load_si128(&v12);
  *(_DWORD *)(v9 + 12) = a3;
  *(_BYTE *)(v9 + 8) = a2;
  *(__m128i *)(v9 + 16) = v10;
  return v9;
}
