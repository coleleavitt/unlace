__int64 *__fastcall sub_4BB660(__int64 a1, unsigned __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  bool v6; // zf
  int v7; // eax
  const char *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdi
  double v11; // xmm0_8
  int v12; // eax
  __int64 v13; // r13
  int *v14; // rbx
  __int64 v15; // rbp
  _QWORD *v16; // rax
  _QWORD *v17; // r12
  void *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  char *v21; // rbp
  _QWORD *v22; // rax
  __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r15d
  __int64 v27; // rax
  size_t v28; // rcx
  _DWORD *v29; // rsi
  __int64 v30; // rax
  const QT::QObject *v31; // rbp
  int v32; // eax
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // r15
  QT::QWidget *(__fastcall *v36)(QT::QWidget *, __int64); // rax
  char *v37; // r8
  size_t v38; // rbp
  _QWORD *v39; // rax
  __int64 v40; // rax
  size_t v41; // r14
  _QWORD *v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // r15
  __int64 v46; // rbp
  __int64 *v47; // r14
  __int64 v48; // rdi
  unsigned int v49; // eax
  __int64 v50; // rbp
  __int64 v51; // r14
  __int64 v52; // r15
  __int64 v53; // rbx
  __int64 v54; // r13
  int v55; // r10d
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rdx
  char *v59; // rcx
  char *v60; // rax
  _BYTE *v61; // rax
  char *v62; // rdx
  __int64 v63; // rdx
  _QWORD *v64; // rax
  char *v65; // r14
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  _QWORD *v69; // rbp
  size_t v70; // rdx
  size_t v71; // r15
  void *v72; // rax
  void *v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r14
  unsigned __int64 *v78; // r15
  unsigned __int64 v79; // rdx
  char *v80; // rbp
  size_t v81; // r15
  size_t v82; // r8
  __int64 v83; // rdi
  void *v84; // rax
  const void **v85; // rdx
  _QWORD *v86; // r15
  __int64 v87; // rax
  _QWORD *v88; // r15
  __int64 v89; // rax
  __int64 v90; // rdi
  __int64 *v91; // r14
  __int64 v92; // r13
  __int64 i; // rbp
  __int64 *v94; // r12
  __int64 v95; // rdi
  __int64 v97; // rax
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // r14
  __int64 v101; // r15
  __int64 v102; // r12
  __int64 v103; // r13
  int v104; // r11d
  __int64 v105; // r12
  void *v106; // rax
  __int64 v107; // r14
  int v108; // r15d
  __m128 v109; // xmm0
  __int64 v110; // r13
  int v111; // ebp
  __int64 v112; // r14
  __int64 v113; // r15
  __int64 v114; // rbp
  __int64 v115; // r13
  int v116; // edx
  __int64 v117; // rbp
  char *v118; // r9
  void *v119; // rdi
  void *v120; // rsi
  __int64 v121; // rax
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // r15
  __m128 v125; // xmm6
  __int64 v126; // r12
  int v127; // r13d
  __int64 v128; // rax
  _QWORD *v129; // rbp
  __int64 v130; // rax
  __m128i v131; // xmm4
  __m128i v132; // xmm5
  double v133; // xmm0_8
  __int64 v134; // rax
  __int64 v135; // rsi
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rsi
  __int64 v139; // rdx
  __int64 v140; // rax
  _QWORD *v141; // rbp
  __int64 *v142; // rax
  __int64 v143; // r14
  __int64 v144; // rsi
  __int64 v145; // r12
  __int64 j; // r13
  __int64 v147; // rbp
  __int64 v148; // rax
  __int64 *v149; // rax
  __int64 v150; // rdx
  __int64 *v151; // rax
  char *v152; // rsi
  __int64 v153; // rdx
  __int64 v154; // rbp
  __int64 *v155; // rax
  void *v156; // rsi
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 *v160; // r14
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 *v163; // rax
  char *v164; // rsi
  __int64 v165; // rax
  __int64 *v166; // r14
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 *v169; // r14
  __int64 v170; // rax
  __int64 v171; // [rsp+0h] [rbp-138h]
  __int64 v172; // [rsp+0h] [rbp-138h]
  void *v173; // [rsp+8h] [rbp-130h] BYREF
  __m128i v174; // [rsp+10h] [rbp-128h] BYREF
  double v175; // [rsp+20h] [rbp-118h]
  __int64 v176; // [rsp+28h] [rbp-110h]
  void *v177; // [rsp+30h] [rbp-108h]
  __int64 v178; // [rsp+38h] [rbp-100h]
  size_t v179; // [rsp+40h] [rbp-F8h]
  void *src; // [rsp+48h] [rbp-F0h]
  __int64 *v181; // [rsp+50h] [rbp-E8h]
  const char *v182; // [rsp+58h] [rbp-E0h]
  __m128i v183; // [rsp+60h] [rbp-D8h] BYREF
  signed __int64 v184; // [rsp+70h] [rbp-C8h]
  __int64 v185; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v186; // [rsp+88h] [rbp-B0h]
  void *v187; // [rsp+A0h] [rbp-98h] BYREF
  size_t n[3]; // [rsp+A8h] [rbp-90h]
  void *v189[2]; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v190; // [rsp+D0h] [rbp-68h]
  void *ptr; // [rsp+E0h] [rbp-58h] BYREF
  char *s; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v193; // [rsp+F8h] [rbp-40h]

  v176 = a1;
  v174.m128i_i64[0] = a2;
  v193 = __readfsqword(0x28u);
  if ( !a2 )
    return nullptr;
  v5 = qalloc_or_throw(24);
  *(_QWORD *)v5 = 0;
  *(_OWORD *)(v5 + 8) = 0;
  v6 = *(_DWORD *)(a2 + 40) == 2;
  v181 = (__int64 *)v5;
  if ( v6 )
  {
    v49 = QT::QTabBar::currentIndex(*(QT::QTabBar **)(v174.m128i_i64[0] + 64));
    v50 = (int)sub_4CEAC0(v174.m128i_i64[0], v49);
    v51 = v181[1];
    v52 = *v181;
    if ( v51 )
    {
      v53 = *v181;
      v54 = 0;
      while ( 1 )
      {
        if ( *(_QWORD *)(v53 + 8) )
        {
          a2 = (unsigned __int64)"index";
          if ( !strcmp(*(const char **)v53, "index") )
            break;
        }
        ++v54;
        v53 += 40;
        if ( v51 == v54 )
          goto LABEL_190;
      }
    }
    else
    {
LABEL_190:
      if ( v181[2] < (unsigned __int64)(v51 + 1) )
      {
        v158 = qvector_reserve(v181, v52, v51 + 1, 40);
        v51 = v181[1];
        *v181 = v158;
        v52 = v158;
      }
      v53 = v52 + 40 * v51;
      v149 = v181;
      *(_QWORD *)v53 = 0;
      *(_OWORD *)(v53 + 8) = 0;
      *(_DWORD *)(v53 + 24) = 0;
      *(_QWORD *)(v53 + 32) = 0;
      ++v149[1];
      a2 = *(_QWORD *)v53;
      if ( *(_QWORD *)(v53 + 16) <= 5u )
      {
        v157 = qvector_reserve(v52 + 40 * v51, a2, 6, 1);
        *(_QWORD *)v53 = v157;
        a2 = v157;
      }
      *(_QWORD *)(v53 + 8) = 6;
      *(_DWORD *)a2 = 1701080681;
      *(_BYTE *)(a2 + 4) = 120;
      *(_BYTE *)(*(_QWORD *)v53 + 5LL) = 0;
    }
    v55 = *(_DWORD *)(v53 + 24);
    v56 = v53 + 24;
    if ( v55 )
      jvalue_t_clear(v56);
    *(_DWORD *)v56 = 1;
    *(_QWORD *)(v56 + 8) = v50;
    v182 = "tabs";
    v178 = 0;
  }
  else
  {
    v7 = QT::QSplitter::orientation(*(QT::QSplitter **)(v174.m128i_i64[0] + 104));
    v178 = v174.m128i_i64[0];
    v6 = v7 == 1;
    v8 = "hsplit";
    if ( !v6 )
      v8 = "vsplit";
    v182 = v8;
  }
  v9 = (_QWORD *)operator new(0x18u);
  v10 = v174.m128i_i64[0];
  v11 = 0.0;
  v177 = v9;
  *v9 = 0;
  *(_OWORD *)(v9 + 1) = 0;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 464LL))(v10);
  if ( v12 <= 0 )
  {
    if ( *((_QWORD *)v177 + 1) )
    {
      v171 = 0;
      v14 = nullptr;
      v173 = nullptr;
      goto LABEL_138;
    }
    if ( v177 )
    {
      v14 = nullptr;
      v173 = nullptr;
LABEL_117:
      if ( *(_QWORD *)v177 )
        qfree(*(_QWORD *)v177, (const char *)a2);
      a2 = 24;
      operator delete(v177, 0x18u);
LABEL_120:
      if ( !v181 )
        goto LABEL_129;
      v90 = *v181;
      if ( !*v181 )
      {
LABEL_128:
        qfree(v181, (const char *)a2);
LABEL_129:
        v181 = nullptr;
        goto LABEL_130;
      }
LABEL_122:
      v91 = v181;
      v92 = v181[1];
      if ( v92 )
      {
        for ( i = 0; i != v92; ++i )
        {
          v94 = (__int64 *)(v90 + 40 * i);
          jvalue_t_clear(v94 + 3);
          v95 = *v94;
          if ( *v94 )
          {
            v94[1] = 0;
            qfree(v95, (const char *)a2);
          }
          v90 = *v91;
        }
      }
      v181[1] = 0;
      qfree(v90, (const char *)a2);
      goto LABEL_128;
    }
    if ( v181 )
    {
      if ( *v181 )
      {
        v90 = *v181;
        v14 = nullptr;
        v173 = nullptr;
        goto LABEL_122;
      }
      qfree(v181, (const char *)a2);
    }
    return nullptr;
  }
  v171 = 0;
  v13 = 0;
  v14 = nullptr;
  *(_QWORD *)&v175 = v12;
  v173 = nullptr;
  do
  {
    a2 = (unsigned int)v13;
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v174.m128i_i64[0] + 456LL))(
            v174.m128i_i64[0],
            (unsigned int)v13);
    v31 = (const QT::QObject *)v30;
    if ( v30 )
    {
      v32 = *(_DWORD *)(v30 + 40);
      if ( v32 )
      {
        if ( (unsigned int)(v32 - 1) <= 1 )
        {
          a2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_86E200, v31);
          v15 = sub_4BB660(v176, a2);
          if ( v15 )
          {
            v16 = (_QWORD *)operator new(0x10u);
            *(_DWORD *)v16 = 3;
            v17 = v16;
            v16[1] = v15;
            if ( v16 )
              goto LABEL_11;
          }
        }
      }
      else
      {
        v6 = *((_BYTE *)v31 + 44) == 0;
        v185 = 0;
        v186 = 0;
        if ( !v6 )
        {
          v185 = qvector_reserve(&v185, 0, 1, 40);
          v33 = v185 + 40 * v186;
          *(_QWORD *)v33 = 0;
          *(_DWORD *)(v33 + 24) = 0;
          *(_QWORD *)(v33 + 32) = 0;
          *(_OWORD *)(v33 + 8) = 0;
          *(_QWORD *)&v186 = v186 + 1;
          v34 = qvector_reserve(v33, *(_QWORD *)v33, 7, 1);
          *(_QWORD *)v33 = v34;
          *(_QWORD *)(v33 + 8) = 7;
          *(_DWORD *)v34 = 1684302184;
          *(_WORD *)(v34 + 4) = 28261;
          *(_BYTE *)(*(_QWORD *)v33 + 6LL) = 0;
          if ( *(_DWORD *)(v33 + 24) )
            jvalue_t_clear(v33 + 24);
          *(_DWORD *)(v33 + 24) = 5;
          *(_BYTE *)(v33 + 32) = 1;
        }
        v35 = sub_4CD6B0(v31, 0);
        v36 = *(QT::QWidget *(__fastcall **)(QT::QWidget *, __int64))(*(_QWORD *)v31 + 416LL);
        if ( v36 == sub_467FA0 )
        {
          if ( sub_4CD6B0(v31, 0) )
          {
            QT::QWidget::windowTitle((QT::QWidget *)v189);
          }
          else
          {
            v190 = 0;
            *(_OWORD *)v189 = 0;
          }
        }
        else
        {
          v36((QT::QWidget *)v189, (__int64)v31);
        }
        QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v189);
        v37 = s;
        v187 = nullptr;
        *(_OWORD *)n = 0;
        if ( s || (v37 = (char *)&QT::QByteArray::_empty) != nullptr )
        {
          src = v37;
          v38 = strlen(v37);
          v179 = v38 + 1;
          v187 = (void *)qvector_reserve(&v187, 0, v38 + 1, 1);
          n[0] = v38 + 1;
          memmove(v187, src, v38);
          *((_BYTE *)v187 + v38) = 0;
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
        if ( v189[0] && !_InterlockedSub((volatile signed __int32 *)v189[0], 1u) )
          free(v189[0]);
        v39 = (_QWORD *)operator new(0x10u);
        *v39 = 0;
        v17 = v39;
        v39[1] = 0;
        v40 = operator new(0x18u);
        v41 = n[0];
        v11 = 0.0;
        *(_QWORD *)v40 = 0;
        v42 = (_QWORD *)v40;
        *(_OWORD *)(v40 + 8) = 0;
        if ( v41 )
        {
          v72 = (void *)qalloc_or_throw(v41);
          *v42 = v72;
          v73 = v187;
          v42[2] = v41;
          memcpy(v72, v73, v41);
          v42[1] = v41;
        }
        if ( *(_DWORD *)v17 )
          jvalue_t_clear(v17);
        v43 = v176;
        v17[1] = v42;
        a2 = v35;
        *(_DWORD *)v17 = 2;
        sub_4B8820(&v185, v35, *(_DWORD *)(v43 + 16));
        if ( (_QWORD)v186 )
        {
          v74 = qalloc_or_throw(24);
          v11 = 0.0;
          *(_QWORD *)v74 = 0;
          v77 = v74;
          *(_OWORD *)(v74 + 8) = 0;
          *(_QWORD *)v74 = v185;
          v185 = 0;
          *(_OWORD *)(v74 + 8) = v186;
          v186 = 0;
          if ( *(_DWORD *)v176 != 3 )
          {
            sub_4B56A0(0.0, 24, v35, v75, v76);
LABEL_218:
            if ( !under_debugger )
            {
              interr(1624, a2, v20, v18, v11);
LABEL_220:
              if ( !under_debugger )
                interr(1623, a2, v67, v68, v11);
            }
            BUG();
          }
          v78 = *(unsigned __int64 **)(v176 + 8);
          v79 = v78[1];
          a2 = *v78;
          if ( v78[2] < v79 + 1 )
          {
            v97 = qvector_reserve(*(_QWORD *)(v176 + 8), a2, v79 + 1, 40);
            *v78 = v97;
            v79 = v78[1];
            a2 = v97;
          }
          v11 = 0.0;
          v80 = (char *)(a2 + 40 * v79);
          *(_QWORD *)v80 = 0;
          *((_DWORD *)v80 + 6) = 0;
          *((_QWORD *)v80 + 4) = 0;
          *(_OWORD *)(v80 + 8) = 0;
          ++v78[1];
          if ( v80 != (char *)&v187 )
          {
            v81 = n[0];
            if ( n[0] && (v82 = n[0] - 1, n[0] != 1) )
            {
              v118 = (char *)v187;
              v119 = *(void **)v80;
              if ( *((_QWORD *)v80 + 2) < n[0] )
              {
                v120 = *(void **)v80;
                src = v187;
                v179 = n[0] - 1;
                v121 = qvector_reserve(v80, v120, n[0], 1);
                *(_QWORD *)v80 = v121;
                v118 = (char *)src;
                v119 = (void *)v121;
                v82 = v179;
              }
              *((_QWORD *)v80 + 1) = v81;
              a2 = (unsigned __int64)v118;
              memmove(v119, v118, v82);
              *(_BYTE *)(*(_QWORD *)v80 + v81 - 1) = 0;
            }
            else
            {
              *((_QWORD *)v80 + 1) = 0;
            }
          }
          if ( *((_DWORD *)v80 + 6) )
            jvalue_t_clear(v80 + 24);
          *((_DWORD *)v80 + 6) = 3;
          *((_QWORD *)v80 + 4) = v77;
        }
        if ( v187 )
        {
          n[0] = 0;
          v11 = qfree(v187, (const char *)a2);
        }
        v44 = v185;
        if ( v185 )
        {
          v45 = v186;
          if ( (_QWORD)v186 )
          {
            v46 = 0;
            do
            {
              v47 = (__int64 *)(v44 + 40 * v46);
              jvalue_t_clear(v47 + 3);
              v48 = *v47;
              if ( *v47 )
              {
                v47[1] = 0;
                qfree(v48, (const char *)a2);
              }
              ++v46;
              v44 = v185;
            }
            while ( v45 != v46 );
          }
          *(_QWORD *)&v186 = 0;
          v11 = qfree(v44, (const char *)a2);
        }
        if ( v17 )
        {
          if ( *(_DWORD *)v17 != 2 )
          {
            if ( *(_DWORD *)v17 == 3 )
            {
LABEL_11:
              v18 = v177;
              v19 = *((_QWORD *)v177 + 1);
              a2 = *(_QWORD *)v177;
              v20 = v19 + 1;
              if ( *((_QWORD *)v177 + 2) < (unsigned __int64)(v19 + 1) )
              {
                v88 = v177;
                v89 = qvector_reserve(v177, a2, v20, 16);
                *(_QWORD *)v177 = v89;
                a2 = v89;
                v19 = v88[1];
              }
              v21 = (char *)(a2 + 16 * v19);
              v22 = v177;
              *(_QWORD *)v21 = 0;
              *((_QWORD *)v21 + 1) = 0;
              ++v22[1];
              if ( *(_DWORD *)v17 != 3 )
                goto LABEL_218;
              *(_DWORD *)v17 = 0;
              v23 = v17[1];
              v17[1] = 0;
              if ( *(_DWORD *)v21 )
                jvalue_t_clear(v21);
              *(_DWORD *)v21 = 3;
              *((_QWORD *)v21 + 1) = v23;
            }
LABEL_17:
            if ( v178 )
            {
              QT::QSplitter::sizes((QT::QSplitter *)&ptr);
              if ( !ptr || *(int *)ptr > 1 )
                sub_187120((__int64)&ptr, 0, 0, 0, v24, v25);
              v26 = *(_DWORD *)&s[4 * v13];
              if ( !v14 )
                goto LABEL_24;
              if ( *v14 > 1 )
                goto LABEL_23;
              v61 = (_BYTE *)(((unsigned __int64)v14 + 31) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *((_QWORD *)v14 + 1) - (((_BYTE *)v173 - v61) >> 2) == v171 )
              {
                if ( !v171 )
                {
                  v62 = (char *)v173;
                  if ( v61 != v173 )
                  {
                    *((_DWORD *)v173 - 1) = v26;
                    v173 = v62 - 4;
                    v171 = 1;
                    goto LABEL_86;
                  }
                }
LABEL_23:
                if ( *v14 <= 1 )
                {
                  v57 = (__int64)((__int64)v173 - (((unsigned __int64)v14 + 31) & 0xFFFFFFFFFFFFFFF0LL)) >> 2;
                  if ( *((_QWORD *)v14 + 1) - v171 - v57 > 0 )
                  {
                    v60 = (char *)v173 + 4 * v171;
                  }
                  else
                  {
                    if ( (__int64)((__int64)v173 - (((unsigned __int64)v14 + 31) & 0xFFFFFFFFFFFFFFF0LL)) <= 0
                      || 3 * v171 >= 2LL * *((_QWORD *)v14 + 1) )
                    {
                      goto LABEL_24;
                    }
                    v58 = -v57;
                    v59 = (char *)v173 + 4 * v58;
                    if ( v171 && v59 != v173 && v173 && v59 )
                      v59 = (char *)memmove((char *)v173 + 4 * v58, v173, 4 * v171);
                    v173 = v59;
                    v60 = &v59[4 * v171];
                  }
                  ++v171;
                  *(_DWORD *)v60 = v26;
                  goto LABEL_86;
                }
LABEL_24:
                v183.m128i_i64[0] = (__int64)v14;
                v183.m128i_i64[1] = (__int64)v173;
                v184 = v171;
                sub_187120((__int64)&v183, 0, 1, 0, v24, v25);
                v27 = v171;
                v28 = v184;
                v173 = (void *)v183.m128i_i64[1];
                v14 = (int *)v183.m128i_i64[0];
                v29 = (_DWORD *)(v183.m128i_i64[1] + 4 * v171);
                if ( v171 < v184 )
                {
                  v179 = v184;
                  v172 = v183.m128i_i64[1] + 4 * v171;
                  memmove(v29 + 1, v29, 4 * (v184 - v27));
                  v28 = v179;
                  v29 = (_DWORD *)v172;
                }
                *v29 = v26;
                v171 = v28 + 1;
                if ( !v14 )
                {
LABEL_27:
                  v183.m128i_i64[0] = (__int64)v14;
                  v183.m128i_i64[1] = (__int64)v173;
                  v184 = v171;
                  sub_187120((__int64)&v183, 0, 0, 0, v24, v25);
                  v173 = (void *)v183.m128i_i64[1];
                  v14 = (int *)v183.m128i_i64[0];
                  v171 = v184;
                  goto LABEL_28;
                }
              }
              else
              {
                *((_DWORD *)v173 + v171++) = v26;
              }
LABEL_86:
              if ( *v14 > 1 )
                goto LABEL_27;
LABEL_28:
              if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
                free(ptr);
            }
            jvalue_t_clear(v17);
            a2 = 16;
            operator delete(v17, 0x10u);
            goto LABEL_32;
          }
          v63 = *((_QWORD *)v177 + 1);
          a2 = *(_QWORD *)v177;
          if ( *((_QWORD *)v177 + 2) < (unsigned __int64)(v63 + 1) )
          {
            v86 = v177;
            v87 = qvector_reserve(v177, a2, v63 + 1, 16);
            *(_QWORD *)v177 = v87;
            v63 = v86[1];
            a2 = v87;
          }
          v64 = v177;
          v65 = (char *)(a2 + 16 * v63);
          *(_QWORD *)v65 = 0;
          *((_QWORD *)v65 + 1) = 0;
          ++v64[1];
          v66 = operator new(0x18u);
          v69 = (_QWORD *)v66;
          if ( *(_DWORD *)v17 != 2 )
            goto LABEL_220;
          v70 = v17[1];
          v11 = 0.0;
          *(_QWORD *)v66 = 0;
          *(_OWORD *)(v66 + 8) = 0;
          v71 = *(_QWORD *)(v70 + 8);
          if ( v71 )
          {
            v83 = *(_QWORD *)(v70 + 8);
            v179 = v70;
            v84 = (void *)qalloc_or_throw(v83);
            v85 = (const void **)v179;
            *v69 = v84;
            v69[2] = v71;
            memcpy(v84, *v85, v71);
            v69[1] = v71;
            if ( !*(_DWORD *)v65 )
              goto LABEL_97;
          }
          else if ( !*(_DWORD *)v65 )
          {
LABEL_97:
            *(_DWORD *)v65 = 2;
            *((_QWORD *)v65 + 1) = v69;
            goto LABEL_17;
          }
          jvalue_t_clear(v65);
          goto LABEL_97;
        }
      }
    }
LABEL_32:
    ++v13;
  }
  while ( *(_QWORD *)&v175 != v13 );
  if ( !*((_QWORD *)v177 + 1) )
  {
    if ( v177 )
      goto LABEL_117;
    goto LABEL_120;
  }
LABEL_138:
  sub_1D0CB0(v181, "type", v182);
  v100 = v181[1];
  v101 = *v181;
  if ( v100 )
  {
    v102 = *v181;
    v103 = 0;
    while ( !*(_QWORD *)(v102 + 8) || strcmp(*(const char **)v102, "children") )
    {
      ++v103;
      v102 += 40;
      if ( v100 == v103 )
        goto LABEL_195;
    }
  }
  else
  {
LABEL_195:
    v150 = v100 + 1;
    if ( v181[2] < (unsigned __int64)(v100 + 1) )
    {
      v160 = v181;
      v161 = qvector_reserve(v181, v101, v150, 40);
      *v181 = v161;
      v101 = v161;
      v100 = v160[1];
    }
    v102 = v101 + 40 * v100;
    v151 = v181;
    *(_QWORD *)v102 = 0;
    *(_OWORD *)(v102 + 8) = 0;
    *(_DWORD *)(v102 + 24) = 0;
    *(_QWORD *)(v102 + 32) = 0;
    ++v151[1];
    v152 = *(char **)v102;
    if ( *(_QWORD *)(v102 + 16) <= 8u )
    {
      v159 = qvector_reserve(v101 + 40 * v100, v152, 9, 1);
      *(_QWORD *)v102 = v159;
      v152 = (char *)v159;
    }
    *(_QWORD *)(v102 + 8) = 9;
    *(_QWORD *)v152 = 0x6E6572646C696863LL;
    *(_BYTE *)(*(_QWORD *)v102 + 8LL) = 0;
  }
  v104 = *(_DWORD *)(v102 + 24);
  v105 = v102 + 24;
  if ( v104 )
    jvalue_t_clear(v105);
  v106 = v177;
  *(_DWORD *)v105 = 4;
  *(_QWORD *)(v105 + 8) = v106;
  if ( v171 > 1 && (int)v171 > 0 )
  {
    v107 = 0;
    v108 = 0;
    v109 = _mm_loadh_ps((const double *)&v173);
    v110 = 4LL * (unsigned int)(v171 - 1) + 4;
    do
    {
      if ( !v109.m128_u64[0] || *(int *)v109.m128_u64[0] > 1 )
      {
        v183 = (__m128i)v109;
        v184 = v171;
        sub_187120((__int64)&v183, 0, 0, 0, v98, v99);
        v109 = (__m128)_mm_load_si128(&v183);
        v173 = (void *)v183.m128i_i64[1];
        v14 = (int *)v183.m128i_i64[0];
        v171 = v184;
      }
      a5 = _mm_movehl_ps(a5, v109);
      v108 += *(_DWORD *)(a5.m128_u64[0] + v107);
      v107 += 4;
      v111 = v108;
    }
    while ( v107 != v110 );
    if ( v108 > 0 )
    {
      v124 = operator new(0x18u);
      *(_OWORD *)(v124 + 8) = 0;
      v125 = _mm_loadh_ps((const double *)&v173);
      *(_QWORD *)v124 = 0;
      v174 = (__m128i)v125;
      v175 = 100.0 / (double)v111;
      if ( (int)v171 - 1 <= 0 )
      {
        v138 = 0;
        v139 = 1;
        v127 = 0;
      }
      else
      {
        v126 = 0;
        v127 = 0;
        v176 = 4LL * (unsigned int)(v171 - 2) + 4;
        do
        {
          if ( !v174.m128i_i64[0] || *(int *)v174.m128i_i64[0] > 1 )
          {
            v131 = _mm_load_si128(&v174);
            v184 = v171;
            v183 = v131;
            sub_187120((__int64)&v183, 0, 0, 0, v122, v123);
            v132 = _mm_load_si128(&v183);
            v173 = (void *)v183.m128i_i64[1];
            v14 = (int *)v183.m128i_i64[0];
            v174 = v132;
            v171 = v184;
          }
          v133 = round((double)*(int *)(v174.m128i_i64[1] + v126) * v175);
          v134 = *(_QWORD *)(v124 + 8);
          v135 = *(_QWORD *)v124;
          LODWORD(v123) = (int)v133;
          v127 += (int)v133;
          if ( *(_QWORD *)(v124 + 16) < (unsigned __int64)(v134 + 1) )
          {
            LODWORD(v177) = (int)v133;
            v136 = qvector_reserve(v124, v135, v134 + 1, 16);
            *(_QWORD *)v124 = v136;
            v135 = v136;
            LODWORD(v123) = (_DWORD)v177;
            v134 = *(_QWORD *)(v124 + 8);
          }
          v128 = 16 * v134;
          v123 = (int)v123;
          v129 = (_QWORD *)(v135 + v128);
          *v129 = 0;
          v129[1] = 0;
          ++*(_QWORD *)(v124 + 8);
          if ( *(_DWORD *)(v135 + v128) )
          {
            v177 = (void *)(int)v123;
            jvalue_t_clear(v135 + v128);
            v123 = (__int64)v177;
          }
          v130 = v176;
          v126 += 4;
          *(_DWORD *)v129 = 1;
          v129[1] = v123;
        }
        while ( v126 != v130 );
        v137 = *(_QWORD *)(v124 + 8);
        v138 = *(_QWORD *)v124;
        v139 = v137 + 1;
        if ( *(_QWORD *)(v124 + 16) >= (unsigned __int64)(v137 + 1) )
          goto LABEL_177;
      }
      v148 = qvector_reserve(v124, v138, v139, 16);
      *(_QWORD *)v124 = v148;
      v138 = v148;
      v137 = *(_QWORD *)(v124 + 8);
LABEL_177:
      v140 = 16 * v137;
      v141 = (_QWORD *)(v138 + v140);
      *v141 = 0;
      v141[1] = 0;
      ++*(_QWORD *)(v124 + 8);
      if ( *(_DWORD *)(v138 + v140) )
        jvalue_t_clear(v138 + v140);
      v142 = v181;
      *(_DWORD *)v141 = 1;
      v141[1] = 100 - v127;
      v143 = v142[1];
      v144 = *v142;
      if ( v143 )
      {
        v174.m128i_i64[0] = *v142;
        v145 = v144;
        for ( j = 0; j != v143; ++j )
        {
          if ( *(_QWORD *)(v145 + 8) && !strcmp(*(const char **)v145, "partitions") )
          {
            v147 = v145 + 24;
            goto LABEL_185;
          }
          v145 += 40;
        }
        v144 = v174.m128i_i64[0];
      }
      v153 = v143 + 1;
      if ( v181[2] < (unsigned __int64)(v143 + 1) )
      {
        v169 = v181;
        v170 = qvector_reserve(v181, v144, v153, 40);
        *v169 = v170;
        v144 = v170;
        v143 = v169[1];
      }
      v154 = v144 + 40 * v143;
      v155 = v181;
      *(_QWORD *)v154 = 0;
      *(_OWORD *)(v154 + 8) = 0;
      *(_DWORD *)(v154 + 24) = 0;
      *(_QWORD *)(v154 + 32) = 0;
      ++v155[1];
      v156 = *(void **)v154;
      if ( *(_QWORD *)(v154 + 16) <= 0xAu )
      {
        v168 = qvector_reserve(v154, v156, 11, 1);
        *(_QWORD *)v154 = v168;
        v156 = (void *)v168;
      }
      *(_QWORD *)(v154 + 8) = 11;
      v147 = v154 + 24;
      qmemcpy(v156, "partitions", 10);
      *(_BYTE *)(*(_QWORD *)(v147 - 24) + 10LL) = 0;
LABEL_185:
      if ( *(_DWORD *)v147 )
        jvalue_t_clear(v147);
      *(_DWORD *)v147 = 4;
      *(_QWORD *)(v147 + 8) = v124;
    }
  }
  if ( v178 && !(unsigned int)QT::QSplitter::handleWidth(*(QT::QSplitter **)(v178 + 104)) )
  {
    v112 = v181[1];
    v113 = *v181;
    if ( v112 )
    {
      v114 = *v181;
      v115 = 0;
      while ( !*(_QWORD *)(v114 + 8) || strcmp(*(const char **)v114, "hide_handles") )
      {
        ++v115;
        v114 += 40;
        if ( v112 == v115 )
          goto LABEL_209;
      }
    }
    else
    {
LABEL_209:
      if ( v181[2] < (unsigned __int64)(v112 + 1) )
      {
        v162 = v112 + 1;
        v166 = v181;
        v167 = qvector_reserve(v181, v113, v162, 40);
        *v166 = v167;
        v113 = v167;
        v112 = v166[1];
      }
      v114 = v113 + 40 * v112;
      v163 = v181;
      *(_QWORD *)v114 = 0;
      *(_OWORD *)(v114 + 8) = 0;
      *(_DWORD *)(v114 + 24) = 0;
      *(_QWORD *)(v114 + 32) = 0;
      ++v163[1];
      v164 = *(char **)v114;
      if ( *(_QWORD *)(v114 + 16) <= 0xCu )
      {
        v165 = qvector_reserve(v113 + 40 * v112, v164, 13, 1);
        *(_QWORD *)v114 = v165;
        v164 = (char *)v165;
      }
      *(_QWORD *)(v114 + 8) = 13;
      qmemcpy(v164, "hide_handles", 12);
      *(_BYTE *)(*(_QWORD *)v114 + 12LL) = 0;
    }
    v116 = *(_DWORD *)(v114 + 24);
    v117 = v114 + 24;
    if ( v116 )
      jvalue_t_clear(v117);
    *(_DWORD *)v117 = 5;
    *(_BYTE *)(v117 + 8) = 1;
  }
LABEL_130:
  if ( v14 && !_InterlockedSub(v14, 1u) )
    free(v14);
  return v181;
}
