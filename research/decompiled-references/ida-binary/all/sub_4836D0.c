unsigned __int64 __fastcall sub_4836D0(__int64 *a1, const char *a2, const char *a3)
{
  const char *v3; // r13
  const char *v6; // rsi
  char *v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdi
  double v12; // xmm0_8
  __int64 v13; // rax
  __int64 v14; // rdi
  const char *i; // rbp
  __int64 v16; // rdx
  const char *v17; // rsi
  char *v18; // rbp
  __int64 v19; // r14
  __m128i v20; // xmm1
  __int64 v21; // rdi
  char *v22; // rax
  char *v23; // rbx
  signed __int64 v24; // r14
  void *v25; // rdi
  void *v26; // rdi
  __int64 v27; // rax
  size_t v28; // r13
  __int64 v29; // rdx
  const char *v30; // rsi
  char *v31; // rbx
  __int64 v32; // rbp
  __m128i v33; // xmm1
  __int64 v34; // rdi
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+10h] [rbp-58h] BYREF
  __m128i v39; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v40; // [rsp+28h] [rbp-40h]

  v3 = a3;
  v40 = __readfsqword(0x28u);
  if ( !a3 )
    v3 = &a2[strlen(a2)];
  v6 = (const char *)&dword_7C;
  v38 = 0;
  v7 = strchr(a2, 124);
  v39 = 0;
  if ( v7 )
  {
    v8 = 0;
    v9 = 0;
    v10 = v7 - a2;
    if ( v7 != a2 )
    {
      v26 = nullptr;
      if ( v10 != -1 )
      {
        v38 = qvector_reserve(&v38, 0, v10 + 1, 1);
        v26 = (void *)v38;
      }
      v6 = a2;
      v39.m128i_i64[0] = v10 + 1;
      memmove(v26, a2, v7 - a2);
      *(_BYTE *)(v38 + v10) = 0;
      v9 = v38;
      v8 = v39.m128i_i64[1];
      v10 = v39.m128i_i64[0];
    }
    v11 = *a1;
    v38 = 0;
    v39 = 0;
    if ( v11 )
    {
      a1[1] = 0;
      v37.m128i_i64[0] = v9;
      v12 = qfree(v11, v6);
      v13 = v37.m128i_i64[0];
      v14 = v38;
      a1[1] = v10;
      a1[2] = v8;
      *a1 = v13;
      if ( v14 )
      {
        v39.m128i_i64[0] = 0;
        qfree(v14, v6, v12);
      }
    }
    else
    {
      *a1 = v9;
      a1[1] = v10;
      a1[2] = v8;
    }
    for ( i = v7 + 1; i < v3; i = &v23[*v23 == 59] )
    {
      v22 = strchr(i, 59);
      v23 = v22;
      if ( !v22 || v3 < v22 )
        v23 = (char *)v3;
      v38 = 0;
      v39 = 0;
      v24 = v23 - i;
      if ( v23 != i )
      {
        v25 = nullptr;
        if ( v24 != -1 )
        {
          v38 = qvector_reserve(&v38, 0, v24 + 1, 1);
          v25 = (void *)v38;
        }
        v39.m128i_i64[0] = v24 + 1;
        memmove(v25, i, v23 - i);
        *(_BYTE *)(v38 + v24) = 0;
      }
      v16 = a1[4];
      v17 = (const char *)a1[3];
      if ( a1[5] < (unsigned __int64)(v16 + 1) )
      {
        v27 = qvector_reserve(a1 + 3, v17, v16 + 1, 24);
        a1[3] = v27;
        v16 = a1[4];
        v17 = (const char *)v27;
      }
      v18 = (char *)&v17[24 * v16];
      *(_QWORD *)v18 = 0;
      *(_OWORD *)(v18 + 8) = 0;
      v19 = v38;
      v20 = _mm_loadu_si128(&v39);
      ++a1[4];
      v38 = 0;
      v39 = 0;
      v21 = *(_QWORD *)v18;
      if ( *(_QWORD *)v18 )
      {
        *((_QWORD *)v18 + 1) = 0;
        v37 = v20;
        qfree(v21, v17);
        v20 = _mm_load_si128(&v37);
      }
      *(_QWORD *)v18 = v19;
      *(__m128i *)(v18 + 8) = v20;
      if ( v38 )
      {
        v39.m128i_i64[0] = 0;
        qfree(v38, v17);
      }
    }
  }
  else
  {
    v28 = v3 - a2;
    if ( v28 )
    {
      if ( v28 != -1 )
      {
        v38 = qvector_reserve(&v38, 0, v28 + 1, 1);
        v7 = (char *)v38;
      }
      v39.m128i_i64[0] = v28 + 1;
      memmove(v7, a2, v28);
      *(_BYTE *)(v38 + v28) = 0;
    }
    v29 = a1[4];
    v30 = (const char *)a1[3];
    if ( a1[5] < (unsigned __int64)(v29 + 1) )
    {
      v36 = qvector_reserve(a1 + 3, v30, v29 + 1, 24);
      a1[3] = v36;
      v29 = a1[4];
      v30 = (const char *)v36;
    }
    v31 = (char *)&v30[24 * v29];
    *(_QWORD *)v31 = 0;
    *(_OWORD *)(v31 + 8) = 0;
    v32 = v38;
    v33 = _mm_loadu_si128(&v39);
    ++a1[4];
    v38 = 0;
    v39 = 0;
    v34 = *(_QWORD *)v31;
    if ( *(_QWORD *)v31 )
    {
      *((_QWORD *)v31 + 1) = 0;
      v37 = v33;
      qfree(v34, v30);
      v33 = _mm_load_si128(&v37);
    }
    *(_QWORD *)v31 = v32;
    *(__m128i *)(v31 + 8) = v33;
    if ( v38 )
    {
      v39.m128i_i64[0] = 0;
      qfree(v38, v30);
    }
  }
  return v40 - __readfsqword(0x28u);
}
