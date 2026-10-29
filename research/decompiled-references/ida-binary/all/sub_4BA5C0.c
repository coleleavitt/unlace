__int64 __fastcall sub_4BA5C0(
        _BYTE *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  QT::QObject **v12; // rbp
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 *v16; // rbx
  volatile signed __int32 *v17; // rax
  __int64 v18; // rdi
  QT::QObject **i; // r13
  __int64 *v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // rbp
  __int128 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rbp
  __int64 v33; // r14
  __int64 v34; // r15
  QT::QObject *v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  const char *v38; // r8
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r15
  char v45; // al
  __m128i v46; // kr00_16
  __int64 v47; // rbx
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // rbx
  volatile signed __int32 *v52; // rax
  __int64 v53; // rdi
  __int64 j; // r15
  __int64 *v55; // r14
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rbp
  __int64 v61; // rax
  __int64 v62; // rbx
  char *v63; // rax
  __int64 **v64; // rdx
  __int64 **v65; // rsi
  __int64 *v66; // rdi
  __int64 *v67; // rcx
  char *v68; // rsi
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // r14
  __int64 v76; // r15
  QT::QWidget *v77; // rax
  double v78; // xmm4_8
  double v79; // xmm5_8
  __int64 *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rbx
  __int64 v84; // r14
  __int64 v85; // r15
  __m128i v86; // xmm0
  char v87; // al
  char *v88; // rbx
  __int64 v89; // rax
  __m128i *v90; // rsi
  QT::QMainWindow *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r14
  __int64 v95; // rbx
  const QT::QObject *v96; // rsi
  __m128i *v97; // rsi
  __int64 v98; // r14
  __int64 v99; // rbx
  __int64 v100; // rbx
  __int64 v101; // r14
  __int64 v102; // r15
  __int64 v103; // rbx
  QT::QWidget *v104; // rdi
  __int64 v105; // r15
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // r14
  char v109; // al
  __int64 v110; // rdx
  QT::QWidget *v111; // r13
  __int64 v112; // rax
  __int64 v113; // rdi
  __int64 v114; // r13
  __int64 v115; // r14
  __int64 v116; // rdi
  QT::QWidget *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdi
  int v121; // ebp
  __int64 v122; // rax
  QT::QObject *v123; // rbx
  void (__fastcall *v124)(QT::QObject *); // rax
  const char *v126; // rax
  const char *v127; // r13
  __int64 v128; // rbx
  size_t v129; // rax
  double v130; // xmm0_8
  __int64 v131; // rbx
  QT::QWidget *v132; // rax
  QT::QObject *v133; // rax
  char *v134; // rax
  QT::QMainWindow *v135; // rax
  char v136; // r14
  _QWORD *v137; // r14
  __int64 v138; // r15
  __int64 k; // rbx
  __m128 si128; // xmm3
  QT::QWidget *v141; // rax
  QT::QWidget *v142; // rax
  double v143; // xmm4_8
  double v144; // xmm5_8
  struct _Unwind_Exception *v145; // rbx
  char *v146; // [rsp+0h] [rbp-188h]
  __int64 *v147; // [rsp+8h] [rbp-180h]
  __int64 *v148; // [rsp+10h] [rbp-178h]
  __int64 v149; // [rsp+10h] [rbp-178h]
  unsigned int v150; // [rsp+1Ch] [rbp-16Ch]
  __int64 *v151; // [rsp+20h] [rbp-168h]
  __int64 (__fastcall **v152)(); // [rsp+38h] [rbp-150h] BYREF
  char *v153; // [rsp+40h] [rbp-148h] BYREF
  __int128 v154; // [rsp+48h] [rbp-140h]
  __int64 v155; // [rsp+60h] [rbp-128h] BYREF
  __int128 v156; // [rsp+68h] [rbp-120h]
  char *s[6]; // [rsp+80h] [rbp-108h] BYREF
  QT::QObject *v158; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 *v159; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 **v160; // [rsp+C0h] [rbp-C8h]
  __int64 **v161; // [rsp+C8h] [rbp-C0h]
  __int64 **v162; // [rsp+D0h] [rbp-B8h]
  __int64 v163; // [rsp+D8h] [rbp-B0h]
  __m128i ptr[2]; // [rsp+E0h] [rbp-A8h] BYREF
  __int128 v165; // [rsp+100h] [rbp-88h]
  __m128i v166; // [rsp+110h] [rbp-78h] BYREF
  void *v167[2]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v168; // [rsp+130h] [rbp-58h]
  int v169; // [rsp+138h] [rbp-50h]
  unsigned __int64 v170; // [rsp+148h] [rbp-40h]

  v146 = a2;
  v150 = a3;
  v170 = __readfsqword(0x28u);
  v14 = qword_8D1D00;
  if ( qword_8D1D00 )
  {
    v148 = (__int64 *)xmmword_8D1D08;
    if ( (_QWORD)xmmword_8D1D08 )
    {
      v147 = nullptr;
      v15 = 0;
      do
      {
        v16 = (__int64 *)(v14 + v15);
        v17 = *(volatile signed __int32 **)(v14 + v15 + 88);
        if ( v17 && !_InterlockedSub(v17, 1u) )
          free((void *)v16[11]);
        v18 = v16[6];
        if ( v18 )
        {
          v12 = (QT::QObject **)v16[7];
          if ( v12 )
          {
            for ( i = nullptr; i != v12; i = (QT::QObject **)((char *)i + 1) )
            {
              v20 = (__int64 *)(v18 + 40LL * (_QWORD)i);
              jvalue_t_clear(v20 + 3);
              v21 = *v20;
              if ( *v20 )
              {
                v20[1] = 0;
                qfree(v21, a2);
              }
              v18 = v16[6];
            }
          }
          v16[7] = 0;
          qfree(v18, a2);
        }
        v22 = v16[3];
        if ( v22 )
        {
          v16[4] = 0;
          qfree(v22, a2);
        }
        v23 = *v16;
        if ( *v16 )
        {
          v16[1] = 0;
          qfree(v23, a2);
        }
        v147 = (__int64 *)((char *)v147 + 1);
        v15 += 120;
        v14 = qword_8D1D00;
      }
      while ( v148 != v147 );
    }
    *(_QWORD *)&xmmword_8D1D08 = 0;
    a5 = qfree(v14, a2);
    qword_8D1D00 = 0;
    *((_QWORD *)&xmmword_8D1D08 + 1) = 0;
  }
  if ( *(_DWORD *)a2 != 3 )
  {
    sub_4B5660(a5, v14, (__int64)a2, a3, a4);
    goto LABEL_189;
  }
  v24 = *((__int64 **)a2 + 1);
  v25 = v24[1];
  if ( v25 )
  {
    v26 = *v24;
    v27 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v26 + 8) )
      {
        a2 = "closed_docks";
        if ( !strcmp(*(const char **)v26, "closed_docks") )
          break;
      }
      ++v27;
      v26 += 40;
      if ( v25 == v27 )
        goto LABEL_28;
    }
    if ( *(_DWORD *)(v26 + 24) == 3 )
    {
      a2 = *(char **)(v26 + 32);
      sub_4B6A40((__int64)&qword_8D1D00, (__int64 *)a2);
    }
  }
LABEL_28:
  if ( (v150 & 4) == 0 )
  {
    v39 = *(_QWORD *)a1;
    v14 = (__int64)a1;
    v12 = &v158;
    v158 = nullptr;
    v159 = nullptr;
    a2 = (char *)&v158;
    LOBYTE(v160) = 0;
    if ( !(*(unsigned __int8 (__fastcall **)(_BYTE *, QT::QObject **))(v39 + 352))(a1, &v158) )
    {
LABEL_156:
      jvalue_t_clear(&v158);
      goto LABEL_29;
    }
    if ( (_DWORD)v158 == 3 )
    {
      v42 = v159[1];
      if ( v42 )
      {
        v43 = *v159;
        v44 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v43 + 8) )
          {
            a2 = "closed_docks";
            if ( !strcmp(*(const char **)v43, "closed_docks") )
              break;
          }
          ++v44;
          v43 += 40;
          if ( v42 == v44 )
            goto LABEL_156;
        }
        if ( *(_DWORD *)(v43 + 24) == 3 )
        {
          a2 = *(char **)(v43 + 32);
          memset(ptr, 0, 24);
          v45 = sub_4B6A40((__int64)ptr, (__int64 *)a2);
          v46 = ptr[0];
          if ( v45 )
          {
            v47 = ptr[0].m128i_i64[0] + 120 * ptr[0].m128i_i64[1];
            if ( ptr[0].m128i_i64[0] != v47 )
            {
              v48 = ptr[0].m128i_i64[0];
              do
              {
                while ( 1 )
                {
                  a2 = nullptr;
                  if ( !sub_4B8020(v48, 0, nullptr) )
                    break;
                  v48 += 120;
                  if ( v47 == v48 )
                    goto LABEL_55;
                }
                v49 = sub_4B8020(v48, 1, nullptr);
                a2 = (char *)(v48 + 24);
                sub_4B61D0((__m128i *)(v49 + 24), (const __m128i *)(v48 + 24));
                v48 += 120;
              }
              while ( v47 != v48 );
            }
          }
LABEL_55:
          if ( v46.m128i_i64[0] )
          {
            v50 = 0;
            v51 = v46.m128i_i64[0];
            if ( v46.m128i_i64[1] )
            {
              do
              {
                v52 = *(volatile signed __int32 **)(v51 + 88);
                if ( v52 && !_InterlockedSub(v52, 1u) )
                  free(*(void **)(v51 + 88));
                v53 = *(_QWORD *)(v51 + 48);
                if ( v53 )
                {
                  v149 = *(_QWORD *)(v51 + 56);
                  if ( v149 )
                  {
                    for ( j = 0; j != v149; ++j )
                    {
                      v55 = (__int64 *)(v53 + 40 * j);
                      jvalue_t_clear(v55 + 3);
                      v56 = *v55;
                      if ( *v55 )
                      {
                        v55[1] = 0;
                        qfree(v56, a2);
                      }
                      v53 = *(_QWORD *)(v51 + 48);
                    }
                  }
                  *(_QWORD *)(v51 + 56) = 0;
                  qfree(v53, a2);
                }
                v57 = *(_QWORD *)(v51 + 24);
                if ( v57 )
                {
                  *(_QWORD *)(v51 + 32) = 0;
                  qfree(v57, a2);
                }
                v58 = *(_QWORD *)v51;
                if ( *(_QWORD *)v51 )
                {
                  *(_QWORD *)(v51 + 8) = 0;
                  qfree(v58, a2);
                }
                ++v50;
                v51 += 120;
              }
              while ( v50 != v46.m128i_i64[1] );
            }
            qfree(v46.m128i_i64[0], a2);
          }
        }
      }
      goto LABEL_156;
    }
LABEL_189:
    v145 = (struct _Unwind_Exception *)sub_4B5660(a5, v14, (__int64)a2, v40, v41);
    sub_4B60A0(v147, a2);
    jvalue_t_clear(v12);
    _Unwind_Resume(v145);
  }
LABEL_29:
  if ( (v150 & 1) == 0 )
  {
    a2 = nullptr;
    (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 360LL))(a1, 0);
  }
  v153 = nullptr;
  v154 = 0;
  sub_4D2960(ptr);
  if ( ptr[1].m128i_i32[0] > 0 )
  {
    v32 = 0;
    v33 = 8LL * (unsigned int)(ptr[1].m128i_i32[0] - 1) + 8;
    do
    {
      if ( !ptr[0].m128i_i64[0] || *(int *)ptr[0].m128i_i64[0] > 1 )
        sub_1C92D0((__int64)ptr, 0, 0, 0, v30, v31);
      a2 = nullptr;
      v34 = sub_4CD6B0(*(_QWORD *)(ptr[0].m128i_i64[1] + v32), 0);
      if ( v34 )
      {
        v35 = (QT::QObject *)operator new(0x20u);
        QT::QObject::QObject(v35, nullptr);
        *((_QWORD *)v35 + 2) = 0;
        *(_QWORD *)v35 = &object_lifecycle_monitor_t___vtable;
        sub_478D00((char *)v35, v34, 0.0, v36, v37, v38);
        v28 = v154;
        v158 = v35;
        a2 = v153;
        if ( *((_QWORD *)&v154 + 1) < (unsigned __int64)(v154 + 1) )
        {
          v153 = (char *)qvector_reserve(&v153, v153, v154 + 1, 8);
          a2 = v153;
          *(_QWORD *)&v28 = v154;
        }
        *(_QWORD *)&a2[8 * v28] = v35;
        *(_QWORD *)&v154 = v154 + 1;
      }
      v32 += 8;
    }
    while ( v33 != v32 );
  }
  if ( (int)v154 > 0 )
  {
    v59 = 0;
    v60 = 8LL * (unsigned int)(v154 - 1) + 8;
    do
    {
      v61 = *(_QWORD *)&v153[v59];
      if ( *(_BYTE *)(v61 + 24) )
      {
        if ( !under_debugger )
          interr(40345, a2, *((_QWORD *)&v28 + 1), v29, 0.0);
        BUG();
      }
      a2 = nullptr;
      QT::QWidget::setParent(*(QT::QWidget **)(v61 + 16), nullptr);
      v59 += 8;
    }
    while ( v59 != v60 );
  }
  if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
    free((void *)ptr[0].m128i_i64[0]);
  a1[529] = 1;
  v161 = &v159;
  ++dword_8D1DC0;
  LODWORD(v159) = 0;
  v160 = nullptr;
  v162 = &v159;
  v163 = 0;
  v62 = sub_4B7620(v146, a2, *((__int64 *)&v28 + 1), v29, 0.0);
  v63 = (char *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 224LL))(a1);
  v64 = v160;
  s[0] = v63;
  v65 = &v159;
  if ( !v160 )
    goto LABEL_87;
  do
  {
    while ( 1 )
    {
      v66 = v64[2];
      v67 = v64[3];
      if ( v64[4] < (__int64 *)v63 )
        break;
      v65 = v64;
      v64 = (__int64 **)v64[2];
      if ( !v66 )
        goto LABEL_85;
    }
    v64 = (__int64 **)v64[3];
  }
  while ( v67 );
LABEL_85:
  if ( v65 == &v159 || v63 < (char *)v65[4] )
  {
LABEL_87:
    ptr[0].m128i_i64[0] = (__int64)s;
    v65 = (__int64 **)sub_4B57C0(&v158, v65, (unsigned __int64 **)ptr);
  }
  v65[5] = (__int64 *)v62;
  v68 = v146;
  (*(void (__fastcall **)(_BYTE *, char *, _QWORD, __int64 *))(*(_QWORD *)a1 + 384LL))(a1, v146, v150, v67);
  v155 = 0;
  v156 = 0;
  v71 = (__int64 *)sub_4B7620(v146, v146, v69, v70, 0.0);
  v74 = v71[1];
  if ( v74 )
  {
    v75 = *v71;
    v76 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v75 + 8) )
      {
        v68 = "main";
        if ( !strcmp(*(const char **)v75, "main") )
          break;
      }
      ++v76;
      v75 += 40;
      if ( v74 == v76 )
        goto LABEL_94;
    }
    v77 = (QT::QWidget *)sub_47A690((__int64)a1);
    v68 = (char *)&v155;
    sub_4B95D0(
      &v158,
      &v155,
      v77,
      (int *)(v75 + 24),
      (__int64)v146,
      (__int64 *)&v153,
      (__m128)0LL,
      a6,
      a7,
      a8,
      v78,
      v79,
      a11,
      a12);
  }
LABEL_94:
  v80 = (__int64 *)sub_4B7620(v146, v68, v72, v73, 0.0);
  v83 = v80[1];
  if ( v83 )
  {
    v84 = *v80;
    v85 = 0;
    while ( !*(_QWORD *)(v84 + 8) || strcmp(*(const char **)v84, "floating") )
    {
      ++v85;
      v84 += 40;
      if ( v83 == v85 )
        goto LABEL_100;
    }
    if ( *(_DWORD *)(v84 + 24) == 4 )
    {
      v137 = *(_QWORD **)(v84 + 32);
      v138 = v137[1];
      if ( v138 )
      {
        for ( k = 0; k != v138; ++k )
        {
          si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DDD00);
          *(_QWORD *)&v165 = 0;
          ptr[1] = 0;
          ptr[0] = (__m128i)si128;
          v141 = (QT::QWidget *)sub_47A690((__int64)a1);
          v142 = (QT::QWidget *)sub_4C7380(v141);
          sub_4B95D0(
            &v158,
            &v155,
            v142,
            (int *)(*v137 + 16 * k),
            (__int64)v146,
            (__int64 *)&v153,
            (__m128)0LL,
            a6,
            (__m128)0LL,
            si128,
            v143,
            v144,
            a11,
            a12);
          if ( ptr[1].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[1].m128i_i64[0], 1u) )
            free((void *)ptr[1].m128i_i64[0]);
        }
      }
    }
  }
LABEL_100:
  v86.m128i_i64[0] = 0;
  memset(s, 0, 24);
  v87 = sub_4B7B20((__int64)v146, (__int64)s, v81, v82, 0.0);
  v88 = s[0];
  if ( !v87 )
    goto LABEL_101;
  v134 = s[1];
  v86.m128i_i64[0] = 0;
  memset(ptr, 0, 24);
  if ( (__int64)s[1] < 0 )
  {
    v134 = nullptr;
    if ( s[0] )
      v134 = (char *)strlen(s[0]);
  }
  QT::QByteArray::insert(ptr, 0, v134, v88);
  v135 = (QT::QMainWindow *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 224LL))(a1);
  v90 = ptr;
  v136 = QT::QMainWindow::restoreState(v135, (const QT::QByteArray *)ptr, 1);
  if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
    free((void *)ptr[0].m128i_i64[0]);
  if ( !v136 )
  {
LABEL_101:
    v89 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 224LL))(a1);
    v90 = (__m128i *)v146;
    sub_4B9D50(v89, v146);
  }
  if ( v88 )
    *(double *)v86.m128i_i64 = qfree(v88, v90->m128i_i8);
  v91 = (QT::QMainWindow *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 224LL))(a1);
  sub_4BA010(v91, (__int64)v146, v92, v93);
  v94 = v156;
  v95 = 0;
  if ( (_QWORD)v156 )
  {
    do
    {
      v96 = (const QT::QObject *)sub_4C5EA0(*(_QWORD *)(v155 + 8 * v95));
      v152 = apply_tree_layout;
      sub_4B8340((__int64)&v152, v96, (__int64)&v158);
      ++v95;
    }
    while ( v95 != v94 );
  }
  v97 = (__m128i *)v146;
  (*(void (__fastcall **)(_BYTE *, char *))(*(_QWORD *)a1 + 392LL))(a1, v146);
  v98 = v156;
  if ( (_QWORD)v156 )
  {
    v99 = 0;
    do
    {
      v97 = (__m128i *)sub_4C5EA0(*(_QWORD *)(v155 + 8 * v99));
      s[0] = (char *)swap_place_holders;
      sub_4B8340((__int64)s, (const QT::QObject *)v97, (__int64)&v158);
      ++v99;
    }
    while ( v99 != v98 );
    v100 = v156;
    if ( (_QWORD)v156 )
    {
      v101 = 0;
      do
        sub_4C6D50(*(_QWORD *)(v155 + 8 * v101++));
      while ( v101 != v100 );
      v102 = v156;
      if ( (_QWORD)v156 )
      {
        v103 = 0;
        do
        {
          v104 = (QT::QWidget *)sub_4C5EA0(*(_QWORD *)(v155 + 8 * v103));
          if ( v104 )
            QT::QWidget::show(v104);
          QT::QWidget::show(*(QT::QWidget **)(v155 + 8 * v103++));
        }
        while ( v103 != v102 );
      }
    }
  }
  if ( (int)v154 > 0 )
  {
    v105 = 0;
    v106 = 8LL * (unsigned int)(v154 - 1) + 8;
    do
    {
      v107 = *(_QWORD *)&v153[v105];
      if ( !*(_BYTE *)(v107 + 24) )
      {
        v108 = *(_QWORD *)(v107 + 16);
        if ( v108 )
        {
          if ( (sub_4B8BA0(*(char **)(v107 + 16)) & 0x40000000) == 0 )
          {
            v109 = sub_4B8BA0((char *)v108);
            v110 = *(_QWORD *)(*(_QWORD *)(v108 + 8) + 16LL);
            if ( (v109 & 0x40) != 0 )
            {
              if ( !v110 )
              {
                v86.m128i_i64[0] = 0;
                memset(ptr, 0, sizeof(ptr));
                v168 = 0;
                v169 = 0;
                *(__m128i *)s = _mm_load_si128((const __m128i *)&xmmword_5DC310);
                memset(&s[2], 0, 24);
                v165 = 0;
                v166 = *(__m128i *)s;
                *(_OWORD *)v167 = 0;
                if ( (unsigned __int8)sub_47A7F0((__int64)a1, ptr) && (v169 & 0x80u) != 0 )
                {
                  v86 = _mm_load_si128(&v166);
                  *(__m128i *)s = v86;
                  QT::QByteArray::operator=(&s[2], v167);
                }
                v111 = (QT::QWidget *)sub_47A690((__int64)a1);
                v112 = (*(__int64 (__fastcall **)(_BYTE *))(*((_QWORD *)a1 + 2) + 88LL))(a1 + 16);
                v97 = (__m128i *)(*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v112 + 128LL))(
                                   v112,
                                   v108,
                                   0);
                sub_4CAF60(v111);
                if ( v167[0] && !_InterlockedSub((volatile signed __int32 *)v167[0], 1u) )
                  free(v167[0]);
                v113 = ptr[1].m128i_i64[1];
                if ( ptr[1].m128i_i64[1] )
                {
                  v114 = v165;
                  if ( (_QWORD)v165 )
                  {
                    v115 = 0;
                    do
                    {
                      v151 = (__int64 *)(v113 + 40 * v115);
                      jvalue_t_clear(v151 + 3);
                      v116 = *v151;
                      if ( *v151 )
                      {
                        v151[1] = 0;
                        qfree(v116, v97->m128i_i8);
                      }
                      ++v115;
                      v113 = ptr[1].m128i_i64[1];
                    }
                    while ( v114 != v115 );
                  }
                  *(_QWORD *)&v165 = 0;
                  *(double *)v86.m128i_i64 = qfree(v113, v97->m128i_i8);
                }
                if ( ptr[0].m128i_i64[0] )
                {
                  ptr[0].m128i_i64[1] = 0;
                  *(double *)v86.m128i_i64 = qfree(ptr[0].m128i_i64[0], v97->m128i_i8);
                }
                if ( s[2] && !_InterlockedSub((volatile signed __int32 *)s[2], 1u) )
                  free(s[2]);
              }
            }
            else if ( !v110 )
            {
              QT::QObject::deleteLater((QT::QObject *)v108);
            }
          }
        }
      }
      v105 += 8;
    }
    while ( v106 != v105 );
  }
  v117 = (QT::QWidget *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 224LL))(a1);
  QT::QWidget::show(v117);
  if ( (v150 & 2) == 0 )
  {
    v126 = sub_4B7EA0((__int64)v146, (__int64)v97, v118, v119, *(double *)v86.m128i_i64);
    if ( v126 )
    {
      memset(s, 0, 24);
      v127 = sub_17DED0((__int64 *)s, v126, 0);
      v128 = sub_47A690((__int64)a1);
      v129 = 0;
      if ( v127 )
        v129 = strlen(v127);
      v130 = QT::QString::fromUtf8(ptr, v129, v127);
      v97 = ptr;
      v131 = sub_4C6D30(v128, ptr);
      if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
        free((void *)ptr[0].m128i_i64[0]);
      if ( s[0] )
      {
        s[1] = nullptr;
        qfree(s[0], ptr[0].m128i_i8, v130);
      }
      if ( v131 )
        goto LABEL_166;
    }
    v133 = (QT::QObject *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 376LL))(a1);
    v131 = sub_4CF3F0(v133);
    if ( v131 )
    {
LABEL_166:
      v132 = (QT::QWidget *)sub_47A690((__int64)a1);
      v97 = (__m128i *)v131;
      sub_4CB2D0(v132);
    }
  }
  a1[529] = 0;
  if ( v155 )
  {
    *(_QWORD *)&v156 = 0;
    qfree(v155, v97->m128i_i8);
  }
  sub_4B6540(v160);
  sub_4D2110(&v158);
  v120 = (__int64)v153;
  if ( (_QWORD)v154 )
  {
    v121 = 0;
    v122 = 0;
    while ( 1 )
    {
      v123 = *(QT::QObject **)(v120 + 8 * v122);
      if ( !v123 )
        goto LABEL_147;
      v124 = *(void (__fastcall **)(QT::QObject *))(*(_QWORD *)v123 + 32LL);
      if ( v124 == object_lifecycle_monitor_t__::vfunc_4 )
      {
        *(_QWORD *)v123 = &object_lifecycle_monitor_t___vtable;
        QT::QObject::~QObject(v123);
        v97 = (__m128i *)&qword_20;
        operator delete(v123, 0x20u);
        v120 = (__int64)v153;
LABEL_147:
        v122 = ++v121;
        if ( v121 >= (unsigned __int64)v154 )
          break;
      }
      else
      {
        ++v121;
        v124(v123);
        v120 = (__int64)v153;
        v122 = v121;
        if ( v121 >= (unsigned __int64)v154 )
          break;
      }
    }
  }
  if ( v120 )
  {
    *(_QWORD *)&v154 = 0;
    qfree(v120, v97->m128i_i8);
  }
  return 1;
}
