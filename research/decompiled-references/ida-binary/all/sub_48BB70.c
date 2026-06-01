_QWORD *__fastcall sub_48BB70(_QWORD *a1, __int64 a2, __int64 a3, double a4, __m128 a5)
{
  const char *v5; // rax
  bool v6; // zf
  __int64 *v7; // rcx
  __int64 v9; // rsi
  __m128 v10; // xmm0
  __m128i v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v5 = &s1;
  v6 = *(_QWORD *)(a3 + 8) == 0;
  v7 = *(__int64 **)(a2 + 208);
  v13 = __readfsqword(0x28u);
  *a1 = -1;
  a1[1] = 0;
  a1[2] = 0;
  if ( !v6 )
    v5 = *(const char **)a3;
  v9 = *v7;
  v12 = (__m128i)-1LL;
  dirtree_make_cursor(&v12, v9, v5);
  v10 = (__m128)_mm_load_si128(&v12);
  if ( v10.m128_u64[0] != -1 || !_mm_movehl_ps(a5, v10).m128_u64[0] )
    sub_48B610((__int64)a1, a2, v12.m128i_i64);
  return a1;
}
