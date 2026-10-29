__int64 __fastcall sub_107F8A0(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5, __int64 *a6)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdi
  size_t v11; // r14
  size_t v12; // r12
  size_t v13; // rax
  size_t v14; // r14
  size_t v15; // r15
  size_t v16; // rax
  size_t v17; // r14
  size_t v18; // r15
  size_t v19; // rax
  size_t v20; // r14
  size_t v21; // r15
  size_t v22; // rax
  size_t v23; // r14
  size_t v24; // r15
  size_t v25; // rax
  size_t v26; // r14
  size_t v27; // r15
  size_t v28; // rax
  size_t v29; // r14
  size_t v30; // r15
  size_t v31; // rax
  size_t v32; // r14
  size_t v33; // r15
  size_t v34; // rax
  size_t v35; // r14
  size_t v36; // r15
  size_t v37; // rax
  size_t v38; // r14
  size_t v39; // r15
  size_t v40; // rax
  char v41; // al
  __int64 v42; // rbp
  __int64 v43; // r15
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r13
  size_t v51; // r14
  size_t v52; // r12
  size_t v53; // rax
  size_t v54; // r14
  size_t v55; // r15
  size_t v56; // rax
  size_t v57; // r14
  size_t v58; // r15
  size_t v59; // rax
  size_t v60; // r14
  size_t v61; // r15
  size_t v62; // rax
  size_t v63; // r14
  size_t v64; // r15
  size_t v65; // rax
  size_t v66; // r14
  size_t v67; // r15
  size_t v68; // rax
  size_t v69; // r14
  size_t v70; // r15
  size_t v71; // rax
  char v72; // al
  int v73; // r14d
  __int64 v74; // r14
  const char *v75; // rsi
  unsigned int v76; // ebp
  void *v77; // rdi
  __int64 v78; // rbx
  __int64 v79; // r12
  char *v80; // rax
  __int64 v81; // rdi
  __int32 v83; // edx
  __int32 v84; // esi
  __int64 v85; // r8
  unsigned __int8 *v86; // rax
  _DWORD *v87; // r10
  unsigned __int8 *v88; // rdi
  __int32 v89; // ecx
  __int32 v90; // eax
  __int32 v91; // edx
  __int64 v92; // r12
  __int64 v93; // rbp
  unsigned __int8 *v94; // rax
  __int64 v95; // rdi
  __int64 v96; // r15
  unsigned __int8 *v97; // r13
  unsigned __int8 *v98; // r12
  __int64 v99; // r9
  unsigned __int8 *v100; // rcx
  char *v101; // rdx
  __int64 v102; // rbx
  unsigned __int8 *v103; // r15
  char *v104; // r13
  size_t v105; // r12
  __int64 v106; // rax
  __int64 v107; // rcx
  char v108; // al
  int v109; // eax
  __int64 v110; // rbp
  unsigned __int8 *v111; // r14
  unsigned __int8 *v112; // rax
  unsigned __int8 *v113; // rbp
  unsigned __int8 *v114; // r14
  unsigned __int8 *v115; // r13
  char *v116; // rsi
  __int64 v117; // r13
  __int64 v118; // rax
  unsigned __int8 *v119; // r15
  unsigned __int8 *v120; // r13
  unsigned __int8 *v121; // r12
  __int64 v122; // rax
  __int64 v123; // r14
  __int64 v124; // rax
  unsigned __int8 *v125; // rbp
  __int64 *v126; // r14
  unsigned __int8 *v127; // rbx
  unsigned __int8 *v128; // r13
  unsigned __int8 *v129; // r14
  __int64 v130; // rax
  unsigned __int8 *v131; // rbp
  __int64 *v132; // r14
  unsigned __int8 *v133; // rbx
  unsigned __int8 *v134; // r12
  unsigned __int8 *v135; // r14
  __int64 v136; // rax
  __int64 v137; // [rsp+8h] [rbp-100h] BYREF
  __int64 v138; // [rsp+10h] [rbp-F8h]
  unsigned __int8 *v139; // [rsp+18h] [rbp-F0h]
  unsigned __int8 *v140; // [rsp+20h] [rbp-E8h]
  _DWORD *v141; // [rsp+28h] [rbp-E0h]
  _BYTE *v142; // [rsp+30h] [rbp-D8h]
  __int64 v143; // [rsp+38h] [rbp-D0h]
  __int64 v144; // [rsp+40h] [rbp-C8h]
  __int64 *v145; // [rsp+48h] [rbp-C0h]
  __m128 v146; // [rsp+50h] [rbp-B8h] BYREF
  void *ptr; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v148; // [rsp+68h] [rbp-A0h]
  __int64 v149; // [rsp+6Ch] [rbp-9Ch]
  char v150; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v151; // [rsp+80h] [rbp-88h] BYREF
  __m128i si128; // [rsp+88h] [rbp-80h]

  v138 = a1;
  v141 = (_DWORD *)a2;
  v142 = a4;
  v143 = a5;
  v137 = a3;
  v7 = sub_22836A0(a4, a5);
  sub_2284220(&ptr, a1 + 216, v7, v8);
  if ( v150 )
  {
    v83 = v149;
    v151 = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D20);
    if ( (_DWORD)v149 )
    {
      sub_2220EB0(&v151, v148);
      v85 = (unsigned int)v149;
      v100 = v151;
      v84 = HIDWORD(v149);
      v83 = si128.m128i_i32[0];
      *(__int64 *)((char *)si128.m128i_i64 + 4) = v149;
      v140 = v151;
      if ( !si128.m128i_i32[0] )
      {
        v86 = v151;
        goto LABEL_36;
      }
      v145 = a6;
      v101 = (char *)ptr;
      v102 = 8LL * si128.m128i_u32[0] + 8;
      v103 = nullptr;
      v104 = (char *)ptr;
      v139 = (unsigned __int8 *)(8LL * (unsigned int)(si128.m128i_i32[0] - 1));
      v86 = v151;
      while ( 1 )
      {
        v110 = *(_QWORD *)&v103[(_QWORD)v101];
        v111 = &v103[(_QWORD)v86];
        if ( !v110 || v110 == -8 )
        {
          *(_QWORD *)v111 = v110;
          v102 += 4;
          if ( v139 == v103 )
            goto LABEL_67;
        }
        else
        {
          v105 = *(_QWORD *)v110;
          v106 = sub_220C370(*(_QWORD *)v110 + 17LL, 8, v101, v100, v85, v99);
          v107 = v106;
          if ( v105 )
          {
            v144 = v106;
            memcpy((void *)(v106 + 16), (const void *)(v110 + 16), v105);
            v107 = v144;
          }
          *(_BYTE *)(v107 + v105 + 16) = 0;
          v108 = *(_BYTE *)(v110 + 8);
          *(_QWORD *)v107 = v105;
          *(_BYTE *)(v107 + 8) = v108;
          v109 = *(_DWORD *)&v104[v102];
          *(_QWORD *)v111 = v107;
          v100 = v140;
          *(_DWORD *)&v140[v102] = v109;
          v86 = v151;
          v102 += 4;
          if ( v139 == v103 )
          {
LABEL_67:
            a6 = v145;
            v83 = si128.m128i_i32[0];
            LODWORD(v85) = si128.m128i_i32[1];
            v84 = si128.m128i_i32[2];
            goto LABEL_36;
          }
        }
        v101 = (char *)ptr;
        v103 += 8;
      }
    }
    v84 = 0;
    LODWORD(v85) = 0;
    v86 = nullptr;
LABEL_36:
    v87 = v141;
    v88 = *(unsigned __int8 **)v141;
    v89 = v141[2];
    *(_QWORD *)v141 = v86;
    v87[2] = v83;
    v90 = v87[3];
    v91 = v87[4];
    v151 = v88;
    si128.m128i_i32[0] = v89;
    v87[3] = v85;
    si128.m128i_i32[1] = v90;
    v87[4] = v84;
    si128.m128i_i32[2] = v91;
    if ( v90 && v89 )
    {
      v92 = 0;
      v93 = 8LL * (unsigned int)(v89 - 1) + 8;
      v94 = v88;
      do
      {
        v95 = *(_QWORD *)&v94[v92];
        if ( v95 && v95 != -8 )
        {
          operator delete();
          v94 = v151;
        }
        v92 += 8;
      }
      while ( v93 != v92 );
      v88 = v94;
    }
    free(v88);
  }
  v9 = a6[1];
  v10 = *a6;
  v139 = (unsigned __int8 *)a6;
  v146 = _mm_loadh_ps((const double *)&v137);
  if ( sub_107E3A0(v10, v9, "-hard-float") != v9 )
  {
    v11 = j__strlen("-msoft-float");
    v12 = j__strlen("-mvsx");
    v13 = j__strlen("+vsx");
    LODWORD(v12) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+vsx",
                     v13,
                     "-mvsx",
                     v12,
                     "-msoft-float",
                     v11);
    v14 = j__strlen("-msoft-float");
    v15 = j__strlen("-maltivec");
    v16 = j__strlen("+altivec");
    LODWORD(v12) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+altivec",
                     v16,
                     "-maltivec",
                     v15,
                     "-msoft-float",
                     v14)
                 | v12;
    v17 = j__strlen("-msoft-float");
    v18 = j__strlen("-mpower8-vector");
    v19 = j__strlen("+power8-vector");
    LODWORD(v12) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+power8-vector",
                     v19,
                     "-mpower8-vector",
                     v18,
                     "-msoft-float",
                     v17)
                 | v12;
    v20 = j__strlen("-msoft-float");
    v21 = j__strlen("-mdirect-move");
    v22 = j__strlen("+direct-move");
    LODWORD(v12) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+direct-move",
                     v22,
                     "-mdirect-move",
                     v21,
                     "-msoft-float",
                     v20)
                 | v12;
    v23 = j__strlen("-msoft-float");
    v24 = j__strlen("-mfloat128");
    v25 = j__strlen("+float128");
    LODWORD(v12) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+float128",
                     v25,
                     "-mfloat128",
                     v24,
                     "-msoft-float",
                     v23)
                 | v12;
    v26 = j__strlen("-msoft-float");
    v27 = j__strlen("-mpower9-vector");
    v28 = j__strlen("+power9-vector");
    LODWORD(v12) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+power9-vector",
                     v28,
                     "-mpower9-vector",
                     v27,
                     "-msoft-float",
                     v26)
                 | v12;
    v29 = j__strlen("-msoft-float");
    v30 = j__strlen("-mpaired-vector-memops");
    v31 = j__strlen("+paired-vector-memops");
    LODWORD(v12) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+paired-vector-memops",
                     v31,
                     "-mpaired-vector-memops",
                     v30,
                     "-msoft-float",
                     v29)
                 | v12;
    v32 = j__strlen("-msoft-float");
    v33 = j__strlen("-mmma");
    v34 = j__strlen("+mma");
    LODWORD(v12) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+mma",
                     v34,
                     "-mmma",
                     v33,
                     "-msoft-float",
                     v32)
                 | v12;
    v35 = j__strlen("-msoft-float");
    v36 = j__strlen("-mcrypto");
    v37 = j__strlen("+crypto");
    LOBYTE(v12) = sub_10767E0(
                    (__int64 *)v146.m128_u64[0],
                    &v146.m128_i64[1],
                    "+crypto",
                    v37,
                    "-mcrypto",
                    v36,
                    "-msoft-float",
                    v35)
                | v12;
    v38 = j__strlen("-msoft-float");
    v39 = j__strlen("-mpower10-vector");
    v40 = j__strlen("+power10-vector");
    v41 = sub_10767E0(
            (__int64 *)v146.m128_u64[0],
            &v146.m128_i64[1],
            "+power10-vector",
            v40,
            "-mpower10-vector",
            v39,
            "-msoft-float",
            v38);
    if ( (_BYTE)v12 || v41 )
      goto LABEL_31;
  }
  v42 = a6[1];
  if ( v42 == sub_107E4A0(*a6, v42, "+vsx") )
  {
    v49 = a6[1];
    v44 = *a6;
    goto LABEL_14;
  }
  v43 = a6[1];
  v44 = *a6;
  v45 = v43 - *a6;
  v46 = v45 >> 7;
  v47 = v45 >> 5;
  if ( v46 <= 0 )
  {
    v49 = *a6;
LABEL_96:
    if ( v47 != 2 )
    {
      if ( v47 != 3 )
      {
        if ( v47 != 1 )
          goto LABEL_99;
        goto LABEL_126;
      }
      if ( !sub_990D60(v49, "-altivec") )
        goto LABEL_13;
      v49 += 32;
    }
    if ( !sub_990D60(v49, "-altivec") )
      goto LABEL_13;
    v49 += 32;
LABEL_126:
    if ( !sub_990D60(v49, "-altivec") )
      goto LABEL_13;
LABEL_99:
    v49 = v43;
    goto LABEL_14;
  }
  v48 = v44 + (v46 << 7);
  v49 = *a6;
  v139 = (unsigned __int8 *)v48;
  while ( sub_990D60(v49, "-altivec") )
  {
    v50 = v49;
    v49 += 32;
    if ( !sub_990D60(v49, "-altivec") )
      break;
    v49 = v50 + 64;
    if ( !sub_990D60(v50 + 64, "-altivec") )
      break;
    v49 = v50 + 96;
    if ( !sub_990D60(v50 + 96, "-altivec") )
      break;
    v49 = v50 + 128;
    if ( v139 == (unsigned __int8 *)(v50 + 128) )
    {
      v47 = (v43 - v49) >> 5;
      goto LABEL_96;
    }
  }
LABEL_13:
  if ( v43 != v49 )
  {
    sub_FA3370((__int64)&v151, v137, 0, 52);
    sub_AC60B0(&v151, (__int64)"-mvsx", 1u);
    v116 = "-mno-altivec";
    goto LABEL_77;
  }
LABEL_14:
  if ( sub_107E4A0(v44, v49, "-vsx") != v49 )
  {
    v51 = j__strlen("-mno-vsx");
    v52 = j__strlen("-mpower8-vector");
    v53 = j__strlen("+power8-vector");
    LODWORD(v52) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+power8-vector",
                     v53,
                     "-mpower8-vector",
                     v52,
                     "-mno-vsx",
                     v51);
    v54 = j__strlen("-mno-vsx");
    v55 = j__strlen("-mdirect-move");
    v56 = j__strlen("+direct-move");
    LODWORD(v52) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+direct-move",
                     v56,
                     "-mdirect-move",
                     v55,
                     "-mno-vsx",
                     v54)
                 | v52;
    v57 = j__strlen("-mno-vsx");
    v58 = j__strlen("-mfloat128");
    v59 = j__strlen("+float128");
    LODWORD(v52) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+float128",
                     v59,
                     "-mfloat128",
                     v58,
                     "-mno-vsx",
                     v57)
                 | v52;
    v60 = j__strlen("-mno-vsx");
    v61 = j__strlen("-mpower9-vector");
    v62 = j__strlen("+power9-vector");
    LODWORD(v52) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+power9-vector",
                     v62,
                     "-mpower9-vector",
                     v61,
                     "-mno-vsx",
                     v60)
                 | v52;
    v63 = j__strlen("-mno-vsx");
    v64 = j__strlen("-mpaired-vector-memops");
    v65 = j__strlen("+paired-vector-memops");
    LODWORD(v52) = sub_10767E0(
                     (__int64 *)v146.m128_u64[0],
                     &v146.m128_i64[1],
                     "+paired-vector-memops",
                     v65,
                     "-mpaired-vector-memops",
                     v64,
                     "-mno-vsx",
                     v63)
                 | v52;
    v66 = j__strlen("-mno-vsx");
    v67 = j__strlen("-mmma");
    v68 = j__strlen("+mma");
    LOBYTE(v52) = sub_10767E0(
                    (__int64 *)v146.m128_u64[0],
                    &v146.m128_i64[1],
                    "+mma",
                    v68,
                    "-mmma",
                    v67,
                    "-mno-vsx",
                    v66)
                | v52;
    v69 = j__strlen("-mno-vsx");
    v70 = j__strlen("-mpower10-vector");
    v71 = j__strlen("+power10-vector");
    v72 = sub_10767E0(
            (__int64 *)v146.m128_u64[0],
            &v146.m128_i64[1],
            "+power10-vector",
            v71,
            "-mpower10-vector",
            v70,
            "-mno-vsx",
            v69);
    if ( (_BYTE)v52 || v72 )
    {
LABEL_31:
      v76 = 0;
      goto LABEL_32;
    }
  }
  v73 = *(_DWORD *)(v138 + 512);
  v139 = (unsigned __int8 *)a6[1];
  v140 = (unsigned __int8 *)*a6;
  if ( (v73 & 0x802) != 2 )
    goto LABEL_18;
  v117 = (v139 - v140) >> 7;
  v118 = (v139 - v140) >> 5;
  if ( v117 <= 0 )
  {
    v119 = v140;
LABEL_145:
    if ( v118 != 2 )
    {
      if ( v118 != 3 )
      {
        if ( v118 != 1 )
          goto LABEL_18;
        goto LABEL_148;
      }
      if ( !sub_990D60((__int64)v119, "+float128") )
        goto LABEL_86;
      v119 += 32;
    }
    if ( !sub_990D60((__int64)v119, "+float128") )
      goto LABEL_86;
    v119 += 32;
LABEL_148:
    if ( sub_990D60((__int64)v119, "+float128") )
      goto LABEL_18;
    goto LABEL_86;
  }
  v119 = v140;
  v120 = &v140[128 * v117];
  while ( sub_990D60((__int64)v119, "+float128") )
  {
    v121 = v119;
    v119 += 32;
    if ( !sub_990D60((__int64)v119, "+float128") )
      break;
    v119 = v121 + 64;
    if ( !sub_990D60((__int64)(v121 + 64), "+float128") )
      break;
    v119 = v121 + 96;
    if ( !sub_990D60((__int64)(v121 + 96), "+float128") )
      break;
    v119 = v121 + 128;
    if ( v120 == v121 + 128 )
    {
      v118 = (v139 - v119) >> 5;
      goto LABEL_145;
    }
  }
LABEL_86:
  if ( v139 != v119 )
  {
    sub_FA3370((__int64)&v151, v137, 0, 52);
    v75 = "-mfloat128";
    goto LABEL_21;
  }
LABEL_18:
  if ( (v73 & 0x4000) != 0 )
  {
    v96 = (v139 - v140) >> 7;
    v144 = (v139 - v140) >> 5;
    goto LABEL_46;
  }
  v74 = (__int64)v139;
  if ( sub_107E4A0((__int64)v140, (__int64)v139, "+mma") != v74 )
  {
    sub_FA3370((__int64)&v151, v137, 0, 52);
    v75 = "-mmma";
    goto LABEL_21;
  }
  v112 = (unsigned __int8 *)*a6;
  v139 = (unsigned __int8 *)a6[1];
  v96 = (v139 - v112) >> 7;
  v140 = v112;
  v144 = (v139 - v112) >> 5;
  if ( v96 <= 0 )
  {
    v124 = (v139 - v112) >> 5;
    v113 = v140;
LABEL_101:
    if ( v124 != 2 )
    {
      if ( v124 != 3 )
      {
        if ( v124 != 1 )
          goto LABEL_104;
        goto LABEL_155;
      }
      if ( !sub_990D60((__int64)v113, "+pcrel") )
        goto LABEL_75;
      v113 += 32;
    }
    if ( !sub_990D60((__int64)v113, "+pcrel") )
      goto LABEL_75;
    v113 += 32;
LABEL_155:
    if ( !sub_990D60((__int64)v113, "+pcrel") )
      goto LABEL_75;
LABEL_104:
    v113 = v139;
LABEL_105:
    if ( v96 <= 0 )
    {
      v129 = v140;
    }
    else
    {
      v145 = (__int64 *)v113;
      v125 = v140;
      v126 = a6;
      v127 = &v140[128 * v96];
      do
      {
        if ( !sub_990D60((__int64)v125, "+prefixed")
          || (v128 = v125, v125 += 32, !sub_990D60((__int64)v125, "+prefixed"))
          || (v125 = v128 + 64, !sub_990D60((__int64)(v128 + 64), "+prefixed"))
          || (v125 = v128 + 96, !sub_990D60((__int64)(v128 + 96), "+prefixed")) )
        {
          a6 = v126;
          v129 = v125;
          v113 = (unsigned __int8 *)v145;
          goto LABEL_113;
        }
        v125 = v128 + 128;
      }
      while ( v127 != v128 + 128 );
      a6 = v126;
      v129 = v128 + 128;
      v113 = (unsigned __int8 *)v145;
    }
    v130 = (v113 - v129) >> 5;
    if ( v130 != 2 )
    {
      if ( v130 != 3 )
      {
        if ( v130 != 1 )
          goto LABEL_133;
LABEL_132:
        if ( sub_990D60((__int64)v129, "+prefixed") )
          goto LABEL_133;
        goto LABEL_113;
      }
      if ( !sub_990D60((__int64)v129, "+prefixed") )
      {
LABEL_113:
        if ( v129 != v113 )
        {
          sub_FA3370((__int64)&v151, v137, 0, 54);
          sub_AC60B0(&v151, (__int64)"-mprefixed", 1u);
          v116 = "-mcpu=pwr10";
          goto LABEL_77;
        }
LABEL_133:
        if ( v96 <= 0 )
        {
          v135 = v140;
        }
        else
        {
          v145 = (__int64 *)v113;
          v131 = v140;
          v132 = a6;
          v133 = &v140[128 * v96];
          do
          {
            if ( !sub_990D60((__int64)v131, "+paired-vector-memops")
              || (v134 = v131, v131 += 32, !sub_990D60((__int64)v131, "+paired-vector-memops"))
              || (v131 = v134 + 64, !sub_990D60((__int64)(v134 + 64), "+paired-vector-memops"))
              || (v131 = v134 + 96, !sub_990D60((__int64)(v134 + 96), "+paired-vector-memops")) )
            {
              a6 = v132;
              v135 = v131;
              v113 = (unsigned __int8 *)v145;
              goto LABEL_141;
            }
            v131 = v134 + 128;
          }
          while ( v133 != v134 + 128 );
          a6 = v132;
          v135 = v134 + 128;
          v113 = (unsigned __int8 *)v145;
        }
        v136 = (v113 - v135) >> 5;
        if ( v136 != 2 )
        {
          if ( v136 != 3 )
          {
            if ( v136 != 1 )
              goto LABEL_46;
LABEL_167:
            if ( sub_990D60((__int64)v135, "+paired-vector-memops") )
              goto LABEL_46;
            goto LABEL_141;
          }
          if ( !sub_990D60((__int64)v135, "+paired-vector-memops") )
          {
LABEL_141:
            if ( v135 != v113 )
            {
              sub_FA3370((__int64)&v151, v137, 0, 54);
              sub_AC60B0(&v151, (__int64)"-mpaired-vector-memops", 1u);
              v116 = "-mcpu=pwr10";
              goto LABEL_77;
            }
LABEL_46:
            v97 = v140;
            if ( v96 > 0 )
            {
              while ( sub_990D60((__int64)v97, "+rop-protect") )
              {
                v98 = v97;
                v97 += 32;
                if ( !sub_990D60((__int64)v97, "+rop-protect") )
                  break;
                v97 = v98 + 64;
                if ( !sub_990D60((__int64)(v98 + 64), "+rop-protect") )
                  break;
                v97 = v98 + 96;
                if ( !sub_990D60((__int64)(v98 + 96), "+rop-protect") )
                  break;
                v97 = v98 + 128;
                if ( !--v96 )
                {
                  v122 = (v139 - v97) >> 5;
                  v144 = v122;
                  goto LABEL_89;
                }
              }
LABEL_53:
              if ( v139 != v97 )
              {
                if ( *(_BYTE *)(v138 + 8) == 32 )
                {
                  sub_FA3370((__int64)&v151, v137, 0, 51);
                  v116 = "-mrop-protect";
                  goto LABEL_77;
                }
                if ( (*(_BYTE *)(v138 + 513) & 0x10) != 0 )
                {
LABEL_56:
                  v76 = sub_100C260(v138, (__int64)v141, v137, (__int64)v142, v143, (char ***)a6);
                  goto LABEL_32;
                }
                sub_FA3370((__int64)&v151, v137, 0, 52);
                v75 = "-mrop-protect";
LABEL_21:
                v76 = 0;
                sub_AC60B0(&v151, (__int64)v75, 1u);
                sub_AC84E0(&v151, v142, v143);
                sub_AC6300((__int64)&v151);
                if ( !v150 )
                  return v76;
                goto LABEL_22;
              }
LABEL_92:
              if ( (*(_BYTE *)(v138 + 513) & 0x10) != 0 )
                goto LABEL_56;
              v123 = (__int64)v139;
              if ( sub_107E3A0((__int64)v140, (__int64)v139, "+privileged") == v123 )
                goto LABEL_56;
              sub_FA3370((__int64)&v151, v137, 0, 52);
              v75 = "-mprivileged";
              goto LABEL_21;
            }
            v122 = v144;
LABEL_89:
            if ( v122 != 2 )
            {
              if ( v122 != 3 )
              {
                if ( v122 != 1 )
                  goto LABEL_92;
                goto LABEL_120;
              }
              if ( !sub_990D60((__int64)v97, "+rop-protect") )
                goto LABEL_53;
              v97 += 32;
            }
            if ( !sub_990D60((__int64)v97, "+rop-protect") )
              goto LABEL_53;
            v97 += 32;
LABEL_120:
            if ( sub_990D60((__int64)v97, "+rop-protect") )
              goto LABEL_92;
            goto LABEL_53;
          }
          v135 += 32;
        }
        if ( sub_990D60((__int64)v135, "+paired-vector-memops") )
        {
          v135 += 32;
          goto LABEL_167;
        }
        goto LABEL_141;
      }
      v129 += 32;
    }
    if ( sub_990D60((__int64)v129, "+prefixed") )
    {
      v129 += 32;
      goto LABEL_132;
    }
    goto LABEL_113;
  }
  v113 = v112;
  v114 = &v112[128 * v96];
  while ( sub_990D60((__int64)v113, "+pcrel") )
  {
    v115 = v113;
    v113 += 32;
    if ( !sub_990D60((__int64)v113, "+pcrel") )
      break;
    v113 = v115 + 64;
    if ( !sub_990D60((__int64)(v115 + 64), "+pcrel") )
      break;
    v113 = v115 + 96;
    if ( !sub_990D60((__int64)(v115 + 96), "+pcrel") )
      break;
    v113 = v115 + 128;
    if ( v114 == v115 + 128 )
    {
      v124 = (v139 - v113) >> 5;
      goto LABEL_101;
    }
  }
LABEL_75:
  if ( v139 == v113 )
    goto LABEL_105;
  sub_FA3370((__int64)&v151, v137, 0, 54);
  sub_AC60B0(&v151, (__int64)"-mpcrel", 1u);
  v116 = "-mcpu=pwr10 -mprefixed";
LABEL_77:
  v76 = 0;
  sub_AC60B0(&v151, (__int64)v116, 1u);
  sub_AC6300((__int64)&v151);
LABEL_32:
  if ( !v150 )
    return v76;
LABEL_22:
  v77 = ptr;
  if ( (_DWORD)v149 && v148 )
  {
    v78 = 0;
    v79 = 8LL * (v148 - 1) + 8;
    v80 = (char *)ptr;
    do
    {
      v81 = *(_QWORD *)&v80[v78];
      if ( v81 != -8 && v81 )
      {
        operator delete();
        v80 = (char *)ptr;
      }
      v78 += 8;
    }
    while ( v79 != v78 );
    v77 = v80;
  }
  free(v77);
  return v76;
}

