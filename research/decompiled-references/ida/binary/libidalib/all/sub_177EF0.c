unsigned __int64 __fastcall sub_177EF0(__int64 *a1, const char *a2, const char *a3)
{
  const char *v3; // r13
  char *v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdi
  const char *i; // rbp
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rbp
  __int64 v16; // r14
  __m128i v17; // xmm1
  char *v18; // rax
  char *v19; // rbx
  signed __int64 v20; // r14
  void *v21; // rdi
  void *v22; // rdi
  __int64 v23; // rax
  size_t v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rbp
  __m128i v29; // xmm1
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-68h] BYREF
  __int64 v33; // [rsp+10h] [rbp-58h]
  __m128i v34; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v35 = __readfsqword(0x28u);
  if ( !a3 )
    v3 = &a2[strlen(a2)];
  v33 = 0;
  v5 = strchr(a2, 124);
  v34 = 0;
  if ( v5 )
  {
    v6 = 0;
    v7 = 0;
    v8 = v5 - a2;
    if ( v5 != a2 )
    {
      v22 = nullptr;
      if ( v8 != -1 )
      {
        v33 = qvector_reserve();
        v22 = (void *)v33;
      }
      v34.m128i_i64[0] = v8 + 1;
      memmove(v22, a2, v5 - a2);
      *(_BYTE *)(v33 + v8) = 0;
      v7 = v33;
      v6 = v34.m128i_i64[1];
      v8 = v34.m128i_i64[0];
    }
    v9 = *a1;
    v33 = 0;
    v34 = 0;
    if ( v9 )
    {
      a1[1] = 0;
      v32.m128i_i64[0] = v7;
      qfree();
      v10 = v32.m128i_i64[0];
      v11 = v33;
      a1[1] = v8;
      a1[2] = v6;
      *a1 = v10;
      if ( v11 )
      {
        v34.m128i_i64[0] = 0;
        qfree();
      }
    }
    else
    {
      *a1 = v7;
      a1[1] = v8;
      a1[2] = v6;
    }
    for ( i = v5 + 1; i < v3; i = &v19[*v19 == 59] )
    {
      v18 = strchr(i, 59);
      v19 = v18;
      if ( !v18 || v3 < v18 )
        v19 = (char *)v3;
      v33 = 0;
      v34 = 0;
      v20 = v19 - i;
      if ( v19 != i )
      {
        v21 = nullptr;
        if ( v20 != -1 )
        {
          v33 = qvector_reserve();
          v21 = (void *)v33;
        }
        v34.m128i_i64[0] = v20 + 1;
        memmove(v21, i, v19 - i);
        *(_BYTE *)(v33 + v20) = 0;
      }
      v13 = a1[4];
      v14 = a1[3];
      if ( a1[5] < (unsigned __int64)(v13 + 1) )
      {
        v23 = qvector_reserve();
        a1[3] = v23;
        v13 = a1[4];
        v14 = v23;
      }
      v15 = v14 + 24 * v13;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = 0;
      v16 = v33;
      v17 = _mm_loadu_si128(&v34);
      ++a1[4];
      v33 = 0;
      v34 = 0;
      if ( *(_QWORD *)v15 )
      {
        *(_QWORD *)(v15 + 8) = 0;
        v32 = v17;
        qfree();
        v17 = _mm_load_si128(&v32);
      }
      *(_QWORD *)v15 = v16;
      *(__m128i *)(v15 + 8) = v17;
      if ( v33 )
      {
        v34.m128i_i64[0] = 0;
        qfree();
      }
    }
  }
  else
  {
    v24 = v3 - a2;
    if ( v24 )
    {
      if ( v24 != -1 )
      {
        v33 = qvector_reserve();
        v5 = (char *)v33;
      }
      v34.m128i_i64[0] = v24 + 1;
      memmove(v5, a2, v24);
      *(_BYTE *)(v33 + v24) = 0;
    }
    v25 = a1[4];
    v26 = a1[3];
    if ( a1[5] < (unsigned __int64)(v25 + 1) )
    {
      v31 = qvector_reserve();
      a1[3] = v31;
      v25 = a1[4];
      v26 = v31;
    }
    v27 = v26 + 24 * v25;
    *(_QWORD *)v27 = 0;
    *(_OWORD *)(v27 + 8) = 0;
    v28 = v33;
    v29 = _mm_loadu_si128(&v34);
    ++a1[4];
    v33 = 0;
    v34 = 0;
    if ( *(_QWORD *)v27 )
    {
      *(_QWORD *)(v27 + 8) = 0;
      v32 = v29;
      qfree();
      v29 = _mm_load_si128(&v32);
    }
    *(_QWORD *)v27 = v28;
    *(__m128i *)(v27 + 8) = v29;
    if ( v33 )
    {
      v34.m128i_i64[0] = 0;
      qfree();
    }
  }
  return v35 - __readfsqword(0x28u);
}

