void __fastcall sub_1409690(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r12
  __m128i *v4; // rbx
  __m128i vars0; // [rsp+0h] [rbp+0h] BYREF
  char vars10; // [rsp+10h] [rbp+10h] BYREF
  void *vars60; // [rsp+60h] [rbp+60h] BYREF
  unsigned __int64 vars68; // [rsp+68h] [rbp+68h]
  __m128i vars70[3]; // [rsp+70h] [rbp+70h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  vars0.m128i_i64[1] = 0x200000000LL;
  vars70[0].m128i_i8[0] = 0;
  vars0.m128i_i64[0] = (__int64)&vars10;
  vars60 = vars70;
  vars68 = 0;
  sub_13FA600((__int64)&vars0, a2 + 8);
  sub_99BDC0(&vars60, 0, vars68, *(_BYTE **)(a2 + 104), *(_QWORD *)(a2 + 112));
  v3 = *(_QWORD *)(v2 + 48);
  v4 = *(__m128i **)(v3 + 1736);
  if ( v4 == *(__m128i **)(v3 + 1744) )
  {
    sub_1407BE0(v3 + 1728, *(char **)(v3 + 1736), &vars0);
    if ( vars60 != vars70 )
      operator delete(vars60);
  }
  else
  {
    v4->m128i_i64[1] = 0x200000000LL;
    v4->m128i_i64[0] = (__int64)v4[1].m128i_i64;
    if ( vars0.m128i_i32[2] )
      sub_14078B0((__int64)v4, (__int64)&vars0);
    v4[6].m128i_i64[0] = (__int64)v4[7].m128i_i64;
    if ( vars60 == vars70 )
    {
      v4[7] = _mm_load_si128(vars70);
    }
    else
    {
      v4[6].m128i_i64[0] = (__int64)vars60;
      v4[7].m128i_i64[0] = vars70[0].m128i_i64[0];
    }
    v4[6].m128i_i64[1] = vars68;
    *(_QWORD *)(v3 + 1736) += 128LL;
  }
  sub_13F4560((__int64)&vars0);
}
