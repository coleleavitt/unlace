unsigned __int64 __fastcall sub_3383C0(
        QT::QCursor *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  char *v14; // rax
  QT::QWidget *v15; // rdi
  int v16; // eax
  unsigned __int64 *v17; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  __m128i v21; // xmm0
  __int64 sreg; // rbp
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r14
  _QWORD *first_seg; // rbx
  __int64 segm_base; // rax
  __int64 v28; // r13
  __int64 v29; // r12
  int v30; // edx
  __int64 v31; // rax
  bool v32; // cl
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rdx
  __int128 v35; // rax
  const char *v36; // rsi
  unsigned __int64 v37; // rdi
  char *v38; // r12
  __m128i v39; // xmm0
  char *v40; // rax
  bool v41; // bp
  char *v42; // rsi
  char *v43; // r13
  int v44; // r12d
  __int64 i; // rax
  const char *v46; // r9
  char *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbp
  __int64 v50; // rbx
  __int64 *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rsi
  __int64 v54; // rcx
  unsigned __int64 v55; // rbp
  char *v56; // rdi
  unsigned __int8 v57; // bl
  QT::QAction **v58; // r10
  char *v59; // r9
  char v60; // al
  size_t v61; // r13
  char *v62; // rax
  __int64 v63; // rax
  int v64; // eax
  char *v65; // rsi
  char *v66; // rdi
  unsigned __int64 v67; // rsi
  void *v68; // r12
  __int64 v69; // rax
  char *v70; // rsi
  __m128i v71; // xmm0
  char *v72; // rax
  char *v73; // rbx
  char v74; // al
  __int64 v75; // rbp
  unsigned __int64 v76; // r12
  unsigned __int8 v77; // r14
  char *v78; // rdi
  char *v79; // r9
  char v80; // al
  char *v81; // rdi
  QT::QAction *v82; // rbx
  QT::QObject *v83; // rax
  char *v84; // rsi
  char v85; // r12
  bool v86; // r14
  int radix; // ebp
  char v88; // r13
  QT::QAction *v89; // r9
  char *v90; // rsi
  char v91; // al
  QT::QAction *v92; // r9
  bool v93; // zf
  __int64 v94; // rax
  char *v95; // rdx
  QT::QAction *v96; // r9
  QT::QAction *v97; // r9
  double v98; // xmm0_8
  char *v99; // rsi
  char v100; // al
  QT::QAction *v101; // r9
  __int64 v102; // rax
  char *v103; // rbx
  size_t v104; // r13
  __int64 v105; // rdx
  __int64 v106; // rbp
  __int64 v107; // rbx
  __int64 *v108; // rax
  __int64 v109; // rdi
  __int64 v110; // rdx
  __int64 v111; // rbp
  __int64 v112; // rbx
  __int64 *v113; // rax
  __int64 v114; // rdi
  char *frame_var; // rax
  char *v116; // rsi
  char *v117; // rsi
  char v118; // al
  QT::QAction *v119; // r9
  __int64 v120; // rax
  char *v121; // rdx
  char *v122; // rsi
  char v123; // al
  QT::QAction *v124; // r9
  __int64 v125; // rax
  char *v126; // rdx
  char *v127; // rsi
  char *v128; // rdi
  __int64 v129; // rbx
  int aflags; // eax
  int v131; // r13d
  __int64 v132; // rbx
  QT::QAction *v133; // r12
  unsigned __int64 v134; // rax
  char *v135; // rsi
  char v136; // dl
  __int64 v137; // rax
  char *v138; // r14
  __int64 v139; // rbx
  int v140; // r12d
  QT::QAction *v141; // r13
  int v142; // eax
  int v143; // eax
  unsigned __int64 v144; // rax
  char v145; // dl
  __int64 v146; // rax
  char *v147; // rbp
  QT::QAction *v148; // rbx
  QT::QObject *v149; // rax
  char *v150; // rdx
  int v151; // eax
  int v152; // eax
  int v153; // eax
  int v154; // eax
  char v155; // dl
  size_t v156; // rax
  char *v157; // rbx
  size_t v158; // r13
  __int64 v161; // [rsp+10h] [rbp-6A8h]
  QT::QAction *v162; // [rsp+10h] [rbp-6A8h]
  unsigned __int8 default_reftype; // [rsp+18h] [rbp-6A0h]
  int v164; // [rsp+18h] [rbp-6A0h]
  QT::QAction *v165; // [rsp+18h] [rbp-6A0h]
  QT::QAction *v166; // [rsp+18h] [rbp-6A0h]
  QT::QAction *v167; // [rsp+18h] [rbp-6A0h]
  QT::QAction *v168; // [rsp+18h] [rbp-6A0h]
  char *v169; // [rsp+18h] [rbp-6A0h]
  char *v170; // [rsp+18h] [rbp-6A0h]
  char *v171; // [rsp+18h] [rbp-6A0h]
  char v172; // [rsp+20h] [rbp-698h]
  QT::QAction *v173; // [rsp+20h] [rbp-698h]
  QT::QAction *v174; // [rsp+20h] [rbp-698h]
  QT::QAction *v175; // [rsp+20h] [rbp-698h]
  __int64 flags; // [rsp+28h] [rbp-690h]
  int v178; // [rsp+38h] [rbp-680h]
  int v179; // [rsp+40h] [rbp-678h]
  __m128i v180; // [rsp+48h] [rbp-670h] BYREF
  char *v181; // [rsp+58h] [rbp-660h]
  __int64 v182; // [rsp+60h] [rbp-658h]
  __int64 v183; // [rsp+68h] [rbp-650h]
  QT::QAction **v184; // [rsp+70h] [rbp-648h]
  unsigned __int8 v185; // [rsp+7Ah] [rbp-63Eh]
  bool v186; // [rsp+7Bh] [rbp-63Dh]
  int v187; // [rsp+7Ch] [rbp-63Ch]
  char v188; // [rsp+8Fh] [rbp-629h] BYREF
  char *s2; // [rsp+90h] [rbp-628h] BYREF
  __int128 v190; // [rsp+98h] [rbp-620h]
  char *s1; // [rsp+B0h] [rbp-608h] BYREF
  size_t n[3]; // [rsp+B8h] [rbp-600h]
  unsigned __int64 v193; // [rsp+D0h] [rbp-5E8h] BYREF
  __int128 v194; // [rsp+D8h] [rbp-5E0h]
  char *v195; // [rsp+F0h] [rbp-5C8h] BYREF
  __int128 v196; // [rsp+F8h] [rbp-5C0h]
  char *v197; // [rsp+110h] [rbp-5A8h] BYREF
  __m128i v198; // [rsp+118h] [rbp-5A0h] BYREF
  __int128 v199; // [rsp+128h] [rbp-590h]
  _BYTE v200[24]; // [rsp+138h] [rbp-580h] BYREF
  __int128 v201[3]; // [rsp+150h] [rbp-568h] BYREF
  __int64 v202; // [rsp+180h] [rbp-538h]
  int v203; // [rsp+188h] [rbp-530h]
  __int64 v204; // [rsp+190h] [rbp-528h]
  char v205; // [rsp+198h] [rbp-520h]
  char v206[272]; // [rsp+1A0h] [rbp-518h] BYREF
  __int64 v207; // [rsp+2B0h] [rbp-408h] BYREF
  _QWORD v208[34]; // [rsp+2B8h] [rbp-400h] BYREF
  __int64 v209; // [rsp+3C8h] [rbp-2F0h]
  __int64 v210; // [rsp+3D0h] [rbp-2E8h]
  __int64 v211; // [rsp+3D8h] [rbp-2E0h]
  __int64 v212; // [rsp+3E0h] [rbp-2D8h] BYREF
  _BYTE v213[272]; // [rsp+3E8h] [rbp-2D0h] BYREF
  __int64 v214; // [rsp+4F8h] [rbp-1C0h]
  __int64 v215; // [rsp+500h] [rbp-1B8h]
  __int64 v216; // [rsp+508h] [rbp-1B0h]
  __int128 v217; // [rsp+510h] [rbp-1A8h] BYREF
  __int64 v218; // [rsp+520h] [rbp-198h]
  __int64 v219; // [rsp+528h] [rbp-190h]
  __int64 v220; // [rsp+530h] [rbp-188h]
  _BYTE v221[320]; // [rsp+538h] [rbp-180h] BYREF
  unsigned __int64 v222; // [rsp+678h] [rbp-40h] BYREF

  v182 = a3;
  v222 = __readfsqword(0x28u);
  v14 = (char *)QT::QCursor::pos(a1);
  v15 = *((QT::QWidget **)a1 + 1);
  v197 = v14;
  v16 = sub_1C8070(v15, (__int64)&v197);
  dword_8CEBF8 = a4;
  v178 = v16;
  flags = get_flags_ex(a3, 0);
  get_opinfo(v206, a3, a4);
  v218 = -1;
  v17 = (unsigned __int64 *)v221;
  v217 = -1;
  v219 = 0;
  v220 = 0;
  do
  {
    *(_WORD *)v17 = 0;
    v17 += 5;
    *((_WORD *)v17 - 19) = 0;
    *((_WORD *)v17 - 18) = 0;
    *((_DWORD *)v17 - 2) = 0;
    *((_WORD *)v17 - 17) = 0;
    *((_OWORD *)v17 - 2) = 0;
    *(v17 - 2) = 0;
  }
  while ( v17 != &v222 );
  v181 = (char *)&v217;
  if ( !(unsigned __int8)sub_2DFC10(
                           a2,
                           (__int64)&v217,
                           (__int64)&qword_8CEC00,
                           (unsigned __int64 *)&qword_8CEC20,
                           nullptr,
                           &v188,
                           0.0) )
    return v222 - __readfsqword(0x28u);
  s2 = nullptr;
  v190 = 0;
  if ( (unsigned __int8)print_operand(&s2, v218, a4, 4, 0) && (unsigned __int64)v190 > 1 )
    tag_remove(&s2, s2, 0);
  setinf_flag(2, 16, 1);
  v172 = v188;
  if ( !v188 )
    goto LABEL_178;
  v21.m128i_i64[0] = 0;
  s1 = nullptr;
  *(_OWORD *)n = 0;
  v183 = flags & 0x600;
  if ( v183 == 1024 )
  {
    v48 = (unsigned int)flags & 0xF0000000;
    if ( v48 == 3489660928LL )
      goto LABEL_52;
  }
  v21.m128i_i64[0] = 0;
  v193 = 0;
  v195 = nullptr;
  v194 = 0;
  v196 = 0;
  default_reftype = get_default_reftype(v182);
  sreg = get_sreg(xmmword_8CC810);
  v23 = *(unsigned int *)(**(_QWORD **)(a2 + 208) + 80LL);
  v24 = get_sreg(xmmword_8CC810);
  v25 = 16 * sel2para(sreg);
  v161 = 16 * sel2para(v24);
  first_seg = (_QWORD *)get_first_seg(v24, v23);
  v179 = 0;
  while ( first_seg )
  {
    segm_base = get_segm_base(first_seg);
    v28 = v194;
    v29 = segm_base;
    if ( (_QWORD)v194 )
    {
      v30 = 0;
      v31 = 0;
      do
      {
        if ( *(_QWORD *)(v193 + 8 * v31) == v29 )
        {
          v32 = (_QWORD)v194 == v31;
          goto LABEL_14;
        }
        v31 = ++v30;
      }
      while ( v30 < (unsigned __int64)v194 );
      v32 = v30 == (_QWORD)v194;
    }
    else
    {
      v32 = v172;
    }
LABEL_14:
    if ( v29 == v25
      || v29 == v161
      || !v32
      || (v64 = sub_32EF00(&s1, (__int64)v181, default_reftype, a4, v29), v28 = v194, !v64) )
    {
LABEL_16:
      v33 = v193;
      v34 = v28 + 1;
      v197 = (char *)-1LL;
      if ( (unsigned __int64)&v197 < v193 || (unsigned __int64)&v197 >= v193 + 8LL * *((_QWORD *)&v194 + 1) )
      {
        if ( *((_QWORD *)&v194 + 1) < v34 )
        {
          v193 = qvector_reserve(&v193, v193, v34, 8);
          v33 = v193;
          v28 = v194;
          v63 = (__int64)v197;
        }
        else
        {
          v63 = -1;
        }
        *(_QWORD *)(v33 + 8 * v28) = v63;
      }
      else
      {
        if ( *((_QWORD *)&v194 + 1) < v34 )
        {
          v193 = qvector_reserve(&v193, v193, v34, 8);
          v28 = v194;
          v33 = v193;
        }
        *(_QWORD *)(v33 + 8 * v28) = -1;
      }
      v197 = nullptr;
      *(_QWORD *)&v194 = v194 + 1;
      v198 = 0;
      v197 = (char *)qvector_reserve(&v197, 0, 1, 1);
      v198.m128i_i64[0] = 1;
      *v197 = 0;
      v35 = v196;
      v36 = v195;
      v37 = v196 + 1;
      if ( &v197 < (char **)v195 || &v197 >= (char **)&v195[24 * *((_QWORD *)&v196 + 1)] )
      {
        if ( *((_QWORD *)&v196 + 1) < v37 )
        {
          v195 = (char *)qvector_reserve(&v195, v195, v196 + 1, 24);
          v36 = v195;
          *(_QWORD *)&v35 = v196;
        }
        v21 = _mm_loadu_si128(&v198);
        v62 = (char *)&v36[24 * v35];
        *(_QWORD *)v62 = v197;
        *(__m128i *)(v62 + 8) = v21;
        *(_QWORD *)&v196 = v196 + 1;
      }
      else
      {
        a7 = 0.0;
        v38 = v197;
        v39 = _mm_loadl_epi64(&v198);
        v197 = nullptr;
        a6 = (__m128)_mm_loadl_epi64((const __m128i *)&v198.m128i_u64[1]);
        v198 = 0;
        if ( *((_QWORD *)&v196 + 1) < v37 )
        {
          v180.m128i_i64[1] = a6.m128_u64[0];
          v180.m128i_i64[0] = v39.m128i_i64[0];
          v195 = (char *)qvector_reserve(&v195, v195, v196 + 1, 24);
          v36 = v195;
          a6 = (__m128)_mm_loadl_epi64((const __m128i *)&v180.m128i_u64[1]);
          *(_QWORD *)&v35 = v196;
          v39 = _mm_loadl_epi64(&v180);
        }
        v21 = _mm_unpacklo_epi64(v39, (__m128i)a6);
        v40 = (char *)&v36[24 * v35];
        *(_QWORD *)v40 = v38;
        *(__m128i *)(v40 + 8) = v21;
        *(_QWORD *)&v196 = v196 + 1;
        if ( v197 )
        {
          v198.m128i_i64[0] = 0;
          *(double *)v21.m128i_i64 = qfree(v197, v36, *((_QWORD *)&v35 + 1));
        }
      }
      goto LABEL_27;
    }
    if ( (_QWORD)v190 )
    {
      v65 = s2;
      v66 = (char *)&::s1;
      if ( !n[0] )
        goto LABEL_83;
    }
    else
    {
      v65 = (char *)&::s1;
      if ( !n[0] )
        goto LABEL_16;
    }
    v66 = s1;
LABEL_83:
    if ( !strcmp(v66, v65) )
      goto LABEL_16;
    ++v179;
    v67 = v193;
    if ( *((_QWORD *)&v194 + 1) < (unsigned __int64)(v28 + 1) )
    {
      v193 = qvector_reserve(&v193, v193, v28 + 1, 8);
      v28 = v194;
      v67 = v193;
    }
    *(_QWORD *)(v67 + 8 * v28) = v29;
    v68 = nullptr;
    *(_QWORD *)&v194 = v194 + 1;
    v180.m128i_i64[0] = n[0];
    if ( n[0] )
    {
      v158 = n[0];
      v68 = (void *)qalloc_or_throw(n[0]);
      memcpy(v68, s1, v158);
    }
    v69 = v196;
    v70 = v195;
    if ( *((_QWORD *)&v196 + 1) < (unsigned __int64)(v196 + 1) )
    {
      v195 = (char *)qvector_reserve(&v195, v195, v196 + 1, 24);
      v70 = v195;
      v69 = v196;
    }
    v71 = _mm_loadl_epi64(&v180);
    v72 = &v70[24 * v69];
    v21 = _mm_unpacklo_epi64(v71, v71);
    *(_QWORD *)v72 = v68;
    *(__m128i *)(v72 + 8) = v21;
    *(_QWORD *)&v196 = v196 + 1;
LABEL_27:
    first_seg = (_QWORD *)get_next_seg(*first_seg);
  }
  v41 = v179 > 1;
  if ( v179 > 1 )
    sub_336830((QT::QObject **)a1, unk_8C9B90, "Offsets", nullptr, *(double *)v21.m128i_i64);
  v42 = v181;
  if ( !(unsigned int)sub_32EF00(&s1, (__int64)v181, default_reftype, a4, v25) )
    goto LABEL_36;
  if ( !(_QWORD)v190 )
  {
    v42 = (char *)&::s1;
    if ( !n[0] )
      goto LABEL_36;
    goto LABEL_147;
  }
  v42 = s2;
  if ( n[0] )
  {
LABEL_147:
    v43 = s1;
    if ( !strcmp(s1, v42) )
      goto LABEL_36;
    goto LABEL_35;
  }
  if ( *s2 )
  {
    v43 = (char *)&::s1;
LABEL_35:
    v42 = (char *)v41;
    sub_338120((QT::QObject **)a1, v41, 13, unk_8C9B80, (__int64)"%s", v43);
  }
LABEL_36:
  if ( v161 == v25 )
    goto LABEL_37;
  v42 = v181;
  if ( !(unsigned int)sub_32EF00(&s1, (__int64)v181, default_reftype, a4, v161) )
    goto LABEL_37;
  if ( !(_QWORD)v190 )
  {
    v42 = (char *)&::s1;
    if ( !n[0] )
      goto LABEL_37;
    goto LABEL_257;
  }
  v42 = s2;
  if ( n[0] )
  {
LABEL_257:
    v73 = s1;
    if ( !strcmp(s1, v42) )
      goto LABEL_37;
    goto LABEL_96;
  }
  if ( *s2 )
  {
    v73 = (char *)&::s1;
LABEL_96:
    v42 = (char *)v41;
    sub_338120((QT::QObject **)a1, v41, 14, unk_8C9B88, (__int64)"%s", v73);
  }
LABEL_37:
  v44 = 0;
  for ( i = 0; v44 < (unsigned __int64)v194; i = v44 )
  {
    if ( *(_QWORD *)(v193 + 8 * i) != -1 )
    {
      v46 = &::s1;
      v47 = &v195[24 * i];
      if ( *((_QWORD *)v47 + 1) )
        v46 = *(const char **)v47;
      v42 = (char *)v41;
      sub_338120((QT::QObject **)a1, v41, (unsigned int)(v44 + 79), unk_8C9B90, (__int64)"%s", v46);
    }
    ++v44;
  }
  v48 = (__int64)v195;
  if ( v195 )
  {
    v49 = v196;
    if ( (_QWORD)v196 )
    {
      v50 = 0;
      do
      {
        v51 = (__int64 *)(v48 + 24 * v50);
        v52 = *v51;
        if ( *v51 )
        {
          v51[1] = 0;
          qfree(v52, v42);
          v48 = (__int64)v195;
        }
        ++v50;
      }
      while ( v49 != v50 );
    }
    *(_QWORD *)&v196 = 0;
    *(double *)v21.m128i_i64 = qfree(v48, v42);
  }
  if ( v193 )
  {
    *(_QWORD *)&v194 = 0;
    *(double *)v21.m128i_i64 = qfree(v193, v42);
  }
LABEL_52:
  v53 = qword_8CEC00;
  v207 = 0;
  memset(v208, 0, sizeof(v208));
  v54 = 0;
  v209 = 4;
  v210 = 0;
  if ( qword_8CEC00 < 0 )
  {
    v74 = 5;
    goto LABEL_98;
  }
  v21.m128i_i64[0] = 0;
  LODWORD(v210) = 128;
  v211 = 0xAAAAAA0AA00000LL;
  LOBYTE(v209) = 7;
  v197 = (char *)-1LL;
  v198 = (__m128i)(unsigned __int64)qword_8CEC00;
  LOBYTE(v199) = 1;
  *((_QWORD *)&v199 + 1) = 0;
  memset(v200, 0, sizeof(v200));
  v201[0] = 0;
  sub_1AD2D0((__int64 *)&v197, qword_8CEC00, v48, 0, 0.0, a6, a7, a8, v19, v20, a11, a12);
  if ( *(int *)v200 <= 0 )
    goto LABEL_163;
  v164 = 0;
  v186 = *(_DWORD *)v200 != 1;
  v55 = 0;
  v187 = *(_DWORD *)v200 - 1;
  v180.m128i_i64[1] = (unsigned int)(*(_DWORD *)v200 - 1);
  v180.m128i_i64[0] = (__int64)&v208[33];
  v185 = 0;
  while ( 1 )
  {
    LODWORD(v208[0]) = sub_1ACB20(&v197, (__int64)&v208[1], v180.m128i_i64[0], v55);
    v193 = 0;
    get_type_by_tid(&v193, v208[1]);
    v195 = nullptr;
    v196 = 0;
    if ( (v193 & 0x100) != 0 )
    {
      get_tinfo_pdata(&v195, v193, 8);
      if ( (unsigned __int64)v196 > 1 )
      {
        if ( (unsigned __int8)sub_1ADBB0((__int64 *)&s1, v208[0], &v193, qword_8CEC00, (__int64)&v195) )
          goto LABEL_155;
      }
    }
    v60 = print_operand(&s1, v218, a4, 4, &v207);
    v61 = n[0];
    if ( v60 && n[0] > 1 )
    {
      tag_remove(&s1, s1, 0);
LABEL_155:
      v61 = n[0];
    }
    if ( !(_QWORD)v190 )
    {
      v53 = (__int64)&::s1;
      if ( !v61 )
        goto LABEL_63;
LABEL_56:
      v56 = s1;
      goto LABEL_57;
    }
    v53 = (__int64)s2;
    v56 = (char *)&::s1;
    if ( v61 )
      goto LABEL_56;
LABEL_57:
    if ( strcmp(v56, (const char *)v53) )
    {
      v57 = v186 & (v185 ^ 1);
      if ( v57 )
      {
        v184 = (QT::QAction **)&unk_8C9820;
        sub_336830((QT::QObject **)a1, qword_8C9BA0, "Structure offset", nullptr, *(double *)v21.m128i_i64);
        v185 = v57;
        v58 = v184;
        v53 = 1;
        v61 = n[0];
      }
      else
      {
        v58 = (QT::QAction **)&unk_8C9820;
        v53 = v185;
      }
      v59 = (char *)&::s1;
      if ( v61 )
        v59 = s1;
      sub_338120((QT::QObject **)a1, v53, (unsigned int)(v55 + 200079), v58[112], (__int64)"%s", v59);
      if ( v178 - 1 <= ++v164 )
        break;
    }
LABEL_63:
    if ( v195 )
    {
      *(_QWORD *)&v196 = 0;
      *(double *)v21.m128i_i64 = qfree(v195, (const char *)v53);
    }
    clear_tinfo_t(&v193);
    if ( v180.m128i_i64[1] == v55 )
    {
      LODWORD(v55) = v55 + 1;
      goto LABEL_160;
    }
    ++v55;
  }
  if ( v195 )
  {
    *(_QWORD *)&v196 = 0;
    *(double *)v21.m128i_i64 = qfree(v195, (const char *)v53);
  }
  clear_tinfo_t(&v193);
LABEL_160:
  if ( v185 && v187 > (int)v55 )
  {
    v148 = qword_8C9BA0;
    v149 = sub_337FF0(*(QT::QWidget **)a1);
    v53 = (__int64)v148;
    sub_336830((QT::QObject **)a1, v148, "More...", v149, *(double *)v21.m128i_i64);
  }
LABEL_163:
  v105 = *(_QWORD *)&v200[16];
  if ( *(_QWORD *)&v200[16] )
  {
    v106 = *(_QWORD *)&v201[0];
    if ( *(_QWORD *)&v201[0] )
    {
      v107 = 0;
      do
      {
        v108 = (__int64 *)(v105 + 24 * v107);
        v109 = *v108;
        if ( *v108 )
        {
          v108[1] = 0;
          qfree(v109, (const char *)v53);
          v105 = *(_QWORD *)&v200[16];
        }
        ++v107;
      }
      while ( v106 != v107 );
    }
    *(_QWORD *)&v201[0] = 0;
    *(double *)v21.m128i_i64 = qfree(v105, (const char *)v53);
  }
  v110 = *((_QWORD *)&v199 + 1);
  if ( *((_QWORD *)&v199 + 1) )
  {
    v111 = *(_QWORD *)v200;
    if ( *(_QWORD *)v200 )
    {
      v112 = 0;
      do
      {
        v113 = (__int64 *)(v110 + 24 * v112);
        v114 = *v113;
        if ( *v113 )
        {
          v113[1] = 0;
          qfree(v114, (const char *)v53);
          v110 = *((_QWORD *)&v199 + 1);
        }
        ++v112;
      }
      while ( v111 != v112 );
    }
    *(_QWORD *)v200 = 0;
    *(double *)v21.m128i_i64 = qfree(v110, (const char *)v53);
  }
  v53 = qword_8CEC00;
  v74 = v209 | 1;
LABEL_98:
  LOBYTE(v209) = v74;
  v211 = 0x88888808800000LL;
  sub_1AB7A0((__int64)&v197, v53, (unsigned int)qword_8CEC20, v54);
  if ( v198.m128i_i64[0] )
  {
    v75 = 0;
    v76 = 0;
    v77 = 0;
    while ( 1 )
    {
      sub_1AB6D0((unsigned int *)&v197[8 * v75], (__int64)v208);
      v80 = print_operand(&s1, v218, a4, 4, &v207);
      v104 = n[0];
      if ( v80 && n[0] > 1 )
      {
        tag_remove(&s1, s1, 0);
        v104 = n[0];
      }
      if ( (_QWORD)v190 )
        break;
      v53 = (__int64)&::s1;
      if ( v104 )
      {
LABEL_101:
        v78 = s1;
LABEL_102:
        if ( strcmp(v78, (const char *)v53) )
        {
          if ( !v77 )
          {
            sub_336830((QT::QObject **)a1, qword_8C9BF8, "Symbolic constant", nullptr, *(double *)v21.m128i_i64);
            v104 = n[0];
          }
          v79 = (char *)&::s1;
          if ( v104 )
            v79 = s1;
          v53 = 1;
          sub_338120((QT::QObject **)a1, 1, (unsigned int)(v75 + 300079), qword_8C9BF8, (__int64)"%s", v79);
          ++v76;
          v77 = v172;
          if ( v76 >= v178 - 2 )
            goto LABEL_114;
        }
        if ( (unsigned __int64)++v75 >= v198.m128i_i64[0] )
        {
LABEL_113:
          v172 = 0;
          goto LABEL_114;
        }
      }
      else if ( (unsigned __int64)++v75 >= v198.m128i_i64[0] )
      {
        goto LABEL_113;
      }
    }
    v53 = (__int64)s2;
    v78 = (char *)&::s1;
    if ( !v104 )
      goto LABEL_102;
    goto LABEL_101;
  }
  v172 = 0;
  v77 = 0;
LABEL_114:
  v81 = v197;
  if ( v197 )
  {
    v198.m128i_i64[0] = 0;
    *(double *)v21.m128i_i64 = qfree(v197, (const char *)v53);
  }
  if ( *(_DWORD *)(get_idati(v81) + 16) )
    sub_338120((QT::QObject **)a1, v77, 11, qword_8C9BF8, (__int64)"Use standard symbolic constant");
  if ( v77 && v172 )
  {
    v82 = qword_8C9BF8;
    v83 = sub_337FF0(*(QT::QWidget **)a1);
    sub_336830((QT::QObject **)a1, v82, "More...", v83, *(double *)v21.m128i_i64);
  }
  if ( v183 == 1536 )
  {
    v195 = nullptr;
    frame_var = (char *)get_frame_var(&v195, 0, v181, &v181[40 * (a4 + 1)], qword_8CEC00);
    if ( frame_var == (char *)-1LL )
    {
LABEL_193:
      clear_tinfo_t(&v195);
      sub_5392E0(a1, 0, 1);
      goto LABEL_124;
    }
    v116 = v195;
    v198 = 0u;
    memset(v200, 0, sizeof(v200));
    v202 = 1;
    v203 = -1;
    v204 = 0;
    v205 = 0;
    v197 = frame_var;
    v199 = 0;
    v201[0] = 0;
    find_tinfo_udt_member(&v197, v195, 1);
    if ( (v204 & 0x300000000000LL) != 0 )
    {
LABEL_189:
      clear_tinfo_t(v201);
      if ( *(_QWORD *)v200 )
      {
        *(_QWORD *)&v200[8] = 0;
        qfree(*(_QWORD *)v200, v116);
      }
      if ( v198.m128i_i64[1] )
      {
        *(_QWORD *)&v199 = 0;
        qfree(v198.m128i_i64[1], v116);
      }
      goto LABEL_193;
    }
    LOBYTE(v209) = v209 & 0xFE;
    v211 = 0xBBBBBB0BB00000LL;
    v155 = print_operand(&s1, v218, a4, 4, &v207);
    v156 = n[0];
    if ( v155 && n[0] > 1 )
    {
      tag_remove(&s1, s1, 0);
      v156 = n[0];
    }
    if ( (_QWORD)v190 )
    {
      v116 = s2;
      if ( !v156 )
      {
        if ( !*s2 )
          goto LABEL_189;
        v157 = (char *)&::s1;
LABEL_310:
        v116 = (char *)qword_8C9C00;
        sub_336830((QT::QObject **)a1, qword_8C9C00, v157, nullptr, 0.0);
        goto LABEL_189;
      }
    }
    else
    {
      v116 = (char *)&::s1;
      if ( !v156 )
        goto LABEL_189;
    }
    v157 = s1;
    if ( !strcmp(s1, v116) )
      goto LABEL_189;
    goto LABEL_310;
  }
  v84 = nullptr;
  sub_5392E0(a1, 0, 1);
  if ( v183 == 1024 && (flags & 0xF0000000) == 0xD0000000LL )
    goto LABEL_247;
LABEL_124:
  v85 = is_numop(flags, a4);
  v86 = (unsigned __int8)(v221[40 * a4 + 1] - 4) <= 1u;
  radix = get_radix(flags, (int)a4);
  v212 = 0;
  v88 = v85 ^ 1;
  v214 = 4;
  v215 = 0;
  memset(v213, 0, sizeof(v213));
  if ( radix == 16 && !v88 )
  {
    v212 = 0;
    v89 = (QT::QAction *)unk_8C9BB8;
    v214 = 4;
    v215 = 0;
    memset(v213, 0, sizeof(v213));
    goto LABEL_127;
  }
  v117 = (char *)v218;
  v216 = 0x11111101100000LL;
  v167 = (QT::QAction *)unk_8C9BB0;
  v197 = nullptr;
  v198 = 0;
  v118 = print_operand(&v197, v218, a4, 4, &v212);
  v119 = v167;
  v93 = v118 == 0;
  v120 = v198.m128i_i64[0];
  if ( !v93 && v198.m128i_i64[0] > 1uLL )
  {
    v117 = v197;
    tag_remove(&v197, v197, 0);
    v120 = v198.m128i_i64[0];
    v119 = v167;
  }
  if ( !(_QWORD)v190 )
  {
    if ( !v120 )
      goto LABEL_253;
    v117 = (char *)&::s1;
    goto LABEL_282;
  }
  v117 = s2;
  if ( v120 )
  {
LABEL_282:
    v174 = v119;
    v170 = v197;
    v152 = strcmp(v197, v117);
    v121 = v170;
    v119 = v174;
    if ( v152 )
    {
LABEL_199:
      v117 = (char *)v119;
      sub_336830((QT::QObject **)a1, v119, v121, nullptr, 0.0);
      v121 = v197;
    }
    goto LABEL_200;
  }
  if ( *s2 )
  {
    v121 = (char *)&::s1;
    goto LABEL_199;
  }
LABEL_253:
  v121 = v197;
LABEL_200:
  if ( v121 )
  {
    v198.m128i_i64[0] = 0;
    qfree(v121, v117);
  }
  v212 = 0;
  v214 = 4;
  v89 = (QT::QAction *)unk_8C9BB8;
  v215 = 0;
  memset(v213, 0, sizeof(v213));
  if ( radix == 10 && !v88 )
  {
    v212 = 0;
    v96 = (QT::QAction *)unk_8C9BC0;
    v214 = 4;
    v215 = 0;
    memset(v213, 0, sizeof(v213));
    goto LABEL_205;
  }
LABEL_127:
  v90 = (char *)v218;
  v165 = v89;
  v216 = 0x22222202200000LL;
  v197 = nullptr;
  v198 = 0;
  v91 = print_operand(&v197, v218, a4, 4, &v212);
  v92 = v165;
  v93 = v91 == 0;
  v94 = v198.m128i_i64[0];
  if ( !v93 && v198.m128i_i64[0] > 1uLL )
  {
    v90 = v197;
    tag_remove(&v197, v197, 0);
    v94 = v198.m128i_i64[0];
    v92 = v165;
  }
  if ( !(_QWORD)v190 )
  {
    if ( !v94 )
      goto LABEL_255;
    v90 = (char *)&::s1;
    goto LABEL_279;
  }
  v90 = s2;
  if ( v94 )
  {
LABEL_279:
    v173 = v92;
    v169 = v197;
    v151 = strcmp(v197, v90);
    v95 = v169;
    v92 = v173;
    if ( v151 )
    {
LABEL_132:
      v90 = (char *)v92;
      sub_336830((QT::QObject **)a1, v92, v95, nullptr, 0.0);
      v95 = v197;
    }
    goto LABEL_133;
  }
  if ( *s2 )
  {
    v95 = (char *)&::s1;
    goto LABEL_132;
  }
LABEL_255:
  v95 = v197;
LABEL_133:
  if ( v95 )
  {
    v198.m128i_i64[0] = 0;
    qfree(v95, v90);
  }
  v212 = 0;
  v214 = 4;
  v96 = (QT::QAction *)unk_8C9BC0;
  v215 = 0;
  memset(v213, 0, sizeof(v213));
  if ( radix == 8 && !v88 )
  {
    v212 = 0;
    v97 = (QT::QAction *)unk_8C9BC8;
    v214 = 4;
    v215 = 0;
    memset(v213, 0, sizeof(v213));
    goto LABEL_138;
  }
LABEL_205:
  v98 = 0.0;
  v122 = (char *)v218;
  v168 = v96;
  v216 = 0x77777707700000LL;
  v197 = nullptr;
  v198 = 0;
  v123 = print_operand(&v197, v218, a4, 4, &v212);
  v124 = v168;
  v93 = v123 == 0;
  v125 = v198.m128i_i64[0];
  if ( !v93 && v198.m128i_i64[0] > 1uLL )
  {
    v122 = v197;
    tag_remove(&v197, v197, 0);
    v125 = v198.m128i_i64[0];
    v124 = v168;
  }
  if ( !(_QWORD)v190 )
  {
    if ( !v125 )
      goto LABEL_290;
    v122 = (char *)&::s1;
    goto LABEL_292;
  }
  v122 = s2;
  if ( v125 )
  {
LABEL_292:
    v175 = v124;
    v171 = v197;
    v154 = strcmp(v197, v122);
    v126 = v171;
    v124 = v175;
    if ( v154 )
    {
LABEL_210:
      v122 = (char *)v124;
      sub_336830((QT::QObject **)a1, v124, v126, nullptr, 0.0);
      v126 = v197;
    }
    goto LABEL_211;
  }
  if ( *s2 )
  {
    v126 = (char *)&::s1;
    goto LABEL_210;
  }
LABEL_290:
  v126 = v197;
LABEL_211:
  if ( v126 )
  {
    v198.m128i_i64[0] = 0;
    v98 = qfree(v126, v122);
  }
  v212 = 0;
  v214 = 4;
  v97 = (QT::QAction *)unk_8C9BC8;
  v215 = 0;
  memset(v213, 0, sizeof(v213));
  if ( radix != 2 || v88 )
  {
LABEL_138:
    v98 = 0.0;
    v99 = (char *)v218;
    v166 = v97;
    v216 = 0x66666606600000LL;
    v197 = nullptr;
    v198 = 0;
    v100 = print_operand(&v197, v218, a4, 4, &v212);
    v101 = v166;
    v93 = v100 == 0;
    v102 = v198.m128i_i64[0];
    if ( !v93 && v198.m128i_i64[0] > 1uLL )
    {
      v99 = v197;
      tag_remove(&v197, v197, 0);
      v102 = v198.m128i_i64[0];
      v101 = v166;
    }
    if ( (_QWORD)v190 )
    {
      v99 = s2;
      if ( !v102 )
      {
        if ( *s2 )
        {
          v103 = (char *)&::s1;
LABEL_143:
          v99 = (char *)v101;
          sub_336830((QT::QObject **)a1, v101, v103, nullptr, 0.0);
          v103 = v197;
          goto LABEL_144;
        }
        goto LABEL_288;
      }
    }
    else
    {
      if ( !v102 )
      {
LABEL_288:
        v103 = v197;
        goto LABEL_144;
      }
      v99 = (char *)&::s1;
    }
    v103 = v197;
    v162 = v101;
    v153 = strcmp(v197, v99);
    v101 = v162;
    if ( v153 )
      goto LABEL_143;
LABEL_144:
    if ( v103 )
    {
      v198.m128i_i64[0] = 0;
      v98 = qfree(v103, v99);
    }
  }
  LOBYTE(v209) = v209 & 0xFE;
  v211 = 0x33333303300000LL;
  if ( (unsigned __int8)print_operand(&s1, v218, a4, 4, &v207) && n[0] > 1 )
    tag_remove(&s1, s1, 0);
  if ( HIDWORD(v209) != 2 )
  {
    if ( (_QWORD)v190 )
    {
      v127 = s2;
      v128 = (char *)&::s1;
      if ( n[0] )
        goto LABEL_219;
LABEL_220:
      if ( strcmp(v128, v127) )
      {
        sub_32EC20((__int64)&s1, "&", (const char *)&unk_5C2F25);
        v150 = (char *)&::s1;
        if ( n[0] )
          v150 = s1;
        sub_336830((QT::QObject **)a1, unk_8C9BE8, v150, nullptr, v98);
      }
    }
    else
    {
      v127 = (char *)&::s1;
      if ( n[0] )
      {
LABEL_219:
        v128 = s1;
        goto LABEL_220;
      }
    }
  }
  if ( !v85 && !v86 )
  {
    v84 = (char *)a4;
    if ( !(unsigned __int8)is_char(flags, a4) )
      goto LABEL_247;
  }
  v129 = v182;
  v211 = get_flags_ex(v182, 0);
  aflags = get_aflags(v129);
  LOBYTE(v209) = v209 | 2;
  v131 = aflags;
  LODWORD(v210) = aflags;
  if ( !qword_8CEC00 )
    goto LABEL_235;
  v132 = v211;
  v133 = (QT::QAction *)unk_8C9C08;
  v197 = nullptr;
  v198 = 0;
  LODWORD(v210) = aflags ^ (a4 == 0 ? 0x100000 : 0x200000);
  v134 = v211 | 0x20000;
  if ( ((v131 ^ (a4 == 0 ? 0x100000 : 0x200000)) & 0x300000) == 0 )
    v134 = v211 & 0xFFFFFFFFFFFDFFFFLL;
  v135 = (char *)v218;
  v211 = v134;
  v136 = print_operand(&v197, v218, a4, 4, &v207);
  v137 = v198.m128i_i64[0];
  if ( v136 && v198.m128i_i64[0] > 1uLL )
  {
    v135 = v197;
    tag_remove(&v197, v197, 0);
    v137 = v198.m128i_i64[0];
  }
  if ( !(_QWORD)v190 )
  {
    if ( !v137 )
      goto LABEL_277;
    v135 = (char *)&::s1;
    goto LABEL_274;
  }
  v135 = s2;
  if ( v137 )
  {
LABEL_274:
    v138 = v197;
    if ( strcmp(v197, v135) )
    {
LABEL_232:
      v135 = (char *)v133;
      sub_336830((QT::QObject **)a1, v133, v138, nullptr, 0.0);
      v138 = v197;
    }
    goto LABEL_233;
  }
  if ( *s2 )
  {
    v138 = (char *)&::s1;
    goto LABEL_232;
  }
LABEL_277:
  v138 = v197;
LABEL_233:
  v211 = v132;
  LODWORD(v210) = v131;
  if ( v138 )
  {
    v198.m128i_i64[0] = 0;
    qfree(v138, v135);
  }
LABEL_235:
  v84 = (_BYTE *)(&dword_0 + 2);
  if ( !(unsigned __int8)getinf_flag(2, 2) && !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 208) + 8LL) + 296LL) )
    goto LABEL_247;
  v139 = v211;
  v140 = v210;
  v141 = (QT::QAction *)unk_8C9C10;
  v197 = nullptr;
  v142 = -(a4 == 0);
  v198 = 0;
  LOBYTE(v142) = 0;
  v143 = v210 ^ (v142 + 512);
  v93 = (v143 & 0x300) == 0;
  LODWORD(v210) = v143;
  v144 = v211 | 0x40000;
  if ( v93 )
    v144 = v211 & 0xFFFFFFFFFFFBFFFFLL;
  v84 = (char *)v218;
  v211 = v144;
  v145 = print_operand(&v197, v218, a4, 4, &v207);
  v146 = v198.m128i_i64[0];
  if ( v145 && v198.m128i_i64[0] > 1uLL )
  {
    v84 = v197;
    tag_remove(&v197, v197, 0);
    v146 = v198.m128i_i64[0];
  }
  if ( !(_QWORD)v190 )
  {
    if ( !v146 )
      goto LABEL_267;
    v84 = (char *)&::s1;
    goto LABEL_264;
  }
  v84 = s2;
  if ( v146 )
  {
LABEL_264:
    v147 = v197;
    if ( strcmp(v197, v84) )
    {
LABEL_244:
      v84 = (char *)v141;
      sub_336830((QT::QObject **)a1, v141, v147, nullptr, 0.0);
      v147 = v197;
    }
    goto LABEL_245;
  }
  if ( *s2 )
  {
    v147 = (char *)&::s1;
    goto LABEL_244;
  }
LABEL_267:
  v147 = v197;
LABEL_245:
  v211 = v139;
  LODWORD(v210) = v140;
  if ( v147 )
  {
    v198.m128i_i64[0] = 0;
    qfree(v147, v84);
  }
LABEL_247:
  if ( s1 )
  {
    n[0] = 0;
    qfree(s1, v84);
  }
LABEL_178:
  sub_5399B0(a1, unk_8C9C18, 0, 1);
  if ( (unsigned __int8)is_defarg(flags, a4) )
    sub_338120((QT::QObject **)a1, 0, 10, unk_8C9A98, (__int64)"Undefine operand");
  setinf_flag(2, 16, 0);
  if ( s2 )
  {
    *(_QWORD *)&v190 = 0;
    qfree(s2, (const char *)&word_10);
  }
  return v222 - __readfsqword(0x28u);
}
