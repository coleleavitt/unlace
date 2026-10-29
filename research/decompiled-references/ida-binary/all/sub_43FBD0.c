unsigned __int64 __fastcall sub_43FBD0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  size_t v9; // rax
  size_t v10; // rbp
  size_t v11; // rax
  __int64 v12; // r15
  size_t v13; // rbp
  __int64 v14; // rdi
  void *v15; // rbp
  __m128i v16; // xmm1
  double v17; // xmm0_8
  __m128i v18; // xmm1
  void *v19; // rdi
  const char *v20; // rcx
  const char *v21; // rdx
  unsigned __int64 v22; // rbp
  const void *v24; // r13
  void *v25; // rax
  const void *v26; // r15
  void *v27; // rdi
  void *v28; // rdi
  size_t v29; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-A8h] BYREF
  void *v34; // [rsp+10h] [rbp-98h] BYREF
  __m128i v35; // [rsp+18h] [rbp-90h] BYREF
  char s[32]; // [rsp+30h] [rbp-78h] BYREF
  char src[24]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-40h]

  v4 = *a1;
  v38 = __readfsqword(0x28u);
  v6 = a1[1];
  if ( a1[2] < (unsigned __int64)(v6 + 1) )
  {
    v30 = qvector_reserve(a1, v4, v6 + 1, 152);
    v6 = a1[1];
    *a1 = v30;
    v4 = v30;
  }
  v7 = v4 + 152 * v6;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 72) = 0;
  *(_QWORD *)(v7 + 96) = 0;
  *(_QWORD *)(v7 + 120) = 0;
  *(_OWORD *)(v7 + 8) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  *(_OWORD *)(v7 + 56) = 0;
  *(_OWORD *)(v7 + 80) = 0;
  *(_OWORD *)(v7 + 104) = 0;
  *(_OWORD *)(v7 + 128) = 0;
  ++a1[1];
  *(_DWORD *)(v7 + 144) = *(_DWORD *)(a2 + 60);
  if ( a2 != v7 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( v8 > 1 )
    {
      v26 = *(const void **)a2;
      v27 = *(void **)v7;
      if ( *(_QWORD *)(v7 + 16) < v8 )
      {
        v32 = qvector_reserve(v7, *(_QWORD *)v7, *(_QWORD *)(a2 + 8), 1);
        *(_QWORD *)v7 = v32;
        v27 = (void *)v32;
      }
      *(_QWORD *)(v7 + 8) = v8;
      memmove(v27, v26, v8 - 1);
      *(_BYTE *)(*(_QWORD *)v7 + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v7 + 8) = 0;
    }
  }
  pretty_print_size(s, 20, *(_QWORD *)(a2 + 40));
  v9 = strlen(s);
  v10 = v9;
  if ( v9 )
  {
    v28 = *(void **)(v7 + 24);
    v29 = v9 + 1;
    if ( *(_QWORD *)(v7 + 40) < v9 + 1 )
    {
      v31 = qvector_reserve(v7 + 24, *(_QWORD *)(v7 + 24), v29, 1);
      *(_QWORD *)(v7 + 24) = v31;
      v28 = (void *)v31;
    }
    *(_QWORD *)(v7 + 32) = v29;
    memmove(v28, s, v10);
    *(_BYTE *)(*(_QWORD *)(v7 + 24) + v10) = 0;
  }
  else
  {
    *(_QWORD *)(v7 + 32) = 0;
  }
  qstrftime64(src, 20, "%F %T", a3[1]);
  v34 = nullptr;
  v35 = 0;
  v11 = strlen(src);
  v12 = v11 + 1;
  v13 = v11;
  v34 = (void *)qvector_reserve(&v34, 0, v11 + 1, 1);
  v35.m128i_i64[0] = v12;
  memmove(v34, src, v13);
  *((_BYTE *)v34 + v13) = 0;
  v14 = *(_QWORD *)(v7 + 48);
  v15 = v34;
  v16 = _mm_loadu_si128(&v35);
  v35 = 0;
  v34 = nullptr;
  if ( v14 )
  {
    *(_QWORD *)(v7 + 56) = 0;
    v33 = v16;
    v17 = qfree(v14, src);
    v18 = _mm_load_si128(&v33);
    v19 = v34;
    *(_QWORD *)(v7 + 48) = v15;
    *(__m128i *)(v7 + 56) = v18;
    if ( v19 )
    {
      v35.m128i_i64[0] = 0;
      qfree(v19, src, v17);
    }
  }
  else
  {
    *(_QWORD *)(v7 + 48) = v15;
    *(__m128i *)(v7 + 56) = v16;
  }
  v20 = &s1;
  if ( a3[6] )
    v20 = (const char *)a3[5];
  v21 = &s1;
  if ( a3[3] )
    v21 = (const char *)a3[2];
  sub_169A50((__int64 *)(v7 + 72), (__int64)"%s@%s", v21, v20);
  sub_169A50((__int64 *)(v7 + 96), (__int64)"%d", *(_DWORD *)(a2 + 68));
  if ( (_QWORD *)(v7 + 120) != a3 + 8 )
  {
    v22 = a3[9];
    if ( v22 > 1 )
    {
      v24 = (const void *)a3[8];
      v25 = *(void **)(v7 + 120);
      if ( *(_QWORD *)(v7 + 136) < v22 )
      {
        v25 = (void *)qvector_reserve(v7 + 120, *(_QWORD *)(v7 + 120), v22, 1);
        *(_QWORD *)(v7 + 120) = v25;
      }
      *(_QWORD *)(v7 + 128) = v22;
      memmove(v25, v24, v22 - 1);
      *(_BYTE *)(*(_QWORD *)(v7 + 120) + v22 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v7 + 128) = 0;
    }
  }
  *(_BYTE *)(v7 + 148) = *(_BYTE *)(a2 + 72);
  return v38 - __readfsqword(0x28u);
}
