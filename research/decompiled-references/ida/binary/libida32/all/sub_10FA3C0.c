__m128i *__fastcall sub_10FA3C0(__m128i *a1)
{
  __m128i v2; // xmm0
  __int64 v3; // rdi
  __m128i v4; // xmm1
  __int64 v6; // r12
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars10; // [rsp+10h] [rbp+10h] BYREF
  __int16 vars20; // [rsp+20h] [rbp+20h]
  char vars28; // [rsp+28h] [rbp+28h]

  sub_21374B0(&vars0, a1);
  if ( (vars28 & 1) == 0 )
  {
    v2 = _mm_load_si128(&vars0);
    v3 = a1->m128i_i64[1];
    vars0.m128i_i64[1] = 0;
    *a1 = v2;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    v4 = _mm_load_si128(&vars10);
    a1[2].m128i_i16[0] = vars20;
    a1[1] = v4;
    sub_10FA2A0(vars0.m128i_i64);
    goto LABEL_5;
  }
  v6 = vars0.m128i_i64[0];
  vars0.m128i_i64[0] = 0;
  sub_10FA2A0(vars0.m128i_i64);
  if ( !v6 )
  {
LABEL_5:
    *(_QWORD *)(a1[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL) = 0;
    return a1;
  }
  *(_QWORD *)(a1[2].m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL) = v6;
  a1[2].m128i_i64[1] = a1[2].m128i_i64[1] & 3 | 4;
  return a1;
}

