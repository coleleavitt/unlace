__m128i *__fastcall sub_2290A40(__m128i *a1, _BYTE *a2, __int64 a3)
{
  const char *v4; // rdi
  char *v5; // rax
  char *v6; // r12
  size_t v7; // rax
  __int64 v8; // rax
  char *name[2]; // [rsp+0h] [rbp-68h] BYREF
  _BYTE v11[16]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __m128i v13[3]; // [rsp+30h] [rbp-38h] BYREF

  if ( a2 )
  {
    name[0] = v11;
    sub_2290710(name, a2, (__int64)&a2[a3]);
    v4 = name[0];
  }
  else
  {
    v4 = v11;
    v11[0] = 0;
    name[0] = v11;
    name[1] = nullptr;
  }
  v5 = getenv(v4);
  v6 = v5;
  if ( v5 )
  {
    v12[0] = v13;
    v7 = strlen(v5);
    sub_2290710(v12, v6, (__int64)&v6[v7]);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v12[0] == v13 )
    {
      a1[1] = _mm_load_si128(v13);
    }
    else
    {
      a1->m128i_i64[0] = v12[0];
      a1[1].m128i_i64[0] = v13[0].m128i_i64[0];
    }
    v8 = v12[1];
    a1[2].m128i_i8[0] = 1;
    a1->m128i_i64[1] = v8;
  }
  else
  {
    a1[2].m128i_i8[0] = 0;
  }
  if ( name[0] != v11 )
    operator delete(name[0]);
  return a1;
}
