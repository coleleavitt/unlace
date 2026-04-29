__int64 __fastcall sub_182D90(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // r13
  unsigned int v9; // ebp
  int v10; // eax
  int v11; // ecx
  int v12; // r12d
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r13d
  __int64 *v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // rax
  int v20; // r13d
  __int64 v21; // rsi
  __int64 v22; // rdx
  int v23; // eax
  int v24; // r12d
  bool v25; // zf
  unsigned int v26; // ebx
  __int128 v27; // rdi
  __int64 *v28; // rax
  int v29; // eax
  __int64 v30; // rdi
  char v31; // r12
  int v32; // ecx
  _QWORD *v33; // rbp
  _BYTE *v34; // rax
  _QWORD *v35; // r12
  unsigned int v36; // ebp
  __int64 v37; // rax
  char v38; // al
  unsigned __int64 v39; // r12
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rdi
  int v45; // esi
  __int64 v46; // rax
  int v47; // eax
  unsigned __int8 v48; // bl
  char v49; // al
  __int64 v50; // rax
  __int32 v51; // edx
  __int32 v52; // esi
  __int64 not_tail; // rbp
  __int64 v54; // rdx
  int flags; // eax
  int v56; // r12d
  __int64 v57; // rdx
  __int64 v58; // r12
  int v59; // eax
  _QWORD *v60; // rbx
  _QWORD *v61; // r13
  int v62; // r12d
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  size_t v65; // rbp
  __int64 v66; // r9
  size_t v67; // r8
  __int64 v68; // rsi
  __int64 v69; // rbx
  int v70; // esi
  __int64 tinfo_size; // rbx
  int v72; // edx
  __m128i v73; // xmm1
  __int64 v74; // r12
  char *v75; // rax
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // ecx
  __int64 v80; // r13
  int v81; // eax
  int v82; // ebx
  char *v83; // rbx
  __int64 v84; // rdi
  __int64 v85; // rax
  int v86; // esi
  __int64 v87; // rax
  char v88; // dl
  unsigned __int64 v89; // rbp
  unsigned __int64 v90; // r13
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  int v95; // ecx
  int v96; // ecx
  int v97; // eax
  unsigned __int64 v98; // rsi
  __int64 v99; // rdi
  int v100; // ecx
  int v101; // r8d
  int v102; // r9d
  __int64 v103; // rax
  __int64 v104; // rbp
  unsigned __int64 v105; // r9
  size_t v106; // r10
  __int64 v107; // r13
  __int64 v108; // r12
  int v109; // ebx
  unsigned __int64 v110; // rbx
  int v111; // eax
  __int64 v112; // r13
  int v113; // eax
  unsigned __int64 v114; // rbx
  __int64 *v115; // rax
  __int64 v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // rax
  const char *v119; // r12
  __int64 tinfo_property4; // rax
  __int64 func; // rbp
  __m128i v122; // xmm0
  unsigned __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // [rsp+8h] [rbp-2E0h]
  unsigned __int8 v126; // [rsp+18h] [rbp-2D0h]
  int v127; // [rsp+18h] [rbp-2D0h]
  __int64 v128; // [rsp+18h] [rbp-2D0h]
  unsigned __int64 v129; // [rsp+18h] [rbp-2D0h]
  int v130; // [rsp+20h] [rbp-2C8h]
  bool v131; // [rsp+20h] [rbp-2C8h]
  size_t v132; // [rsp+20h] [rbp-2C8h]
  __int64 v133; // [rsp+20h] [rbp-2C8h]
  unsigned __int8 v134; // [rsp+2Fh] [rbp-2B9h]
  bool src; // [rsp+30h] [rbp-2B8h]
  __int64 srca; // [rsp+30h] [rbp-2B8h]
  void *srcb; // [rsp+30h] [rbp-2B8h]
  char v138; // [rsp+38h] [rbp-2B0h]
  char v139; // [rsp+38h] [rbp-2B0h]
  __int64 v140; // [rsp+38h] [rbp-2B0h]
  int v141; // [rsp+40h] [rbp-2A8h]
  unsigned int v142; // [rsp+40h] [rbp-2A8h]
  __int64 v143; // [rsp+40h] [rbp-2A8h]
  unsigned __int64 v144; // [rsp+50h] [rbp-298h]
  unsigned __int64 v145; // [rsp+50h] [rbp-298h]
  size_t v146; // [rsp+58h] [rbp-290h]
  int v147; // [rsp+64h] [rbp-284h] BYREF
  __int64 v148; // [rsp+68h] [rbp-280h] BYREF
  __int64 v149; // [rsp+70h] [rbp-278h] BYREF
  char v150[8]; // [rsp+78h] [rbp-270h] BYREF
  __int64 v151; // [rsp+80h] [rbp-268h] BYREF
  int v152; // [rsp+88h] [rbp-260h]
  int v153; // [rsp+8Ch] [rbp-25Ch]
  unsigned __int64 v154; // [rsp+90h] [rbp-258h] BYREF
  __int64 v155; // [rsp+98h] [rbp-250h]
  int v156; // [rsp+A0h] [rbp-248h]
  char v157; // [rsp+A4h] [rbp-244h]
  unsigned __int64 v158; // [rsp+A8h] [rbp-240h] BYREF
  __int128 v159; // [rsp+B0h] [rbp-238h] BYREF
  __int128 v160; // [rsp+C0h] [rbp-228h]
  unsigned __int64 v161; // [rsp+D0h] [rbp-218h] BYREF
  __int128 v162; // [rsp+D8h] [rbp-210h]
  __int128 v163; // [rsp+E8h] [rbp-200h]
  __int128 v164; // [rsp+F8h] [rbp-1F0h] BYREF
  __m128i si128; // [rsp+108h] [rbp-1E0h]
  int v166; // [rsp+118h] [rbp-1D0h]
  _BYTE v167[24]; // [rsp+120h] [rbp-1C8h] BYREF
  __int128 v168; // [rsp+138h] [rbp-1B0h]
  __int64 v169; // [rsp+148h] [rbp-1A0h]
  __int128 v170; // [rsp+150h] [rbp-198h]
  __int128 v171[3]; // [rsp+160h] [rbp-188h] BYREF
  __int64 v172; // [rsp+190h] [rbp-158h]
  int v173; // [rsp+198h] [rbp-150h]
  __int64 v174; // [rsp+1A0h] [rbp-148h]
  char v175; // [rsp+1A8h] [rbp-140h]
  char v176[8]; // [rsp+1B0h] [rbp-138h] BYREF
  _BYTE *v177; // [rsp+1B8h] [rbp-130h]
  __int64 v178; // [rsp+1C0h] [rbp-128h]
  char v179[8]; // [rsp+1C8h] [rbp-120h] BYREF
  void *dest; // [rsp+1D0h] [rbp-118h] BYREF
  unsigned __int64 v181; // [rsp+1D8h] [rbp-110h]
  unsigned __int64 v182; // [rsp+1E0h] [rbp-108h]
  char v183[16]; // [rsp+1E8h] [rbp-100h] BYREF
  int v184; // [rsp+1F8h] [rbp-F0h]
  char v185[4]; // [rsp+200h] [rbp-E8h] BYREF
  int v186; // [rsp+204h] [rbp-E4h]
  __int64 v187; // [rsp+208h] [rbp-E0h]
  __int64 v188; // [rsp+210h] [rbp-D8h]
  _QWORD v189[7]; // [rsp+218h] [rbp-D0h] BYREF
  char v190[24]; // [rsp+250h] [rbp-98h] BYREF
  __int64 v191[7]; // [rsp+268h] [rbp-80h] BYREF
  char v192; // [rsp+2A0h] [rbp-48h] BYREF
  unsigned __int64 v193; // [rsp+2A8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 64);
  v193 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v46 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)&v167[8] = 0;
    *(_QWORD *)v167 = v46;
    if ( (sub_133470(v3, (__int64)v167) & 7) != 0 )
      return 0;
  }
  v159 = 0;
  v154 = 0xFFFFFFFF00000000LL;
  v158 = 0xFFFFFFFF00000000LL;
  v160 = 0;
  v162 = 0;
  v164 = 0;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  v161 = 0;
  v166 = 16;
  v163 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_407250);
  v134 = sub_182640((__int64)&v154, a1, a2, 0);
  if ( !v134 )
    goto LABEL_67;
  v5 = *(_QWORD *)(a1 + 64);
  v147 = 0;
  v6 = a2;
  v130 = -1;
  v125 = *(_QWORD *)(v5 + 1504);
  src = (unsigned int)(*(_DWORD *)a2 - 56) <= 1;
  while ( 1 )
  {
    v7 = v166;
    if ( (v166 & 1) != 0 )
      goto LABEL_8;
    if ( (_BYTE)v154 != 3 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( (_BYTE)v154 == 6 )
      {
        if ( !(unsigned int)sub_33E560(*(_QWORD *)(v8 + 1496), v155) )
        {
          v7 = v166;
LABEL_8:
          v126 = 0;
          v9 = v7 & 0xFFFFFFFB;
          goto LABEL_9;
        }
        not_tail = v155;
        if ( (get_flags_ex(v155, 4) & 0x600) == 0x200 )
          not_tail = prev_not_tail(not_tail, 4, v54);
        flags = get_flags_ex(not_tail, 4);
        v7 = v166;
        if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x50000000 )
          goto LABEL_8;
      }
      else
      {
        if ( (_BYTE)v154 != 2 )
          goto LABEL_8;
        v33 = *(_QWORD **)(v8 + 1328);
        if ( !*v33 )
          goto LABEL_62;
        v34 = (_BYTE *)(*(_QWORD *)*v33 & 0xFFFFFFFFFFFFFFFCLL);
        v35 = v34;
        if ( !v34 )
          goto LABEL_172;
        if ( (*v34 & 2) != 0 )
          goto LABEL_62;
        v128 = v155;
        do
        {
          if ( (int)sub_2533C0(v128) >= 0 )
          {
            if ( (int)sub_2533C0(v35 + 3) >= 0 )
              goto LABEL_171;
            v35 = (_QWORD *)v35[2];
          }
          else
          {
            v35 = (_QWORD *)v35[1];
          }
        }
        while ( (*(_BYTE *)v35 & 2) == 0 );
        v35 = (_QWORD *)*v33;
LABEL_171:
        if ( v35 == **(_QWORD ***)(v8 + 1328) )
        {
LABEL_62:
          v36 = *(_DWORD *)(v155 + 8);
          v37 = get_flags_ex(*(_QWORD *)v155, 4);
          v38 = is_char(v37, v36);
        }
        else
        {
LABEL_172:
          v38 = is_char(v35[9], (unsigned int)*((char *)v35 + 44));
        }
        v7 = v166;
        if ( !v38 )
          goto LABEL_8;
      }
    }
    v9 = v7 | 4;
    v126 = v134;
LABEL_9:
    v166 = v9;
    v10 = sub_180A00(v125, (char *)&v154);
    v11 = v166;
    v12 = v10;
    if ( ((unsigned __int8)v166 & ((_QWORD)v164 != 0)) != 0 )
      goto LABEL_67;
    if ( v10 == 1 )
    {
      if ( (unsigned int)(*(_DWORD *)v6 - 56) <= 1 && HIDWORD(v154) )
      {
        v45 = si128.m128i_i32[1];
        if ( si128.m128i_i32[1] <= 0 )
          v45 = 1;
        if ( HIDWORD(v154) - v45 != si128.m128i_i32[2] )
        {
          if ( v130 != -1 || (~(_BYTE)v166 & 3) != 0 )
          {
LABEL_13:
            if ( (v166 & 0xC) != 0 )
              goto LABEL_14;
            if ( a2 == v6 )
              goto LABEL_67;
LABEL_15:
            v13 = v162;
            v14 = v147;
            v15 = v9 & 2;
            if ( (_QWORD)v162 )
              goto LABEL_16;
            goto LABEL_19;
          }
          if ( (unsigned __int64)v160 > 4 )
            goto LABEL_173;
          if ( (v166 & 0xC) != 0 )
            goto LABEL_14;
          v12 = -1;
          goto LABEL_144;
        }
      }
    }
    else if ( v10 == -1 )
    {
      if ( v130 != -1 || (~(_BYTE)v166 & 3) != 0 )
        goto LABEL_13;
      if ( (unsigned __int64)v160 > 4 )
        goto LABEL_173;
      if ( (v166 & 0xC) != 0 )
        goto LABEL_14;
      goto LABEL_144;
    }
    if ( a2 != v6 )
      break;
    if ( v130 != -1 )
    {
      v20 = v166 & 0xC;
      if ( (v166 & 0xC) == 0 )
        goto LABEL_152;
      if ( v126 )
        goto LABEL_97;
      goto LABEL_104;
    }
LABEL_149:
    if ( (~(_BYTE)v166 & 3) != 0 )
    {
      v20 = v166 & 0xC;
      if ( (v166 & 0xC) != 0 )
        goto LABEL_103;
      if ( a2 != v6 )
        goto LABEL_28;
      goto LABEL_152;
    }
    if ( (unsigned __int64)v160 > 4 )
      goto LABEL_173;
    v20 = v166 & 0xC;
    if ( (v166 & 0xC) != 0 )
      goto LABEL_103;
LABEL_144:
    if ( a2 != v6 )
    {
      if ( v12 != 1 )
      {
        if ( v12 == -1 )
          goto LABEL_14;
        goto LABEL_29;
      }
      goto LABEL_157;
    }
LABEL_152:
    if ( v12 || !v126 && (~(_BYTE)v166 & 0x21) == 0 )
      goto LABEL_67;
    if ( (unsigned int)(*(_DWORD *)v6 - 56) <= 1 )
      v130 = v160;
LABEL_35:
    v24 = HIDWORD(v154) + v147;
    v25 = *(_QWORD *)(a2 + 8) == 0;
    v147 += HIDWORD(v154);
    if ( v25 && !*(_QWORD *)(a2 + 16) )
    {
LABEL_66:
      if ( !(_QWORD)v160 || (_BYTE)v154 == 2 && (~(_BYTE)v166 & 3) == 0 )
        goto LABEL_67;
      v138 = v134;
      goto LABEL_122;
    }
    v26 = HIDWORD(v158);
    v138 = sub_17F820(v125, (unsigned __int64)&v158, HIDWORD(v158));
    if ( !v138
      || (unsigned __int8)(v154 - 2) > 1u
      && (HIDWORD(v154) != v26 || !(unsigned __int8)sub_17F820(v125, (unsigned __int64)&v154, v26)) )
    {
      goto LABEL_67;
    }
    *((_QWORD *)&v27 + 1) = a2;
    *(_QWORD *)&v27 = a1;
    v28 = sub_1819D0(v27, (__int64)&v158, 0);
    v6 = (__int64)v28;
    if ( !v28 || (*((_BYTE *)v28 + 4) & 0x10) != 0 )
      goto LABEL_66;
    *(_OWORD *)v167 = 0xFFFFFFFF00000000LL;
    if ( !(unsigned __int8)sub_180080((__int64)v167, a1, (__int64)v28, 0, 0) )
      goto LABEL_116;
    v29 = sub_17F200(v125, (__int64)&v158, (__int64)v167);
    if ( v29 == -1 )
      goto LABEL_116;
    if ( SHIDWORD(v154) <= v29 )
    {
      if ( !under_debugger )
        sub_37E160(51548);
      goto LABEL_422;
    }
    if ( v29 )
    {
      v30 = v161 + 40 * v162 - 40;
      if ( *(_DWORD *)(v30 + 32) != -1 )
        *(_QWORD *)(v30 + 24) -= v29;
      v141 = v29;
      sub_32D040(v30, (unsigned int)v29);
      v147 = v24 - v141;
    }
    sub_120F80((__int64)&v158, v167);
    v31 = sub_17FDF0((__int64)&v154, a1, v6);
    if ( !v31 )
      goto LABEL_116;
    if ( v157 && (v166 & 2) != 0 )
    {
      v32 = si128.m128i_i32[1];
      if ( si128.m128i_i32[1] <= 0 )
        v32 = 1;
      if ( SHIDWORD(v154) / v32 > 64 )
        goto LABEL_116;
    }
    if ( (unsigned int)(*(_DWORD *)v6 - 56) <= 1 )
    {
      v47 = 32;
      if ( *(_BYTE *)(v6 + 32) == 11 )
        v47 = (*(_DWORD *)(*(_QWORD *)(v6 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
      v166 |= v47;
      if ( (unsigned int)(*(_DWORD *)v6 - 56) <= 1
        && (*(_BYTE *)(v6 + 32) != 11 || *(char *)(*(_QWORD *)(v6 + 72) + 280LL) < 0)
        && !v126 )
      {
LABEL_116:
        sub_118BA0((__int64)v167);
        v19 = v160;
LABEL_117:
        if ( v19 )
          goto LABEL_122;
LABEL_118:
        if ( HIDWORD(v154) == 1 )
          goto LABEL_67;
LABEL_119:
        if ( (v166 & 8) != 0 || (_BYTE)v154 != 2 )
        {
          v130 = -1;
          goto LABEL_122;
        }
        goto LABEL_67;
      }
    }
    if ( !src )
    {
      if ( (unsigned __int64)v160 <= 4 )
        goto LABEL_58;
      if ( !(unsigned __int8)sub_1818A0(a1, a2) )
      {
        sub_118BA0((__int64)v167);
        goto LABEL_67;
      }
    }
    src = v31;
LABEL_58:
    sub_118BA0((__int64)v167);
  }
  if ( (v166 & 2) == 0 )
    goto LABEL_27;
  v15 = v9 & 2;
  if ( (v9 & 2) != 0 )
  {
    if ( v130 == -1 )
      goto LABEL_149;
LABEL_27:
    v20 = v166 & 0xC;
    if ( (v166 & 0xC) == 0 )
      goto LABEL_28;
LABEL_103:
    if ( v126 )
      goto LABEL_105;
LABEL_104:
    if ( (~(_BYTE)v166 & 0x21) != 0 )
      goto LABEL_105;
    if ( !v10 )
      goto LABEL_14;
    v52 = si128.m128i_i32[2];
    goto LABEL_245;
  }
  if ( (v166 & 1) != 0 )
  {
    if ( v130 != -1 )
    {
      v14 = v147;
LABEL_83:
      v13 = v162;
      if ( !(_QWORD)v162 )
      {
LABEL_84:
        v18 = v11 & 0xFFFFFFFD;
        goto LABEL_21;
      }
LABEL_16:
      *(_QWORD *)&v162 = v13 - 1;
      v16 = (__int64 *)(v161 + 40 * (v13 - 1));
      v17 = *v16;
      if ( *v16 )
      {
        v16[1] = 0;
        v127 = v14;
        qfree(v17);
        v14 = v127;
      }
      v11 = v166;
LABEL_19:
      if ( !v15 )
        goto LABEL_84;
      v18 = v11 | 2;
LABEL_21:
      v166 = v18;
      if ( v14 <= 9 )
      {
        v19 = v160;
        v138 = v134;
      }
      else
      {
        v138 = v9 & 1;
        v19 = v160;
        if ( (v9 & 1) != 0 )
        {
          v166 = v18 | 1;
        }
        else
        {
          v166 = v18 & 0xFFFFFFFE;
          v138 = v134;
        }
      }
      goto LABEL_117;
    }
    if ( (unsigned __int64)v160 > 4 )
    {
LABEL_173:
      if ( (v166 & 0xC) != 0 )
      {
        v130 = -1;
        goto LABEL_14;
      }
      if ( a2 == v6 )
        goto LABEL_67;
      v130 = -1;
    }
    else
    {
      if ( (v166 & 0xC) != 0 )
      {
        v13 = v162;
        v14 = v147;
        if ( !(_QWORD)v162 )
          goto LABEL_84;
        goto LABEL_16;
      }
LABEL_14:
      if ( a2 == v6 )
        goto LABEL_67;
    }
    goto LABEL_15;
  }
  v86 = si128.m128i_i32[1];
  v14 = v147;
  if ( si128.m128i_i32[1] <= 0 )
    v86 = 1;
  if ( v147 / v86 > 64 )
    goto LABEL_83;
  v20 = v166 & 0xC;
  if ( (v166 & 0xC) != 0 )
  {
LABEL_105:
    if ( a2 != v6 )
    {
      v21 = *((_QWORD *)&v159 + 1);
      v22 = v160 + 1;
      if ( *((_QWORD *)&v160 + 1) >= (unsigned __int64)(v160 + 1) )
      {
        *(_QWORD *)(*((_QWORD *)&v159 + 1) + 8 * v160) = v6;
        *(_QWORD *)&v160 = v160 + 1;
        v130 = v160;
        goto LABEL_34;
      }
LABEL_132:
      *((_QWORD *)&v159 + 1) = qvector_reserve((char *)&v159 + 8, v21, v22, 8);
      v21 = *((_QWORD *)&v159 + 1);
      v50 = v160;
LABEL_133:
      *(_QWORD *)(v21 + 8 * v50) = v6;
      v23 = v160 + 1;
      *(_QWORD *)&v160 = v160 + 1;
      if ( v20 )
      {
        v130 = v23;
LABEL_34:
        if ( v12 != 1 )
          goto LABEL_35;
        v51 = si128.m128i_i32[2];
        v85 = v160;
        v52 = si128.m128i_i32[2];
LABEL_297:
        if ( !v85 )
        {
          v12 = HIDWORD(v154);
          if ( HIDWORD(v154) )
            goto LABEL_364;
          v138 = 0;
          v147 += v51 + 1;
          goto LABEL_119;
        }
        v138 = 0;
        v147 += v51 + 1;
LABEL_122:
        v48 = 0;
        if ( *(_BYTE *)(a2 + 64) == 5 )
          v48 = sub_1EB130(**(_QWORD **)(a2 + 72), *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL), *(unsigned int *)(a2 + 68));
        v49 = v166;
        if ( (v166 & 2) == 0 && si128.m128i_i32[1] <= 1 && *(_DWORD *)(v125 + 88) + 1 <= v147 )
        {
          if ( (v166 & 1) == 0 )
          {
            if ( v48 )
            {
              if ( v147 > 2 )
              {
                if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 || *(_BYTE *)(a2 + 64) != 6 )
                  goto LABEL_315;
                goto LABEL_303;
              }
            }
            else if ( v147 > 9 )
            {
              if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 || *(_BYTE *)(a2 + 64) != 6 )
              {
LABEL_315:
                if ( !v138 )
                  goto LABEL_185;
LABEL_307:
                if ( v130 == -1 )
                {
LABEL_308:
                  v130 = v160;
                  goto LABEL_274;
                }
                goto LABEL_274;
              }
              v48 = v134;
              goto LABEL_303;
            }
          }
          if ( v138 )
            goto LABEL_307;
          goto LABEL_177;
        }
        if ( (v166 & 1) != 0 )
        {
          if ( v138 )
          {
            if ( si128.m128i_i32[1] > 1 || v130 == -1 )
              goto LABEL_67;
            goto LABEL_274;
          }
          goto LABEL_177;
        }
        if ( v48 )
        {
          if ( v147 > 2 )
          {
            if ( (unsigned int)(*(_DWORD *)a2 - 56) > 1 )
            {
              if ( *(_BYTE *)(a2 + 64) != 6 )
                goto LABEL_269;
              v48 = 0;
              goto LABEL_303;
            }
LABEL_343:
            if ( !v138 )
              goto LABEL_185;
            v88 = v138;
LABEL_273:
            if ( v130 == -1 )
            {
              if ( !v88 )
                goto LABEL_67;
              goto LABEL_308;
            }
LABEL_274:
            if ( !v130 )
              goto LABEL_67;
            if ( v130 < (unsigned __int64)v160 )
            {
              v89 = v162;
              *(_QWORD *)&v160 = v130;
              if ( v130 >= (unsigned __int64)v162 )
              {
                if ( !under_debugger )
                  sub_37E160(51852);
                goto LABEL_422;
              }
              v90 = v130 + 1;
              if ( v90 != (_QWORD)v162 )
              {
                v58 = v161;
                *(_QWORD *)&v168 = 0;
                memset(v167, 0, sizeof(v167));
                DWORD2(v168) = -1;
                v91 = v161;
                if ( v90 < (unsigned __int64)v162 )
                {
                  v114 = v130 + 1;
                  do
                  {
                    v115 = (__int64 *)(v58 + 40 * v114);
                    v116 = *v115;
                    if ( *v115 )
                    {
                      v115[1] = 0;
                      qfree(v116);
                      v58 = v161;
                    }
                    ++v114;
                  }
                  while ( v114 < v89 );
                }
                else if ( (unsigned __int64)v167 < v161
                       || (unsigned __int64)v167 >= v161 + 40LL * *((_QWORD *)&v162 + 1) )
                {
                  if ( *((_QWORD *)&v162 + 1) < v90 )
                  {
                    v91 = qvector_reserve(&v161, v161, v130 + 1, 40);
                    v161 = v91;
                    v89 = v162;
                  }
                  v58 = v161;
                  if ( v89 < v90 )
                  {
                    v117 = 40 * v89;
                    do
                    {
                      v118 = v117 + v91;
                      ++v89;
                      v117 += 40;
                      *(_QWORD *)v118 = 0;
                      *(_QWORD *)(v118 + 24) = 0;
                      *(_DWORD *)(v118 + 32) = -1;
                      *(_OWORD *)(v118 + 8) = 0;
                      v91 = v161;
                      v58 = v161;
                    }
                    while ( v90 != v89 );
                  }
                }
                else
                {
                  v92 = v162;
                  if ( *((_QWORD *)&v162 + 1) >= v90
                    || (v124 = qvector_reserve(&v161, v161, v130 + 1, 40),
                        v92 = v162,
                        v161 = v124,
                        v58 = v124,
                        (unsigned __int64)v162 < v90) )
                  {
                    v93 = 40 * v92;
                    do
                    {
                      v94 = v58 + v93;
                      ++v92;
                      v93 += 40;
                      *(_QWORD *)v94 = 0;
                      *(_QWORD *)(v94 + 24) = 0;
                      *(_DWORD *)(v94 + 32) = -1;
                      *(_OWORD *)(v94 + 8) = 0;
                      v58 = v161;
                    }
                    while ( v90 != v92 );
                  }
                }
                *(_QWORD *)&v162 = v130 + 1;
                v59 = *(_DWORD *)(v58 + 32);
                v60 = (_QWORD *)v58;
                if ( v59 == -1 )
                  goto LABEL_289;
                goto LABEL_186;
              }
            }
LABEL_185:
            v58 = v161;
            v59 = *(_DWORD *)(v161 + 32);
            v60 = (_QWORD *)v161;
            if ( v59 == -1 )
            {
LABEL_202:
              if ( (unsigned __int64)v162 <= 1 )
              {
                v61 = (_QWORD *)v58;
LABEL_204:
                if ( v61[1] <= 1u )
                  goto LABEL_67;
                goto LABEL_205;
              }
              v58 = v161;
LABEL_289:
              v61 = v60;
              v60 = (_QWORD *)v58;
              goto LABEL_188;
            }
LABEL_186:
            if ( *(_QWORD *)(v58 + 8) > 1u )
            {
              v61 = (_QWORD *)v58;
              if ( (unsigned __int64)v162 > 1 )
              {
LABEL_188:
                v62 = 1;
                v63 = 1;
                while ( 1 )
                {
                  v69 = (__int64)&v60[5 * v63];
                  v70 = *(_DWORD *)(v69 + 32);
                  if ( v70 == -1 )
                    break;
                  v64 = *(_QWORD *)(v69 + 8);
                  v65 = v64 - 1;
                  if ( v64 <= 1 )
                  {
                    sub_17FB60(v69, v70, *(_DWORD *)(v69 + 24));
                    v64 = *(_QWORD *)(v69 + 8);
                    if ( !v64 )
                      goto LABEL_195;
                    goto LABEL_199;
                  }
LABEL_190:
                  v66 = v61[1];
                  v67 = v65;
                  if ( v66 )
                  {
                    --v66;
                    v67 = v65 + v66;
                    v64 = v65 + v66 + 1;
                  }
                  v68 = *v61;
                  if ( v61[2] < v64 )
                  {
                    v143 = v66;
                    v132 = v67;
                    v129 = v64;
                    v87 = qvector_reserve(v61, v68, v64, 1);
                    *v61 = v87;
                    v66 = v143;
                    v68 = v87;
                    v67 = v132;
                    v64 = v129;
                  }
                  v61[1] = v64;
                  *(_BYTE *)(v68 + v67) = 0;
                  memcpy((void *)(v66 + *v61), *(const void **)v69, v65);
LABEL_195:
                  v63 = ++v62;
                  if ( v62 >= (unsigned __int64)v162 )
                    goto LABEL_204;
                  v60 = (_QWORD *)v161;
                }
                v64 = *(_QWORD *)(v69 + 8);
                if ( !v64 )
                  goto LABEL_195;
LABEL_199:
                v65 = v64 - 1;
                if ( v64 == 1 )
                  goto LABEL_195;
                goto LABEL_190;
              }
LABEL_205:
              tinfo_size = get_tinfo_size(0, *(_QWORD *)(*(_QWORD *)(a1 + 480) + 376LL), 0);
              v72 = 1;
              v73 = _mm_load_si128((const __m128i *)&xmmword_407230);
              if ( si128.m128i_i32[1] > 0 )
                v72 = si128.m128i_i32[1];
              v74 = v72;
              v131 = v72 != tinfo_size;
              v139 = v138 | (v131 && si128.m128i_i32[1] > 1);
              v75 = v176;
              do
              {
                *((_DWORD *)v75 + 1) = -1;
                v75 += 80;
                *((_WORD *)v75 - 40) = 0;
                *((_WORD *)v75 - 39) = 0;
                *((_QWORD *)v75 - 9) = 0;
                *((__m128i *)v75 - 4) = v73;
                *((_QWORD *)v75 - 6) = 0;
                *(_OWORD *)(v75 - 40) = 0;
                *((_DWORD *)v75 - 6) = 0;
                *((_QWORD *)v75 - 2) = 0;
                *((_DWORD *)v75 - 2) = 0;
              }
              while ( &v192 != v75 );
              if ( v139 )
              {
                v97 = 5;
                if ( v72 == tinfo_size )
                  v97 = 34;
                v142 = v97;
              }
              else
              {
                v76 = 6;
                if ( v72 == tinfo_size )
                  v76 = 36;
                v142 = v76;
              }
              if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
              {
                v103 = *(_QWORD *)(a2 + 72);
                if ( (_QWORD)v160 || *(_BYTE *)(a2 + 64) != 8 || v142 != *(_DWORD *)(v103 + 284) )
                {
                  v104 = *(_QWORD *)(v103 + 24);
                  sub_120F80((__int64)v176, (unsigned __int8 *)v104);
                  v178 = *(_QWORD *)(v104 + 16);
                  copy_tinfo_t(v179, v104 + 24);
                  if ( &dest != (void **)(v104 + 32) )
                  {
                    v105 = *(_QWORD *)(v104 + 40);
                    if ( v105 && (v106 = v105 - 1, v105 != 1) )
                    {
                      srcb = *(void **)(v104 + 32);
                      if ( v182 < v105 )
                      {
                        v146 = v105 - 1;
                        v145 = *(_QWORD *)(v104 + 40);
                        dest = (void *)qvector_reserve(&dest, dest, v105, 1);
                        v106 = v146;
                        v105 = v145;
                      }
                      v181 = v105;
                      v144 = v105;
                      memmove(dest, srcb, v106);
                      *((char *)dest + v144 - 1) = 0;
                    }
                    else
                    {
                      v181 = 0;
                    }
                  }
                  copy_argloc(v183, v104 + 56);
                  v184 = *(_DWORD *)(v104 + 72);
LABEL_219:
                  v77 = *(_QWORD *)(a1 + 480);
                  if ( v74 == tinfo_size )
                  {
                    sub_327610(v167, v125, v77 + 376);
                  }
                  else
                  {
                    *(_QWORD *)v167 = 0;
                    copy_tinfo_t(v167, v77 + 200);
                  }
                  copy_tinfo_t(v179, v167);
                  clear_tinfo_t(v167);
                  srca = sub_32CFA0(*v61, 0);
                  if ( v74 == tinfo_size && (v166 & 0x10) != 0 )
                  {
                    v185[0] = 6;
                    v78 = *((_QWORD *)&v163 + 1);
                    v79 = 8 * *(_DWORD *)(v125 + 84);
                    if ( (unsigned __int64)v79 <= 0x3F )
                      v78 = ~(-1LL << v79) & *((_QWORD *)&v163 + 1);
                    v187 = v78;
                    sub_118750(v185, v125);
                    if ( LOBYTE(v189[0]) )
                      v189[0] |= 0x40uLL;
                  }
                  else
                  {
                    v185[0] = 3;
                    v98 = v61[1];
                    v99 = *v61;
                    if ( v98 < v61[2] )
                    {
                      if ( v99 )
                      {
                        if ( v98 )
                        {
                          v99 = qrealloc(v99, v98);
                          if ( !v99 )
                            v99 = *v61;
                        }
                      }
                    }
                    *v61 = 0;
                    *(_OWORD *)(v61 + 1) = 0;
                    v187 = v99;
                  }
                  v186 = *(_DWORD *)(v125 + 84);
                  v188 = v163;
                  if ( v139 )
                  {
                    if ( (v166 & 2) != 0 )
                    {
                      if ( si128.m128i_i32[1] <= 1 )
                        goto LABEL_232;
                      goto LABEL_230;
                    }
                    if ( si128.m128i_i32[1] > 1 )
                    {
LABEL_230:
                      if ( v131 )
                        srca *= si128.m128i_i32[1];
LABEL_232:
                      *(_QWORD *)v167 = 7;
                      copy_tinfo_t(v191, v167);
                      clear_tinfo_t(v167);
                      v80 = *(_QWORD *)(a2 + 24);
                      v81 = get_tinfo_size(0, v191[0], 0);
                      sub_11C810((__int64)v190, v125, srca, v81, v80, 2);
                      if ( v74 != tinfo_size )
                        copy_tinfo_t(v179, *(_QWORD *)(a1 + 480) + 232LL);
                      v82 = 3;
                      if ( v142 == 2 )
                        goto LABEL_235;
                      goto LABEL_325;
                    }
                    *(_QWORD *)v167 = 7;
                    copy_tinfo_t(v189, v167);
                    clear_tinfo_t(v167);
                    if ( *(_DWORD *)(v161 + 32) != -1 )
                    {
                      v112 = *(_QWORD *)(a2 + 24);
                      v113 = get_tinfo_size(0, v189[0], 0);
                      sub_11C810((__int64)v185, v125, *(int *)(v161 + 32), v113, v112, 1);
                      v142 = 2;
                      goto LABEL_232;
                    }
                    if ( !under_debugger )
                      sub_37E160(52621);
LABEL_422:
                    BUG();
                  }
                  if ( v176[0] != 10 || *v177 != 5 )
                  {
LABEL_324:
                    v82 = 2;
LABEL_325:
                    copy_tinfo_t(v189, v179);
                    sub_3277D0(v125, (unsigned int)v189, 1, v100, v101, v102);
LABEL_235:
                    sub_181F20(a1, a2, (__int64)&v154, v82, v176, v142);
                    goto LABEL_236;
                  }
                  sub_32A2E0(v177, &v148);
                  v107 = *(_QWORD *)(a1 + 64);
                  v108 = v148;
                  v149 = 0;
                  v109 = *(_DWORD *)(*(_QWORD *)(v107 + 1504) + 80LL);
                  v169 = 0;
                  v172 = 1;
                  v173 = -1;
                  v174 = 0;
                  v175 = 0;
                  memset(v167, 0, sizeof(v167));
                  v168 = 0;
                  v170 = 0;
                  v171[0] = 0;
                  v140 = sub_1CBE90(v107, v167, v148, 0, &v149);
                  v133 = sub_1CB990(v107, v108);
                  if ( v133 < 0 )
                  {
LABEL_359:
                    clear_tinfo_t(&v149);
                    clear_tinfo_t(v171);
                    if ( v169 )
                    {
                      *(_QWORD *)&v170 = 0;
                      qfree(v169);
                    }
                    if ( *(_QWORD *)&v167[16] )
                    {
                      *(_QWORD *)&v168 = 0;
                      qfree(*(_QWORD *)&v167[16]);
                    }
                    goto LABEL_324;
                  }
                  v110 = (srca + v109 - 1 + 1) & -v109;
                  if ( v140 != -1 )
                  {
                    if ( *(_QWORD *)&v167[8] >> 3 >= v110 || (get_tinfo_property(*(_QWORD *)&v171[0], 2) & 0x2F) == 0xD )
                      goto LABEL_359;
                    if ( (_QWORD)v168 )
                    {
                      v119 = *(const char **)&v167[16];
                      if ( !*(_QWORD *)&v167[16]
                        || !strncmp(*(const char **)&v167[16], "arg_", 4u)
                        || !strncmp(v119, "var_", 4u) )
                      {
                        goto LABEL_394;
                      }
                    }
                    else
                    {
                      v119 = s1;
                      if ( !s1 )
                        goto LABEL_394;
                    }
                    if ( strncmp(v119, "anonymous", 9u) )
                      goto LABEL_359;
                  }
LABEL_394:
                  tinfo_property4 = get_tinfo_property4(v149, 300, 0, 0, 0, 0);
                  func = get_func(tinfo_property4);
                  if ( v140 == -1 )
                  {
                    v123 = v133;
                  }
                  else
                  {
                    v122 = _mm_load_si128((const __m128i *)v167);
                    v123 = _mm_add_epi64(v122, _mm_srli_si128(v122, 8)).m128i_u64[0] >> 3;
                  }
                  delete_frame_members(func, v123, v133 + v110);
                  sub_327340(v150, *(_QWORD *)(v107 + 1504), 1);
                  if ( v110 != 1 )
                  {
                    v152 = 0;
                    v153 = v110;
                    v151 = 0;
                    copy_tinfo_t(&v151, v150);
                    create_tinfo(v150, 11, 11, &v151);
                    clear_tinfo_t(&v151);
                  }
                  if ( v140 == -1 )
                    add_frame_member(func, 0, v133, v150, 0, 0);
                  else
                    set_frame_member_type(func, v133, v150, 0, 0);
                  clear_tinfo_t(v150);
                  goto LABEL_359;
                }
              }
              else if ( src || (unsigned __int8)sub_1818A0(a1, a2) )
              {
                sub_118810(v176, (char *)(a2 + 64));
                if ( *(_DWORD *)a2 != 1 )
                  sub_118750(v176, v125);
                v178 = *(_QWORD *)(a2 + 24);
                goto LABEL_219;
              }
              v134 = 0;
LABEL_236:
              v83 = &v192;
              do
              {
                v83 -= 80;
                cleanup_argloc(v83 + 56);
                v84 = *((_QWORD *)v83 + 4);
                if ( v84 )
                {
                  *((_QWORD *)v83 + 5) = 0;
                  qfree(v84);
                }
                clear_tinfo_t(v83 + 24);
                sub_118BA0((__int64)v83);
              }
              while ( v83 != v176 );
              goto LABEL_68;
            }
            sub_17FB60(v58, v59, *(_DWORD *)(v58 + 24));
            goto LABEL_202;
          }
        }
        else if ( v147 > 9 )
        {
          if ( (unsigned int)(*(_DWORD *)a2 - 56) > 1 )
          {
            if ( *(_BYTE *)(a2 + 64) != 6 )
            {
LABEL_269:
              if ( !v138 )
                goto LABEL_185;
              v88 = v138;
LABEL_271:
              if ( (v49 & 1) != 0 && si128.m128i_i32[1] > 1 )
                goto LABEL_67;
              goto LABEL_273;
            }
LABEL_303:
            if ( (get_flags_ex(*(_QWORD *)(a2 + 72), 4) & 0x400) != 0 )
            {
              if ( !v138 )
                goto LABEL_185;
              v88 = v138;
              goto LABEL_306;
            }
            v88 = 0;
            if ( v138 )
            {
LABEL_306:
              if ( v48 )
                goto LABEL_307;
              v49 = v166;
              goto LABEL_271;
            }
LABEL_177:
            if ( v130 < 0 && (_QWORD)v160 )
            {
              if ( !(unsigned __int8)sub_17F180(&v147, (int *)a2, *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL)) )
                goto LABEL_67;
              v56 = 0;
              v57 = 0;
              if ( (_QWORD)v160 != 1 )
              {
                do
                {
                  if ( v147 <= 0 )
                    break;
                  if ( !(unsigned __int8)sub_17F180(
                                           &v147,
                                           *(int **)(*((_QWORD *)&v159 + 1) + 8 * v57),
                                           *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL)) )
                    goto LABEL_67;
                  v57 = ++v56;
                }
                while ( v56 < (unsigned __int64)(v160 - 1) );
              }
            }
            goto LABEL_185;
          }
          goto LABEL_343;
        }
        if ( v138 )
        {
          if ( v130 == -1 )
            goto LABEL_67;
          goto LABEL_274;
        }
        goto LABEL_177;
      }
LABEL_33:
      if ( (unsigned int)(*(_DWORD *)v6 - 56) > 1 )
        goto LABEL_34;
LABEL_98:
      v130 = v23;
      goto LABEL_34;
    }
LABEL_97:
    v23 = v160;
    goto LABEL_98;
  }
LABEL_28:
  if ( v10 != 1 )
  {
LABEL_29:
    if ( !v126 && (~(_BYTE)v166 & 0x21) == 0 )
      goto LABEL_14;
    v12 = 0;
    goto LABEL_31;
  }
LABEL_157:
  v51 = si128.m128i_i32[2];
  v52 = si128.m128i_i32[2];
  if ( si128.m128i_i32[2] < SHIDWORD(v154) / 2 )
    goto LABEL_14;
  if ( v126 )
  {
    if ( a2 == v6 )
    {
      v85 = v160;
      v96 = v130;
      if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
        v96 = v160;
      v130 = v96;
      goto LABEL_297;
    }
    goto LABEL_160;
  }
  if ( (~(_BYTE)v166 & 0x21) != 0 )
  {
    if ( a2 == v6 )
    {
      v85 = v160;
      if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
      {
        v130 = v160;
        v52 = si128.m128i_i32[2];
      }
      goto LABEL_297;
    }
LABEL_160:
    v12 = 1;
LABEL_31:
    v21 = *((_QWORD *)&v159 + 1);
    v22 = v160 + 1;
    if ( *((_QWORD *)&v160 + 1) < (unsigned __int64)(v160 + 1) )
    {
      v20 = 0;
      goto LABEL_132;
    }
    *(_QWORD *)(*((_QWORD *)&v159 + 1) + 8 * v160) = v6;
    v23 = v160 + 1;
    *(_QWORD *)&v160 = v160 + 1;
    goto LABEL_33;
  }
  v20 = 0;
LABEL_245:
  if ( v52 )
    goto LABEL_14;
  v12 = HIDWORD(v154);
  if ( HIDWORD(v154) != 1 )
    goto LABEL_14;
  v50 = v160;
  if ( a2 != v6 )
  {
    v21 = *((_QWORD *)&v159 + 1);
    v22 = v160 + 1;
    if ( *((_QWORD *)&v160 + 1) < (unsigned __int64)(v160 + 1) )
      goto LABEL_132;
    goto LABEL_133;
  }
  if ( v20 )
  {
    v130 = v160;
  }
  else
  {
    v95 = v130;
    if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
      v95 = v160;
    v130 = v95;
  }
  if ( (_QWORD)v160 )
  {
    ++v147;
    v138 = 0;
    goto LABEL_122;
  }
LABEL_364:
  v111 = si128.m128i_i32[1];
  if ( si128.m128i_i32[1] <= 0 )
    v111 = 1;
  if ( v52 == v12 - v111 )
  {
    v138 = 0;
    v147 += v52 + 1;
    goto LABEL_118;
  }
LABEL_67:
  v134 = 0;
LABEL_68:
  clear_tinfo_t((char *)&v164 + 8);
  v39 = v161;
  if ( v161 )
  {
    v40 = v162;
    if ( (_QWORD)v162 )
    {
      v41 = 0;
      do
      {
        v42 = (__int64 *)(v39 + 40 * v41);
        v43 = *v42;
        if ( *v42 )
        {
          v42[1] = 0;
          qfree(v43);
          v39 = v161;
        }
        ++v41;
      }
      while ( v40 != v41 );
    }
    *(_QWORD *)&v162 = 0;
    qfree(v39);
  }
  if ( *((_QWORD *)&v159 + 1) )
  {
    *(_QWORD *)&v160 = 0;
    qfree(*((_QWORD *)&v159 + 1));
  }
  sub_118BA0((__int64)&v158);
  sub_118BA0((__int64)&v154);
  return v134;
}
