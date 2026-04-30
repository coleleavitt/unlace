__int64 __fastcall sub_4B4370(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  __int64 *v14; // r12
  int v16; // eax
  __int64 result; // rax
  __int64 v19; // rax
  _DWORD *v20; // rbp
  __int64 v21; // r13
  __int64 v22; // r13
  __int64 v23; // r15
  const char *v24; // r14
  char *v25; // rax
  unsigned __int64 v26; // rax
  size_t v27; // r8
  const char *v28; // r14
  unsigned __int64 v29; // r15
  size_t v30; // r8
  void *v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  char **v35; // rbp
  char *v36; // r13
  const char *v37; // rsi
  __int64 v38; // r8
  __int64 v39; // r9
  int *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbp
  __int64 i; // r14
  const char *v44; // rsi
  __int16 v45; // r12
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  const char *v50; // rdx
  __int16 v51; // ax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int16 v54; // r13
  __int64 v55; // rax
  const char *v56; // rdx
  __int64 v57; // rax
  const char *v58; // rsi
  __int64 v59; // rbx
  __int64 v60; // rbp
  QT::QKeySequence *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // [rsp+0h] [rbp-E8h]
  size_t n; // [rsp+8h] [rbp-E0h]
  size_t na; // [rsp+8h] [rbp-E0h]
  size_t nb; // [rsp+8h] [rbp-E0h]
  unsigned __int8 nc; // [rsp+8h] [rbp-E0h]
  char *s1; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v69; // [rsp+18h] [rbp-D0h]
  int v70; // [rsp+28h] [rbp-C0h]
  __m128i v71; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v72; // [rsp+40h] [rbp-A8h]
  __int64 v73; // [rsp+48h] [rbp-A0h]
  __int64 v74; // [rsp+50h] [rbp-98h] BYREF
  __int64 v75; // [rsp+58h] [rbp-90h]
  int v76; // [rsp+60h] [rbp-88h]
  int v77; // [rsp+68h] [rbp-80h]
  void *v78; // [rsp+70h] [rbp-78h] BYREF
  int v79; // [rsp+78h] [rbp-70h]
  int v80; // [rsp+80h] [rbp-68h]
  int v81; // [rsp+88h] [rbp-60h]
  void *ptr; // [rsp+90h] [rbp-58h] BYREF
  const char *v83; // [rsp+98h] [rbp-50h]
  __int64 v84; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v85; // [rsp+A8h] [rbp-40h]

  v14 = a2;
  v16 = *(_DWORD *)a3;
  v85 = __readfsqword(0x28u);
  if ( v16 != 2 )
  {
    if ( v16 == 4 )
    {
      v19 = *(_QWORD *)(a3 + 8);
      v20 = *(_DWORD **)v19;
      v21 = *(_QWORD *)v19 + 16LL * *(_QWORD *)(v19 + 8);
      if ( v21 != *(_QWORD *)v19 )
      {
        do
        {
          while ( *v20 == 4 )
          {
            v20 += 4;
            sub_169700(
              (int)"config shortcuts: shortcut values can not be in nested arrays, skipping...\n",
              (__int64)a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              a10,
              a11,
              a12,
              a13,
              a14,
              v63);
            if ( (_DWORD *)v21 == v20 )
              return 1;
          }
          a2 = v14;
          if ( !(unsigned __int8)sub_4B4370(
                                   a1,
                                   (_DWORD)v14,
                                   (_DWORD)v20,
                                   a4,
                                   a5,
                                   a6,
                                   v63,
                                   n,
                                   (__int64)s1,
                                   v69,
                                   DWORD2(v69),
                                   v70,
                                   v71.m128i_i32[0],
                                   v71.m128i_i32[2],
                                   v72,
                                   v73,
                                   v74,
                                   v75,
                                   v76,
                                   v77,
                                   (_DWORD)v78,
                                   v79,
                                   v80,
                                   v81,
                                   (_DWORD)ptr,
                                   (_DWORD)v83,
                                   v84) )
            return 0;
          v20 += 4;
        }
        while ( (_DWORD *)v21 != v20 );
      }
    }
    else
    {
      if ( v16 != 1 )
      {
        if ( a2 )
          sub_169A50(a2, (__int64)"invalid shortcut value type\n");
        return 0;
      }
      if ( *(_QWORD *)(a3 + 8) )
      {
        if ( a2 )
        {
          sub_169A50(a2, (__int64)"shortcut can't be represented as number\n");
          return 0;
        }
        return 0;
      }
    }
    return 1;
  }
  v22 = *(_QWORD *)(a3 + 8);
  v23 = *(_QWORD *)(v22 + 8);
  if ( !v23 )
    return 1;
  v24 = *(const char **)v22;
  if ( !**(_BYTE **)v22 )
    return 1;
  if ( (unsigned __int64)(v23 - 1) > 3 && !strncmp(v24, "sys(", 4u) )
  {
    v25 = strrchr(v24, 41);
    if ( !v25 || (v26 = v25 - v24, v26 == -1) )
    {
      sub_169A50(a2, (__int64)"can't find closing parentheses for sys() shortcut: \"%s\"\n", v24);
      return 0;
    }
    if ( v23 - 1 >= v26 )
    {
      v48 = 4;
      a7.m128_u64[0] = 0;
      s1 = nullptr;
      v69 = 0;
      if ( v26 <= 4 )
        v48 = v26;
      v49 = v26 - v48;
      v27 = v49;
      if ( !v49 )
        goto LABEL_56;
      v28 = &v24[v48];
      v29 = v49 + 1;
      if ( v49 == -1 )
      {
        v31 = nullptr;
        v30 = -1;
        goto LABEL_25;
      }
    }
    else
    {
      s1 = nullptr;
      a7.m128_u64[0] = 0;
      v69 = 0;
      v27 = v23 - 5;
      if ( v23 == 5 )
        goto LABEL_56;
      v28 = v24 + 4;
      v29 = v23 - 4;
    }
    na = v27;
    s1 = (char *)qvector_reserve(&s1, 0, v29, 1);
    v30 = na;
    v31 = s1;
LABEL_25:
    v32 = (__int64)v28;
    nb = v30;
    *(_QWORD *)&v69 = v29;
    memmove(v31, v28, v30);
    s1[nb] = 0;
    if ( (unsigned __int64)v69 > 1 )
    {
      v35 = &off_86CCA0;
      v36 = s1;
      while ( strcmp(v36, *v35) )
      {
        v35 += 2;
        if ( &unk_86D110 == (_UNKNOWN *)v35 )
        {
          v37 = "sys() key sequence name unknown: \"%s\"\n";
          sub_169A50(v14, (__int64)"sys() key sequence name unknown: \"%s\"\n", v36);
          goto LABEL_59;
        }
      }
      v37 = (const char *)*((unsigned int *)v35 + 2);
      QT::QKeySequence::keyBindings(&v71, v37);
      v40 = (int *)v71.m128i_i64[0];
      if ( !v71.m128i_i64[0] || *(int *)v71.m128i_i64[0] > 1 )
      {
        v37 = nullptr;
        sub_4B1FD0(&v71, 0, 0, 0, v38, v39);
        v40 = (int *)v71.m128i_i64[0];
      }
      v41 = v71.m128i_i64[1];
      v42 = v71.m128i_i64[1];
      if ( !v40 || *v40 > 1 )
      {
        v37 = nullptr;
        sub_4B1FD0(&v71, 0, 0, 0, v38, v39);
        v41 = v71.m128i_i64[1];
      }
      for ( i = v41 + 8 * v72; i != v42; ++*(_QWORD *)(a1 + 8) )
      {
        QT::QKeySequence::toString(&v78, v42, 1);
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)&v78);
        v44 = v83;
        if ( !v83 )
          v44 = (const char *)&QT::QByteArray::_empty;
        sub_5360B0(&v74, v44, 1);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v78 && !_InterlockedSub((volatile signed __int32 *)v78, 1u) )
          free(v78);
        v45 = sub_4B31A0((__int64)&v74, *(double *)a7.m128_u64, a8);
        if ( v74 )
        {
          v75 = 0;
          *(double *)a7.m128_u64 = qfree(v74, v44);
        }
        v46 = *(_QWORD *)(a1 + 8);
        v37 = *(const char **)a1;
        if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v46 + 1) )
        {
          v47 = qvector_reserve(a1, v37, v46 + 1, 2);
          *(_QWORD *)a1 = v47;
          v37 = (const char *)v47;
          v46 = *(_QWORD *)(a1 + 8);
        }
        v42 += 8;
        *(_WORD *)&v37[2 * v46] = v45;
      }
      if ( v71.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v71.m128i_i64[0], 1u) )
      {
        v59 = v71.m128i_i64[1];
        v60 = v71.m128i_i64[1] + 8 * v72;
        if ( v71.m128i_i64[1] != v60 )
        {
          do
          {
            v61 = (QT::QKeySequence *)v59;
            v59 += 8;
            QT::QKeySequence::~QKeySequence(v61);
          }
          while ( v60 != v59 );
        }
        free((void *)v71.m128i_i64[0]);
      }
      result = 1;
LABEL_60:
      if ( s1 )
      {
        nc = result;
        *(_QWORD *)&v69 = 0;
        qfree(s1, v37);
        return nc;
      }
      return result;
    }
    if ( *(_DWORD *)a3 != 2 )
    {
      sub_4AF9E0(0.0, (__int64)v31, (__int64)v28, v33, v34);
      goto LABEL_85;
    }
    v22 = *(_QWORD *)(a3 + 8);
LABEL_56:
    v50 = &::s1;
    if ( *(_QWORD *)(v22 + 8) )
      v50 = *(const char **)v22;
    v37 = "invalid sys() shortcut: \"%s\"\n";
    sub_169A50(v14, (__int64)"invalid sys() shortcut: \"%s\"\n", v50);
LABEL_59:
    result = 0;
    goto LABEL_60;
  }
  v32 = (__int64)v24;
  sub_5360B0(&ptr, v24, 0);
  v51 = sub_4B31A0((__int64)&ptr, *(double *)a7.m128_u64, a8);
  v31 = ptr;
  v54 = v51;
  if ( ptr )
  {
    v83 = nullptr;
    *(double *)a7.m128_u64 = qfree(ptr, v24);
  }
  if ( v54 )
  {
    v57 = *(_QWORD *)(a1 + 8);
    v58 = *(const char **)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v57 + 1) )
    {
      v62 = qvector_reserve(a1, v58, v57 + 1, 2);
      *(_QWORD *)a1 = v62;
      v58 = (const char *)v62;
      v57 = *(_QWORD *)(a1 + 8);
    }
    *(_WORD *)&v58[2 * v57] = v54;
    ++*(_QWORD *)(a1 + 8);
    return 1;
  }
  if ( !v14 )
    return 0;
  v55 = *(_QWORD *)(a3 + 8);
  if ( *(_DWORD *)a3 != 2 )
LABEL_85:
    sub_4AF9E0(*(double *)a7.m128_u64, (__int64)v31, v32, v52, v53);
  v56 = &::s1;
  if ( *(_QWORD *)(v55 + 8) )
    v56 = *(const char **)v55;
  sub_169A50(v14, (__int64)"invalid shortcuts value: \"%s\"\n", v56);
  return 0;
}
