__int64 __fastcall sub_155BFA0(__m128i *a1, int a2, __int32 *a3, __int64 *a4, __m128i a5, __m128 a6)
{
  __int64 v9; // rax
  __int8 v10; // r12
  __int64 v11; // rbp
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rdi
  __int64 v16; // r13

  v9 = sub_18957D0(*(_QWORD *)(a1[6].m128i_i64[0] + 736));
  v10 = a1[129].m128i_i8[1];
  v11 = v9;
  a1[129].m128i_i8[1] = v9 != 0;
  if ( v9 )
    sub_1A865F0(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v9);
  if ( a1[2].m128i_i16[0] != 146
    || ((v12 = a1->m128i_i64[1], v13 = *(_QWORD *)(v12 + 2944), v13 >= *(unsigned int *)(v12 + 2912))
      ? (v14 = sub_14180A0(v12, 1u))
      : (v14 = *(_QWORD *)(v12 + 2904) + 24 * v13),
        *(_WORD *)(v14 + 16) == 47) )
  {
    v16 = sub_155B830((__int64)a1, a2, a3, a4, 3u, a5, a6);
  }
  else
  {
    v15 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v15, a1[1].m128i_i32);
    v16 = sub_154F090(a1, a2, 0, a1[2].m128i_i32[2], a3, a4, a5, a6, 3u);
  }
  if ( v11 )
    sub_1A86610(*(_QWORD *)(a1[6].m128i_i64[0] + 736), v11);
  a1[129].m128i_i8[1] = v10;
  return v16;
}
