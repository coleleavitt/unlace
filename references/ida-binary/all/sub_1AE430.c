__int64 __fastcall sub_1AE430(__int64 a1, __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5, const char *a6, int a7)
{
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // rbp
  __int64 v12; // rax
  __int64 v13; // kr00_8
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r12
  __int64 v16; // rbp
  size_t v17; // r12
  char *v18; // r13
  void *v19; // rdi
  __int64 v20; // rax
  unsigned int i; // ebp
  __int64 v22; // rdx
  const char *v23; // rsi
  char *v24; // rax
  const char *v25; // rsi
  size_t v26; // r15
  void *v27; // r12
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r12
  __int64 j; // rbp
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // r12
  __int64 k; // rbp
  __int64 *v37; // rax
  __int64 v38; // rdi
  char *v44; // [rsp+28h] [rbp-98h] BYREF
  __int128 v45; // [rsp+30h] [rbp-90h]
  __int64 v46; // [rsp+48h] [rbp-78h] BYREF
  __int128 v47; // [rsp+50h] [rbp-70h]
  void *src; // [rsp+68h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+70h] [rbp-50h]
  unsigned __int64 v50; // [rsp+80h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v45 = 0;
  v44 = nullptr;
  if ( a6 )
  {
    v9 = strlen(a6);
    v10 = v9 + 1;
    v11 = v9;
    v44 = (char *)qvector_reserve(&v44, 0, v9 + 1, 1);
    *(_QWORD *)&v45 = v10;
    memmove(v44, a6, v11);
    v44[v11] = 0;
  }
  v12 = sub_32C7D0(a6, a7 - 1, 0);
  v13 = v12;
  v14 = SHIDWORD(v12);
  if ( !(_QWORD)v45 )
  {
    v46 = 0;
    v47 = 0;
LABEL_13:
    v20 = 0;
    goto LABEL_14;
  }
  v15 = v45 - 1;
  v12 = (int)v12;
  if ( (__int64)v45 - 1 < v14 )
  {
    if ( (int)v12 > v15 )
      v12 = v45 - 1;
    v16 = v12;
    v17 = v15 - v12;
  }
  else
  {
    if ( v14 <= (int)v12 )
      v12 = v14;
    v16 = v12;
    v17 = v14 - v12;
  }
  v18 = v44;
  v46 = 0;
  v47 = 0;
  if ( !v17 )
    goto LABEL_13;
  v19 = nullptr;
  if ( v17 != -1 )
  {
    v46 = qvector_reserve(&v46, 0, v17 + 1, 1);
    v19 = (void *)v46;
  }
  *(_QWORD *)&v47 = v17 + 1;
  memmove(v19, &v18[v16], v17);
  *(_BYTE *)(v46 + v17) = 0;
  v20 = v47;
LABEL_14:
  for ( i = 0; ; ++i )
  {
    src = nullptr;
    v25 = &s1;
    *(_OWORD *)n = 0;
    if ( v20 )
      v25 = (const char *)v46;
    if ( !(unsigned __int8)find_idc_func(&src, v25, i) )
      break;
    v26 = n[0];
    v27 = nullptr;
    if ( n[0] )
    {
      v27 = (void *)qalloc_or_throw(n[0]);
      memcpy(v27, src, v26);
    }
    v22 = *(_QWORD *)(a1 + 8);
    v23 = *(const char **)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v22 + 1) )
    {
      v28 = qvector_reserve(a1, v23, v22 + 1, 24);
      *(_QWORD *)a1 = v28;
      v22 = *(_QWORD *)(a1 + 8);
      v23 = (const char *)v28;
    }
    v24 = (char *)&v23[24 * v22];
    *(_QWORD *)v24 = v27;
    *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
    ++*(_QWORD *)(a1 + 8);
    if ( !i )
    {
      *a4 = v13;
      *a5 = HIDWORD(v13);
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src, v23);
    }
    v20 = v47;
  }
  if ( src )
  {
    n[0] = 0;
    qfree(src, v25);
  }
  v29 = *a2;
  if ( *a2 )
  {
    v30 = a2[1];
    if ( v30 )
    {
      for ( j = 0; j != v30; ++j )
      {
        v32 = (__int64 *)(v29 + 24 * j);
        v33 = *v32;
        if ( *v32 )
        {
          v32[1] = 0;
          qfree(v33, v25);
          v29 = *a2;
        }
      }
    }
    a2[1] = 0;
    qfree(v29, v25);
    *a2 = 0;
    a2[2] = 0;
  }
  v34 = *a3;
  if ( *a3 )
  {
    v35 = a3[1];
    if ( v35 )
    {
      for ( k = 0; k != v35; ++k )
      {
        v37 = (__int64 *)(v34 + 24 * k);
        v38 = *v37;
        if ( *v37 )
        {
          v37[1] = 0;
          qfree(v38, v25);
          v34 = *a3;
        }
      }
    }
    a3[1] = 0;
    qfree(v34, v25);
    *a3 = 0;
    a3[2] = 0;
  }
  LOBYTE(a1) = *(_QWORD *)(a1 + 8) != 0;
  if ( v46 )
  {
    *(_QWORD *)&v47 = 0;
    qfree(v46, v25);
  }
  if ( v44 )
  {
    *(_QWORD *)&v45 = 0;
    qfree(v44, v25);
  }
  return (unsigned int)a1;
}
