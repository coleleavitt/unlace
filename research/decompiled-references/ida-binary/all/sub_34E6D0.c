__int64 __fastcall sub_34E6D0(
        __int64 *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 result; // rax
  __int64 v18; // rbx
  const char *v19; // rbp
  size_t v20; // rbx
  char *v21; // rax
  signed __int64 v22; // rdx
  signed int v23; // ebx
  __int64 v24; // rax
  unsigned int v25; // r12d
  const char *v26; // rsi
  char *v27; // rbp
  size_t v28; // r14
  void *v29; // rbp
  __int64 v30; // rdx
  const char *v31; // rsi
  char *v32; // rax
  __m128i v33; // xmm0
  char *v34; // rdi
  __int64 v35; // rax
  const char *v36; // rbp
  size_t v37; // r14
  char *v38; // rax
  signed __int64 v39; // rdx
  __int64 v40; // rax
  size_t v41; // rbx
  void *v42; // rbp
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rax
  void *v46; // rbp
  size_t v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  void *src; // [rsp+10h] [rbp-78h] BYREF
  size_t v53[3]; // [rsp+18h] [rbp-70h]
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+38h] [rbp-50h]
  unsigned __int64 v56; // [rsp+48h] [rbp-40h]

  v56 = __readfsqword(0x28u);
  sub_34D7A0(a1, a2);
  v11 = sub_1E73C0(0x7D1u, a1, a1 + 6, (unsigned __int8)a2);
  result = 0;
  if ( v11 != 1 )
    return result;
  v18 = a1[13];
  if ( v18 )
  {
    v19 = (const char *)a1[12];
    v20 = v18 - 1;
    v21 = strchr(v19, 45);
    src = nullptr;
    *(_OWORD *)v53 = 0;
    v22 = v21 - v19;
    if ( v20 <= v21 - v19 )
      v22 = v20;
    if ( v21 )
      v20 = v22;
    if ( v20 )
    {
      src = (void *)qvector_reserve(&src, 0, v20 + 1, 1);
      v53[0] = v20 + 1;
      memmove(src, v19, v20);
      *((_BYTE *)src + v20) = 0;
    }
  }
  else
  {
    src = nullptr;
    *(_OWORD *)v53 = 0;
  }
  v23 = 0;
  v24 = 0;
  v25 = -1;
  if ( a1[1] )
  {
    while ( 1 )
    {
      v35 = *a1 + 24 * v24;
      v14 = *(_QWORD *)(v35 + 8);
      if ( !v14 )
        break;
      v36 = *(const char **)v35;
      v37 = v14 - 1;
      v38 = strchr(*(const char **)v35, 45);
      s1 = nullptr;
      *(_OWORD *)n = 0;
      v39 = v38 - v36;
      if ( v37 <= v38 - v36 )
        v39 = v37;
      if ( v38 )
        v37 = v39;
      if ( !v37 )
        goto LABEL_12;
      s1 = (char *)qvector_reserve(&s1, 0, v37 + 1, 1);
      n[0] = v37 + 1;
      memmove(s1, v36, v37);
      s1[v37] = 0;
      v28 = n[0];
      v27 = s1;
      if ( !v53[0] )
      {
        v26 = &::s1;
        if ( !n[0] )
        {
LABEL_37:
          v25 = v23;
          if ( n[1] > 0xD )
            goto LABEL_16;
          goto LABEL_38;
        }
LABEL_31:
        if ( !strcmp(s1, v26) )
          v25 = v23;
        if ( v28 != 1 )
        {
LABEL_34:
          v29 = (void *)qalloc_or_throw(v28);
          memcpy(v29, s1, v28);
          goto LABEL_18;
        }
        goto LABEL_15;
      }
      v26 = (const char *)src;
      if ( n[0] )
        goto LABEL_31;
LABEL_14:
      if ( !*v26 )
        goto LABEL_37;
LABEL_15:
      if ( n[1] > 0xD )
        goto LABEL_16;
LABEL_38:
      s1 = (char *)qvector_reserve(&s1, v27, 14, 1);
      v27 = s1;
LABEL_16:
      n[0] = 14;
      qmemcpy(v27, "<generic abi>", 13);
      s1[13] = 0;
      v28 = n[0];
      if ( n[0] )
        goto LABEL_34;
      v29 = nullptr;
LABEL_18:
      v30 = a1[4];
      v31 = (const char *)a1[3];
      if ( a1[5] < (unsigned __int64)(v30 + 1) )
      {
        v40 = qvector_reserve(a1 + 3, v31, v30 + 1, 24);
        a1[3] = v40;
        v30 = a1[4];
        v31 = (const char *)v40;
      }
      v32 = (char *)&v31[24 * v30];
      v33 = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
      *(_QWORD *)v32 = v29;
      v34 = s1;
      *(__m128i *)(v32 + 8) = v33;
      ++a1[4];
      if ( v34 )
      {
        n[0] = 0;
        *(double *)v33.m128i_i64 = qfree(v34, v31);
      }
      v24 = ++v23;
      if ( v23 >= (unsigned __int64)a1[1] )
      {
        if ( v25 != -1 )
          goto LABEL_40;
        goto LABEL_44;
      }
    }
    s1 = nullptr;
    *(_OWORD *)n = 0;
LABEL_12:
    if ( !v53[0] )
    {
      v25 = v23;
      v27 = nullptr;
      goto LABEL_15;
    }
    v26 = (const char *)src;
    v27 = nullptr;
    goto LABEL_14;
  }
LABEL_44:
  v41 = v53[0];
  v25 = *((_DWORD *)a1 + 8);
  v42 = nullptr;
  if ( v53[0] )
  {
    v42 = (void *)qalloc_or_throw(v53[0]);
    memcpy(v42, src, v41);
  }
  v43 = a1[1];
  v44 = *a1;
  if ( a1[2] < (unsigned __int64)(v43 + 1) )
  {
    v51 = qvector_reserve(a1, v44, v43 + 1, 24);
    *a1 = v51;
    v43 = a1[1];
    v44 = v51;
  }
  v45 = v44 + 24 * v43;
  *(_QWORD *)v45 = v42;
  v46 = nullptr;
  *(__m128i *)(v45 + 8) = _mm_unpacklo_epi64((__m128i)v41, (__m128i)v41);
  v47 = v53[0];
  ++a1[1];
  if ( v47 )
  {
    v46 = (void *)qalloc_or_throw(v47);
    memcpy(v46, src, v47);
  }
  v30 = a1[4];
  v48 = a1[3];
  if ( a1[5] < (unsigned __int64)(v30 + 1) )
  {
    v50 = qvector_reserve(a1 + 3, v48, v30 + 1, 24);
    a1[3] = v50;
    v30 = a1[4];
    v48 = v50;
  }
  v49 = v48 + 24 * v30;
  v33 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
  *(_QWORD *)v49 = v46;
  *(__m128i *)(v49 + 8) = v33;
  ++a1[4];
LABEL_40:
  sub_34E490((__int64)a1, v25, *(double *)v33.m128i_i64, a4, a5, a6, v15, v16, a9, a10, v30, v12, v13, v14);
  if ( src )
  {
    v53[0] = 0;
    qfree(src, (const char *)v25);
  }
  return 1;
}
