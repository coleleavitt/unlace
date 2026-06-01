__int64 __fastcall sub_19C0CE0(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        unsigned __int64 *a4,
        char a5,
        double a6,
        double a7)
{
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 *v13; // rbp
  __int64 v14; // r8
  char v15; // si
  bool v16; // al
  unsigned __int64 v17; // r12
  __int64 v18; // r8
  char v19; // si
  __int64 result; // rax
  int v21; // eax
  __int64 v22; // r10
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rdi
  unsigned __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  int v33; // edi
  int v34; // r15d
  unsigned int v35; // r15d
  __int64 v36; // rcx
  unsigned __int64 v37; // r13
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  int v40; // r8d
  int v41; // r9d
  _QWORD *v42; // rdi
  unsigned __int64 v43; // r13
  int v44; // esi
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // r15
  __int64 v48; // rax
  __int64 v49; // r13
  int v50; // ecx
  unsigned int v51; // eax
  char v52; // al
  int v53; // eax
  char *v54; // rdx
  __int64 *v55; // r13
  __int64 *v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  char v60; // al
  __int64 v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // r15
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r9
  __int64 v68; // r12
  __int64 (__fastcall *v69)(_QWORD *); // rax
  __int64 (__fastcall *v70)(__int64); // rax
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  int v73; // eax
  char *v74; // rdx
  int v75; // eax
  __int64 v76; // r8
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rax
  _QWORD *v79; // rdx
  const double *v80; // rax
  __m128i si128; // xmm1
  const double *v82; // rcx
  __m128 v83; // xmm0
  unsigned __int64 v84; // rax
  char *v85; // r12
  unsigned __int64 v86; // r15
  __int64 v87; // rsi
  char *v88; // r14
  _QWORD *v89; // rax
  __int64 v90; // r8
  __int64 v91; // r9
  unsigned __int64 v92; // rax
  _QWORD *v93; // rbp
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  unsigned __int64 v98; // r15
  int v99; // eax
  __int64 v100; // rsi
  __int64 v101; // rdx
  __int64 v102; // r8
  char v103; // al
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rbp
  __int64 v109; // r12
  __int64 v110; // r8
  __int64 v111; // r9
  __int16 v112; // ax
  __int16 v113; // dx
  _QWORD *v114; // rsi
  char v115; // dl
  __int64 v116; // rax
  __int64 v117; // rdi
  __m128i v118; // xmm1
  __m128i v119; // xmm0
  __int64 v120; // r8
  __int64 v121; // r9
  unsigned __int64 v122; // r12
  unsigned __int64 v123; // rbp
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rax
  bool v127; // al
  __int64 v128; // rax
  __int64 v129; // r8
  __int64 v130; // r9
  unsigned __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rax
  __int64 v135; // [rsp+0h] [rbp-4168h]
  __int64 v136; // [rsp+0h] [rbp-4168h]
  __int64 v138; // [rsp+8h] [rbp-4160h]
  __int64 v141; // [rsp+20h] [rbp-4148h]
  unsigned int v142; // [rsp+38h] [rbp-4130h]
  unsigned __int64 v143; // [rsp+38h] [rbp-4130h]
  char v144; // [rsp+40h] [rbp-4128h]
  char v145; // [rsp+40h] [rbp-4128h]
  __int64 v146; // [rsp+40h] [rbp-4128h]
  __int64 v147; // [rsp+40h] [rbp-4128h]
  __int64 v148; // [rsp+40h] [rbp-4128h]
  unsigned __int64 v149; // [rsp+40h] [rbp-4128h]
  __int64 v150; // [rsp+40h] [rbp-4128h]
  __int64 v151; // [rsp+40h] [rbp-4128h]
  __int64 v152; // [rsp+40h] [rbp-4128h]
  __int64 v153; // [rsp+48h] [rbp-4120h]
  __int64 v154; // [rsp+50h] [rbp-4118h]
  __int64 *v155; // [rsp+58h] [rbp-4110h]
  unsigned int v156; // [rsp+64h] [rbp-4104h]
  __int64 v157; // [rsp+68h] [rbp-4100h]
  __m128i v158; // [rsp+70h] [rbp-40F8h] BYREF
  __m128i v159; // [rsp+80h] [rbp-40E8h] BYREF
  __m128i v160; // [rsp+90h] [rbp-40D8h] BYREF
  __int64 v161[2]; // [rsp+A0h] [rbp-40C8h] BYREF
  void *v162; // [rsp+B0h] [rbp-40B8h] BYREF
  __int64 v163; // [rsp+B8h] [rbp-40B0h]
  unsigned __int64 v164; // [rsp+C0h] [rbp-40A8h] BYREF
  int v165; // [rsp+C8h] [rbp-40A0h]
  __int64 v166; // [rsp+D0h] [rbp-4098h]
  void *ptr; // [rsp+100h] [rbp-4068h] BYREF
  __int64 v168; // [rsp+108h] [rbp-4060h]
  _BYTE v169[192]; // [rsp+110h] [rbp-4058h] BYREF
  __m128 v170; // [rsp+1D0h] [rbp-3F98h] BYREF
  __int128 v171; // [rsp+1E8h] [rbp-3F80h]
  __int128 v172; // [rsp+1F8h] [rbp-3F70h]
  __int128 v173; // [rsp+208h] [rbp-3F60h]
  __m128 v174; // [rsp+2180h] [rbp-1FE8h] BYREF
  __int64 v175; // [rsp+2190h] [rbp-1FD8h]
  __int128 v176; // [rsp+2198h] [rbp-1FD0h]
  __int128 v177; // [rsp+21A8h] [rbp-1FC0h]
  __int128 v178; // [rsp+21B8h] [rbp-1FB0h]

  v8 = *a4;
  v9 = *(_QWORD *)(*a4 + 8);
  v10 = *(_QWORD *)(*a3 + 8);
  v11 = v9;
  v12 = v10;
  v13 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_BYTE *)(v14 + 16);
  v16 = (unsigned __int8)(v15 - 33) <= 1u || v15 == 42;
  if ( !v16 )
  {
    if ( v15 == 13 )
    {
      v16 = ((*(_WORD *)(v14 + 18) >> 3) & 0x1FF) == 488;
      v17 = v9 & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v19 = *(_BYTE *)(v18 + 16);
      if ( (unsigned __int8)(v19 - 33) <= 1u || v19 == 42 )
        goto LABEL_11;
    }
    else
    {
      v17 = v9 & 0xFFFFFFFFFFFFFFF0LL;
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v19 = *(_BYTE *)(v18 + 16);
      v16 = (unsigned __int8)(v19 - 33) <= 1u || v19 == 42;
      if ( v16 )
        goto LABEL_17;
    }
LABEL_4:
    if ( v19 != 13 || ((*(_WORD *)(v18 + 18) >> 3) & 0x1FF) != 0x1E8 )
    {
      if ( !v16 || !(unsigned int)sub_BFE6E0(v8, *(_QWORD *)(a1 + 248), 1, a6) )
        return 0;
LABEL_13:
      if ( a5 )
        *a4 = sub_160A600(
                a1,
                *a4,
                v10,
                (unsigned int)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33) + 13,
                0,
                0,
                a6,
                a7,
                0)
            & 0xFFFFFFFFFFFFFFFELL;
      return v10;
    }
LABEL_11:
    if ( v16 )
      goto LABEL_12;
LABEL_17:
    v138 = *(_QWORD *)(v8 + 8);
    v21 = sub_BFE6E0(*a3, *(_QWORD *)(a1 + 248), 1, a6);
    v22 = v138;
    if ( !v21 )
      return 0;
    goto LABEL_18;
  }
  v17 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v19 = *(_BYTE *)(v18 + 16);
  if ( (unsigned __int8)(v19 - 33) > 1u && v19 != 42 )
    goto LABEL_4;
LABEL_12:
  v141 = *(_QWORD *)(v8 + 8);
  if ( (unsigned int)sub_BFE6E0(v8, *(_QWORD *)(a1 + 248), 1, a6) )
    goto LABEL_13;
  v23 = sub_BFE6E0(*a3, *(_QWORD *)(a1 + 248), 1, a6);
  v22 = v141;
  v156 = v23;
  if ( v23 )
  {
LABEL_18:
    if ( a5 )
    {
      v135 = v22;
      *a3 = sub_160A600(
              a1,
              *a3,
              v22,
              (unsigned int)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33)
            + 13,
              0,
              0,
              a6,
              a7,
              0)
          & 0xFFFFFFFFFFFFFFFELL;
      return v135;
    }
    return v22;
  }
  v142 = 0;
  ptr = v169;
  v168 = 0x800000000LL;
  v155 = (__int64 *)v17;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v26 = *(_QWORD **)(a1 + 248);
              v161[0] = 0;
              v162 = nullptr;
              v27 = sub_A725A0(v26, v12, v161, v24, v25);
              v30 = sub_A725A0(*(_QWORD **)(a1 + 248), v11, (__int64 *)&v162, v28, v29);
              if ( !(_DWORD)v168 )
                goto LABEL_47;
              v31 = v161[0];
              v32 = (unsigned __int64)v162;
              v33 = LODWORD(v161[0]) >> 9;
              v34 = (LOBYTE(v161[0]) | (unsigned __int8)v162) & 0xF;
              if ( LODWORD(v161[0]) >> 9 != (unsigned int)v162 >> 9 )
              {
                if ( (_DWORD)v168 != 1 )
                  goto LABEL_97;
                if ( sub_F56A30(v33, (unsigned int)v162 >> 9, *(_QWORD *)(a1 + 248)) )
                {
                  v31 = v161[0];
                  v32 = (unsigned __int64)v162;
                  v33 = (unsigned int)v162 >> 9;
                  if ( LODWORD(v161[0]) >> 9 == (unsigned int)v162 >> 9 )
                  {
LABEL_103:
                    if ( (unsigned int)(v33 - 16) > 2 && ((unsigned int)v32 >> 9) - 16 > 2 )
                      goto LABEL_97;
                    goto LABEL_34;
                  }
                  if ( !sub_F56A30(v33, LODWORD(v161[0]) >> 9, *(_QWORD *)(a1 + 248)) )
                  {
                    v31 = v161[0];
                    v32 = (unsigned __int64)v162;
                    v33 = LODWORD(v161[0]) >> 9;
                    goto LABEL_34;
                  }
                }
                else
                {
                  v31 = v161[0];
                  v32 = (unsigned __int64)v162;
                  v33 = (unsigned int)v162 >> 9;
                  if ( LODWORD(v161[0]) >> 9 == (unsigned int)v162 >> 9 )
                    goto LABEL_34;
                  if ( sub_F56A30(v33, LODWORD(v161[0]) >> 9, *(_QWORD *)(a1 + 248)) )
                  {
                    v32 = (unsigned __int64)v162;
                    v31 = v161[0];
                    v33 = (unsigned int)v162 >> 9;
                    goto LABEL_34;
                  }
                }
                v31 = v161[0];
                v32 = (unsigned __int64)v162;
                v33 = LODWORD(v161[0]) >> 9;
                goto LABEL_103;
              }
LABEL_34:
              v35 = (v33 << 9) | v34;
              v36 = (v32 >> 4) & 3;
              v37 = v35;
              if ( (_DWORD)v36 == ((v31 >> 4) & 3) )
              {
                v37 = (16 * (int)v36) | (unsigned __int64)v35;
              }
              else
              {
                if ( !sub_F67340(*v13) && !sub_F67340(*v155) )
                  goto LABEL_97;
                v31 = v161[0];
                v32 = (unsigned __int64)v162;
              }
              v38 = (v32 >> 6) & 7;
              if ( (_DWORD)v38 == ((v31 >> 6) & 7) )
              {
                v37 |= (int)((_DWORD)v38 << 6);
              }
              else
              {
                if ( !sub_F67340(*v13) && !sub_F67340(*v155) )
                  goto LABEL_97;
                v31 = v161[0];
                v32 = (unsigned __int64)v162;
              }
              v39 = HIDWORD(v31);
              v40 = HIDWORD(v31);
              v41 = HIDWORD(v32);
              if ( HIDWORD(v32) && ((WORD2(v32) ^ 0xFFC0) & 0xFFC0) != 0 )
              {
                if ( v39 )
                {
                  if ( ((WORD2(v31) ^ 0xFFC0) & 0xFFC0) == 0 )
                    v40 = 0;
                }
                else
                {
                  v40 = 0;
                }
LABEL_43:
                v42 = ptr;
                if ( v40 != v41 )
                {
                  result = 0;
                  goto LABEL_98;
                }
                goto LABEL_44;
              }
              if ( v39 && ((WORD2(v31) ^ 0xFFC0) & 0xFFC0) != 0 )
              {
                v41 = 0;
                goto LABEL_43;
              }
              v42 = ptr;
LABEL_44:
              v43 = v31 & 0xFFFFFFFF00000000LL | v37;
              v44 = v168;
              v42[3 * (unsigned int)v168 - 2] = v43;
              if ( v43 != v31 || v43 != v32 )
                v142 = v44 - 1;
LABEL_47:
              v45 = v27;
              v47 = sub_A72040(*(_QWORD **)(a1 + 248), v27);
              if ( !v47 )
                goto LABEL_60;
              v45 = v30;
              v48 = sub_A72040(*(_QWORD **)(a1 + 248), v30);
              v49 = v48;
              if ( !v48 )
                goto LABEL_60;
              v50 = *(unsigned __int8 *)(v47 + 16);
              v45 = *(unsigned __int8 *)(v48 + 16);
              v51 = v45 - 2;
              if ( (unsigned int)(v50 - 2) > 1 )
                break;
              if ( v51 > 1 )
              {
                v102 = v47;
                v101 = 0;
                goto LABEL_140;
              }
              sub_A5DAD0((__int64)&v174, v49);
              sub_A5DAD0((__int64)&v170, v47);
              if ( v170.m128_i32[2] <= 0x40u )
              {
                v52 = v170.m128_u64[0] == v174.m128_u64[0];
              }
              else
              {
                v52 = sub_2205D70(&v170, &v174);
                if ( v170.m128_u64[0] )
                {
                  v144 = v52;
                  operator delete[]((void *)v170.m128_u64[0]);
                  v52 = v144;
                }
              }
              if ( v174.m128_i32[2] > 0x40u && v174.m128_u64[0] )
              {
                v145 = v52;
                operator delete[]((void *)v174.m128_u64[0]);
                v52 = v145;
              }
              if ( !v52 )
              {
                v45 = *(unsigned __int8 *)(v49 + 16);
                LOBYTE(v50) = *(_BYTE *)(v47 + 16);
                v101 = v49;
                v102 = v47;
                goto LABEL_140;
              }
              v12 = *(_QWORD *)(v47 + 32);
              v11 = *(_QWORD *)(v49 + 32);
              v53 = v168;
              if ( HIDWORD(v168) <= (unsigned int)v168 )
              {
                v174.m128_i32[0] = 3;
                v174.m128_u64[1] = 0;
                v175 = v47;
                sub_199FE80((__int64)&ptr, (const __m128i *)&v174);
              }
              else
              {
                v24 = 3LL * (unsigned int)v168;
                v54 = (char *)ptr + 24 * (unsigned int)v168;
                *(_DWORD *)v54 = 3;
                *((_QWORD *)v54 + 1) = 0;
                *((_QWORD *)v54 + 2) = v47;
                LODWORD(v168) = v53 + 1;
              }
            }
            v101 = 0;
            if ( v51 <= 1 )
              v101 = v49;
            v102 = 0;
LABEL_140:
            v103 = (_BYTE)v50 == 5;
            LOBYTE(v45) = (_BYTE)v45 == 5;
            if ( !(_BYTE)v45 || (_BYTE)v50 != 5 )
            {
              v46 = *(_QWORD *)(a1 + 232);
              if ( *(char *)(v46 + 1) >= 0 )
                break;
              if ( (_BYTE)v45 == v103 )
                break;
              LOBYTE(v46) = v102 != 0;
              if ( (v102 != 0) == (v101 != 0) || (_DWORD)v168 && *((_DWORD *)ptr + 6 * (unsigned int)v168 - 6) == 3 )
                break;
            }
            v157 = v102;
            v12 = *(_QWORD *)(v47 + 32);
            v11 = *(_QWORD *)(v49 + 32);
            v151 = v101;
            sub_19A0190((__int64)&ptr, 3);
            v25 = v157;
            if ( v157 | v151 )
              v142 = v168;
          }
LABEL_60:
          v55 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
          v56 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFF0LL);
          v57 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v57 + 16) != 42 )
          {
            v57 = sub_199F9E0(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), v45, v57, v46);
            if ( !v57 )
            {
              v59 = *v55;
              v60 = *(_BYTE *)(*v55 + 16);
              if ( v60 == 34 )
                goto LABEL_68;
              goto LABEL_72;
            }
          }
          v58 = *v56;
          if ( *(_BYTE *)(*v56 + 16) != 42 )
          {
            v146 = v57;
            v58 = sub_199F9E0(*v56, v45, v57, v46);
            v57 = v146;
            if ( !v58 )
              break;
          }
          v12 = *(_QWORD *)(v57 + 32);
          v11 = *(_QWORD *)(v58 + 32);
          sub_19A0190((__int64)&ptr, 0);
        }
        v59 = *v55;
        v60 = *(_BYTE *)(*v55 + 16);
        if ( v60 == 34 )
          goto LABEL_68;
LABEL_72:
        v62 = *(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v62 + 16) != 34 )
          goto LABEL_75;
        v59 = sub_F63050(v59, v45, v59, v62);
        if ( !v59 )
          break;
LABEL_68:
        v61 = *v56;
        if ( *(_BYTE *)(*v56 + 16) != 34 )
        {
          v62 = *(_QWORD *)(*(_QWORD *)(v61 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v62 + 16) != 34 )
            break;
          v150 = v59;
          v61 = sub_F63050(*v56, v45, v59, v62);
          v59 = v150;
          if ( !v61 )
            break;
        }
        v12 = *(_QWORD *)(v59 + 32);
        v11 = *(_QWORD *)(v61 + 32);
        sub_19A0190((__int64)&ptr, 1);
      }
      v59 = *v55;
      v60 = *(_BYTE *)(*v55 + 16);
LABEL_75:
      if ( v60 != 33 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v59 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
          break;
        v59 = sub_F63050(v59, v45, v59, v62);
        if ( !v59 )
          break;
      }
      v62 = *v56;
      if ( *(_BYTE *)(*v56 + 16) != 33 )
      {
        v152 = v59;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v62 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 33 )
          break;
        v104 = sub_F63050(v62, v45, v59, v62);
        v59 = v152;
        v62 = v104;
        if ( !v104 )
          break;
      }
      v12 = *(_QWORD *)(v59 + 32);
      v11 = *(_QWORD *)(v62 + 32);
      v147 = v62;
      v63 = sub_F61C10(v59);
      v64 = sub_F61C10(v147);
      v68 = (__int64)v64;
      if ( !v63
        || !v64
        || v63 != v64
        && ((v69 = *(__int64 (__fastcall **)(_QWORD *))(*v63 + 32LL), (char *)v69 != (char *)sub_A01140)
          ? (v148 = v69(v63))
          : (v148 = sub_B70A60((__int64)v63)),
            (v70 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 32LL), v70 != sub_A01140)
          ? (v71 = v70(v68))
          : (v71 = sub_B70A60(v68)),
            v148 != v71) )
      {
        if ( (_DWORD)v168 )
          goto LABEL_97;
        if ( !(unsigned __int8)sub_183BB70(a1, a2, (__int64)v63, v68, v25, v67) )
        {
          if ( !(unsigned __int8)sub_183BB70(a1, a2, v68, (__int64)v63, v25, v67) )
            goto LABEL_97;
          v63 = (_QWORD *)v68;
        }
        if ( !v63 )
          goto LABEL_97;
      }
      v72 = v63[6];
      if ( !v72 )
        v72 = sub_A7AA70(*(_QWORD *)(a1 + 248), (__int64)v63, v65, v66, v25, v67);
      v24 = *(_QWORD *)(v72 & 0xFFFFFFFFFFFFFFF0LL);
      v73 = v168;
      if ( HIDWORD(v168) <= (unsigned int)v168 )
      {
        v174.m128_i32[0] = 2;
        v174.m128_u64[1] = 0;
        v175 = v24;
        sub_199FE80((__int64)&ptr, (const __m128i *)&v174);
      }
      else
      {
        v74 = (char *)ptr + 24 * (unsigned int)v168;
        *(_DWORD *)v74 = 2;
        *((_QWORD *)v74 + 1) = 0;
        *((_QWORD *)v74 + 2) = v24;
        LODWORD(v168) = v73 + 1;
      }
    }
    v75 = v168;
    if ( (_DWORD)v168 )
      break;
    if ( (!sub_F67340(*v55) || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v56 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v55 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 || !sub_F67340(*v56)) )
    {
      v149 = v30;
      v75 = v168;
      goto LABEL_114;
    }
    v12 = sub_F68450(*v55, v45, v59, v62, v76);
    v11 = sub_F68450(*v56, v45, v105, v106, v107);
    sub_19A0190((__int64)&ptr, 0);
  }
  v149 = v30;
LABEL_114:
  if ( v75 == 1 )
  {
    v108 = *v55;
    if ( *(_BYTE *)(*v55 + 16) == 26 || (v108 = sub_199F9B0(*v55, v45, v59, v62)) != 0 )
    {
      v109 = *v56;
      if ( *(_BYTE *)(*v56 + 16) == 26 || (v109 = sub_199F9B0(*v56, v45, v59, v62)) != 0 )
      {
        sub_A5E110(&v170, v108);
        sub_A5E110(&v174, v109);
        if ( (v170.m128_i8[0] & 0x40) != 0 && (v174.m128_i8[0] & 0x40) != 0 )
        {
          v112 = v170.m128_i16[0] | 0x40;
          v113 = v174.m128_i16[0] | 0x40;
        }
        else
        {
          v112 = v170.m128_i16[0] & 0xFFBF;
          v113 = v174.m128_i16[0] & 0xFFBF;
        }
        v170.m128_i16[0] = v112;
        v174.m128_i16[0] = v113;
        v114 = *(_QWORD **)(a1 + 248);
        v115 = (v170.m128_i8[2] | v174.m128_i8[2]) & 4;
        v170.m128_i8[2] = v115 | v170.m128_i8[2] & 0xFB;
        v174.m128_i8[2] = v115 | v174.m128_i8[2] & 0xFB;
        v163 = 0x800000000LL;
        v116 = *(_QWORD *)(a1 + 232);
        v162 = &v164;
        sub_ABF700(
          (__int64)&v158,
          v114,
          (__int64)&v162,
          (*(_BYTE *)(v116 + 1) & 0x40) != 0,
          v110,
          v111,
          v171,
          v172,
          v173,
          v176,
          v177,
          v178);
        v117 = *(_QWORD *)(a1 + 248);
        v118 = _mm_loadu_si128(&v159);
        v119 = _mm_loadu_si128(&v160);
        v176 = (__int128)_mm_loadu_si128(&v158);
        v177 = (__int128)v118;
        v178 = (__int128)v119;
        v171 = v176;
        v172 = (__int128)v118;
        v173 = (__int128)v119;
        v27 = sub_A73610(
                v117,
                *(_QWORD *)(v108 + 24),
                (__int64 *)(v108 + 48),
                *(unsigned __int16 *)(v108 + 22),
                (const __m128i *)&v170,
                0);
        v149 = sub_A73610(
                 *(_QWORD *)(a1 + 248),
                 *(_QWORD *)(v109 + 24),
                 (__int64 *)(v109 + 48),
                 *(unsigned __int16 *)(v109 + 22),
                 (const __m128i *)&v174,
                 0);
        if ( v162 != &v164 )
          free(v162);
        v55 = (__int64 *)(v27 & 0xFFFFFFFFFFFFFFF0LL);
        v56 = (__int64 *)(v149 & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
    v122 = v27 & 7;
    v123 = v149 & 7;
    v77 = v55[1] & 0xFFFFFFFFFFFFFFF8LL | v122 | v55[1] & 7;
    v78 = v56[1] & 0xFFFFFFFFFFFFFFF8LL | v123 | v56[1] & 7;
    if ( (_DWORD)v168 != 1 || *(_DWORD *)ptr )
      goto LABEL_116;
    if ( v77 != v78 )
    {
      v124 = *v55;
      v125 = *v56;
      v126 = *(_QWORD *)(*(_QWORD *)(*v55 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v126 + 16) == 13
        && ((*(_WORD *)(v126 + 18) >> 3) & 0x1FF) == 0x1B3
        && (v154 = *v55, v153 = *v56, v127 = sub_19A1E30(*v56), v125 = v153, v124 = v154, v127) )
      {
        v149 = v27;
      }
      else
      {
        v128 = *(_QWORD *)(*(_QWORD *)(v125 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v128 + 16) == 13 && ((*(_WORD *)(v128 + 18) >> 3) & 0x1FF) == 0x1B3 && sub_19A1E30(v124) )
        {
          v27 = v149;
        }
        else
        {
          if ( (unsigned __int8)sub_183BD10(a1, a2, v27, v149, v120, v121) )
          {
            v27 = v149;
          }
          else
          {
            if ( !(unsigned __int8)sub_183BD10(a1, a2, v149, v27, v129, v130) )
            {
              v77 = v55[1] & 7 | v122 | v55[1] & 0xFFFFFFFFFFFFFFF8LL;
              v78 = v56[1] & 7 | v123 | v56[1] & 0xFFFFFFFFFFFFFFF8LL;
              goto LABEL_116;
            }
            v149 = v27;
          }
          v131 = v27;
          v27 = v149;
          v149 = v131;
        }
      }
    }
  }
  else
  {
    v77 = *(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)v27 | (unsigned __int8)*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
    v78 = *(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)*(_QWORD *)&byte_8[v30 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v149) & 7;
LABEL_116:
    if ( v77 != v78 )
    {
LABEL_97:
      v42 = ptr;
      result = 0;
      goto LABEL_98;
    }
  }
  if ( v142 )
  {
    v79 = ptr;
    if ( v142 == 1 )
      goto LABEL_122;
    v80 = (const double *)((char *)ptr + 8);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D00);
    v82 = (const double *)((char *)ptr + 48 * (v142 >> 1) + 8);
    do
    {
      v80 += 6;
      v83 = (__m128)_mm_or_si128((__m128i)_mm_loadh_ps(v80 - 3), si128);
      *(v80 - 6) = *(const double *)v83.m128_u64;
      _mm_storeh_ps((double *)v80 - 3, v83);
    }
    while ( v82 != v80 );
    v156 = v142 & 0xFFFFFFFE;
    if ( v142 != (v142 & 0xFFFFFFFE) )
LABEL_122:
      v79[3 * v156 + 1] |= 1uLL;
  }
  v84 = sub_ABBE20(*(_QWORD **)(a1 + 248), v27, v149, 0);
  v85 = (char *)ptr;
  v86 = v84;
  v87 = v84;
  v88 = (char *)ptr + 24 * (unsigned int)v168;
  if ( ptr != v88 )
  {
    do
    {
      v88 -= 24;
      v93 = *(_QWORD **)(a1 + 248);
      v98 = sub_A70F20((__int64)v93, v87, *((_QWORD *)v88 + 1));
      v99 = *(_DWORD *)v88;
      if ( *(_DWORD *)v88 == 1 )
      {
        v92 = sub_A74EC0((__int64)v93, v98);
      }
      else if ( v99 )
      {
        if ( v99 == 2 )
        {
          v89 = sub_F63270(*((_QWORD *)v88 + 2), v87, v94, v95, v96, v97);
          v92 = sub_ABBA20(v93, v98, 0, (__int64)v89, v90, v91);
        }
        else
        {
          v100 = *((_QWORD *)v88 + 2);
          if ( v100 )
          {
            sub_A5DAD0((__int64)&v174, v100);
            v92 = sub_A70F70((__int64)v93, v98, (__int64)&v174, nullptr, 0, 0);
            if ( v174.m128_i32[2] > 0x40u && v174.m128_u64[0] )
            {
              v143 = v92;
              operator delete[]((void *)v174.m128_u64[0]);
              v92 = v143;
            }
          }
          else
          {
            v92 = sub_A71E50((__int64)v93, v98, 0, 0);
          }
        }
      }
      else
      {
        v92 = sub_A70010((__int64)v93, v98);
      }
      v87 = v92;
    }
    while ( v85 != v88 );
    v86 = v92;
  }
  if ( !a5 )
  {
LABEL_179:
    result = v86;
    v42 = ptr;
    goto LABEL_98;
  }
  LODWORD(v162) = 9;
  v164 = v86;
  HIDWORD(v161[0]) = a2;
  v163 = 0;
  v165 = 0;
  v166 = 0;
  LOWORD(v161[0]) = 2;
  v161[1] = 0;
  sub_1A19220((unsigned int)&v170, a1, (unsigned int)&v162, (unsigned int)v161, (_DWORD)a3, 1, 0, 1);
  if ( v170.m128_i32[0] )
  {
    sub_1A19220((unsigned int)&v174, a1, (unsigned int)&v162, (unsigned int)v161, (_DWORD)a4, 1, 0, 1);
    if ( v174.m128_i32[0] )
    {
      v132 = sub_1A1D600((unsigned int)&v170, a1, (unsigned int)&v162, (unsigned int)v161, (_DWORD)a3, 1, 0);
      if ( v132 != 1 )
      {
        *a3 = v132 & 0xFFFFFFFFFFFFFFFELL;
        v133 = sub_1A1D600((unsigned int)&v174, a1, (unsigned int)&v162, (unsigned int)v161, (_DWORD)a4, 1, 0);
        if ( v133 != 1 )
        {
          *a4 = v133 & 0xFFFFFFFFFFFFFFFELL;
          sub_1A0BB10(&v174);
          sub_1A0BB10(&v170);
          goto LABEL_179;
        }
      }
    }
    sub_1A0BB10(&v174);
  }
  sub_1A0BB10(&v170);
  v42 = ptr;
  result = 0;
LABEL_98:
  if ( v42 != (_QWORD *)v169 )
  {
    v136 = result;
    free(v42);
    return v136;
  }
  return result;
}
