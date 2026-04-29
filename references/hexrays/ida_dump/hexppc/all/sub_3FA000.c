__int64 __fastcall sub_3FA000(__int64 a1, __m128 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v10; // rbx
  char v11; // r15
  int v13; // esi
  __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // r13d
  __int64 v17; // rdx
  int v18; // eax
  signed int v19; // ebp
  __int64 v20; // rbx
  signed int v21; // eax
  unsigned __int16 v22; // r11
  __int64 v23; // rax
  char *v24; // rsi
  char *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // r15
  unsigned __int64 v29; // r8
  _QWORD *v30; // r14
  _QWORD *v31; // r9
  __int64 v32; // rax
  _BOOL4 v33; // r11d
  __int16 v34; // bp
  _QWORD *v35; // rax
  __int64 v36; // rbx
  int dtype_size; // eax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // rdx
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rbx
  unsigned __int8 v57; // r14
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r10
  unsigned __int16 v64; // r11
  int v65; // r14d
  _DWORD *v66; // rdi
  __int64 v67; // rsi
  __int64 (__fastcall *v68)(_DWORD *, unsigned int); // rax
  int v69; // ecx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rbp
  __int16 v73; // bx
  _QWORD *v74; // rax
  unsigned __int8 v75; // al
  unsigned __int8 v76; // al
  unsigned __int8 v77; // al
  unsigned __int8 v78; // al
  unsigned __int8 v79; // al
  __int64 v80; // r8
  __int64 v81; // rax
  unsigned __int8 v82; // al
  unsigned int v83; // r15d
  int v84; // eax
  int v85; // eax
  unsigned int v86; // r13d
  unsigned __int8 v87; // al
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  unsigned int v91; // ebx
  unsigned __int8 v92; // al
  unsigned int v93; // r8d
  char v94; // r8
  char v95; // r8
  unsigned __int16 v96; // ax
  char v97; // r9
  __int64 v98; // rcx
  unsigned __int16 v99; // ax
  char v100; // r8
  unsigned __int16 v101; // ax
  char v102; // r14
  __int64 v103; // rdx
  signed int v104; // r13d
  unsigned __int8 v105; // al
  char v106; // r9
  char v107; // r8
  signed int v108; // ebx
  unsigned __int8 v109; // al
  unsigned __int8 v110; // al
  signed int v111; // ebx
  unsigned __int8 v112; // al
  unsigned __int8 v113; // al
  signed int v114; // ebx
  unsigned __int8 v115; // al
  unsigned __int8 v116; // al
  unsigned __int8 v117; // al
  unsigned __int8 v118; // al
  unsigned __int8 v119; // al
  unsigned __int8 v120; // al
  int v121; // r8d
  __int64 v122; // rdx
  int v123; // eax
  unsigned __int16 v124; // r13
  signed int v125; // r14d
  unsigned __int8 v126; // al
  unsigned __int16 v127; // r13
  signed int v128; // r14d
  unsigned __int8 v129; // al
  unsigned __int8 v130; // al
  unsigned __int8 v131; // al
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdx
  unsigned __int8 v135; // al
  signed int v136; // [rsp+18h] [rbp-270h]
  __int64 v137; // [rsp+20h] [rbp-268h]
  __int64 v138; // [rsp+20h] [rbp-268h]
  _QWORD *v139; // [rsp+20h] [rbp-268h]
  __int64 v140; // [rsp+20h] [rbp-268h]
  __int64 v141; // [rsp+20h] [rbp-268h]
  unsigned __int64 v142; // [rsp+20h] [rbp-268h]
  unsigned __int64 v143; // [rsp+28h] [rbp-260h]
  _BOOL4 v144; // [rsp+28h] [rbp-260h]
  unsigned __int8 v145; // [rsp+37h] [rbp-251h] BYREF
  __int64 v146; // [rsp+38h] [rbp-250h] BYREF
  __m128 v147; // [rsp+40h] [rbp-248h] BYREF
  _BYTE v148[24]; // [rsp+50h] [rbp-238h] BYREF
  __int128 v149; // [rsp+68h] [rbp-220h]
  __int64 v150; // [rsp+78h] [rbp-210h]
  __int128 v151; // [rsp+80h] [rbp-208h]
  _OWORD v152[3]; // [rsp+90h] [rbp-1F8h] BYREF
  __int64 v153; // [rsp+C0h] [rbp-1C8h]
  int v154; // [rsp+C8h] [rbp-1C0h]
  __int64 v155; // [rsp+D0h] [rbp-1B8h]
  char v156; // [rsp+D8h] [rbp-1B0h]
  __int128 v157; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v158; // [rsp+F0h] [rbp-198h]
  __int64 v159; // [rsp+F8h] [rbp-190h]
  __int64 v160; // [rsp+100h] [rbp-188h]
  _BYTE v161[6]; // [rsp+108h] [rbp-180h] BYREF
  __int16 v162; // [rsp+10Eh] [rbp-17Ah]
  __int64 v163; // [rsp+130h] [rbp-158h]
  __int64 v164; // [rsp+140h] [rbp-148h]
  _QWORD v165[8]; // [rsp+248h] [rbp-40h] BYREF

  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 40);
  v165[0] = __readfsqword(0x28u);
  if ( *(_QWORD *)(v7 + 40) == v8 )
  {
    v36 = *(int *)(*(_QWORD *)(a1 + 832) + 480LL);
    dtype_size = get_dtype_size(0);
    v38 = sub_1D2710(a1, 3u, dtype_size, 0, 0x3BEA45E214ADDC55LL, v36, 0);
    *(_DWORD *)(v38 + 4) |= 0x80u;
    if ( (unsigned int)sub_CC530(0xBC4u) == 9 )
      sub_3F4720(a1);
    v39 = sub_1CAFA0(*(_QWORD *)(a1 + 8));
    v146 = 0;
    get_func_frame(&v146, v39);
    v150 = 0;
    v40 = *(_QWORD *)(a1 + 832);
    v153 = 1;
    v154 = -1;
    v155 = 0;
    v156 = 0;
    memset(v148, 0, sizeof(v148));
    v149 = 0;
    v151 = 0;
    v152[0] = 0;
    v41 = qvector_reserve(&v148[16], 0, 10, 1);
    *(_QWORD *)&v148[16] = v41;
    *(_QWORD *)&v149 = 10;
    *(_QWORD *)v41 = 0x6F745F6465766173LL;
    *(_BYTE *)(v41 + 8) = 99;
    *(_BYTE *)(*(_QWORD *)&v148[16] + 9LL) = 0;
    if ( (unsigned int)find_tinfo_udt_member(v148, v146, 3) == -1 )
      v137 = -1;
    else
      v137 = *(_QWORD *)v148 >> 3;
    clear_tinfo_t(v152);
    if ( v150 )
    {
      *(_QWORD *)&v151 = 0;
      qfree(v150);
    }
    if ( *(_QWORD *)&v148[16] )
    {
      *(_QWORD *)&v149 = 0;
      qfree(*(_QWORD *)&v148[16]);
    }
    *(_QWORD *)(v40 + 4440) = v137;
    v42 = *(_QWORD *)(a1 + 832);
    v150 = 0;
    v153 = 1;
    v154 = -1;
    v155 = 0;
    v156 = 0;
    memset(v148, 0, sizeof(v148));
    v149 = 0;
    v151 = 0;
    v152[0] = 0;
    v43 = qvector_reserve(&v148[16], 0, 10, 1);
    *(_QWORD *)&v148[16] = v43;
    *(_QWORD *)&v149 = 10;
    *(_QWORD *)v43 = 0x6C5F7265646E6573LL;
    *(_BYTE *)(v43 + 8) = 114;
    *(_BYTE *)(*(_QWORD *)&v148[16] + 9LL) = 0;
    if ( (unsigned int)find_tinfo_udt_member(v148, v146, 3) == -1 )
      v138 = -1;
    else
      v138 = *(_QWORD *)v148 >> 3;
    clear_tinfo_t(v152);
    if ( v150 )
    {
      *(_QWORD *)&v151 = 0;
      qfree(v150);
    }
    if ( *(_QWORD *)&v148[16] )
    {
      *(_QWORD *)&v149 = 0;
      qfree(*(_QWORD *)&v148[16]);
    }
    *(_QWORD *)(v42 + 4448) = v138;
    v44 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 4448LL);
    if ( v44 == -1 && *(_BYTE *)(*(_QWORD *)(a1 + 800) + 148LL) )
    {
      v140 = *(_QWORD *)(a1 + 832);
      v150 = 0;
      v153 = 1;
      v154 = -1;
      v155 = 0;
      v156 = 0;
      memset(v148, 0, sizeof(v148));
      v149 = 0;
      v151 = 0;
      v152[0] = 0;
      *(_QWORD *)&v148[16] = qvector_reserve(&v148[16], 0, 11, 1);
      *(_QWORD *)&v149 = 11;
      strcpy(*(char **)&v148[16], "back_chain");
      if ( (unsigned int)find_tinfo_udt_member(v148, v146, 3) != -1 )
        v44 = *(_QWORD *)v148 >> 3;
      clear_tinfo_t(v152);
      v80 = v140;
      if ( v150 )
      {
        *(_QWORD *)&v151 = 0;
        qfree(v150);
        v80 = v140;
      }
      if ( *(_QWORD *)&v148[16] )
      {
        v141 = v80;
        *(_QWORD *)&v149 = 0;
        qfree(*(_QWORD *)&v148[16]);
        v80 = v141;
      }
      *(_QWORD *)(v80 + 4448) = v44;
    }
    v45 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)v148 = 32;
    *(_QWORD *)&v149 = 0;
    *(_OWORD *)&v148[8] = 0;
    get_stkarg_area_info(v148, *(unsigned int *)(v45 + 72));
    v46 = *(_QWORD *)(a1 + 8);
    a2 = _mm_loadh_ps((const double *)&v148[8]);
    v147 = a2;
    sub_F4080(v46, (__int64)&v147);
    if ( *(_WORD *)(a1 + 48) == 306 )
    {
      v70 = *(_QWORD *)(a1 + 8);
      v71 = *(_QWORD *)(a1 + 40);
      v72 = *(_QWORD *)(v70 + 920);
      if ( *(_QWORD *)(v70 + 40) != v71 && v71 != *(_QWORD *)(v72 + 128) )
      {
        if ( !under_debugger )
          sub_37EEE0(0xCBF7u, (__int64)&v147, *(double *)a2.m128_u64);
        BUG();
      }
      *(_DWORD *)(v72 + 120) |= 2u;
      v73 = *(_WORD *)(a1 + 70);
      v74 = v161;
      v157 = -1;
      a2.m128_u64[0] = 0;
      v158 = -1;
      v159 = 0;
      v160 = 0;
      do
      {
        *(_WORD *)v74 = 0;
        v74 += 5;
        *((_WORD *)v74 - 19) = 0;
        *((_WORD *)v74 - 18) = 0;
        *((_DWORD *)v74 - 2) = 0;
        *((_WORD *)v74 - 17) = 0;
        *((_OWORD *)v74 - 2) = 0;
        *(v74 - 2) = 0;
      }
      while ( v165 != v74 );
      if ( (int)decode_insn(&v157, *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50), v165, v47, 0, 0, 0.0) > 0
        && (_WORD)v159 == 186
        && v73 == v162
        && (v163 & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
      {
        *(_QWORD *)(*(_QWORD *)(v72 + 56) + 4448LL) = v164;
      }
    }
    clear_tinfo_t(&v146);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD *)(a1 + 40);
  }
  v10 = *(_QWORD *)(v7 + 920);
  if ( *(_QWORD *)(v10 + 128) == v8 && *(_WORD *)(a1 + 48) == 306 )
  {
    *(_DWORD *)(v10 + 120) |= 2u;
    v34 = *(_WORD *)(a1 + 70);
    v35 = v161;
    v157 = -1;
    a2.m128_u64[0] = 0;
    v158 = -1;
    v159 = 0;
    v160 = 0;
    do
    {
      *(_WORD *)v35 = 0;
      v35 += 5;
      *((_WORD *)v35 - 19) = 0;
      *((_WORD *)v35 - 18) = 0;
      *((_DWORD *)v35 - 2) = 0;
      *((_WORD *)v35 - 17) = 0;
      *((_OWORD *)v35 - 2) = 0;
      *(v35 - 2) = 0;
    }
    while ( v35 != v165 );
    if ( (int)decode_insn(&v157, *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50), v165, 0, a6, a7, 0.0) > 0
      && (_WORD)v159 == 186
      && v34 == v162
      && (v163 & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
    {
      *(_QWORD *)(*(_QWORD *)(v10 + 56) + 4448LL) = v164;
    }
  }
  v11 = *(_BYTE *)(a1 + 384);
  if ( v11 )
  {
    if ( *(_WORD *)(a1 + 48) == 292 )
    {
      v48 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL);
      if ( v11 == 2 )
      {
        *(_DWORD *)(v48 + 120) = 2;
      }
      else
      {
        v49 = *(_DWORD *)(v48 + 120);
        if ( (v49 & 2) == 0 )
          *(_DWORD *)(v48 + 120) = v49 | 1;
      }
    }
    return 0;
  }
  sub_3E99E0(*(_QWORD *)(a1 + 832));
  v13 = *(unsigned __int16 *)(a1 + 48);
  if ( (_WORD)v13 == 209
    && *(_BYTE *)(a1 + 65) == 1
    && *(_WORD *)(a1 + 70) == 1
    && (*(_QWORD *)(a1 + 104) & 0xFFFF00000000FF00LL) == 0x1000000000400LL )
  {
    v56 = *(_QWORD *)(a1 + 8);
    if ( sub_1CC170(v56, *(_QWORD *)(a1 + 40)) == *(_QWORD *)(v56 + 136) )
      return 0;
    v13 = *(unsigned __int16 *)(a1 + 48);
  }
  v14 = *(_QWORD *)(a1 + 840);
  v15 = v14 + 16LL * *(_QWORD *)(a1 + 848);
  if ( v14 != v15 )
  {
    while ( *(_QWORD *)(a1 + 40) != *(_QWORD *)v14 || (_WORD)v13 != *(_WORD *)(v14 + 8) )
    {
      v14 += 16;
      if ( v15 == v14 )
        goto LABEL_13;
    }
    if ( v15 != v14 )
      return 0;
  }
LABEL_13:
  v16 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 800) + 8LL);
  v18 = *(_DWORD *)(v17 + 104);
  if ( v18 <= v13 && v13 < *(_DWORD *)(v17 + 108) )
    v16 = *(_DWORD *)(*(_QWORD *)(v17 + 112) + 16LL * (v13 - v18) + 8);
  v19 = sub_3F4140(a1, v16, 0, *(double *)a2.m128_u64);
  v20 = (int)sub_3F4140(a1, v16, 1u, *(double *)a2.m128_u64);
  v21 = sub_3F4140(a1, v16, 2u, *(double *)a2.m128_u64);
  *(_BYTE *)(a1 + 864) = 0;
  v136 = v21;
  if ( (*(_QWORD *)(a1 + 48) & 0x80000FFFFLL) != 0x80000000DLL )
    goto LABEL_17;
  v54 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
  v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  if ( v54 != v55 )
  {
    v55 &= v54;
    if ( v54 == -1 )
      v55 = -1;
  }
  if ( !(unsigned __int8)sub_3F45C0(a1, v55) )
  {
LABEL_17:
    v22 = *(_WORD *)(a1 + 48);
    v23 = 969;
    v24 = (char *)&unk_421EE0;
    while ( v23 > 0 )
    {
      while ( 1 )
      {
        v25 = &v24[v23 & 0xFFFFFFFFFFFFFFFELL];
        if ( *(_WORD *)v25 >= v22 )
          break;
        v24 = v25 + 2;
        v23 = v23 - 1 - (v23 >> 1);
        if ( v23 <= 0 )
          goto LABEL_21;
      }
      v23 >>= 1;
    }
LABEL_21:
    if ( v24 != (char *)&unk_422672 && v22 >= *(_WORD *)v24 )
    {
      v57 = 2;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
        v57 = 7;
      v58 = (__int64)&v145;
      LODWORD(v146) = 0;
      if ( !(unsigned __int8)sub_3E5AC0(&v146, (char *)&v145, v22) )
      {
        if ( v64 > 0x50Cu )
        {
          if ( v64 == 2497 )
          {
            v87 = 4;
LABEL_172:
            sub_3F2300(a1, 1, v87, v19, v20, v136, *(double *)a2.m128_u64);
          }
          else if ( v64 > 0x9C1u )
          {
            if ( v64 != 2498 )
              goto LABEL_23;
            v82 = 4;
LABEL_152:
            sub_3F2300(a1, 0, v82, v19, v20, v136, *(double *)a2.m128_u64);
          }
          else if ( v64 == 2082 )
          {
LABEL_99:
            if ( !(unsigned __int8)sub_3EA610(a1, (__int64)&v145, *(double *)a2.m128_u64, v59, v60, v61, v62) )
              goto LABEL_23;
          }
          else if ( (unsigned __int16)(v64 - 2213) > 2u )
          {
            goto LABEL_23;
          }
        }
        else
        {
          if ( !v64 )
            goto LABEL_23;
          switch ( v64 )
          {
            case 1u:
            case 2u:
            case 5u:
            case 0xD4u:
            case 0xD5u:
            case 0xD7u:
            case 0x11Bu:
            case 0x483u:
            case 0x484u:
            case 0x49Du:
            case 0x49Eu:
            case 0x49Fu:
              goto LABEL_102;
            case 3u:
            case 7u:
            case 8u:
            case 0xD6u:
            case 0xD8u:
            case 0xD9u:
              if ( !(unsigned __int8)sub_3ED510(a1, (unsigned int)v19, v20, v136, *(double *)a2.m128_u64) )
                goto LABEL_23;
              break;
            case 4u:
              goto LABEL_220;
            case 6u:
              sub_3E9FE0((_QWORD *)a1, a1 + 144, v136);
LABEL_220:
              v86 = 12;
              goto LABEL_165;
            case 9u:
            case 0xAu:
            case 0x2Du:
            case 0x97u:
            case 0x99u:
            case 0x9Au:
            case 0x9Bu:
            case 0xE2u:
              if ( !(unsigned __int8)sub_3EE490(a1, v19, v20, v136, *(double *)a2.m128_u64) )
                goto LABEL_23;
              break;
            case 0xBu:
            case 0x486u:
              goto LABEL_154;
            case 0xCu:
              sub_3E9F60(a1, (const __m128i *)(a1 + 144), v136);
              goto LABEL_154;
            case 0xDu:
              if ( (*(_QWORD *)(a1 + 48) & 0x80000FFFFLL) == 0x80000000DLL
                && (unsigned int)get_dword(*(_QWORD *)(a1 + 80), &v145, 0x80000000DLL, v60) == 1317011489
                && (v132 = *(_QWORD *)(a1 + 80), v133 = v132 + 4, v132 != -5) )
              {
                v134 = *(_QWORD *)(a1 + 832);
                v135 = 2;
                if ( *(_DWORD *)(v134 + 84) == 8 )
                  v135 = 7;
                sub_3E9B90(a1, 3u, v135, v133, 0x3BEA45E214ADDC55LL, *(int *)(v134 + 452), 0);
                *(_BYTE *)(a1 + 864) = 1;
              }
              else
              {
                sub_3EA0C0(a1);
                if ( !(unsigned __int8)sub_3EA440(a1, a1 + 64, 0xFFFFFFFFLL, v88, v89, v90) )
                  sub_3EA260(a1, a1 + 64);
              }
              break;
            case 0xEu:
            case 0xFu:
            case 0x10u:
            case 0x140u:
            case 0x141u:
            case 0x142u:
            case 0x143u:
            case 0x144u:
            case 0x145u:
            case 0x146u:
            case 0x147u:
            case 0x148u:
            case 0x149u:
            case 0x14Au:
            case 0x14Bu:
            case 0x14Cu:
            case 0x14Du:
            case 0x14Eu:
            case 0x14Fu:
            case 0x150u:
              goto LABEL_99;
            case 0x11u:
            case 0x12u:
            case 0xE5u:
            case 0xE6u:
            case 0xE9u:
            case 0xEAu:
            case 0x488u:
              if ( (*(_BYTE *)(a1 + 52) & 0x10) == 0 )
                LOBYTE(v62) = 2;
              sub_3ECA40(a1, (unsigned __int8)v62, 1, 0, *(double *)a2.m128_u64);
              break;
            case 0x13u:
            case 0x14u:
            case 0xE7u:
            case 0xE8u:
            case 0xEBu:
            case 0xECu:
            case 0x48Du:
              if ( (*(_BYTE *)(a1 + 52) & 0x10) == 0 )
                LOBYTE(v62) = 2;
              sub_3ECA40(a1, (unsigned __int8)v62, 0, 0, *(double *)a2.m128_u64);
              break;
            case 0x17u:
            case 0x18u:
            case 0x19u:
            case 0x1Au:
            case 0x1Bu:
            case 0x1Cu:
            case 0x1Du:
            case 0x1Eu:
              if ( !(unsigned __int8)sub_3EAF90(a1, v61, v20, v136) )
                goto LABEL_23;
              break;
            case 0x26u:
              v106 = 7;
              v107 = 1;
              goto LABEL_242;
            case 0x27u:
              v106 = 7;
              v107 = 0;
              goto LABEL_242;
            case 0x28u:
              v106 = 2;
              v107 = 1;
              goto LABEL_242;
            case 0x29u:
              v106 = 2;
              v107 = 0;
LABEL_242:
              sub_3EE1E0(a1, v19, v20, v136, v107, v106 & 7);
              break;
            case 0x2Eu:
              v105 = 0;
              goto LABEL_238;
            case 0x2Fu:
              v105 = 1;
              goto LABEL_238;
            case 0x30u:
              v105 = 2;
LABEL_238:
              v145 = v105;
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                sub_1D2C40(a1, v105, v62, v19, v19, 1u);
              else
                sub_1D2C40(a1, v105, v62, v20, v19, 1u);
              goto LABEL_287;
            case 0x32u:
              sub_3F0EB0(a1, 0x45u, v19, v20, v136, 0);
              break;
            case 0x33u:
              sub_3F0EB0(a1, 0x45u, v19, v20, v136, 1);
              break;
            case 0x34u:
              sub_3F1790(a1, v19, v20, 0x41u, 0);
              break;
            case 0x35u:
            case 0x36u:
              sub_3ECA40(a1, 7, 0, 1u, *(double *)a2.m128_u64);
              break;
            case 0x37u:
            case 0x38u:
              sub_3F1660(a1, v19, v20, 0x3Fu, 0);
              break;
            case 0x39u:
            case 0x3Au:
              sub_3F1660(a1, v19, v20, 0x3Fu, 1);
              break;
            case 0x3Bu:
              sub_3F0EB0(a1, 0x48u, v19, v20, v136, 0);
              break;
            case 0x3Cu:
              sub_3F0EB0(a1, 0x48u, v19, v20, v136, 1);
              break;
            case 0x3Du:
            case 0x3Eu:
            case 0x40u:
            case 0x41u:
            case 0x46u:
            case 0x47u:
            case 0x48u:
            case 0x49u:
              sub_3E99E0(v63);
              if ( !(unsigned __int8)sub_3F1060(a1, *(double *)a2.m128_u64) )
                goto LABEL_23;
              break;
            case 0x3Fu:
              sub_3E9B90(a1, 4u, 4u, (int)v20, 0x3BEA45E214ADDC55LL, v19, -1);
              sub_3EC840(a1, v19, 8);
              break;
            case 0x42u:
              sub_3F0EB0(a1, 0x47u, v19, v20, v136, 0);
              break;
            case 0x43u:
              sub_3F0EB0(a1, 0x47u, v19, v20, v136, 1);
              break;
            case 0x45u:
              sub_3E9B90(a1, 0x44u, 7u, (int)v20, 0x3BEA45E214ADDC55LL, v19, 0);
              sub_3EC840(a1, v19, 8);
              break;
            case 0x4Bu:
              v98 = *(_QWORD *)(a1 + 40);
              v147 = (__m128)0xFFFFFFFF00000000LL;
              sub_3F0D20(a1, (__int64)&v147, v20, v98);
              *(_DWORD *)&v148[8] = v19;
              *(_QWORD *)v148 = 0x800000001LL;
              sub_1D2850(a1, 67, (unsigned __int8 *)&v147, nullptr, v148);
              sub_3EC840(a1, v19, 8);
              sub_119360((__int64)v148);
              sub_119360((__int64)&v147);
              break;
            case 0x50u:
              sub_3F0EB0(a1, 0x46u, v19, v20, v136, 0);
              break;
            case 0x51u:
              sub_3F0EB0(a1, 0x46u, v19, v20, v136, 1);
              break;
            case 0x7Au:
              sub_3EB1B0(a1, *(_WORD *)(a1 + 70), *(_WORD *)(a1 + 110));
              break;
            case 0x7Cu:
              sub_3F0B50(a1, *(double *)a2.m128_u64);
              break;
            case 0x7Du:
              sub_3F9F90(a1, v19);
              break;
            case 0x84u:
            case 0x192u:
              sub_3F2010(a1, *(unsigned __int8 *)(a1 + 72), v20, *(double *)a2.m128_u64);
              break;
            case 0x90u:
              v95 = 3;
              goto LABEL_198;
            case 0x91u:
              v95 = 2;
              goto LABEL_198;
            case 0x92u:
              v93 = 3;
              goto LABEL_187;
            case 0x93u:
              v93 = 2;
              goto LABEL_187;
            case 0x94u:
              v95 = 1;
LABEL_198:
              sub_3EE050(a1, (unsigned int)v19, v20, v136, v95, *(double *)a2.m128_u64);
              break;
            case 0x95u:
              sub_3E9B90(a1, 0xEu, v57, (int)v20, v136, v19, 0);
              sub_3EC840(a1, v19, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x96u:
            case 0x48Eu:
              v93 = 1;
LABEL_187:
              LODWORD(v146) = v93;
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                sub_3EDD60(a1, v19, v19, v20, v93, *(double *)a2.m128_u64);
              else
                sub_3EDD60(a1, v19, v20, v136, v93, *(double *)a2.m128_u64);
              break;
            case 0x98u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                sub_3E9B90(a1, 5u, v57, v19, 0x3BEA45E214ADDC55LL, v19, 0);
              else
                sub_3E9B90(a1, 5u, v57, (int)v20, 0x3BEA45E214ADDC55LL, v19, 0);
              v91 = sub_3E9B60(*(_QWORD *)(a1 + 832), 5, *(double *)a2.m128_u64);
              v92 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v92 = 7;
              sub_3E9CF0(a1, 1, v92, v91);
              if ( (*(_BYTE *)(a1 + 52) & 1) != 0 )
                sub_3E8330(a1, v19, v91, 0);
              goto LABEL_287;
            case 0x9Cu:
            case 0x48Fu:
              goto LABEL_162;
            case 0x9Du:
              sub_3E9FE0((_QWORD *)a1, a1 + 144, v136);
              goto LABEL_162;
            case 0x9Eu:
            case 0x164u:
            case 0x19Eu:
            case 0x2EAu:
            case 0x2F4u:
              sub_3E9B90(a1, 0x3Au, 0, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
              break;
            case 0xA0u:
              sub_3F01A0(a1, v19, v20, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), 63, *(double *)a2.m128_u64);
              break;
            case 0xA1u:
              sub_3F01A0(a1, v19, v20, *(_WORD *)(a1 + 150), 0, *(_BYTE *)(a1 + 177), *(double *)a2.m128_u64);
              break;
            case 0xA2u:
              v101 = *(_WORD *)(a1 + 150);
              v11 = *(_BYTE *)(a1 + 176);
              v102 = 63 - v101;
              goto LABEL_226;
            case 0xA3u:
              v101 = *(_WORD *)(a1 + 150);
              v102 = 63;
              v11 = *(_BYTE *)(a1 + 176);
              goto LABEL_226;
            case 0xA4u:
              v101 = *(_WORD *)(a1 + 150);
              v102 = *(_BYTE *)(a1 + 177);
              goto LABEL_226;
            case 0xA5u:
              v99 = *(_WORD *)(a1 + 150);
              v100 = *(_BYTE *)(a1 + 176);
              goto LABEL_224;
            case 0xA6u:
              sub_3EF5C0(
                a1,
                v19,
                v20,
                *(_WORD *)(a1 + 150),
                *(_BYTE *)(a1 + 176),
                *(_BYTE *)(a1 + 177),
                *(double *)a2.m128_u64);
              break;
            case 0xA7u:
              v96 = *(_WORD *)(a1 + 150);
              v11 = *(_BYTE *)(a1 + 176);
              v97 = *(_BYTE *)(a1 + 177);
              goto LABEL_203;
            case 0xA8u:
              v11 = *(_BYTE *)(a1 + 176);
              v94 = *(_BYTE *)(a1 + 177);
              goto LABEL_192;
            case 0xACu:
            case 0xADu:
            case 0xAEu:
            case 0xAFu:
            case 0xB0u:
            case 0xB1u:
            case 0xB2u:
            case 0xB3u:
            case 0x4A7u:
            case 0x4A8u:
              goto LABEL_329;
            case 0xE3u:
              goto LABEL_274;
            case 0xE4u:
              sub_3E9F60(a1, (const __m128i *)(a1 + 144), v136);
LABEL_274:
              v83 = 21;
              goto LABEL_155;
            case 0x117u:
            case 0x4ACu:
              break;
            case 0x118u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                sub_3E9B90(a1, 7u, v57, v19, 0x3BEA45E214ADDC55LL, v19, 0);
              else
                sub_3E9B90(a1, 7u, v57, (int)v20, 0x3BEA45E214ADDC55LL, v19, 0);
              goto LABEL_287;
            case 0x119u:
            case 0x49Bu:
            case 0x49Cu:
              sub_3F0AD0(a1, v19, v20);
              break;
            case 0x11Au:
              goto LABEL_164;
            case 0x11Cu:
              sub_3E9FE0((_QWORD *)a1, a1 + 144, v136);
LABEL_164:
              v86 = 13;
LABEL_165:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
              {
                if ( *(_BYTE *)(a1 + 145) )
                  sub_3E9B90(a1, v86, v57, (int)v20, v136, v19, 0);
                else
                  sub_3E9B90(a1, v86, v57, v19, (int)v20, v19, 0);
              }
              else
              {
                sub_3EB290(a1, a1 + 104, v20);
                sub_3E9B90(a1, v86, v57, (int)v20, v136, v19, 0);
              }
              goto LABEL_287;
            case 0x11Du:
              goto LABEL_160;
            case 0x11Eu:
              sub_3E9FE0((_QWORD *)a1, a1 + 104, v20);
LABEL_160:
              sub_3E9B90(a1, 4u, v57, (int)v20, 0x3BEA45E214ADDC55LL, v19, 0);
              break;
            case 0x11Fu:
              sub_3EAF90(a1, 25, v19, v19);
              break;
            case 0x120u:
              sub_3EAF90(a1, 27, v20, v20);
              break;
            case 0x121u:
              sub_3EAF90(a1, 28, v20, v20);
              break;
            case 0x122u:
              sub_3EAF90(a1, 30, v19, v19);
              break;
            case 0x124u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                LODWORD(v20) = v19;
              sub_3E9B90(a1, 4u, v57, (int)v20, 0x3BEA45E214ADDC55LL, *(int *)(v63 + 452), 0);
              v122 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 920LL);
              if ( *(_BYTE *)(a1 + 384) == 2 )
              {
                *(_DWORD *)(v122 + 120) = 2;
              }
              else
              {
                v123 = *(_DWORD *)(v122 + 120);
                if ( (v123 & 2) == 0 )
                  *(_DWORD *)(v122 + 120) = v123 | 1;
              }
              break;
            case 0x125u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                LODWORD(v20) = v19;
              sub_3E9B90(a1, 4u, v57, (int)v20, 0x3BEA45E214ADDC55LL, *(int *)(v63 + 460), 0);
              break;
            case 0x132u:
              sub_3E9B90(a1, 4u, v57, *(int *)(v63 + 452), 0x3BEA45E214ADDC55LL, v19, 0);
              break;
            case 0x133u:
              sub_3E9B90(a1, 4u, v57, *(int *)(v63 + 460), 0x3BEA45E214ADDC55LL, v19, 0);
              break;
            case 0x151u:
              sub_3EEF90(a1, v19, v20, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), *(double *)a2.m128_u64);
              break;
            case 0x152u:
              sub_3EEDE0(a1, v19, v20, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), *(double *)a2.m128_u64);
              break;
            case 0x153u:
              sub_3EF7C0(a1, v19, v20, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176));
              break;
            case 0x154u:
              sub_3EF640(a1, v19, v20, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176));
              break;
            case 0x155u:
            case 0x156u:
              v96 = *(_WORD *)(a1 + 150);
              v97 = 31;
              if ( v64 != 341 )
                v96 = 32 - v96;
LABEL_203:
              sub_3EEB70(a1, v19, v20, v96, v11, v97, *(double *)a2.m128_u64);
              break;
            case 0x157u:
              v94 = 31;
LABEL_192:
              sub_3EF2D0(a1, v19, v20, v11, v94, *(double *)a2.m128_u64);
              break;
            case 0x158u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
                goto LABEL_329;
              v124 = *(_WORD *)(a1 + 150);
              v125 = sub_3E9B60(v63, (__int64)&v145, *(double *)a2.m128_u64);
              sub_3E9CF0(a1, v124, 0, v125);
              sub_3E9B90(a1, 0x16u, 2u, (int)v20, v125, v19, 0);
              sub_3EC840(a1, v19, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x159u:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) != 0 )
              {
LABEL_329:
                sub_3F0300(a1, (unsigned __int8 *)(unsigned int)v19, v20, v136, *(double *)a2.m128_u64);
              }
              else
              {
                v127 = *(_WORD *)(a1 + 150);
                v128 = sub_3E9B60(v63, (__int64)&v145, *(double *)a2.m128_u64);
                sub_3E9CF0(a1, v127, 0, v128);
                sub_3E9B90(a1, 0x17u, 2u, (int)v20, v128, v19, 0);
                sub_3EC840(a1, v19, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              }
              break;
            case 0x15Au:
              sub_3EE990(a1, (unsigned int)v19, v20, *(_BYTE *)(a1 + 150), 31, *(double *)a2.m128_u64);
              sub_3EC840(a1, v19, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x15Bu:
              sub_3EE990(a1, (unsigned int)v19, v20, 0, 31 - *(_BYTE *)(a1 + 150), *(double *)a2.m128_u64);
              sub_3EC840(a1, v19, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x15Cu:
              sub_3EF120(a1, v19, v20, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), *(double *)a2.m128_u64);
              break;
            case 0x193u:
              sub_3F1D20(a1, *(unsigned __int8 *)(a1 + 112), v19, *(double *)a2.m128_u64);
              break;
            case 0x194u:
              v121 = -1;
              goto LABEL_301;
            case 0x195u:
              v121 = 0;
              goto LABEL_301;
            case 0x196u:
              v121 = 1;
              goto LABEL_301;
            case 0x197u:
              v121 = 2;
LABEL_301:
              sub_3EE2D0(a1, v19, *(double *)a2.m128_u64, (unsigned int)v20, v136, v121);
              break;
            case 0x1CDu:
              sub_3E9B90(a1, 4u, 2u, (int)v20 + 4, 0x3BEA45E214ADDC55LL, v19 + 4, 0);
              sub_3E9B90(a1, 4u, 2u, v136 + 4, 0x3BEA45E214ADDC55LL, v19, 0);
              break;
            case 0x1CFu:
              sub_3E9B90(a1, 4u, 2u, (int)v20, 0x3BEA45E214ADDC55LL, v19 + 4, 0);
              sub_3E9B90(a1, 4u, 2u, v136, 0x3BEA45E214ADDC55LL, v19, 0);
              break;
            case 0x24Fu:
            case 0x26Cu:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v126 = 3;
              else
                v126 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x45u, v126, (int)v20, v136, v19, 0);
              break;
            case 0x250u:
            case 0x26Au:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v130 = 3;
              else
                v130 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3F2560(a1, 67, v130, v19, v20);
              break;
            case 0x252u:
            case 0x26Eu:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v129 = 3;
              else
                v129 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3F2560(a1, 65, v129, v19, v20);
              break;
            case 0x255u:
            case 0x270u:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v131 = 3;
              else
                v131 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3F2560(a1, 66, v131, v19, v20);
              break;
            case 0x257u:
            case 0x267u:
            case 0x271u:
            case 0x27Fu:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v79 = 3;
              else
                v79 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3E9B90(
                a1,
                0x21u,
                v79,
                (int)v20,
                v136,
                *(_DWORD *)(v63 + 472) + 4 * *(unsigned __int16 *)(a1 + 70) + 1,
                -1);
              break;
            case 0x258u:
            case 0x268u:
            case 0x272u:
            case 0x280u:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v78 = 3;
              else
                v78 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3E9B90(
                a1,
                0x24u,
                v78,
                (int)v20,
                v136,
                *(_DWORD *)(v63 + 472) + 4 * *(unsigned __int16 *)(a1 + 70) + 1,
                -1);
              break;
            case 0x259u:
            case 0x269u:
            case 0x273u:
            case 0x281u:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v77 = 3;
              else
                v77 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3E9B90(
                a1,
                0x23u,
                v77,
                (int)v20,
                v136,
                *(_DWORD *)(v63 + 472) + 4 * *(unsigned __int16 *)(a1 + 70) + 1,
                -1);
              break;
            case 0x25Bu:
            case 0x25Du:
            case 0x275u:
            case 0x276u:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v76 = 3;
              else
                v76 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3F2560(a1, 63, v76, v19, v20);
              break;
            case 0x25Fu:
            case 0x261u:
            case 0x278u:
            case 0x279u:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v75 = 3;
              else
                v75 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3F2560(a1, 64, v75, v19, v20);
              break;
            case 0x262u:
            case 0x27Au:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v120 = 3;
              else
                v120 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x48u, v120, (int)v20, v136, v19, 0);
              break;
            case 0x263u:
            case 0x27Bu:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v119 = 3;
              else
                v119 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x47u, v119, (int)v20, v136, v19, 0);
              break;
            case 0x265u:
            case 0x27Du:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v118 = 3;
              else
                v118 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x44u, v118, (int)v20, 0x3BEA45E214ADDC55LL, v19, 0);
              break;
            case 0x266u:
            case 0x27Eu:
              if ( (unsigned __int16)(v64 - 618) <= 0x17u )
                v117 = 3;
              else
                v117 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              sub_3E9B90(a1, 0x46u, v117, (int)v20, v136, v19, 0);
              break;
            case 0x312u:
              sub_3F1790(a1, v19, v20, 0x41u, 1);
              break;
            case 0x313u:
              sub_3F1790(a1, v19, v20, 0x42u, 0);
              break;
            case 0x314u:
              sub_3F1790(a1, v19, v20, 0x42u, 1);
              break;
            case 0x315u:
            case 0x316u:
              sub_3F1660(a1, v19, v20, 0x40u, 0);
              break;
            case 0x317u:
            case 0x318u:
              sub_3F1660(a1, v19, v20, 0x40u, 1);
              break;
            case 0x485u:
            case 0x4A0u:
              sub_3E9FE0((_QWORD *)a1, a1 + 104, v20);
LABEL_102:
              if ( !(unsigned __int8)sub_3ED060(a1, v19, v20, v136) )
                goto LABEL_23;
              break;
            case 0x487u:
              sub_3E9F60(a1, (const __m128i *)(a1 + 104), v20);
LABEL_154:
              v83 = 20;
              goto LABEL_155;
            case 0x489u:
            case 0x48Au:
              sub_3ECA40(a1, 1, 1, 0, *(double *)a2.m128_u64);
              break;
            case 0x48Bu:
            case 0x48Cu:
              sub_3ECA40(a1, 1, 0, 0, *(double *)a2.m128_u64);
              break;
            case 0x490u:
              sub_3E9F60(a1, (const __m128i *)(a1 + 104), v20);
LABEL_162:
              v83 = 19;
LABEL_155:
              if ( (*(_BYTE *)(a1 + 53) & 0x20) == 0 || *(_BYTE *)(a1 + 145) )
              {
                v85 = get_dtype_size(v57);
                sub_1D2710(a1, v83, v85, v20, v136, v19, 0);
              }
              else
              {
                v84 = get_dtype_size(v57);
                sub_1D2710(a1, v83, v84, v19, v20, v19, 0);
              }
LABEL_287:
              sub_3EC840(a1, v19, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x491u:
            case 0x492u:
              sub_1D3050(a1, 0, 2u, v20, v136, v19);
              break;
            case 0x493u:
              v114 = sub_3E9B60(v63, (__int64)&v145, *(double *)a2.m128_u64);
              v115 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v115 = 7;
              sub_3F1970(a1, v115, 1u, v114);
              v116 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v116 = 7;
              sub_3E9B90(a1, 0x14u, v116, v19, v114, v19, 0);
              break;
            case 0x494u:
              v111 = sub_3E9B60(v63, (__int64)&v145, *(double *)a2.m128_u64);
              v113 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v113 = 7;
              sub_3F1970(a1, v113, 0, v111);
              v112 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v112 = 7;
              goto LABEL_259;
            case 0x495u:
              v111 = sub_3E9B60(v63, (__int64)&v145, *(double *)a2.m128_u64);
              sub_3F1990(a1, v111);
              v112 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v112 = 7;
LABEL_259:
              sub_3E9B90(a1, 4u, v112, v111, 0x3BEA45E214ADDC55LL, v19, 0);
              break;
            case 0x496u:
              v108 = sub_3E9B60(v63, (__int64)&v145, *(double *)a2.m128_u64);
              v109 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v109 = 7;
              sub_3F1970(a1, v109, 0, v108);
              v110 = 2;
              if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL) == 8 )
                v110 = 7;
              sub_3E9B90(a1, 0x13u, v110, v19, v108, v19, 0);
              break;
            case 0x497u:
              sub_3F19D0(a1);
              break;
            case 0x498u:
              sub_1D2C40(a1, 0, v57, v19, v19, 0);
              break;
            case 0x499u:
              sub_1D2C40(a1, 1u, v57, v19, v19, 0);
              break;
            case 0x4A1u:
              v58 = *(unsigned __int8 *)(a1 + 150);
              v101 = *(char *)(a1 + 177);
              v102 = v58 - 1;
              goto LABEL_226;
            case 0x4A2u:
              sub_3EFF60(a1, v19, v20, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176));
              sub_3EC840(a1, v19, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL));
              break;
            case 0x4A3u:
              v100 = *(_BYTE *)(a1 + 176);
              v99 = 64 - (*(_WORD *)(a1 + 150) + v100);
LABEL_224:
              sub_3F0280(a1, v19, v20, v99, v100, 63 - v99, *(double *)a2.m128_u64);
              break;
            case 0x4A4u:
              v101 = *(_WORD *)(a1 + 150);
              v102 = 63;
              goto LABEL_226;
            case 0x4A5u:
              v102 = 63;
              v101 = 64 - *(_WORD *)(a1 + 150);
              goto LABEL_226;
            case 0x4A6u:
              sub_3F01A0(a1, v19, v20, *(_WORD *)(a1 + 150), 0, 63, *(double *)a2.m128_u64);
              break;
            case 0x4A9u:
              v11 = *(_BYTE *)(a1 + 150);
              v102 = 63;
              v101 = 0;
              goto LABEL_226;
            case 0x4AAu:
              v102 = 63 - *(_BYTE *)(a1 + 150);
              v101 = 0;
LABEL_226:
              v103 = *(_QWORD *)(v63 + 4464);
              if ( !v103 )
                sub_3E6800(*(double *)a2.m128_u64, (__int64)&v146, v58);
              v104 = *(_DWORD *)(*(_QWORD *)(v63 + 4456) + 4 * v103 - 4);
              *(_QWORD *)(v63 + 4464) = v103 - 1;
              sub_3EF940(a1, (unsigned int)v20, v101, v104, *(double *)a2.m128_u64);
              sub_3EFAA0(a1, (unsigned int)v19, v104, v11, v102, *(double *)a2.m128_u64);
              break;
            case 0x4ABu:
              sub_3EFCB0(a1, (unsigned int)v19, v20, *(_WORD *)(a1 + 150), *(_BYTE *)(a1 + 176), *(double *)a2.m128_u64);
              break;
            case 0x4B8u:
              sub_3F2010(a1, 255, v19, *(double *)a2.m128_u64);
              break;
            case 0x509u:
              v87 = ((unsigned __int16)(v64 - 1289) > 8u) + 3;
              goto LABEL_172;
            case 0x50Au:
              v82 = 3;
              goto LABEL_152;
            case 0x50Bu:
              sub_3F24B0(a1, 69, v19, v20, v136, *(double *)a2.m128_u64);
              break;
            case 0x50Cu:
              sub_3F24B0(a1, 70, v19, v20, v136, *(double *)a2.m128_u64);
              break;
            default:
              goto LABEL_23;
          }
        }
        sub_3E99E0(*(_QWORD *)(a1 + 832));
        return *(unsigned __int8 *)(a1 + 864);
      }
      v65 = v146;
      if ( (_DWORD)v146 != -1 )
      {
        sub_3E99E0(v63);
        v66 = *(_DWORD **)(a1 + 832);
        v67 = *(unsigned __int16 *)(a1 + 70);
        v68 = *(__int64 (__fastcall **)(_DWORD *, unsigned int))(*(_QWORD *)v66 + 168LL);
        if ( v68 == sub_3E59C0 )
          v69 = sub_3E59C0(v66, v67);
        else
          v69 = v68(v66, v67);
        sub_3EC4B0(a1, v145, v65, v69, 0, *(double *)a2.m128_u64);
        sub_3E99E0(*(_QWORD *)(a1 + 832));
        return 0;
      }
    }
LABEL_23:
    if ( (unsigned __int8)sub_3F2660(a1, v19, v20) )
      return 0;
    v28 = *(_QWORD **)(a1 + 8);
    v29 = *(_QWORD *)(a1 + 40);
    v30 = (_QWORD *)v28[127];
    v31 = v28 + 126;
    if ( !v30 )
    {
      v143 = *(_QWORD *)(a1 + 40);
      if ( v31 != (_QWORD *)v28[128] )
      {
        v32 = std::_Rb_tree_decrement(v28 + 126, (unsigned int)v19, v26, v27, v29);
        v31 = v28 + 126;
        if ( *(_QWORD *)(v32 + 32) >= v143 )
          goto LABEL_66;
      }
      v30 = v31;
      v33 = 1;
      goto LABEL_65;
    }
    while ( 1 )
    {
      v50 = v30[4];
      v51 = 0;
      v52 = (_QWORD *)v30[3];
      if ( v29 < v50 )
      {
        v52 = (_QWORD *)v30[2];
        v51 = 1;
      }
      if ( !v52 )
        break;
      v30 = v52;
    }
    if ( (_BYTE)v51 )
    {
      if ( v30 == (_QWORD *)v28[128] )
      {
LABEL_63:
        v33 = 1;
        if ( v30 != v31 )
          v33 = v29 < v30[4];
LABEL_65:
        v144 = v33;
        v139 = v31;
        v53 = operator new(0x28u);
        *(_QWORD *)(v53 + 32) = *(_QWORD *)(a1 + 40);
        std::_Rb_tree_insert_and_rebalance(v144, v53, v30, v139);
        ++v28[130];
        goto LABEL_66;
      }
      v142 = *(_QWORD *)(a1 + 40);
      v81 = std::_Rb_tree_decrement(v30, v30[2], v50, v51, v29);
      v31 = v28 + 126;
      v29 = v142;
      v50 = *(_QWORD *)(v81 + 32);
    }
    if ( v50 >= v29 )
    {
LABEL_66:
      sub_3F4280(a1, v16, v19, v20, v136);
      return 0;
    }
    goto LABEL_63;
  }
  return *(unsigned __int8 *)(a1 + 864);
}
