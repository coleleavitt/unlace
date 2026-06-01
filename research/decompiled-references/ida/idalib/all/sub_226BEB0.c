void __fastcall sub_226BEB0(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rdx
  void *v3; // rdx
  __m128i *v4; // rdx
  void *v5; // rdx
  __int8 v6; // al
  __m128i *v7; // rdi
  void *vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  __m128i vars10; // [rsp+10h] [rbp+10h] BYREF
  void *vars20[2]; // [rsp+20h] [rbp+20h] BYREF
  __m128i vars30; // [rsp+30h] [rbp+30h] BYREF
  __int8 vars40; // [rsp+40h] [rbp+40h]

  v2 = (__m128i *)a1->m128i_i64[0];
  vars0[0] = &vars10;
  if ( v2 == &a1[1] )
  {
    vars10 = _mm_loadu_si128(a1 + 1);
  }
  else
  {
    vars0[0] = v2;
    vars10.m128i_i64[0] = a1[1].m128i_i64[0];
  }
  v3 = (void *)a1->m128i_i64[1];
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  vars20[0] = &vars30;
  vars0[1] = v3;
  v4 = (__m128i *)a1[2].m128i_i64[0];
  a1->m128i_i64[1] = 0;
  a1[1].m128i_i8[0] = 0;
  if ( v4 == &a1[3] )
  {
    vars30 = _mm_loadu_si128(a1 + 3);
  }
  else
  {
    vars20[0] = v4;
    vars30.m128i_i64[0] = a1[3].m128i_i64[0];
  }
  v5 = (void *)a1[2].m128i_i64[1];
  a1[2].m128i_i64[0] = (__int64)a1[3].m128i_i64;
  a1[3].m128i_i8[0] = 0;
  v6 = a1[4].m128i_i8[0];
  a1[2].m128i_i64[1] = 0;
  vars20[1] = v5;
  vars40 = v6;
  sub_A0AAD0((__int64)a1, (_QWORD *)a2);
  sub_A0AAD0((__int64)a1[2].m128i_i64, (_QWORD *)(a2 + 32));
  a1[4].m128i_i8[0] = *(_BYTE *)(a2 + 64);
  sub_A0AAD0(a2, vars0);
  sub_A0AAD0(a2 + 32, vars20);
  v7 = (__m128i *)vars20[0];
  *(_BYTE *)(a2 + 64) = vars40;
  if ( v7 != &vars30 )
    operator delete(v7);
  if ( vars0[0] != vars0 )
    operator delete(vars0[0]);
}
