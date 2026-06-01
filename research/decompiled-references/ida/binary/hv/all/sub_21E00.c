unsigned __int64 __fastcall sub_21E00(__int64 *a1, __int64 a2, double a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  size_t v8; // rax
  size_t v9; // r15
  _WORD *v10; // rsi
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // rbx
  __m128 *v13; // rbx
  __m128 v14; // xmm0
  void *v15; // rax
  __m128i v16; // xmm1
  char *v17; // rdi
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  void **v23; // r12
  __int64 v24; // r14
  void **v25; // rbx
  __int64 v26; // rbp
  void *v27; // rdi
  char *v28; // rdx
  __int64 v29; // rbp
  __int64 v30; // rbx
  char *v31; // rax
  void *v32; // rdi
  const void *v34; // r14
  void *v35; // rax
  const void *v36; // r12
  void *v37; // rax
  __int64 v38; // rax
  __int64 v39; // r13
  __int64 v40; // r12
  char *v41; // rdx
  char *v42; // r15
  size_t v43; // r14
  void *v44; // rax
  void *v45; // rdi
  size_t v46; // r12
  const void *v47; // r13
  __int64 v48; // r13
  _BYTE *v49; // rsi
  __int64 v50; // r12
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+0h] [rbp-C8h]
  void *v54; // [rsp+10h] [rbp-B8h] BYREF
  __int128 v55; // [rsp+18h] [rbp-B0h]
  void *ptr; // [rsp+30h] [rbp-98h] BYREF
  __m128i v57; // [rsp+38h] [rbp-90h] BYREF
  char s[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v59; // [rsp+88h] [rbp-40h]

  v59 = __readfsqword(0x28u);
  sub_65BE0(s, 20, "%F", a3);
  v54 = nullptr;
  v55 = 0;
  v54 = (void *)sub_96080(&v54, 0, 5, 24);
  v5 = v54;
  if ( (unsigned __int64)v55 <= 4 )
  {
    v6 = 3 * v55;
    do
    {
      v7 = &v5[v6];
      v6 += 3;
      *v7 = 0;
      *(_OWORD *)(v7 + 1) = 0;
      v5 = v54;
    }
    while ( v6 != 15 );
  }
  *(_QWORD *)&v55 = 5;
  v8 = strlen(s);
  v9 = v8;
  if ( v8 )
  {
    v45 = (void *)*v5;
    v46 = v8 + 1;
    if ( v5[2] < v8 + 1 )
    {
      v52 = sub_96080(v5, *v5, v8 + 1, 1);
      *v5 = v52;
      v45 = (void *)v52;
    }
    v5[1] = v46;
    memmove(v45, s, v9);
    *(_BYTE *)(*v5 + v9) = 0;
    v5 = v54;
  }
  else
  {
    v5[1] = 0;
  }
  if ( *(_BYTE *)(a2 + 128) )
  {
    v10 = (_WORD *)v5[3];
    if ( v5[5] <= 2u )
    {
      v51 = sub_96080(v5 + 3, v10, 3, 1);
      v5[3] = v51;
      v10 = (_WORD *)v51;
    }
    v5[4] = 3;
    *v10 = 10784;
    *(_BYTE *)(v5[3] + 2LL) = 0;
    v5 = v54;
  }
  else
  {
    v5[4] = 0;
  }
  if ( (_QWORD *)a2 != v5 + 6 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    if ( v11 > 1 )
    {
      v36 = *(const void **)a2;
      v37 = (void *)v5[6];
      if ( v5[8] < v11 )
      {
        v37 = (void *)sub_96080(v5 + 6, v5[6], *(_QWORD *)(a2 + 8), 1);
        v5[6] = v37;
      }
      v5[7] = v11;
      memmove(v37, v36, v11 - 1);
      *(_BYTE *)(v5[6] + v11 - 1) = 0;
    }
    else
    {
      v5[7] = 0;
    }
  }
  v12 = *(_QWORD *)(a2 + 32);
  ptr = nullptr;
  v57 = 0;
  if ( v12 <= 1 )
  {
    if ( *(_QWORD *)(a2 + 56) <= 1u )
      goto LABEL_17;
    goto LABEL_16;
  }
  v47 = *(const void **)(a2 + 24);
  ptr = (void *)sub_96080(&ptr, 0, v12, 1);
  v57.m128i_i64[0] = v12;
  memmove(ptr, v47, v12 - 1);
  *((char *)ptr + v12 - 1) = 0;
  v48 = v57.m128i_i64[0];
  if ( *(_QWORD *)(a2 + 56) > 1u )
  {
    if ( v57.m128i_i64[0] > 1uLL )
    {
      v49 = ptr;
      v50 = v57.m128i_i64[0] - 1;
      if ( v57.m128i_i64[1] < (unsigned __int64)(v57.m128i_i64[0] + 1) )
      {
        ptr = (void *)sub_96080(&ptr, ptr, v57.m128i_i64[0] + 1, 1);
        v49 = ptr;
      }
      v57.m128i_i64[0] = v48 + 1;
      v49[v50] = 32;
      *((_BYTE *)ptr + v48) = 0;
    }
LABEL_16:
    sub_21D30((__int64 *)&ptr);
  }
LABEL_17:
  v13 = (__m128 *)v54;
  v14 = _mm_loadh_ps((const double *)&v57.m128i_i64[1]);
  v15 = *((void **)v54 + 9);
  v16 = _mm_loadu_si128((const __m128i *)v54 + 5);
  v17 = (char *)v54 + 96;
  *((_QWORD *)v54 + 9) = ptr;
  v13[5] = v14;
  ptr = v15;
  v57 = v16;
  if ( v17 != (char *)(a2 + 72) )
  {
    v18 = *(_QWORD *)(a2 + 80);
    if ( v18 > 1 )
    {
      v34 = *(const void **)(a2 + 72);
      v35 = (void *)v13[6].m128_u64[0];
      if ( v13[7].m128_u64[0] < v18 )
      {
        v35 = (void *)sub_96080(v17, v13[6].m128_u64[0], v18, 1);
        v13[6].m128_u64[0] = (unsigned __int64)v35;
      }
      v13[6].m128_u64[1] = v18;
      memmove(v35, v34, v18 - 1);
      *(_BYTE *)(v13[6].m128_u64[0] + v18 - 1) = 0;
    }
    else
    {
      v13[6].m128_u64[1] = 0;
    }
  }
  v19 = v55;
  v53 = 0;
  if ( (_QWORD)v55 )
  {
    v53 = sub_96030(24 * v55);
    v39 = v53;
    v40 = 0;
    do
    {
      v41 = (char *)v54;
      *(_QWORD *)v39 = 0;
      *(_OWORD *)(v39 + 8) = 0;
      v42 = &v41[24 * v40];
      v43 = *((_QWORD *)v42 + 1);
      if ( v43 )
      {
        v44 = (void *)sub_96030(*((_QWORD *)v42 + 1));
        *(_QWORD *)v39 = v44;
        *(_QWORD *)(v39 + 16) = v43;
        memcpy(v44, *(const void **)v42, v43);
        *(_QWORD *)(v39 + 8) = v43;
      }
      ++v40;
      v39 += 24;
    }
    while ( v19 != v40 );
  }
  v20 = a1[1];
  v21 = *a1;
  if ( a1[2] < (unsigned __int64)(v20 + 1) )
  {
    v38 = sub_96080(a1, v21, v20 + 1, 24);
    *a1 = v38;
    v20 = a1[1];
    v21 = v38;
  }
  v22 = v21 + 24 * v20;
  *(_OWORD *)(v22 + 8) = 0;
  *(_QWORD *)v22 = 0;
  ++a1[1];
  v23 = *(void ***)v22;
  v24 = *(_QWORD *)(v22 + 8);
  *(_QWORD *)v22 = v53;
  *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
  if ( v23 )
  {
    v25 = v23;
    v26 = 0;
    if ( v24 )
    {
      do
      {
        v27 = *v25;
        if ( *v25 )
        {
          v25[1] = nullptr;
          j__free(v27);
        }
        ++v26;
        v25 += 3;
      }
      while ( v24 != v26 );
    }
    j__free(v23);
  }
  if ( ptr )
  {
    v57.m128i_i64[0] = 0;
    j__free(ptr);
  }
  v28 = (char *)v54;
  if ( v54 )
  {
    v29 = v55;
    if ( (_QWORD)v55 )
    {
      v30 = 0;
      do
      {
        v31 = &v28[24 * v30];
        v32 = *(void **)v31;
        if ( *(_QWORD *)v31 )
        {
          *((_QWORD *)v31 + 1) = 0;
          j__free(v32);
          v28 = (char *)v54;
        }
        ++v30;
      }
      while ( v29 != v30 );
    }
    *(_QWORD *)&v55 = 0;
    j__free(v28);
  }
  return v59 - __readfsqword(0x28u);
}

