__int64 __fastcall sub_186F90(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __m128i si128; // xmm0
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // r13
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r12d
  __int64 v14; // rax
  int v15; // r8d
  int v16; // r13d
  __int64 *v17; // rax
  __int64 v18; // rdi
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // r13d
  __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // eax
  int v25; // r12d
  bool v26; // zf
  unsigned int v27; // ebx
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // r9d
  __int128 v31; // rdi
  __int64 *v32; // rax
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rcx
  char v36; // r12
  int v37; // ecx
  _QWORD *v38; // rbp
  _BYTE *v39; // rax
  _QWORD *v40; // r12
  char v41; // al
  __int64 v42; // r12
  __int64 v43; // rbp
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rdi
  int v48; // esi
  __int64 v49; // rax
  int v50; // eax
  unsigned __int8 v51; // bl
  char v52; // al
  __int64 v53; // rax
  __int32 v54; // edx
  __int32 v55; // esi
  int flags; // eax
  int v57; // r12d
  __int64 v58; // rdx
  __int64 v59; // r12
  int v60; // eax
  unsigned __int64 v61; // rbx
  _QWORD *v62; // r13
  int v63; // r12d
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  size_t v66; // rbp
  __int64 v67; // r9
  size_t v68; // r8
  __int64 v69; // rsi
  __int64 v70; // rbx
  int v71; // esi
  __int64 tinfo_size; // rbx
  int v73; // edx
  __m128i v74; // xmm1
  __int64 v75; // r12
  unsigned __int8 *v76; // rax
  int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r13
  int v84; // eax
  int v85; // ebx
  unsigned __int8 *v86; // rbx
  __int64 v87; // rdi
  __int64 v88; // rax
  int v89; // esi
  __int64 v90; // rax
  char v91; // dl
  unsigned __int64 v92; // rbp
  unsigned __int64 v93; // r13
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  int v98; // ecx
  int v99; // ecx
  int v100; // eax
  unsigned __int64 v101; // rsi
  __int64 v102; // rdi
  int v103; // ecx
  int v104; // r8d
  int v105; // r9d
  __int64 v106; // rax
  __int64 v107; // rbp
  unsigned __int64 v108; // r9
  size_t v109; // r10
  __int64 v110; // r13
  __int64 v111; // r12
  int v112; // ebx
  unsigned __int64 v113; // rbx
  int v114; // eax
  __int64 v115; // r13
  int v116; // eax
  unsigned __int64 v117; // rbx
  __int64 *v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // rax
  const char *v122; // r12
  __int64 v123; // rax
  __int64 v124; // [rsp+8h] [rbp-2E0h]
  unsigned __int8 v125; // [rsp+18h] [rbp-2D0h]
  int v126; // [rsp+18h] [rbp-2D0h]
  __int64 v127; // [rsp+18h] [rbp-2D0h]
  unsigned __int64 v128; // [rsp+18h] [rbp-2D0h]
  int v129; // [rsp+20h] [rbp-2C8h]
  bool v130; // [rsp+20h] [rbp-2C8h]
  size_t v131; // [rsp+20h] [rbp-2C8h]
  unsigned __int8 v132; // [rsp+2Fh] [rbp-2B9h]
  bool src; // [rsp+30h] [rbp-2B8h]
  __int64 srca; // [rsp+30h] [rbp-2B8h]
  void *srcb; // [rsp+30h] [rbp-2B8h]
  char v136; // [rsp+38h] [rbp-2B0h]
  char v137; // [rsp+38h] [rbp-2B0h]
  __int64 v138; // [rsp+38h] [rbp-2B0h]
  int v139; // [rsp+40h] [rbp-2A8h]
  unsigned int v140; // [rsp+40h] [rbp-2A8h]
  __int64 v141; // [rsp+40h] [rbp-2A8h]
  unsigned __int64 v142; // [rsp+50h] [rbp-298h]
  unsigned __int64 v143; // [rsp+50h] [rbp-298h]
  size_t v144; // [rsp+58h] [rbp-290h]
  int v145; // [rsp+64h] [rbp-284h] BYREF
  __int64 v146; // [rsp+68h] [rbp-280h] BYREF
  __int64 v147; // [rsp+70h] [rbp-278h] BYREF
  char v148[8]; // [rsp+78h] [rbp-270h] BYREF
  __int64 v149; // [rsp+80h] [rbp-268h]
  int v150; // [rsp+88h] [rbp-260h]
  int v151; // [rsp+8Ch] [rbp-25Ch]
  unsigned __int64 v152; // [rsp+90h] [rbp-258h] BYREF
  __int64 v153; // [rsp+98h] [rbp-250h]
  int v154; // [rsp+A0h] [rbp-248h]
  char v155; // [rsp+A4h] [rbp-244h]
  unsigned __int64 v156; // [rsp+A8h] [rbp-240h] BYREF
  __int128 v157; // [rsp+B0h] [rbp-238h] BYREF
  __int128 v158; // [rsp+C0h] [rbp-228h]
  unsigned __int64 v159; // [rsp+D0h] [rbp-218h] BYREF
  __int128 v160; // [rsp+D8h] [rbp-210h]
  __int128 v161; // [rsp+E8h] [rbp-200h]
  __int128 v162; // [rsp+F8h] [rbp-1F0h]
  __m128i v163; // [rsp+108h] [rbp-1E0h]
  unsigned int v164; // [rsp+118h] [rbp-1D0h]
  _BYTE v165[24]; // [rsp+120h] [rbp-1C8h] BYREF
  __int128 v166; // [rsp+138h] [rbp-1B0h]
  __int64 v167; // [rsp+148h] [rbp-1A0h]
  __int128 v168; // [rsp+150h] [rbp-198h]
  __int128 v169; // [rsp+160h] [rbp-188h]
  __int64 v170; // [rsp+190h] [rbp-158h]
  int v171; // [rsp+198h] [rbp-150h]
  __int64 v172; // [rsp+1A0h] [rbp-148h]
  char v173; // [rsp+1A8h] [rbp-140h]
  char v174[8]; // [rsp+1B0h] [rbp-138h] BYREF
  _BYTE *v175; // [rsp+1B8h] [rbp-130h]
  __int64 v176; // [rsp+1C0h] [rbp-128h]
  void *dest; // [rsp+1D0h] [rbp-118h] BYREF
  unsigned __int64 v178; // [rsp+1D8h] [rbp-110h]
  unsigned __int64 v179; // [rsp+1E0h] [rbp-108h]
  int v180; // [rsp+1F8h] [rbp-F0h]
  unsigned __int8 v181[4]; // [rsp+200h] [rbp-E8h] BYREF
  int v182; // [rsp+204h] [rbp-E4h]
  __int64 v183; // [rsp+208h] [rbp-E0h]
  __int64 v184; // [rsp+210h] [rbp-D8h]
  __int64 v185; // [rsp+218h] [rbp-D0h] BYREF
  char v186[24]; // [rsp+250h] [rbp-98h] BYREF
  char v187; // [rsp+2A0h] [rbp-48h] BYREF
  unsigned __int64 v188; // [rsp+2A8h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 64);
  v188 = __readfsqword(0x28u);
  if ( *(_QWORD *)(*(_QWORD *)(v3 + 1344) + 8LL) )
  {
    v49 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)&v165[8] = 0;
    *(_QWORD *)v165 = v49;
    if ( (sub_137670(v3, (__int64)v165) & 7) != 0 )
      return 0;
  }
  v157 = 0;
  v152 = 0xFFFFFFFF00000000LL;
  v156 = 0xFFFFFFFF00000000LL;
  v158 = 0;
  v160 = 0;
  v162 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424810);
  v153 = 0;
  v154 = 0;
  v155 = 0;
  v159 = 0;
  v164 = 16;
  v161 = -1;
  v163 = si128;
  v132 = sub_186840((__int64)&v152, a1, a2, 0, si128);
  if ( !v132 )
    goto LABEL_67;
  v6 = *(_QWORD *)(a1 + 64);
  v145 = 0;
  v7 = a2;
  v129 = -1;
  v124 = *(_QWORD *)(v6 + 1504);
  src = (unsigned int)(*(_DWORD *)a2 - 56) <= 1;
  while ( 1 )
  {
    v8 = v164;
    if ( (v164 & 1) != 0 )
      goto LABEL_8;
    if ( (_BYTE)v152 != 3 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( (_BYTE)v152 == 6 )
      {
        if ( !(unsigned int)sub_343460(*(_QWORD *)(v9 + 1496), v153) )
        {
          v8 = v164;
LABEL_8:
          v125 = 0;
          v10 = v8 & 0xFFFFFFFB;
          goto LABEL_9;
        }
        if ( (get_flags_ex() & 0x600) == 0x200 )
          prev_not_tail();
        flags = get_flags_ex();
        v8 = v164;
        if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x50000000 )
          goto LABEL_8;
      }
      else
      {
        if ( (_BYTE)v152 != 2 )
          goto LABEL_8;
        v38 = *(_QWORD **)(v9 + 1328);
        if ( !*v38 )
          goto LABEL_62;
        v39 = (_BYTE *)(*(_QWORD *)*v38 & 0xFFFFFFFFFFFFFFFCLL);
        v40 = v39;
        if ( !v39 )
          goto LABEL_172;
        if ( (*v39 & 2) != 0 )
          goto LABEL_62;
        v127 = v153;
        do
        {
          if ( (int)sub_257C40(v127) >= 0 )
          {
            if ( (int)sub_257C40(v40 + 3) >= 0 )
              goto LABEL_171;
            v40 = (_QWORD *)v40[2];
          }
          else
          {
            v40 = (_QWORD *)v40[1];
          }
        }
        while ( (*(_BYTE *)v40 & 2) == 0 );
        v40 = (_QWORD *)*v38;
LABEL_171:
        if ( v40 == **(_QWORD ***)(v9 + 1328) )
        {
LABEL_62:
          get_flags_ex();
          v41 = is_char();
        }
        else
        {
LABEL_172:
          v41 = is_char();
        }
        v8 = v164;
        if ( !v41 )
          goto LABEL_8;
      }
    }
    v10 = v8 | 4;
    v125 = v132;
LABEL_9:
    v164 = v10;
    v11 = sub_184C00(v124, (char *)&v152);
    v12 = v164;
    v13 = v11;
    if ( ((unsigned __int8)v164 & ((_QWORD)v162 != 0)) != 0 )
      goto LABEL_67;
    if ( v11 == 1 )
    {
      if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 && HIDWORD(v152) )
      {
        v48 = v163.m128i_i32[1];
        if ( v163.m128i_i32[1] <= 0 )
          v48 = 1;
        if ( HIDWORD(v152) - v48 != v163.m128i_i32[2] )
        {
          if ( v129 != -1 || (~(_BYTE)v164 & 3) != 0 )
          {
LABEL_13:
            if ( (v164 & 0xC) != 0 )
              goto LABEL_14;
            if ( a2 == v7 )
              goto LABEL_67;
LABEL_15:
            v14 = v160;
            v15 = v145;
            v16 = v10 & 2;
            if ( (_QWORD)v160 )
              goto LABEL_16;
            goto LABEL_19;
          }
          if ( (unsigned __int64)v158 > 4 )
            goto LABEL_173;
          if ( (v164 & 0xC) != 0 )
            goto LABEL_14;
          v13 = -1;
          goto LABEL_144;
        }
      }
    }
    else if ( v11 == -1 )
    {
      if ( v129 != -1 || (~(_BYTE)v164 & 3) != 0 )
        goto LABEL_13;
      if ( (unsigned __int64)v158 > 4 )
        goto LABEL_173;
      if ( (v164 & 0xC) != 0 )
        goto LABEL_14;
      goto LABEL_144;
    }
    if ( a2 != v7 )
      break;
    if ( v129 != -1 )
    {
      v21 = v164 & 0xC;
      if ( (v164 & 0xC) == 0 )
        goto LABEL_152;
      if ( v125 )
        goto LABEL_97;
      goto LABEL_104;
    }
LABEL_149:
    if ( (~(_BYTE)v164 & 3) != 0 )
    {
      v21 = v164 & 0xC;
      if ( (v164 & 0xC) != 0 )
        goto LABEL_103;
      if ( a2 != v7 )
        goto LABEL_28;
      goto LABEL_152;
    }
    if ( (unsigned __int64)v158 > 4 )
      goto LABEL_173;
    v21 = v164 & 0xC;
    if ( (v164 & 0xC) != 0 )
      goto LABEL_103;
LABEL_144:
    if ( a2 != v7 )
    {
      if ( v13 != 1 )
      {
        if ( v13 == -1 )
          goto LABEL_14;
        goto LABEL_29;
      }
      goto LABEL_157;
    }
LABEL_152:
    if ( v13 )
      goto LABEL_67;
    if ( !v125 )
    {
      v12 = ~(_BYTE)v164 & 0x21;
      if ( (~(_BYTE)v164 & 0x21) == 0 )
        goto LABEL_67;
    }
    if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 )
      v129 = v158;
LABEL_35:
    v25 = HIDWORD(v152) + v145;
    v26 = *(_QWORD *)(a2 + 8) == 0;
    v145 += HIDWORD(v152);
    if ( v26 && !*(_QWORD *)(a2 + 16) )
    {
LABEL_66:
      if ( !(_QWORD)v158 || (_BYTE)v152 == 2 && (~(_BYTE)v164 & 3) == 0 )
        goto LABEL_67;
      v136 = v132;
      goto LABEL_122;
    }
    v27 = HIDWORD(v156);
    v136 = sub_183A20((__int64 *)v124, (unsigned __int64)&v156, HIDWORD(v156), v12);
    if ( !v136
      || (unsigned __int8)(v152 - 2) > 1u
      && (HIDWORD(v152) != v27 || !(unsigned __int8)sub_183A20((__int64 *)v124, (unsigned __int64)&v152, v27, v28)) )
    {
      goto LABEL_67;
    }
    *((_QWORD *)&v31 + 1) = a2;
    *(_QWORD *)&v31 = a1;
    v32 = sub_185BD0(v31, (__int64)&v156, 0, v29, v30);
    v7 = (__int64)v32;
    if ( !v32 || (*((_BYTE *)v32 + 4) & 0x10) != 0 )
      goto LABEL_66;
    *(_OWORD *)v165 = 0xFFFFFFFF00000000LL;
    if ( !(unsigned __int8)sub_184280((__int64)v165, a1, (__int64)v32, 0, 0, si128) )
      goto LABEL_116;
    v33 = sub_183400(v124, (__int64)&v156, (__int64)v165);
    if ( v33 == -1 )
      goto LABEL_116;
    if ( SHIDWORD(v152) <= v33 )
    {
      if ( !under_debugger )
        sub_383060(51548);
      goto LABEL_419;
    }
    if ( v33 )
    {
      v34 = v159 + 40 * v160 - 40;
      if ( *(_DWORD *)(v34 + 32) != -1 )
        *(_QWORD *)(v34 + 24) -= v33;
      v139 = v33;
      sub_332080(v34, (unsigned int)v33);
      v145 = v25 - v139;
    }
    sub_125180((__int64)&v156, v165);
    v36 = sub_183FF0((__int64)&v152, a1, v7, v35);
    if ( !v36 )
      goto LABEL_116;
    if ( v155 && (v164 & 2) != 0 )
    {
      v37 = v163.m128i_i32[1];
      if ( v163.m128i_i32[1] <= 0 )
        v37 = 1;
      if ( SHIDWORD(v152) / v37 > 64 )
        goto LABEL_116;
    }
    if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1 )
    {
      v50 = 32;
      if ( *(_BYTE *)(v7 + 32) == 11 )
        v50 = (*(_DWORD *)(*(_QWORD *)(v7 + 72) + 280LL) & 0x80) == 0 ? 64 : 32;
      v164 |= v50;
      if ( (unsigned int)(*(_DWORD *)v7 - 56) <= 1
        && (*(_BYTE *)(v7 + 32) != 11 || *(char *)(*(_QWORD *)(v7 + 72) + 280LL) < 0)
        && !v125 )
      {
LABEL_116:
        sub_11CDA0((__int64)v165);
        v20 = v158;
LABEL_117:
        if ( v20 )
          goto LABEL_122;
LABEL_118:
        if ( HIDWORD(v152) == 1 )
          goto LABEL_67;
LABEL_119:
        if ( (v164 & 8) != 0 || (_BYTE)v152 != 2 )
        {
          v129 = -1;
          goto LABEL_122;
        }
        goto LABEL_67;
      }
    }
    if ( !src )
    {
      if ( (unsigned __int64)v158 <= 4 )
        goto LABEL_58;
      if ( !(unsigned __int8)sub_185AA0(a1, a2) )
      {
        sub_11CDA0((__int64)v165);
        goto LABEL_67;
      }
    }
    src = v36;
LABEL_58:
    sub_11CDA0((__int64)v165);
  }
  if ( (v164 & 2) == 0 )
    goto LABEL_27;
  v16 = v10 & 2;
  if ( (v10 & 2) != 0 )
  {
    if ( v129 == -1 )
      goto LABEL_149;
LABEL_27:
    v21 = v164 & 0xC;
    if ( (v164 & 0xC) == 0 )
      goto LABEL_28;
LABEL_103:
    if ( v125 )
      goto LABEL_105;
LABEL_104:
    if ( (~(_BYTE)v164 & 0x21) != 0 )
      goto LABEL_105;
    if ( !v11 )
      goto LABEL_14;
    v55 = v163.m128i_i32[2];
    goto LABEL_245;
  }
  if ( (v164 & 1) != 0 )
  {
    if ( v129 != -1 )
    {
      v15 = v145;
LABEL_83:
      v14 = v160;
      if ( !(_QWORD)v160 )
      {
LABEL_84:
        v19 = v12 & 0xFFFFFFFD;
        goto LABEL_21;
      }
LABEL_16:
      *(_QWORD *)&v160 = v14 - 1;
      v17 = (__int64 *)(v159 + 40 * (v14 - 1));
      v18 = *v17;
      if ( *v17 )
      {
        v17[1] = 0;
        v126 = v15;
        qfree(v18);
        v15 = v126;
      }
      LODWORD(v12) = v164;
LABEL_19:
      if ( !v16 )
        goto LABEL_84;
      v19 = v12 | 2;
LABEL_21:
      v164 = v19;
      if ( v15 <= 9 )
      {
        v20 = v158;
        v136 = v132;
      }
      else
      {
        v136 = v10 & 1;
        v20 = v158;
        if ( (v10 & 1) != 0 )
        {
          v164 = v19 | 1;
        }
        else
        {
          v164 = v19 & 0xFFFFFFFE;
          v136 = v132;
        }
      }
      goto LABEL_117;
    }
    if ( (unsigned __int64)v158 > 4 )
    {
LABEL_173:
      if ( (v164 & 0xC) != 0 )
      {
        v129 = -1;
        goto LABEL_14;
      }
      if ( a2 == v7 )
        goto LABEL_67;
      v129 = -1;
    }
    else
    {
      if ( (v164 & 0xC) != 0 )
      {
        v14 = v160;
        v15 = v145;
        if ( !(_QWORD)v160 )
          goto LABEL_84;
        goto LABEL_16;
      }
LABEL_14:
      if ( a2 == v7 )
        goto LABEL_67;
    }
    goto LABEL_15;
  }
  v89 = v163.m128i_i32[1];
  v15 = v145;
  if ( v163.m128i_i32[1] <= 0 )
    v89 = 1;
  if ( v145 / v89 > 64 )
    goto LABEL_83;
  v21 = v164 & 0xC;
  if ( (v164 & 0xC) != 0 )
  {
LABEL_105:
    if ( a2 != v7 )
    {
      v22 = *((_QWORD *)&v157 + 1);
      v23 = v158 + 1;
      if ( *((_QWORD *)&v158 + 1) >= (unsigned __int64)(v158 + 1) )
      {
        *(_QWORD *)(*((_QWORD *)&v157 + 1) + 8 * v158) = v7;
        *(_QWORD *)&v158 = v158 + 1;
        v129 = v158;
        goto LABEL_34;
      }
LABEL_132:
      *((_QWORD *)&v157 + 1) = qvector_reserve((__int64)&v157 + 8, v22, v23, 8);
      v22 = *((_QWORD *)&v157 + 1);
      v53 = v158;
LABEL_133:
      *(_QWORD *)(v22 + 8 * v53) = v7;
      v24 = v158 + 1;
      *(_QWORD *)&v158 = v158 + 1;
      if ( v21 )
      {
        v129 = v24;
LABEL_34:
        if ( v13 != 1 )
          goto LABEL_35;
        v54 = v163.m128i_i32[2];
        v88 = v158;
        v55 = v163.m128i_i32[2];
LABEL_297:
        if ( !v88 )
        {
          v13 = HIDWORD(v152);
          if ( HIDWORD(v152) )
            goto LABEL_364;
          v136 = 0;
          v145 += v54 + 1;
          goto LABEL_119;
        }
        v136 = 0;
        v145 += v54 + 1;
LABEL_122:
        v51 = 0;
        if ( *(_BYTE *)(a2 + 64) == 5 )
          v51 = sub_1EF9B0(**(_QWORD **)(a2 + 72), *(_QWORD *)(*(_QWORD *)(a2 + 72) + 8LL), *(unsigned int *)(a2 + 68));
        v52 = v164;
        if ( (v164 & 2) == 0 && v163.m128i_i32[1] <= 1 && *(_DWORD *)(v124 + 88) + 1 <= v145 )
        {
          if ( (v164 & 1) == 0 )
          {
            if ( v51 )
            {
              if ( v145 > 2 )
              {
                if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 || *(_BYTE *)(a2 + 64) != 6 )
                  goto LABEL_315;
                goto LABEL_303;
              }
            }
            else if ( v145 > 9 )
            {
              if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 || *(_BYTE *)(a2 + 64) != 6 )
              {
LABEL_315:
                if ( !v136 )
                  goto LABEL_185;
LABEL_307:
                if ( v129 == -1 )
                {
LABEL_308:
                  v129 = v158;
                  goto LABEL_274;
                }
                goto LABEL_274;
              }
              v51 = v132;
              goto LABEL_303;
            }
          }
          if ( v136 )
            goto LABEL_307;
          goto LABEL_177;
        }
        if ( (v164 & 1) != 0 )
        {
          if ( v136 )
          {
            if ( v163.m128i_i32[1] > 1 || v129 == -1 )
              goto LABEL_67;
            goto LABEL_274;
          }
          goto LABEL_177;
        }
        if ( v51 )
        {
          if ( v145 > 2 )
          {
            if ( (unsigned int)(*(_DWORD *)a2 - 56) > 1 )
            {
              if ( *(_BYTE *)(a2 + 64) != 6 )
                goto LABEL_269;
              v51 = 0;
              goto LABEL_303;
            }
LABEL_343:
            if ( !v136 )
              goto LABEL_185;
            v91 = v136;
LABEL_273:
            if ( v129 == -1 )
            {
              if ( !v91 )
                goto LABEL_67;
              goto LABEL_308;
            }
LABEL_274:
            if ( !v129 )
              goto LABEL_67;
            if ( v129 < (unsigned __int64)v158 )
            {
              v92 = v160;
              *(_QWORD *)&v158 = v129;
              if ( v129 >= (unsigned __int64)v160 )
              {
                if ( !under_debugger )
                  sub_383060(51852);
                goto LABEL_419;
              }
              v93 = v129 + 1;
              if ( v93 != (_QWORD)v160 )
              {
                v59 = v159;
                *(_QWORD *)&v166 = 0;
                memset(v165, 0, sizeof(v165));
                DWORD2(v166) = -1;
                v94 = v159;
                if ( v93 < (unsigned __int64)v160 )
                {
                  v117 = v129 + 1;
                  do
                  {
                    v118 = (__int64 *)(v59 + 40 * v117);
                    v119 = *v118;
                    if ( *v118 )
                    {
                      v118[1] = 0;
                      qfree(v119);
                      v59 = v159;
                    }
                    ++v117;
                  }
                  while ( v117 < v92 );
                }
                else if ( (unsigned __int64)v165 < v159
                       || (unsigned __int64)v165 >= v159 + 40LL * *((_QWORD *)&v160 + 1) )
                {
                  if ( *((_QWORD *)&v160 + 1) < v93 )
                  {
                    v94 = qvector_reserve((__int64)&v159, v159, v129 + 1, 40);
                    v159 = v94;
                    v92 = v160;
                  }
                  v59 = v159;
                  if ( v92 < v93 )
                  {
                    v120 = 40 * v92;
                    do
                    {
                      v121 = v120 + v94;
                      ++v92;
                      v120 += 40;
                      *(_QWORD *)v121 = 0;
                      *(_QWORD *)(v121 + 24) = 0;
                      *(_DWORD *)(v121 + 32) = -1;
                      *(_OWORD *)(v121 + 8) = 0;
                      v94 = v159;
                      v59 = v159;
                    }
                    while ( v93 != v92 );
                  }
                }
                else
                {
                  v95 = v160;
                  if ( *((_QWORD *)&v160 + 1) >= v93
                    || (v123 = qvector_reserve((__int64)&v159, v159, v129 + 1, 40),
                        v95 = v160,
                        v159 = v123,
                        v59 = v123,
                        (unsigned __int64)v160 < v93) )
                  {
                    v96 = 40 * v95;
                    do
                    {
                      v97 = v59 + v96;
                      ++v95;
                      v96 += 40;
                      *(_QWORD *)v97 = 0;
                      *(_QWORD *)(v97 + 24) = 0;
                      *(_DWORD *)(v97 + 32) = -1;
                      *(_OWORD *)(v97 + 8) = 0;
                      v59 = v159;
                    }
                    while ( v93 != v95 );
                  }
                }
                *(_QWORD *)&v160 = v129 + 1;
                v60 = *(_DWORD *)(v59 + 32);
                v61 = v59;
                if ( v60 == -1 )
                  goto LABEL_289;
                goto LABEL_186;
              }
            }
LABEL_185:
            v59 = v159;
            v60 = *(_DWORD *)(v159 + 32);
            v61 = v159;
            if ( v60 == -1 )
            {
LABEL_202:
              if ( (unsigned __int64)v160 <= 1 )
              {
                v62 = (_QWORD *)v59;
LABEL_204:
                if ( v62[1] <= 1u )
                  goto LABEL_67;
                goto LABEL_205;
              }
              v59 = v159;
LABEL_289:
              v62 = (_QWORD *)v61;
              v61 = v59;
              goto LABEL_188;
            }
LABEL_186:
            if ( *(_QWORD *)(v59 + 8) > 1u )
            {
              v62 = (_QWORD *)v59;
              if ( (unsigned __int64)v160 > 1 )
              {
LABEL_188:
                v63 = 1;
                v64 = 1;
                while ( 1 )
                {
                  v70 = v61 + 40 * v64;
                  v71 = *(_DWORD *)(v70 + 32);
                  if ( v71 == -1 )
                    break;
                  v65 = *(_QWORD *)(v70 + 8);
                  v66 = v65 - 1;
                  if ( v65 <= 1 )
                  {
                    sub_183D60(v70, v71, *(_DWORD *)(v70 + 24));
                    v65 = *(_QWORD *)(v70 + 8);
                    if ( !v65 )
                      goto LABEL_195;
                    goto LABEL_199;
                  }
LABEL_190:
                  v67 = v62[1];
                  v68 = v66;
                  if ( v67 )
                  {
                    --v67;
                    v68 = v66 + v67;
                    v65 = v66 + v67 + 1;
                  }
                  v69 = *v62;
                  if ( v62[2] < v65 )
                  {
                    v141 = v67;
                    v131 = v68;
                    v128 = v65;
                    v90 = qvector_reserve((__int64)v62, v69, v65, 1);
                    *v62 = v90;
                    v67 = v141;
                    v69 = v90;
                    v68 = v131;
                    v65 = v128;
                  }
                  v62[1] = v65;
                  *(_BYTE *)(v69 + v68) = 0;
                  memcpy((void *)(v67 + *v62), *(const void **)v70, v66);
LABEL_195:
                  v64 = ++v63;
                  if ( v63 >= (unsigned __int64)v160 )
                    goto LABEL_204;
                  v61 = v159;
                }
                v65 = *(_QWORD *)(v70 + 8);
                if ( !v65 )
                  goto LABEL_195;
LABEL_199:
                v66 = v65 - 1;
                if ( v65 == 1 )
                  goto LABEL_195;
                goto LABEL_190;
              }
LABEL_205:
              tinfo_size = get_tinfo_size();
              v73 = 1;
              v74 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
              if ( v163.m128i_i32[1] > 0 )
                v73 = v163.m128i_i32[1];
              v75 = v73;
              v130 = v73 != tinfo_size;
              v137 = v136 | (v130 && v163.m128i_i32[1] > 1);
              v76 = (unsigned __int8 *)v174;
              do
              {
                *((_DWORD *)v76 + 1) = -1;
                v76 += 80;
                *((_WORD *)v76 - 40) = 0;
                *((_WORD *)v76 - 39) = 0;
                *((_QWORD *)v76 - 9) = 0;
                *((__m128i *)v76 - 4) = v74;
                *((_QWORD *)v76 - 6) = 0;
                *(_OWORD *)(v76 - 40) = 0;
                *((_DWORD *)v76 - 6) = 0;
                *((_QWORD *)v76 - 2) = 0;
                *((_DWORD *)v76 - 2) = 0;
              }
              while ( &v187 != (char *)v76 );
              if ( v137 )
              {
                v100 = 5;
                if ( v73 == tinfo_size )
                  v100 = 34;
                v140 = v100;
              }
              else
              {
                v77 = 6;
                if ( v73 == tinfo_size )
                  v77 = 36;
                v140 = v77;
              }
              if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
              {
                v106 = *(_QWORD *)(a2 + 72);
                if ( (_QWORD)v158 || *(_BYTE *)(a2 + 64) != 8 || v140 != *(_DWORD *)(v106 + 284) )
                {
                  v107 = *(_QWORD *)(v106 + 24);
                  sub_125180((__int64)v174, (unsigned __int8 *)v107);
                  v176 = *(_QWORD *)(v107 + 16);
                  copy_tinfo_t();
                  if ( &dest != (void **)(v107 + 32) )
                  {
                    v108 = *(_QWORD *)(v107 + 40);
                    if ( v108 && (v109 = v108 - 1, v108 != 1) )
                    {
                      srcb = *(void **)(v107 + 32);
                      if ( v179 < v108 )
                      {
                        v144 = v108 - 1;
                        v143 = *(_QWORD *)(v107 + 40);
                        dest = (void *)qvector_reserve((__int64)&dest, (__int64)dest, v108, 1);
                        v109 = v144;
                        v108 = v143;
                      }
                      v178 = v108;
                      v142 = v108;
                      memmove(dest, srcb, v109);
                      *((char *)dest + v142 - 1) = 0;
                    }
                    else
                    {
                      v178 = 0;
                    }
                  }
                  copy_argloc();
                  v180 = *(_DWORD *)(v107 + 72);
LABEL_219:
                  if ( v75 == tinfo_size )
                  {
                    sub_32C540(v165, v124, *(_QWORD *)(a1 + 480) + 376LL);
                  }
                  else
                  {
                    *(_QWORD *)v165 = 0;
                    copy_tinfo_t();
                  }
                  copy_tinfo_t();
                  clear_tinfo_t();
                  srca = sub_331FE0(*v62, 0);
                  if ( v75 == tinfo_size && (v164 & 0x10) != 0 )
                  {
                    v181[0] = 6;
                    v80 = *((_QWORD *)&v161 + 1);
                    v81 = (unsigned int)(8 * *(_DWORD *)(v124 + 84));
                    v82 = (int)v81;
                    if ( (unsigned __int64)(int)v81 <= 0x3F )
                    {
                      v82 = ~(-1LL << (8 * *(_BYTE *)(v124 + 84)));
                      v80 = v82 & *((_QWORD *)&v161 + 1);
                    }
                    v183 = v80;
                    sub_11C950(v181, v124, v82, v81);
                    if ( (_BYTE)v185 )
                      v185 |= 0x40uLL;
                  }
                  else
                  {
                    v181[0] = 3;
                    v101 = v62[1];
                    v102 = *v62;
                    if ( v101 < v62[2] )
                    {
                      if ( v102 )
                      {
                        if ( v101 )
                        {
                          v102 = qrealloc();
                          if ( !v102 )
                            v102 = *v62;
                        }
                      }
                    }
                    *v62 = 0;
                    *(_OWORD *)(v62 + 1) = 0;
                    v183 = v102;
                  }
                  v182 = *(_DWORD *)(v124 + 84);
                  v184 = v161;
                  if ( v137 )
                  {
                    if ( (v164 & 2) != 0 )
                    {
                      if ( v163.m128i_i32[1] <= 1 )
                        goto LABEL_232;
                      goto LABEL_230;
                    }
                    if ( v163.m128i_i32[1] > 1 )
                    {
LABEL_230:
                      if ( v130 )
                        srca *= v163.m128i_i32[1];
LABEL_232:
                      *(_QWORD *)v165 = 7;
                      copy_tinfo_t();
                      clear_tinfo_t();
                      v83 = *(_QWORD *)(a2 + 24);
                      v84 = get_tinfo_size();
                      sub_120A10((__int64)v186, v124, srca, v84, v83, 2);
                      if ( v75 != tinfo_size )
                        copy_tinfo_t();
                      v85 = 3;
                      if ( v140 == 2 )
                        goto LABEL_235;
                      goto LABEL_325;
                    }
                    *(_QWORD *)v165 = 7;
                    copy_tinfo_t();
                    clear_tinfo_t();
                    if ( *(_DWORD *)(v159 + 32) != -1 )
                    {
                      v115 = *(_QWORD *)(a2 + 24);
                      v116 = get_tinfo_size();
                      sub_120A10((__int64)v181, v124, *(int *)(v159 + 32), v116, v115, 1);
                      v140 = 2;
                      goto LABEL_232;
                    }
                    if ( !under_debugger )
                      sub_383060(52621);
LABEL_419:
                    BUG();
                  }
                  if ( v174[0] != 10 || *v175 != 5 )
                  {
LABEL_324:
                    v85 = 2;
LABEL_325:
                    copy_tinfo_t();
                    sub_32C700(v124, (unsigned int)&v185, 1, v103, v104, v105);
LABEL_235:
                    sub_186120(a1, a2, (__int64)&v152, v85, v174, v140);
                    goto LABEL_236;
                  }
                  sub_32F330(v175, &v146);
                  v110 = *(_QWORD *)(a1 + 64);
                  v111 = v146;
                  v147 = 0;
                  v112 = *(_DWORD *)(*(_QWORD *)(v110 + 1504) + 80LL);
                  v167 = 0;
                  v170 = 1;
                  v171 = -1;
                  v172 = 0;
                  v173 = 0;
                  memset(v165, 0, sizeof(v165));
                  v166 = 0;
                  v168 = 0;
                  v169 = 0;
                  v138 = sub_1D0250(v110, v165, v146, 0, &v147);
                  if ( sub_1CFD50(v110, v111) < 0 )
                  {
LABEL_359:
                    clear_tinfo_t();
                    clear_tinfo_t();
                    if ( v167 )
                    {
                      *(_QWORD *)&v168 = 0;
                      qfree(v167);
                    }
                    if ( *(_QWORD *)&v165[16] )
                    {
                      *(_QWORD *)&v166 = 0;
                      qfree(*(__int64 *)&v165[16]);
                    }
                    goto LABEL_324;
                  }
                  v113 = (srca + v112 - 1 + 1) & -v112;
                  if ( v138 != -1 )
                  {
                    if ( *(_QWORD *)&v165[8] >> 3 >= v113 || (get_tinfo_property() & 0x2F) == 0xD )
                      goto LABEL_359;
                    if ( (_QWORD)v166 )
                    {
                      v122 = *(const char **)&v165[16];
                      if ( !*(_QWORD *)&v165[16]
                        || !strncmp(*(const char **)&v165[16], "arg_", 4u)
                        || !strncmp(v122, "var_", 4u) )
                      {
                        goto LABEL_394;
                      }
                    }
                    else
                    {
                      v122 = s1;
                      if ( !s1 )
                        goto LABEL_394;
                    }
                    if ( strncmp(v122, "anonymous", 9u) )
                      goto LABEL_359;
                  }
LABEL_394:
                  get_tinfo_property4();
                  get_func();
                  delete_frame_members();
                  sub_32C270(v148, *(_QWORD *)(v110 + 1504), 1);
                  if ( v113 != 1 )
                  {
                    v150 = 0;
                    v151 = v113;
                    v149 = 0;
                    copy_tinfo_t();
                    create_tinfo();
                    clear_tinfo_t();
                  }
                  if ( v138 == -1 )
                    add_frame_member();
                  else
                    set_frame_member_type();
                  clear_tinfo_t();
                  goto LABEL_359;
                }
              }
              else if ( src || (unsigned __int8)sub_185AA0(a1, a2) )
              {
                sub_11CA10(v174, (char *)(a2 + 64));
                if ( *(_DWORD *)a2 != 1 )
                  sub_11C950((unsigned __int8 *)v174, v124, v78, v79);
                v176 = *(_QWORD *)(a2 + 24);
                goto LABEL_219;
              }
              v132 = 0;
LABEL_236:
              v86 = (unsigned __int8 *)&v187;
              do
              {
                v86 -= 80;
                cleanup_argloc();
                v87 = *((_QWORD *)v86 + 4);
                if ( v87 )
                {
                  *((_QWORD *)v86 + 5) = 0;
                  qfree(v87);
                }
                clear_tinfo_t();
                sub_11CDA0((__int64)v86);
              }
              while ( v86 != (unsigned __int8 *)v174 );
              goto LABEL_68;
            }
            sub_183D60(v59, v60, *(_DWORD *)(v59 + 24));
            goto LABEL_202;
          }
        }
        else if ( v145 > 9 )
        {
          if ( (unsigned int)(*(_DWORD *)a2 - 56) > 1 )
          {
            if ( *(_BYTE *)(a2 + 64) != 6 )
            {
LABEL_269:
              if ( !v136 )
                goto LABEL_185;
              v91 = v136;
LABEL_271:
              if ( (v52 & 1) != 0 && v163.m128i_i32[1] > 1 )
                goto LABEL_67;
              goto LABEL_273;
            }
LABEL_303:
            if ( (get_flags_ex() & 0x400) != 0 )
            {
              if ( !v136 )
                goto LABEL_185;
              v91 = v136;
              goto LABEL_306;
            }
            v91 = 0;
            if ( v136 )
            {
LABEL_306:
              if ( v51 )
                goto LABEL_307;
              v52 = v164;
              goto LABEL_271;
            }
LABEL_177:
            if ( v129 < 0 && (_QWORD)v158 )
            {
              if ( !(unsigned __int8)sub_183380(
                                       (unsigned int *)&v145,
                                       (int *)a2,
                                       *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL)) )
                goto LABEL_67;
              v57 = 0;
              v58 = 0;
              if ( (_QWORD)v158 != 1 )
              {
                do
                {
                  if ( v145 <= 0 )
                    break;
                  if ( !(unsigned __int8)sub_183380(
                                           (unsigned int *)&v145,
                                           *(int **)(*((_QWORD *)&v157 + 1) + 8 * v58),
                                           *(unsigned __int8 *)(*(_QWORD *)(a1 + 480) + 130LL)) )
                    goto LABEL_67;
                  v58 = ++v57;
                }
                while ( v57 < (unsigned __int64)(v158 - 1) );
              }
            }
            goto LABEL_185;
          }
          goto LABEL_343;
        }
        if ( v136 )
        {
          if ( v129 == -1 )
            goto LABEL_67;
          goto LABEL_274;
        }
        goto LABEL_177;
      }
LABEL_33:
      if ( (unsigned int)(*(_DWORD *)v7 - 56) > 1 )
        goto LABEL_34;
LABEL_98:
      v129 = v24;
      goto LABEL_34;
    }
LABEL_97:
    v24 = v158;
    goto LABEL_98;
  }
LABEL_28:
  if ( v11 != 1 )
  {
LABEL_29:
    if ( !v125 && (~(_BYTE)v164 & 0x21) == 0 )
      goto LABEL_14;
    v13 = 0;
    goto LABEL_31;
  }
LABEL_157:
  v54 = v163.m128i_i32[2];
  v55 = v163.m128i_i32[2];
  if ( v163.m128i_i32[2] < SHIDWORD(v152) / 2 )
    goto LABEL_14;
  if ( v125 )
  {
    if ( a2 == v7 )
    {
      v88 = v158;
      v99 = v129;
      if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
        v99 = v158;
      v129 = v99;
      goto LABEL_297;
    }
    goto LABEL_160;
  }
  if ( (~(_BYTE)v164 & 0x21) != 0 )
  {
    if ( a2 == v7 )
    {
      v88 = v158;
      if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
      {
        v129 = v158;
        v55 = v163.m128i_i32[2];
      }
      goto LABEL_297;
    }
LABEL_160:
    v13 = 1;
LABEL_31:
    v22 = *((_QWORD *)&v157 + 1);
    v23 = v158 + 1;
    if ( *((_QWORD *)&v158 + 1) < (unsigned __int64)(v158 + 1) )
    {
      v21 = 0;
      goto LABEL_132;
    }
    *(_QWORD *)(*((_QWORD *)&v157 + 1) + 8 * v158) = v7;
    v24 = v158 + 1;
    *(_QWORD *)&v158 = v158 + 1;
    goto LABEL_33;
  }
  v21 = 0;
LABEL_245:
  if ( v55 )
    goto LABEL_14;
  v13 = HIDWORD(v152);
  if ( HIDWORD(v152) != 1 )
    goto LABEL_14;
  v53 = v158;
  if ( a2 != v7 )
  {
    v22 = *((_QWORD *)&v157 + 1);
    v23 = v158 + 1;
    if ( *((_QWORD *)&v158 + 1) < (unsigned __int64)(v158 + 1) )
      goto LABEL_132;
    goto LABEL_133;
  }
  if ( v21 )
  {
    v129 = v158;
  }
  else
  {
    v98 = v129;
    if ( (unsigned int)(*(_DWORD *)a2 - 56) <= 1 )
      v98 = v158;
    v129 = v98;
  }
  if ( (_QWORD)v158 )
  {
    ++v145;
    v136 = 0;
    goto LABEL_122;
  }
LABEL_364:
  v114 = v163.m128i_i32[1];
  if ( v163.m128i_i32[1] <= 0 )
    v114 = 1;
  if ( v55 == v13 - v114 )
  {
    v136 = 0;
    v145 += v55 + 1;
    goto LABEL_118;
  }
LABEL_67:
  v132 = 0;
LABEL_68:
  clear_tinfo_t();
  v42 = v159;
  if ( v159 )
  {
    v43 = v160;
    if ( (_QWORD)v160 )
    {
      v44 = 0;
      do
      {
        v45 = (__int64 *)(v42 + 40 * v44);
        v46 = *v45;
        if ( *v45 )
        {
          v45[1] = 0;
          qfree(v46);
          v42 = v159;
        }
        ++v44;
      }
      while ( v43 != v44 );
    }
    *(_QWORD *)&v160 = 0;
    qfree(v42);
  }
  if ( *((_QWORD *)&v157 + 1) )
  {
    *(_QWORD *)&v158 = 0;
    qfree(*((__int64 *)&v157 + 1));
  }
  sub_11CDA0((__int64)&v156);
  sub_11CDA0((__int64)&v152);
  return v132;
}
