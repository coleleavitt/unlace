__int64 __fastcall sub_4BD080(QT::QApplication *a1, __int64 a2, int a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  void *v10; // rbx
  __int64 v11; // rax
  QT::QWidget *v12; // r12
  __int64 *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // r12
  int v19; // r15d
  __int64 v20; // r14
  __int64 v21; // r14
  __int64 v22; // rsi
  __int64 v23; // r15
  __int64 v24; // r13
  int v25; // r12d
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 *v31; // rbp
  QT::QWidget *v32; // r13
  __int64 *v33; // rbx
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // r13
  __int64 v40; // r14
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rax
  _QWORD *v46; // r13
  __int64 v47; // r14
  __int64 v48; // rsi
  __int64 v49; // r12
  __int64 v50; // r13
  __int64 v51; // r15
  int v52; // r9d
  __int64 v53; // r12
  __int64 v54; // r13
  __int64 v55; // r14
  __int64 v56; // rbp
  __int64 v57; // r12
  char *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rdi
  unsigned int *v61; // rbp
  void *v62; // r12
  __int64 v63; // r14
  __int64 v64; // rsi
  __int64 v65; // rbp
  __int64 v66; // r13
  __int64 v67; // r15
  int v68; // esi
  __int64 v69; // rbp
  __int64 v70; // rdi
  unsigned __int8 (__fastcall *v71)(char *, void **, __int64); // rbp
  __int64 v72; // rax
  const char *p_ptr; // rsi
  const char *v74; // rdx
  int v75; // eax
  void *v76; // rbx
  size_t v77; // rbp
  const char *p_dest; // rsi
  double v79; // xmm0_8
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v83; // rax
  __int64 *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // rsi
  const char *v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rbp
  __int64 v91; // r14
  __int64 v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r13
  _DWORD *v96; // rsi
  int v97; // r13d
  const char *v98; // r13
  __int64 v99; // r12
  __int64 v100; // rsi
  _QWORD *v101; // rbx
  __int64 v102; // r15
  const char *v103; // rdi
  int v104; // edi
  _QWORD *v105; // rbx
  __int64 v106; // rbp
  __int64 v107; // r15
  __int64 v108; // r13
  __int64 v109; // rbx
  int v110; // esi
  __int64 v111; // rbx
  size_t v112; // rax
  size_t v113; // r15
  __int64 v114; // r12
  __int64 v115; // rsi
  __int64 v116; // rbx
  __int64 v117; // r15
  __int64 v118; // rbx
  __int64 v119; // rax
  _QWORD *v120; // r15
  size_t v121; // r12
  __int64 v122; // rax
  __int64 **v123; // r15
  __int64 *v124; // rdi
  __int64 v125; // rbx
  __int64 v126; // rsi
  __int64 *v127; // rax
  __int64 *v128; // rdx
  __int64 *v129; // r13
  __int64 *v130; // rdi
  __int64 v131; // rbx
  __int64 v132; // rsi
  __int64 *v133; // rax
  __int64 *v134; // rdx
  __int64 *v135; // r13
  __int64 *v136; // r13
  __int64 v137; // rsi
  __int64 *v138; // r12
  __int64 *v139; // rbx
  __int64 *v140; // rbx
  __int64 *v141; // r13
  __int64 v142; // rsi
  __int64 *v143; // r12
  __int64 *v144; // rbx
  __int64 *v145; // rbx
  __int64 v146; // r12
  __int64 v147; // rsi
  __int64 v148; // rbx
  __int64 v149; // r13
  int v150; // r8d
  __int64 v151; // rbx
  char *v152; // rsi
  char *v153; // rsi
  void *v154; // rax
  __int64 v155; // r12
  _QWORD *v156; // rsi
  __int64 v157; // r13
  _DWORD *v158; // rsi
  QT::QObject *v159; // rax
  __int64 v160; // rax
  __int64 *v161; // r13
  __int64 *v162; // rsi
  __int64 *v163; // r12
  __int64 *v164; // rbx
  __int64 *v165; // rbx
  char *v166; // rsi
  __int64 v167; // rax
  __int64 v168; // rax
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rbp
  char *v172; // rsi
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rbx
  __int64 v176; // rsi
  __int64 v177; // rbx
  __int64 v178; // rsi
  __int64 *v179; // rbx
  void *v180; // rsi
  void *v181; // rdi
  size_t v182; // rdx
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rax
  char *v186; // rsi
  __int64 v187; // r13
  _BYTE *v188; // rsi
  __int64 v189; // r13
  _BYTE *v190; // rsi
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rax
  __int64 v208; // rax
  __int64 v209; // rax
  __int64 v210; // rax
  __int64 v211; // rax
  __int64 v212; // rax
  QT::QMainWindow *v213; // [rsp+0h] [rbp-E8h]
  __int64 v214; // [rsp+8h] [rbp-E0h]
  __int64 v215; // [rsp+8h] [rbp-E0h]
  __int64 v216; // [rsp+8h] [rbp-E0h]
  __int64 v217; // [rsp+8h] [rbp-E0h]
  __int64 v218; // [rsp+8h] [rbp-E0h]
  int v219; // [rsp+8h] [rbp-E0h]
  int v220; // [rsp+8h] [rbp-E0h]
  __int64 v221; // [rsp+8h] [rbp-E0h]
  __int64 v222; // [rsp+8h] [rbp-E0h]
  size_t v223; // [rsp+8h] [rbp-E0h]
  __int64 v224; // [rsp+10h] [rbp-D8h]
  __int64 *v225; // [rsp+18h] [rbp-D0h]
  __int64 v226; // [rsp+18h] [rbp-D0h]
  __int64 v227; // [rsp+18h] [rbp-D0h]
  __int64 *v229; // [rsp+28h] [rbp-C0h]
  __int64 v230; // [rsp+38h] [rbp-B0h]
  __int64 v231; // [rsp+38h] [rbp-B0h]
  __int64 *v232; // [rsp+40h] [rbp-A8h]
  void *v234; // [rsp+50h] [rbp-98h] BYREF
  void *src; // [rsp+58h] [rbp-90h]
  size_t n; // [rsp+60h] [rbp-88h]
  void *dest; // [rsp+70h] [rbp-78h] BYREF
  __int128 v238; // [rsp+78h] [rbp-70h]
  void *ptr; // [rsp+90h] [rbp-58h] BYREF
  __int128 v240; // [rsp+98h] [rbp-50h]
  unsigned __int64 v241; // [rsp+A8h] [rbp-40h]

  v241 = __readfsqword(0x28u);
  if ( sub_47B250((__int64)a1) )
    sub_47AFB0((__int64)a1, a4);
  v7 = qalloc_or_throw(24);
  *(_QWORD *)v7 = 0;
  *(_OWORD *)(v7 + 8) = 0;
  v229 = (__int64 *)v7;
  LODWORD(n) = a3;
  v8 = sub_47A690((__int64)a1);
  LODWORD(v234) = 0;
  src = nullptr;
  v9 = qalloc_or_throw(24);
  *(_QWORD *)v9 = 0;
  v10 = (void *)v9;
  *(_OWORD *)(v9 + 8) = 0;
  if ( (_DWORD)v234 )
    jvalue_t_clear(&v234);
  LODWORD(v234) = 3;
  src = v10;
  v11 = qalloc_or_throw(24);
  *(_QWORD *)v11 = 0;
  *(_OWORD *)(v11 + 8) = 0;
  v232 = (__int64 *)v11;
  v12 = (QT::QWidget *)sub_4C5EA0(v8);
  v13 = sub_4BB660((__int64)&v234, (unsigned __int64)v12, 0.0, a5, a6);
  if ( v13 )
  {
    QT::QWidget::window(v12);
    QT::QWidget::saveGeometry((QT::QWidget *)&ptr);
    v14 = sub_519560((QT::QByteArray *)&ptr);
    if ( v14 )
    {
      v15 = v13[1];
      v16 = *v13;
      if ( v15 )
      {
        v214 = *v13;
        v17 = *v13;
        v18 = 0;
        while ( !*(_QWORD *)(v17 + 8) || strcmp(*(const char **)v17, "area_geom") )
        {
          ++v18;
          v17 += 40;
          if ( v15 == v18 )
          {
            v16 = v214;
            goto LABEL_248;
          }
        }
      }
      else
      {
LABEL_248:
        if ( v13[2] < (unsigned __int64)(v15 + 1) )
        {
          v196 = qvector_reserve(v13, v16, v15 + 1, 40);
          *v13 = v196;
          v15 = v13[1];
          v16 = v196;
        }
        v17 = v16 + 40 * v15;
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = 0;
        *(_DWORD *)(v17 + 24) = 0;
        *(_QWORD *)(v17 + 32) = 0;
        ++v13[1];
        v172 = *(char **)v17;
        if ( *(_QWORD *)(v17 + 16) <= 9u )
        {
          v195 = qvector_reserve(v17, v172, 10, 1);
          *(_QWORD *)v17 = v195;
          v172 = (char *)v195;
        }
        *(_QWORD *)(v17 + 8) = 10;
        *(_QWORD *)v172 = 0x6F65675F61657261LL;
        v172[8] = 109;
        *(_BYTE *)(*(_QWORD *)v17 + 9LL) = 0;
      }
      v19 = *(_DWORD *)(v17 + 24);
      v20 = v17 + 24;
      if ( v19 )
        jvalue_t_clear(v20);
      *(_DWORD *)v20 = 3;
      *(_QWORD *)(v20 + 8) = v14;
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v21 = 0;
    v22 = *v232;
    v23 = v232[1];
    v24 = *v232;
    if ( v23 )
    {
      v215 = *v232;
      while ( !*(_QWORD *)(v24 + 8) || strcmp(*(const char **)v24, "main") )
      {
        ++v21;
        v24 += 40;
        if ( v23 == v21 )
        {
          v22 = v215;
          goto LABEL_217;
        }
      }
      v25 = *(_DWORD *)(v24 + 24);
      v26 = v24 + 24;
      if ( v25 )
        goto LABEL_222;
    }
    else
    {
LABEL_217:
      if ( v232[2] < (unsigned __int64)(v23 + 1) )
      {
        v192 = qvector_reserve(v232, v22, v23 + 1, 40);
        *v232 = v192;
        v23 = v232[1];
        v22 = v192;
      }
      v157 = v22 + 40 * v23;
      *(_QWORD *)v157 = 0;
      *(_OWORD *)(v157 + 8) = 0;
      *(_DWORD *)(v157 + 24) = 0;
      *(_QWORD *)(v157 + 32) = 0;
      ++v232[1];
      v158 = *(_DWORD **)v157;
      if ( *(_QWORD *)(v157 + 16) <= 4u )
      {
        v210 = qvector_reserve(v157, v158, 5, 1);
        *(_QWORD *)v157 = v210;
        v158 = (_DWORD *)v210;
      }
      *(_QWORD *)(v157 + 8) = 5;
      v26 = v157 + 24;
      *v158 = 1852399981;
      *(_BYTE *)(*(_QWORD *)(v26 - 24) + 4LL) = 0;
      if ( *(_DWORD *)v26 )
LABEL_222:
        jvalue_t_clear(v26);
    }
    *(_DWORD *)v26 = 3;
    *(_QWORD *)(v26 + 8) = v13;
  }
  sub_4C8370(&dest, v8);
  if ( SDWORD2(v238) <= 0 )
    goto LABEL_56;
  v30 = 0;
  v31 = nullptr;
  v216 = 8LL * (unsigned int)(DWORD2(v238) - 1) + 8;
  do
  {
    if ( !dest || *(int *)dest > 1 )
      sub_4BCCA0((__int64)&dest, 0, 0, 0, v28, v29);
    v32 = (QT::QWidget *)sub_4C5EA0(*(_QWORD *)(v238 + v30));
    v33 = sub_4BB660((__int64)&v234, (unsigned __int64)v32, 0.0, a5, a6);
    if ( v33 )
    {
      QT::QWidget::window(v32);
      QT::QWidget::saveGeometry((QT::QWidget *)&ptr);
      v34 = sub_519560((QT::QByteArray *)&ptr);
      v28 = v34;
      if ( v34 )
      {
        v35 = v33[1];
        v36 = *v33;
        if ( v35 )
        {
          v225 = v33;
          v37 = *v33;
          v38 = 0;
          v39 = v34;
          while ( !*(_QWORD *)(v37 + 8) || strcmp(*(const char **)v37, "area_geom") )
          {
            ++v38;
            v37 += 40;
            if ( v35 == v38 )
            {
              v33 = v225;
              v28 = v39;
              goto LABEL_98;
            }
          }
          v40 = v37;
          v28 = v39;
          v33 = v225;
          v41 = v40 + 24;
          if ( *(_DWORD *)(v40 + 24) )
            goto LABEL_103;
        }
        else
        {
LABEL_98:
          if ( v33[2] < (unsigned __int64)(v35 + 1) )
          {
            v227 = v28;
            v168 = qvector_reserve(v33, v36, v35 + 1, 40);
            v35 = v33[1];
            v28 = v227;
            *v33 = v168;
            v36 = v168;
          }
          v86 = v36 + 40 * v35;
          *(_QWORD *)v86 = 0;
          *(_OWORD *)(v86 + 8) = 0;
          *(_DWORD *)(v86 + 24) = 0;
          *(_QWORD *)(v86 + 32) = 0;
          ++v33[1];
          v87 = *(_QWORD *)v86;
          if ( *(_QWORD *)(v86 + 16) <= 9u )
          {
            v231 = v28;
            v167 = qvector_reserve(v86, v87, 10, 1);
            v28 = v231;
            v87 = v167;
            *(_QWORD *)v86 = v167;
          }
          *(_QWORD *)(v86 + 8) = 10;
          v41 = v86 + 24;
          *(_QWORD *)v87 = 0x6F65675F61657261LL;
          *(_BYTE *)(v87 + 8) = 109;
          *(_BYTE *)(*(_QWORD *)v86 + 9LL) = 0;
          if ( *(_DWORD *)(v86 + 24) )
          {
LABEL_103:
            v230 = v28;
            v226 = v41;
            jvalue_t_clear(v41);
            v28 = v230;
            v41 = v226;
          }
        }
        *(_DWORD *)v41 = 3;
        *(_QWORD *)(v41 + 8) = v28;
      }
      if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        free(ptr);
      if ( v31 )
      {
        v42 = v31[1];
        v43 = *v31;
        v44 = v42 + 1;
        if ( v31[2] >= (unsigned __int64)(v42 + 1) )
        {
LABEL_44:
          v45 = 16 * v42;
          v46 = (_QWORD *)(v43 + v45);
          *v46 = 0;
          v46[1] = 0;
          ++v31[1];
          if ( *(_DWORD *)(v43 + v45) )
            jvalue_t_clear(v43 + v45);
          *(_DWORD *)v46 = 3;
          v46[1] = v33;
          goto LABEL_47;
        }
        v84 = v31;
      }
      else
      {
        v83 = operator new(0x18u);
        *(_QWORD *)v83 = 0;
        v84 = (__int64 *)v83;
        v43 = 0;
        *(_OWORD *)(v83 + 8) = 0;
        v31 = (__int64 *)v83;
        v44 = 1;
      }
      v85 = qvector_reserve(v84, v43, v44, 16);
      *v31 = v85;
      v43 = v85;
      v42 = v31[1];
      goto LABEL_44;
    }
LABEL_47:
    v30 += 8;
  }
  while ( v216 != v30 );
  if ( v31 )
  {
    v47 = v232[1];
    v48 = *v232;
    if ( v47 )
    {
      v49 = *v232;
      v50 = 0;
      v51 = *v232;
      while ( !*(_QWORD *)(v49 + 8) || strcmp(*(const char **)v49, "floating") )
      {
        ++v50;
        v49 += 40;
        if ( v47 == v50 )
        {
          v48 = v51;
          goto LABEL_210;
        }
      }
      v52 = *(_DWORD *)(v49 + 24);
      v53 = v49 + 24;
      if ( v52 )
        goto LABEL_215;
    }
    else
    {
LABEL_210:
      if ( v232[2] < (unsigned __int64)(v47 + 1) )
      {
        v193 = qvector_reserve(v232, v48, v47 + 1, 40);
        *v232 = v193;
        v47 = v232[1];
        v48 = v193;
      }
      v155 = v48 + 40 * v47;
      *(_QWORD *)v155 = 0;
      *(_OWORD *)(v155 + 8) = 0;
      *(_DWORD *)(v155 + 24) = 0;
      *(_QWORD *)(v155 + 32) = 0;
      ++v232[1];
      v156 = *(_QWORD **)v155;
      if ( *(_QWORD *)(v155 + 16) <= 8u )
      {
        v209 = qvector_reserve(v155, v156, 9, 1);
        *(_QWORD *)v155 = v209;
        v156 = (_QWORD *)v209;
      }
      v53 = v155 + 24;
      *(_QWORD *)(v53 - 16) = 9;
      *v156 = 0x676E6974616F6C66LL;
      *(_BYTE *)(*(_QWORD *)(v53 - 24) + 8LL) = 0;
      if ( *(_DWORD *)v53 )
LABEL_215:
        jvalue_t_clear(v53);
    }
    *(_DWORD *)v53 = 4;
    *(_QWORD *)(v53 + 8) = v31;
  }
LABEL_56:
  if ( dest && !_InterlockedSub((volatile signed __int32 *)dest, 1u) )
    free(dest);
  v54 = v229[1];
  v55 = *v229;
  if ( !v54 )
  {
LABEL_240:
    v59 = v54 + 1;
    if ( v229[2] < (unsigned __int64)(v54 + 1) )
    {
      v185 = qvector_reserve(v229, v55, v59, 40);
      *v229 = v185;
      v54 = v229[1];
      v55 = v185;
    }
    v171 = v55 + 40 * v54;
    *(_QWORD *)v171 = 0;
    *(_OWORD *)(v171 + 8) = 0;
    *(_DWORD *)(v171 + 24) = 0;
    *(_QWORD *)(v171 + 32) = 0;
    ++v229[1];
    v58 = *(char **)v171;
    if ( *(_QWORD *)(v171 + 16) <= 6u )
    {
      v184 = qvector_reserve(v55 + 40 * v54, v58, 7, 1);
      *(_QWORD *)v171 = v184;
      v58 = (char *)v184;
    }
    *(_QWORD *)(v171 + 8) = 7;
    v61 = (unsigned int *)(v171 + 24);
    *(_DWORD *)v58 = 1870225772;
    *((_WORD *)v58 + 2) = 29813;
    *(_BYTE *)(*((_QWORD *)v61 - 3) + 6LL) = 0;
    v60 = *v61;
    if ( !(_DWORD)v60 )
      goto LABEL_65;
LABEL_134:
    v60 = (__int64)v61;
    jvalue_t_clear(v61);
    goto LABEL_65;
  }
  v56 = *v229;
  v57 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v56 + 8) )
    {
      v58 = "layout";
      if ( !strcmp(*(const char **)v56, "layout") )
        break;
    }
    ++v57;
    v56 += 40;
    if ( v54 == v57 )
      goto LABEL_240;
  }
  v60 = *(unsigned int *)(v56 + 24);
  v61 = (unsigned int *)(v56 + 24);
  if ( (_DWORD)v60 )
    goto LABEL_134;
LABEL_65:
  *v61 = 3;
  *((_QWORD *)v61 + 1) = v232;
  if ( (_DWORD)v234 != 3 )
    sub_4B56A0(0.0, v60, (__int64)v58, v59, v27);
  v62 = src;
  if ( *((_QWORD *)src + 1) )
  {
    LODWORD(v234) = 0;
    src = nullptr;
    v63 = v229[1];
    v64 = *v229;
    if ( v63 )
    {
      v65 = *v229;
      v66 = 0;
      v67 = *v229;
      while ( !*(_QWORD *)(v65 + 8) || strcmp(*(const char **)v65, "widgets_config") )
      {
        ++v66;
        v65 += 40;
        if ( v63 == v66 )
        {
          v64 = v67;
          goto LABEL_235;
        }
      }
    }
    else
    {
LABEL_235:
      if ( v229[2] < (unsigned __int64)(v63 + 1) )
      {
        v194 = qvector_reserve(v229, v64, v63 + 1, 40);
        *v229 = v194;
        v63 = v229[1];
        v64 = v194;
      }
      v65 = v64 + 40 * v63;
      *(_QWORD *)v65 = 0;
      *(_OWORD *)(v65 + 8) = 0;
      *(_DWORD *)(v65 + 24) = 0;
      *(_QWORD *)(v65 + 32) = 0;
      ++v229[1];
      v166 = *(char **)v65;
      if ( *(_QWORD *)(v65 + 16) <= 0xEu )
      {
        v212 = qvector_reserve(v65, v166, 15, 1);
        *(_QWORD *)v65 = v212;
        v166 = (char *)v212;
      }
      *(_QWORD *)(v65 + 8) = 15;
      qmemcpy(v166, "widgets_config", 14);
      *(_BYTE *)(*(_QWORD *)v65 + 14LL) = 0;
    }
    v68 = *(_DWORD *)(v65 + 24);
    v69 = v65 + 24;
    if ( v68 )
      jvalue_t_clear(v69);
    *(_DWORD *)v69 = 3;
    *(_QWORD *)(v69 + 8) = v62;
  }
  jvalue_t_clear(&v234);
  v70 = sub_47A7A0(a1);
  if ( v70 || (v159 = sub_479A70((__int64)a1 + 168, -1, -1, 3), (v70 = sub_4CF3F0(v159)) != 0) )
  {
    ptr = nullptr;
    v240 = 0;
    v71 = *(unsigned __int8 (__fastcall **)(char *, void **, __int64))(*((_QWORD *)a1 + 2) + 72LL);
    v72 = sub_4CD6B0(v70, 0);
    p_ptr = (const char *)&ptr;
    if ( v71((char *)a1 + 16, &ptr, v72) )
    {
      v74 = &s1;
      if ( (_QWORD)v240 )
        v74 = (const char *)ptr;
      p_ptr = "focus";
      sub_1D0CB0(v229, "focus", v74);
    }
    if ( ptr )
    {
      *(_QWORD *)&v240 = 0;
      qfree(ptr, p_ptr);
    }
  }
  v75 = (*(__int64 (__fastcall **)(QT::QApplication *))(*(_QWORD *)a1 + 224LL))(a1);
  QT::QMainWindow::saveState((QT::QMainWindow *)&v234, v75);
  v76 = src;
  dest = nullptr;
  v77 = n;
  v238 = 0;
  if ( !src )
    v76 = &QT::QByteArray::_empty;
  if ( n )
  {
    dest = (void *)qvector_reserve(&dest, 0, n, 1);
    memset((char *)dest + v238, 0, v77 - v238);
    *(_QWORD *)&v238 = v77;
    memcpy(dest, v76, v77);
  }
  p_dest = (const char *)&dest;
  v79 = 0.0;
  ptr = nullptr;
  v240 = 0;
  if ( (unsigned __int8)sub_4B7320((__int64 *)&ptr, (const char *)&dest) )
  {
    v88 = &s1;
    if ( (_QWORD)v240 )
      v88 = (const char *)ptr;
    p_dest = "window_state";
    sub_1D0CB0(v229, "window_state", v88);
  }
  if ( ptr )
  {
    *(_QWORD *)&v240 = 0;
    v79 = qfree(ptr, p_dest);
  }
  if ( dest )
  {
    *(_QWORD *)&v238 = 0;
    v79 = qfree(dest, p_dest);
  }
  if ( v234 && !_InterlockedSub((volatile signed __int32 *)v234, 1u) )
  {
    free(v234);
    if ( !(_QWORD)xmmword_8D1D08 )
      return sub_4B74C0(a2, v229, v80, v81, v79);
  }
  else if ( !(_QWORD)xmmword_8D1D08 )
  {
    return sub_4B74C0(a2, v229, v80, v81, v79);
  }
  v89 = qalloc_or_throw(24);
  v79 = 0.0;
  *(_QWORD *)v89 = 0;
  v90 = qword_8D1D00;
  *(_OWORD *)(v89 + 8) = 0;
  v213 = (QT::QMainWindow *)v89;
  v224 = v90 + 120 * xmmword_8D1D08;
  if ( v90 != v224 )
  {
    while ( 2 )
    {
      v91 = qalloc_or_throw(24);
      *(_OWORD *)(v91 + 8) = 0;
      *(_QWORD *)v91 = 0;
      v92 = *(int *)(v90 + 112);
      v93 = qvector_reserve(v91, 0, 1, 40);
      v94 = *(_QWORD *)(v91 + 8);
      v79 = 0.0;
      *(_QWORD *)v91 = v93;
      v95 = v93 + 40 * v94;
      *(_QWORD *)v95 = 0;
      *(_OWORD *)(v95 + 8) = 0;
      *(_DWORD *)(v95 + 24) = 0;
      *(_QWORD *)(v95 + 32) = 0;
      ++*(_QWORD *)(v91 + 8);
      v96 = *(_DWORD **)v95;
      if ( *(_QWORD *)(v95 + 16) <= 7u )
      {
        v174 = qvector_reserve(v95, v96, 8, 1);
        *(_QWORD *)v95 = v174;
        v96 = (_DWORD *)v174;
      }
      *(_QWORD *)(v95 + 8) = 8;
      *v96 = 1769238639;
      *(_DWORD *)((char *)v96 + 3) = 1936617321;
      *(_BYTE *)(*(_QWORD *)v95 + 7LL) = 0;
      v81 = *(unsigned int *)(v95 + 24);
      if ( (_DWORD)v81 )
        jvalue_t_clear(v95 + 24);
      *(_DWORD *)(v95 + 24) = 1;
      *(_QWORD *)(v95 + 32) = v92;
      v97 = *(_DWORD *)(v90 + 112) & 0x80;
      if ( *(_QWORD *)(v90 + 32) > 1u )
      {
        v114 = *(_QWORD *)(v91 + 8);
        v115 = *(_QWORD *)v91;
        if ( v114 )
        {
          v218 = *(_QWORD *)v91;
          v116 = *(_QWORD *)v91;
          v117 = 0;
          while ( !*(_QWORD *)(v116 + 8) || strcmp(*(const char **)v116, "anchor") )
          {
            ++v117;
            v116 += 40;
            if ( v114 == v117 )
            {
              v115 = v218;
              goto LABEL_198;
            }
          }
        }
        else
        {
LABEL_198:
          if ( *(_QWORD *)(v91 + 16) < (unsigned __int64)(v114 + 1) )
          {
            v169 = qvector_reserve(v91, v115, v114 + 1, 40);
            v114 = *(_QWORD *)(v91 + 8);
            *(_QWORD *)v91 = v169;
            v115 = v169;
          }
          v116 = v115 + 40 * v114;
          *(_QWORD *)v116 = 0;
          *(_OWORD *)(v116 + 8) = 0;
          *(_DWORD *)(v116 + 24) = 0;
          *(_QWORD *)(v116 + 32) = 0;
          ++*(_QWORD *)(v91 + 8);
          v152 = *(char **)v116;
          if ( *(_QWORD *)(v116 + 16) <= 6u )
          {
            v183 = qvector_reserve(v116, v152, 7, 1);
            *(_QWORD *)v116 = v183;
            v152 = (char *)v183;
          }
          *(_QWORD *)(v116 + 8) = 7;
          *(_DWORD *)v152 = 1751346785;
          *((_WORD *)v152 + 2) = 29295;
          *(_BYTE *)(*(_QWORD *)v116 + 6LL) = 0;
        }
        v118 = v116 + 24;
        v119 = operator new(0x18u);
        v79 = 0.0;
        *(_QWORD *)v119 = 0;
        v120 = (_QWORD *)v119;
        *(_OWORD *)(v119 + 8) = 0;
        v121 = *(_QWORD *)(v90 + 32);
        if ( v121 )
        {
          v154 = (void *)qalloc_or_throw(*(_QWORD *)(v90 + 32));
          *v120 = v154;
          v120[2] = v121;
          memcpy(v154, *(const void **)(v90 + 24), v121);
          v120[1] = v121;
        }
        if ( *(_DWORD *)v118 )
          jvalue_t_clear(v118);
        *(_DWORD *)v118 = 2;
        *(_QWORD *)(v118 + 8) = v120;
        if ( v97 )
          goto LABEL_151;
      }
      else
      {
        if ( !v97 )
          goto LABEL_115;
LABEL_151:
        v122 = qalloc_or_throw(24);
        v79 = 0.0;
        *(_QWORD *)v122 = 0;
        v123 = (__int64 **)v122;
        *(_OWORD *)(v122 + 8) = 0;
        if ( *(_QWORD *)(v90 + 104) )
        {
          v160 = sub_519560((QT::QByteArray *)(v90 + 88));
          v161 = v123[1];
          v162 = *v123;
          v222 = v160;
          if ( v161 )
          {
            v163 = *v123;
            v164 = nullptr;
            while ( !v163[1] || strcmp((const char *)*v163, "window_geom") )
            {
              v164 = (__int64 *)((char *)v164 + 1);
              v163 += 5;
              if ( v161 == v164 )
                goto LABEL_263;
            }
            v165 = v163 + 3;
          }
          else
          {
LABEL_263:
            if ( v123[2] < (__int64 *)((char *)v161 + 1) )
            {
              v208 = qvector_reserve(v123, v162, (char *)v161 + 1, 40);
              v161 = v123[1];
              *v123 = (__int64 *)v208;
              v162 = (__int64 *)v208;
            }
            v79 = 0.0;
            v179 = &v162[5 * (_QWORD)v161];
            *v179 = 0;
            *(_OWORD *)(v179 + 1) = 0;
            *((_DWORD *)v179 + 6) = 0;
            v179[4] = 0;
            v123[1] = (__int64 *)((char *)v123[1] + 1);
            v180 = (void *)*v179;
            if ( (unsigned __int64)v179[2] <= 0xB )
            {
              v207 = qvector_reserve(v179, v180, 12, 1);
              *v179 = v207;
              v180 = (void *)v207;
            }
            v179[1] = 12;
            v165 = v179 + 3;
            qmemcpy(v180, "window_geom", 11);
            *(_BYTE *)(*(v165 - 3) + 11) = 0;
          }
          if ( *(_DWORD *)v165 )
            jvalue_t_clear(v165);
          *(_DWORD *)v165 = 3;
          v165[1] = v222;
        }
        if ( *(int *)(v90 + 80) >= 0 && *(int *)(v90 + 84) >= 0 )
        {
          v124 = v123[1];
          v125 = *(int *)(v90 + 72);
          v126 = (__int64)*v123;
          if ( v124 )
          {
            v127 = *v123;
            v128 = nullptr;
            while ( 1 )
            {
              if ( v127[1] )
              {
                v81 = *v127;
                if ( *(_BYTE *)*v127 == 120 && !*(_BYTE *)(v81 + 1) )
                  break;
              }
              v128 = (__int64 *)((char *)v128 + 1);
              v127 += 5;
              if ( v124 == v128 )
                goto LABEL_276;
            }
            v129 = v127 + 3;
          }
          else
          {
LABEL_276:
            if ( v123[2] < (__int64 *)((char *)v124 + 1) )
            {
              v204 = qvector_reserve(v123, v126, (char *)v124 + 1, 40);
              v124 = v123[1];
              *v123 = (__int64 *)v204;
              v126 = v204;
            }
            v79 = 0.0;
            v187 = v126 + 40LL * (_QWORD)v124;
            *(_QWORD *)v187 = 0;
            *(_OWORD *)(v187 + 8) = 0;
            *(_DWORD *)(v187 + 24) = 0;
            *(_QWORD *)(v187 + 32) = 0;
            v123[1] = (__int64 *)((char *)v123[1] + 1);
            v188 = *(_BYTE **)v187;
            if ( *(_QWORD *)(v187 + 16) <= 1u )
            {
              v203 = qvector_reserve(v187, v188, 2, 1);
              *(_QWORD *)v187 = v203;
              v188 = (_BYTE *)v203;
            }
            *(_QWORD *)(v187 + 8) = 2;
            v129 = (__int64 *)(v187 + 24);
            *v188 = 120;
            *(_BYTE *)(*(v129 - 3) + 1) = 0;
          }
          if ( *(_DWORD *)v129 )
            jvalue_t_clear(v129);
          *(_DWORD *)v129 = 1;
          v129[1] = v125;
          v130 = v123[1];
          v131 = *(int *)(v90 + 76);
          v132 = (__int64)*v123;
          if ( v130 )
          {
            v133 = *v123;
            v134 = nullptr;
            while ( 1 )
            {
              if ( v133[1] )
              {
                v81 = *v133;
                if ( *(_BYTE *)*v133 == 121 && !*(_BYTE *)(v81 + 1) )
                  break;
              }
              v134 = (__int64 *)((char *)v134 + 1);
              v133 += 5;
              if ( v130 == v134 )
                goto LABEL_281;
            }
            v135 = v133 + 3;
          }
          else
          {
LABEL_281:
            if ( v123[2] < (__int64 *)((char *)v130 + 1) )
            {
              v202 = qvector_reserve(v123, v132, (char *)v130 + 1, 40);
              v130 = v123[1];
              *v123 = (__int64 *)v202;
              v132 = v202;
            }
            v79 = 0.0;
            v189 = v132 + 40LL * (_QWORD)v130;
            *(_QWORD *)v189 = 0;
            *(_OWORD *)(v189 + 8) = 0;
            *(_DWORD *)(v189 + 24) = 0;
            *(_QWORD *)(v189 + 32) = 0;
            v123[1] = (__int64 *)((char *)v123[1] + 1);
            v190 = *(_BYTE **)v189;
            if ( *(_QWORD *)(v189 + 16) <= 1u )
            {
              v197 = qvector_reserve(v189, v190, 2, 1);
              *(_QWORD *)v189 = v197;
              v190 = (_BYTE *)v197;
            }
            *(_QWORD *)(v189 + 8) = 2;
            v135 = (__int64 *)(v189 + 24);
            *v190 = 121;
            *(_BYTE *)(*(v135 - 3) + 1) = 0;
          }
          if ( *(_DWORD *)v135 )
            jvalue_t_clear(v135);
          *(_DWORD *)v135 = 1;
          v135[1] = v131;
          v136 = v123[1];
          v137 = (__int64)*v123;
          v219 = *(_DWORD *)(v90 + 80);
          if ( v136 )
          {
            v138 = *v123;
            v139 = nullptr;
            while ( !v138[1] || strcmp((const char *)*v138, "width") )
            {
              v139 = (__int64 *)((char *)v139 + 1);
              v138 += 5;
              if ( v136 == v139 )
                goto LABEL_253;
            }
            v140 = v138 + 3;
          }
          else
          {
LABEL_253:
            if ( v123[2] < (__int64 *)((char *)v136 + 1) )
            {
              v201 = qvector_reserve(v123, v137, (char *)v136 + 1, 40);
              v136 = v123[1];
              *v123 = (__int64 *)v201;
              v137 = v201;
            }
            v79 = 0.0;
            v175 = v137 + 40LL * (_QWORD)v136;
            *(_QWORD *)v175 = 0;
            *(_OWORD *)(v175 + 8) = 0;
            *(_DWORD *)(v175 + 24) = 0;
            *(_QWORD *)(v175 + 32) = 0;
            v123[1] = (__int64 *)((char *)v123[1] + 1);
            v176 = *(_QWORD *)v175;
            if ( *(_QWORD *)(v175 + 16) <= 5u )
            {
              v200 = qvector_reserve(v175, v176, 6, 1);
              *(_QWORD *)v175 = v200;
              v176 = v200;
            }
            *(_QWORD *)(v175 + 8) = 6;
            v140 = (__int64 *)(v175 + 24);
            *(_DWORD *)v176 = 1952737655;
            *(_BYTE *)(v176 + 4) = 104;
            *(_BYTE *)(*(v140 - 3) + 5) = 0;
          }
          if ( *(_DWORD *)v140 )
            jvalue_t_clear(v140);
          *(_DWORD *)v140 = 1;
          v140[1] = v219;
          v141 = v123[1];
          v142 = (__int64)*v123;
          v220 = *(_DWORD *)(v90 + 84);
          if ( v141 )
          {
            v143 = *v123;
            v144 = nullptr;
            while ( !v143[1] || strcmp((const char *)*v143, "height") )
            {
              v144 = (__int64 *)((char *)v144 + 1);
              v143 += 5;
              if ( v141 == v144 )
                goto LABEL_258;
            }
            v145 = v143 + 3;
          }
          else
          {
LABEL_258:
            if ( v123[2] < (__int64 *)((char *)v141 + 1) )
            {
              v199 = qvector_reserve(v123, v142, (char *)v141 + 1, 40);
              v141 = v123[1];
              *v123 = (__int64 *)v199;
              v142 = v199;
            }
            v79 = 0.0;
            v177 = v142 + 40LL * (_QWORD)v141;
            *(_QWORD *)v177 = 0;
            *(_OWORD *)(v177 + 8) = 0;
            *(_DWORD *)(v177 + 24) = 0;
            *(_QWORD *)(v177 + 32) = 0;
            v123[1] = (__int64 *)((char *)v123[1] + 1);
            v178 = *(_QWORD *)v177;
            if ( *(_QWORD *)(v177 + 16) <= 6u )
            {
              v198 = qvector_reserve(v177, v178, 7, 1);
              *(_QWORD *)v177 = v198;
              v178 = v198;
            }
            *(_QWORD *)(v177 + 8) = 7;
            v145 = (__int64 *)(v177 + 24);
            *(_DWORD *)v178 = 1734960488;
            *(_WORD *)(v178 + 4) = 29800;
            *(_BYTE *)(*(v145 - 3) + 6) = 0;
          }
          if ( *(_DWORD *)v145 )
            jvalue_t_clear(v145);
          *(_DWORD *)v145 = 1;
          v145[1] = v220;
        }
        v146 = *(_QWORD *)(v91 + 8);
        v147 = *(_QWORD *)v91;
        if ( v146 )
        {
          v221 = *(_QWORD *)v91;
          v148 = *(_QWORD *)v91;
          v149 = 0;
          while ( !*(_QWORD *)(v148 + 8) || strcmp(*(const char **)v148, "floating") )
          {
            ++v149;
            v148 += 40;
            if ( v146 == v149 )
            {
              v147 = v221;
              goto LABEL_204;
            }
          }
        }
        else
        {
LABEL_204:
          if ( *(_QWORD *)(v91 + 16) < (unsigned __int64)(v146 + 1) )
          {
            v170 = qvector_reserve(v91, v147, v146 + 1, 40);
            v146 = *(_QWORD *)(v91 + 8);
            *(_QWORD *)v91 = v170;
            v147 = v170;
          }
          v79 = 0.0;
          v148 = v147 + 40 * v146;
          *(_QWORD *)v148 = 0;
          *(_OWORD *)(v148 + 8) = 0;
          *(_DWORD *)(v148 + 24) = 0;
          *(_QWORD *)(v148 + 32) = 0;
          ++*(_QWORD *)(v91 + 8);
          v153 = *(char **)v148;
          if ( *(_QWORD *)(v148 + 16) <= 8u )
          {
            v191 = qvector_reserve(v148, v153, 9, 1);
            *(_QWORD *)v148 = v191;
            v153 = (char *)v191;
          }
          *(_QWORD *)(v148 + 8) = 9;
          *(_QWORD *)v153 = 0x676E6974616F6C66LL;
          *(_BYTE *)(*(_QWORD *)v148 + 8LL) = 0;
        }
        v150 = *(_DWORD *)(v148 + 24);
        v151 = v148 + 24;
        if ( v150 )
          jvalue_t_clear(v151);
        *(_DWORD *)v151 = 3;
        *(_QWORD *)(v151 + 8) = v123;
      }
LABEL_115:
      v98 = &s1;
      if ( *(_QWORD *)(v90 + 8) )
        v98 = *(const char **)v90;
      v99 = *((_QWORD *)v213 + 1);
      v100 = *(_QWORD *)v213;
      if ( v99 )
      {
        v217 = *(_QWORD *)v213;
        v101 = *(_QWORD **)v213;
        v102 = 0;
        while ( 1 )
        {
          v103 = &s1;
          if ( v101[1] )
            v103 = (const char *)*v101;
          if ( !strcmp(v103, v98) )
            break;
          ++v102;
          v101 += 5;
          if ( v99 == v102 )
          {
            v100 = v217;
            goto LABEL_136;
          }
        }
      }
      else
      {
LABEL_136:
        if ( *((_QWORD *)v213 + 2) < (unsigned __int64)(v99 + 1) )
        {
          v173 = qvector_reserve(v213, v100, v99 + 1, 40);
          v99 = *((_QWORD *)v213 + 1);
          *(_QWORD *)v213 = v173;
          v100 = v173;
        }
        v79 = 0.0;
        v101 = (_QWORD *)(v100 + 40 * v99);
        *v101 = 0;
        *((_DWORD *)v101 + 6) = 0;
        v101[4] = 0;
        *(_OWORD *)(v101 + 1) = 0;
        ++*((_QWORD *)v213 + 1);
        if ( v98 && (v112 = strlen(v98), (v113 = v112) != 0) )
        {
          v181 = (void *)*v101;
          v182 = v112 + 1;
          if ( v101[2] < v112 + 1 )
          {
            v223 = v112 + 1;
            v211 = qvector_reserve(v101, *v101, v182, 1);
            v182 = v223;
            *v101 = v211;
            v181 = (void *)v211;
          }
          v101[1] = v182;
          memmove(v181, v98, v113);
          *(_BYTE *)(*v101 + v113) = 0;
        }
        else
        {
          v101[1] = 0;
        }
      }
      v104 = *((_DWORD *)v101 + 6);
      v105 = v101 + 3;
      if ( v104 )
        jvalue_t_clear(v105);
      *(_DWORD *)v105 = 3;
      v90 += 120;
      v105[1] = v91;
      if ( v224 == v90 )
        break;
      continue;
    }
  }
  v106 = 0;
  v107 = *v229;
  v108 = v229[1];
  v109 = *v229;
  if ( v108 )
  {
    while ( !*(_QWORD *)(v109 + 8) || strcmp(*(const char **)v109, "closed_docks") )
    {
      ++v106;
      v109 += 40;
      if ( v108 == v106 )
        goto LABEL_271;
    }
  }
  else
  {
LABEL_271:
    v80 = v108 + 1;
    if ( v229[2] < (unsigned __int64)(v108 + 1) )
    {
      v206 = qvector_reserve(v229, v107, v80, 40);
      v108 = v229[1];
      *v229 = v206;
      v107 = v206;
    }
    v79 = 0.0;
    v109 = v107 + 40 * v108;
    *(_QWORD *)v109 = 0;
    *(_OWORD *)(v109 + 8) = 0;
    *(_DWORD *)(v109 + 24) = 0;
    *(_QWORD *)(v109 + 32) = 0;
    ++v229[1];
    v186 = *(char **)v109;
    if ( *(_QWORD *)(v109 + 16) <= 0xCu )
    {
      v205 = qvector_reserve(v107 + 40 * v108, v186, 13, 1);
      *(_QWORD *)v109 = v205;
      v186 = (char *)v205;
    }
    *(_QWORD *)(v109 + 8) = 13;
    qmemcpy(v186, "closed_docks", 12);
    *(_BYTE *)(*(_QWORD *)v109 + 12LL) = 0;
  }
  v110 = *(_DWORD *)(v109 + 24);
  v111 = v109 + 24;
  if ( v110 )
    jvalue_t_clear(v111);
  *(_DWORD *)v111 = 3;
  *(_QWORD *)(v111 + 8) = v213;
  return sub_4B74C0(a2, v229, v80, v81, v79);
}
