unsigned __int64 __fastcall sub_44DC90(__m128i *a1, _QWORD *a2)
{
  size_t v3; // rax
  __int64 v4; // r14
  size_t v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r12
  __m128i v8; // xmm1
  double v9; // xmm0_8
  __m128i v10; // xmm1
  void *v11; // rdi
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r12
  const void *v15; // rbp
  void *v16; // rax
  const void *v17; // r15
  void *v18; // rax
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  void *v20; // [rsp+10h] [rbp-78h] BYREF
  __m128i v21; // [rsp+18h] [rbp-70h] BYREF
  char s[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  qstrftime64(s, 20, "%F %T", a2[9]);
  v20 = nullptr;
  v21 = 0;
  v3 = strlen(s);
  v4 = v3 + 1;
  v5 = v3;
  v20 = (void *)qvector_reserve(&v20, 0, v3 + 1, 1);
  v21.m128i_i64[0] = v4;
  memmove(v20, s, v5);
  *((_BYTE *)v20 + v5) = 0;
  v6 = a1->m128i_i64[1];
  v7 = (__int64)v20;
  v8 = _mm_loadu_si128(&v21);
  v21 = 0;
  v20 = nullptr;
  if ( v6 )
  {
    a1[1].m128i_i64[0] = 0;
    v19 = v8;
    v9 = qfree(v6, s);
    v10 = _mm_load_si128(&v19);
    v11 = v20;
    a1->m128i_i64[1] = v7;
    a1[1] = v10;
    if ( v11 )
    {
      v21.m128i_i64[0] = 0;
      qfree(v11, s, v9);
    }
  }
  else
  {
    a1->m128i_i64[1] = v7;
    a1[1] = v8;
  }
  if ( a2 + 6 != &a1[2].m128i_u64[1] )
  {
    v12 = a2[7];
    if ( v12 > 1 )
    {
      v17 = (const void *)a2[6];
      v18 = (void *)a1[2].m128i_i64[1];
      if ( a1[3].m128i_i64[1] < v12 )
      {
        v18 = (void *)qvector_reserve(&a1[2].m128i_u64[1], a1[2].m128i_i64[1], a2[7], 1);
        a1[2].m128i_i64[1] = (__int64)v18;
      }
      a1[3].m128i_i64[0] = v12;
      memmove(v18, v17, v12 - 1);
      *(_BYTE *)(a1[2].m128i_i64[1] + v12 - 1) = 0;
    }
    else
    {
      a1[3].m128i_i64[0] = 0;
    }
  }
  if ( a2 + 6 != &a1[4].m128i_u64[1] )
  {
    v13 = a2[7];
    if ( v13 > 1 )
    {
      v15 = (const void *)a2[6];
      v16 = (void *)a1[4].m128i_i64[1];
      if ( a1[5].m128i_i64[1] < v13 )
      {
        v16 = (void *)qvector_reserve(&a1[4].m128i_u64[1], a1[4].m128i_i64[1], v13, 1);
        a1[4].m128i_i64[1] = (__int64)v16;
      }
      a1[5].m128i_i64[0] = v13;
      memmove(v16, v15, v13 - 1);
      *(_BYTE *)(a1[4].m128i_i64[1] + v13 - 1) = 0;
    }
    else
    {
      a1[5].m128i_i64[0] = 0;
    }
  }
  return v23 - __readfsqword(0x28u);
}
