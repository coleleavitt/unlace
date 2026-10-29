__m128i *__fastcall sub_1302A80(__m128i *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  char *v5; // r12
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+0h] [rbp-38h] BYREF
  __m128i v9[2]; // [rsp+10h] [rbp-28h] BYREF

  v3 = sub_13021E0(a3, a2);
  if ( v3 )
  {
    v4 = -1;
    v5 = **(char ***)(v3 + 48);
    v8[0] = v9;
    if ( v5 )
      v4 = (__int64)&v5[strlen(v5)];
    sub_12FAAE0(v8, v5, v4);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v8[0] == v9 )
    {
      a1[1] = _mm_load_si128(v9);
    }
    else
    {
      a1->m128i_i64[0] = v8[0];
      a1[1].m128i_i64[0] = v9[0].m128i_i64[0];
    }
    v6 = v8[1];
    a1[2].m128i_i8[0] = 1;
    a1->m128i_i64[1] = v6;
    return a1;
  }
  else
  {
    a1[2].m128i_i8[0] = 0;
    return a1;
  }
}
