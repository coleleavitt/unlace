unsigned __int64 __fastcall sub_7CBE80(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v4; // r12
  char *v5; // rbp
  __int64 v6; // r14
  void **v7; // r14
  bool v8; // zf
  const char *v9; // r12
  char *v10; // rax
  char *v11; // rbp
  __int16 v12; // r15
  char v13; // cl
  char *v14; // rdx
  __int64 v15; // rbx
  char *v16; // rax
  void *v17; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  char *v22; // rax
  const void *v23; // r15
  signed __int64 v24; // rax
  unsigned __int64 v25; // rbp
  size_t v26; // r12
  char *v27; // rax
  char *v28; // rdx
  unsigned __int64 v29; // r15
  __int64 v30; // r8
  const char *v31; // rsi
  void *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rbp
  char *v35; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm0
  __int64 v38; // r12
  char *v39; // rdi
  __int64 v40; // rbp
  char *v41; // rax
  void *v42; // rdi
  __int64 v43; // rax
  __m128i v44; // xmm0
  char *v45; // rdi
  __int64 v46; // rbx
  char *v47; // rdx
  void *v48; // rax
  __int64 v49; // rax
  __int64 v50; // [rsp+8h] [rbp-A0h]
  char *v51; // [rsp+8h] [rbp-A0h]
  void *v52; // [rsp+10h] [rbp-98h] BYREF
  __int128 v53; // [rsp+18h] [rbp-90h]
  void *v54; // [rsp+30h] [rbp-78h] BYREF
  __int128 v55; // [rsp+38h] [rbp-70h]
  char *endptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v57; // [rsp+58h] [rbp-50h]
  unsigned __int64 v58; // [rsp+68h] [rbp-40h]

  v58 = __readfsqword(0x28u);
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
    return v58 - __readfsqword(0x28u);
  v53 = 0;
  v52 = nullptr;
  sub_456FB0(a2, (__int64 *)&v52, "@", 0);
  v4 = v53;
  v5 = (char *)v52;
  if ( (unsigned __int64)v53 > 2 )
  {
    if ( !v52 )
      return v58 - __readfsqword(0x28u);
    goto LABEL_18;
  }
  v6 = 0;
  if ( (_QWORD)v53 == 2 )
  {
    if ( *((_QWORD *)v52 + 1) <= 1u )
      goto LABEL_16;
    v57 = 0;
    endptr = nullptr;
    sub_456FB0(v52, (__int64 *)&endptr, ":", 0);
    v34 = v57;
    v35 = endptr;
    if ( (unsigned __int64)v57 > 2 )
    {
      if ( endptr )
      {
        v46 = 0;
        do
        {
          v47 = &v35[24 * v46];
          v48 = *(void **)v47;
          if ( *(_QWORD *)v47 )
          {
            *((_QWORD *)v47 + 1) = 0;
            qfree(v48);
            v35 = endptr;
          }
          ++v46;
        }
        while ( v34 != v46 );
        *(_QWORD *)&v57 = 0;
        qfree(v35);
      }
      goto LABEL_15;
    }
    v36 = *(_QWORD *)(a1 + 32);
    v37 = _mm_loadu_si128((const __m128i *)(a1 + 40));
    *(_QWORD *)(a1 + 32) = *(_QWORD *)endptr;
    *(_QWORD *)(a1 + 40) = *((_QWORD *)v35 + 1);
    *(_QWORD *)(a1 + 48) = *((_QWORD *)v35 + 2);
    *(_QWORD *)v35 = v36;
    *(__m128i *)(v35 + 8) = v37;
    v38 = v57;
    v39 = endptr;
    if ( (_QWORD)v57 == 2 )
    {
      v43 = *(_QWORD *)(a1 + 56);
      v44 = _mm_loadu_si128((const __m128i *)(a1 + 64));
      *(_QWORD *)(a1 + 56) = *((_QWORD *)endptr + 3);
      *(_QWORD *)(a1 + 64) = *((_QWORD *)v39 + 4);
      *(_QWORD *)(a1 + 72) = *((_QWORD *)v39 + 5);
      *((_QWORD *)v39 + 3) = v43;
      *((__m128i *)v39 + 2) = v44;
      if ( !v39 )
        goto LABEL_59;
    }
    else
    {
      if ( !endptr )
      {
LABEL_59:
        v5 = (char *)v52;
        v6 = 24;
        goto LABEL_5;
      }
      if ( !(_QWORD)v57 )
      {
LABEL_58:
        *(_QWORD *)&v57 = 0;
        qfree(v39);
        goto LABEL_59;
      }
    }
    v40 = 0;
    do
    {
      v41 = &v39[24 * v40];
      v42 = *(void **)v41;
      if ( *(_QWORD *)v41 )
      {
        *((_QWORD *)v41 + 1) = 0;
        qfree(v42);
      }
      ++v40;
      v39 = endptr;
    }
    while ( v38 != v40 );
    goto LABEL_58;
  }
LABEL_5:
  v54 = nullptr;
  v7 = (void **)&v5[v6];
  v8 = v7[1] == nullptr;
  v55 = 0;
  if ( v8 )
  {
    v9 = haystack;
    goto LABEL_7;
  }
  v9 = (const char *)*v7;
  if ( *(_BYTE *)*v7 != 91 )
  {
    if ( !strncasecmp((const char *)*v7, "::ffff:", 7u) && strchr(v9, 46) )
      v9 += 7;
LABEL_7:
    v10 = strchr(v9, 58);
    if ( v10 )
      goto LABEL_8;
LABEL_48:
    v32 = *(void **)a1;
    v33 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    *(_QWORD *)a1 = *v7;
    *(_QWORD *)(a1 + 8) = v7[1];
    *(_QWORD *)(a1 + 16) = v7[2];
    *v7 = v32;
    *(__m128i *)(v7 + 1) = v33;
LABEL_13:
    if ( v54 )
      qfree(v54);
LABEL_15:
    v5 = (char *)v52;
    goto LABEL_16;
  }
  v22 = strchr((const char *)*v7, 93);
  if ( v22 )
  {
    v23 = v9 + 1;
    if ( v22 != v9 + 1 )
    {
      endptr = nullptr;
      v24 = v22 - v9;
      v25 = v24;
      v57 = 0;
      v26 = v24 - 1;
      if ( v24 == 1 )
      {
        v55 = 0u;
        v27 = (char *)v7[1];
        if ( !v27 )
          goto LABEL_48;
      }
      else
      {
        v45 = nullptr;
        if ( v24 )
        {
          endptr = (char *)qvector_reserve(&endptr, 0, v24, 1);
          v45 = endptr;
        }
        *(_QWORD *)&v57 = v25;
        memmove(v45, v23, v26);
        endptr[v25 - 1] = 0;
        v26 = v57;
        v54 = endptr;
        v55 = v57;
        v27 = (char *)v7[1];
        if ( !v27 )
          goto LABEL_46;
      }
      v28 = v27 - 1;
      if ( v27 == (_BYTE *)&dword_0 + 1 || !v25 )
        goto LABEL_45;
      v29 = 1;
      v30 = 0;
      if ( v25 < (unsigned __int64)v28 )
      {
        v51 = &v28[-v25];
        memmove(*v7, (char *)*v7 + v25, (size_t)&v28[-v25]);
        v30 = (__int64)v51;
        v29 = (unsigned __int64)(v51 + 1);
      }
      v31 = (const char *)*v7;
      if ( (unsigned __int64)v7[2] < v29 )
      {
        v50 = v30;
        v49 = qvector_reserve(v7, v31, v29, 1);
        *v7 = (void *)v49;
        v30 = v50;
        v31 = (const char *)v49;
      }
      v7[1] = (void *)v29;
      v31[v30] = 0;
      if ( v7[1] )
      {
LABEL_45:
        v10 = (char *)*v7;
        if ( *(_BYTE *)*v7 == 58 )
        {
          if ( v10 )
          {
            v9 = (const char *)*v7;
LABEL_8:
            v11 = v10 + 1;
            v12 = strtoul(v10 + 1, &endptr, 10);
            if ( v11 == endptr )
              goto LABEL_13;
            v13 = *endptr;
            if ( *endptr == 32 )
            {
              v14 = endptr + 1;
              do
              {
                endptr = v14;
                v13 = *v14++;
              }
              while ( v13 == 32 );
            }
            if ( v13 )
              goto LABEL_13;
            sub_3600E0((__int64 *)v7, v11 - v9 - 1);
            *(_WORD *)(a1 + 24) = v12;
            v26 = v55;
          }
        }
      }
LABEL_46:
      if ( v26 > 1 )
        v7 = &v54;
      goto LABEL_48;
    }
  }
LABEL_16:
  if ( v5 )
  {
    v4 = v53;
    if ( !(_QWORD)v53 )
    {
LABEL_22:
      *(_QWORD *)&v53 = 0;
      qfree(v5);
      return v58 - __readfsqword(0x28u);
    }
LABEL_18:
    v15 = 0;
    do
    {
      v16 = &v5[24 * v15];
      v17 = *(void **)v16;
      if ( *(_QWORD *)v16 )
      {
        *((_QWORD *)v16 + 1) = 0;
        qfree(v17);
        v5 = (char *)v52;
      }
      ++v15;
    }
    while ( v4 != v15 );
    goto LABEL_22;
  }
  return v58 - __readfsqword(0x28u);
}
