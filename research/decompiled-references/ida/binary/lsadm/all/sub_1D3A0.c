unsigned __int64 __fastcall sub_1D3A0(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // r12
  char *v5; // rbp
  __int64 v6; // r14
  void **v7; // r14
  const char *v8; // r12
  char *v9; // rax
  char *v10; // rbp
  __int16 v11; // r15
  char v12; // dl
  char *v13; // rax
  __int64 v14; // rbx
  char *v15; // rax
  void *v16; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  char *v21; // rax
  signed __int64 v22; // rax
  unsigned __int64 v23; // r8
  size_t v24; // rbp
  char *v25; // rax
  char *v26; // rdx
  unsigned __int64 v27; // rbp
  char *v28; // r12
  const char *v29; // rsi
  void *v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rbp
  char *v33; // rdi
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // r12
  char *v37; // rdi
  __int64 v38; // rbp
  char *v39; // rax
  void *v40; // rdi
  __int64 v41; // rax
  __m128i v42; // xmm0
  char *v43; // rdi
  char *v44; // r15
  __int64 v45; // r12
  __int64 v46; // rbp
  char *v47; // rdi
  _BYTE *v48; // rbp
  const char *v49; // rax
  _BYTE *v50; // rdx
  __int64 v51; // rbx
  char *v52; // rdx
  void *v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // [rsp+8h] [rbp-A0h]
  signed __int64 v56; // [rsp+8h] [rbp-A0h]
  void *v57; // [rsp+10h] [rbp-98h] BYREF
  __int128 v58; // [rsp+18h] [rbp-90h]
  void *v59; // [rsp+30h] [rbp-78h] BYREF
  __int128 v60; // [rsp+38h] [rbp-70h]
  char *endptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v62; // [rsp+58h] [rbp-50h]
  unsigned __int64 v63; // [rsp+68h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  if ( (a3 & 1) == 0 )
  {
    v18 = *(void **)a1;
    if ( v18 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      j__free(v18);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    v19 = *(void **)(a1 + 32);
    *(_WORD *)(a1 + 24) = 0;
    if ( v19 )
    {
      *(_QWORD *)(a1 + 40) = 0;
      j__free(v19);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
    }
    v20 = *(void **)(a1 + 56);
    if ( v20 )
    {
      *(_QWORD *)(a1 + 64) = 0;
      j__free(v20);
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 72) = 0;
    }
  }
  if ( a2[1] <= 1u )
    return v63 - __readfsqword(0x28u);
  v58 = 0;
  v57 = nullptr;
  sub_AFB0(a2, (__int64 *)&v57, "@", 0);
  v4 = v58;
  v5 = (char *)v57;
  if ( (unsigned __int64)v58 > 2 )
  {
    if ( !v57 )
      return v63 - __readfsqword(0x28u);
    goto LABEL_18;
  }
  v6 = 0;
  if ( (_QWORD)v58 != 2 )
    goto LABEL_5;
  if ( *((_QWORD *)v57 + 1) <= 1u )
    goto LABEL_16;
  v62 = 0;
  endptr = nullptr;
  sub_AFB0(v57, (__int64 *)&endptr, ":", 0);
  v32 = v62;
  v33 = endptr;
  if ( (unsigned __int64)v62 > 2 )
  {
    if ( endptr )
    {
      v51 = 0;
      do
      {
        v52 = &v33[24 * v51];
        v53 = *(void **)v52;
        if ( *(_QWORD *)v52 )
        {
          *((_QWORD *)v52 + 1) = 0;
          j__free(v53);
          v33 = endptr;
        }
        ++v51;
      }
      while ( v32 != v51 );
      *(_QWORD *)&v62 = 0;
      j__free(v33);
    }
    goto LABEL_15;
  }
  v34 = *(_QWORD *)(a1 + 32);
  v35 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  *(_QWORD *)(a1 + 32) = *(_QWORD *)endptr;
  *(_QWORD *)(a1 + 40) = *((_QWORD *)v33 + 1);
  *(_QWORD *)(a1 + 48) = *((_QWORD *)v33 + 2);
  *(_QWORD *)v33 = v34;
  *(__m128i *)(v33 + 8) = v35;
  v36 = v62;
  v37 = endptr;
  if ( (_QWORD)v62 == 2 )
  {
    v41 = *(_QWORD *)(a1 + 56);
    v42 = _mm_loadu_si128((const __m128i *)(a1 + 64));
    *(_QWORD *)(a1 + 56) = *((_QWORD *)endptr + 3);
    *(_QWORD *)(a1 + 64) = *((_QWORD *)v37 + 4);
    *(_QWORD *)(a1 + 72) = *((_QWORD *)v37 + 5);
    *((_QWORD *)v37 + 3) = v41;
    *((__m128i *)v37 + 2) = v42;
    if ( !v37 )
      goto LABEL_60;
    goto LABEL_55;
  }
  if ( endptr )
  {
    if ( !(_QWORD)v62 )
    {
LABEL_59:
      *(_QWORD *)&v62 = 0;
      j__free(v37);
      goto LABEL_60;
    }
LABEL_55:
    v38 = 0;
    do
    {
      v39 = &v37[24 * v38];
      v40 = *(void **)v39;
      if ( *(_QWORD *)v39 )
      {
        *((_QWORD *)v39 + 1) = 0;
        j__free(v40);
      }
      ++v38;
      v37 = endptr;
    }
    while ( v36 != v38 );
    goto LABEL_59;
  }
LABEL_60:
  v5 = (char *)v57;
  v6 = 24;
LABEL_5:
  v59 = nullptr;
  v7 = (void **)&v5[v6];
  v60 = 0;
  if ( !v7[1] )
  {
    v8 = s1;
    goto LABEL_7;
  }
  v8 = (const char *)*v7;
  if ( *(_BYTE *)*v7 != 91 )
  {
    if ( !strncasecmp((const char *)*v7, "::ffff:", 7u) && strchr(v8, 46) )
      v8 += 7;
LABEL_7:
    v9 = strchr(v8, 58);
    if ( !v9 )
    {
LABEL_49:
      v30 = *(void **)a1;
      v31 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      *(_QWORD *)a1 = *v7;
      *(_QWORD *)(a1 + 8) = v7[1];
      *(_QWORD *)(a1 + 16) = v7[2];
      *v7 = v30;
      *(__m128i *)(v7 + 1) = v31;
LABEL_13:
      if ( v59 )
        j__free(v59);
LABEL_15:
      v5 = (char *)v57;
      goto LABEL_16;
    }
    goto LABEL_8;
  }
  v21 = strchr((const char *)*v7, 93);
  if ( v21 && v21 != v8 + 1 )
  {
    endptr = nullptr;
    v22 = v21 - v8;
    v23 = v22;
    v62 = 0;
    v24 = v22 - 1;
    if ( v22 == 1 )
    {
      v60 = 0u;
    }
    else
    {
      v43 = nullptr;
      if ( v22 )
      {
        v56 = v22;
        endptr = (char *)sub_29E60(&endptr, 0, v22, 1);
        v23 = v56;
        v43 = endptr;
      }
      *(_QWORD *)&v62 = v23;
      v55 = v23;
      memmove(v43, v8 + 1, v24);
      v23 = v55;
      endptr[v55 - 1] = 0;
      v44 = endptr;
      v45 = v62;
      endptr = nullptr;
      v46 = *((_QWORD *)&v62 + 1);
      v62 = 0;
      if ( v59 )
      {
        *(_QWORD *)&v60 = 0;
        j__free(v59);
        v59 = v44;
        *(_QWORD *)&v60 = v45;
        v23 = v55;
        *((_QWORD *)&v60 + 1) = v46;
        if ( endptr )
        {
          *(_QWORD *)&v62 = 0;
          j__free(endptr);
          v23 = v55;
        }
      }
      else
      {
        v59 = v44;
        *(_QWORD *)&v60 = v45;
        *((_QWORD *)&v60 + 1) = v46;
      }
    }
    v25 = (char *)v7[1];
    if ( !v25 )
      goto LABEL_47;
    v26 = v25 - 1;
    if ( v25 != (_BYTE *)&dword_0 + 1 && v23 )
    {
      v27 = 1;
      v28 = nullptr;
      if ( v23 < (unsigned __int64)v26 )
      {
        v28 = &v26[-v23];
        v27 = (unsigned __int64)&v25[-v23];
        memmove(*v7, (char *)*v7 + v23, (size_t)&v26[-v23]);
      }
      v29 = (const char *)*v7;
      if ( (unsigned __int64)v7[2] < v27 )
      {
        v54 = sub_29E60(v7, v29, v27, 1);
        *v7 = (void *)v54;
        v29 = (const char *)v54;
      }
      v7[1] = (void *)v27;
      v28[(_QWORD)v29] = 0;
      if ( !v7[1] )
        goto LABEL_47;
    }
    v9 = (char *)*v7;
    if ( *(_BYTE *)*v7 != 58 || !v9 )
    {
LABEL_47:
      if ( (unsigned __int64)v60 > 1 )
        v7 = &v59;
      goto LABEL_49;
    }
    v8 = (const char *)*v7;
LABEL_8:
    v10 = v9 + 1;
    v11 = strtoul(v9 + 1, &endptr, 10);
    if ( v10 == endptr )
      goto LABEL_13;
    v12 = *endptr;
    if ( *endptr == 32 )
    {
      v13 = endptr + 1;
      do
      {
        endptr = v13;
        v12 = *v13++;
      }
      while ( v12 == 32 );
    }
    if ( v12 )
      goto LABEL_13;
    v47 = (char *)*v7;
    v48 = (_BYTE *)(v10 - v8);
    v49 = (const char *)*v7;
    if ( v48 == (_BYTE *)&dword_0 + 1 )
    {
      if ( v47 )
      {
        v7[1] = nullptr;
        j__free(v47);
        *v7 = nullptr;
        v7[2] = nullptr;
      }
    }
    else
    {
      v50 = v7[1];
      if ( v50 < v48 )
      {
        if ( v7[2] < v48 )
        {
          v49 = (const char *)sub_29E60(v7, *v7, v48, 1);
          *v7 = (void *)v49;
          v50 = v7[1];
        }
        memset(&v50[(_QWORD)v49], 0, v48 - v50);
        v7[1] = v48;
        v47 = (char *)*v7;
      }
      else if ( v50 != v48 )
      {
        v7[1] = v48;
      }
      v48[(_QWORD)v47 - 1] = 0;
    }
    *(_WORD *)(a1 + 24) = v11;
    goto LABEL_47;
  }
LABEL_16:
  if ( v5 )
  {
    v4 = v58;
    if ( !(_QWORD)v58 )
    {
LABEL_22:
      *(_QWORD *)&v58 = 0;
      j__free(v5);
      return v63 - __readfsqword(0x28u);
    }
LABEL_18:
    v14 = 0;
    do
    {
      v15 = &v5[24 * v14];
      v16 = *(void **)v15;
      if ( *(_QWORD *)v15 )
      {
        *((_QWORD *)v15 + 1) = 0;
        j__free(v16);
        v5 = (char *)v57;
      }
      ++v14;
    }
    while ( v4 != v14 );
    goto LABEL_22;
  }
  return v63 - __readfsqword(0x28u);
}

