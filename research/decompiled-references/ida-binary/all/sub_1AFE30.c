unsigned __int64 __fastcall sub_1AFE30(__int64 a1, QT::QLineEdit *a2, char a3)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r13
  __int64 v9; // r14
  const char *v10; // r9
  void *v11; // r8
  __int64 v12; // r15
  char *v13; // r10
  __int64 v14; // rsi
  char *v15; // rdx
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  int v21; // r14d
  __int64 (__fastcall *v22)(__int64, __int64, __int64, __int64, void **, __int64, __int64); // rax
  char v23; // al
  int v24; // eax
  int v25; // eax
  const char *v26; // r9
  void *v27; // r8
  __int64 v28; // r15
  char *v29; // r10
  __int64 v30; // rsi
  char *v31; // rdx
  const char *v32; // rdi
  const char *v33; // r14
  __int64 v34; // rax
  size_t v35; // rax
  unsigned __int64 v36; // r15
  __int64 v37; // r15
  unsigned __int64 v38; // rdx
  __int64 v39; // r9
  const char *v40; // rsi
  const char *v41; // r8
  const char *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rax
  const char **v45; // r12
  __int64 v46; // rax
  const char *v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // r15
  __int64 v50; // r14
  _QWORD *v51; // r12
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // r14
  __int64 v56; // r12
  __int64 *v57; // rax
  __int64 v58; // rdi
  void *v59; // rdi
  __int64 v60; // r14
  __int64 v61; // r12
  char *v62; // rdx
  char *v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // r15
  __int64 v67; // r14
  _QWORD *v68; // r12
  __int64 v69; // rdi
  __int64 v70; // rdi
  __int64 v71; // rdx
  __int64 v72; // r14
  __int64 v73; // r12
  __int64 *v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  const char *v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rdi
  const char *v82; // rsi
  __int64 v83; // r15
  __int64 v84; // rdx
  const char *v85; // r10
  size_t v86; // r11
  char *v87; // rdi
  __int64 v88; // r8
  __int64 v89; // rsi
  size_t v90; // rdx
  char *v91; // rax
  unsigned __int64 v92; // r9
  __int64 v93; // rdx
  char *v94; // r15
  char *v95; // rsi
  __int64 v96; // rax
  const char *v97; // r10
  size_t v98; // r9
  char *v99; // rdi
  __int64 v100; // rcx
  char *v101; // rax
  char *v102; // rax
  unsigned __int64 v103; // r15
  char *v104; // rdi
  __int64 v105; // r12
  __int64 v106; // r15
  __int64 *v107; // rax
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // [rsp-8h] [rbp-198h]
  __int64 v112; // [rsp+10h] [rbp-180h]
  __int64 v113; // [rsp+18h] [rbp-178h]
  const char *v114; // [rsp+20h] [rbp-170h]
  size_t v115; // [rsp+28h] [rbp-168h]
  size_t v116; // [rsp+30h] [rbp-160h]
  int v117; // [rsp+3Ch] [rbp-154h]
  char *v118; // [rsp+48h] [rbp-148h]
  char *v119; // [rsp+48h] [rbp-148h]
  int v120; // [rsp+48h] [rbp-148h]
  const char *v121; // [rsp+48h] [rbp-148h]
  size_t v122; // [rsp+48h] [rbp-148h]
  const char *v123; // [rsp+50h] [rbp-140h]
  const char *v124; // [rsp+50h] [rbp-140h]
  __int64 v125; // [rsp+50h] [rbp-140h]
  void *v126; // [rsp+58h] [rbp-138h]
  void *v127; // [rsp+58h] [rbp-138h]
  const char *v128; // [rsp+58h] [rbp-138h]
  unsigned __int64 v129; // [rsp+58h] [rbp-138h]
  char *v130; // [rsp+60h] [rbp-130h]
  char *v131; // [rsp+60h] [rbp-130h]
  void *v132; // [rsp+60h] [rbp-130h]
  const char *v133; // [rsp+60h] [rbp-130h]
  void *v134; // [rsp+60h] [rbp-130h]
  void *v135; // [rsp+60h] [rbp-130h]
  void *v137; // [rsp+78h] [rbp-118h] BYREF
  __int64 v138; // [rsp+80h] [rbp-110h] BYREF
  __int128 v139; // [rsp+88h] [rbp-108h]
  __int64 v140; // [rsp+A0h] [rbp-F0h] BYREF
  __int128 v141; // [rsp+A8h] [rbp-E8h]
  void *v142; // [rsp+C0h] [rbp-D0h] BYREF
  void *src[2]; // [rsp+C8h] [rbp-C8h]
  void *ptr; // [rsp+E0h] [rbp-B0h] BYREF
  __int128 v145; // [rsp+E8h] [rbp-A8h]
  __int64 v146; // [rsp+F8h] [rbp-98h]
  __int128 v147; // [rsp+100h] [rbp-90h]
  __int64 v148; // [rsp+110h] [rbp-80h]
  __int128 v149; // [rsp+118h] [rbp-78h]
  __int64 v150; // [rsp+128h] [rbp-68h]
  __int128 v151; // [rsp+130h] [rbp-60h]
  int v152; // [rsp+144h] [rbp-4Ch]
  char v153; // [rsp+148h] [rbp-48h]
  unsigned __int64 v154; // [rsp+158h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 32);
  v154 = __readfsqword(0x28u);
  if ( !v4 )
  {
    v140 = 0;
    v141 = 0;
    QT::QLineEdit::selectedText((QT::QLineEdit *)&ptr);
    v9 = *((_QWORD *)&v145 + 1);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v9 )
    {
      QT::QLineEdit::selectedText((QT::QLineEdit *)&ptr);
      QT::QString::toUtf8_helper((QT::QString *)&v142, (const QT::QString *)&ptr);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      v26 = (const char *)src[0];
      v27 = src[1];
      if ( !src[0] )
        v26 = (const char *)&QT::QByteArray::_empty;
      v28 = v141;
      v29 = (char *)src[1];
      if ( (_QWORD)v141 )
      {
        v28 = v141 - 1;
        v29 = (char *)src[1] + v141 - 1;
      }
      v30 = v140;
      v31 = v29 + 1;
      if ( *((_QWORD *)&v141 + 1) < (unsigned __int64)(v29 + 1) )
      {
        v119 = v29;
        v124 = v26;
        v127 = src[1];
        v131 = v29 + 1;
        v140 = qvector_reserve(&v140, v140, v31, 1);
        v29 = v119;
        v30 = v140;
        v26 = v124;
        v27 = v127;
        v31 = v131;
      }
      *(_QWORD *)&v141 = v31;
      v29[v30] = 0;
      v16 = v26;
      memmove((void *)(v28 + v140), v26, (size_t)v27);
      v32 = &s1;
      if ( (_QWORD)v141 )
        v32 = (const char *)v140;
      v20 = (unsigned int)qustrlen(v32);
      v21 = QT::QLineEdit::selectionStart(a2);
      if ( v142 && !_InterlockedSub((volatile signed __int32 *)v142, 1u) )
        free(v142);
    }
    else
    {
      QT::QLineEdit::text((QT::QLineEdit *)&ptr);
      QT::QString::toUtf8_helper((QT::QString *)&v142, (const QT::QString *)&ptr);
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      v10 = (const char *)src[0];
      v11 = src[1];
      if ( !src[0] )
        v10 = (const char *)&QT::QByteArray::_empty;
      v12 = v141;
      v13 = (char *)src[1];
      if ( (_QWORD)v141 )
      {
        v12 = v141 - 1;
        v13 = (char *)src[1] + v141 - 1;
      }
      v14 = v140;
      v15 = v13 + 1;
      if ( *((_QWORD *)&v141 + 1) < (unsigned __int64)(v13 + 1) )
      {
        v118 = v13;
        v123 = v10;
        v126 = src[1];
        v130 = v13 + 1;
        v140 = qvector_reserve(&v140, v140, v15, 1);
        v13 = v118;
        v14 = v140;
        v10 = v123;
        v11 = v126;
        v15 = v130;
      }
      *(_QWORD *)&v141 = v15;
      v13[v14] = 0;
      v16 = v10;
      memmove((void *)(v12 + v140), v10, (size_t)v11);
      v20 = (unsigned int)QT::QLineEdit::cursorPosition(a2);
      if ( v142 && !_InterlockedSub((volatile signed __int32 *)v142, 1u) )
        free(v142);
      v21 = 0;
    }
    if ( **(_QWORD **)a1 > 0x3Fu )
    {
      v22 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, void **, __int64, __int64))(*(_QWORD *)a1 + 56LL);
      if ( v22 )
      {
        if ( (unsigned __int64)v141 <= 1
          || (v16 = (const char *)(a1 + 48),
              v23 = v22(a1 + 24, a1 + 48, a1 + 72, a1 + 12, &ptr, v140, v20),
              v19 = v111,
              !v23)
          || (v24 = *(_DWORD *)(a1 + 12), v17 = (unsigned int)ptr, v24 >= (int)ptr) )
        {
          if ( v140 )
          {
            *(_QWORD *)&v141 = 0;
            qfree(v140, v16, v17, v18, v19);
          }
          return v154 - __readfsqword(0x28u);
        }
        v25 = v21 + v24;
        *(_DWORD *)(a1 + 12) = v25;
        *(_DWORD *)(a1 + 16) = v17 - v25;
      }
    }
    if ( v140 )
    {
      *(_QWORD *)&v141 = 0;
      qfree(v140, v16);
    }
    v4 = *(_QWORD *)(a1 + 32);
    if ( !v4 )
    {
      if ( !qword_8CCE70 || *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) >= 0 )
        return v154 - __readfsqword(0x28u);
      return QT::QWidget::close(qword_8CCE70);
    }
  }
  v6 = *(_QWORD *)(a1 + 56);
  v7 = (v4 + *(_DWORD *)(a1 + 8) + (a3 == 0 ? -1 : 1)) % v4;
  if ( !v6 || *(_QWORD *)(a1 + 80) != v6 || v6 != v4 )
    goto LABEL_5;
  v138 = 0;
  v140 = 0;
  v120 = -3;
  v117 = 0;
  v139 = 0;
  v141 = 0;
  while ( 2 )
  {
    v36 = (v6 + (int)v7 + v120) % v6;
    if ( !(_DWORD)v36 )
    {
      if ( v117 == 1 )
        break;
      ++v117;
      sub_1AE240((__int64)&v138, byte_5C86A8);
    }
    v37 = 24LL * (int)v36;
    while ( 1 )
    {
      v42 = &s1;
      v43 = v37 + *(_QWORD *)(a1 + 48);
      if ( *(_QWORD *)(v43 + 8) )
        v42 = *(const char **)v43;
      v44 = tag_strlen(v42);
      v45 = (const char **)(v37 + *(_QWORD *)(a1 + 48));
      v41 = v45[1];
      if ( v44 > 139 )
        break;
      if ( v41 )
      {
        v38 = (unsigned __int64)(v41 + 1);
        v39 = (__int64)v45[1];
        v40 = *v45;
        --v41;
        if ( (unsigned __int64)v45[2] >= v38 )
          goto LABEL_67;
      }
      else
      {
        v40 = *v45;
        v38 = 2;
        v39 = 1;
        if ( (unsigned __int64)v45[2] >= 2 )
          goto LABEL_67;
      }
      v125 = v39;
      v128 = v41;
      v132 = (void *)v38;
      v46 = qvector_reserve(v37 + *(_QWORD *)(a1 + 48), v40, v38, 1);
      *v45 = (const char *)v46;
      v39 = v125;
      v40 = (const char *)v46;
      v41 = v128;
      v38 = (unsigned __int64)v132;
LABEL_67:
      v45[1] = (const char *)v38;
      v40[v39] = 0;
      v41[(_QWORD)*v45] = 32;
    }
    v47 = &s1;
    if ( v41 )
      v47 = *v45;
    sub_1AE240((__int64)&v138, v47);
    if ( !v120 )
    {
      v76 = *(_QWORD *)(a1 + 48);
      v142 = nullptr;
      v77 = &s1;
      ptr = nullptr;
      v78 = v37 + v76;
      *(_OWORD *)src = 0;
      v145 = 0;
      if ( *(_QWORD *)(v78 + 8) )
        v77 = *(const char **)v78;
      tag_remove(&v142, v77, 0);
      v79 = v141;
      v80 = v140;
      if ( *((_QWORD *)&v141 + 1) < (unsigned __int64)(v141 + 1) )
      {
        v140 = qvector_reserve(&v140, v140, v141 + 1, 80);
        v80 = v140;
        v79 = v141;
      }
      v81 = v80 + 80 * v79;
      v82 = &s1;
      *(_QWORD *)v81 = 0;
      *(_QWORD *)(v81 + 8) = 0;
      *(_QWORD *)(v81 + 32) = 0;
      *(_DWORD *)(v81 + 72) = 0;
      *(_OWORD *)(v81 + 16) = 0;
      *(_OWORD *)(v81 + 40) = 0;
      *(_OWORD *)(v81 + 56) = 0;
      *(_QWORD *)&v141 = v141 + 1;
      if ( src[0] )
        v82 = (const char *)v142;
      sub_1E88D0(v81, v82, 1);
      v83 = *(_QWORD *)(a1 + 72) + v37;
      v84 = *(_QWORD *)(v83 + 8);
      v112 = v83;
      if ( !v84 )
        goto LABEL_166;
      v85 = *(const char **)v83;
      v129 = *(_QWORD *)v83 + v84 - 1;
      if ( *(_QWORD *)v83 >= v129 )
        goto LABEL_144;
      do
      {
        v133 = v85;
        v91 = strchr(v85, 10);
        v92 = v129;
        v97 = v133;
        v93 = v145;
        v94 = v91;
        v95 = (char *)ptr;
        if ( v91 )
          v92 = (unsigned __int64)v91;
        v98 = v92 - (_QWORD)v133;
        if ( *((_QWORD *)&v145 + 1) < (unsigned __int64)(v145 + 1) )
        {
          v121 = v133;
          v134 = (void *)v98;
          ptr = (void *)qvector_reserve(&ptr, ptr, v145 + 1, 24);
          v93 = v145;
          v95 = (char *)ptr;
          v97 = v121;
          v98 = (size_t)v134;
        }
        v86 = v98;
        v87 = &v95[24 * v93];
        *(_OWORD *)(v87 + 8) = 0;
        *(_QWORD *)v87 = 0;
        *(_QWORD *)&v145 = v145 + 1;
        v88 = *((_QWORD *)v87 + 1);
        if ( v88 )
        {
          --v88;
          v86 = v98 + v88;
        }
        v89 = *(_QWORD *)v87;
        v90 = v86 + 1;
        if ( v86 != -1 )
        {
          v113 = v88;
          v114 = v97;
          v115 = v98;
          v116 = v86;
          v122 = v86 + 1;
          v96 = qvector_reserve(v87, v89, v90, 1);
          v88 = v113;
          v89 = v96;
          v97 = v114;
          v98 = v115;
          *(_QWORD *)v87 = v96;
          v86 = v116;
          v90 = v122;
        }
        *((_QWORD *)v87 + 1) = v90;
        *(_BYTE *)(v89 + v86) = 0;
        v82 = v97;
        memmove((void *)(*(_QWORD *)v87 + v88), v97, v98);
        if ( !v94 )
          break;
        v85 = v94 + 1;
      }
      while ( (unsigned __int64)(v94 + 1) < v129 );
      v84 = *(_QWORD *)(v112 + 8);
      if ( v84 )
      {
LABEL_144:
        v99 = (char *)ptr;
        v100 = v145;
        v101 = (char *)ptr;
        if ( v84 != 1 )
        {
          v82 = *(const char **)v112;
          if ( *(_BYTE *)(*(_QWORD *)v112 + v84 - 2) == 10 )
          {
            if ( *((_QWORD *)&v145 + 1) < (unsigned __int64)(v145 + 1) )
            {
              v82 = (const char *)ptr;
              v101 = (char *)qvector_reserve(&ptr, ptr, v145 + 1, 24);
              ptr = v101;
              v100 = v145;
            }
            v84 = 3 * v100;
            v102 = &v101[24 * v100];
            *(_QWORD *)v102 = 0;
            *(_OWORD *)(v102 + 8) = 0;
            v99 = (char *)ptr;
            v100 = v145 + 1;
            *(_QWORD *)&v145 = v145 + 1;
          }
        }
      }
      else
      {
LABEL_166:
        v100 = v145;
        v99 = (char *)ptr;
      }
      if ( v100 )
      {
        v84 = 0;
        v103 = 0;
        do
        {
          v104 = &v99[v84];
          v82 = &s1;
          if ( *((_QWORD *)v104 + 1) )
            v82 = *(const char **)v104;
          v135 = (void *)v84;
          sub_1AE240((__int64)&v138, v82);
          ++v103;
          v99 = (char *)ptr;
          v84 = (__int64)v135 + 24;
        }
        while ( v103 < (unsigned __int64)v145 );
        if ( ptr )
        {
          if ( (_QWORD)v145 )
          {
            v105 = 0;
            v106 = v145;
            v84 = (__int64)ptr;
            do
            {
              v107 = (__int64 *)(v84 + 24 * v105);
              v108 = *v107;
              if ( *v107 )
              {
                v107[1] = 0;
                qfree(v108, v82);
                v84 = (__int64)ptr;
              }
              ++v105;
            }
            while ( v106 != v105 );
            v99 = (char *)v84;
          }
          goto LABEL_161;
        }
      }
      else if ( v99 )
      {
LABEL_161:
        *(_QWORD *)&v145 = 0;
        qfree(v99, v82, v84);
      }
      if ( v142 )
      {
        src[0] = nullptr;
        qfree(v142, v82, v84);
      }
      if ( (unsigned __int64)v139 <= 0x1F )
      {
        v120 = 1;
        goto LABEL_79;
      }
      break;
    }
    if ( (unsigned __int64)v139 <= 0x1F && ++v120 != 4 )
    {
LABEL_79:
      v6 = *(_QWORD *)(a1 + 56);
      continue;
    }
    break;
  }
  ptr = nullptr;
  v148 = 0;
  v146 = 0;
  v150 = 0;
  v145 = 0;
  v147 = 0;
  v149 = 0;
  v151 = 0;
  sub_2D1510(&ptr);
  v152 = v139;
  sub_2D1580(&ptr, &v138, &v140, 0);
  v153 = 0;
  v137 = nullptr;
  if ( qword_8CCE70 )
  {
    v137 = *((void **)qword_8CCE70 + 126);
  }
  else
  {
    v109 = QT::QLineEdit::cursorRect(a2);
    LODWORD(v137) = ((int)v110 + (__int64)(int)v109) / 2;
    HIDWORD(v137) = ((v110 >> 32) + (v109 >> 32)) / 2;
    v137 = (void *)QT::QWidget::mapToGlobal(a2, &v137);
  }
  src[1] = &dword_0 + 1;
  v142 = a2;
  src[0] = v137;
  sub_2D5B40(&ptr, &v142);
  v48 = v150;
  if ( v150 )
  {
    v49 = v151;
    if ( (_QWORD)v151 )
    {
      v50 = 0;
      do
      {
        v51 = (_QWORD *)(v48 + 80 * v50);
        v52 = v51[4];
        if ( v52 )
        {
          v51[5] = 0;
          qfree(v52, (const char *)&v142);
        }
        v53 = v51[1];
        if ( v53 )
        {
          v51[2] = 0;
          qfree(v53, (const char *)&v142);
        }
        ++v50;
        v48 = v150;
      }
      while ( v49 != v50 );
    }
    *(_QWORD *)&v151 = 0;
    qfree(v48, (const char *)&v142);
  }
  if ( v148 )
  {
    *(_QWORD *)&v149 = 0;
    qfree(v148, (const char *)&v142);
  }
  v54 = v146;
  if ( v146 )
  {
    v55 = v147;
    if ( (_QWORD)v147 )
    {
      v56 = 0;
      do
      {
        v57 = (__int64 *)(v54 + 24 * v56);
        v58 = *v57;
        if ( *v57 )
        {
          v57[1] = 0;
          qfree(v58, (const char *)&v142);
          v54 = v146;
        }
        ++v56;
      }
      while ( v55 != v56 );
    }
    *(_QWORD *)&v147 = 0;
    qfree(v54, (const char *)&v142);
  }
  v59 = ptr;
  if ( ptr )
  {
    v60 = v145;
    if ( (_QWORD)v145 )
    {
      v61 = 0;
      v62 = (char *)ptr;
      do
      {
        v63 = &v62[24 * v61];
        v64 = *(_QWORD *)v63;
        if ( *(_QWORD *)v63 )
        {
          *((_QWORD *)v63 + 1) = 0;
          qfree(v64, (const char *)&v142);
          v62 = (char *)ptr;
        }
        ++v61;
      }
      while ( v60 != v61 );
      v59 = v62;
    }
    *(_QWORD *)&v145 = 0;
    qfree(v59, (const char *)&v142);
  }
  v65 = v140;
  if ( v140 )
  {
    v66 = v141;
    if ( (_QWORD)v141 )
    {
      v67 = 0;
      do
      {
        v68 = (_QWORD *)(v65 + 80 * v67);
        v69 = v68[4];
        if ( v69 )
        {
          v68[5] = 0;
          qfree(v69, (const char *)&v142);
        }
        v70 = v68[1];
        if ( v70 )
        {
          v68[2] = 0;
          qfree(v70, (const char *)&v142);
        }
        ++v67;
        v65 = v140;
      }
      while ( v66 != v67 );
    }
    *(_QWORD *)&v141 = 0;
    qfree(v65, (const char *)&v142);
  }
  v71 = v138;
  if ( v138 )
  {
    v72 = v139;
    if ( (_QWORD)v139 )
    {
      v73 = 0;
      do
      {
        v74 = (__int64 *)(v71 + 24 * v73);
        v75 = *v74;
        if ( *v74 )
        {
          v74[1] = 0;
          qfree(v75, (const char *)&v142);
          v71 = v138;
        }
        ++v73;
      }
      while ( v72 != v73 );
    }
    *(_QWORD *)&v139 = 0;
    qfree(v71, (const char *)&v142);
  }
LABEL_5:
  if ( (v7 & 0x80000000) == 0LL && (unsigned __int64)(int)v7 < *(_QWORD *)(a1 + 32) )
  {
    v33 = &s1;
    QT::QLineEdit::setSelection(a2, *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 16));
    v34 = *(_QWORD *)(a1 + 24) + 24LL * (int)v7;
    if ( *(_QWORD *)(v34 + 8) )
      v33 = *(const char **)v34;
    v35 = 0;
    if ( v33 )
      v35 = strlen(v33);
    QT::QString::fromUtf8(&ptr, v35, v33);
    QT::QLineEdit::insert(a2, (const QT::QString *)&ptr);
    if ( ptr )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
    }
    *(_DWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 16) = qustrlen(v33);
  }
  return v154 - __readfsqword(0x28u);
}
