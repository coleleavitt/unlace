__int64 __fastcall sub_886380(__int64 a1, __int64 a2, __int64 **a3, _QWORD **a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 v11; // r13
  __int64 v12; // rsi
  __int64 v13; // r14
  __int16 v14; // r13
  __int64 *v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rdx
  char v18; // al
  __int16 v19; // ax
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // dl
  unsigned __int16 v23; // dx
  char v24; // al
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // al
  unsigned int v30; // r15d
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  __int64 v34; // r8
  unsigned int v35; // r12d
  int v36; // edx
  char v37; // r13
  unsigned int v38; // r12d
  int v39; // edx
  __int8 v40; // r13
  _BYTE *v41; // rax
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // r13
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rsi
  _BYTE *v49; // rax
  char v50; // r12
  char v51; // al
  char v52; // al
  __int64 v53; // rdx
  char v54; // al
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r8
  _BYTE *v61; // rax
  __int64 v62; // rdx
  char v63; // al
  __int64 v64; // rsi
  char v65; // al
  __int64 v66; // rsi
  __int64 v67; // rsi
  __int64 *v68; // rdx
  __int64 v69; // rcx
  int v70; // r8d
  int v71; // r9d
  char v72; // al
  __int64 v73; // rcx
  int v74; // r8d
  int v75; // r9d
  __int64 *v76; // rdx
  __int64 v77; // rsi
  void *v78; // rdi
  char v79; // al
  __int64 v80; // rdx
  char v81; // dl
  __int64 v82; // rdx
  int v83; // eax
  bool v84; // dl
  __int64 v85; // rsi
  char v86; // al
  __int64 v87; // rsi
  int v88; // eax
  int v89; // ebx
  __int64 v90; // rdx
  __int64 v91; // rdx
  char v92; // dl
  __int64 v93; // rsi
  __int64 *v94; // rdx
  __int64 v95; // rcx
  int v96; // r8d
  int v97; // r9d
  __int64 v98; // rsi
  __int64 v99; // rsi
  __int64 v100; // rdi
  __int64 v101; // rdx
  __int64 v102; // rdx
  int v103; // esi
  __int64 v104; // rsi
  __int64 v105; // rdx
  int v106; // eax
  __int64 v107; // rdi
  int v108; // r12d
  __int64 v109; // rsi
  unsigned int v110; // eax
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // r13
  unsigned __int64 v113; // r12
  unsigned __int8 **v114; // rdi
  unsigned __int8 **v115; // rdi
  unsigned int v116; // eax
  bool v117; // al
  __int64 v118; // r14
  unsigned __int64 v119; // rdx
  unsigned __int64 v120; // rax
  bool v121; // al
  __int64 v122; // rax
  unsigned int v123; // eax
  __int64 v124; // r14
  unsigned __int64 v125; // r15
  unsigned __int64 v126; // r13
  unsigned __int64 v127; // rdx
  unsigned __int8 **v128; // rax
  unsigned __int8 **v129; // r14
  unsigned __int64 v130; // rax
  __int64 v131; // rsi
  unsigned __int8 **v132; // rdi
  unsigned __int64 v133; // rsi
  unsigned __int64 v134; // rdx
  char v135; // al
  unsigned __int64 v136; // r15
  bool v137; // al
  unsigned __int64 v138; // rdx
  __int64 v139; // r15
  unsigned __int8 v140; // al
  unsigned __int8 **v141; // rdi
  unsigned __int8 **v142; // rdi
  unsigned __int8 **v143; // r13
  unsigned __int64 v144; // rsi
  unsigned __int64 v145; // rsi
  unsigned __int64 v146; // rax
  __int64 v147; // rsi
  _QWORD *v148; // [rsp+8h] [rbp-210h]
  bool v149; // [rsp+28h] [rbp-1F0h]
  __int64 v150; // [rsp+38h] [rbp-1E0h] BYREF
  __m128i v151; // [rsp+40h] [rbp-1D8h] BYREF
  char v152; // [rsp+50h] [rbp-1C8h]
  void *v153[2]; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 *v154; // [rsp+70h] [rbp-1A8h]
  __m128i *v155; // [rsp+78h] [rbp-1A0h] BYREF
  unsigned int v156; // [rsp+80h] [rbp-198h]
  char v157; // [rsp+84h] [rbp-194h]
  __int64 v158[3]; // [rsp+88h] [rbp-190h] BYREF
  __int64 v159[4]; // [rsp+A0h] [rbp-178h] BYREF
  void *v160[2]; // [rsp+C0h] [rbp-158h] BYREF
  __int64 v161; // [rsp+D0h] [rbp-148h]
  __m128i *v162; // [rsp+D8h] [rbp-140h] BYREF
  int v163; // [rsp+E0h] [rbp-138h]
  char v164; // [rsp+E4h] [rbp-134h]
  __int64 v165; // [rsp+E8h] [rbp-130h] BYREF
  void *v166; // [rsp+F0h] [rbp-128h]
  __int64 v167; // [rsp+F8h] [rbp-120h]
  __int64 v168[8]; // [rsp+100h] [rbp-118h] BYREF
  char v169; // [rsp+141h] [rbp-D7h]
  __m128i v170; // [rsp+150h] [rbp-C8h] BYREF
  __int64 v171; // [rsp+160h] [rbp-B8h]
  _BYTE v172[16]; // [rsp+168h] [rbp-B0h] BYREF
  __int64 v173; // [rsp+178h] [rbp-A0h]
  void *ptr; // [rsp+180h] [rbp-98h]
  __int64 v175; // [rsp+188h] [rbp-90h]
  _BYTE v176[65]; // [rsp+190h] [rbp-88h] BYREF
  char v177; // [rsp+1D1h] [rbp-47h]

  v9 = *(_QWORD *)(a2 + 16);
  v10 = *(_QWORD *)(a2 + 24);
  v150 = a2;
  v11 = *(_WORD *)(a2 + 2);
  v12 = *(_QWORD *)(v9 + 8);
  v13 = *(_QWORD *)(v10 + 8);
  v14 = (v11 >> 3) & 0x3F;
  v15 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *(_BYTE *)(v17 + 16);
  if ( v18 != 13 )
  {
    if ( v18 == 46 )
    {
      v31 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      if ( (*(_BYTE *)(v31 + 74) & 1) == 0 && *(_QWORD *)(v31 + 128) <= 7u )
        goto LABEL_68;
    }
    else if ( v18 != 10 )
    {
      goto LABEL_5;
    }
LABEL_18:
    v20 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    v32 = *(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v33 = *(_QWORD *)v32;
    v22 = *(_BYTE *)(*(_QWORD *)v32 + 16LL);
    if ( v22 == 13 )
    {
      v23 = (*(_WORD *)(v33 + 18) >> 3) & 0x1FF;
      if ( ((v23 + 77) & 0x1FFu) > 0x13 )
      {
        v16 = *v15;
        v34 = *(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v18 = *(_BYTE *)(v34 + 16);
        if ( v18 != 13 )
          goto LABEL_7;
LABEL_21:
        v19 = (*(_WORD *)(v34 + 18) >> 3) & 0x1FF;
        goto LABEL_3;
      }
      goto LABEL_62;
    }
    if ( v22 != 46 )
    {
      if ( v22 != 10 )
      {
        v16 = *v15;
        v34 = *(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        v18 = *(_BYTE *)(v34 + 16);
        if ( v18 != 13 )
          goto LABEL_41;
        goto LABEL_21;
      }
LABEL_62:
      BYTE4(v160[1]) = 0;
      LODWORD(v160[1]) = 1;
      v160[0] = nullptr;
      v170.m128i_i32[2] = 1;
      v170.m128i_i64[0] = 0;
      v170.m128i_i8[12] = 0;
      if ( !(unsigned __int8)sub_87D880(*(_QWORD *)(v150 + 16), (__int64)v160, a1, v20, a5, a6) )
      {
        v60 = *(unsigned int *)(a1 + 48);
        if ( (_DWORD)v60 )
        {
          v61 = *(_BYTE **)(a1 + 24);
          if ( *(_BYTE *)(a1 + 962) )
          {
            *v61 = 1;
          }
          else
          {
            v92 = *(_BYTE *)(a1 + 963);
            *v61 |= v92;
            if ( !v92 )
              goto LABEL_31;
          }
          sub_87D880(*(_QWORD *)(v150 + 24), (__int64)&v170, a1, v57, v60, v59);
        }
        goto LABEL_31;
      }
      if ( !(unsigned __int8)sub_87D880(*(_QWORD *)(v150 + 24), (__int64)&v170, a1, v57, v58, v59) )
        goto LABEL_31;
      if ( BYTE4(v160[1]) )
      {
        v88 = sub_25867A0(v160, &v170);
        if ( v88 < 0 )
          goto LABEL_125;
        v84 = v88 != 0;
      }
      else
      {
        v83 = sub_2586820(v160, &v170);
        v84 = v83 != 0;
        if ( v83 < 0 )
          goto LABEL_125;
      }
      if ( v84 )
        v30 = sub_867120(a3, 3, v150);
      else
        v30 = sub_867120(a3, 2, v150);
      goto LABEL_32;
    }
    v56 = sub_B14A40(v33);
    if ( (*(_BYTE *)(v56 + 74) & 1) != 0 || *(_QWORD *)(v56 + 128) > 7u )
      goto LABEL_62;
LABEL_68:
    v16 = *v15;
    v62 = *(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *(_BYTE *)(v62 + 16);
    if ( v18 != 13 )
      goto LABEL_5;
    v19 = (*(_WORD *)(v62 + 18) >> 3) & 0x1FF;
    goto LABEL_3;
  }
  v19 = (*(_WORD *)(v17 + 18) >> 3) & 0x1FF;
  if ( ((v19 + 77) & 0x1FFu) <= 0x13 )
    goto LABEL_18;
LABEL_3:
  if ( ((v19 + 57) & 0x1FFu) <= 0x17 )
  {
LABEL_22:
    v35 = sub_70B7E0(*(_QWORD *)(a1 + 16), v12);
    LODWORD(v153[1]) = (unsigned __int16)v35;
    v36 = HIBYTE(v35) & 0x20;
    v37 = ((unsigned __int8)v36 >> 5) ^ 1;
    if ( (unsigned __int16)v35 > 0x40u )
    {
      sub_2585A50(v153, 0, (v35 & 0x20000000) != 0);
      v170.m128i_i32[2] = (__int32)v153[1];
      if ( LODWORD(v153[1]) <= 0x40 )
      {
        LODWORD(v160[1]) = v153[1];
        BYTE4(v160[1]) = v37;
        v160[0] = v153[0];
        LODWORD(v161) = v35;
      }
      else
      {
        sub_2585B30(&v170);
        BYTE4(v160[1]) = v37;
        LODWORD(v161) = v35;
        LODWORD(v160[1]) = v170.m128i_i32[2];
        v160[0] = (void *)v170.m128i_i64[0];
        if ( LODWORD(v153[1]) > 0x40 && v153[0] )
          operator delete[](v153[0]);
      }
    }
    else
    {
      LODWORD(v160[1]) = (unsigned __int16)v35;
      v160[0] = nullptr;
      BYTE4(v160[1]) = ((unsigned __int8)v36 >> 5) ^ 1;
      LODWORD(v161) = v35;
    }
    v38 = sub_70B7E0(*(_QWORD *)(a1 + 16), v13);
    v151.m128i_i32[2] = (unsigned __int16)v38;
    v39 = HIBYTE(v38) & 0x20;
    v40 = ((unsigned __int8)v39 >> 5) ^ 1;
    if ( (unsigned __int16)v38 > 0x40u )
    {
      sub_2585A50(&v151, 0, (v38 & 0x20000000) != 0);
      LODWORD(v153[1]) = v151.m128i_i32[2];
      if ( v151.m128i_i32[2] <= 0x40u )
      {
        v170.m128i_i32[2] = v151.m128i_i32[2];
        v170.m128i_i8[12] = v40;
        v170.m128i_i64[0] = v151.m128i_i64[0];
        LODWORD(v171) = v38;
      }
      else
      {
        sub_2585B30(v153);
        v170.m128i_i8[12] = v40;
        LODWORD(v171) = v38;
        v170.m128i_i32[2] = (__int32)v153[1];
        v170.m128i_i64[0] = (__int64)v153[0];
        if ( v151.m128i_i32[2] > 0x40u && v151.m128i_i64[0] )
          operator delete[]((void *)v151.m128i_i64[0]);
      }
    }
    else
    {
      v170.m128i_i32[2] = (unsigned __int16)v38;
      v170.m128i_i64[0] = 0;
      v170.m128i_i8[12] = ((unsigned __int8)v39 >> 5) ^ 1;
      LODWORD(v171) = v38;
    }
    if ( !(unsigned __int8)sub_8AEB10(*(_QWORD *)(v150 + 16), v160, a1) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v41 = *(_BYTE **)(a1 + 24);
        if ( *(_BYTE *)(a1 + 962) )
        {
          *v41 = 1;
        }
        else
        {
          v81 = *(_BYTE *)(a1 + 963);
          *v41 |= v81;
          if ( !v81 )
            goto LABEL_31;
        }
        sub_8AEB10(*(_QWORD *)(v150 + 24), &v170, a1);
      }
LABEL_31:
      v30 = 0;
      goto LABEL_32;
    }
    if ( !(unsigned __int8)sub_8AEB10(*(_QWORD *)(v150 + 24), &v170, a1) )
      goto LABEL_31;
    if ( (int)sub_256EFC0(v160, &v170) >= 0 )
    {
      if ( (int)sub_256EFC0(v160, &v170) <= 0 )
        v30 = sub_867120(a3, 2, v150);
      else
        v30 = sub_867120(a3, 3, v150);
      goto LABEL_32;
    }
LABEL_125:
    v30 = sub_867120(a3, 1, v150);
LABEL_32:
    if ( v170.m128i_i32[2] > 0x40u && v170.m128i_i64[0] )
      operator delete[]((void *)v170.m128i_i64[0]);
    if ( LODWORD(v160[1]) > 0x40 && v160[0] )
      operator delete[](v160[0]);
    return v30;
  }
  v18 = 13;
LABEL_5:
  v20 = v13 & 0xFFFFFFFFFFFFFFF0LL;
  v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v22 = *(_BYTE *)(v21 + 16);
  if ( v22 == 13 )
  {
    v23 = (*(_WORD *)(v21 + 18) >> 3) & 0x1FF;
LABEL_7:
    if ( v23 <= 0x1C6u || v23 > 0x1DEu )
    {
      if ( v18 != 14 )
        goto LABEL_10;
LABEL_43:
      LODWORD(v154) = 1;
      v153[1] = nullptr;
      BYTE4(v154) = 0;
      v156 = 1;
      v155 = nullptr;
      v157 = 0;
      v43 = sub_2575D40();
      v45 = sub_2575D20(v16, v12, v44);
      if ( v43 == v45 )
      {
        sub_257CDE0(v158, v45);
        sub_257CDE0(v159, v45);
        LODWORD(v161) = 1;
        v160[1] = nullptr;
        BYTE4(v161) = 0;
        v163 = 1;
        v162 = nullptr;
        v164 = 0;
        sub_257CDE0(&v165, v45);
        sub_257CDE0(v168, v45);
      }
      else
      {
        sub_2579610(v158);
        sub_2579610(v159);
        LODWORD(v161) = 1;
        v160[1] = nullptr;
        BYTE4(v161) = 0;
        v163 = 1;
        v162 = nullptr;
        v164 = 0;
        sub_2579610(&v165);
        sub_2579610(v168);
      }
      if ( ((*(_WORD *)(v150 + 2) >> 3) & 0x3Fu) - 21 <= 0xA )
      {
        v172[0] |= 1u;
        v170 = 0u;
        v171 = 0;
        v173 = 0;
        ptr = v176;
        v175 = 0x800000000LL;
        v177 = 0;
        v46 = *(_QWORD *)(v150 + 16);
        v151.m128i_i64[0] = a1;
        v151.m128i_i64[1] = (__int64)&v170;
        v152 = 0;
        sub_869D30(&v151, v46);
        if ( ptr != v176 )
          free(ptr);
LABEL_48:
        v48 = *(unsigned int *)(a1 + 48);
        if ( (_DWORD)v48 )
        {
          v49 = *(_BYTE **)(a1 + 24);
          if ( *(_BYTE *)(a1 + 962) )
          {
            *v49 = 1;
            goto LABEL_51;
          }
          v47 = *(unsigned __int8 *)(a1 + 963);
          *v49 |= v47;
          if ( (_BYTE)v47 )
          {
LABEL_51:
            v50 = 0;
            goto LABEL_52;
          }
        }
LABEL_55:
        v30 = 0;
LABEL_56:
        sub_8336C0((__int64)v160, v48, v47);
        sub_8336C0((__int64)v153, v48, v53);
        return v30;
      }
      v54 = sub_B080B0(*v15);
      v55 = *(_QWORD *)(v150 + 16);
      v170.m128i_i64[0] = a1;
      if ( v54 )
      {
        v170.m128i_i64[1] = (__int64)v158;
        if ( !(unsigned __int8)sub_883160(v170.m128i_i64, v55) )
          goto LABEL_48;
        LOBYTE(v153[0]) = 0;
        if ( v158[0] == v45 )
          sub_257CDE0(&v170, v45);
        else
          sub_2579610(&v170);
        sub_834250(v159, v170.m128i_i64, v91);
        sub_5FF3B0(v170.m128i_i64);
      }
      else
      {
        v170.m128i_i64[1] = (__int64)v153;
        if ( !(unsigned __int8)sub_8811F0(&v170, v55) )
          goto LABEL_48;
      }
      v50 = 1;
LABEL_52:
      v51 = sub_B080B0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v150 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL));
      v48 = *(_QWORD *)(v150 + 24);
      v170.m128i_i64[0] = a1;
      if ( v51 )
      {
        v170.m128i_i64[1] = (__int64)&v165;
        v52 = sub_883160(v170.m128i_i64, v48);
        if ( !v50 || !v52 )
          goto LABEL_55;
        LOBYTE(v160[0]) = 0;
        if ( v165 == v45 )
          sub_257CDE0(&v170, v45);
        else
          sub_2579610(&v170);
        sub_834250(v168, v170.m128i_i64, v82);
        sub_5FF3B0(v170.m128i_i64);
      }
      else
      {
        v170.m128i_i64[1] = (__int64)v160;
        v79 = sub_8811F0(&v170, v48);
        if ( !v50 || !v79 )
          goto LABEL_55;
      }
      if ( !LOBYTE(v153[0]) )
      {
        v89 = sub_8352E0(v158, (__int64)&v165, v47);
        v48 = 2 * (unsigned int)((v89 == 1) & ((unsigned int)sub_8352E0(v159, (__int64)v168, v90) == 1));
        v30 = sub_867120(a3, v48, v150);
        goto LABEL_56;
      }
      if ( (unsigned int)v154 <= 0x40 )
      {
        if ( v153[1] != v160[1] )
          goto LABEL_123;
      }
      else if ( !(unsigned __int8)sub_2586760(&v153[1], &v160[1]) )
      {
        goto LABEL_123;
      }
      if ( v156 <= 0x40 )
      {
        if ( v155 == v162 )
          goto LABEL_104;
      }
      else if ( (unsigned __int8)sub_2586760(&v155, &v162) )
      {
LABEL_104:
        v80 = v150;
        v48 = 2;
LABEL_105:
        v30 = sub_867120(a3, v48, v80);
        goto LABEL_56;
      }
LABEL_123:
      v80 = v150;
      v48 = 0;
      goto LABEL_105;
    }
    goto LABEL_22;
  }
LABEL_41:
  if ( v18 == 14 || v22 == 14 )
    goto LABEL_43;
LABEL_10:
  v148 = (_QWORD *)v20;
  v24 = sub_B080B0(v16);
  v27 = (__int64)v148;
  if ( v24 )
  {
    v63 = sub_B080B0(*v148);
    v27 = (__int64)v148;
    if ( v63 )
    {
      sub_8203A0((__int64)v160);
      sub_8203A0((__int64)&v170);
      v64 = *(_QWORD *)(v150 + 24);
      v153[0] = (void *)a1;
      v153[1] = v160;
      if ( (unsigned __int8)sub_883160((__int64 *)v153, v64) )
      {
        v104 = *(_QWORD *)(v150 + 16);
        v153[0] = (void *)a1;
        v153[1] = &v170;
        if ( (unsigned __int8)sub_883160((__int64 *)v153, v104) )
        {
          v106 = sub_8352E0(v170.m128i_i64, (__int64)v160, v105);
          v107 = v150;
          v108 = v106;
          if ( *(_BYTE *)(a1 + 8) == 1
            || v106 != 3
            || (v116 = sub_83D8C0(v150, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2160LL)),
                v107 = v150,
                !(unsigned __int8)sub_8211D0(v116)) )
          {
            v30 = sub_867120(a3, v108 + 1, v107);
            goto LABEL_79;
          }
          sub_A2E130(a1, v150, 2210, 0);
        }
      }
      else if ( *(_DWORD *)(a1 + 48) )
      {
        v65 = sub_820420(*(unsigned __int8 *)(a1 + 962), *(unsigned __int8 *)(a1 + 963));
        **(_BYTE **)(a1 + 24) |= v65;
        if ( v65 )
        {
          v66 = *(_QWORD *)(v150 + 16);
          v153[0] = (void *)a1;
          v153[1] = &v170;
          sub_883160((__int64 *)v153, v66);
        }
      }
      v30 = 0;
LABEL_79:
      sub_5FF3B0(v170.m128i_i64);
      sub_5FF3B0((__int64 *)v160);
      return v30;
    }
  }
  v28 = *(_QWORD *)(*(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v29 = *(_BYTE *)(v28 + 16);
  if ( v29 == 41 )
  {
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 41 )
      return (unsigned int)sub_89F0B0(a4[1], **a4, v28, v27);
    LOBYTE(v162) = (unsigned __int8)v162 | 1;
    v166 = v168;
    v172[0] |= 1u;
    v167 = 0x800000000LL;
    v175 = 0x800000000LL;
    v160[0] = nullptr;
    v160[1] = nullptr;
    v161 = 0;
    v165 = 0;
    v169 = 0;
    v170 = 0u;
    v171 = 0;
    v173 = 0;
    ptr = v176;
    v177 = 0;
    v67 = *(_QWORD *)(v150 + 16);
    v153[0] = (void *)a1;
    v153[1] = v160;
    LOBYTE(v154) = 0;
    if ( !(unsigned __int8)sub_871080((__int64)v153, v67, (__int64 *)v28, (__int64)v160, v25, v26) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v72 = sub_820420(*(unsigned __int8 *)(a1 + 962), *(unsigned __int8 *)(a1 + 963));
        v76 = *(__int64 **)(a1 + 24);
        *(_BYTE *)v76 |= v72;
        if ( v72 )
        {
          v77 = *(_QWORD *)(v150 + 24);
          v153[0] = (void *)a1;
          v153[1] = &v170;
          LOBYTE(v154) = 0;
          sub_871080((__int64)v153, v77, v76, v73, v74, v75);
        }
      }
      goto LABEL_85;
    }
    v109 = *(_QWORD *)(v150 + 24);
    v153[0] = (void *)a1;
    v153[1] = &v170;
    LOBYTE(v154) = 0;
    if ( !(unsigned __int8)sub_871080((__int64)v153, v109, v68, v69, v70, v71)
      || (!(unsigned __int8)sub_82A730((__int64)v160[0], (__int64)v160[1])
       || !(unsigned __int8)sub_82A730(v170.m128i_i64[0], v170.m128i_i64[1]))
      && (v169 || v177) )
    {
      goto LABEL_85;
    }
    LOBYTE(v110) = sub_820230((const __m128i *)v160, &v170);
    v30 = v110;
    if ( !(_BYTE)v110 )
    {
      v153[1] = (void *)a1;
      v155 = &v170;
      v153[0] = v160;
      v154 = &v150;
      if ( (unsigned int)(unsigned __int8)v14 - 14 <= 1 )
      {
        if ( !sub_69F610(v160) && v161 || !sub_69F610(&v170) && v171 )
        {
          v117 = sub_69F610(&v170);
          sub_82FE90((__int64 *)v153, 0x8E1u, !v117);
        }
        else if ( (unsigned __int8)sub_822B60(a1, (__int64 *)v160, v170.m128i_i64) )
        {
          sub_82FE90((__int64 *)v153, 0x8AFu, 0);
        }
        else if ( sub_821CE0((__int64 *)v160) || sub_821CE0(v170.m128i_i64) )
        {
          v121 = sub_821CE0((__int64 *)v160);
          sub_82FE90((__int64 *)v153, 0x8D4u, !v121);
        }
        else if ( (unsigned __int8)sub_81FA10((__int64 *)v160) || (unsigned __int8)sub_81FA10(v170.m128i_i64) )
        {
          v135 = sub_81FA10((__int64 *)v160);
          sub_82FE90((__int64 *)v153, 0x8E4u, v135 ^ 1);
        }
        else if ( sub_69F610(v160) && !v161 && sub_824700(*(_QWORD *)(a1 + 16), &v170) )
        {
          sub_82FE90((__int64 *)v153, 0x8DEu, 1);
        }
        else if ( sub_69F610(&v170) && !v171 && sub_824700(*(_QWORD *)(a1 + 16), (const __m128i *)v160) )
        {
          sub_82FE90((__int64 *)v153, 0x8DEu, 0);
        }
        else if ( sub_69F610(&v170) && sub_81FFE0((__int64 *)v160) || sub_69F610(v160) && sub_81FFE0(v170.m128i_i64) )
        {
          sub_82FE90((__int64 *)v153, 0x8E0u, 0);
        }
        else
        {
          v30 = sub_867120(a3, 0, v150);
        }
      }
      else
      {
        sub_82FE90((__int64 *)v153, 0x8DFu, 0);
      }
LABEL_86:
      if ( ptr != v176 )
        free(ptr);
      v78 = v166;
      if ( v166 == v168 )
        return v30;
LABEL_89:
      free(v78);
      return v30;
    }
    v149 = (((_BYTE)v14 + 55) & 0x3Fu) <= 4;
    if ( ((v172[0] | (unsigned __int8)v162) & 1) != 0
      || (((_BYTE)v14 + 55) & 0x3Fu) > 4
      || (*(__m128i *)v153 = _mm_load_si128((const __m128i *)v160),
          v122 = sub_69F240((__int64 *)v153),
          v123 = sub_821780(v122, (__int64)&v162, (__int64)v172, (bool *)v153),
          v124 = v123,
          LOBYTE(v153[0]))
      || v123 >= (unsigned int)v167
      || v123 >= (unsigned int)v175 )
    {
LABEL_186:
      v111 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)sub_6F6DE0(*(_QWORD *)(a1 + 16), *v15));
      v112 = v111 & v161;
      v113 = v171 & v111;
      if ( sub_69F600(v160) || !v149 )
        goto LABEL_188;
      *(__m128i *)v153 = _mm_load_si128((const __m128i *)v160);
      v118 = sub_69F240((__int64 *)v153);
      if ( !(unsigned __int8)sub_B19120(*(_QWORD *)(v118 & 0xFFFFFFFFFFFFFFF0LL), 0) )
      {
        v119 = sub_70E2F0(*(_QWORD *)(a1 + 16), v118);
        v120 = v113;
        if ( v112 >= v113 )
          v120 = v112;
        if ( v119 >= v120 )
        {
LABEL_188:
          if ( v112 < v113 )
          {
            v30 = sub_867120(a3, 1, v150);
          }
          else if ( v113 >= v112 )
          {
            v30 = sub_867120(a3, 2, v150);
          }
          else
          {
            v30 = sub_867120(a3, 3, v150);
          }
          goto LABEL_86;
        }
      }
      sub_A2E130(a1, v150, 110, 0);
LABEL_85:
      v30 = 0;
      goto LABEL_86;
    }
    v125 = *((_QWORD *)v166 + v123) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *((_QWORD *)v166 + v123) <= 7u || (*(_BYTE *)(v125 + 28) & 0x7Fu) - 47 > 2 )
    {
      v126 = *((_QWORD *)ptr + v123) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *((_QWORD *)ptr + v123) <= 7u )
      {
LABEL_291:
        sub_A2E240(a1, v150, 2267, 0);
        goto LABEL_186;
      }
      v125 = 0;
    }
    else
    {
      v126 = *((_QWORD *)ptr + v123) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *((_QWORD *)ptr + v123) <= 7u )
        goto LABEL_276;
    }
    if ( (*(_BYTE *)(v126 + 28) & 0x7Fu) - 47 <= 2 )
    {
      if ( v125 )
      {
        v127 = *(_QWORD *)(v125 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v125 + 16) & 4) != 0 )
          v127 = *(_QWORD *)v127;
        if ( (*(_BYTE *)(v127 + 8) & 0x7Fu) - 56 > 3 )
          BUG();
        if ( *(_BYTE *)(v127 + 9) >> 5 != 2 && ((*(_BYTE *)(v126 + 29) >> 5) & 3) != ((*(_BYTE *)(v125 + 29) >> 5) & 3) )
        {
          v128 = (unsigned __int8 **)sub_A2E240(a1, v150, 2269, 0);
          v129 = v128;
          if ( v128 )
          {
            sub_8356A0(v128, v125, 0xAu);
            sub_7A9230(v129, (*(_BYTE *)(v125 + 29) >> 5) & 3);
            sub_8356A0(v129, v126, 0xAu);
            sub_7A9230(v129, (*(_BYTE *)(v126 + 29) >> 5) & 3);
          }
          v130 = *(_QWORD *)(v125 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v125 + 16) & 4) != 0 )
            v130 = *(_QWORD *)v130;
          if ( (*(_BYTE *)(v130 + 8) & 0x7Fu) - 56 > 3 )
            v131 = 0;
          else
            v131 = v130 - 64;
          if ( v129 )
            sub_8356A0(v129, v131, 0xAu);
        }
      }
      else
      {
        v132 = (unsigned __int8 **)sub_A2E240(a1, v150, 2268, 0);
        v133 = *((_QWORD *)v166 + v124) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *((_QWORD *)v166 + v124) <= 7u || (*(_BYTE *)(v133 + 28) & 0x7Fu) - 57 > 2 )
          v133 = 0;
        if ( v132 )
          sub_8356A0(v132, v133, 0xAu);
        v134 = *(_QWORD *)(v126 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v126 + 16) & 4) != 0 )
          v134 = *(_QWORD *)v134;
        if ( (*(_BYTE *)(v134 + 8) & 0x7Fu) - 56 <= 3 )
          v125 = v134 - 64;
        if ( v132 )
        {
          sub_8356A0(v132, v125, 0xAu);
          sub_8356A0(v132, v126, 0xAu);
        }
      }
      goto LABEL_186;
    }
    if ( !v125 )
      goto LABEL_291;
LABEL_276:
    v143 = (unsigned __int8 **)sub_A2E240(a1, v150, 2268, 0);
    v144 = *((_QWORD *)ptr + v124);
    if ( v144 <= 7 || (v145 = v144 & 0xFFFFFFFFFFFFFFF8LL, (*(_BYTE *)(v145 + 28) & 0x7Fu) - 57 > 2) )
      v145 = 0;
    if ( v143 )
      sub_8356A0(v143, v145, 0xAu);
    v146 = *(_QWORD *)(v125 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v125 + 16) & 4) != 0 )
      v146 = *(_QWORD *)v146;
    if ( (*(_BYTE *)(v146 + 8) & 0x7Fu) - 56 > 3 )
      v147 = 0;
    else
      v147 = v146 - 64;
    if ( v143 )
    {
      sub_8356A0(v143, v147, 0xAu);
      sub_8356A0(v143, v125, 0xAu);
    }
    goto LABEL_186;
  }
  if ( v29 == 32 )
  {
    v160[0] = nullptr;
    v160[1] = &v162;
    v161 = 0x400000000LL;
    v171 = 0x400000000LL;
    v170.m128i_i64[0] = 0;
    v170.m128i_i64[1] = (__int64)v172;
    v85 = *(_QWORD *)(v150 + 16);
    v153[0] = (void *)a1;
    v153[1] = v160;
    if ( !(unsigned __int8)sub_854640((__int64 *)v153, v85) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v86 = sub_820420(*(unsigned __int8 *)(a1 + 962), *(unsigned __int8 *)(a1 + 963));
        **(_BYTE **)(a1 + 24) |= v86;
        if ( v86 )
        {
          v87 = *(_QWORD *)(v150 + 24);
          v153[0] = (void *)a1;
          v153[1] = &v170;
          sub_854640((__int64 *)v153, v87);
        }
      }
      goto LABEL_130;
    }
    v99 = *(_QWORD *)(v150 + 24);
    v153[0] = (void *)a1;
    v153[1] = &v170;
    if ( !(unsigned __int8)sub_854640((__int64 *)v153, v99) )
    {
LABEL_130:
      v30 = 0;
      goto LABEL_131;
    }
    if ( v160[0] > &byte_7 )
    {
      if ( (unsigned __int8)sub_783680((unsigned __int64)v160[0] & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v114 = (unsigned __int8 **)sub_A2E130(a1, v150, 2230, 0);
        if ( v114 )
          sub_8356A0(v114, (unsigned __int64)v160[0] & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
        goto LABEL_130;
      }
      v100 = v170.m128i_i64[0];
      if ( v170.m128i_i64[0] <= 7uLL )
      {
        if ( v160[0] > &byte_7 )
          goto LABEL_159;
        goto LABEL_181;
      }
    }
    else
    {
      v100 = v170.m128i_i64[0];
      if ( v170.m128i_i64[0] <= 7uLL )
        goto LABEL_181;
    }
    if ( (unsigned __int8)sub_783680(v100 & 0xFFFFFFFFFFFFFFF8LL) )
    {
      v115 = (unsigned __int8 **)sub_A2E130(a1, v150, 2230, 0);
      if ( v115 )
        sub_8356A0(v115, v170.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL, 0xAu);
      goto LABEL_130;
    }
    v101 = v170.m128i_i64[0];
    if ( v160[0] > &byte_7 )
    {
      if ( v170.m128i_i64[0] > 7uLL )
      {
        v136 = (unsigned __int64)v160[0] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(((unsigned __int64)v160[0] & 0xFFFFFFFFFFFFFFF8LL) + 28) & 0x7Fu) - 33 <= 3 )
        {
          v137 = sub_83DE60((unsigned __int64)v160[0] & 0xFFFFFFFFFFFFFFF8LL);
          v101 = v170.m128i_i64[0];
          if ( v137 )
          {
            v141 = (unsigned __int8 **)sub_A2E240(a1, v150, 2193, 0);
            if ( v141 )
              sub_8356A0(v141, v136, 0xAu);
            v101 = v170.m128i_i64[0];
          }
        }
        v138 = v101 & 0xFFFFFFFFFFFFFFF8LL;
        v139 = v138;
        if ( (*(_BYTE *)(v138 + 28) & 0x7Fu) - 33 <= 3 && sub_83DE60(v138) )
        {
          v142 = (unsigned __int8 **)sub_A2E240(a1, v150, 2193, 0);
          if ( v142 )
            sub_8356A0(v142, v139, 0xAu);
        }
        v140 = sub_8200B0((__int64)v160, (__int64)&v170);
        v102 = v150;
        v103 = 2 * v140;
        goto LABEL_160;
      }
      goto LABEL_159;
    }
    if ( v170.m128i_i64[0] > 7uLL )
    {
LABEL_159:
      v102 = v150;
      v103 = 0;
LABEL_160:
      v30 = sub_867120(a3, v103, v102);
LABEL_131:
      if ( (_BYTE *)v170.m128i_i64[1] != v172 )
        free((void *)v170.m128i_i64[1]);
      v78 = v160[1];
      if ( v160[1] == &v162 )
        return v30;
      goto LABEL_89;
    }
LABEL_181:
    v102 = v150;
    v103 = 2;
    goto LABEL_160;
  }
  if ( v29 != 13 || ((*(_WORD *)(v28 + 18) >> 3) & 0x1FF) != 0x1E7 )
    return (unsigned int)sub_89F0B0(a4[1], **a4, v28, v27);
  v172[0] |= 1u;
  ptr = v176;
  v170 = 0u;
  v175 = 0x800000000LL;
  v171 = 0;
  v173 = 0;
  v177 = 0;
  v93 = *(_QWORD *)(v150 + 16);
  v160[0] = (void *)a1;
  v160[1] = &v170;
  LOBYTE(v161) = 0;
  if ( (unsigned __int8)sub_871080((__int64)v160, v93, (__int64 *)v28, v27, v25, v26)
    && (v98 = *(_QWORD *)(v150 + 24),
        v160[0] = (void *)a1,
        v160[1] = &v170,
        LOBYTE(v161) = 0,
        (unsigned __int8)sub_871080((__int64)v160, v98, v94, v95, v96, v97)) )
  {
    v30 = sub_867120(a3, 2, v150);
  }
  else
  {
    v30 = 0;
  }
  v78 = ptr;
  if ( ptr != v176 )
    goto LABEL_89;
  return v30;
}

