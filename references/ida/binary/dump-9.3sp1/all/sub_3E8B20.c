__int64 __fastcall sub_3E8B20(__m128i *a1, __m128i *a2, int a3, __int32 a4, __m128 a5)
{
  __m128i *v6; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __m128i *v10; // rax
  __int64 v11; // rcx
  __m128i *v12; // rbp

  v6 = a2;
  sub_3E65E0(a1);
  if ( a1[67].m128i_i16[2] != 40 )
    goto LABEL_8;
  sub_3E65E0(a1);
  v10 = (__m128i *)sub_3E66C0((__int64)a1, (unsigned int)a3, v8, v9);
  a2->m128i_i8[0] = 4;
  a2->m128i_i64[1] = (__int64)v10;
  v12 = v10;
  if ( a3 > 62 )
    v10->m128i_i32[1] |= 0x10u;
  a2 = v10 + 2;
  sub_3E7E50(a1, v10 + 2, 1, v11, a5);
  if ( !a4 )
    a4 = v12[2].m128i_i32[1];
  v12[4].m128i_i32[1] = a4;
  v6->m128i_i32[1] = a4;
  if ( a1[67].m128i_i16[2] != 41 )
LABEL_8:
    sub_5C092(a1, a2, *(double *)a5.m128_u64);
  return sub_3E65E0(a1);
}
