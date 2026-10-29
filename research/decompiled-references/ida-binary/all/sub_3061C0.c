QT::QAction *__fastcall sub_3061C0(__int64 a1, const char *a2)
{
  QT::QAction *v2; // r12
  size_t v3; // rax
  double v4; // xmm0_8
  double v5; // xmm0_8
  char v6; // r12
  double v7; // xmm0_8
  __int64 v8; // rax
  unsigned __int64 v9; // r13
  const QT::QChar *v10; // r14
  char *v11; // r12
  __int64 v12; // rax
  __m128 v13; // xmm5
  __int64 v14; // rax
  double v15; // xmm0_8
  char v16; // r12
  __int64 v17; // rax
  double v19; // xmm0_8
  char v20; // r12
  double v21; // xmm0_8
  double v22; // xmm0_8
  char v23; // r12
  double v24; // xmm0_8
  char v25; // r12
  QT::QChar *v26; // rdi
  __int64 v27; // rax
  void *v28; // rdi
  double v29; // xmm0_8
  char v30; // r13
  QT::QWidget *v31; // r15
  const char *v32; // rsi
  __int64 v33; // rax
  void *v34; // rdi
  double v35; // xmm0_8
  char v36; // r12
  double v37; // xmm0_8
  char v38; // r12
  double v39; // xmm0_8
  void *v40; // rdi
  void *v41; // rdi
  char v42; // r13
  char v43; // r13
  QT::QWidget *v44; // r15
  __int64 v45; // rax
  char v46; // r13
  QT::QWidget *v47; // r15
  __int64 v48; // rax
  char v49; // r13
  QT::QWidget *v50; // r15
  __int64 v51; // rax
  double v52; // xmm0_8
  __int64 v53; // r12
  __m128 si128; // xmm0
  __m128i v55; // xmm1
  __int64 v56; // rax
  char *v57; // rsi
  __m128i v58; // xmm0
  __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  __m128i v61; // xmm0
  __int64 v62; // rdx
  QT::QChar *v63; // rdi
  QT::QChar *v64; // rdi
  const QT::QObject *v65; // rax
  char v66; // r13
  QT::QWidget *v67; // r15
  __int64 v68; // rax
  char v69; // r13
  char v70; // r13
  QT::QWidget *v71; // r15
  __int64 v72; // rax
  void *v73; // rdi
  void *v74; // rdi
  char v75; // r13
  QT::QWidget *v76; // r15
  __int64 v77; // rax
  QT::QWidget *v78; // r15
  __int64 v79; // rax
  char v80; // r13
  QT::QWidget *v81; // r15
  __int64 v82; // rax
  QT::QWidget *v83; // r15
  __int64 v84; // rax
  char v85; // r13
  QT::QWidget *v86; // r15
  __int64 v87; // rax
  char v88; // r13
  QT::QWidget *v89; // r15
  __int64 v90; // rax
  void *v91; // rdi
  __int64 v92; // r12
  double v93; // xmm0_8
  char v94; // r15
  char v95; // r13
  QT::QWidget *v96; // r15
  __int64 v97; // rax
  char v98; // r13
  QT::QChar *v99[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v100; // [rsp+10h] [rbp-88h]
  int v101; // [rsp+18h] [rbp-80h]
  void *v102[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v103; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v105; // [rsp+50h] [rbp-48h]
  unsigned __int64 v106; // [rsp+58h] [rbp-40h]

  v2 = qword_8CD748;
  v106 = __readfsqword(0x28u);
  v3 = 0;
  if ( !qword_8CD748 )
    return v2;
  if ( a2 )
    v3 = strlen(a2);
  v4 = QT::QString::fromUtf8(v99, v3, a2);
  v5 = QT::QString::fromUtf8(ptr, 4, "[TS]", v4);
  v6 = QT::QString::startsWith(v99, ptr, 1, v5);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v6 )
  {
    v7 = QT::QString::fromUtf8(ptr, 9, "[Types_S]");
    QT::QString::fromUtf8(v102, 4, "[TS]", v7);
    v8 = QT::QString::replace(v99, v102, ptr, 1);
    goto LABEL_9;
  }
  v19 = QT::QString::fromUtf8(ptr, 4, "[TE]");
  v20 = QT::QString::startsWith(v99, ptr, 1, v19);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v20 )
  {
    v21 = QT::QString::fromUtf8(ptr, 9, "[Types_E]");
    QT::QString::fromUtf8(v102, 4, "[TE]", v21);
    v8 = QT::QString::replace(v99, v102, ptr, 1);
    goto LABEL_9;
  }
  v35 = QT::QString::fromUtf8(ptr, 4, "[TT]");
  v36 = QT::QString::startsWith(v99, ptr, 1, v35);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v36 )
  {
    v52 = QT::QString::fromUtf8(ptr, 9, "[Types_T]");
    QT::QString::fromUtf8(v102, 4, "[TT]", v52);
    v8 = QT::QString::replace(v99, v102, ptr, 1);
LABEL_9:
    QT::QString::operator=(v99, v8);
    if ( v102[0] && !_InterlockedSub((volatile signed __int32 *)v102[0], 1u) )
      free(v102[0]);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    goto LABEL_15;
  }
  v37 = QT::QString::fromUtf8(ptr, 4, "[TF]");
  v38 = QT::QString::startsWith(v99, ptr, 1, v37);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v38 )
  {
    v39 = QT::QString::fromUtf8(ptr, 9, "[Types_F]");
    QT::QString::fromUtf8(v102, 4, "[TF]", v39);
    v8 = QT::QString::replace(v99, v102, ptr, 1);
    goto LABEL_9;
  }
LABEL_15:
  v103 = 0;
  *(_OWORD *)v102 = 0;
  if ( !(unsigned __int8)QT::QString::startsWith(v99, 91, 1) )
    goto LABEL_20;
  v9 = v100;
  v10 = v99[1];
  if ( -v100 >= 0 && v100 != 0 )
    goto LABEL_20;
  if ( v100 <= 0 )
    goto LABEL_20;
  v11 = (char *)v99[1] + 2 * v100;
  v12 = QT::QtPrivate::qustrchr((2 * v100) >> 1, v99[1], 93);
  if ( v11 == (char *)v12 )
    goto LABEL_20;
  v14 = (v12 - (__int64)v10) >> 1;
  if ( (int)v14 < 0 )
    goto LABEL_20;
  v53 = (int)v14;
  if ( (int)v14 < v9 )
  {
    QT::QString::QString((QT::QString *)ptr, v10, (int)v14);
    si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
    v9 = v105;
  }
  else
  {
    v105 = v9;
    si128 = (__m128)_mm_unpacklo_epi64((__m128i)(unsigned __int64)v99[0], (__m128i)(unsigned __int64)v10);
    *(__m128 *)ptr = si128;
    if ( v99[0] )
    {
      _InterlockedAdd((volatile signed __int32 *)v99[0], 1u);
      si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
      v9 = v105;
    }
  }
  v55 = _mm_load_si128((const __m128i *)v102);
  v56 = v103;
  *(__m128 *)v102 = si128;
  v103 = v9;
  v105 = v56;
  *(__m128i *)ptr = v55;
  if ( v55.m128i_i64[0] )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v55.m128i_i64[0], 1u) )
      free(ptr[0]);
    v9 = v103;
    v57 = (char *)v102[1];
  }
  else
  {
    v57 = (char *)_mm_movehl_ps(v13, si128).m128_u64[0];
  }
  if ( v9 )
  {
    QT::QString::QString((QT::QString *)ptr, (const QT::QChar *)(v57 + 2), v9 - 1);
    goto LABEL_122;
  }
  v105 = 0;
  *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v102[0], (__m128i)(unsigned __int64)v57);
  if ( v102[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)v102[0], 1u);
LABEL_122:
    v58 = _mm_load_si128((const __m128i *)v102);
    v59 = v103;
    *(__m128i *)v102 = _mm_load_si128((const __m128i *)ptr);
    v103 = v105;
    v105 = v59;
    *(__m128i *)ptr = v58;
    if ( v58.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v58.m128i_i64[0], 1u) )
      free(ptr[0]);
  }
  v60 = v100 - 1 - v53;
  if ( v60 < v100 )
  {
    QT::QString::QString((QT::QString *)ptr, (QT::QChar *)((char *)v99[1] + 2 * v53 + 2), v60);
  }
  else
  {
    v105 = v100;
    *(__m128i *)ptr = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v99[0], (__m128i)(unsigned __int64)v99[1]);
    if ( !v99[0] )
      goto LABEL_20;
    _InterlockedAdd((volatile signed __int32 *)v99[0], 1u);
  }
  v61 = _mm_load_si128((const __m128i *)v99);
  v62 = v100;
  *(__m128i *)v99 = _mm_load_si128((const __m128i *)ptr);
  v100 = v105;
  v105 = v62;
  *(__m128i *)ptr = v61;
  if ( v61.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)v61.m128i_i64[0], 1u) )
    free(ptr[0]);
LABEL_20:
  if ( !v103 )
    goto LABEL_21;
  v28 = v102[1];
  if ( !v102[1] )
    v28 = &QT::QString::_empty;
  if ( (unsigned int)QT::QString::compare_helper(v28, v103, "Types_S", 7, 1) )
  {
    v40 = v102[1];
    if ( !v102[1] )
      v40 = &QT::QString::_empty;
    if ( !(unsigned int)QT::QString::compare_helper(v40, v103, "Types_E", 7, 1) )
    {
      v29 = QT::QString::fromUtf8(ptr, 5, "&Edit");
      v49 = sub_532030((QT::QString *)v99);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v49 )
      {
        v50 = qword_8CD748;
        sub_314450(ptr, "Types_E", "Edit");
        v32 = &s1;
        if ( ptr[1] )
          v32 = (const char *)ptr[0];
        v51 = sub_53DC50(v50, v32);
        v34 = ptr[0];
        v2 = (QT::QAction *)v51;
        if ( ptr[0] )
          goto LABEL_63;
      }
      else
      {
        v29 = QT::QString::fromUtf8(ptr, 7, "Searc&h", v29);
        v69 = sub_532030((QT::QString *)v99);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        if ( v69 )
        {
          v83 = qword_8CD748;
          sub_314450(ptr, "Types_E", "Search");
          v32 = &s1;
          if ( ptr[1] )
            v32 = (const char *)ptr[0];
          v84 = sub_53DC50(v83, v32);
          v34 = ptr[0];
          v2 = (QT::QAction *)v84;
          if ( ptr[0] )
            goto LABEL_63;
        }
        else
        {
          v29 = QT::QString::fromUtf8(ptr, 5, "&Jump", v29);
          v70 = sub_532030((QT::QString *)v99);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( !v70 )
            goto LABEL_21;
          v71 = qword_8CD748;
          sub_314450(ptr, "Types_E", "Jump");
          v32 = &s1;
          if ( ptr[1] )
            v32 = (const char *)ptr[0];
          v72 = sub_53DC50(v71, v32);
          v34 = ptr[0];
          v2 = (QT::QAction *)v72;
          if ( ptr[0] )
            goto LABEL_63;
        }
      }
      goto LABEL_64;
    }
    v41 = v102[1];
    if ( !v102[1] )
      v41 = &QT::QString::_empty;
    if ( (unsigned int)QT::QString::compare_helper(v41, v103, "Types_T", 7, 1) )
    {
      v73 = v102[1];
      if ( !v102[1] )
        v73 = &QT::QString::_empty;
      if ( (unsigned int)QT::QString::compare_helper(v73, v103, "Types_F", 7, 1) )
      {
        v74 = v102[1];
        if ( !v102[1] )
          v74 = &QT::QString::_empty;
        if ( (unsigned int)QT::QString::compare_helper(v74, v103, "Database notepad", 16, 1) )
        {
          QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)v102);
          v91 = ptr[1];
          if ( !ptr[1] )
            v91 = &QT::QByteArray::_empty;
          v92 = sub_4A0300(v91, (__int64)v99[0], (int)v99[1], v100, v101, (int)v102[0], (int)v102[1], v103);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( !v92 )
            goto LABEL_21;
          v93 = QT::QString::fromUtf8(ptr, 5, "&Edit");
          v94 = sub_532030((QT::QString *)v99);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          if ( v94 )
          {
            v2 = *(QT::QAction **)(v92 + 2488);
          }
          else
          {
            QT::QString::fromUtf8(ptr, 7, "Searc&h", v93);
            v98 = sub_532030((QT::QString *)v99);
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
            if ( !v98 )
              goto LABEL_21;
            v2 = *(QT::QAction **)(v92 + 2496);
          }
          goto LABEL_64;
        }
        v29 = QT::QString::fromUtf8(ptr, 5, "&Edit");
        v75 = sub_532030((QT::QString *)v99);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        if ( !v75 )
          goto LABEL_21;
        v76 = qword_8CD748;
        sub_314450(ptr, "Database notepad", "Edit");
        v32 = &s1;
        if ( ptr[1] )
          v32 = (const char *)ptr[0];
        v77 = sub_53DC50(v76, v32);
        v34 = ptr[0];
        v2 = (QT::QAction *)v77;
        if ( ptr[0] )
          goto LABEL_63;
        goto LABEL_64;
      }
      v29 = QT::QString::fromUtf8(ptr, 5, "&Edit");
      v80 = sub_532030((QT::QString *)v99);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v80 )
      {
        v81 = qword_8CD748;
        sub_314450(ptr, "Types_F", "Edit");
        v32 = &s1;
        if ( ptr[1] )
          v32 = (const char *)ptr[0];
        v82 = sub_53DC50(v81, v32);
        v34 = ptr[0];
        v2 = (QT::QAction *)v82;
        if ( ptr[0] )
          goto LABEL_63;
        goto LABEL_64;
      }
      v29 = QT::QString::fromUtf8(ptr, 7, "Searc&h", v29);
      v88 = sub_532030((QT::QString *)v99);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( !v88 )
      {
        v29 = QT::QString::fromUtf8(ptr, 5, "&Jump", v29);
        v95 = sub_532030((QT::QString *)v99);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        if ( !v95 )
          goto LABEL_21;
        v96 = qword_8CD748;
        sub_314450(ptr, "Types_F", "Jump");
        v32 = &s1;
        if ( ptr[1] )
          v32 = (const char *)ptr[0];
        v97 = sub_53DC50(v96, v32);
        v34 = ptr[0];
        v2 = (QT::QAction *)v97;
        if ( !ptr[0] )
          goto LABEL_64;
        goto LABEL_63;
      }
      v89 = qword_8CD748;
      sub_314450(ptr, "Types_F", "Search");
      v32 = &s1;
      if ( ptr[1] )
        v32 = (const char *)ptr[0];
      v90 = sub_53DC50(v89, v32);
      v34 = ptr[0];
      v2 = (QT::QAction *)v90;
      if ( !ptr[0] )
        goto LABEL_64;
    }
    else
    {
      v29 = QT::QString::fromUtf8(ptr, 5, "&Edit");
      v42 = sub_532030((QT::QString *)v99);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v42 )
      {
        v78 = qword_8CD748;
        sub_314450(ptr, "Types_T", "Edit");
        v32 = &s1;
        if ( ptr[1] )
          v32 = (const char *)ptr[0];
        v79 = sub_53DC50(v78, v32);
        v34 = ptr[0];
        v2 = (QT::QAction *)v79;
        if ( ptr[0] )
          goto LABEL_63;
        goto LABEL_64;
      }
      v29 = QT::QString::fromUtf8(ptr, 7, "Searc&h", v29);
      v43 = sub_532030((QT::QString *)v99);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( !v43 )
      {
        v29 = QT::QString::fromUtf8(ptr, 5, "&Jump", v29);
        v85 = sub_532030((QT::QString *)v99);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        if ( !v85 )
          goto LABEL_21;
        v86 = qword_8CD748;
        sub_314450(ptr, "Types_T", "Jump");
        v32 = &s1;
        if ( ptr[1] )
          v32 = (const char *)ptr[0];
        v87 = sub_53DC50(v86, v32);
        v34 = ptr[0];
        v2 = (QT::QAction *)v87;
        if ( !ptr[0] )
          goto LABEL_64;
        goto LABEL_63;
      }
      v44 = qword_8CD748;
      sub_314450(ptr, "Types_T", "Search");
      v32 = &s1;
      if ( ptr[1] )
        v32 = (const char *)ptr[0];
      v45 = sub_53DC50(v44, v32);
      v34 = ptr[0];
      v2 = (QT::QAction *)v45;
      if ( !ptr[0] )
        goto LABEL_64;
    }
LABEL_63:
    ptr[1] = nullptr;
    qfree(v34, v32, v29);
    goto LABEL_64;
  }
  v29 = QT::QString::fromUtf8(ptr, 5, "&Edit");
  v30 = sub_532030((QT::QString *)v99);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( !v30 )
  {
    v29 = QT::QString::fromUtf8(ptr, 7, "Searc&h", v29);
    v46 = sub_532030((QT::QString *)v99);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( !v46 )
    {
      v29 = QT::QString::fromUtf8(ptr, 5, "&Jump", v29);
      v66 = sub_532030((QT::QString *)v99);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( !v66 )
        goto LABEL_21;
      v67 = qword_8CD748;
      sub_314450(ptr, "Types_S", "Jump");
      v32 = &s1;
      if ( ptr[1] )
        v32 = (const char *)ptr[0];
      v68 = sub_53DC50(v67, v32);
      v34 = ptr[0];
      v2 = (QT::QAction *)v68;
      if ( !ptr[0] )
        goto LABEL_64;
      goto LABEL_63;
    }
    v47 = qword_8CD748;
    sub_314450(ptr, "Types_S", "Search");
    v32 = &s1;
    if ( ptr[1] )
      v32 = (const char *)ptr[0];
    v48 = sub_53DC50(v47, v32);
    v34 = ptr[0];
    v2 = (QT::QAction *)v48;
    if ( !ptr[0] )
      goto LABEL_64;
    goto LABEL_63;
  }
  v31 = qword_8CD748;
  sub_314450(ptr, "Types_S", "Edit");
  v32 = &s1;
  if ( ptr[1] )
    v32 = (const char *)ptr[0];
  v33 = sub_53DC50(v31, v32);
  v34 = ptr[0];
  v2 = (QT::QAction *)v33;
  if ( ptr[0] )
    goto LABEL_63;
LABEL_64:
  if ( v2 )
    goto LABEL_26;
LABEL_21:
  v15 = QT::QString::fromUtf8(ptr, 5, "&Edit");
  v16 = sub_532030((QT::QString *)v99);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( v16 )
      goto LABEL_24;
  }
  else if ( v16 )
  {
LABEL_24:
    v17 = sub_30F100(qword_8CD748, ptr, v15);
    goto LABEL_25;
  }
  v22 = QT::QString::fromUtf8(ptr, 7, "Searc&h", v15);
  v23 = sub_532030((QT::QString *)v99);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v23 )
  {
    v17 = sub_30F110(qword_8CD748, ptr, v22);
    goto LABEL_25;
  }
  v24 = QT::QString::fromUtf8(ptr, 5, "&Jump", v22);
  v25 = sub_532030((QT::QString *)v99);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v25 )
  {
    v17 = sub_30F120(qword_8CD748, ptr, v24);
LABEL_25:
    v2 = (QT::QAction *)v17;
    if ( v17 )
      goto LABEL_26;
  }
  v26 = v99[1];
  if ( !v99[1] )
    v26 = (QT::QChar *)&QT::QString::_empty;
  if ( (unsigned int)QT::QString::compare_helper(v26, v100, "Default:Edit", 12, 1) )
  {
    v63 = v99[1];
    if ( !v99[1] )
      v63 = (QT::QChar *)&QT::QString::_empty;
    if ( (unsigned int)QT::QString::compare_helper(v63, v100, "Default:Search", 14, 1) )
    {
      v64 = v99[1];
      if ( !v99[1] )
        v64 = (QT::QChar *)&QT::QString::_empty;
      if ( (unsigned int)QT::QString::compare_helper(v64, v100, "Default:Jump", 12, 1) )
        goto LABEL_140;
      v27 = sub_53E210(qword_8CD748, 2);
    }
    else
    {
      v27 = sub_53E210(qword_8CD748, 1);
    }
  }
  else
  {
    v27 = sub_53E210(qword_8CD748, 0);
  }
  v2 = (QT::QAction *)v27;
  if ( !v27 )
  {
LABEL_140:
    QT::QMainWindow::menuBar(qword_8CD748);
    QT::QWidget::actions((QT::QWidget *)ptr);
    v2 = (QT::QAction *)sub_533040(ptr, v99, 0);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    if ( v2 )
    {
      v65 = (const QT::QObject *)QT::QAction::menuObject(v2);
      v2 = (QT::QAction *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QMenu::staticMetaObject, v65);
    }
  }
LABEL_26:
  if ( v102[0] && !_InterlockedSub((volatile signed __int32 *)v102[0], 1u) )
    free(v102[0]);
  if ( v99[0] && !_InterlockedSub((volatile signed __int32 *)v99[0], 1u) )
    free(v99[0]);
  return v2;
}
