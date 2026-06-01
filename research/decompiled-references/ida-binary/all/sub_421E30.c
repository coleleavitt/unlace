unsigned __int64 __fastcall sub_421E30(__int64 a1, const char **a2)
{
  unsigned __int64 v2; // rax
  const char *v3; // rdx
  const char *v5; // rsi
  const char *v6; // r12
  const char *v7; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  size_t v10; // r11
  char *v11; // r14
  __int64 v12; // r13
  __int64 v13; // rsi
  size_t v14; // rdx
  char *v15; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  char *v18; // rbx
  __int64 v19; // rax
  size_t v20; // r8
  const char *v21; // rax
  const char *v22; // r13
  const char *v23; // rbx
  void *v24; // r15
  __int64 v25; // rdx
  char *v26; // rax
  void *v27; // rdi
  const char *v28; // rax
  const char *v29; // r12
  size_t v30; // rax
  size_t v31; // r14
  size_t v32; // r15
  size_t v33; // r12
  __int64 v34; // rbp
  __int64 v35; // rbx
  const char *v36; // rax
  __int64 v37; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // [rsp+0h] [rbp-A8h]
  size_t v41; // [rsp+10h] [rbp-98h]
  size_t v42; // [rsp+10h] [rbp-98h]
  size_t v43; // [rsp+18h] [rbp-90h]
  size_t v44; // [rsp+20h] [rbp-88h]
  __int64 v46; // [rsp+30h] [rbp-78h] BYREF
  __int128 v47; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v50; // [rsp+68h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v2 = (unsigned __int64)a2[1];
  v47 = 0;
  v46 = 0;
  if ( !v2 )
    return v50 - __readfsqword(0x28u);
  v3 = *a2;
  v5 = &(*a2)[v2 - 1];
  v6 = v3;
  v40 = (unsigned __int64)v5;
  if ( v3 >= v5 )
  {
    if ( v2 == 1 )
      return v50 - __readfsqword(0x28u);
    v7 = nullptr;
    v9 = 0;
  }
  else
  {
    v7 = nullptr;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v15 = strchr(v6, 10);
      v16 = v40;
      v17 = v9 + 1;
      v18 = v15;
      if ( v15 )
        v16 = (unsigned __int64)v15;
      v20 = v16 - (_QWORD)v6;
      if ( v8 < v17 )
      {
        v41 = v20;
        v46 = qvector_reserve(&v46, v7, v17, 24);
        v9 = v47;
        v7 = (const char *)v46;
        v20 = v41;
      }
      v10 = v20;
      v11 = (char *)&v7[24 * v9];
      *(_OWORD *)(v11 + 8) = 0;
      *(_QWORD *)v11 = 0;
      *(_QWORD *)&v47 = v47 + 1;
      v12 = *((_QWORD *)v11 + 1);
      if ( v12 )
      {
        --v12;
        v10 = v20 + v12;
      }
      v13 = *(_QWORD *)v11;
      v14 = v10 + 1;
      if ( v10 != -1 )
      {
        v44 = v20;
        v43 = v10;
        v42 = v10 + 1;
        v19 = qvector_reserve(v11, v13, v14, 1);
        v20 = v44;
        v10 = v43;
        *(_QWORD *)v11 = v19;
        v13 = v19;
        v14 = v42;
      }
      *((_QWORD *)v11 + 1) = v14;
      *(_BYTE *)(v13 + v10) = 0;
      v5 = v6;
      memmove((void *)(v12 + *(_QWORD *)v11), v6, v20);
      v7 = (const char *)v46;
      v9 = v47;
      if ( !v18 )
        break;
      v6 = v18 + 1;
      if ( (unsigned __int64)(v18 + 1) >= v40 )
        break;
      v8 = *((_QWORD *)&v47 + 1);
    }
    v2 = (unsigned __int64)a2[1];
    if ( v2 < 2 )
      goto LABEL_21;
    v3 = *a2;
  }
  if ( v3[v2 - 2] == 10 )
  {
    if ( *((_QWORD *)&v47 + 1) < (unsigned __int64)(v9 + 1) )
    {
      v5 = v7;
      v46 = qvector_reserve(&v46, v7, v9 + 1, 24);
      v9 = v47;
      v7 = (const char *)v46;
    }
    v21 = &v7[24 * v9];
    *(_QWORD *)v21 = 0;
    v7 = (const char *)v46;
    *(_OWORD *)(v21 + 8) = 0;
    v9 = v47 + 1;
    *(_QWORD *)&v47 = v47 + 1;
  }
LABEL_21:
  v22 = &v7[24 * v9];
  if ( v22 != v7 )
  {
    v23 = v7;
    while ( 1 )
    {
      v28 = (const char *)trim(*(_QWORD *)v23);
      src = nullptr;
      v29 = v28;
      *(_OWORD *)n = 0;
      if ( !v28 )
        goto LABEL_27;
      v30 = strlen(v28);
      v31 = v30 + 1;
      v32 = v30;
      v5 = v29;
      src = (void *)qvector_reserve(&src, 0, v30 + 1, 1);
      n[0] = v31;
      memmove(src, v29, v32);
      *((_BYTE *)src + v32) = 0;
      v33 = n[0];
      if ( n[0] > 1 && *(_BYTE *)src != 35 )
      {
        v24 = (void *)qalloc_or_throw(n[0]);
        memcpy(v24, src, v33);
        v25 = *(_QWORD *)(a1 + 8);
        v5 = *(const char **)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v25 + 1) )
        {
          v39 = qvector_reserve(a1, v5, v25 + 1, 24);
          *(_QWORD *)a1 = v39;
          v25 = *(_QWORD *)(a1 + 8);
          v5 = (const char *)v39;
        }
        v26 = (char *)&v5[24 * v25];
        *(_QWORD *)v26 = v24;
        v27 = src;
        *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64((__m128i)v33, (__m128i)v33);
        ++*(_QWORD *)(a1 + 8);
        if ( v27 )
        {
          n[0] = 0;
          qfree(v27, v5);
        }
        goto LABEL_27;
      }
      if ( src )
      {
        n[0] = 0;
        v23 += 24;
        qfree(src, v5);
        if ( v22 == v23 )
        {
LABEL_33:
          v7 = (const char *)v46;
          break;
        }
      }
      else
      {
LABEL_27:
        v23 += 24;
        if ( v22 == v23 )
          goto LABEL_33;
      }
    }
  }
  if ( v7 )
  {
    v34 = v47;
    if ( (_QWORD)v47 )
    {
      v35 = 0;
      do
      {
        v36 = &v7[24 * v35];
        v37 = *(_QWORD *)v36;
        if ( *(_QWORD *)v36 )
        {
          *((_QWORD *)v36 + 1) = 0;
          qfree(v37, v5);
        }
        ++v35;
        v7 = (const char *)v46;
      }
      while ( v34 != v35 );
    }
    *(_QWORD *)&v47 = 0;
    qfree(v7, v5);
  }
  return v50 - __readfsqword(0x28u);
}
