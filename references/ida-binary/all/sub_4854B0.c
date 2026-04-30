__int64 __fastcall sub_4854B0(
        __int64 *a1,
        unsigned __int8 a2,
        const char *a3,
        __int64 a4,
        const __m128i *a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  const char *v7; // r14
  __int64 v9; // r13
  bool v10; // zf
  const char *v11; // r13
  unsigned __int64 v12; // rdx
  size_t v13; // rax
  const char *v14; // r15
  char **v15; // rsi
  __m128i v16; // xmm0
  __int64 v17; // rdx
  size_t v19; // rax
  size_t v20; // r13
  char *v21; // r14
  signed __int64 v22; // rax
  __m128i si128; // xmm0
  __int64 v24; // rdx
  int v25; // r15d
  __int64 (*v26)(); // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  int v30; // r15d
  size_t v31; // rax
  double v32; // xmm0_8
  const char *v33; // rsi
  __m128i v34; // xmm0
  __int64 v35; // rdx
  __int64 v36; // rdx
  void (__fastcall *v37)(_QWORD *, _QWORD); // rbx
  size_t v38; // rax
  __int64 v39; // rdi
  __int64 v40; // r15
  __int64 v41; // r13
  __int64 *v42; // r12
  __int64 v43; // rdx
  __int64 v44; // r14
  __int64 *v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rdi
  size_t v48; // rax
  char *v49; // r14
  unsigned __int64 v50; // rdx
  size_t v51; // rax
  double v52; // xmm0_8
  size_t v53; // r12
  void *v54; // rdi
  int v55; // eax
  int v56; // r10d
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // edx
  size_t v62; // r12
  void *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // [rsp+8h] [rbp-1248h]
  int v71; // [rsp+10h] [rbp-1240h]
  __int64 v72; // [rsp+18h] [rbp-1238h]
  __int64 v73; // [rsp+20h] [rbp-1230h]
  int v74; // [rsp+28h] [rbp-1228h]
  char *v75; // [rsp+30h] [rbp-1220h]
  char *v76; // [rsp+30h] [rbp-1220h]
  char *s; // [rsp+48h] [rbp-1208h]
  const char *v79; // [rsp+50h] [rbp-1200h]
  _QWORD *n; // [rsp+68h] [rbp-11E8h]
  size_t na; // [rsp+68h] [rbp-11E8h]
  size_t nb; // [rsp+68h] [rbp-11E8h]
  const char *nc; // [rsp+68h] [rbp-11E8h]
  void *nd; // [rsp+68h] [rbp-11E8h]
  char v85[8]; // [rsp+78h] [rbp-11D8h] BYREF
  char *v86; // [rsp+80h] [rbp-11D0h] BYREF
  __int128 v87; // [rsp+88h] [rbp-11C8h]
  const char *v88; // [rsp+A0h] [rbp-11B0h] BYREF
  __int128 v89; // [rsp+A8h] [rbp-11A8h]
  char *v90; // [rsp+C0h] [rbp-1190h] BYREF
  __int128 v91; // [rsp+C8h] [rbp-1188h]
  const char *v92; // [rsp+E0h] [rbp-1170h] BYREF
  __int128 v93; // [rsp+E8h] [rbp-1168h]
  void *v94[4]; // [rsp+100h] [rbp-1150h] BYREF
  void *v95[2]; // [rsp+120h] [rbp-1130h] BYREF
  __int64 v96; // [rsp+130h] [rbp-1120h]
  void *v97[2]; // [rsp+140h] [rbp-1110h] BYREF
  __int64 v98; // [rsp+150h] [rbp-1100h]
  void *v99[2]; // [rsp+160h] [rbp-10F0h] BYREF
  __int64 v100; // [rsp+170h] [rbp-10E0h]
  char *v101; // [rsp+180h] [rbp-10D0h] BYREF
  __int128 v102; // [rsp+188h] [rbp-10C8h]
  void *ptr[2]; // [rsp+1A0h] [rbp-10B0h] BYREF
  __int64 v104; // [rsp+1B0h] [rbp-10A0h]
  __int64 v105; // [rsp+1C0h] [rbp-1090h] BYREF
  __int64 v106; // [rsp+1C8h] [rbp-1088h]
  __int64 v107; // [rsp+1D8h] [rbp-1078h]
  __int64 v108; // [rsp+1E0h] [rbp-1070h]
  __int64 v109; // [rsp+1F0h] [rbp-1060h]
  __int64 v110; // [rsp+1F8h] [rbp-1058h]
  char src[4104]; // [rsp+210h] [rbp-1040h] BYREF
  unsigned __int64 v112; // [rsp+1218h] [rbp-38h]

  v112 = __readfsqword(0x28u);
  v7 = a3;
  LOBYTE(v6) = batch & (a3 != nullptr);
  if ( !(_BYTE)v6 )
  {
    v86 = nullptr;
    v88 = nullptr;
    v89 = 0;
    v87 = 0;
    sub_485190((__int64)&v105, &v86, (__int64 *)&v88, a4, a5, a6);
    v9 = v87;
    s = v86;
    v79 = v88;
    if ( v105 )
    {
      v106 = 0;
      qfree(v105, (const char *)&v86);
    }
    v10 = v9 == 0;
    v11 = &s1;
    if ( !v10 )
      v11 = s;
    if ( v7 && !*v7 )
      v7 = nullptr;
    sub_484F70((__int64)&v105, v7, v79);
    v90 = nullptr;
    v91 = 0;
    sub_483EC0((__int64)&v105, (__int64 *)&v90);
    v92 = nullptr;
    v93 = 0;
    sub_483F60(&v105, &v92);
    if ( (_QWORD)v93 )
    {
      v13 = v93 - 1;
      v14 = v92;
      v12 = (unsigned __int64)(v93 - 1) >> 63;
      if ( v92 )
      {
LABEL_11:
        if ( !(_BYTE)v12 )
          goto LABEL_12;
      }
    }
    else
    {
      LOBYTE(v12) = 0;
      v13 = 0;
      v14 = &s1;
      if ( &s1 )
        goto LABEL_11;
    }
    v13 = 0;
    if ( v14 )
      v13 = strlen(v14);
LABEL_12:
    QT::QString::fromUtf8(v94, v13, v14);
    v96 = 0;
    *(_OWORD *)v95 = 0;
    n = QT::QCoreApplication::self;
    if ( (unsigned __int64)v91 > 1 )
    {
      v21 = v90;
      v22 = v91 - 1;
      if ( !v90 || v22 < 0 )
      {
        v22 = 0;
        if ( v90 )
          v22 = strlen(v90);
      }
      QT::QString::fromUtf8(ptr, v22, v21);
      si128 = _mm_load_si128((const __m128i *)v95);
      v24 = v96;
      *(__m128i *)v95 = _mm_load_si128((const __m128i *)ptr);
      v96 = v104;
      v104 = v24;
      *(__m128i *)ptr = si128;
      if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
        free(ptr[0]);
    }
    else
    {
      v101 = nullptr;
      v15 = &v101;
      v102 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, char **))(*QT::QCoreApplication::self + 432LL))(
             QT::QCoreApplication::self,
             &v101) )
      {
        if ( (_QWORD)v102 )
        {
          v48 = v102 - 1;
          v49 = v101;
          v50 = (unsigned __int64)(v102 - 1) >> 63;
        }
        else
        {
          LOBYTE(v50) = 0;
          v48 = 0;
          v49 = (char *)&s1;
        }
        if ( !v49 || (_BYTE)v50 )
        {
          v48 = 0;
          if ( v49 )
            v48 = strlen(v49);
        }
        v15 = (char **)v48;
        QT::QString::fromUtf8(ptr, v48, v49);
      }
      else
      {
        QT::QDir::currentPath((QT::QDir *)ptr);
      }
      v16 = _mm_load_si128((const __m128i *)v95);
      v17 = v96;
      *(__m128i *)v95 = _mm_load_si128((const __m128i *)ptr);
      v96 = v104;
      v104 = v17;
      *(__m128i *)ptr = v16;
      if ( v16.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v16.m128i_i64[0], 1u) )
        free(ptr[0]);
      if ( v101 )
      {
        *(_QWORD *)&v102 = 0;
        qfree(v101, (const char *)v15);
      }
    }
    v25 = 0;
    v98 = 0;
    *(_OWORD *)v97 = 0;
    v26 = *(__int64 (**)())(*n + 416LL);
    if ( v26 != sub_4835E0 )
      v25 = 8 * (((unsigned __int8 (__fastcall *)(_QWORD *))v26)(n) ^ 1);
    v100 = 0;
    v27 = n[2];
    *(_OWORD *)v99 = 0;
    v28 = (*(__int64 (__fastcall **)(_QWORD *))(v27 + 88))(n + 2);
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v28 + 72LL))(v28, 0);
    if ( a2 )
    {
      v30 = v25 | 4;
      v31 = 0;
      if ( v11 )
        v31 = strlen(v11);
      v32 = QT::QString::fromUtf8(&v101, v31, v11);
      v33 = (const char *)(*(__int64 (__fastcall **)(_QWORD *, double))(*n + 224LL))(n, v32);
      sub_53B7A0(
        (unsigned int)ptr,
        (_DWORD)v33,
        (unsigned int)&v101,
        (unsigned int)v95,
        (unsigned int)v94,
        (unsigned int)v99,
        v30);
    }
    else
    {
      v51 = 0;
      if ( v11 )
        v51 = strlen(v11);
      v52 = QT::QString::fromUtf8(&v101, v51, v11);
      v33 = (const char *)(*(__int64 (__fastcall **)(_QWORD *, double))(*n + 224LL))(n, v52);
      sub_53B860((unsigned int)ptr, (_DWORD)v33, (unsigned int)&v101, (unsigned int)v95, (unsigned int)v94, 0, v25);
    }
    v34 = _mm_load_si128((const __m128i *)v97);
    v35 = v98;
    *(__m128i *)v97 = _mm_load_si128((const __m128i *)ptr);
    v98 = v104;
    v104 = v35;
    *(__m128i *)ptr = v34;
    if ( v34.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v34.m128i_i64[0], 1u) )
      free(ptr[0]);
    if ( v101 && !_InterlockedSub((volatile signed __int32 *)v101, 1u) )
      free(v101);
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    if ( !v98 )
      goto LABEL_71;
    QT::QFileInfo::QFileInfo((QT::QFileInfo *)v85, (const QT::QString *)v97);
    QT::QFileInfo::absoluteFilePath((QT::QFileInfo *)&v101);
    QT::QDir::toNativeSeparators((QT::QDir *)ptr, (const QT::QString *)&v101);
    v34 = _mm_load_si128((const __m128i *)v97);
    v36 = v98;
    *(__m128i *)v97 = _mm_load_si128((const __m128i *)ptr);
    v98 = v104;
    v104 = v36;
    *(__m128i *)ptr = v34;
    if ( v34.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v34.m128i_i64[0], 1u) )
      free(ptr[0]);
    if ( v101 && !_InterlockedSub((volatile signed __int32 *)v101, 1u) )
      free(v101);
    v37 = *(void (__fastcall **)(_QWORD *, _QWORD))(*n + 440LL);
    QT::QFileInfo::absolutePath((QT::QFileInfo *)&v101);
    QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)&v101);
    v37(n, a2 ^ 1u);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v101 && !_InterlockedSub((volatile signed __int32 *)v101, 1u) )
      free(v101);
    QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)v97);
    v33 = (const char *)ptr[1];
    if ( !ptr[1] )
      v33 = (const char *)&QT::QByteArray::_empty;
    qstrncpy(src, v33, 4097);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( !v100 )
      goto LABEL_68;
    if ( get_file_ext(src) )
      goto LABEL_68;
    v33 = (_BYTE *)(&dword_0 + 3);
    v55 = QT::QString::indexOf(v99, 3, "(*.", 0, 1);
    v74 = v55;
    if ( v55 < 0 )
      goto LABEL_68;
    v56 = v55 + 4;
    v57 = v100;
    v58 = v55 + 4;
    nc = (const char *)v99[1];
    if ( v58 < -v100 )
      goto LABEL_68;
    if ( v56 < 0 )
    {
      v67 = v56 + v100;
      v59 = 0;
      if ( v67 >= 0 )
        v59 = v58 + v100;
      if ( v100 <= v59 )
        goto LABEL_159;
    }
    else
    {
      if ( v56 >= v100 )
        goto LABEL_68;
      v59 = v56;
    }
    v70 = v56;
    v71 = v56;
    v72 = 2 * v100;
    v75 = (char *)v99[1] + 2 * v100;
    v73 = v100;
    v33 = (char *)v99[1] + 2 * v59;
    v60 = QT::QtPrivate::qustrchr((2 * (v100 - v59)) >> 1, v33, 32);
    v57 = v73;
    if ( v75 != (char *)v60 )
    {
      v33 = nc;
      v61 = (v60 - (__int64)nc) >> 1;
      if ( v61 >= 0 )
        goto LABEL_132;
    }
    if ( v71 >= 0 )
    {
      if ( v70 >= v73 )
        goto LABEL_68;
      v64 = v70;
LABEL_149:
      v33 = &nc[2 * v64];
      v65 = QT::QtPrivate::qustrchr((2 * (v73 - v64)) >> 1, v33, 59);
      v57 = v73;
      v66 = v70;
      if ( v75 != (char *)v65 )
      {
        v33 = nc;
        v61 = (v65 - (__int64)nc) >> 1;
        if ( v61 >= 0 )
          goto LABEL_132;
      }
      v67 = v70 + v73;
      if ( v71 >= 0 )
        goto LABEL_152;
      goto LABEL_159;
    }
    v67 = v70 + v73;
    v64 = 0;
    if ( v70 + v73 >= 0 )
      v64 = v70 + v73;
    if ( v64 < v73 )
    {
      v75 = (char *)&nc[v72];
      goto LABEL_149;
    }
LABEL_159:
    v66 = 0;
    if ( v67 >= 0 )
      v66 = v67;
LABEL_152:
    if ( v57 > v66 )
    {
      v76 = (char *)&nc[2 * v57];
      v33 = &nc[2 * v66];
      v68 = QT::QtPrivate::qustrchr((2 * (v57 - v66)) >> 1, v33, 41);
      if ( v76 != (char *)v68 )
      {
        v33 = nc;
        v61 = (v68 - (__int64)nc) >> 1;
        if ( v61 >= 0 )
        {
LABEL_132:
          v33 = (const char *)v99;
          QT::QString::mid(&v101, v99, v74 + 3, v61 - (v74 + 3));
          if ( *((_QWORD *)&v102 + 1) )
          {
            QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)&v101);
            nd = ptr[1];
            if ( !ptr[1] )
              nd = &QT::QByteArray::_empty;
            if ( get_file_ext(src) )
            {
              v33 = src;
              qstrncpy(src, src, 4097);
            }
            else
            {
              v33 = (_BYTE *)(&stru_1000 + 1);
              set_file_ext(src, 4097, src, nd);
            }
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
          }
          if ( v101 && !_InterlockedSub((volatile signed __int32 *)v101, 1u) )
            free(v101);
        }
      }
    }
LABEL_68:
    v38 = strlen(src);
    na = v38;
    if ( v38 )
    {
      v53 = v38 + 1;
      v54 = (void *)*a1;
      if ( a1[2] < v38 + 1 )
      {
        v54 = (void *)qvector_reserve(a1, *a1, v53, 1);
        *a1 = (__int64)v54;
      }
      v33 = src;
      a1[1] = v53;
      memmove(v54, src, na);
      *(_BYTE *)(*a1 + na) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    v6 = 1;
    QT::QFileInfo::~QFileInfo((QT::QFileInfo *)v85);
LABEL_71:
    if ( v99[0] && !_InterlockedSub((volatile signed __int32 *)v99[0], 1u) )
      free(v99[0]);
    if ( v97[0] && !_InterlockedSub((volatile signed __int32 *)v97[0], 1u) )
      free(v97[0]);
    if ( v95[0] && !_InterlockedSub((volatile signed __int32 *)v95[0], 1u) )
      free(v95[0]);
    if ( v94[0] && !_InterlockedSub((volatile signed __int32 *)v94[0], 1u) )
      free(v94[0]);
    if ( v92 )
    {
      *(_QWORD *)&v93 = 0;
      *(double *)v34.m128i_i64 = qfree(v92, v33);
    }
    if ( v90 )
    {
      *(_QWORD *)&v91 = 0;
      *(double *)v34.m128i_i64 = qfree(v90, v33, *(double *)v34.m128i_i64);
    }
    if ( v109 )
    {
      v110 = 0;
      *(double *)v34.m128i_i64 = qfree(v109, v33, *(double *)v34.m128i_i64);
    }
    if ( v107 )
    {
      v108 = 0;
      *(double *)v34.m128i_i64 = qfree(v107, v33, *(double *)v34.m128i_i64);
    }
    v39 = v105;
    if ( v105 )
    {
      v40 = v106;
      if ( v106 )
      {
        v41 = 0;
        do
        {
          v42 = (__int64 *)(v39 + 48 * v41);
          v43 = v42[3];
          if ( v43 )
          {
            v44 = v42[4];
            if ( v44 )
            {
              for ( nb = 0; nb != v44; ++nb )
              {
                v45 = (__int64 *)(v43 + 24 * nb);
                v46 = *v45;
                if ( *v45 )
                {
                  v45[1] = 0;
                  *(double *)v34.m128i_i64 = qfree(v46, v33, *(double *)v34.m128i_i64);
                  v43 = v42[3];
                }
              }
            }
            v42[4] = 0;
            *(double *)v34.m128i_i64 = qfree(v43, v33, *(double *)v34.m128i_i64);
          }
          v47 = *v42;
          if ( *v42 )
          {
            v42[1] = 0;
            *(double *)v34.m128i_i64 = qfree(v47, v33, *(double *)v34.m128i_i64);
          }
          ++v41;
          v39 = v105;
        }
        while ( v40 != v41 );
      }
      v106 = 0;
      *(double *)v34.m128i_i64 = qfree(v39, v33, *(double *)v34.m128i_i64);
    }
    if ( v79 )
      *(double *)v34.m128i_i64 = qfree(v79, v33, *(double *)v34.m128i_i64);
    if ( s )
      qfree(s, v33, *(double *)v34.m128i_i64);
    return v6;
  }
  if ( strchr(a3, 42) || strchr(v7, 63) )
  {
    return 0;
  }
  else
  {
    v19 = strlen(v7);
    v20 = v19;
    if ( v19 )
    {
      v62 = v19 + 1;
      v63 = (void *)*a1;
      if ( a1[2] < v19 + 1 )
      {
        v69 = qvector_reserve(a1, *a1, v62, 1);
        *a1 = v69;
        v63 = (void *)v69;
      }
      a1[1] = v62;
      memmove(v63, v7, v20);
      *(_BYTE *)(*a1 + v20) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  return v6;
}
