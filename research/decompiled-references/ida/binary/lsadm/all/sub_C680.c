unsigned __int64 __fastcall sub_C680(const char *src)
{
  size_t v1; // rax
  size_t v2; // r12
  size_t v3; // rbp
  __int64 v4; // r12
  char *v5; // rbp
  __int64 v6; // rbx
  void **v7; // rbx
  const char *v8; // r12
  char *v9; // rax
  char *v10; // rbp
  __int16 v11; // r14
  char v12; // dl
  char *v13; // rax
  __int64 v14; // rbx
  char *v15; // rax
  void *v16; // rdi
  char *v18; // rax
  const void *v19; // r14
  signed __int64 v20; // rax
  unsigned __int64 v21; // rbp
  size_t v22; // r12
  char *v23; // rax
  char *v24; // rdx
  unsigned __int64 v25; // r12
  char *v26; // r14
  const char *v27; // rsi
  void *v28; // rax
  __m128i si128; // xmm0
  __int64 v30; // rbp
  char *v31; // rdi
  void *v32; // rax
  __m128i v33; // xmm0
  __int64 v34; // rbp
  char *v35; // rdi
  __int64 v36; // rbx
  char *v37; // rax
  void *v38; // rdi
  void *v39; // rax
  __m128i v40; // xmm0
  char *v41; // rdi
  char *v42; // r15
  __int64 v43; // r14
  __int64 v44; // r12
  char *v45; // rdi
  _BYTE *v46; // rbp
  const char *v47; // rax
  _BYTE *v48; // rdx
  __int64 v49; // rbx
  char *v50; // rdx
  void *v51; // rax
  __int64 v52; // rax
  void *v53; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v54; // [rsp+8h] [rbp-B0h]
  void *v55; // [rsp+20h] [rbp-98h] BYREF
  __int128 v56; // [rsp+28h] [rbp-90h]
  void *v57; // [rsp+40h] [rbp-78h] BYREF
  __int128 v58; // [rsp+48h] [rbp-70h]
  char *endptr; // [rsp+60h] [rbp-58h] BYREF
  __int128 v60; // [rsp+68h] [rbp-50h]
  unsigned __int64 v61; // [rsp+78h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v53 = nullptr;
  v54 = 0;
  if ( src )
  {
    v1 = strlen(src);
    v2 = v1 + 1;
    v3 = v1;
    v53 = (void *)sub_29E60(&v53, 0, v1 + 1, 1);
    *(_QWORD *)&v54 = v2;
    memmove(v53, src, v3);
    *((_BYTE *)v53 + v3) = 0;
  }
  if ( ::src )
  {
    n = 0;
    j__free(::src);
    ::src = nullptr;
    *(&n + 1) = 0;
  }
  word_7A980 = 0;
  if ( qword_7A988 )
  {
    *(_QWORD *)&xmmword_7A990 = 0;
    j__free(qword_7A988);
    qword_7A988 = nullptr;
    *((_QWORD *)&xmmword_7A990 + 1) = 0;
  }
  if ( qword_7A9A0 )
  {
    *(_QWORD *)&xmmword_7A9A8 = 0;
    j__free(qword_7A9A0);
    qword_7A9A0 = nullptr;
    *((_QWORD *)&xmmword_7A9A8 + 1) = 0;
  }
  if ( (unsigned __int64)v54 > 1 )
  {
    v56 = 0;
    v55 = nullptr;
    sub_AFB0(&v53, (__int64 *)&v55, "@", 0);
    v4 = v56;
    v5 = (char *)v55;
    if ( (unsigned __int64)v56 <= 2 )
    {
      v6 = 0;
      if ( (_QWORD)v56 != 2 )
      {
LABEL_12:
        v57 = nullptr;
        v7 = (void **)&v5[v6];
        v58 = 0;
        if ( !v7[1] )
        {
          v8 = s1;
          goto LABEL_14;
        }
        v8 = (const char *)*v7;
        if ( *(_BYTE *)*v7 != 91 )
        {
          if ( !strncasecmp((const char *)*v7, "::ffff:", 7u) && strchr(v8, 46) )
            v8 += 7;
LABEL_14:
          v9 = strchr(v8, 58);
          if ( !v9 )
          {
LABEL_52:
            v28 = ::src;
            si128 = _mm_load_si128((const __m128i *)&n);
            ::src = *v7;
            *(_OWORD *)&n = *(_OWORD *)(v7 + 1);
            *v7 = v28;
            *(__m128i *)(v7 + 1) = si128;
LABEL_20:
            if ( v57 )
              j__free(v57);
LABEL_22:
            v5 = (char *)v55;
            goto LABEL_23;
          }
          goto LABEL_15;
        }
        v18 = strchr((const char *)*v7, 93);
        if ( v18 )
        {
          v19 = v8 + 1;
          if ( v18 != v8 + 1 )
          {
            endptr = nullptr;
            v20 = v18 - v8;
            v21 = v20;
            v60 = 0;
            v22 = v20 - 1;
            if ( v20 == 1 )
            {
              v58 = 0u;
            }
            else
            {
              v41 = nullptr;
              if ( v20 )
              {
                endptr = (char *)sub_29E60(&endptr, 0, v20, 1);
                v41 = endptr;
              }
              *(_QWORD *)&v60 = v21;
              memmove(v41, v19, v22);
              endptr[v21 - 1] = 0;
              v42 = endptr;
              v43 = v60;
              endptr = nullptr;
              v44 = *((_QWORD *)&v60 + 1);
              v60 = 0;
              if ( v57 )
              {
                *(_QWORD *)&v58 = 0;
                j__free(v57);
                v57 = v42;
                *(_QWORD *)&v58 = v43;
                *((_QWORD *)&v58 + 1) = v44;
                if ( endptr )
                {
                  *(_QWORD *)&v60 = 0;
                  j__free(endptr);
                }
              }
              else
              {
                v57 = v42;
                *(_QWORD *)&v58 = v43;
                *((_QWORD *)&v58 + 1) = v44;
              }
            }
            v23 = (char *)v7[1];
            if ( !v23 )
              goto LABEL_50;
            v24 = v23 - 1;
            if ( v23 != (_BYTE *)&dword_0 + 1 && v21 )
            {
              v25 = 1;
              v26 = nullptr;
              if ( v21 < (unsigned __int64)v24 )
              {
                v26 = &v24[-v21];
                v25 = (unsigned __int64)&v23[-v21];
                memmove(*v7, (char *)*v7 + v21, (size_t)&v24[-v21]);
              }
              v27 = (const char *)*v7;
              if ( (unsigned __int64)v7[2] < v25 )
              {
                v52 = sub_29E60(v7, v27, v25, 1);
                *v7 = (void *)v52;
                v27 = (const char *)v52;
              }
              v7[1] = (void *)v25;
              v26[(_QWORD)v27] = 0;
              if ( !v7[1] )
                goto LABEL_50;
            }
            v9 = (char *)*v7;
            if ( *(_BYTE *)*v7 != 58 || !v9 )
            {
LABEL_50:
              if ( (unsigned __int64)v58 > 1 )
                v7 = &v57;
              goto LABEL_52;
            }
            v8 = (const char *)*v7;
LABEL_15:
            v10 = v9 + 1;
            v11 = strtoul(v9 + 1, &endptr, 10);
            if ( v10 == endptr )
              goto LABEL_20;
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
              goto LABEL_20;
            v45 = (char *)*v7;
            v46 = (_BYTE *)(v10 - v8);
            v47 = (const char *)*v7;
            if ( v46 == (_BYTE *)&dword_0 + 1 )
            {
              if ( v45 )
              {
                v7[1] = nullptr;
                j__free(v45);
                *v7 = nullptr;
                v7[2] = nullptr;
              }
            }
            else
            {
              v48 = v7[1];
              if ( v48 < v46 )
              {
                if ( v7[2] < v46 )
                {
                  v47 = (const char *)sub_29E60(v7, *v7, v46, 1);
                  *v7 = (void *)v47;
                  v48 = v7[1];
                }
                memset(&v48[(_QWORD)v47], 0, v46 - v48);
                v7[1] = v46;
                v45 = (char *)*v7;
              }
              else if ( v48 != v46 )
              {
                v7[1] = v46;
              }
              v46[(_QWORD)v45 - 1] = 0;
            }
            word_7A980 = v11;
            goto LABEL_50;
          }
        }
LABEL_23:
        if ( !v5 )
          goto LABEL_30;
        v4 = v56;
        if ( !(_QWORD)v56 )
          goto LABEL_29;
        goto LABEL_25;
      }
      if ( *((_QWORD *)v55 + 1) <= 1u )
        goto LABEL_23;
      v60 = 0;
      endptr = nullptr;
      sub_AFB0(v55, (__int64 *)&endptr, ":", 0);
      v30 = v60;
      v31 = endptr;
      if ( (unsigned __int64)v60 > 2 )
      {
        if ( endptr )
        {
          v49 = 0;
          do
          {
            v50 = &v31[24 * v49];
            v51 = *(void **)v50;
            if ( *(_QWORD *)v50 )
            {
              *((_QWORD *)v50 + 1) = 0;
              j__free(v51);
              v31 = endptr;
            }
            ++v49;
          }
          while ( v30 != v49 );
          *(_QWORD *)&v60 = 0;
          j__free(v31);
        }
        goto LABEL_22;
      }
      v32 = qword_7A988;
      v33 = _mm_load_si128((const __m128i *)&xmmword_7A990);
      qword_7A988 = *(void **)endptr;
      xmmword_7A990 = *(_OWORD *)(endptr + 8);
      *(_QWORD *)endptr = v32;
      *(__m128i *)(v31 + 8) = v33;
      v34 = v60;
      v35 = endptr;
      if ( (_QWORD)v60 == 2 )
      {
        v39 = qword_7A9A0;
        v40 = _mm_loadu_si128((const __m128i *)&xmmword_7A9A8);
        qword_7A9A0 = *((void **)endptr + 3);
        xmmword_7A9A8 = *((_OWORD *)endptr + 2);
        *((_QWORD *)endptr + 3) = v39;
        *((__m128i *)v35 + 2) = v40;
        if ( !v35 )
          goto LABEL_63;
      }
      else
      {
        if ( !endptr )
        {
LABEL_63:
          v5 = (char *)v55;
          v6 = 24;
          goto LABEL_12;
        }
        if ( !(_QWORD)v60 )
        {
LABEL_62:
          *(_QWORD *)&v60 = 0;
          j__free(v35);
          goto LABEL_63;
        }
      }
      v36 = 0;
      do
      {
        v37 = &v35[24 * v36];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          j__free(v38);
        }
        ++v36;
        v35 = endptr;
      }
      while ( v34 != v36 );
      goto LABEL_62;
    }
    if ( v55 )
    {
LABEL_25:
      v14 = 0;
      do
      {
        v15 = &v5[24 * v14];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          j__free(v16);
          v5 = (char *)v55;
        }
        ++v14;
      }
      while ( v4 != v14 );
LABEL_29:
      *(_QWORD *)&v56 = 0;
      j__free(v5);
    }
  }
LABEL_30:
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    j__free(v53);
  }
  byte_7A94A = 1;
  return v61 - __readfsqword(0x28u);
}

