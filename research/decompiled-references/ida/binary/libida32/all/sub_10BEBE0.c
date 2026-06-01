__m128i *__fastcall sub_10BEBE0(__m128i *a1, __int64 a2)
{
  int v3; // eax
  size_t v4; // rax
  size_t v6; // rax
  char *v7; // r12
  size_t v8; // rax
  unsigned __int64 v9; // rax
  __m128i *v10; // rax
  size_t v11; // rcx
  __m128i *v12; // rax
  _OWORD *v13; // rdi
  void *v14[2]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v15[16]; // [rsp+10h] [rbp-48h] BYREF
  void *v16; // [rsp+20h] [rbp-38h] BYREF
  size_t v17; // [rsp+28h] [rbp-30h]
  _OWORD v18[2]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 == 1 )
  {
    v7 = *(char **)a2;
    v14[0] = v15;
    v8 = j__strlen("\"");
    sub_10B5070(v14, "\"", (__int64)&asc_2313F4F[v8 + 1]);
    v9 = j__strlen(v7);
    if ( v9 > 0x7FFFFFFFFFFFFFFFLL - (unsigned __int64)v14[1] )
      std::__throw_length_error("basic_string::append");
    v10 = (__m128i *)sub_9CA820(v14, v7, v9);
    v16 = v18;
    if ( (__m128i *)v10->m128i_i64[0] == &v10[1] )
    {
      v18[0] = _mm_loadu_si128(v10 + 1);
    }
    else
    {
      v16 = (void *)v10->m128i_i64[0];
      *(_QWORD *)&v18[0] = v10[1].m128i_i64[0];
    }
    v11 = v10->m128i_u64[1];
    v10[1].m128i_i8[0] = 0;
    v17 = v11;
    v10->m128i_i64[0] = (__int64)v10[1].m128i_i64;
    v10->m128i_i64[1] = 0;
    v12 = (__m128i *)sub_974FA0(&v16, v17, 0, 1u, 34);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v12->m128i_i64[0] == &v12[1] )
    {
      a1[1] = _mm_loadu_si128(v12 + 1);
    }
    else
    {
      a1->m128i_i64[0] = v12->m128i_i64[0];
      a1[1].m128i_i64[0] = v12[1].m128i_i64[0];
    }
    a1->m128i_i64[1] = v12->m128i_i64[1];
    v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
    v13 = v16;
    v12->m128i_i64[1] = 0;
    v12[1].m128i_i8[0] = 0;
    if ( v13 != v18 )
      operator delete(v13);
    if ( v14[0] == v15 )
      return a1;
    operator delete(v14[0]);
    return a1;
  }
  else
  {
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( v3 != 2 )
    {
      v4 = j__strlen("(nothing)");
      sub_10B5070(a1, "(nothing)", (__int64)&aNothing[v4]);
      return a1;
    }
    v6 = j__strlen("(input arg)");
    sub_10B5070(a1, "(input arg)", (__int64)&aInputArg[v6]);
    return a1;
  }
}

