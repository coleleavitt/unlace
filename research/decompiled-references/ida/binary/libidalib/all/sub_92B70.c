__int64 __fastcall sub_92B70(__int64 a1)
{
  unsigned __int64 v2; // r12
  __int64 v3; // r14
  unsigned int v4; // ebx
  unsigned __int64 v5; // r15
  const char *v6; // rdi
  __int64 v7; // r13
  const void *v8; // r14
  __int64 v9; // r12
  size_t v10; // rax
  size_t v11; // r13
  const void *v12; // r14
  size_t v13; // rax
  size_t v14; // r13
  const void *v15; // r14
  size_t v16; // rax
  size_t v17; // r13
  const void *v18; // r14
  size_t v19; // rax
  size_t v20; // r13
  const void *v21; // r14
  size_t v22; // rax
  size_t v23; // r13
  const void *v24; // r14
  size_t v25; // rax
  size_t v26; // r13
  const void *v27; // r14
  size_t v28; // rbp
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // r15
  __int64 v32; // r13
  __int64 v33; // r14
  unsigned __int64 v34; // rax
  void *v35; // rdi
  size_t v36; // r15
  void *v37; // rdi
  size_t v38; // r15
  void *v39; // rdi
  size_t v40; // r15
  void *v41; // rdi
  size_t v42; // r15
  void *v43; // rdi
  size_t v44; // r15
  void *v45; // rdi
  size_t v46; // r15
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r12
  char *v57; // rax
  __int64 v58; // r13
  __int64 v59; // r15
  __int64 v60; // rdx
  __m128i v61; // xmm0
  __int64 v62; // rdx
  __m128i v63; // xmm0
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __int64 v66; // rdx
  __m128i v67; // xmm0
  __int64 v68; // rdx
  __m128i v69; // xmm0
  __int64 v70; // rdx
  __m128i v71; // xmm0
  __int64 v72; // rdx
  __m128i v73; // xmm0
  __int64 v74; // rdi
  __int64 v76; // rax
  char *s2; // [rsp+8h] [rbp-40h]
  char *s2a; // [rsp+8h] [rbp-40h]

  if ( !a1 || *(_QWORD *)a1 != 72 )
    return (unsigned int)-1;
  v2 = xmmword_2518A8;
  if ( !(_QWORD)xmmword_2518A8 )
    goto LABEL_38;
  v3 = qword_2518A0;
  v4 = 0;
  v5 = 0;
  s2 = *(char **)(a1 + 8);
  while ( 1 )
  {
    v6 = s1;
    v7 = v3 + 168 * v5;
    if ( *(_QWORD *)(v7 + 8) )
      v6 = *(const char **)v7;
    if ( !strcmp(v6, s2) )
      break;
    v5 = (int)++v4;
    if ( (int)v4 >= v2 )
      goto LABEL_38;
  }
  if ( *(_QWORD *)(v7 + 144) )
  {
    *(_QWORD *)(v7 + 152) = 0;
    qfree();
    v2 = xmmword_2518A8;
    *(_QWORD *)(v7 + 144) = 0;
    *(_QWORD *)(v7 + 160) = 0;
  }
  if ( v5 >= v2 )
  {
LABEL_38:
    v32 = *((_QWORD *)&xmmword_2518A8 + 1);
    v4 = v2;
    if ( *((_QWORD *)&xmmword_2518A8 + 1) < v2 + 1 )
    {
      v55 = qvector_reserve();
      v56 = qword_2518A0;
      v33 = v55;
      v57 = *((char **)&xmmword_2518A8 + 1);
      *((_QWORD *)&xmmword_2518A8 + 1) = v32;
      s2a = v57;
      v58 = xmmword_2518A8 - 1;
      if ( (__int64)xmmword_2518A8 - 1 >= 0 )
      {
        v59 = v33;
        do
        {
          v60 = *(_QWORD *)v56;
          v61 = _mm_loadu_si128((const __m128i *)(v56 + 8));
          *(_QWORD *)v56 = 0;
          *(_OWORD *)(v56 + 8) = 0;
          *(_QWORD *)v59 = v60;
          *(__m128i *)(v59 + 8) = v61;
          v62 = *(_QWORD *)(v56 + 24);
          v63 = _mm_loadu_si128((const __m128i *)(v56 + 32));
          *(_QWORD *)(v56 + 24) = 0;
          *(_QWORD *)(v59 + 24) = v62;
          *(__m128i *)(v59 + 32) = v63;
          v64 = *(_QWORD *)(v56 + 48);
          v65 = _mm_loadu_si128((const __m128i *)(v56 + 56));
          *(_OWORD *)(v56 + 32) = 0;
          *(_QWORD *)(v59 + 48) = v64;
          *(__m128i *)(v59 + 56) = v65;
          v66 = *(_QWORD *)(v56 + 72);
          v67 = _mm_loadu_si128((const __m128i *)(v56 + 80));
          *(_QWORD *)(v56 + 48) = 0;
          *(_OWORD *)(v56 + 56) = 0;
          *(_QWORD *)(v59 + 72) = v66;
          *(__m128i *)(v59 + 80) = v67;
          v68 = *(_QWORD *)(v56 + 96);
          v69 = _mm_loadu_si128((const __m128i *)(v56 + 104));
          *(_QWORD *)(v56 + 72) = 0;
          *(_OWORD *)(v56 + 80) = 0;
          *(__m128i *)(v59 + 104) = v69;
          *(_QWORD *)(v59 + 96) = v68;
          v70 = *(_QWORD *)(v56 + 120);
          *(_QWORD *)(v56 + 96) = 0;
          *(_OWORD *)(v56 + 104) = 0;
          *(_QWORD *)(v59 + 120) = v70;
          *(_QWORD *)(v56 + 120) = 0;
          v71 = _mm_loadu_si128((const __m128i *)(v56 + 128));
          *(_OWORD *)(v56 + 128) = 0;
          *(__m128i *)(v59 + 128) = v71;
          v72 = *(_QWORD *)(v56 + 144);
          v73 = _mm_loadu_si128((const __m128i *)(v56 + 152));
          *(_QWORD *)(v56 + 144) = 0;
          *(_QWORD *)(v59 + 144) = v72;
          *(__m128i *)(v59 + 152) = v73;
          v74 = *(_QWORD *)(v56 + 120);
          *(_QWORD *)(v56 + 160) = 0;
          if ( v74 )
          {
            *(_QWORD *)(v56 + 128) = 0;
            qfree();
          }
          if ( *(_QWORD *)(v56 + 96) )
          {
            *(_QWORD *)(v56 + 104) = 0;
            qfree();
          }
          if ( *(_QWORD *)(v56 + 72) )
          {
            *(_QWORD *)(v56 + 80) = 0;
            qfree();
          }
          if ( *(_QWORD *)(v56 + 48) )
          {
            *(_QWORD *)(v56 + 56) = 0;
            qfree();
          }
          if ( *(_QWORD *)(v56 + 24) )
          {
            *(_QWORD *)(v56 + 32) = 0;
            qfree();
          }
          if ( *(_QWORD *)v56 )
          {
            *(_QWORD *)(v56 + 8) = 0;
            qfree();
          }
          v56 += 168;
          v59 += 168;
        }
        while ( v58-- != 0 );
      }
      qfree();
      qword_2518A0 = v33;
      v2 = xmmword_2518A8;
      *((_QWORD *)&xmmword_2518A8 + 1) = s2a;
    }
    else
    {
      v33 = qword_2518A0;
    }
    v34 = v33 + 168 * v2;
    *(_QWORD *)v34 = 0;
    *(_OWORD *)(v34 + 8) = 0;
    *(_QWORD *)(v34 + 24) = 0;
    *(_QWORD *)&xmmword_2518A8 = xmmword_2518A8 + 1;
    *(_QWORD *)(v34 + 48) = 0;
    *(_QWORD *)(v34 + 72) = 0;
    *(_QWORD *)(v34 + 96) = 0;
    *(_QWORD *)(v34 + 120) = 0;
    *(_QWORD *)(v34 + 144) = 0;
    *(_OWORD *)(v34 + 32) = 0;
    *(_OWORD *)(v34 + 56) = 0;
    *(_OWORD *)(v34 + 80) = 0;
    *(_OWORD *)(v34 + 104) = 0;
    *(_OWORD *)(v34 + 128) = 0;
    *(_OWORD *)(v34 + 152) = 0;
  }
  v8 = *(const void **)(a1 + 8);
  v9 = qword_2518A0 + 168LL * (int)v4;
  if ( v8 && (v10 = strlen(*(const char **)(a1 + 8)), (v11 = v10) != 0) )
  {
    v35 = *(void **)v9;
    v36 = v10 + 1;
    if ( *(_QWORD *)(v9 + 16) < v10 + 1 )
    {
      v54 = qvector_reserve();
      *(_QWORD *)v9 = v54;
      v35 = (void *)v54;
    }
    *(_QWORD *)(v9 + 8) = v36;
    memmove(v35, v8, v11);
    *(_BYTE *)(*(_QWORD *)v9 + v11) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 8) = 0;
  }
  v12 = *(const void **)(a1 + 16);
  if ( v12 && (v13 = strlen(*(const char **)(a1 + 16)), (v14 = v13) != 0) )
  {
    v37 = *(void **)(v9 + 24);
    v38 = v13 + 1;
    if ( *(_QWORD *)(v9 + 40) < v13 + 1 )
    {
      v53 = qvector_reserve();
      *(_QWORD *)(v9 + 24) = v53;
      v37 = (void *)v53;
    }
    *(_QWORD *)(v9 + 32) = v38;
    memmove(v37, v12, v14);
    *(_BYTE *)(*(_QWORD *)(v9 + 24) + v14) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 32) = 0;
  }
  v15 = *(const void **)(a1 + 24);
  if ( v15 && (v16 = strlen(*(const char **)(a1 + 24)), (v17 = v16) != 0) )
  {
    v39 = *(void **)(v9 + 48);
    v40 = v16 + 1;
    if ( *(_QWORD *)(v9 + 64) < v16 + 1 )
    {
      v52 = qvector_reserve();
      *(_QWORD *)(v9 + 48) = v52;
      v39 = (void *)v52;
    }
    *(_QWORD *)(v9 + 56) = v40;
    memmove(v39, v15, v17);
    *(_BYTE *)(*(_QWORD *)(v9 + 48) + v17) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 56) = 0;
  }
  v18 = *(const void **)(a1 + 32);
  if ( v18 && (v19 = strlen(*(const char **)(a1 + 32)), (v20 = v19) != 0) )
  {
    v41 = *(void **)(v9 + 72);
    v42 = v19 + 1;
    if ( *(_QWORD *)(v9 + 88) < v19 + 1 )
    {
      v51 = qvector_reserve();
      *(_QWORD *)(v9 + 72) = v51;
      v41 = (void *)v51;
    }
    *(_QWORD *)(v9 + 80) = v42;
    memmove(v41, v18, v20);
    *(_BYTE *)(*(_QWORD *)(v9 + 72) + v20) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 80) = 0;
  }
  v21 = *(const void **)(a1 + 40);
  if ( v21 && (v22 = strlen(*(const char **)(a1 + 40)), (v23 = v22) != 0) )
  {
    v43 = *(void **)(v9 + 96);
    v44 = v22 + 1;
    if ( *(_QWORD *)(v9 + 112) < v22 + 1 )
    {
      v50 = qvector_reserve();
      *(_QWORD *)(v9 + 96) = v50;
      v43 = (void *)v50;
    }
    *(_QWORD *)(v9 + 104) = v44;
    memmove(v43, v21, v23);
    *(_BYTE *)(*(_QWORD *)(v9 + 96) + v23) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 104) = 0;
  }
  v24 = *(const void **)(a1 + 48);
  if ( v24 && (v25 = strlen(*(const char **)(a1 + 48)), (v26 = v25) != 0) )
  {
    v45 = *(void **)(v9 + 120);
    v46 = v25 + 1;
    if ( *(_QWORD *)(v9 + 136) < v25 + 1 )
    {
      v49 = qvector_reserve();
      *(_QWORD *)(v9 + 120) = v49;
      v45 = (void *)v49;
    }
    *(_QWORD *)(v9 + 128) = v46;
    memmove(v45, v24, v26);
    *(_BYTE *)(*(_QWORD *)(v9 + 120) + v26) = 0;
  }
  else
  {
    *(_QWORD *)(v9 + 128) = 0;
  }
  v27 = *(const void **)(a1 + 56);
  if ( v27 )
  {
    v28 = *(_QWORD *)(a1 + 64);
    if ( v28 )
    {
      v29 = *(_QWORD *)(v9 + 152);
      v30 = v29 + v28;
      if ( __CFADD__(v29, v28) )
      {
        if ( v29 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v29 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)(v9 + 152) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_36:
          memcpy((void *)(v29 + *(_QWORD *)(v9 + 144)), v27, v28);
          return v4;
        }
        v30 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v47 = *(_QWORD *)(v9 + 144);
      v48 = *(_QWORD *)(v9 + 152);
      if ( *(_QWORD *)(v9 + 160) < v30 )
      {
        v76 = qvector_reserve();
        *(_QWORD *)(v9 + 144) = v76;
        v47 = v76;
        v48 = *(_QWORD *)(v9 + 152);
      }
      memset((void *)(v47 + v48), 0, v30 - v48);
      *(_QWORD *)(v9 + 152) = v30;
      goto LABEL_36;
    }
  }
  return v4;
}

