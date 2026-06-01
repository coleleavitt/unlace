__int64 __fastcall sub_7C8940(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // r13
  char *v5; // rbp
  __int64 v6; // r13
  void **p_ptr; // r13
  const char *v8; // r14
  char *v9; // rax
  char *v10; // rbp
  __int16 v11; // r15
  char v12; // dl
  char *v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // rbx
  char *v16; // rax
  void *v17; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  char *v22; // rax
  signed __int64 v23; // rax
  unsigned __int64 v24; // r8
  size_t v25; // rbp
  char *v26; // rax
  char *v27; // rdx
  unsigned __int64 v28; // rbp
  char *v29; // r14
  const char *v30; // rsi
  void *v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rbp
  char *v34; // rdi
  __int64 v35; // rax
  __m128i v36; // xmm0
  __int64 v37; // r13
  char *v38; // rdi
  __int64 v39; // rbp
  char *v40; // rax
  void *v41; // rdi
  __int64 v42; // rbx
  char *v43; // rdx
  void *v44; // rax
  __int64 v45; // rax
  __m128i v46; // xmm0
  char *v47; // rdi
  char *v48; // r15
  __int64 v49; // r14
  __int64 v50; // rbp
  char *v51; // rdi
  _BYTE *v52; // rbp
  const char *v53; // rax
  _BYTE *v54; // rdx
  __int64 v55; // rax
  unsigned __int64 v56; // [rsp+8h] [rbp-A0h]
  signed __int64 v57; // [rsp+8h] [rbp-A0h]
  void *v58; // [rsp+10h] [rbp-98h] BYREF
  __int128 v59; // [rsp+18h] [rbp-90h]
  void *ptr; // [rsp+30h] [rbp-78h] BYREF
  __int128 v61; // [rsp+38h] [rbp-70h]
  char *endptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v63; // [rsp+58h] [rbp-50h]
  unsigned __int64 v64; // [rsp+68h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( (a3 & 1) == 0 )
  {
    v19 = *(void **)a1;
    if ( v19 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree(v19);
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    v20 = *(void **)(a1 + 32);
    *(_WORD *)(a1 + 24) = 0;
    if ( v20 )
    {
      *(_QWORD *)(a1 + 40) = 0;
      qfree(v20);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 48) = 0;
    }
    v21 = *(void **)(a1 + 56);
    if ( v21 )
    {
      *(_QWORD *)(a1 + 64) = 0;
      qfree(v21);
      *(_QWORD *)(a1 + 56) = 0;
      *(_QWORD *)(a1 + 72) = 0;
    }
  }
  if ( a2[1] <= 1u )
    return 0;
  v59 = 0;
  v58 = nullptr;
  sub_456FB0(a2, (__int64 *)&v58, "@", 0);
  v4 = v59;
  v5 = (char *)v58;
  if ( (unsigned __int64)v59 > 2 )
  {
    v14 = 0;
    if ( !v58 )
      return v14;
    goto LABEL_19;
  }
  v6 = 0;
  if ( (_QWORD)v59 == 2 )
  {
    if ( *((_QWORD *)v58 + 1) <= 1u )
      goto LABEL_70;
    v63 = 0;
    endptr = nullptr;
    sub_456FB0(v58, (__int64 *)&endptr, ":", 0);
    v33 = v63;
    v34 = endptr;
    if ( (unsigned __int64)v63 > 2 )
    {
      if ( endptr )
      {
        v42 = 0;
        do
        {
          v43 = &v34[24 * v42];
          v44 = *(void **)v43;
          if ( *(_QWORD *)v43 )
          {
            *((_QWORD *)v43 + 1) = 0;
            qfree(v44);
            v34 = endptr;
          }
          ++v42;
        }
        while ( v33 != v42 );
        *(_QWORD *)&v63 = 0;
        qfree(v34);
      }
      v5 = (char *)v58;
      goto LABEL_70;
    }
    v35 = *(_QWORD *)(a1 + 32);
    v36 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    *(_QWORD *)(a1 + 32) = *(_QWORD *)endptr;
    *(_QWORD *)(a1 + 40) = *((_QWORD *)v34 + 1);
    *(_QWORD *)(a1 + 48) = *((_QWORD *)v34 + 2);
    *(_QWORD *)v34 = v35;
    *(__m128i *)(v34 + 8) = v36;
    v37 = v63;
    v38 = endptr;
    if ( (_QWORD)v63 == 2 )
    {
      v45 = *(_QWORD *)(a1 + 56);
      v46 = _mm_loadu_si128((const __m128i *)(a1 + 64));
      *(_QWORD *)(a1 + 56) = *((_QWORD *)endptr + 3);
      *(_QWORD *)(a1 + 64) = *((_QWORD *)v38 + 4);
      *(_QWORD *)(a1 + 72) = *((_QWORD *)v38 + 5);
      *((_QWORD *)v38 + 3) = v45;
      *((__m128i *)v38 + 2) = v46;
      if ( !v38 )
        goto LABEL_62;
    }
    else
    {
      if ( !endptr )
      {
LABEL_62:
        v5 = (char *)v58;
        v6 = 24;
        goto LABEL_5;
      }
      if ( !(_QWORD)v63 )
      {
LABEL_61:
        *(_QWORD *)&v63 = 0;
        qfree(v38);
        goto LABEL_62;
      }
    }
    v39 = 0;
    do
    {
      v40 = &v38[24 * v39];
      v41 = *(void **)v40;
      if ( *(_QWORD *)v40 )
      {
        *((_QWORD *)v40 + 1) = 0;
        qfree(v41);
      }
      ++v39;
      v38 = endptr;
    }
    while ( v37 != v39 );
    goto LABEL_61;
  }
LABEL_5:
  ptr = nullptr;
  p_ptr = (void **)&v5[v6];
  v61 = 0;
  if ( !p_ptr[1] )
  {
    v8 = haystack;
    goto LABEL_7;
  }
  v8 = (const char *)*p_ptr;
  if ( *(_BYTE *)*p_ptr != 91 )
  {
    if ( !strncasecmp((const char *)*p_ptr, "::ffff:", 7u) && strchr(v8, 46) )
      v8 += 7;
LABEL_7:
    v9 = strchr(v8, 58);
    if ( !v9 )
    {
LABEL_51:
      v31 = *(void **)a1;
      v14 = 1;
      v32 = _mm_loadu_si128((const __m128i *)(a1 + 8));
      *(_QWORD *)a1 = *p_ptr;
      *(_QWORD *)(a1 + 8) = p_ptr[1];
      *(_QWORD *)(a1 + 16) = p_ptr[2];
      *p_ptr = v31;
      *(__m128i *)(p_ptr + 1) = v32;
      goto LABEL_14;
    }
    goto LABEL_8;
  }
  v22 = strchr((const char *)*p_ptr, 93);
  if ( !v22 || v8 + 1 == v22 )
  {
LABEL_70:
    v14 = 0;
    goto LABEL_17;
  }
  endptr = nullptr;
  v23 = v22 - v8;
  v24 = v23;
  v63 = 0;
  v25 = v23 - 1;
  if ( v23 == 1 )
  {
    v61 = 0u;
  }
  else
  {
    v47 = nullptr;
    if ( v23 )
    {
      v57 = v23;
      endptr = (char *)qvector_reserve(&endptr, 0, v23, 1);
      v24 = v57;
      v47 = endptr;
    }
    *(_QWORD *)&v63 = v24;
    v56 = v24;
    memmove(v47, v8 + 1, v25);
    v24 = v56;
    endptr[v56 - 1] = 0;
    v48 = endptr;
    v49 = v63;
    endptr = nullptr;
    v50 = *((_QWORD *)&v63 + 1);
    v63 = 0;
    if ( ptr )
    {
      *(_QWORD *)&v61 = 0;
      qfree(ptr);
      ptr = v48;
      *(_QWORD *)&v61 = v49;
      v24 = v56;
      *((_QWORD *)&v61 + 1) = v50;
      if ( endptr )
      {
        *(_QWORD *)&v63 = 0;
        qfree(endptr);
        v24 = v56;
      }
    }
    else
    {
      ptr = v48;
      *(_QWORD *)&v61 = v49;
      *((_QWORD *)&v61 + 1) = v50;
    }
  }
  v26 = (char *)p_ptr[1];
  if ( !v26 )
    goto LABEL_49;
  v27 = v26 - 1;
  if ( v26 != (_BYTE *)&dword_0 + 1 && v24 )
  {
    v28 = 1;
    v29 = nullptr;
    if ( v24 < (unsigned __int64)v27 )
    {
      v29 = &v27[-v24];
      v28 = (unsigned __int64)&v26[-v24];
      memmove(*p_ptr, (char *)*p_ptr + v24, (size_t)&v27[-v24]);
    }
    v30 = (const char *)*p_ptr;
    if ( (unsigned __int64)p_ptr[2] < v28 )
    {
      v55 = qvector_reserve(p_ptr, v30, v28, 1);
      *p_ptr = (void *)v55;
      v30 = (const char *)v55;
    }
    p_ptr[1] = (void *)v28;
    v29[(_QWORD)v30] = 0;
    if ( !p_ptr[1] )
      goto LABEL_49;
  }
  v8 = (const char *)*p_ptr;
  if ( *(_BYTE *)*p_ptr != 58 || !v8 )
    goto LABEL_49;
  v9 = (char *)*p_ptr;
LABEL_8:
  v10 = v9 + 1;
  v11 = strtoul(v9 + 1, &endptr, 10);
  if ( endptr != v10 )
  {
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
    if ( !v12 )
    {
      v51 = (char *)*p_ptr;
      v52 = (_BYTE *)(v10 - v8);
      v53 = (const char *)*p_ptr;
      if ( v52 == (_BYTE *)&dword_0 + 1 )
      {
        if ( v51 )
        {
          p_ptr[1] = nullptr;
          qfree(v51);
          *p_ptr = nullptr;
          p_ptr[2] = nullptr;
        }
      }
      else
      {
        v54 = p_ptr[1];
        if ( v54 < v52 )
        {
          if ( p_ptr[2] < v52 )
          {
            v53 = (const char *)qvector_reserve(p_ptr, *p_ptr, v52, 1);
            *p_ptr = (void *)v53;
            v54 = p_ptr[1];
          }
          memset(&v54[(_QWORD)v53], 0, v52 - v54);
          p_ptr[1] = v52;
          v51 = (char *)*p_ptr;
        }
        else if ( v54 != v52 )
        {
          p_ptr[1] = v52;
        }
        v52[(_QWORD)v51 - 1] = 0;
      }
      *(_WORD *)(a1 + 24) = v11;
LABEL_49:
      if ( (unsigned __int64)v61 > 1 )
        p_ptr = &ptr;
      goto LABEL_51;
    }
  }
  v14 = 0;
LABEL_14:
  if ( ptr )
    qfree(ptr);
  v5 = (char *)v58;
LABEL_17:
  if ( v5 )
  {
    v4 = v59;
    if ( !(_QWORD)v59 )
    {
LABEL_23:
      *(_QWORD *)&v59 = 0;
      qfree(v5);
      return v14;
    }
LABEL_19:
    v15 = 0;
    do
    {
      v16 = &v5[24 * v15];
      v17 = *(void **)v16;
      if ( *(_QWORD *)v16 )
      {
        *((_QWORD *)v16 + 1) = 0;
        qfree(v17);
        v5 = (char *)v58;
      }
      ++v15;
    }
    while ( v15 != v4 );
    goto LABEL_23;
  }
  return v14;
}
