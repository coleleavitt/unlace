void __fastcall sub_187CDA0(
        _QWORD *a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int64 a5,
        char a6,
        __m128i a7,
        double a8)
{
  _QWORD *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 *v15; // r14
  void **v16; // rbx
  __int64 v17; // rax
  void *v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ecx
  __int64 v24; // rdi
  char v25; // al
  _QWORD *v26; // rdi
  __int64 v27; // rax
  int v28; // ebp
  unsigned __int64 v29; // rbx
  unsigned int v30; // eax
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdi
  __int64 v44; // rbp
  __int64 *v45; // rsi
  __int64 v46; // rbp
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdi
  __int64 v56; // r13
  unsigned __int64 v57; // rax
  __int64 v58; // r14
  unsigned __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdi
  __int64 v65; // rbp
  __int64 *v66; // rsi
  __int64 v67; // rbp
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  void *v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdi
  __int64 v77; // r13
  unsigned __int64 v78; // rax
  __int64 v79; // r14
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  unsigned __int64 v84; // rbx
  __int64 v85; // r8
  __int64 v86; // r9
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rdx
  unsigned int v89; // ebx
  __int64 v90; // rdx
  unsigned int v91; // ebp
  __int64 v92; // r12
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned int *v95; // rax
  __int64 v96; // rax
  int v97; // edx
  char *v98; // r12
  __int64 v99; // rbx
  char *v100; // rbp
  char *v101; // rsi
  unsigned __int64 v102; // rax
  char *v103; // r11
  unsigned int v104; // esi
  unsigned int v105; // edx
  char *v106; // rax
  int v107; // edi
  unsigned int v108; // ebx
  __int64 *v109; // r14
  unsigned int v110; // eax
  unsigned int v111; // edx
  int v112; // ebp
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 *v116; // r13
  unsigned __int64 v117; // rax
  const char *v118; // rax
  __int64 v119; // rdi
  __int64 v120; // rdx
  __int64 v121; // r13
  __int64 v122; // rax
  void **v123; // rbx
  char *v124; // rbp
  char *v125; // r12
  int v126; // r15d
  __int64 *v127; // rbx
  unsigned int v128; // eax
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  unsigned int v133; // eax
  __int64 v134; // rbx
  __int64 v135; // r9
  __int64 *v136; // rdx
  char v137; // al
  char v138; // si
  __int64 v139; // r14
  __int64 v140; // rax
  unsigned __int64 v141; // r14
  unsigned __int64 v142; // rax
  char v143; // dl
  __int64 v144; // rax
  unsigned __int64 v145; // r12
  int v146; // esi
  unsigned int v147; // edx
  __int64 *v148; // rbp
  __int64 v149; // rax
  __m128 *v150; // rdx
  _QWORD *v151; // rdx
  __int64 v152; // rdx
  __int64 *v153; // r10
  bool v154; // zf
  __int64 *v155; // rbx
  _QWORD *v156; // rdx
  int v157; // eax
  int v158; // esi
  __int64 v159; // r8
  __int64 v160; // rax
  int v161; // r11d
  int v162; // r10d
  __int64 *v163; // r11
  __int64 v164; // r8
  void **v165; // rbx
  unsigned int v166; // eax
  unsigned int v167; // eax
  __int64 v168; // r12
  __int64 v169; // r8
  __int64 v170; // rcx
  unsigned __int64 v171; // rdx
  char *v172; // rdx
  char v175; // [rsp+10h] [rbp-438h]
  __int64 v176; // [rsp+10h] [rbp-438h]
  char v177; // [rsp+18h] [rbp-430h]
  __int64 v178; // [rsp+18h] [rbp-430h]
  __int64 v179; // [rsp+20h] [rbp-428h]
  _QWORD *v180; // [rsp+28h] [rbp-420h]
  void **p_ptr; // [rsp+40h] [rbp-408h] BYREF
  __int64 **v183; // [rsp+48h] [rbp-400h]
  __int64 *v184; // [rsp+50h] [rbp-3F8h]
  __int64 *v185; // [rsp+58h] [rbp-3F0h]
  void **v186; // [rsp+60h] [rbp-3E8h]
  _DWORD v187[5]; // [rsp+68h] [rbp-3E0h] BYREF
  unsigned int v188; // [rsp+7Ch] [rbp-3CCh]
  __int64 v189; // [rsp+80h] [rbp-3C8h] BYREF
  __int64 v190; // [rsp+88h] [rbp-3C0h]
  unsigned int v191; // [rsp+90h] [rbp-3B8h]
  __int64 v192; // [rsp+A0h] [rbp-3A8h] BYREF
  __int64 v193; // [rsp+A8h] [rbp-3A0h]
  unsigned int v194; // [rsp+B0h] [rbp-398h]
  void *v195; // [rsp+C0h] [rbp-388h] BYREF
  _BYTE v196[16]; // [rsp+D0h] [rbp-378h] BYREF
  void *v197; // [rsp+E0h] [rbp-368h] BYREF
  __int64 v198; // [rsp+E8h] [rbp-360h]
  _BYTE v199[48]; // [rsp+F0h] [rbp-358h] BYREF
  _QWORD *v200; // [rsp+120h] [rbp-328h] BYREF
  char v201; // [rsp+128h] [rbp-320h]
  __int64 v202; // [rsp+12Ch] [rbp-31Ch]
  char v203; // [rsp+134h] [rbp-314h]
  void *v204[2]; // [rsp+138h] [rbp-310h] BYREF
  _BYTE v205[24]; // [rsp+148h] [rbp-300h] BYREF
  __int64 v206[18]; // [rsp+160h] [rbp-2E8h] BYREF
  void *v207; // [rsp+1F0h] [rbp-258h] BYREF
  __int64 v208; // [rsp+1F8h] [rbp-250h]
  _BYTE v209[256]; // [rsp+200h] [rbp-248h] BYREF
  void *ptr; // [rsp+300h] [rbp-148h] BYREF
  __int64 v211; // [rsp+308h] [rbp-140h]
  char v212; // [rsp+310h] [rbp-138h] BYREF

  *(_QWORD *)v187 = a2;
  if ( !a2 )
    return;
  v9 = a1;
  sub_1CB44B0(a1, v187);
  v179 = *(_QWORD *)v187;
  if ( (*(_BYTE *)(*(_QWORD *)v187 + 28LL) & 0x7F) != 0x26 )
  {
    sub_168B9F0((__int64)&ptr, a1 + 1, a3, 0x1234u, 0);
    sub_15F7200(&ptr);
    return;
  }
  v13 = 0;
  v14 = 0;
  v189 = 0;
  v190 = 0;
  v191 = 0;
  v192 = 0;
  v193 = 0;
  v194 = 0;
  v175 = 0;
  if ( a5 )
  {
    v183 = (__int64 **)&v192;
    v184 = (__int64 *)&v200;
    while ( 1 )
    {
      v15 = &a4[v14];
      v16 = (void **)*v15;
      *((_BYTE *)v16 + 28) |= 4u;
      *((_WORD *)v16 + 14) = (8 * v13) | *((_WORD *)v16 + 14) & 7;
      v17 = ((__int64)*v16 >> 1) & 3;
      LOBYTE(v10) = (_DWORD)v17 == 2 || v17 == 1;
      v177 = v10;
      if ( !(_BYTE)v10 )
      {
        if ( (_DWORD)v17 || (*((_BYTE *)v16 + 28) & 1) != 0 )
        {
          if ( a5 != 1 )
          {
            v133 = sub_B98AF0((__int64)v16);
            sub_168B9F0((__int64)&ptr, v9 + 1, v133, 0xE48u, 0);
            v206[0] = sub_B98B90((__int64)v16);
            v134 = sub_1587DB0((__int64)&ptr, v206);
            v207 = (void *)sub_B98B90(a4[v13 == 0]);
            sub_1587DB0(v134, (__int64 *)&v207);
            sub_15F7200(&ptr);
          }
          sub_1870700((__int64)v9, v179, *v15, v10, v11, v12);
          goto LABEL_97;
        }
        v206[0] = sub_1837FA0((__int64 *)v16);
        if ( (unsigned __int8)sub_183FEB0(&v189, v206, &v207) )
        {
          v136 = (__int64 *)((char *)v207 + 8);
LABEL_102:
          v137 = sub_18760B0((__int64)v9, (__int64 *)v16, v136);
          v138 = v175;
          if ( v137 )
            v138 = v137;
          v175 = v138;
          goto LABEL_10;
        }
        v156 = v207;
        v157 = v190 + 1;
        v158 = 2 * v191;
        v159 = (unsigned int)(4 * (v190 + 1));
        ptr = v207;
        if ( (unsigned int)v159 < 3 * v191 )
        {
          if ( v191 - HIDWORD(v190) - v157 > v191 >> 3 )
          {
LABEL_141:
            v154 = *v156 == -4096;
            LODWORD(v190) = v157;
            if ( !v154 )
              --HIDWORD(v190);
            v160 = v206[0];
            v136 = v156 + 1;
            *v136 = 0;
            *(v136 - 1) = v160;
            goto LABEL_102;
          }
          v158 = v191;
        }
        sub_1847F70((__int64)&v189, v158, (__int64)v207, v191, v159, v135);
        sub_183FEB0(&v189, v206, &ptr);
        v156 = ptr;
        v157 = v190 + 1;
        goto LABEL_141;
      }
      v18 = (void *)sub_1837FA0((__int64 *)v16);
      v197 = v18;
      if ( !v191 )
        break;
      v22 = v191 - 1;
      v23 = v22 & (((unsigned int)v18 >> 9) ^ ((unsigned int)v18 >> 4));
      v19 = (__int64 *)(v189 + 16LL * v23);
      v24 = *v19;
      if ( v18 != (void *)*v19 )
      {
        v162 = 1;
        v163 = nullptr;
        if ( v24 != -4096 )
        {
          while ( 1 )
          {
            if ( !v163 && v24 == -8192 )
              v163 = v19;
            v23 = v22 & (v162 + v23);
            v19 = (__int64 *)(v189 + 16LL * v23);
            v24 = *v19;
            if ( v18 == (void *)*v19 )
              goto LABEL_8;
            if ( v24 == -4096 )
              break;
            ++v162;
          }
          if ( v163 )
            v19 = v163;
        }
        ptr = v19;
        v20 = (unsigned int)(v190 + 1);
        v21 = (unsigned int)(4 * v20);
        if ( (unsigned int)v21 < 3 * v191 )
        {
          v164 = v191 >> 3;
          if ( v191 - HIDWORD(v190) - (unsigned int)v20 <= (unsigned int)v164 )
          {
            sub_1847F70((__int64)&v189, v191, (__int64)v19, v20, v164, v22);
            sub_183FEB0(&v189, (__int64 *)&v197, &ptr);
            v18 = v197;
            v19 = (__int64 *)ptr;
            LODWORD(v20) = v190 + 1;
          }
          goto LABEL_159;
        }
LABEL_164:
        sub_1847F70((__int64)&v189, 2 * v191, (__int64)v19, v20, v21, v22);
        sub_183FEB0(&v189, (__int64 *)&v197, &ptr);
        v18 = v197;
        v19 = (__int64 *)ptr;
        LODWORD(v20) = v190 + 1;
LABEL_159:
        v154 = *v19 == -4096;
        LODWORD(v190) = v20;
        if ( !v154 )
          --HIDWORD(v190);
        *v19 = (__int64)v18;
        v19[1] = 0;
      }
LABEL_8:
      v25 = sub_18760B0((__int64)v9, (__int64 *)v16, v19 + 1);
      if ( v25 )
        goto LABEL_9;
      v139 = (__int64)*v16;
      v140 = ((__int64)*v16 >> 1) & 3;
      if ( v140 == 1 )
      {
        v141 = v139 & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        if ( v140 != 2 )
          BUG();
        v141 = *(_QWORD *)(*(_QWORD *)((v139 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                         + 8LL * *(unsigned int *)((v139 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                         - 8);
      }
      v142 = *(_QWORD *)(v141 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v141 + 16) & 4) != 0 )
        v142 = *(_QWORD *)v142;
      v143 = *(_BYTE *)(v142 + 8);
      v144 = v142 - 64;
      v145 = v141;
      p_ptr = v16;
      if ( (v143 & 0x7Fu) - 58 >= 4 )
        v144 = 0;
      v200 = (_QWORD *)v144;
      while ( 1 )
      {
        v152 = *(unsigned __int8 *)(v144 + 73);
        LOBYTE(v152) = (unsigned __int8)v152 >> 5;
        if ( (*(_BYTE *)(v144 + 75) & 1) != 0 )
        {
          if ( (_BYTE)v152 != 2 )
            goto LABEL_119;
        }
        else if ( (_BYTE)v152 != 2 )
        {
          goto LABEL_134;
        }
        v146 = v194;
        if ( !v194 )
        {
          ptr = nullptr;
          goto LABEL_136;
        }
        v11 = v194 - 1;
        v147 = v11 & (((unsigned int)v144 >> 9) ^ ((unsigned int)v144 >> 4));
        v148 = (__int64 *)(v192 + 24LL * v147);
        v10 = *v148;
        if ( *v148 != v144 )
        {
          v12 = 1;
          v153 = nullptr;
          if ( v10 == -4096 )
          {
LABEL_128:
            v10 = 3 * v194;
            ptr = v148;
            v152 = (unsigned int)(v193 + 1);
            if ( 4 * (int)v152 < (unsigned int)v10 )
            {
              v10 = v194 - HIDWORD(v193) - (unsigned int)v152;
              if ( (unsigned int)v10 > v194 >> 3 )
              {
LABEL_130:
                v154 = *v148 == -4096;
                LODWORD(v193) = v152;
                if ( !v154 )
                  --HIDWORD(v193);
                *v148 = v144;
                v150 = (__m128 *)(v148 + 1);
                v148[1] = 0;
                v148[2] = 0;
                goto LABEL_133;
              }
LABEL_137:
              v155 = (__int64 *)v183;
              sub_1848330(v183, v146, v152, v10, v11, v12);
              sub_183FF70(v155, v184, &ptr);
              v144 = (__int64)v200;
              v148 = (__int64 *)ptr;
              LODWORD(v152) = v193 + 1;
              goto LABEL_130;
            }
LABEL_136:
            v146 = 2 * v194;
            goto LABEL_137;
          }
          while ( 1 )
          {
            if ( !v153 && v10 == -8192 )
              v153 = v148;
            v161 = v12 + 1;
            v12 = v147 + (unsigned int)v12;
            v147 = v11 & v12;
            v148 = (__int64 *)(v192 + 24LL * ((unsigned int)v11 & (unsigned int)v12));
            v10 = *v148;
            if ( *v148 == v144 )
              break;
            if ( v10 == -4096 )
            {
              if ( v153 )
                v148 = v153;
              goto LABEL_128;
            }
            LODWORD(v12) = v161;
          }
        }
        v149 = v148[1];
        v150 = (__m128 *)(v148 + 1);
        if ( v149 )
          break;
LABEL_133:
        a7 = (__m128i)_mm_loadh_ps((const double *)&p_ptr);
        *v150 = (__m128)a7;
LABEL_118:
        v144 = (__int64)v200;
        if ( (*((_BYTE *)v200 + 75) & 1) == 0 )
        {
LABEL_134:
          v25 = v175;
          goto LABEL_9;
        }
LABEL_119:
        v151 = (_QWORD *)(*(_QWORD *)(v144 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v144 + 16) & 4) != 0 )
          v151 = (_QWORD *)*v151;
        v10 = (__int64)(v151 - 8);
        v145 = v144;
        if ( v151 )
          v151 -= 8;
        v200 = v151;
        v144 = (__int64)v151;
      }
      if ( v145 == v149 )
        goto LABEL_118;
      v165 = p_ptr;
      v166 = sub_B98AF0((__int64)p_ptr);
      sub_168B9F0((__int64)&ptr, v9 + 1, v166, 0x1083u, 0);
      v206[0] = *(_QWORD *)(v141 + 40);
      v176 = sub_15894B0((__int64)&ptr, v206);
      v207 = (void *)sub_B98B90((__int64)v165);
      sub_1587DB0(v176, (__int64 *)&v207);
      sub_15F7200(&ptr);
      v167 = sub_B98AF0(v148[2]);
      sub_168B9F0((__int64)&ptr, v9 + 1, v167, 0x1890u, 0);
      LODWORD(v206[0]) = 0;
      v168 = sub_1587D10((__int64)&ptr, (int *)v206);
      v207 = (void *)sub_B98B90(v148[2]);
      sub_1587DB0(v168, (__int64 *)&v207);
      sub_15F7200(&ptr);
      v25 = v177;
LABEL_9:
      v175 = v25;
LABEL_10:
      v14 = ++v13;
      if ( v13 >= a5 )
      {
        if ( v175 )
          goto LABEL_97;
        goto LABEL_12;
      }
    }
    ptr = nullptr;
    goto LABEL_164;
  }
LABEL_12:
  v26 = (_QWORD *)(*(_QWORD *)(v179 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v179 + 16) & 4) != 0 )
    v26 = (_QWORD *)*v26;
  if ( (unsigned __int8)sub_B8E180((unsigned __int64)v26) || !a5 )
    goto LABEL_91;
  v27 = 0;
  v28 = 0;
  while ( 1 )
  {
    v29 = v9[33];
    v30 = sub_B98AF0(a4[v27]);
    if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v29 + 32), 0x1B88u, v30, v29, v31, v32) != 1 )
      break;
    v27 = (unsigned int)++v28;
    if ( v28 == a5 )
      goto LABEL_91;
  }
  v207 = v209;
  v208 = 0x2000000000LL;
  v33 = sub_B72690(v179 + 72);
  v38 = v33;
  if ( !v33 )
    BUG();
  sub_7052B0((__int64 *)(*(_QWORD *)(v33 + 40) + 96LL), *(_QWORD *)(v33 + 40), v34, v35, v36, v37);
  v43 = *(_QWORD *)(v38 + 64);
  if ( (*(_BYTE *)(v43 + 32) & 1) != 0 )
    v44 = sub_B969C0(v43);
  else
    v44 = *(_QWORD *)(v43 + 32);
  sub_7052B0((__int64 *)(*(_QWORD *)(v38 + 40) + 96LL), *(_QWORD *)(v38 + 40), v39, v40, v41, v42);
  v45 = *(__int64 **)(v38 + 40);
  v46 = v44 + 24LL * *(unsigned int *)(*(_QWORD *)(v38 + 64) + 20LL);
  sub_7052B0(v45 + 12, (__int64)v45, v47, v48, v49, v50);
  v55 = *(_QWORD *)(v38 + 64);
  if ( (*(_BYTE *)(v55 + 32) & 1) != 0 )
    v56 = sub_B969C0(v55);
  else
    v56 = *(_QWORD *)(v55 + 32);
  for ( ; v46 != v56; LODWORD(v208) = v208 + 1 )
  {
    while ( 1 )
    {
      v57 = sub_1839D10(*(__int64 **)(v56 + 16), (__int64)v45, v51, v52, v53);
      v52 = HIDWORD(v208);
      v58 = *(_QWORD *)(*(_QWORD *)&byte_8[v57 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      v59 = (unsigned int)v208 + 1LL;
      if ( v59 > HIDWORD(v208) )
        break;
      v51 = (__int64)v207;
      v56 += 24;
      *((_QWORD *)v207 + (unsigned int)v208) = v58;
      LODWORD(v208) = v208 + 1;
      if ( v56 == v46 )
        goto LABEL_29;
    }
    v45 = (__int64 *)v209;
    v56 += 24;
    sub_2237220(&v207, v209, v59, 8);
    v51 = (unsigned int)v208;
    *((_QWORD *)v207 + (unsigned int)v208) = v58;
  }
LABEL_29:
  sub_7052B0((__int64 *)(*(_QWORD *)(v38 + 40) + 96LL), *(_QWORD *)(v38 + 40), v51, v52, v53, v54);
  v64 = *(_QWORD *)(v38 + 64);
  if ( (*(_BYTE *)(v64 + 24) & 1) != 0 )
    v65 = sub_B96980(v64);
  else
    v65 = *(_QWORD *)(v64 + 24);
  sub_7052B0((__int64 *)(*(_QWORD *)(v38 + 40) + 96LL), *(_QWORD *)(v38 + 40), v60, v61, v62, v63);
  v66 = *(__int64 **)(v38 + 40);
  v67 = v65 + 24LL * *(unsigned int *)(*(_QWORD *)(v38 + 64) + 16LL);
  sub_7052B0(v66 + 12, (__int64)v66, v68, v69, v70, v71);
  v76 = *(_QWORD *)(v38 + 64);
  if ( (*(_BYTE *)(v76 + 24) & 1) != 0 )
    v77 = sub_B96980(v76);
  else
    v77 = *(_QWORD *)(v76 + 24);
  for ( ; v67 != v77; v77 += 24 )
  {
    if ( (*(_BYTE *)(v77 + 12) & 1) == 0 )
    {
      v78 = sub_1839D10(*(__int64 **)(v77 + 16), (__int64)v66, (__int64)v72, v73, v74);
      v73 = HIDWORD(v208);
      v79 = *(_QWORD *)(*(_QWORD *)&byte_8[v78 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
      v80 = (unsigned int)v208;
      v81 = (unsigned int)v208 + 1LL;
      if ( v81 > HIDWORD(v208) )
      {
        v66 = (__int64 *)v209;
        sub_2237220(&v207, v209, v81, 8);
        v80 = (unsigned int)v208;
      }
      v72 = v207;
      *((_QWORD *)v207 + v80) = v79;
      LODWORD(v208) = v208 + 1;
    }
  }
  v84 = sub_B7E900(v38 - 64, (__int64)v66, (__int64)v72, v73, v74, v75);
  if ( v84 )
  {
    while ( 1 )
    {
LABEL_40:
      if ( (*(_BYTE *)(v84 + 68) & 1) == 0 || *(_QWORD *)(v84 + 40) )
        sub_1838A40((_QWORD *)v84, (__int64)&v207, v82, v83, v85, v86);
      v87 = *(_QWORD *)(v84 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v84 = v87;
      if ( !v87 )
        break;
      if ( (*(_BYTE *)(v87 + 28) & 0x7Fu) - 49 > 2 )
      {
        while ( 1 )
        {
          v88 = *(_QWORD *)(v84 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v84 = v88;
          if ( !v88 )
            goto LABEL_48;
          v82 = (*(_BYTE *)(v88 + 28) & 0x7Fu) - 49;
          if ( (unsigned int)v82 <= 2 )
            goto LABEL_40;
        }
      }
    }
  }
LABEL_48:
  v89 = 0;
  v90 = 0;
  v91 = v208;
  v92 = 0;
  v197 = v199;
  v198 = 0xC00000000LL;
  p_ptr = &ptr;
  ptr = &v212;
  v211 = 0x2000000000LL;
  do
  {
    v93 = sub_1837FA0((__int64 *)a4[v90]);
    if ( v91 != v89 )
    {
      if ( *((_QWORD *)v207 + v89) == v93 )
        goto LABEL_55;
      while ( v91 != ++v89 )
      {
        if ( v93 == *((_QWORD *)v207 + v89) )
          goto LABEL_55;
      }
    }
    if ( (_DWORD)v92 )
    {
      v170 = (unsigned int)v198;
      v171 = (unsigned int)v198 + 1LL;
      if ( v171 > HIDWORD(v198) )
      {
        v178 = v93;
        sub_2237220(&v197, v199, v171, 4);
        v170 = (unsigned int)v198;
        v93 = v178;
      }
      *((_DWORD *)v197 + v170) = v92;
      LODWORD(v198) = v198 + 1;
      if ( !v91 || *(_QWORD *)v207 == v93 )
      {
        v89 = 0;
      }
      else
      {
        v172 = (char *)v207 + 8;
        v89 = 0;
        while ( v91 != ++v89 )
        {
          v172 += 8;
          if ( v93 == *((_QWORD *)v172 - 1) )
            goto LABEL_55;
        }
        v89 = v91;
      }
    }
LABEL_55:
    v94 = (unsigned int)v211;
    if ( (unsigned int)v211 >= (unsigned __int64)HIDWORD(v211) )
    {
      v169 = (v92 << 32) | v89;
      if ( HIDWORD(v211) < (unsigned __int64)(unsigned int)v211 + 1 )
      {
        sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v211 + 1LL, 8);
        v94 = (unsigned int)v211;
        v169 = (v92 << 32) | v89;
      }
      *((_QWORD *)ptr + v94) = v169;
      v96 = (unsigned int)(v211 + 1);
      LODWORD(v211) = v211 + 1;
    }
    else
    {
      v95 = (unsigned int *)((char *)ptr + 8 * (unsigned int)v211);
      *v95 = v89;
      v95[1] = v92;
      v96 = (unsigned int)(v211 + 1);
      LODWORD(v211) = v211 + 1;
    }
    v90 = (unsigned int)(v92 + 1);
    v92 = v90;
  }
  while ( v90 != a5 );
  v97 = v198;
  v98 = (char *)ptr;
  if ( (_DWORD)v198 )
  {
    v99 = 8 * v96;
    v100 = (char *)ptr + 8 * v96;
    if ( v100 != ptr )
    {
      v101 = (char *)ptr + 8 * v96;
      _BitScanReverse64(&v102, v99 >> 3);
      sub_1848180((char *)ptr, v101, 2LL * (int)(63 - (v102 ^ 0x3F)));
      if ( (unsigned __int64)v99 <= 0x80 )
      {
        sub_1838230(v98, v100);
      }
      else
      {
        sub_1838230(v98, v98 + 128);
        for ( ; v100 != v103; *((_DWORD *)v106 + 1) = v107 )
        {
          v104 = *(_DWORD *)v103;
          v105 = *((_DWORD *)v103 - 2);
          v106 = v103 - 8;
          v107 = *((_DWORD *)v103 + 1);
          if ( v105 > *(_DWORD *)v103 )
          {
            while ( 1 )
            {
              *((_DWORD *)v106 + 2) = v105;
              *((_DWORD *)v106 + 3) = *((_DWORD *)v106 + 1);
              v105 = *((_DWORD *)v106 - 2);
              if ( v104 >= v105 )
                break;
              v106 -= 8;
            }
          }
          else
          {
            v106 = v103;
          }
          v103 += 8;
          *(_DWORD *)v106 = v104;
        }
      }
      v97 = v198;
    }
    v108 = 7048;
    if ( v97 != 1 )
      v108 = 7376;
    v184 = v9 + 1;
    v109 = v206;
    v110 = sub_B98AF0(a4[*(_DWORD *)v197 - 1]);
    sub_168B9F0((__int64)v206, v9 + 1, v110, v108, 0);
    v111 = v211;
    if ( (_DWORD)v211 )
    {
      v112 = 0;
      v185 = v206;
      v113 = 0;
      v186 = &v195;
      do
      {
        v114 = *((unsigned int *)ptr + 2 * v113 + 1);
        if ( (_DWORD)v114 != v112 )
        {
          v115 = a4[v114];
          v116 = (__int64 *)v9[34];
          v183 = (__int64 **)v9[29];
          v117 = sub_B98B90(v115);
          LOBYTE(v188) = 1;
          *(_QWORD *)&v187[3] = v117;
          v118 = sub_13DD220(v117, v188, v116, (__int64)v183, nullptr, a7, a8);
          v119 = a4[v113];
          v121 = v120;
          v183 = (__int64 **)v118;
          v122 = sub_B98B90(v119);
          v202 = 0;
          v200 = (_QWORD *)v122;
          v204[0] = v205;
          v123 = v186;
          v203 = 0;
          v205[0] = 0;
          v204[1] = nullptr;
          v205[16] = 0;
          v201 = 1;
          v195 = v196;
          sub_18390F0(v186, v183, (__int64)v183 + v121);
          sub_A0AAD0((__int64)v204, v123);
          if ( v195 != v196 )
            operator delete(v195);
          sub_1589170((__int64)v185, &v200);
          if ( v204[0] != v205 )
            operator delete(v204[0]);
          v111 = v211;
        }
        v113 = (unsigned int)(v112 + 1);
        v112 = v113;
      }
      while ( (unsigned int)v113 < v111 );
      v109 = v185;
    }
    if ( (_DWORD)v198 != 1 )
    {
      sub_15F7200(v109);
      v124 = (char *)v197 + 4 * (unsigned int)v198;
      v125 = (char *)v197;
      if ( v197 != v124 )
      {
        v180 = v9;
        do
        {
          v126 = *(_DWORD *)v125;
          v125 += 4;
          v127 = (__int64 *)a4[v126 - 1];
          v128 = sub_B98AF0((__int64)v127);
          sub_168B9F0((__int64)v109, v184, v128, 0x179Fu, 0);
          sub_18572C0((__int64)v109, v127, (__int64 *)a4[v126]);
          v200 = (_QWORD *)sub_B98B90((__int64)v127);
          sub_1587DB0((__int64)v109, (__int64 *)&v200);
          sub_15F7200(v109);
        }
        while ( v124 != v125 );
        v9 = v180;
      }
      if ( ptr != p_ptr + 2 )
        free(ptr);
      goto LABEL_87;
    }
    sub_18572C0((__int64)v109, (__int64 *)a4[*(_DWORD *)v197 - 1], (__int64 *)a4[*(unsigned int *)v197]);
    sub_15F7200(v109);
    v98 = (char *)ptr;
  }
  if ( v98 != (char *)(p_ptr + 2) )
    free(v98);
LABEL_87:
  if ( v197 != v199 )
    free(v197);
  if ( v207 != v209 )
    free(v207);
LABEL_91:
  sub_187BB90(v9, v179, a6, a4, a5, *(double *)a7.m128i_i64, a8);
  sub_186FAF0((__int64)v9, v179, v129, v130, v131, v132);
LABEL_97:
  operator delete(v192, 24LL * v194, 8);
  operator delete(v189, 16LL * v191, 8);
}
