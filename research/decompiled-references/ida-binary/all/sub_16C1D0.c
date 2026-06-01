__int64 __fastcall sub_16C1D0(__int64 a1)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r14
  unsigned int v4; // ebx
  unsigned __int64 v5; // r15
  const char *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  const void *v12; // r14
  __int64 *v13; // r12
  size_t v14; // rax
  size_t v15; // r13
  const void *v16; // r14
  size_t v17; // rax
  size_t v18; // r13
  const void *v19; // r14
  size_t v20; // rax
  size_t v21; // r13
  const void *v22; // r14
  size_t v23; // rax
  size_t v24; // r13
  const void *v25; // r14
  size_t v26; // rax
  size_t v27; // r13
  const void *v28; // r14
  size_t v29; // rax
  size_t v30; // r13
  const void *v31; // r14
  size_t v32; // rbp
  unsigned __int64 v33; // r13
  _QWORD *v34; // rdi
  unsigned __int64 v35; // r15
  __int64 v37; // r13
  __int64 v38; // r14
  unsigned __int64 v39; // rax
  void *v40; // rdi
  size_t v41; // r15
  void *v42; // rdi
  size_t v43; // r15
  void *v44; // rdi
  size_t v45; // r15
  void *v46; // rdi
  size_t v47; // r15
  void *v48; // rdi
  size_t v49; // r15
  void *v50; // rdi
  size_t v51; // r15
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r12
  char *v65; // rax
  __int64 v66; // r13
  __int64 v67; // r15
  __int64 v68; // rdx
  __m128i v69; // xmm0
  __int64 v70; // rdx
  __m128i v71; // xmm0
  __int64 v72; // rdx
  __m128i v73; // xmm0
  __int64 v74; // rdx
  __m128i v75; // xmm0
  __int64 v76; // rdx
  __m128i v77; // xmm0
  __int64 v78; // rdx
  __m128i v79; // xmm0
  __m128i v80; // xmm0
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // rdi
  __int64 v84; // rdi
  __int64 v85; // rdi
  __int64 v86; // rdi
  __int64 v88; // rax
  char *s2; // [rsp+8h] [rbp-40h]
  char *s2a; // [rsp+8h] [rbp-40h]

  if ( !a1 || *(_QWORD *)a1 != 72 )
    return (unsigned int)-1;
  v2 = xmmword_8C9548;
  if ( !(_QWORD)xmmword_8C9548 )
    goto LABEL_38;
  v3 = qword_8C9540;
  v4 = 0;
  v5 = 0;
  s2 = *(char **)(a1 + 8);
  while ( 1 )
  {
    v6 = &s1;
    v7 = v3 + 168 * v5;
    if ( *(_QWORD *)(v7 + 8) )
      v6 = *(const char **)v7;
    if ( !strcmp(v6, s2) )
      break;
    v5 = (int)++v4;
    if ( (int)v4 >= v2 )
      goto LABEL_38;
  }
  v11 = *(_QWORD *)(v7 + 144);
  if ( v11 )
  {
    *(_QWORD *)(v7 + 152) = 0;
    qfree(v11, s2, v8, v9, v10);
    v2 = xmmword_8C9548;
    *(_QWORD *)(v7 + 144) = 0;
    *(_QWORD *)(v7 + 160) = 0;
  }
  if ( v5 >= v2 )
  {
LABEL_38:
    v37 = *((_QWORD *)&xmmword_8C9548 + 1);
    v4 = v2;
    if ( *((_QWORD *)&xmmword_8C9548 + 1) < v2 + 1 )
    {
      v60 = qvector_reserve(&qword_8C9540, 0, v2 + 1, 168);
      v64 = qword_8C9540;
      v38 = v60;
      v65 = *((char **)&xmmword_8C9548 + 1);
      *((_QWORD *)&xmmword_8C9548 + 1) = v37;
      s2a = v65;
      v66 = xmmword_8C9548 - 1;
      if ( (__int64)xmmword_8C9548 - 1 >= 0 )
      {
        v67 = v38;
        do
        {
          v68 = *(_QWORD *)v64;
          v69 = _mm_loadu_si128((const __m128i *)(v64 + 8));
          *(_QWORD *)v64 = 0;
          *(_OWORD *)(v64 + 8) = 0;
          *(_QWORD *)v67 = v68;
          *(__m128i *)(v67 + 8) = v69;
          v70 = *(_QWORD *)(v64 + 24);
          v71 = _mm_loadu_si128((const __m128i *)(v64 + 32));
          *(_QWORD *)(v64 + 24) = 0;
          *(_QWORD *)(v67 + 24) = v70;
          *(__m128i *)(v67 + 32) = v71;
          v72 = *(_QWORD *)(v64 + 48);
          v73 = _mm_loadu_si128((const __m128i *)(v64 + 56));
          *(_OWORD *)(v64 + 32) = 0;
          *(_QWORD *)(v67 + 48) = v72;
          *(__m128i *)(v67 + 56) = v73;
          v74 = *(_QWORD *)(v64 + 72);
          v75 = _mm_loadu_si128((const __m128i *)(v64 + 80));
          *(_QWORD *)(v64 + 48) = 0;
          *(_OWORD *)(v64 + 56) = 0;
          *(_QWORD *)(v67 + 72) = v74;
          *(__m128i *)(v67 + 80) = v75;
          v76 = *(_QWORD *)(v64 + 96);
          v77 = _mm_loadu_si128((const __m128i *)(v64 + 104));
          *(_QWORD *)(v64 + 72) = 0;
          *(_OWORD *)(v64 + 80) = 0;
          *(__m128i *)(v67 + 104) = v77;
          *(_QWORD *)(v67 + 96) = v76;
          v78 = *(_QWORD *)(v64 + 120);
          *(_QWORD *)(v64 + 96) = 0;
          *(_OWORD *)(v64 + 104) = 0;
          *(_QWORD *)(v67 + 120) = v78;
          *(_QWORD *)(v64 + 120) = 0;
          v79 = _mm_loadu_si128((const __m128i *)(v64 + 128));
          *(_OWORD *)(v64 + 128) = 0;
          *(__m128i *)(v67 + 128) = v79;
          v61 = *(_QWORD *)(v64 + 144);
          v80 = _mm_loadu_si128((const __m128i *)(v64 + 152));
          *(_QWORD *)(v64 + 144) = 0;
          *(_QWORD *)(v67 + 144) = v61;
          *(__m128i *)(v67 + 152) = v80;
          v81 = *(_QWORD *)(v64 + 120);
          *(_QWORD *)(v64 + 160) = 0;
          if ( v81 )
          {
            *(_QWORD *)(v64 + 128) = 0;
            qfree(v81, 0, v61, v62, v63);
          }
          v82 = *(_QWORD *)(v64 + 96);
          if ( v82 )
          {
            *(_QWORD *)(v64 + 104) = 0;
            qfree(v82, 0, v61, v62, v63);
          }
          v83 = *(_QWORD *)(v64 + 72);
          if ( v83 )
          {
            *(_QWORD *)(v64 + 80) = 0;
            qfree(v83, 0, v61, v62, v63);
          }
          v84 = *(_QWORD *)(v64 + 48);
          if ( v84 )
          {
            *(_QWORD *)(v64 + 56) = 0;
            qfree(v84, 0, v61, v62, v63);
          }
          v85 = *(_QWORD *)(v64 + 24);
          if ( v85 )
          {
            *(_QWORD *)(v64 + 32) = 0;
            qfree(v85, 0, v61, v62, v63);
          }
          v86 = *(_QWORD *)v64;
          if ( *(_QWORD *)v64 )
          {
            *(_QWORD *)(v64 + 8) = 0;
            qfree(v86, 0, v61, v62, v63);
          }
          v64 += 168;
          v67 += 168;
        }
        while ( v66-- != 0 );
        v64 = qword_8C9540;
      }
      qfree(v64, 0, v61, v62, v63);
      qword_8C9540 = v38;
      v2 = xmmword_8C9548;
      *((_QWORD *)&xmmword_8C9548 + 1) = s2a;
    }
    else
    {
      v38 = qword_8C9540;
    }
    v39 = v38 + 168 * v2;
    *(_QWORD *)v39 = 0;
    *(_OWORD *)(v39 + 8) = 0;
    *(_QWORD *)(v39 + 24) = 0;
    *(_QWORD *)&xmmword_8C9548 = xmmword_8C9548 + 1;
    *(_QWORD *)(v39 + 48) = 0;
    *(_QWORD *)(v39 + 72) = 0;
    *(_QWORD *)(v39 + 96) = 0;
    *(_QWORD *)(v39 + 120) = 0;
    *(_QWORD *)(v39 + 144) = 0;
    *(_OWORD *)(v39 + 32) = 0;
    *(_OWORD *)(v39 + 56) = 0;
    *(_OWORD *)(v39 + 80) = 0;
    *(_OWORD *)(v39 + 104) = 0;
    *(_OWORD *)(v39 + 128) = 0;
    *(_OWORD *)(v39 + 152) = 0;
  }
  v12 = *(const void **)(a1 + 8);
  v13 = (__int64 *)(qword_8C9540 + 168LL * (int)v4);
  if ( v12 && (v14 = strlen(*(const char **)(a1 + 8)), (v15 = v14) != 0) )
  {
    v40 = (void *)*v13;
    v41 = v14 + 1;
    if ( v13[2] < v14 + 1 )
    {
      v59 = qvector_reserve(v13, *v13, v14 + 1, 1);
      *v13 = v59;
      v40 = (void *)v59;
    }
    v13[1] = v41;
    memmove(v40, v12, v15);
    *(_BYTE *)(*v13 + v15) = 0;
  }
  else
  {
    v13[1] = 0;
  }
  v16 = *(const void **)(a1 + 16);
  if ( v16 && (v17 = strlen(*(const char **)(a1 + 16)), (v18 = v17) != 0) )
  {
    v42 = (void *)v13[3];
    v43 = v17 + 1;
    if ( v13[5] < v17 + 1 )
    {
      v58 = qvector_reserve(v13 + 3, v13[3], v43, 1);
      v13[3] = v58;
      v42 = (void *)v58;
    }
    v13[4] = v43;
    memmove(v42, v16, v18);
    *(_BYTE *)(v13[3] + v18) = 0;
  }
  else
  {
    v13[4] = 0;
  }
  v19 = *(const void **)(a1 + 24);
  if ( v19 && (v20 = strlen(*(const char **)(a1 + 24)), (v21 = v20) != 0) )
  {
    v44 = (void *)v13[6];
    v45 = v20 + 1;
    if ( v13[8] < v20 + 1 )
    {
      v57 = qvector_reserve(v13 + 6, v13[6], v45, 1);
      v13[6] = v57;
      v44 = (void *)v57;
    }
    v13[7] = v45;
    memmove(v44, v19, v21);
    *(_BYTE *)(v13[6] + v21) = 0;
  }
  else
  {
    v13[7] = 0;
  }
  v22 = *(const void **)(a1 + 32);
  if ( v22 && (v23 = strlen(*(const char **)(a1 + 32)), (v24 = v23) != 0) )
  {
    v46 = (void *)v13[9];
    v47 = v23 + 1;
    if ( v13[11] < v23 + 1 )
    {
      v56 = qvector_reserve(v13 + 9, v13[9], v47, 1);
      v13[9] = v56;
      v46 = (void *)v56;
    }
    v13[10] = v47;
    memmove(v46, v22, v24);
    *(_BYTE *)(v13[9] + v24) = 0;
  }
  else
  {
    v13[10] = 0;
  }
  v25 = *(const void **)(a1 + 40);
  if ( v25 && (v26 = strlen(*(const char **)(a1 + 40)), (v27 = v26) != 0) )
  {
    v48 = (void *)v13[12];
    v49 = v26 + 1;
    if ( v13[14] < v26 + 1 )
    {
      v55 = qvector_reserve(v13 + 12, v13[12], v49, 1);
      v13[12] = v55;
      v48 = (void *)v55;
    }
    v13[13] = v49;
    memmove(v48, v25, v27);
    *(_BYTE *)(v13[12] + v27) = 0;
  }
  else
  {
    v13[13] = 0;
  }
  v28 = *(const void **)(a1 + 48);
  if ( v28 && (v29 = strlen(*(const char **)(a1 + 48)), (v30 = v29) != 0) )
  {
    v50 = (void *)v13[15];
    v51 = v29 + 1;
    if ( v13[17] < v29 + 1 )
    {
      v54 = qvector_reserve(v13 + 15, v13[15], v51, 1);
      v13[15] = v54;
      v50 = (void *)v54;
    }
    v13[16] = v51;
    memmove(v50, v28, v30);
    *(_BYTE *)(v13[15] + v30) = 0;
  }
  else
  {
    v13[16] = 0;
  }
  v31 = *(const void **)(a1 + 56);
  if ( v31 )
  {
    v32 = *(_QWORD *)(a1 + 64);
    if ( v32 )
    {
      v33 = v13[19];
      v34 = v13 + 18;
      v35 = v33 + v32;
      if ( __CFADD__(v33, v32) )
      {
        if ( v33 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v33 != 0x7FFFFFFFFFFFFFFFLL )
            v13[19] = 0x7FFFFFFFFFFFFFFFLL;
LABEL_36:
          memcpy((void *)(v33 + v13[18]), v31, v32);
          return v4;
        }
        v34 = v13 + 18;
        v35 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v52 = v13[18];
      v53 = v13[19];
      if ( v13[20] < v35 )
      {
        v88 = qvector_reserve(v34, v52, v35, 1);
        v13[18] = v88;
        v52 = v88;
        v53 = v13[19];
      }
      memset((void *)(v52 + v53), 0, v35 - v53);
      v13[19] = v35;
      goto LABEL_36;
    }
  }
  return v4;
}
