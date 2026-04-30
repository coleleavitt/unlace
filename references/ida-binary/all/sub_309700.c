unsigned __int64 __fastcall sub_309700(__int64 a1)
{
  unsigned __int64 v1; // rax
  const char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // rbp
  size_t v7; // rax
  double v8; // xmm0_8
  const char *v9; // rbp
  size_t v10; // rax
  double v11; // xmm0_8
  __int64 v12; // rax
  void *v13; // rdx
  char *v14; // rdx
  char *v15; // rdx
  void **p_ptr; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  size_t v22; // r14
  char *v23; // r8
  void *v24; // rsi
  char *v25; // rdx
  char *v26; // rax
  char *v27; // rdx
  size_t v28; // r9
  char *v29; // r8
  char *v30; // r10
  void *v31; // rsi
  const char *v32; // r8
  __int64 v33; // r13
  __int64 v34; // r14
  QT::QFileInfo *v35; // rdi
  int v36; // edx
  int v37; // r8d
  int v38; // r9d
  char **v39; // r13
  const char *v40; // r15
  double v41; // xmm0_8
  size_t v42; // r14
  int v43; // eax
  __int64 v44; // rcx
  unsigned __int64 v45; // rdx
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rdx
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // [rsp+0h] [rbp-128h]
  char *n; // [rsp+8h] [rbp-120h]
  void *src; // [rsp+10h] [rbp-118h]
  const char **v57; // [rsp+18h] [rbp-110h]
  size_t v58; // [rsp+30h] [rbp-F8h]
  char *v59; // [rsp+38h] [rbp-F0h]
  int v60; // [rsp+40h] [rbp-E8h] BYREF
  int v61; // [rsp+48h] [rbp-E0h] BYREF
  void *v62; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v63; // [rsp+58h] [rbp-D0h]
  int v64; // [rsp+68h] [rbp-C0h]
  __m128i v65; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v66; // [rsp+80h] [rbp-A8h]
  int v67; // [rsp+88h] [rbp-A0h]
  void *v68; // [rsp+90h] [rbp-98h] BYREF
  int v69; // [rsp+98h] [rbp-90h]
  int v70; // [rsp+A0h] [rbp-88h]
  int v71; // [rsp+A8h] [rbp-80h]
  void *v72; // [rsp+B0h] [rbp-78h] BYREF
  __int128 v73; // [rsp+B8h] [rbp-70h]
  void *ptr; // [rsp+D0h] [rbp-58h] BYREF
  char *s[2]; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v76; // [rsp+E8h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 1032);
  v76 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 648) = 300;
  LODWORD(ptr) = -1;
  if ( v1 > 0x12C )
  {
LABEL_82:
    *(_QWORD *)(a1 + 1032) = 300;
    goto LABEL_3;
  }
  if ( v1 != 300 )
  {
    v47 = *(_QWORD *)(a1 + 1024);
    v48 = *(_QWORD *)(a1 + 1040);
    v49 = a1 + 1024;
    if ( (unsigned __int64)&ptr < v47 || (unsigned __int64)&ptr >= v47 + 4 * v48 )
    {
      if ( v48 > 0x12B
        || (v52 = qvector_reserve(v49, v47, 300, 4),
            *(_QWORD *)(a1 + 1024) = v52,
            v47 = v52,
            v1 = *(_QWORD *)(a1 + 1032),
            v1 <= 0x12B) )
      {
        v50 = 4 * v1;
        while ( 1 )
        {
          *(_DWORD *)(v47 + v50) = -1;
          v50 += 4;
          if ( v50 == 1200 )
            break;
          v47 = *(_QWORD *)(a1 + 1024);
        }
      }
    }
    else if ( v48 > 0x12B
           || (v53 = qvector_reserve(v49, v47, 300, 4),
               *(_QWORD *)(a1 + 1024) = v53,
               v47 = v53,
               v1 = *(_QWORD *)(a1 + 1032),
               v1 <= 0x12B) )
    {
      v51 = 4 * v1;
      while ( 1 )
      {
        *(_DWORD *)(v47 + v51) = -1;
        v51 += 4;
        if ( v51 == 1200 )
          break;
        v47 = *(_QWORD *)(a1 + 1024);
      }
    }
    goto LABEL_82;
  }
LABEL_3:
  v57 = (const char **)off_8BA860;
  do
  {
    v62 = nullptr;
    v63 = 0;
    v3 = *v57;
    if ( *v57
      && (v4 = strlen(*v57),
          v5 = v4 + 1,
          v6 = v4,
          v62 = (void *)qvector_reserve(&v62, 0, v4 + 1, 1),
          *(_QWORD *)&v63 = v5,
          memmove(v62, v3, v6),
          *((_BYTE *)v62 + v6) = 0,
          (v3 = *v57) != nullptr) )
    {
      v7 = strlen(*v57);
    }
    else
    {
      v7 = 0;
    }
    v8 = QT::QString::fromUtf8(&v72, v7, v3);
    v9 = v57[1];
    v10 = 0;
    if ( v9 )
      v10 = strlen(v57[1]);
    v11 = QT::QString::fromUtf8(&v68, v10, v9, v8);
    v12 = QT::QString::append((QT::QString *)&v68, (const QT::QString *)&v72);
    v13 = *(void **)v12;
    *(_QWORD *)v12 = 0;
    ptr = v13;
    v14 = *(char **)(v12 + 8);
    *(_QWORD *)(v12 + 8) = 0;
    s[0] = v14;
    v15 = *(char **)(v12 + 16);
    *(_QWORD *)(v12 + 16) = 0;
    s[1] = v15;
    QT::QDir::QDir((QT::QDir *)&v60, (const QT::QString *)&ptr);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v68 && !_InterlockedSub((volatile signed __int32 *)v68, 1u) )
      free(v68);
    if ( v72 && !_InterlockedSub((volatile signed __int32 *)v72, 1u) )
      free(v72);
    p_ptr = (void **)&v60;
    QT::QDir::entryInfoList(&v65, &v60, 0xFFFFFFFFLL, 0xFFFFFFFFLL, v11);
    v19 = (int *)v65.m128i_i64[0];
    if ( !v65.m128i_i64[0] || *(int *)v65.m128i_i64[0] > 1 )
    {
      p_ptr = nullptr;
      sub_309250(&v65, 0, 0, 0, v17, v18);
      v19 = (int *)v65.m128i_i64[0];
    }
    v20 = v65.m128i_i64[1];
    v21 = v65.m128i_i64[1];
    if ( !v19 || *v19 > 1 )
    {
      p_ptr = nullptr;
      sub_309250(&v65, 0, 0, 0, v17, v18);
      v20 = v65.m128i_i64[1];
    }
    v54 = v20 + 8 * v66;
    while ( v54 != v21 )
    {
      QT::QFileInfo::fileName((QT::QFileInfo *)&v68);
      QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)&v68);
      v32 = s[0];
      v72 = nullptr;
      if ( s[0] )
      {
        v73 = 0;
      }
      else
      {
        v32 = (const char *)&QT::QByteArray::_empty;
        v73 = 0;
        if ( !&QT::QByteArray::_empty )
          goto LABEL_28;
      }
      src = (void *)v32;
      v22 = strlen(v32);
      LODWORD(n) = v22 + 1;
      v72 = (void *)qvector_reserve(&v72, 0, v22 + 1, 1);
      *(_QWORD *)&v73 = v22 + 1;
      memmove(v72, src, v22);
      *((_BYTE *)v72 + v22) = 0;
LABEL_28:
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      QT::QFileInfo::absoluteFilePath((QT::QFileInfo *)&ptr);
      p_ptr = &ptr;
      QT::QIcon::QIcon((QT::QIcon *)&v61, (const QT::QString *)&ptr);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( (unsigned __int8)QT::QIcon::isNull((QT::QIcon *)&v61) )
        goto LABEL_46;
      v23 = (char *)v63;
      v24 = nullptr;
      v25 = (_BYTE *)(&dword_0 + 2);
      ptr = nullptr;
      *(_OWORD *)s = 0;
      if ( !(_QWORD)v63 )
        goto LABEL_36;
      n = (char *)v63;
      ptr = (void *)qalloc_or_throw(v63);
      s[1] = n;
      memcpy(ptr, v62, (size_t)n);
      v24 = ptr;
      s[0] = n;
      v26 = n - 1;
      v25 = n + 1;
      if ( s[1] < n + 1 )
      {
        v23 = n - 1;
LABEL_36:
        src = v23;
        n = v25;
        ptr = (void *)qvector_reserve(&ptr, v24, v25, 1);
        v24 = ptr;
        v25 = n;
        v26 = (char *)src;
      }
      s[0] = v25;
      v26[(_QWORD)v24] = 47;
      v26[(_QWORD)ptr + 1] = 0;
      v27 = (char *)v73;
      if ( (_QWORD)v73 )
      {
        v28 = v73 - 1;
        if ( (_QWORD)v73 != 1 )
        {
          v29 = s[0];
          v30 = (char *)(v73 - 1);
          if ( s[0] )
          {
            v29 = s[0] - 1;
            v30 = &s[0][v28 - 1];
            v27 = &s[0][v73 - 1];
          }
          v31 = ptr;
          if ( s[1] < v27 )
          {
            v59 = v29;
            v58 = v73 - 1;
            src = v30;
            n = v27;
            ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
            v29 = v59;
            v31 = ptr;
            v28 = v58;
            v30 = (char *)src;
            v27 = n;
          }
          s[0] = v27;
          v30[(_QWORD)v31] = 0;
          memcpy((char *)ptr + (_QWORD)v29, v72, v28);
        }
      }
      p_ptr = (void **)&v61;
      sub_481B70(a1, &v61, &ptr);
      if ( ptr )
      {
        s[0] = nullptr;
        v11 = qfree(ptr, (const char *)&v61);
      }
LABEL_46:
      QT::QIcon::~QIcon((QT::QIcon *)&v61);
      if ( v72 )
      {
        *(_QWORD *)&v73 = 0;
        v11 = qfree(v72, (const char *)p_ptr, v11);
      }
      if ( v68 && !_InterlockedSub((volatile signed __int32 *)v68, 1u) )
        free(v68);
      v21 += 8;
    }
    if ( v65.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v65.m128i_i64[0], 1u) )
    {
      v33 = v65.m128i_i64[1];
      v34 = v65.m128i_i64[1] + 8 * v66;
      if ( v65.m128i_i64[1] != v34 )
      {
        do
        {
          v35 = (QT::QFileInfo *)v33;
          v33 += 8;
          QT::QFileInfo::~QFileInfo(v35);
        }
        while ( v34 != v33 );
      }
      free((void *)v65.m128i_i64[0]);
    }
    QT::QDir::~QDir((QT::QDir *)&v60);
    if ( v62 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v62, (const char *)p_ptr);
    }
    v57 += 2;
  }
  while ( v57 != (const char **)&dword_8BA8A0 );
  v39 = &off_862C20;
  sub_482300(
    a1,
    (_DWORD)p_ptr,
    v36,
    (unsigned int)&dword_8BA8A0,
    v37,
    v38,
    v54,
    (_DWORD)n,
    (_DWORD)src,
    (_DWORD)v57,
    (unsigned int)&v60,
    (unsigned int)&v65,
    v58,
    (_DWORD)v59,
    v60,
    v61,
    (_DWORD)v62,
    v63,
    DWORD2(v63),
    v64,
    v65.m128i_i32[0],
    v65.m128i_i32[2],
    v66,
    v67,
    (_DWORD)v68,
    v69,
    v70,
    v71,
    (__int64)v72);
  do
  {
    v40 = *v39;
    v41 = 0.0;
    ptr = nullptr;
    *(_OWORD *)s = 0;
    if ( v40 )
    {
      v42 = strlen(v40);
      ptr = (void *)qvector_reserve(&ptr, 0, v42 + 1, 1);
      s[0] = (char *)(v42 + 1);
      memmove(ptr, v40, v42);
      *((_BYTE *)ptr + v42) = 0;
    }
    sub_3086A0((__int64)&v72, (const char *)a1, (__int64)&ptr);
    if ( ptr )
    {
      s[0] = nullptr;
      v41 = qfree(ptr, (const char *)a1);
    }
    if ( !(unsigned __int8)QT::QIcon::isNull((QT::QIcon *)&v72) )
    {
      v43 = sub_479FD0(a1, &v72);
      if ( v43 > 0 )
      {
        v45 = *((int *)v39 + 2);
        if ( v45 >= *(_QWORD *)(a1 + 1032) )
        {
          if ( !under_debugger )
            interr(41208, &v72, v45, v44, v41);
          BUG();
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 1024) + 4 * v45) = v43;
      }
    }
    v39 += 2;
    QT::QIcon::~QIcon((QT::QIcon *)&v72);
  }
  while ( qword_863940 != v39 );
  *(_DWORD *)(a1 + 648) = 1000;
  return v76 - __readfsqword(0x28u);
}
