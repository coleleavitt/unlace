__int64 __fastcall sub_187BB90(
        _QWORD *a1,
        __int64 a2,
        char a3,
        const void *a4,
        unsigned __int64 a5,
        double a6,
        double a7)
{
  __int64 v7; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // rax
  __m128 v17; // xmm0
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned int v27; // ebp
  __int64 v28; // rax
  _QWORD *v29; // r14
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rbx
  unsigned __int64 v37; // rdi
  __int64 v38; // rax
  _QWORD *v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // rax
  unsigned __int64 v43; // rdi
  _QWORD *v44; // rbx
  _QWORD *v45; // r12
  _QWORD *v46; // r15
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 *v49; // rax
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rdx
  unsigned int v54; // edi
  __int64 v55; // r8
  _QWORD *v56; // rbx
  __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int64 v61; // rax
  char *v62; // rdx
  unsigned __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  void **v66; // rbp
  char *v67; // r12
  __int64 i; // rbx
  char *v69; // rax
  __int64 v70; // r12
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdi
  __int64 v76; // rbx
  __int64 v77; // rsi
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 *v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdi
  __int64 v88; // r15
  char v89; // bp
  __int64 v90; // r13
  __int64 v91; // rax
  unsigned __int64 v92; // rdx
  unsigned __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // r14
  __int64 v96; // r14
  char v97; // al
  unsigned __int8 v98; // al
  unsigned int v99; // eax
  unsigned __int64 *v100; // r13
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int64 v109; // rax
  __int64 *v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 *v113; // rbx
  __int64 v114; // r12
  char v115; // r13
  __int64 v116; // rax
  unsigned __int64 v117; // rdx
  unsigned __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // r15
  unsigned __int8 v121; // al
  __int64 v122; // rcx
  __int64 v123; // rbx
  __int64 v124; // r8
  __int64 v125; // r12
  __int64 v126; // rcx
  __int64 v127; // rdx
  unsigned __int8 v128; // al
  __int64 v129; // rdx
  _QWORD *v130; // rax
  __int64 v131; // rdx
  int v132; // esi
  bool v133; // zf
  int v134; // ebx
  _QWORD *v135; // r10
  __int64 *v136; // rbx
  __int64 v137; // rbx
  __int64 *v138; // rdi
  void *v139; // rax
  void *v140; // rax
  unsigned int v141; // ebx
  __int64 **v142; // rbp
  __int64 **v143; // r12
  unsigned __int64 v144; // rdx
  __int64 v145; // rdx
  __int64 v146; // rax
  _QWORD *v147; // rax
  int v148; // r10d
  __int64 v149; // r11
  int v150; // eax
  int v151; // esi
  __int64 *v152; // r15
  __int64 v153; // rdi
  __int64 v154; // rdx
  __int64 v155; // rcx
  __m128 *v157; // [rsp+8h] [rbp-270h] BYREF
  void **v158; // [rsp+10h] [rbp-268h]
  __m128 *v159; // [rsp+18h] [rbp-260h] BYREF
  __m128 *v160; // [rsp+20h] [rbp-258h]
  __int64 *v161; // [rsp+28h] [rbp-250h]
  unsigned __int8 v162; // [rsp+36h] [rbp-242h]
  char v163; // [rsp+37h] [rbp-241h]
  __m128 *v164; // [rsp+38h] [rbp-240h]
  __int64 v165; // [rsp+40h] [rbp-238h]
  __int64 *v166; // [rsp+48h] [rbp-230h]
  __int64 v167; // [rsp+50h] [rbp-228h]
  unsigned __int64 *v168; // [rsp+58h] [rbp-220h]
  __int64 v169; // [rsp+60h] [rbp-218h] BYREF
  unsigned __int64 v170; // [rsp+68h] [rbp-210h] BYREF
  __m128 v171; // [rsp+70h] [rbp-208h] BYREF
  __m128 v172; // [rsp+100h] [rbp-178h] BYREF
  char v173; // [rsp+110h] [rbp-168h]
  unsigned int v174; // [rsp+114h] [rbp-164h]
  __int64 v175; // [rsp+118h] [rbp-160h]
  __int64 v176; // [rsp+120h] [rbp-158h]
  unsigned int v177; // [rsp+128h] [rbp-150h]
  void *ptr; // [rsp+130h] [rbp-148h]
  __int64 v179; // [rsp+138h] [rbp-140h]
  char v180; // [rsp+140h] [rbp-138h] BYREF
  __int64 v181; // [rsp+180h] [rbp-F8h]
  __int64 v182; // [rsp+188h] [rbp-F0h]
  unsigned int v183; // [rsp+190h] [rbp-E8h]
  void *v184; // [rsp+1A0h] [rbp-D8h] BYREF
  __int64 v185; // [rsp+1A8h] [rbp-D0h]
  int v186; // [rsp+1B0h] [rbp-C8h]
  char v187; // [rsp+1B4h] [rbp-C4h]
  char v188; // [rsp+1B8h] [rbp-C0h] BYREF

  v7 = a2;
  v163 = a3;
  v165 = a2 + 72;
  v162 = sub_B8E180(a2 + 72);
  if ( v162 )
  {
    if ( a5 )
    {
      v13 = -1;
      *(_DWORD *)(v7 + 84) = ((unsigned __int16)a5 << 13) | *(_DWORD *)(v7 + 84) & 0xE0001FFF;
      v14 = a1[31];
      if ( a5 <= 0xFFFFFFFFFFFFFFFLL )
        v13 = 8 * a5;
      v15 = (void *)sub_18406C0((__int64 *)(v14 + 2352), v13, 3u);
      *(_QWORD *)(v7 + 168) = memcpy(v15, a4, 8 * a5);
    }
    v162 = 0;
    if ( a3 )
      sub_B88650(v7, 1);
    return v162;
  }
  v157 = (__m128 *)a2;
  v173 = a3;
  v175 = 0;
  v177 = 0;
  v17 = _mm_loadh_ps((const double *)&v157);
  v157 = &v172;
  ptr = &v180;
  v172 = v17;
  v176 = 0;
  v179 = 0x800000000LL;
  v181 = 0;
  v182 = 0;
  v183 = 0;
  if ( (*(_BYTE *)(a2 + 29) & 2) == 0 )
  {
    v18 = *(_QWORD *)(a2 + 80);
    if ( (v18 & 0x2000000) == 0 )
    {
      if ( (v18 & 0x2000000000000000LL) != 0 && *(_QWORD *)(a2 + 176) )
        goto LABEL_13;
      goto LABEL_146;
    }
  }
  if ( (*(_BYTE *)(a2 + 87) & 0x20) != 0 && *(_QWORD *)(a2 + 176) )
  {
LABEL_13:
    v174 = 3;
    goto LABEL_14;
  }
  v153 = a2;
  LODWORD(v184) = 0;
  a2 = (__int64)&v184;
  v158 = &v184;
  if ( sub_B98FE0(v153, &v184, v11, v12) )
  {
    v174 = 1;
    goto LABEL_14;
  }
  a2 = (__int64)v158;
  LODWORD(v184) = 0;
  if ( !sub_B99060(v7, v158, v154, v155) )
  {
LABEL_146:
    v174 = 0;
    goto LABEL_14;
  }
  v174 = 2;
LABEL_14:
  v19 = sub_B72690(v165);
  v24 = v19;
  if ( !v19 )
    BUG();
  v25 = *(_QWORD *)(v19 + 64);
  if ( v25
    || (a2 = *(_QWORD *)(v24 + 40),
        sub_7052B0((__int64 *)(a2 + 96), a2, v20, v21, v22, v23),
        (v25 = *(_QWORD *)(v24 + 64)) != 0) )
  {
    v26 = *(_QWORD *)(v25 + 88);
    v169 = v26;
    if ( !v26 )
    {
      v162 = 1;
      goto LABEL_132;
    }
    if ( !a5 )
      goto LABEL_59;
    v167 = v7;
    v27 = 0;
    v28 = 0;
    v158 = &v184;
    v29 = a4;
    v164 = &v171;
    v168 = &v171.m128_u64[1];
    v166 = (__int64 *)&v170;
    while ( 1 )
    {
      v34 = v29[v28];
      v35 = (*(__int64 *)v34 >> 1) & 3;
      v36 = v35;
      if ( ((*(__int64 *)v34 >> 1) & 3) == 0 )
      {
        if ( (*(_BYTE *)(v34 + 28) & 1) != 0 )
          goto LABEL_215;
        v30 = sub_B98AD0(v34);
        a2 = (__int64)v166;
        v31 = *(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v31 + 16) != 48 )
          v31 = v36;
        v170 = v31;
        v32 = &v157[1].m128_i64[1];
        if ( (unsigned __int8)sub_183FEB0(&v157[1].m128_i64[1], v166, v164) )
        {
          v33 = (__int64 *)(v171.m128_u64[0] + 8);
LABEL_24:
          *v33 = v34;
          goto LABEL_25;
        }
        v21 = v177;
        v130 = (_QWORD *)v171.m128_u64[0];
        v131 = (unsigned int)(v176 + 1);
        v132 = 2 * v177;
        v22 = (unsigned int)(4 * v131);
        v184 = (void *)v171.m128_u64[0];
        if ( (unsigned int)v22 < 3 * v177 )
        {
          a2 = v177 - HIDWORD(v176) - (unsigned int)v131;
          if ( (unsigned int)a2 > v177 >> 3 )
          {
LABEL_137:
            v133 = *v130 == -4096;
            LODWORD(v176) = v131;
            if ( !v133 )
              --HIDWORD(v176);
            v20 = v170;
            v33 = v130 + 1;
            *v33 = 0;
            *(v33 - 1) = v20;
            goto LABEL_24;
          }
          v132 = v177;
        }
        sub_1847F70((__int64)v32, v132, v131, v177, v22, v23);
        a2 = (__int64)v166;
        sub_183FEB0(v32, v166, v158);
        LODWORD(v131) = v176 + 1;
        v130 = v184;
        goto LABEL_137;
      }
      v37 = *(_QWORD *)v34 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v35 != 1 )
      {
        if ( v35 != 2 )
          goto LABEL_215;
        v37 = *(_QWORD *)(*(_QWORD *)(v37 + 56) + 8LL * *(unsigned int *)(v37 + 64) - 8);
      }
      v38 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v37 + 32LL))(v37);
      a2 = v177;
      v22 = v175;
      v171.m128_u64[0] = v38;
      if ( !v177 )
        break;
      v23 = v177 - 1;
      v21 = (unsigned int)v23 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
      v39 = (_QWORD *)(v175 + 16 * v21);
      v40 = *v39;
      if ( v38 != *v39 )
      {
        v134 = 1;
        v135 = nullptr;
        if ( v40 != -4096 )
        {
          while ( 1 )
          {
            if ( !v135 && v40 == -8192 )
              v135 = v39;
            v21 = (unsigned int)v23 & ((_DWORD)v21 + v134);
            v39 = (_QWORD *)(v175 + 16 * v21);
            v40 = *v39;
            if ( v38 == *v39 )
              goto LABEL_32;
            if ( v40 == -4096 )
            {
              if ( v135 )
                v39 = v135;
              break;
            }
            ++v134;
          }
        }
        v184 = v39;
        v21 = (unsigned int)(v176 + 1);
        v22 = (unsigned int)(4 * v21);
        if ( (unsigned int)v22 < 3 * v177 )
        {
          v22 = v177 >> 3;
          if ( v177 - HIDWORD(v176) - (unsigned int)v21 > (unsigned int)v22 )
          {
LABEL_151:
            v133 = *v39 == -4096;
            LODWORD(v176) = v21;
            if ( !v133 )
              --HIDWORD(v176);
            *v39 = v38;
            v39[1] = 0;
            goto LABEL_32;
          }
LABEL_156:
          v136 = &v157[1].m128_i64[1];
          sub_1847F70((__int64)&v157[1].m128_i64[1], a2, (__int64)v39, v21, v22, v23);
          sub_183FEB0(v136, (__int64 *)v164, v158);
          a2 = (unsigned int)v176;
          v38 = v171.m128_u64[0];
          v39 = v184;
          v21 = (unsigned int)(v176 + 1);
          goto LABEL_151;
        }
LABEL_155:
        LODWORD(a2) = 2 * v177;
        goto LABEL_156;
      }
LABEL_32:
      v20 = (unsigned __int64)(v39 + 1);
      *(_QWORD *)v20 = v34;
      v41 = *(_QWORD *)v34;
      v42 = (*(__int64 *)v34 >> 1) & 3;
      if ( v42 == 2 )
      {
        v43 = v41 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v43 )
        {
          v44 = *(_QWORD **)(v43 + 56);
          v45 = &v44[*(unsigned int *)(v43 + 64)];
          if ( v44 != v45 )
          {
            v160 = v157 + 8;
            while ( 1 )
            {
              v46 = (_QWORD *)*v44;
              if ( (*(_BYTE *)(*v44 + 28LL) & 0x7Fu) - 49 <= 2 )
              {
                v21 = v46[2] & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v46[2] & 4) != 0 )
                  v21 = *(_QWORD *)v21;
                if ( (*(_BYTE *)(v21 + 8) & 0x7Fu) - 58 > 3 )
                  goto LABEL_217;
                if ( *(_BYTE *)(v21 + 9) >> 5 == 2 )
                  break;
              }
LABEL_36:
              if ( v45 == ++v44 )
                goto LABEL_25;
            }
            v159 = (__m128 *)(*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, __int64, __int64))(*v46 + 32LL))(
                               *v44,
                               a2,
                               v20,
                               v21,
                               v22);
            v47 = v46[2];
            if ( (v47 & 4) != 0 )
              v48 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v48 = v47 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_BYTE *)(v48 + 8) & 0x7Fu) - 58 > 3 )
              goto LABEL_215;
            v49 = (__int64 *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v48 - 64) + 32LL))(v48 - 64);
            v52 = v183;
            v53 = v181;
            v161 = v49;
            v17 = _mm_loadh_ps((const double *)&v159);
            v171 = v17;
            if ( v183 )
            {
              v51 = v183 - 1;
              v54 = v51 & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
              a2 = v181 + 16LL * v54;
              v55 = *(_QWORD *)a2;
              if ( v49 == *(__int64 **)a2 )
              {
LABEL_47:
                sub_1847810((__m128 *)v158, (_QWORD *)a2, (_QWORD *)(16 * v52 + v53), (__int64)v160, 1);
                goto LABEL_36;
              }
              v148 = 1;
              v149 = 0;
              if ( v55 != -4096 )
              {
                while ( 1 )
                {
                  if ( v55 == -8192 && !v149 )
                    v149 = a2;
                  v54 = v51 & (v148 + v54);
                  a2 = v181 + 16LL * v54;
                  v55 = *(_QWORD *)a2;
                  if ( v49 == *(__int64 **)a2 )
                    goto LABEL_47;
                  if ( v55 == -4096 )
                  {
                    if ( v149 )
                      a2 = v149;
                    break;
                  }
                  ++v148;
                }
              }
              v184 = (void *)a2;
              v150 = v182 + 1;
              v50 = (unsigned int)(4 * (v182 + 1));
              if ( (unsigned int)v50 < 3 * v183 )
              {
                v50 = v183 >> 3;
                if ( v183 - HIDWORD(v182) - v150 > (unsigned int)v50 )
                {
LABEL_181:
                  v133 = *(_QWORD *)a2 == -4096;
                  LODWORD(v182) = v150;
                  if ( !v133 )
                    --HIDWORD(v182);
                  *(__m128 *)a2 = v17;
                  goto LABEL_47;
                }
                v151 = v183;
LABEL_188:
                v152 = (__int64 *)v160;
                sub_187B790((__int64)v160, v151, v181, v183, v50, v51);
                sub_1840F20(v152, (__int64 *)v164, v158);
                v53 = v181;
                v52 = v183;
                v150 = v182 + 1;
                a2 = (__int64)v184;
                v17 = _mm_loadh_ps((const double *)&v171.m128_u64[1]);
                goto LABEL_181;
              }
            }
            else
            {
              v184 = nullptr;
            }
            v151 = 2 * v183;
            goto LABEL_188;
          }
        }
LABEL_25:
        v28 = ++v27;
        if ( v27 >= a5 )
          goto LABEL_58;
      }
      else
      {
        if ( v42 != 1 )
          goto LABEL_25;
        v56 = (_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v41 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_25;
        v20 = v56[2] & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v56[2] & 4) != 0 )
          v20 = *(_QWORD *)v20;
        if ( (*(_BYTE *)(v20 + 8) & 0x7Fu) - 58 > 3 )
LABEL_217:
          BUG();
        if ( *(_BYTE *)(v20 + 9) >> 5 != 2 )
          goto LABEL_25;
        v159 = (__m128 *)(*(__int64 (__fastcall **)(unsigned __int64))(*v56 + 32LL))(v41 & 0xFFFFFFFFFFFFFFF8LL);
        v57 = v56[2];
        if ( (v57 & 4) != 0 )
          v58 = *(_QWORD *)(v57 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v58 = v57 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_BYTE *)(v58 + 8) & 0x7Fu) - 58 > 3 )
LABEL_215:
          BUG();
        v160 = (__m128 *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)(v58 - 64) + 32LL))(v58 - 64);
        a2 = (__int64)&v157[8];
        v17 = _mm_loadh_ps((const double *)&v159);
        v171 = v17;
        sub_187B9A0((__m128i *)v158, (__int64)&v157[8], (__int64 *)v164, v168, v59, v60);
        v28 = ++v27;
        if ( v27 >= a5 )
        {
LABEL_58:
          v7 = v167;
          v26 = v169;
LABEL_59:
          v187 = 1;
          v158 = &v184;
          v184 = &v188;
          v185 = 16;
          v186 = 0;
          v61 = sub_1845530(v26, a2, v20, v21, v22, v23);
          v66 = v158;
          v67 = v62;
          for ( i = v61; v67 != (char *)i; i += 24 )
          {
            while ( 1 )
            {
              if ( (*(_BYTE *)(i + 12) & 1) != 0 )
              {
                v69 = (char *)sub_1703870((__int64)v66, i);
                if ( v187 )
                {
                  v63 = HIDWORD(v185);
                  v62 = (char *)v184 + 8 * HIDWORD(v185);
                }
                else
                {
                  v63 = (unsigned int)v185;
                  v62 = (char *)v184 + 8 * (unsigned int)v185;
                }
                if ( v69 != v62 )
                {
                  v63 = *(_QWORD *)v69 + 2LL;
                  if ( v63 <= 1 )
                    break;
                }
              }
LABEL_61:
              i += 24;
              if ( v67 == (char *)i )
                goto LABEL_71;
            }
            while ( 1 )
            {
              v69 += 8;
              if ( v62 == v69 )
                break;
              if ( *(_QWORD *)v69 < 0xFFFFFFFFFFFFFFFELL )
                goto LABEL_61;
            }
          }
LABEL_71:
          v70 = v169;
          sub_7052B0((__int64 *)(*(_QWORD *)(v169 + 104) + 96LL), *(_QWORD *)(v169 + 104), (__int64)v62, v63, v64, v65);
          v75 = *(_QWORD *)(v70 + 128);
          if ( (*(_BYTE *)(v75 + 32) & 1) != 0 )
            v76 = sub_B969C0(v75);
          else
            v76 = *(_QWORD *)(v75 + 32);
          sub_7052B0((__int64 *)(*(_QWORD *)(v70 + 104) + 96LL), *(_QWORD *)(v70 + 104), v71, v72, v73, v74);
          v77 = *(_QWORD *)(v70 + 104);
          v78 = v76 + 24LL * *(unsigned int *)(*(_QWORD *)(v70 + 128) + 20LL);
          sub_7052B0((__int64 *)(v77 + 96), v77, v79, v80, v81, v82);
          v87 = *(_QWORD *)(v70 + 128);
          if ( (*(_BYTE *)(v87 + 32) & 1) != 0 )
            v88 = sub_B969C0(v87);
          else
            v88 = *(_QWORD *)(v87 + 32);
          if ( v78 != v88 )
          {
            v160 = (__m128 *)v7;
            v89 = v163;
            v159 = &v171;
            v161 = (__int64 *)&v170;
            v164 = (__m128 *)&v169;
            while ( 1 )
            {
              v93 = sub_1839D10(*(__int64 **)(v88 + 16), v77, (__int64)v83, v84, v85);
              v77 = v177;
              v94 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v93 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v94 + 16) != 48 )
                v94 = 0;
              if ( !v177 )
                goto LABEL_88;
              v77 = v177 - 1;
              v84 = (unsigned int)v77 & (((unsigned int)v94 >> 9) ^ ((unsigned int)v94 >> 4));
              v83 = (__int64 *)(v175 + 16 * v84);
              v85 = *v83;
              if ( v94 != *v83 )
              {
                v83 = (_QWORD *)(&dword_0 + 1);
                if ( v85 == -4096 )
                  goto LABEL_88;
                while ( 1 )
                {
                  v86 = (unsigned int)((_DWORD)v83 + 1);
                  v84 = (unsigned int)v77 & ((_DWORD)v83 + (_DWORD)v84);
                  v83 = (__int64 *)(v175 + 16LL * (unsigned int)v84);
                  v85 = *v83;
                  if ( v94 == *v83 )
                    break;
                  if ( v85 == -4096 )
                    goto LABEL_88;
                  LODWORD(v83) = v86;
                }
              }
              v95 = v83[1];
              if ( v95 )
              {
                v90 = v169;
                v77 = *(_QWORD *)(v169 + 104);
                sub_7052B0((__int64 *)(v77 + 96), v77, (__int64)v83, v84, v85, v86);
                if ( (*(_BYTE *)(*(_QWORD *)(v90 + 128) + 1LL) & 8) != 0 )
                {
                  v99 = sub_B98AF0(v95);
                  v100 = (unsigned __int64 *)v159;
                  sub_168B9F0((__int64)v159, a1 + 1, v99, 0x194Du, 0);
                  v170 = sub_1839D10(*(__int64 **)(v88 + 16), (__int64)(a1 + 1), v101, v102, v103);
                  v104 = sub_162B6D0((__int64)v100, v161);
                  sub_185AB80(v104, (__int64 *)v164);
                  sub_15F7200(v100);
                  v77 = v169;
                  sub_18666B0((__int64)a1, v169, v105, v106, v107, v108);
                }
                v91 = (unsigned int)v179;
                v84 = HIDWORD(v179);
                v92 = (unsigned int)v179 + 1LL;
                if ( v92 > HIDWORD(v179) )
                {
                  v77 = (__int64)&v157[4];
                  sub_2237220(&v157[3], &v157[4], v92, 8);
                  v91 = (unsigned int)v179;
                }
                v83 = (__int64 *)ptr;
                *((_QWORD *)ptr + v91) = v95;
                LODWORD(v179) = v179 + 1;
                goto LABEL_82;
              }
LABEL_88:
              if ( !v89 )
              {
                v96 = v169;
                v77 = *(_QWORD *)(v169 + 104);
                sub_7052B0((__int64 *)(v77 + 96), v77, (__int64)v83, v84, v85, v86);
                if ( (*(_BYTE *)(*(_QWORD *)(v96 + 128) + 1LL) & 8) == 0 )
                {
                  v97 = sub_A5F460((__int64)v158, v88);
                  v77 = (__int64)v160;
                  v98 = sub_1840AF0(
                          (unsigned __int64)a1,
                          (__int64)v160,
                          v174,
                          v88,
                          v97 ^ 1u,
                          (unsigned __int64 *)v159,
                          *(double *)v17.m128_u64,
                          a7);
                  if ( v98 )
                  {
                    v162 = v98;
                  }
                  else
                  {
                    v77 = v171.m128_u64[0];
                    sub_183F0B0((__int64)&v157[3], v171.m128_i64[0]);
                  }
                }
              }
LABEL_82:
              v88 += 24;
              if ( v88 == v78 )
              {
                v7 = (__int64)v160;
                break;
              }
            }
          }
          v109 = sub_1845530(v169, v77, (__int64)v83, v84, v85, v86);
          v113 = v110;
          if ( (__int64 *)v109 != v110 )
          {
            v114 = v109;
            v115 = v163;
            while ( 2 )
            {
              while ( (*(_BYTE *)(v114 + 12) & 1) != 0 )
              {
LABEL_100:
                v114 += 24;
                if ( v113 == (__int64 *)v114 )
                  goto LABEL_110;
              }
              v118 = sub_1839D10(*(__int64 **)(v114 + 16), v77, (__int64)v110, v111, v112);
              v77 = v177;
              v110 = nullptr;
              v119 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v118 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v119 + 16) != 48 )
                v119 = 0;
              if ( v177 )
              {
                v77 = v177 - 1;
                v111 = (unsigned int)v77 & (((unsigned int)v119 >> 9) ^ ((unsigned int)v119 >> 4));
                v110 = (__int64 *)(v175 + 16 * v111);
                v112 = *v110;
                if ( v119 == *v110 )
                {
LABEL_106:
                  v120 = v110[1];
                  if ( v120 )
                  {
                    v116 = (unsigned int)v179;
                    v111 = HIDWORD(v179);
                    v117 = (unsigned int)v179 + 1LL;
                    if ( v117 > HIDWORD(v179) )
                    {
                      v77 = (__int64)&v157[4];
                      sub_2237220(&v157[3], &v157[4], v117, 8);
                      v116 = (unsigned int)v179;
                    }
                    v110 = (__int64 *)ptr;
                    *((_QWORD *)ptr + v116) = v120;
                    LODWORD(v179) = v179 + 1;
                    goto LABEL_100;
                  }
                }
                else
                {
                  v110 = (_QWORD *)(&dword_0 + 1);
                  if ( v112 != -4096 )
                  {
                    while ( 1 )
                    {
                      v112 = (unsigned int)((_DWORD)v110 + 1);
                      v111 = (unsigned int)v77 & ((_DWORD)v110 + (_DWORD)v111);
                      v110 = (__int64 *)(v175 + 16LL * (unsigned int)v111);
                      if ( v119 == *v110 )
                        goto LABEL_106;
                      if ( *v110 == -4096 )
                        break;
                      LODWORD(v110) = v112;
                    }
                  }
                }
              }
              if ( v115 )
                goto LABEL_100;
              v77 = v7;
              v121 = sub_1840AF0(
                       (unsigned __int64)a1,
                       v7,
                       v174,
                       v114,
                       0,
                       (unsigned __int64 *)&v171,
                       *(double *)v17.m128_u64,
                       a7);
              if ( !v121 )
              {
                v77 = v171.m128_u64[0];
                sub_183F0B0((__int64)&v157[3], v171.m128_i64[0]);
                goto LABEL_100;
              }
              v114 += 24;
              v162 = v121;
              if ( v113 == (__int64 *)v114 )
                break;
              continue;
            }
          }
LABEL_110:
          v123 = sub_B8E970(v169 + 64);
          if ( v123 )
          {
            v125 = (__int64)v157;
            do
            {
              v128 = *(_BYTE *)(v123 + 28) & 0x7F;
              v129 = (unsigned int)v128 - 49;
              if ( (unsigned int)v129 <= 2 )
              {
                if ( ((*(_BYTE *)(v123 + 68) & 1) == 0 || *(_QWORD *)(v123 + 40))
                  && (!(unsigned __int8)sub_B78060(v123, v77, v129, v122, v124) || v174 <= 2 && v174) )
                {
                  v126 = 0;
                  v127 = v123;
                  goto LABEL_118;
                }
              }
              else
              {
                if ( v174 > 2 )
                {
                  if ( v174 != 3 )
                    break;
                }
                else if ( v174 )
                {
                  goto LABEL_120;
                }
                if ( v128 == 32
                  && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v123 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL) != 5 )
                {
                  v126 = v123;
                  v127 = *(_QWORD *)(*(_QWORD *)(v123 + 56) + 8LL * *(unsigned int *)(v123 + 64) - 8);
LABEL_118:
                  v77 = v125;
                  if ( (unsigned __int8)sub_184E150((__int64)a1, v125, v127, v126, *(double *)v17.m128_u64) )
                    v162 = 1;
                }
              }
LABEL_120:
              v123 = *(_QWORD *)(v123 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            while ( v123 );
          }
          if ( !(_DWORD)v179 )
          {
LABEL_130:
            if ( !v187 )
              free(v184);
            goto LABEL_132;
          }
          v137 = 8LL * (unsigned int)v179;
          *(_DWORD *)(v7 + 84) = ((unsigned __int16)v179 << 13) | *(_DWORD *)(v7 + 84) & 0xE0001FFF;
          v138 = (__int64 *)(a1[31] + 2352LL);
          v158 = (void **)a1[31];
          v139 = (void *)sub_18406C0(v138, v137, 3u);
          v140 = memcpy(v139, ptr, v137);
          v141 = *(_DWORD *)(v7 + 24);
          *(_QWORD *)(v7 + 168) = v140;
          v142 = (__int64 **)ptr;
          v143 = (__int64 **)((char *)ptr + 8 * (unsigned int)v179);
          if ( ptr == v143 )
          {
LABEL_172:
            v147 = (_QWORD *)sub_B72690(v165);
            if ( v147 )
              v147 -= 8;
            sub_18508B0(a1, v141, v147);
            goto LABEL_130;
          }
          while ( 2 )
          {
            v145 = **v142;
            v146 = (v145 >> 1) & 3;
            if ( v146 == 1 )
            {
              v144 = v145 & 0xFFFFFFFFFFFFFFF8LL;
              goto LABEL_167;
            }
            if ( v146 == 2 )
            {
              v144 = *(_QWORD *)(*(_QWORD *)((v145 & 0xFFFFFFFFFFFFFFF8LL) + 56)
                               + 8LL * *(unsigned int *)((v145 & 0xFFFFFFFFFFFFFFF8LL) + 64)
                               - 8);
LABEL_167:
              if ( v144 )
                sub_1845320(a1, v141, v144);
            }
            if ( v143 == ++v142 )
              goto LABEL_172;
            continue;
          }
        }
      }
    }
    v184 = nullptr;
    goto LABEL_155;
  }
  v169 = 0;
  v162 = 1;
LABEL_132:
  operator delete(v181, 16LL * v183, 8);
  if ( ptr != &v157[4] )
    free(ptr);
  operator delete(v175, 16LL * v177, 8);
  return v162;
}
