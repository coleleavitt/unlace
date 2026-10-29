__int64 __fastcall sub_859CE0(__int64 a1, unsigned int *a2, __m128 a3)
{
  char **v3; // r12
  char **exception; // r12
  char **v5; // r12
  char **v6; // r12
  __int64 v9; // rax
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int32 v12; // r12d
  __int64 v13; // rax
  _DWORD *v14; // rdi
  unsigned int v15; // edx
  _DWORD *v16; // rcx
  __int64 v17; // rdx
  _DWORD *v18; // rsi
  _DWORD *v19; // rax
  int v20; // edx
  _DWORD *v21; // rsi
  __int64 v22; // rdi
  unsigned int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  _DWORD *v27; // rax
  int v28; // edx
  __int64 v29; // r14
  __int64 v30; // r12
  _QWORD *v31; // rbp
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  _QWORD *v36; // rcx
  void *v37; // rbp
  int v39; // edx
  unsigned int v40; // r12d
  unsigned int v41; // ecx
  unsigned int *v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // ebp
  __m128 *v47; // rax
  __m128 *v48; // r15
  __m128 *v49; // rdx
  __m128 *v50; // rax
  __int64 v51; // rdx
  __m128i *v52; // rdi
  const __m128i *v53; // r14
  __int64 v54; // rbp
  __int64 v55; // rdx
  __m128 *v56; // rsi
  __m128 *v57; // rdx
  __int64 v58; // r15
  unsigned int *v59; // rax
  unsigned int *v60; // r14
  unsigned int v61; // ebp
  bool v62; // zf
  int v63; // r14d
  __int64 v64; // r15
  __int64 v65; // rax
  unsigned int v66; // eax
  __int64 v67; // rdi
  __int64 (*v68)(void); // rax
  __int64 v69; // rdi
  __int64 v70; // r13
  _DWORD *v71; // rax
  __int64 v72; // rax
  _QWORD *v73; // r13
  _QWORD *v74; // rdx
  unsigned int v75; // eax
  __int64 v76; // rcx
  int v77; // eax
  _QWORD *v78; // rcx
  _QWORD *v79; // rdx
  __int64 v80; // rax
  unsigned int *v81; // rax
  __int64 v82; // r13
  __m128i *v83; // rbp
  unsigned int v84; // r15d
  __int64 v85; // rcx
  __m128i *v86; // r13
  __int64 v87; // r15
  __m128i *v88; // rsi
  __m128i *v89; // rax
  __m128i *v90; // rcx
  int v91; // edx
  _QWORD *v92; // rdx
  unsigned int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  _QWORD *v96; // rcx
  __int64 v97; // r15
  unsigned int *v98; // rax
  unsigned int *v99; // r14
  __int32 v100; // eax
  unsigned int v101; // r14d
  unsigned int v102; // ecx
  unsigned int *v103; // rax
  __int64 v104; // rcx
  unsigned int v105; // r13d
  unsigned int v106; // ecx
  unsigned int *v107; // rax
  __int64 v108; // rax
  unsigned int v109; // ebp
  unsigned int v110; // ecx
  unsigned int *v111; // rax
  __int64 v112; // rcx
  _QWORD *v113; // rdx
  int v114; // edx
  __int64 v115; // rdx
  char v116; // si
  char v117; // al
  int v118; // eax
  __int64 v119; // rax
  __m128i *v120; // rax
  int v121; // r8d
  __m128i *v122; // rdx
  const __m128i *v123; // r14
  __m128i *v124; // rax
  __int64 v125; // rdx
  __m128i *v126; // rsi
  __m128i *v127; // rdx
  __m128i v128; // xmm0
  _QWORD *v129; // rdx
  _QWORD *v130; // rax
  unsigned int *v131; // rbp
  unsigned int *v132; // rbp
  unsigned int *v133; // rax
  unsigned int *v134; // r15
  _QWORD *v135; // rdx
  unsigned int *v136; // rax
  unsigned int *v137; // r15
  int *v138; // [rsp+0h] [rbp-B8h]
  __m128i *v139; // [rsp+8h] [rbp-B0h]
  void *v140; // [rsp+8h] [rbp-B0h]
  __m128 *v141; // [rsp+10h] [rbp-A8h]
  __int64 v142; // [rsp+10h] [rbp-A8h]
  __int64 v143; // [rsp+10h] [rbp-A8h]
  __int64 v144; // [rsp+10h] [rbp-A8h]
  unsigned int v145; // [rsp+18h] [rbp-A0h]
  void *v146; // [rsp+18h] [rbp-A0h]
  void *v147; // [rsp+18h] [rbp-A0h]
  size_t v148; // [rsp+18h] [rbp-A0h]
  int v149; // [rsp+18h] [rbp-A0h]
  int v150[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v151; // [rsp+48h] [rbp-70h]
  __int64 v152; // [rsp+50h] [rbp-68h] BYREF
  __int64 v153; // [rsp+58h] [rbp-60h]
  __int64 v154; // [rsp+60h] [rbp-58h] BYREF
  __int64 v155; // [rsp+68h] [rbp-50h]
  int v156; // [rsp+70h] [rbp-48h] BYREF
  char v157; // [rsp+74h] [rbp-44h]
  __int64 v158; // [rsp+78h] [rbp-40h]

  v9 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)v150 = 0;
  v10 = *(__int64 **)(v9 + 152);
  v152 = 1;
  v151 = 0;
  v11 = *v10;
  v153 = 0;
  v12 = (*(__int64 (__fastcall **)(__int64 *))(v11 + 40))(v10);
  v13 = *(unsigned int *)(a1 + 304);
  v14 = *(_DWORD **)(a1 + 296);
  v15 = v13 - 1;
  v13 *= 24;
  v16 = (_DWORD *)((char *)v14 + v13);
  v17 = 24LL * (v12 & v15);
  v18 = &v14[(unsigned __int64)v17 / 4];
  if ( v17 == v13 )
  {
LABEL_31:
    if ( v14 != v18 )
    {
      v19 = *(_DWORD **)(a1 + 296);
      while ( 1 )
      {
        v39 = v19[1];
        if ( v39 == 2 )
        {
          if ( v12 == *v19 && v12 == v19[2] )
            goto LABEL_8;
        }
        else if ( !v39 )
        {
          goto LABEL_12;
        }
        v19 += 6;
        if ( v18 == v19 )
          goto LABEL_12;
      }
    }
    goto LABEL_12;
  }
  v19 = &v14[(unsigned __int64)v17 / 4];
  while ( 1 )
  {
    v20 = v19[1];
    if ( v20 != 2 )
    {
      if ( !v20 )
        goto LABEL_12;
      goto LABEL_4;
    }
    if ( v12 == *v19 && v12 == v19[2] )
      break;
LABEL_4:
    v19 += 6;
    if ( v16 == v19 )
      goto LABEL_31;
  }
LABEL_8:
  v21 = v19 + 6;
  if ( v16 == v19 + 6 )
    v21 = *(_DWORD **)(a1 + 296);
  v22 = *(unsigned int *)(a1 + 308);
  v23 = v22 - 1;
  if ( !v21[1] )
  {
    v19[1] = 0;
    *(_DWORD *)(a1 + 308) = v23;
    goto LABEL_12;
  }
  v19[1] = 1;
  v44 = *(_DWORD *)(a1 + 312);
  *(_DWORD *)(a1 + 308) = v23;
  v45 = v44 + 1;
  if ( v23 < 0x40 )
    v23 = 64;
  *(_DWORD *)(a1 + 312) = v45;
  if ( v23 < v45 && !(unsigned __int8)sub_186AF10(v22) )
  {
    v46 = *(_DWORD *)(a1 + 304);
    v47 = (__m128 *)sub_186B270(24LL * v46);
    v48 = v47;
    if ( v46 )
    {
      if ( v46 == 1 )
        goto LABEL_52;
      v49 = v47;
      v50 = &v47[3 * (v46 >> 1)];
      do
      {
        v49->m128_u64[0] = 0;
        v49 += 3;
        v49[-2].m128_u64[1] = 0;
      }
      while ( v49 != v50 );
      if ( (v46 & 1) != 0 )
      {
        v47 = (__m128 *)((char *)v48 + 24 * (v46 & 0xFFFFFFFE));
LABEL_52:
        v47->m128_u64[0] = 0;
      }
    }
    v51 = *(unsigned int *)(a1 + 304);
    v52 = *(__m128i **)(a1 + 296);
    v53 = v52;
    v54 = 24 * v51;
    v145 = v51 - 1;
    v139 = (__m128i *)((char *)v52 + 24 * v51);
    v141 = (__m128 *)((char *)v48 + 24 * v51);
    if ( v52 != v139 )
    {
      do
      {
        if ( v53->m128i_i32[1] == 2 )
        {
          v55 = 24LL * (v53->m128i_i32[0] & v145);
          v56 = (__m128 *)((char *)v48 + v55);
          if ( v54 == v55 )
          {
LABEL_207:
            if ( v48 == v56 )
            {
LABEL_212:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v57 = v48;
            while ( v57->m128_i32[1] )
            {
              v57 = (__m128 *)((char *)v57 + 24);
              if ( v56 == v57 )
                goto LABEL_212;
            }
          }
          else
          {
            v57 = (__m128 *)((char *)v48 + v55);
            while ( v57->m128_i32[1] )
            {
              v57 = (__m128 *)((char *)v57 + 24);
              if ( v141 == v57 )
                goto LABEL_207;
            }
          }
          a3 = (__m128)_mm_loadu_si128(v53);
          *v57 = a3;
          v57[1].m128_u64[0] = v53[1].m128i_u64[0];
        }
        v53 = (const __m128i *)((char *)v53 + 24);
      }
      while ( v139 != v53 );
      v52 = *(__m128i **)(a1 + 296);
    }
    if ( v52 )
      sub_186B220(v52);
    *(_QWORD *)(a1 + 296) = v48;
    *(_DWORD *)(a1 + 312) = 0;
  }
LABEL_12:
  LODWORD(v139) = 2 * v12;
  sub_79B540(*(_QWORD *)(a1 + 80), 2 * v12, a2, *(double *)a3.m128_u64);
  if ( *((_WORD *)a2 + 2) || (v27 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL)) == nullptr )
  {
    v138 = v150;
    goto LABEL_26;
  }
  v138 = v150;
  if ( *v27 != 5 )
  {
LABEL_26:
    v29 = *(_QWORD *)(a1 + 80);
    v30 = *(_QWORD *)(a1 + 256);
    v31 = (_QWORD *)sub_180C100(v29 + 2144, 24);
    v32 = *(_QWORD **)(v29 + 2128);
    *v31 = off_1C55450;
    v31[1] = a1 + 256;
    v31[2] = v30;
    if ( v32 )
    {
      v33 = *((_DWORD *)v32 - 1);
      if ( v33 == *((_DWORD *)v32 - 2) )
      {
        v40 = (3 * v33 + 1) >> 1;
        v41 = 8 * v40 + 8;
        if ( 8 * v33 + 8 >= v41 || v33 >= v40 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v154, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v154);
          sub_233E40((__int64)&v154);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v42 = (unsigned int *)sub_186B300(v32 - 1, v41);
        v43 = v42[1];
        v32 = v42 + 2;
        *(_QWORD *)(v29 + 2128) = v42 + 2;
        *v42 = v40;
        LODWORD(v42) = v43;
        v36 = &v32[v43];
        v35 = (_DWORD)v42 + 1;
      }
      else
      {
        v34 = v33;
        v35 = v33 + 1;
        v36 = &v32[v34];
      }
    }
    else
    {
      v135 = (_QWORD *)sub_186B270(0x18u);
      *v135 = 2;
      v35 = 1;
      v32 = v135 + 1;
      *(_QWORD *)(v29 + 2128) = v32;
      v36 = v32;
    }
    *v36 = v31;
    *((_DWORD *)v32 - 1) = v35;
    *(_QWORD *)(a1 + 256) = a2;
    goto LABEL_30;
  }
  if ( v27[1] != 2 || a2[6] != 2 )
    goto LABEL_16;
  v131 = *((unsigned int **)a2 + 4);
  if ( (unsigned __int8)sub_16679C0((int)a1 + 832, *((_QWORD *)a2 + 5), (int)v150, v24, v25, v26, v150, v139, v141) )
  {
LABEL_170:
    v61 = sub_859A80(a1, v131);
    v63 = 1;
  }
  else
  {
    if ( *((_WORD *)a2 + 2) )
      goto LABEL_26;
    v27 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( !v27 || *v27 != 5 )
      goto LABEL_26;
LABEL_16:
    if ( v27[1] != 3 || a2[6] != 2 )
      goto LABEL_17;
    v132 = *((unsigned int **)a2 + 4);
    if ( (unsigned __int8)sub_16679C0((int)a1 + 832, *((_QWORD *)a2 + 5), (int)v138, v24, v25, v26, v138, v139, v141) )
      goto LABEL_177;
    if ( *((_WORD *)a2 + 2) )
      goto LABEL_26;
    v27 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( !v27 || *v27 != 5 )
      goto LABEL_26;
LABEL_17:
    if ( v27[1] != 2 || a2[6] != 2 )
      goto LABEL_18;
    v132 = *((unsigned int **)a2 + 5);
    if ( (unsigned __int8)sub_16679C0((int)a1 + 832, *((_QWORD *)a2 + 4), (int)v138, v24, v25, v26, v138, v139, v141) )
    {
LABEL_177:
      v61 = sub_859A80(a1, v132);
      v63 = 0;
    }
    else
    {
      if ( *((_WORD *)a2 + 2) )
        goto LABEL_26;
      v27 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
      if ( !v27 || *v27 != 5 )
        goto LABEL_26;
LABEL_18:
      if ( v27[1] == 3 && a2[6] == 2 )
      {
        v131 = *((unsigned int **)a2 + 5);
        if ( !(unsigned __int8)sub_16679C0(
                                 (int)a1 + 832,
                                 *((_QWORD *)a2 + 4),
                                 (int)v138,
                                 v24,
                                 v25,
                                 v26,
                                 v138,
                                 v139,
                                 v141) )
        {
          if ( !*((_WORD *)a2 + 2) )
          {
            v27 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
            if ( v27 )
            {
              if ( *v27 == 5 )
                goto LABEL_19;
            }
          }
          goto LABEL_26;
        }
        goto LABEL_170;
      }
LABEL_19:
      v28 = v27[1];
      switch ( v28 )
      {
        case 2:
          if ( a2[6] != 2 )
            goto LABEL_23;
          v143 = *(_QWORD *)(a1 + 72);
          v133 = (unsigned int *)sub_8526A0(a1, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5));
          v134 = v133;
          if ( v133 )
            ++v133[2];
          v61 = sub_859A80(a1, v133);
          LOBYTE(v150[1]) &= ~1u;
          v150[0] = 0;
          sub_182CBA0(qword_1C7F2C0, &v152);
          BYTE4(v152) &= ~1u;
          LODWORD(v152) = 1;
          if ( v134 )
          {
            v62 = v134[2]-- == 1;
            v63 = 1;
            if ( v62 )
            {
              sub_15D7BC0(v143, v134);
              goto LABEL_103;
            }
          }
          else
          {
LABEL_103:
            v63 = 1;
          }
          break;
        case 3:
          if ( a2[6] != 2 )
            goto LABEL_23;
          v144 = *(_QWORD *)(a1 + 72);
          v136 = (unsigned int *)sub_8526A0(a1, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5));
          v137 = v136;
          if ( v136 )
            ++v136[2];
          v61 = sub_859A80(a1, v136);
          LOBYTE(v150[1]) &= ~1u;
          v150[0] = 0;
          sub_182CBA0(qword_1C7F2C0, &v152);
          BYTE4(v152) &= ~1u;
          LODWORD(v152) = 1;
          if ( !v137 )
            goto LABEL_68;
          v62 = v137[2]-- == 1;
          v63 = 0;
          if ( v62 )
          {
            sub_15D7BC0(v144, v137);
            goto LABEL_68;
          }
          break;
        case 4:
          if ( a2[6] != 2 )
            goto LABEL_23;
          v58 = *(_QWORD *)(a1 + 72);
          v59 = (unsigned int *)sub_8526A0(a1, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5));
          v60 = v59;
          if ( v59 )
            ++v59[2];
          v61 = sub_859A80(a1, v59);
          LOBYTE(v150[1]) &= ~1u;
          v150[0] = 0;
          sub_182CBA0(qword_1C7F2C0, &v152);
          BYTE4(v152) &= ~1u;
          LODWORD(v152) = 1;
          if ( v60 )
          {
            v62 = v60[2]-- == 1;
            if ( v62 )
              sub_15D7BC0(v58, v60);
          }
LABEL_68:
          v63 = 0;
          break;
        default:
          if ( v28 == 5 && a2[6] == 2 )
          {
            v97 = *(_QWORD *)(a1 + 72);
            v98 = (unsigned int *)sub_8526A0(a1, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5));
            v99 = v98;
            if ( v98 )
              ++v98[2];
            v61 = sub_859A80(a1, v98);
            LOBYTE(v150[1]) &= ~1u;
            v150[0] = 0;
            sub_182CBA0(qword_1C7F2C0, &v152);
            BYTE4(v152) &= ~1u;
            LODWORD(v152) = 1;
            if ( v99 )
            {
              v62 = v99[2]-- == 1;
              if ( v62 )
                sub_15D7BC0(v97, v99);
            }
            goto LABEL_103;
          }
LABEL_23:
          if ( v27[1] == 20 )
          {
            sub_884DB0(a1, a2);
            goto LABEL_30;
          }
          goto LABEL_26;
      }
    }
  }
  v64 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 1720LL);
  if ( v64 )
  {
    v65 = *a2;
    if ( (unsigned int)v65 >= *(_DWORD *)(v64 - 4) )
      v64 = 0;
    else
      v64 = *(_QWORD *)(v64 + 8 * v65);
  }
  v66 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 528LL))(a1, v64);
  sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, v64, v66, *(unsigned int *)(a1 + 12));
  v67 = *(_QWORD *)(a1 + 80);
  v68 = *(__int64 (**)(void))(*(_QWORD *)v67 + 440LL);
  if ( (char *)v68 == (char *)sub_79F010 )
    v69 = v67 + 1592;
  else
    v69 = v68();
  sub_13D8B90(v69, v64, 0);
  v70 = 8LL * v61;
  v71 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + v70)) + 24);
  if ( v71 && *v71 == 5 && v71[1] == 1 && ((v152 & 0x100000000LL) != 0 || (_DWORD)v152 != 1) )
  {
    BYTE4(v154) &= 0xFCu;
    v157 &= 0xFCu;
    LODWORD(v154) = 0;
    v155 = 0;
    v156 = 1;
    v158 = 0;
    v146 = qword_1C7F2C0;
    if ( v63 == 1 )
      sub_18495B0(qword_1C7F2C0, v138, &v154);
    else
      sub_1849700(qword_1C7F2C0, v138, &v154);
    sub_182CBA0(v146, &v156);
    v114 = v154;
    LODWORD(v154) = v150[0];
    v150[0] = v114;
    v115 = v155;
    v155 = v151;
    v151 = v115;
    v116 = v150[1] & 1;
    v117 = BYTE4(v154) & 0xFC | v150[1] & 2;
    LOBYTE(v150[1]) = BYTE4(v154) & 1 | v150[1] & 0xFC | BYTE4(v154) & 2;
    BYTE4(v154) = v116 | v117;
    v118 = v152;
    LODWORD(v152) = 1;
    v156 = v118;
    v119 = v153;
    v153 = v158;
    v158 = v119;
    LOBYTE(v115) = BYTE4(v152) & 0xFC | v157 & 2;
    v157 = BYTE4(v152) & 1 | BYTE4(v152) & 2 | v157 & 0xFC;
    BYTE4(v152) = v115;
    v147 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v154);
    sub_182CBA0(v147, &v156);
  }
  v72 = sub_88BFD0(a1);
  v73 = (_QWORD *)(*(_QWORD *)(a1 + 320) + v70);
  v140 = (void *)v72;
  v74 = (_QWORD *)*v73;
  if ( *v73 )
  {
    v75 = *((_DWORD *)v74 - 1);
    if ( v75 == *((_DWORD *)v74 - 2) )
    {
      v101 = (3 * v75 + 1) >> 1;
      v102 = 8 * v101 + 8;
      if ( 8 * v75 + 8 >= v102 || v75 >= v101 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v154, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, &v154);
        sub_233E40((__int64)&v154);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v103 = (unsigned int *)sub_186B300(v74 - 1, v102);
      v104 = v103[1];
      v74 = v103 + 2;
      *v73 = v103 + 2;
      *v103 = v101;
      LODWORD(v103) = v104;
      v78 = &v74[v104];
      v77 = (_DWORD)v103 + 1;
    }
    else
    {
      v76 = v75;
      v77 = v75 + 1;
      v78 = &v74[v76];
    }
  }
  else
  {
    v129 = (_QWORD *)sub_186B270(0x18u);
    *v129 = 2;
    v77 = 1;
    v74 = v129 + 1;
    *v73 = v74;
    v78 = v74;
  }
  *v78 = v140;
  *((_DWORD *)v74 - 1) = v77;
  sub_82C220(a1, v61, 1);
  v79 = *(_QWORD **)(a1 + 336);
  if ( v79 )
  {
    v80 = *((unsigned int *)v79 - 1);
    if ( (_DWORD)v80 == *((_DWORD *)v79 - 2) )
    {
      v105 = (unsigned int)(3 * v80 + 1) >> 1;
      v106 = 4 * v105 + 8;
      if ( 4 * (int)v80 + 8 >= v106 || (unsigned int)v80 >= v105 )
      {
        v6 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v154, "Overflow encountered when expanding vector");
        *v6 = (char *)off_1C63128;
        sub_2333C0(v6 + 1, &v154);
        sub_233E40((__int64)&v154);
        __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v107 = (unsigned int *)sub_186B300(v79 - 1, v106);
      v79 = v107 + 2;
      *v107 = v105;
      v108 = v107[1];
      *(_QWORD *)(a1 + 336) = v79;
      v81 = (unsigned int *)v79 + v108;
    }
    else
    {
      v81 = (unsigned int *)v79 + v80;
    }
  }
  else
  {
    v130 = (_QWORD *)sub_186B270(0x10u);
    *v130 = 2;
    v79 = v130 + 1;
    *(_QWORD *)(a1 + 336) = v130 + 1;
    v81 = (unsigned int *)(v130 + 1);
  }
  *v81 = v61;
  ++*((_DWORD *)v79 - 1);
  v82 = *(unsigned int *)(a1 + 304);
  if ( 3 * (int)v82 < (unsigned int)(4 * (*(_DWORD *)(a1 + 308) + *(_DWORD *)(a1 + 312))) )
  {
    v148 = 24LL * (unsigned int)(2 * v82);
    v120 = (__m128i *)sub_186B270(v148);
    v121 = 2 * v82;
    v83 = v120;
    v85 = v148;
    if ( 2 * (_DWORD)v82 )
    {
      v122 = &v120[3 * (v82 & 0x7FFFFFFF)];
      do
      {
        v120->m128i_i64[0] = 0;
        v120 += 3;
        v120[-2].m128i_i64[1] = 0;
      }
      while ( v122 != v120 );
    }
    v123 = *(const __m128i **)(a1 + 296);
    v84 = v121 - 1;
    v86 = (__m128i *)((char *)v83 + v148);
    v124 = (__m128i *)((char *)v123 + 24 * *(unsigned int *)(a1 + 304));
    if ( v123 != v124 )
    {
      do
      {
        while ( v123->m128i_i32[1] != 2 )
        {
          v123 = (const __m128i *)((char *)v123 + 24);
          if ( v124 == v123 )
            goto LABEL_145;
        }
        v125 = 24LL * (v123->m128i_i32[0] & v84);
        v126 = (__m128i *)((char *)v83 + v125);
        if ( v148 == v125 )
        {
LABEL_151:
          if ( v83 == v126 )
          {
LABEL_160:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v127 = v83;
          while ( v127->m128i_i32[1] )
          {
            v127 = (__m128i *)((char *)v127 + 24);
            if ( v126 == v127 )
              goto LABEL_160;
          }
        }
        else
        {
          v127 = (__m128i *)((char *)v83 + v125);
          while ( v127->m128i_i32[1] )
          {
            v127 = (__m128i *)((char *)v127 + 24);
            if ( v86 == v127 )
              goto LABEL_151;
          }
        }
        v128 = _mm_loadu_si128(v123);
        v123 = (const __m128i *)((char *)v123 + 24);
        *v127 = v128;
        v127[1].m128i_i64[0] = v123[-1].m128i_i64[1];
      }
      while ( v124 != v123 );
LABEL_145:
      v124 = *(__m128i **)(a1 + 296);
    }
    if ( v124 )
    {
      v149 = v121;
      v142 = v85;
      sub_186B220(v124);
      v121 = v149;
      v85 = v142;
    }
    *(_QWORD *)(a1 + 296) = v83;
    *(_DWORD *)(a1 + 304) = v121;
    *(_DWORD *)(a1 + 312) = 0;
  }
  else
  {
    v83 = *(__m128i **)(a1 + 296);
    v84 = v82 - 1;
    v85 = 24 * v82;
    v86 = (__m128i *)((char *)v83 + 24 * v82);
  }
  v87 = v12 & v84;
  v88 = (__m128i *)((char *)v83 + 24 * v87);
  if ( v85 == 24 * v87 )
  {
    v90 = nullptr;
LABEL_105:
    if ( v83 == v88 )
    {
LABEL_149:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v100 = v83->m128i_i32[1];
      if ( v100 == 2 )
      {
        if ( v12 == v83->m128i_i32[0] && v12 == v83->m128i_i32[2] )
        {
          v83->m128i_i32[2] = v12;
          v83->m128i_i32[1] = 2;
          v83[1].m128i_i64[0] = (__int64)v140;
          goto LABEL_93;
        }
      }
      else
      {
        if ( !v100 )
        {
          if ( !v90 )
          {
            v90 = v83;
            goto LABEL_125;
          }
LABEL_124:
          --*(_DWORD *)(a1 + 312);
          goto LABEL_125;
        }
        v90 = v83;
      }
      v83 = (__m128i *)((char *)v83 + 24);
      if ( v88 == v83 )
        goto LABEL_149;
    }
  }
  v89 = (__m128i *)((char *)v83 + 24 * v87);
  v90 = nullptr;
  while ( 2 )
  {
    v91 = v89->m128i_i32[1];
    if ( v91 != 2 )
    {
      if ( !v91 )
      {
        if ( v90 )
          goto LABEL_124;
        v90 = v89;
LABEL_125:
        v92 = *(_QWORD **)(a1 + 520);
        v90->m128i_i32[2] = v12;
        v90->m128i_i32[1] = 2;
        v90[1].m128i_i64[0] = (__int64)v140;
        v90->m128i_i32[0] = v12;
        ++*(_DWORD *)(a1 + 308);
        if ( v92 )
          goto LABEL_94;
LABEL_126:
        v113 = (_QWORD *)sub_186B270(0x18u);
        *v113 = 2;
        v95 = 1;
        v92 = v113 + 1;
        *(_QWORD *)(a1 + 520) = v92;
        v96 = v92;
        goto LABEL_96;
      }
      v90 = v89;
LABEL_88:
      v89 = (__m128i *)((char *)v89 + 24);
      if ( v86 == v89 )
        goto LABEL_105;
      continue;
    }
    break;
  }
  if ( v12 != v89->m128i_i32[0] || v12 != v89->m128i_i32[2] )
    goto LABEL_88;
  v89->m128i_i32[2] = v12;
  v89->m128i_i32[1] = 2;
  v89[1].m128i_i64[0] = (__int64)v140;
LABEL_93:
  v92 = *(_QWORD **)(a1 + 520);
  if ( !v92 )
    goto LABEL_126;
LABEL_94:
  v93 = *((_DWORD *)v92 - 1);
  if ( v93 == *((_DWORD *)v92 - 2) )
  {
    v109 = (3 * v93 + 1) >> 1;
    v110 = 8 * v109 + 8;
    if ( 8 * v93 + 8 >= v110 || v93 >= v109 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v154, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, &v154);
      sub_233E40((__int64)&v154);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v111 = (unsigned int *)sub_186B300(v92 - 1, v110);
    v112 = v111[1];
    v92 = v111 + 2;
    *v111 = v109;
    *(_QWORD *)(a1 + 520) = v111 + 2;
    LODWORD(v111) = v112;
    v96 = &v92[v112];
    v95 = (_DWORD)v111 + 1;
  }
  else
  {
    v94 = v93;
    v95 = v93 + 1;
    v96 = &v92[v94];
  }
LABEL_96:
  *v96 = v140;
  *((_DWORD *)v92 - 1) = v95;
LABEL_30:
  v37 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v138);
  sub_182CBA0(v37, &v152);
  return 1;
}

