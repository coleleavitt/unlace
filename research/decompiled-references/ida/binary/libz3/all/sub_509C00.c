__int64 __fastcall sub_509C00(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  _OWORD *v8; // rax
  unsigned int v9; // r13d
  int v10; // r12d
  _QWORD *v11; // rdx
  unsigned int v12; // r14d
  unsigned int *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _DWORD *v16; // rax
  _QWORD *v17; // rdx
  __int64 v18; // rax
  unsigned int *v19; // rax
  _QWORD *v20; // r14
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  _QWORD *v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // r15d
  unsigned int v28; // eax
  unsigned int v29; // r14d
  int v30; // r8d
  __int64 v31; // rdi
  __int64 v32; // r9
  char *v33; // rdx
  size_t v34; // r10
  int *v35; // rcx
  int *v36; // rax
  int v37; // esi
  __int64 v38; // r13
  unsigned int v39; // r12d
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned int v42; // edx
  unsigned int v43; // eax
  __int64 v44; // r8
  unsigned int v45; // edx
  __int64 v46; // rax
  __int64 (__fastcall *v47)(__int64, __int64); // r8
  unsigned __int64 v48; // rdx
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  _QWORD *v52; // rcx
  _QWORD *v53; // r12
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // r13
  _QWORD *v58; // r14
  unsigned int v59; // eax
  _QWORD *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v63; // edx
  unsigned int *v64; // r8
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // r14
  int v67; // edi
  __int64 *v68; // r9
  __int64 v69; // rcx
  unsigned __int64 v70; // rsi
  __m128i v71; // xmm0
  _QWORD *v72; // r14
  _QWORD *v73; // rbx
  __int64 v74; // rdi
  void *v75; // rdi
  int v76; // esi
  unsigned int v77; // esi
  int *v78; // rax
  int *v79; // rdi
  int v80; // esi
  unsigned int v81; // ecx
  __int64 v82; // rsi
  unsigned int v83; // edx
  unsigned int v84; // ecx
  size_t v85; // rsi
  unsigned int *v86; // rax
  unsigned int v87; // r15d
  size_t v88; // rsi
  unsigned int *v89; // rax
  __int64 v90; // rax
  unsigned int v91; // r15d
  size_t v92; // rsi
  unsigned int *v93; // rax
  __int64 v94; // rax
  unsigned int v95; // r15d
  size_t v96; // rsi
  unsigned int *v97; // rax
  _DWORD *v98; // rdx
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // rax
  unsigned int v102; // ecx
  __int64 *v103; // rcx
  __int64 *v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rsi
  unsigned int v107; // r8d
  unsigned int v108; // r11d
  unsigned int v109; // r10d
  __int64 v110; // rax
  unsigned int v111; // edx
  unsigned __int64 v112; // r14
  int v113; // edi
  __int64 *v114; // r9
  __int64 v115; // rcx
  unsigned __int64 v116; // rsi
  __m128i v117; // xmm0
  _QWORD *v118; // r14
  _QWORD *v119; // rbx
  __int64 v120; // rdi
  void *v121; // rdi
  _QWORD *v122; // rax
  int v123; // ecx
  _QWORD *v124; // rax
  int *v125; // r11
  int *v126; // rdx
  int *v127; // rax
  char *i; // r9
  __int64 v129; // rdx
  int *v130; // rsi
  int *v131; // rdx
  int v132; // esi
  unsigned int v133; // edx
  unsigned int v134; // eax
  unsigned int v135; // ecx
  unsigned int v136; // eax
  _QWORD *v137; // rax
  _QWORD *v138; // rax
  __int64 *v139; // rcx
  _DWORD *v140; // rsi
  __int64 v141; // r10
  __int64 v142; // r10
  __int64 *v143; // rcx
  _DWORD *v144; // rsi
  __int64 v145; // r10
  __int64 v146; // r10
  __int64 v147; // rdx
  __int64 v148; // rcx
  unsigned int v149; // edi
  unsigned int v150; // r9d
  unsigned int v151; // r8d
  __int64 v152; // rax
  unsigned int v153; // eax
  _DWORD *v154; // rax
  _DWORD *v155; // rax
  char **v156; // rbp
  char **v157; // rbp
  char **v158; // rbp
  char **v159; // rbp
  char **v160; // rbp
  char **exception; // rbp
  char *v163; // [rsp+8h] [rbp-110h]
  unsigned __int64 *v164; // [rsp+10h] [rbp-108h]
  unsigned int v165; // [rsp+10h] [rbp-108h]
  size_t v166; // [rsp+10h] [rbp-108h]
  int v167; // [rsp+10h] [rbp-108h]
  unsigned int v168; // [rsp+18h] [rbp-100h]
  char v170; // [rsp+2Eh] [rbp-EAh]
  int v172; // [rsp+30h] [rbp-E8h]
  unsigned int v173; // [rsp+30h] [rbp-E8h]
  int v174; // [rsp+38h] [rbp-E0h]
  unsigned int v175; // [rsp+40h] [rbp-D8h]
  size_t v176; // [rsp+40h] [rbp-D8h]
  unsigned int *v177; // [rsp+48h] [rbp-D0h]
  unsigned int *v178; // [rsp+48h] [rbp-D0h]
  unsigned int *v179; // [rsp+48h] [rbp-D0h]
  int v180; // [rsp+48h] [rbp-D0h]
  int *v181; // [rsp+48h] [rbp-D0h]
  _DWORD *v182; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v183; // [rsp+50h] [rbp-C8h]
  _DWORD *v184; // [rsp+50h] [rbp-C8h]
  char *v185; // [rsp+50h] [rbp-C8h]
  char *v186; // [rsp+50h] [rbp-C8h]
  __int64 v187; // [rsp+58h] [rbp-C0h]
  __int64 v188; // [rsp+58h] [rbp-C0h]
  __int64 v189; // [rsp+80h] [rbp-98h] BYREF
  void *ptr; // [rsp+88h] [rbp-90h]
  __int64 v191; // [rsp+90h] [rbp-88h] BYREF
  __int64 v192; // [rsp+98h] [rbp-80h]
  __int64 v193; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v194; // [rsp+A8h] [rbp-70h]
  _QWORD v195[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v196[11]; // [rsp+C0h] [rbp-58h] BYREF

  v4 = (__int64)a1;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( (_BYTE)result )
  {
    if ( !a3 )
      return result;
    return sub_5071D0(a3, a2);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1) )
  {
    result = sub_5071D0((__int64)a1, a2);
    if ( !a3 )
      return result;
    return sub_5071D0(a3, a2);
  }
  v6 = sub_186B270(0x38u);
  *(_QWORD *)(v6 + 32) = 0;
  *(_QWORD *)(v6 + 40) = off_1C4F498;
  v7 = a1[2];
  *(__m128i *)v6 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 8), (__m128i)(unsigned __int64)(a1 + 8));
  *(_QWORD *)(v6 + 48) = v6;
  *(_OWORD *)(v6 + 16) = 0;
  if ( v7 )
    v168 = *(_DWORD *)(v7 - 4);
  else
    v168 = 0;
  v8 = (_OWORD *)sub_186B270(0xA0u);
  *v8 = 0;
  *(_OWORD *)((char *)v8 + 20) = 0;
  *(_OWORD *)((char *)v8 + 40) = 0;
  *(_OWORD *)((char *)v8 + 60) = 0;
  v8[5] = 0;
  *(_OWORD *)((char *)v8 + 100) = 0;
  *(_OWORD *)((char *)v8 + 120) = 0;
  *(_OWORD *)((char *)v8 + 140) = 0;
  v163 = (char *)v8;
  v189 = 0;
  ptr = nullptr;
  sub_186B510(&v189, v168, 0);
  if ( v168 )
  {
    v170 = 0;
    v9 = 8;
    v10 = 0;
    v172 = 0;
    v174 = 0;
    while ( 1 )
    {
      v11 = *(_QWORD **)(v6 + 16);
      if ( !v11 )
        break;
      v12 = *((_DWORD *)v11 - 1);
      v13 = (unsigned int *)v11 + v12;
      if ( v12 != *((_DWORD *)v11 - 2) )
        goto LABEL_9;
      v95 = (3 * v12 + 1) >> 1;
      v96 = 4 * v95 + 8;
      if ( 4 * v12 + 8 >= (unsigned int)v96 || v12 >= v95 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v196, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v196);
        sub_233E40((__int64)v196);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v97 = (unsigned int *)sub_186B300(v11 - 1, v96);
      v98 = v97 + 2;
      *v97 = v95;
      v99 = v97[1];
      *(_QWORD *)(v6 + 16) = v98;
      v98[v99] = v12;
      ++*(v98 - 1);
      v14 = *(_QWORD **)(v6 + 24);
      if ( !v14 )
      {
LABEL_140:
        v100 = (_QWORD *)sub_186B270(0x10u);
        v14 = v100 + 1;
        *v100 = 2;
        *(_QWORD *)(v6 + 24) = v100 + 1;
        v16 = v100 + 1;
        goto LABEL_12;
      }
LABEL_10:
      v15 = *((unsigned int *)v14 - 1);
      if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
      {
        v91 = (unsigned int)(3 * v15 + 1) >> 1;
        v92 = 4 * v91 + 8;
        if ( 4 * (int)v15 + 8 >= (unsigned int)v92 || (unsigned int)v15 >= v91 )
        {
          v160 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v196, "Overflow encountered when expanding vector");
          *v160 = (char *)off_1C63128;
          sub_2333C0(v160 + 1, v196);
          sub_233E40((__int64)v196);
          __cxa_throw(v160, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v93 = (unsigned int *)sub_186B300(v14 - 1, v92);
        v14 = v93 + 2;
        *v93 = v91;
        v94 = v93[1];
        *(_QWORD *)(v6 + 24) = v14;
        v16 = (_DWORD *)v14 + v94;
      }
      else
      {
        v16 = (_DWORD *)v14 + v15;
      }
LABEL_12:
      *v16 = 1;
      ++*((_DWORD *)v14 - 1);
      v17 = *(_QWORD **)(v6 + 32);
      if ( v17 )
      {
        v18 = *((unsigned int *)v17 - 1);
        if ( (_DWORD)v18 == *((_DWORD *)v17 - 2) )
        {
          v87 = (unsigned int)(3 * v18 + 1) >> 1;
          v88 = 4 * v87 + 8;
          if ( 4 * (int)v18 + 8 >= (unsigned int)v88 || (unsigned int)v18 >= v87 )
          {
            v159 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v196, "Overflow encountered when expanding vector");
            *v159 = (char *)off_1C63128;
            sub_2333C0(v159 + 1, v196);
            sub_233E40((__int64)v196);
            __cxa_throw(v159, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v89 = (unsigned int *)sub_186B300(v17 - 1, v88);
          v17 = v89 + 2;
          *v89 = v87;
          v90 = v89[1];
          *(_QWORD *)(v6 + 32) = v17;
          v19 = (unsigned int *)v17 + v90;
        }
        else
        {
          v19 = (unsigned int *)v17 + v18;
        }
      }
      else
      {
        v138 = (_QWORD *)sub_186B270(0x10u);
        v17 = v138 + 1;
        *v138 = 2;
        *(_QWORD *)(v6 + 32) = v138 + 1;
        v19 = (unsigned int *)(v138 + 1);
      }
      *v19 = v12;
      v20 = *(_QWORD **)(v6 + 8);
      ++*((_DWORD *)v17 - 1);
      v21 = (_QWORD *)*v20;
      if ( *v20 )
      {
        v22 = *((_DWORD *)v21 - 1);
        if ( v22 == *((_DWORD *)v21 - 2) )
        {
          v84 = (3 * v22 + 1) >> 1;
          v85 = 8 * v84 + 8;
          if ( 8 * v22 + 8 >= (unsigned int)v85 || v22 >= v84 )
          {
            v158 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v196, "Overflow encountered when expanding vector");
            *v158 = (char *)off_1C63128;
            sub_2333C0(v158 + 1, v196);
            sub_233E40((__int64)v196);
            __cxa_throw(v158, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v165 = (3 * v22 + 1) >> 1;
          v86 = (unsigned int *)sub_186B300(v21 - 1, v85);
          v21 = v86 + 2;
          *v20 = v86 + 2;
          *v86 = v165;
          LODWORD(v86) = v86[1];
          v25 = &v21[(unsigned int)v86];
          v24 = (_DWORD)v86 + 1;
        }
        else
        {
          v23 = v22;
          v24 = v22 + 1;
          v25 = &v21[v23];
        }
      }
      else
      {
        v137 = (_QWORD *)sub_186B270(0x18u);
        v21 = v137 + 1;
        *v137 = 2;
        v24 = 1;
        *v20 = v21;
        v25 = v21;
      }
      *v25 = v6 + 40;
      *((_DWORD *)v21 - 1) = v24;
      v26 = v10;
      do
      {
        v27 = v26;
        v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 120) + 16LL) + 4LL * v26);
      }
      while ( v27 != v26 );
      v28 = v10;
      do
      {
        v29 = v28;
        v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 120) + 16LL) + 4LL * v28);
      }
      while ( v29 != v28 );
      v30 = (((v27 - v28) ^ (v28 << 8) ^ ((v28 - ((v27 - v28) ^ (v28 << 8))) << 16)) + ((v27 - v28) ^ (v28 << 8)) - v28)
          ^ ((v28 - ((v27 - v28) ^ (v28 << 8))) << 10);
      v31 = 20LL * (v30 & (v9 - 1));
      v32 = 20LL * v9;
      v33 = &v163[v31];
      v34 = v32;
      v35 = (int *)&v163[v32];
      if ( v31 != v32 )
      {
        v36 = (int *)&v163[v31];
        do
        {
          v37 = v36[1];
          if ( v37 == 2 )
          {
            if ( v30 == *v36 && v29 == v36[2] && v27 == v36[3] )
              goto LABEL_30;
          }
          else if ( !v37 )
          {
            goto LABEL_109;
          }
          v36 += 5;
        }
        while ( v35 != v36 );
        v36 = (int *)v163;
        if ( v33 != v163 )
          goto LABEL_104;
        v77 = 2 * v9;
        if ( 3 * v9 >= 4 * (v174 + v172) )
        {
          if ( v32 )
            goto LABEL_111;
LABEL_184:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        goto LABEL_191;
      }
      v36 = (int *)v163;
      if ( v33 != v163 )
      {
LABEL_104:
        while ( 1 )
        {
          v76 = v36[1];
          if ( v76 != 2 )
            break;
          if ( v30 == *v36 && v29 == v36[2] )
          {
            if ( v27 == v36[3] )
            {
LABEL_30:
              sub_4F9300((_QWORD *)v6, v10, v36[4]);
              goto LABEL_31;
            }
            v36 += 5;
            if ( v33 == (char *)v36 )
            {
LABEL_109:
              v77 = 2 * v9;
              if ( 3 * v9 >= 4 * (v174 + v172) )
                goto LABEL_110;
              goto LABEL_191;
            }
          }
          else
          {
LABEL_103:
            v36 += 5;
            if ( v33 == (char *)v36 )
              goto LABEL_109;
          }
        }
        if ( !v76 )
          goto LABEL_109;
        goto LABEL_103;
      }
      v77 = 2 * v9;
      if ( 3 * v9 >= 4 * (v174 + v172) )
        goto LABEL_173;
LABEL_191:
      v185 = &v163[v32];
      v9 = v77;
      v180 = v30;
      v166 = 20LL * v77;
      v125 = (int *)sub_186B270(v166);
      v126 = v125;
      v34 = v166;
      v30 = v180;
      v127 = &v125[v166 / 4];
      if ( v77 )
      {
        if ( (v166 & 4) == 0 || (v126 = v125 + 5, *(_OWORD *)v125 = 0, v125 + 5 != v127) )
        {
          do
          {
            *(_OWORD *)v126 = 0;
            v126 += 10;
            *(_OWORD *)(v126 - 5) = 0;
          }
          while ( v126 != v127 );
        }
      }
      v173 = v77 - 1;
      for ( i = v163; v185 != i; v131[4] = *((_DWORD *)i - 1) )
      {
        while ( *((_DWORD *)i + 1) != 2 )
        {
          i += 20;
          if ( v185 == i )
            goto LABEL_204;
        }
        v129 = 20LL * (*(_DWORD *)i & v173);
        v130 = &v125[(unsigned __int64)v129 / 4];
        if ( v166 == v129 )
        {
LABEL_220:
          if ( v125 == v130 )
          {
LABEL_257:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v131 = v125;
          while ( v131[1] )
          {
            v131 += 5;
            if ( v130 == v131 )
              goto LABEL_257;
          }
        }
        else
        {
          v131 = &v125[(unsigned __int64)v129 / 4];
          while ( v131[1] )
          {
            v131 += 5;
            if ( v127 == v131 )
              goto LABEL_220;
          }
        }
        *v131 = *(_DWORD *)i;
        v132 = *((_DWORD *)i + 2);
        i += 20;
        v131[1] = 2;
        v131[2] = v132;
        v131[3] = *((_DWORD *)i - 2);
      }
LABEL_204:
      if ( v163 )
      {
        v186 = (char *)&v125[v166 / 4];
        v181 = v125;
        v176 = v166;
        v167 = v30;
        sub_186B220(v163);
        v127 = (int *)v186;
        v125 = v181;
        v34 = v176;
        v30 = v167;
      }
      v133 = v173;
      v163 = (char *)v125;
      v35 = v127;
      v172 = 0;
      v31 = 20LL * (v30 & v133);
      v33 = (char *)&v125[(unsigned __int64)v31 / 4];
LABEL_110:
      if ( v31 == v34 )
      {
LABEL_173:
        v79 = nullptr;
LABEL_174:
        v78 = (int *)v163;
        if ( v33 == v163 )
          goto LABEL_184;
        while ( 1 )
        {
          v123 = v78[1];
          if ( v123 != 2 )
            break;
          if ( v30 == *v78 && v29 == v78[2] )
          {
            if ( v27 == v78[3] )
              goto LABEL_119;
            v78 += 5;
            if ( v78 == (int *)v33 )
              goto LABEL_184;
          }
          else
          {
LABEL_178:
            v78 += 5;
            if ( v78 == (int *)v33 )
              goto LABEL_184;
          }
        }
        if ( !v123 )
          goto LABEL_185;
        v79 = v78;
        goto LABEL_178;
      }
LABEL_111:
      v78 = (int *)v33;
      v79 = nullptr;
      while ( 1 )
      {
        v80 = v78[1];
        if ( v80 != 2 )
          break;
        if ( v30 == *v78 && v29 == v78[2] && v27 == v78[3] )
        {
LABEL_119:
          v78[4] = v10;
          v78[1] = 2;
          goto LABEL_120;
        }
LABEL_114:
        v78 += 5;
        if ( v78 == v35 )
          goto LABEL_174;
      }
      if ( v80 )
      {
        v79 = v78;
        goto LABEL_114;
      }
LABEL_185:
      if ( v79 )
        --v172;
      else
        v79 = v78;
      v79[2] = v29;
      v79[3] = v27;
      v79[4] = v10;
      v79[1] = 2;
      *v79 = v30;
      ++v174;
LABEL_120:
      v81 = v10;
      v82 = *(_QWORD *)(*(_QWORD *)(v4 + 120) + 16LL);
      do
      {
        v83 = v81;
        v81 = *(_DWORD *)(v82 + 4LL * v81);
      }
      while ( v83 != v81 );
      if ( (*((_DWORD *)ptr + (v81 >> 5)) & (1 << v81)) != 0 )
      {
        v170 = 1;
      }
      else
      {
        v135 = v10;
        do
        {
          v136 = v135;
          v135 = *(_DWORD *)(v82 + 4LL * v135);
        }
        while ( v136 != v135 );
        *((_DWORD *)ptr + (v135 >> 5)) |= 1 << v135;
      }
LABEL_31:
      if ( ++v10 == v168 )
      {
        v164 = (unsigned __int64 *)sub_186B270(8u);
        v38 = 0;
        *v164 = 0;
        while ( 1 )
        {
          v39 = v38;
          v40 = v38;
          do
          {
            v41 = v40;
            v42 = v40;
            v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 120) + 16LL) + 4LL * v40);
          }
          while ( v42 != v40 );
          (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 224LL))(
            &v191,
            v4,
            *(_QWORD *)(v4 + 120),
            v6,
            **(_QWORD **)(v4 + 48) + 16 * v41);
          v43 = v38;
          do
          {
            v44 = v43;
            v45 = v43;
            v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 120) + 16LL) + 4LL * v43);
          }
          while ( v45 != v43 );
          (*(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)v4 + 224LL))(
            &v193,
            v4,
            *(_QWORD *)(a2 + 120),
            v6,
            **(_QWORD **)(a2 + 48) + 16 * v44);
          v46 = *(_QWORD *)v4;
          if ( a4 )
          {
            v47 = *(__int64 (__fastcall **)(__int64, __int64))(v46 + 176);
            if ( v47 == sub_4FF210 )
            {
              (*(void (__fastcall **)(_QWORD *, __int64, __int64 *, __int64 *))(v46 + 184))(v195, v4, &v191, &v193);
              v48 = *v164;
              if ( *v164 )
                goto LABEL_40;
            }
            else
            {
              ((void (__fastcall *)(_QWORD *, __int64, __int64 *, __int64 *))v47)(v195, v4, &v191, &v193);
              v48 = *v164;
              if ( *v164 )
              {
LABEL_40:
                v49 = *(_DWORD *)(v48 - 4);
                if ( v49 != *(_DWORD *)(v48 - 8) )
                  goto LABEL_41;
                v175 = (3 * v49 + 1) >> 1;
                v111 = 16 * v175 + 8;
                if ( 16 * v49 + 8 >= v111 || v49 >= (3 * v49 + 1) >> 1 )
                {
                  v156 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v196, "Overflow encountered when expanding vector");
                  *v156 = (char *)off_1C63128;
                  sub_2333C0(v156 + 1, v196);
                  sub_233E40((__int64)v196);
                  __cxa_throw(v156, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v64 = (unsigned int *)sub_186B270(v111);
                v48 = (unsigned __int64)(v64 + 2);
                v65 = *v164;
                if ( *v164 )
                {
                  v112 = *(unsigned int *)(v65 - 4);
                  v64[1] = v112;
                  v113 = v112;
                  v114 = (__int64 *)(v65 + 16 * v112);
                  if ( (__int64 *)v65 != v114 )
                  {
                    if ( v48 < v65 + 16 && v65 < (unsigned __int64)(v64 + 6) )
                    {
                      v143 = (__int64 *)v65;
                      v144 = v64 + 2;
                      do
                      {
                        v145 = *v143;
                        *v143 = 0;
                        v143 += 2;
                        v144 += 4;
                        *((_QWORD *)v144 - 2) = v145;
                        v146 = *(v143 - 1);
                        *(v143 - 1) = 0;
                        *((_QWORD *)v144 - 1) = v146;
                      }
                      while ( v143 != v114 );
                    }
                    else
                    {
                      v115 = 0;
                      v116 = 0;
                      do
                      {
                        v117 = _mm_loadu_si128((const __m128i *)(v65 + v115 * 4));
                        ++v116;
                        *(_OWORD *)(v65 + v115 * 4) = 0;
                        *(__m128i *)&v64[v115 + 2] = v117;
                        v115 += 4;
                      }
                      while ( v116 < v112 );
                    }
                  }
                  v118 = (_QWORD *)(v65 + 16 * v112);
                  if ( v113 )
                  {
                    v179 = v64;
                    v184 = v64 + 2;
                    v188 = v4;
                    v119 = (_QWORD *)v65;
                    do
                    {
                      while ( 1 )
                      {
                        v120 = v119[1];
                        if ( v120 )
                          sub_186B220((void *)(v120 - 8));
                        if ( !*v119 )
                          break;
                        v121 = (void *)(*v119 - 8LL);
                        v119 += 2;
                        sub_186B220(v121);
                        if ( v119 == v118 )
                          goto LABEL_166;
                      }
                      v119 += 2;
                    }
                    while ( v119 != v118 );
LABEL_166:
                    v64 = v179;
                    v48 = (unsigned __int64)v184;
                    v4 = v188;
                    v65 = *v164;
                  }
                  goto LABEL_98;
                }
LABEL_219:
                v64[1] = 0;
                v52 = (_QWORD *)v48;
                v51 = 1;
                goto LABEL_99;
              }
            }
          }
          else
          {
            (*(void (__fastcall **)(_QWORD *, __int64, __int64 *, __int64 *))(v46 + 184))(v195, v4, &v191, &v193);
            v48 = *v164;
            if ( *v164 )
            {
              v49 = *(_DWORD *)(v48 - 4);
              if ( v49 != *(_DWORD *)(v48 - 8) )
              {
LABEL_41:
                v50 = v49;
                v51 = v49 + 1;
                v52 = (_QWORD *)(v48 + 16 * v50);
                goto LABEL_42;
              }
              v175 = (3 * v49 + 1) >> 1;
              v63 = 16 * v175 + 8;
              if ( 16 * v49 + 8 >= v63 || v49 >= (3 * v49 + 1) >> 1 )
              {
                v157 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v196, "Overflow encountered when expanding vector");
                *v157 = (char *)off_1C63128;
                sub_2333C0(v157 + 1, v196);
                sub_233E40((__int64)v196);
                __cxa_throw(v157, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v64 = (unsigned int *)sub_186B270(v63);
              v48 = (unsigned __int64)(v64 + 2);
              v65 = *v164;
              if ( !*v164 )
                goto LABEL_219;
              v66 = *(unsigned int *)(v65 - 4);
              v64[1] = v66;
              v67 = v66;
              v68 = (__int64 *)(v65 + 16 * v66);
              if ( v68 != (__int64 *)v65 )
              {
                if ( v48 < v65 + 16 && v65 < (unsigned __int64)(v64 + 6) )
                {
                  v139 = (__int64 *)v65;
                  v140 = v64 + 2;
                  do
                  {
                    v141 = *v139;
                    *v139 = 0;
                    v139 += 2;
                    v140 += 4;
                    *((_QWORD *)v140 - 2) = v141;
                    v142 = *(v139 - 1);
                    *(v139 - 1) = 0;
                    *((_QWORD *)v140 - 1) = v142;
                  }
                  while ( v68 != v139 );
                }
                else
                {
                  v69 = 0;
                  v70 = 0;
                  do
                  {
                    v71 = _mm_loadu_si128((const __m128i *)(v65 + v69 * 4));
                    ++v70;
                    *(_OWORD *)(v65 + v69 * 4) = 0;
                    *(__m128i *)&v64[v69 + 2] = v71;
                    v69 += 4;
                  }
                  while ( v70 < v66 );
                }
              }
              v72 = (_QWORD *)(v65 + 16 * v66);
              if ( v67 )
              {
                v177 = v64;
                v182 = v64 + 2;
                v187 = v4;
                v73 = (_QWORD *)v65;
                do
                {
                  while ( 1 )
                  {
                    v74 = v73[1];
                    if ( v74 )
                      sub_186B220((void *)(v74 - 8));
                    if ( !*v73 )
                      break;
                    v75 = (void *)(*v73 - 8LL);
                    v73 += 2;
                    sub_186B220(v75);
                    if ( v72 == v73 )
                      goto LABEL_97;
                  }
                  v73 += 2;
                }
                while ( v72 != v73 );
LABEL_97:
                v64 = v177;
                v48 = (unsigned __int64)v182;
                v4 = v187;
                v65 = *v164;
              }
LABEL_98:
              v183 = v48;
              v178 = v64;
              sub_186B220((void *)(v65 - 8));
              v64 = v178;
              v48 = v183;
              v52 = (_QWORD *)(v183 + 16LL * v178[1]);
              v51 = v178[1] + 1;
LABEL_99:
              *v164 = v48;
              *v64 = v175;
              goto LABEL_42;
            }
          }
          v124 = (_QWORD *)sub_186B270(0x28u);
          *v124 = 2;
          v48 = (unsigned __int64)(v124 + 1);
          *v164 = (unsigned __int64)(v124 + 1);
          v52 = v124 + 1;
          v51 = 1;
LABEL_42:
          *v52 = v195[0];
          v52[1] = v195[1];
          *(_DWORD *)(v48 - 4) = v51;
          if ( a3 )
          {
            if ( !v170 )
            {
              do
              {
                v101 = v39;
                v102 = v39;
                v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 120) + 16LL) + 4LL * v39);
              }
              while ( v102 != v39 );
              v103 = (__int64 *)(**(_QWORD **)(v4 + 48) + 16 * v101);
              v104 = (__int64 *)(v48 + 16 * v38);
              v105 = *v103;
              v106 = *v104;
              if ( *v103 )
              {
                v107 = *(_DWORD *)(v105 - 4);
                if ( v106 )
                {
                  v108 = *(_DWORD *)(v106 - 4);
                  v109 = v108;
                  if ( v107 <= v108 )
                    v109 = *(_DWORD *)(v105 - 4);
                  v110 = 0;
                  if ( v109 )
                  {
                    while ( *(_DWORD *)(v105 + v110) == *(_DWORD *)(v106 + v110) )
                    {
                      v110 += 4;
                      if ( v110 == 4LL * v109 )
                        goto LABEL_209;
                    }
                    goto LABEL_151;
                  }
LABEL_209:
                  if ( v108 < v107 )
                  {
LABEL_210:
                    v134 = v109;
                    while ( !*(_DWORD *)(v105 + 4LL * v134) )
                    {
                      if ( ++v134 >= v107 )
                      {
                        if ( !v106 )
                          goto LABEL_234;
                        v108 = *(_DWORD *)(v106 - 4);
                        goto LABEL_252;
                      }
                    }
                    goto LABEL_151;
                  }
LABEL_252:
                  if ( v109 < v108 )
                  {
                    v154 = (_DWORD *)(v106 + 4LL * v109);
                    while ( !*v154 )
                    {
                      if ( (_DWORD *)(v106 + 4 * (v109 + (unsigned __int64)(v108 - 1 - v109)) + 4) == ++v154 )
                        goto LABEL_234;
                    }
                    goto LABEL_151;
                  }
                }
                else if ( v107 )
                {
                  v109 = 0;
                  goto LABEL_210;
                }
              }
              else if ( v106 )
              {
                v108 = *(_DWORD *)(v106 - 4);
                v109 = 0;
                goto LABEL_252;
              }
LABEL_234:
              v147 = v103[1];
              v148 = v104[1];
              if ( v147 )
              {
                v149 = *(_DWORD *)(v147 - 4);
                if ( v148 )
                {
                  v150 = *(_DWORD *)(v148 - 4);
                  v151 = v150;
                  if ( v149 <= v150 )
                    v151 = *(_DWORD *)(v147 - 4);
                  v152 = 0;
                  if ( !v151 )
                  {
LABEL_243:
                    if ( v150 < v149 )
                      goto LABEL_244;
LABEL_261:
                    if ( v151 >= v150 )
                      goto LABEL_44;
                    v155 = (_DWORD *)(v148 + 4LL * v151);
                    while ( !*v155 )
                    {
                      if ( (_DWORD *)(v148 + 4 * (v151 + (unsigned __int64)(v150 - 1 - v151)) + 4) == ++v155 )
                        goto LABEL_44;
                    }
                    goto LABEL_151;
                  }
                  while ( *(_DWORD *)(v147 + v152) == *(_DWORD *)(v148 + v152) )
                  {
                    v152 += 4;
                    if ( v152 == 4LL * v151 )
                      goto LABEL_243;
                  }
                }
                else
                {
                  v151 = 0;
                  if ( !v149 )
                    goto LABEL_44;
LABEL_244:
                  v153 = v151;
                  while ( !*(_DWORD *)(v147 + 4LL * v153) )
                  {
                    if ( ++v153 >= v149 )
                    {
                      if ( !v148 )
                        goto LABEL_44;
                      v150 = *(_DWORD *)(v148 - 4);
                      goto LABEL_261;
                    }
                  }
                }
LABEL_151:
                v170 = 1;
                goto LABEL_44;
              }
              if ( !v148 )
                goto LABEL_44;
              v150 = *(_DWORD *)(v148 - 4);
              v151 = 0;
              goto LABEL_261;
            }
          }
          else
          {
            v170 = 0;
          }
LABEL_44:
          if ( v194 )
            sub_186B220((void *)(v194 - 8));
          if ( v193 )
            sub_186B220((void *)(v193 - 8));
          if ( v192 )
            sub_186B220((void *)(v192 - 8));
          if ( v191 )
          {
            ++v38;
            sub_186B220((void *)(v191 - 8));
            if ( v38 == v168 )
              goto LABEL_52;
          }
          else if ( ++v38 == v168 )
          {
            goto LABEL_52;
          }
        }
      }
    }
    v122 = (_QWORD *)sub_186B270(0x10u);
    v11 = v122 + 1;
    v12 = 0;
    *(_QWORD *)(v6 + 16) = v122 + 1;
    *v122 = 2;
    v13 = (unsigned int *)(v122 + 1);
LABEL_9:
    *v13 = v12;
    ++*((_DWORD *)v11 - 1);
    v14 = *(_QWORD **)(v6 + 24);
    if ( !v14 )
      goto LABEL_140;
    goto LABEL_10;
  }
  v164 = (unsigned __int64 *)sub_186B270(8u);
  *v164 = 0;
  v170 = 0;
LABEL_52:
  v53 = *(_QWORD **)(v4 + 120);
  if ( v53 )
  {
    v54 = v53[4];
    if ( v54 )
      sub_186B220((void *)(v54 - 8));
    v55 = v53[3];
    if ( v55 )
      sub_186B220((void *)(v55 - 8));
    v56 = v53[2];
    if ( v56 )
      sub_186B220((void *)(v56 - 8));
    sub_186B220(v53);
  }
  v57 = *(_QWORD **)(v4 + 48);
  if ( v57 )
  {
    v58 = (_QWORD *)*v57;
    if ( *v57 )
    {
      v59 = *((_DWORD *)v58 - 1);
      if ( v59 )
      {
        v60 = &v58[2 * v59];
        do
        {
          while ( 1 )
          {
            v61 = v58[1];
            if ( v61 )
              sub_186B220((void *)(v61 - 8));
            v62 = *v58;
            if ( !*v58 )
              break;
            v58 += 2;
            sub_186B220((void *)(v62 - 8));
            if ( v58 == v60 )
              goto LABEL_68;
          }
          v58 += 2;
        }
        while ( v58 != v60 );
LABEL_68:
        v58 = (_QWORD *)*v57;
      }
      sub_186B220(v58 - 1);
    }
    sub_186B220(v57);
  }
  *(_QWORD *)(v4 + 120) = v6;
  *(_QWORD *)(v4 + 48) = v164;
  if ( a3 && v170 )
    sub_5071D0(a3, v4);
  if ( ptr )
    sub_186B220(ptr);
  result = (__int64)v163;
  if ( v163 )
    return sub_186B220(v163);
  return result;
}

