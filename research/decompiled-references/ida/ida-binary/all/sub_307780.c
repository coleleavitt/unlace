unsigned __int64 __fastcall sub_307780(__int64 a1, __int64 a2)
{
  size_t v2; // rbx
  char *v3; // rsi
  char *v4; // rbp
  const char *v5; // rdi
  const char *v6; // rax
  const char *v7; // rbx
  size_t v8; // rax
  size_t v9; // rbp
  const char *v10; // rdx
  size_t v11; // rax
  size_t v12; // rbx
  size_t v13; // rbx
  size_t v14; // r13
  size_t v15; // rbp
  char *v16; // r14
  _BYTE *v17; // rsi
  _BYTE *v18; // rsi
  __int64 v19; // rbx
  size_t v20; // rbp
  __int64 v21; // r12
  char *v22; // rax
  unsigned __int64 v23; // rbx
  _BYTE *v24; // rbp
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r12
  __int64 v27; // r13
  char *v28; // rbx
  char *v29; // rax
  const void *v30; // rsi
  char *v31; // rax
  const char *v32; // rbx
  const char *v33; // rbx
  size_t v34; // rax
  double v35; // xmm0_8
  __int64 v36; // rdx
  size_t v38; // rax
  unsigned __int64 v39; // rbx
  void *v40; // rdi
  const void *v41; // r12
  char *v42; // r13
  size_t v43; // r12
  size_t v44; // rbx
  size_t v45; // r14
  unsigned __int64 v46; // rbp
  _BYTE *v47; // rsi
  char *v48; // rax
  unsigned __int64 v49; // r12
  unsigned __int64 v50; // r12
  void *v51; // rdi
  size_t v52; // r12
  void *v53; // rdi
  size_t v54; // r12
  __int64 v55; // [rsp+0h] [rbp-10A8h] BYREF
  __int64 v56; // [rsp+8h] [rbp-10A0h] BYREF
  char *haystack; // [rsp+10h] [rbp-1098h] BYREF
  size_t n[3]; // [rsp+18h] [rbp-1090h] BYREF
  void *src; // [rsp+30h] [rbp-1078h] BYREF
  __m128 v60; // [rsp+38h] [rbp-1070h]
  void *ptr[4]; // [rsp+50h] [rbp-1058h] BYREF
  char s[4104]; // [rsp+70h] [rbp-1038h] BYREF
  unsigned __int64 v63; // [rsp+1078h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 8);
  v63 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  haystack = nullptr;
  if ( !v2 )
  {
    v3 = nullptr;
    goto LABEL_3;
  }
  v29 = (char *)qalloc_or_throw(v2);
  v30 = *(const void **)a2;
  n[1] = v2;
  haystack = v29;
  memcpy(v29, v30, v2);
  n[0] = v2;
  if ( v2 == 1 )
  {
    v3 = haystack;
LABEL_3:
    haystack = (char *)qvector_reserve(&haystack, v3, 12, 1);
    n[0] = 12;
    strcpy(haystack, "/user-guide");
    v4 = haystack;
    src = nullptr;
    v60 = 0;
    if ( !n[0] )
      goto LABEL_4;
    goto LABEL_26;
  }
  src = nullptr;
  v4 = haystack;
  v60 = 0;
LABEL_26:
  v31 = strstr(v4, "://");
  if ( v31 && v31 - v4 != -1 )
  {
    src = v4;
    haystack = nullptr;
    v60 = _mm_loadh_ps((const double *)&n[1]);
    *(_OWORD *)n = 0;
    goto LABEL_29;
  }
LABEL_4:
  if ( !(unsigned __int8)QT::QAction::isChecked(unk_8CA690) )
  {
    v5 = &s1;
    if ( unk_8D0AE8 )
      v5 = (const char *)unk_8D0AE0;
    v6 = (const char *)idadir(v5);
    v7 = v6;
    if ( v6 && (v8 = strlen(v6), (v9 = v8) != 0) )
    {
      v53 = src;
      v54 = v8 + 1;
      if ( v60.m128_u64[1] < v8 + 1 )
      {
        src = (void *)qvector_reserve(&src, src, v54, 1);
        v53 = src;
      }
      v60.m128_u64[0] = v54;
      memmove(v53, v7, v9);
      *((_BYTE *)src + v9) = 0;
      if ( v60.m128_u64[0] )
      {
        v10 = (const char *)src;
LABEL_11:
        qmake_full_path(s, 4096, v10);
        v11 = strlen(s);
        v12 = v11;
        if ( v11 )
        {
          v51 = src;
          v52 = v11 + 1;
          if ( v60.m128_u64[1] < v11 + 1 )
          {
            src = (void *)qvector_reserve(&src, src, v52, 1);
            v51 = src;
          }
          v60.m128_u64[0] = v52;
          v16 = (char *)&s1;
          memmove(v51, s, v12);
          *((_BYTE *)src + v12) = 0;
          v14 = n[0];
          v13 = v60.m128_u64[0];
          if ( n[0] )
          {
            v16 = haystack;
            v14 = n[0] - 1;
          }
          if ( v60.m128_u64[0] )
          {
            v13 = v60.m128_u64[0] - 1;
            v15 = v60.m128_u64[0] - 1 + v14;
          }
          else
          {
            v15 = v14;
          }
        }
        else
        {
          v60.m128_u64[0] = 0;
          v13 = n[0];
          if ( n[0] )
          {
            v15 = n[0] - 1;
            v16 = haystack;
            v13 = 0;
            v14 = n[0] - 1;
          }
          else
          {
            v14 = 0;
            v15 = 0;
            v16 = (char *)&s1;
          }
        }
        v17 = src;
        if ( v60.m128_u64[1] < v15 + 1 )
        {
          src = (void *)qvector_reserve(&src, src, v15 + 1, 1);
          v17 = src;
        }
        v60.m128_u64[0] = v15 + 1;
        v17[v15] = 0;
        memmove((char *)src + v13, v16, v14);
        v18 = src;
        if ( v60.m128_u64[0] )
        {
          v19 = v60.m128_u64[0] + 7;
          v20 = v60.m128_u64[0] - 1;
          v21 = v60.m128_u64[0] + 6;
          if ( v60.m128_u64[1] >= v60.m128_u64[0] + 7 )
            goto LABEL_18;
        }
        else
        {
          if ( v60.m128_u64[1] > 7 )
          {
            v60.m128_u64[0] = 8;
            *((_BYTE *)src + 7) = 0;
            goto LABEL_20;
          }
          v20 = 0;
          v19 = 8;
          v21 = 7;
        }
        src = (void *)qvector_reserve(&src, src, v19, 1);
        v18 = src;
LABEL_18:
        v60.m128_u64[0] = v19;
        v18[v21] = 0;
        if ( v20 )
          memmove((char *)src + 7, src, v20);
LABEL_20:
        v22 = (char *)src;
        *(_DWORD *)src = 1701603686;
        *(_DWORD *)(v22 + 3) = 791624293;
        v23 = v60.m128_u64[0];
        v24 = src;
        if ( !v60.m128_u64[0] )
        {
          v25 = v60.m128_u64[1];
          v26 = 6;
          v27 = 5;
          goto LABEL_22;
        }
        v48 = strchr((const char *)src, 35);
        if ( v48 )
        {
          v25 = v48 - v24;
          if ( v48 - v24 != -1 )
          {
            if ( v25 )
            {
              v49 = v25 + 1;
              if ( v23 < v25 + 1 )
              {
                if ( v60.m128_u64[1] < v49 )
                {
                  src = (void *)qvector_reserve(&src, v24, v25 + 1, 1);
                  v23 = v60.m128_u64[0];
                  v24 = src;
                }
                memset(&v24[v23], 0, v49 - v23);
                v60.m128_u64[0] = v25 + 1;
                v48 = (char *)src + v25;
              }
              else if ( v23 != v25 + 1 )
              {
                v60.m128_u64[0] = v25 + 1;
              }
              *v48 = 0;
              v50 = v60.m128_u64[0];
              v24 = src;
              v25 = v60.m128_u64[1];
              if ( !v60.m128_u64[0] )
              {
                v23 = 0;
                v26 = 6;
                v27 = 5;
LABEL_22:
                if ( v25 >= v26 )
                {
LABEL_23:
                  v60.m128_u64[0] = v26;
                  v24[v27] = 0;
                  v28 = (char *)src + v23;
                  *(_DWORD *)v28 = 1836345390;
                  v28[4] = 108;
                  goto LABEL_29;
                }
LABEL_66:
                src = (void *)qvector_reserve(&src, v24, v26, 1);
                v24 = src;
                goto LABEL_23;
              }
LABEL_73:
              v23 = v50 - 1;
              v27 = v50 + 4;
              v26 = v50 + 5;
              goto LABEL_22;
            }
            if ( v24 )
            {
              v60.m128_u64[0] = 0;
              qfree(v24, (_BYTE *)&qword_20 + 3);
              src = nullptr;
              v23 = v60.m128_u64[0];
              v60.m128_u64[1] = 0;
              if ( !v60.m128_u64[0] )
              {
                v24 = nullptr;
                v26 = 6;
                v27 = 5;
                goto LABEL_66;
              }
              v50 = v60.m128_u64[0];
              v24 = nullptr;
              goto LABEL_73;
            }
          }
        }
        v25 = v60.m128_u64[1];
        v50 = v23;
        goto LABEL_73;
      }
    }
    else
    {
      v60.m128_u64[0] = 0;
    }
    v10 = &s1;
    goto LABEL_11;
  }
  v39 = unk_8D0B08;
  if ( unk_8D0B08 >= 2u )
  {
    v40 = src;
    v41 = (const void *)unk_8D0B00;
    if ( v60.m128_u64[1] < unk_8D0B08 )
    {
      src = (void *)qvector_reserve(&src, src, unk_8D0B08, 1);
      v40 = src;
    }
    v60.m128_u64[0] = v39;
    v42 = (char *)&s1;
    memmove(v40, v41, v39 - 1);
    *((char *)src + v39 - 1) = 0;
    v43 = n[0];
    if ( n[0] )
    {
      v42 = haystack;
      v43 = n[0] - 1;
    }
    v44 = v60.m128_u64[0] - 1;
    v45 = v60.m128_u64[0] - 1 + v43;
    v46 = v60.m128_u64[0] + v43;
    if ( v60.m128_u64[0] )
      goto LABEL_50;
    goto LABEL_57;
  }
  v60.m128_u64[0] = 0;
  v44 = n[0];
  if ( n[0] )
  {
    v42 = haystack;
    v43 = n[0] - 1;
LABEL_57:
    v46 = v43 + 1;
    v45 = v43;
    v44 = 0;
    goto LABEL_50;
  }
  v45 = 0;
  v43 = 0;
  v46 = 1;
  v42 = (char *)&s1;
LABEL_50:
  v47 = src;
  if ( v60.m128_u64[1] < v46 )
  {
    src = (void *)qvector_reserve(&src, src, v46, 1);
    v47 = src;
  }
  v60.m128_u64[0] = v46;
  v47[v45] = 0;
  memmove((char *)src + v44, v42, v43);
LABEL_29:
  QT::QUrl::QUrl((QT::QUrl *)&v55);
  if ( v60.m128_u64[0] )
  {
    v32 = (const char *)src;
    if ( !strncmp((const char *)src, "file://", 7u) )
    {
      v33 = v32 + 7;
      v34 = strlen(v33);
      v35 = QT::QString::fromUtf8(ptr, v34, v33);
      QT::QUrl::fromLocalFile((QT::QUrl *)&v56, (const QT::QString *)ptr);
      goto LABEL_32;
    }
  }
  else
  {
    v32 = &s1;
  }
  v38 = 0;
  if ( v32 )
    v38 = strlen(v32);
  v35 = QT::QString::fromUtf8(ptr, v38, v32);
  QT::QUrl::QUrl(&v56, ptr, 0);
LABEL_32:
  v36 = v56;
  v56 = v55;
  v55 = v36;
  QT::QUrl::~QUrl((QT::QUrl *)&v56);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QDesktopServices::openUrl((QT::QDesktopServices *)&v55, (const QT::QUrl *)ptr);
  QT::QUrl::~QUrl((QT::QUrl *)&v55);
  if ( src )
  {
    v60.m128_u64[0] = 0;
    v35 = qfree(src, (const char *)ptr, v35);
  }
  if ( haystack )
  {
    n[0] = 0;
    qfree(haystack, (const char *)ptr, v35);
  }
  return v63 - __readfsqword(0x28u);
}
