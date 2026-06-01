unsigned __int64 __fastcall sub_12F7B20(
        __int64 a1,
        unsigned int a2,
        int *a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int8 a6)
{
  int v7; // r12d
  __int64 v8; // rcx
  unsigned int *v9; // rax
  size_t v10; // r11
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 *v15; // rsi
  __int64 v16; // r9
  __int64 *v17; // r14
  _QWORD *v18; // rdx
  __int64 *v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 i; // r12
  _BYTE *v24; // rsi
  size_t v25; // rdx
  unsigned int v26; // r12d
  __int64 v27; // rbp
  unsigned int *v28; // rsi
  size_t v29; // rdx
  __int64 v30; // rbx
  size_t v31; // rax
  __int64 ***v32; // r9
  __int64 v33; // rcx
  unsigned int v34; // ebx
  __int64 ***v35; // r13
  __int64 ***v36; // rbp
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 *v39; // r8
  __int64 *v40; // r10
  __int64 **v41; // rax
  __int64 **v42; // r12
  unsigned int v43; // eax
  __int64 v44; // r13
  void **v45; // r14
  unsigned __int8 **v46; // rbx
  int v47; // edx
  __int64 *v48; // rax
  __int64 v49; // rbp
  __int64 v50; // r14
  __int64 v51; // rbx
  __int64 v52; // rsi
  unsigned int v53; // r15d
  __int64 *v54; // r14
  unsigned int v55; // eax
  unsigned __int64 result; // rax
  __int64 v57; // rsi
  __int64 v58; // rax
  _BYTE *v59; // rsi
  __m128 *v60; // r14
  _BYTE *v61; // rdx
  size_t v62; // rax
  unsigned __int64 *v63; // rdi
  void **v64; // r14
  size_t v65; // rdx
  __int64 v66; // rax
  const void *v67; // rsi
  __int16 v68; // r13
  __int64 *v69; // rax
  unsigned __int64 v70; // rdi
  __int64 v71; // r8
  __int64 v72; // rsi
  __int64 v73; // rcx
  bool v74; // cf
  char *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 *v82; // rax
  __int64 *v83; // r8
  __int64 v84; // rdi
  char v85; // al
  void **v86; // r13
  int v87; // eax
  int v88; // eax
  _QWORD *v89; // r9
  __int64 v90; // rax
  unsigned __int64 v91; // rsi
  __int64 *v92; // rcx
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rax
  __int64 v95; // rdx
  __int64 *v96; // r9
  __int64 v97; // r14
  __int64 v98; // rbp
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  int v106; // esi
  int v107; // r9d
  __int64 v108; // r10
  unsigned __int8 **v109; // r14
  unsigned int v110; // eax
  unsigned __int8 **v111; // rbx
  void **v112; // r13
  void **v113; // r14
  unsigned int v114; // eax
  int v115; // eax
  _BYTE *v116; // rsi
  __int64 v117; // rdx
  __int64 *v118; // r9
  __int64 v119; // rax
  __int64 *v120; // rsi
  unsigned __int64 v121; // rdi
  unsigned __int64 v122; // rdx
  unsigned __int64 v123; // rax
  void **v124; // rbx
  void *v125; // rdx
  __int64 *v126; // r9
  __int64 v127; // rdx
  int v128; // eax
  unsigned __int64 v129; // r13
  unsigned __int64 *v130; // rdx
  __int64 *v131; // rbx
  __int64 v132; // r14
  int v133; // ebx
  __int64 *v134; // rdi
  __int64 v135; // rax
  __int64 *v136; // rbx
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rbx
  __int64 v140; // rax
  __int64 v141; // r13
  __int64 v142; // rbp
  __int64 v143; // rbx
  __int64 *v144; // r14
  void *v145; // rdi
  __int64 v146; // r14
  int v147; // ebx
  __int64 *v148; // rdi
  __int64 v149; // rdx
  __int64 v150; // rax
  __int64 *v151; // rdx
  int v152; // eax
  void **v153; // rdi
  __int64 v154; // rdx
  int v155; // eax
  __int64 *v156; // rax
  int v157; // edx
  __int64 *v158; // rdi
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rax
  _QWORD *v163; // r15
  unsigned int v164; // r13d
  __int64 v165; // r12
  __int64 v166; // rbx
  __int64 v167; // r14
  __int64 v168; // rbp
  void *v169; // rdi
  unsigned int *v170; // [rsp+8h] [rbp-2A0h]
  __int64 v171; // [rsp+10h] [rbp-298h]
  __m128 *v172; // [rsp+18h] [rbp-290h]
  size_t v173; // [rsp+20h] [rbp-288h]
  int v174; // [rsp+28h] [rbp-280h]
  unsigned int v175; // [rsp+2Ch] [rbp-27Ch]
  void *v176; // [rsp+30h] [rbp-278h]
  __int64 v177; // [rsp+38h] [rbp-270h]
  _BYTE *v178; // [rsp+40h] [rbp-268h]
  __int64 *p_ptr; // [rsp+48h] [rbp-260h]
  unsigned int v180; // [rsp+50h] [rbp-258h]
  unsigned __int8 v181; // [rsp+57h] [rbp-251h]
  __int64 *v182; // [rsp+58h] [rbp-250h]
  int *v183; // [rsp+60h] [rbp-248h]
  void **v184; // [rsp+68h] [rbp-240h]
  __int64 *v185; // [rsp+70h] [rbp-238h]
  __int64 *v186; // [rsp+78h] [rbp-230h]
  void **v187; // [rsp+80h] [rbp-228h]
  void **v188; // [rsp+88h] [rbp-220h]
  unsigned __int64 v189; // [rsp+90h] [rbp-218h]
  _QWORD *v190; // [rsp+98h] [rbp-210h]
  void *s1; // [rsp+A0h] [rbp-208h] BYREF
  size_t n; // [rsp+A8h] [rbp-200h]
  void *v193[2]; // [rsp+B0h] [rbp-1F8h] BYREF
  char v194; // [rsp+C0h] [rbp-1E8h] BYREF
  void *v195[4]; // [rsp+D0h] [rbp-1D8h] BYREF
  void *v196[2]; // [rsp+F0h] [rbp-1B8h] BYREF
  _BYTE v197[16]; // [rsp+100h] [rbp-1A8h] BYREF
  void *v198; // [rsp+110h] [rbp-198h] BYREF
  __int64 v199; // [rsp+118h] [rbp-190h]
  _BYTE v200[32]; // [rsp+120h] [rbp-188h] BYREF
  void *ptr; // [rsp+140h] [rbp-168h] BYREF
  _BYTE v202[12]; // [rsp+148h] [rbp-160h] BYREF
  char v203; // [rsp+154h] [rbp-154h]
  void *v204; // [rsp+158h] [rbp-150h]
  __int64 v205; // [rsp+160h] [rbp-148h]
  char v206; // [rsp+168h] [rbp-140h]
  char v207; // [rsp+178h] [rbp-130h]
  void *v208; // [rsp+180h] [rbp-128h] BYREF
  _BYTE v209[12]; // [rsp+188h] [rbp-120h] BYREF
  char v210; // [rsp+194h] [rbp-114h]
  void *v211[2]; // [rsp+198h] [rbp-110h] BYREF
  _BYTE v212[40]; // [rsp+1A8h] [rbp-100h] BYREF
  void *v213; // [rsp+1D0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1D8h] [rbp-D0h]

  v7 = *a3;
  v177 = a4;
  v8 = *((_QWORD *)a3 + 1);
  v171 = a1;
  v9 = *(unsigned int **)(v8 + 16);
  v175 = a2;
  v170 = (unsigned int *)a3;
  v10 = *v9;
  v180 = a5;
  v181 = a6;
  v173 = v10;
  v176 = v9 + 4;
  if ( !a2 || a2 != *(_DWORD *)(a1 + 308) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(v171 + 96) + 104LL);
    v12 = *(unsigned int *)(v11 + 928);
    v13 = *(_QWORD *)(v11 + 912);
    if ( (_DWORD)v12 )
    {
      v14 = (v12 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
      v15 = (__int64 *)(v13 + 16LL * v14);
      v16 = *v15;
      if ( v8 == *v15 )
      {
LABEL_5:
        v172 = (__m128 *)&v213;
        sub_12EEE50((__m128 *)&v213, v15, (_QWORD *)(16 * v12 + v13), v11 + 912, 1);
        v17 = (__int64 *)v213;
        goto LABEL_6;
      }
      v106 = 1;
      if ( v16 != -4096 )
      {
        do
        {
          v107 = v106 + 1;
          v14 = (v12 - 1) & (v106 + v14);
          v15 = (__int64 *)(v13 + 16LL * v14);
          v108 = *v15;
          if ( v8 == *v15 )
            goto LABEL_5;
          v106 = v107;
        }
        while ( v108 != -4096 );
      }
    }
    v172 = (__m128 *)&v213;
    sub_12EEE50(
      (__m128 *)&v213,
      (_QWORD *)(v13 + 16LL * (unsigned int)v12),
      (_QWORD *)(v13 + 16LL * (unsigned int)v12),
      v11 + 912,
      1);
    v17 = (__int64 *)v213;
LABEL_6:
    v18 = (_QWORD *)(*(_QWORD *)(v11 + 912) + 16LL * *(unsigned int *)(v11 + 928));
    sub_12EEE50(v172, v18, v18, v11 + 912, 1);
    if ( v17 == v213 )
    {
      v100 = **(_QWORD **)(v171 + 16);
      if ( *(_QWORD *)(v100 + 496) == v173 && (!v173 || !memcmp(v176, *(const void **)(v100 + 488), v173)) )
      {
        v101 = sub_13C9950(*(_QWORD *)(*(_QWORD *)(v171 + 96) + 104LL), v176, v173, v175, 1, a6 ^ 1u);
      }
      else
      {
        result = sub_12F6F20(v171, v176, v173, v175, v7, a6);
        if ( (result & 6) != 0 )
          return result;
        v101 = result & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v101 )
        {
          v103 = v171;
          *(_BYTE *)(v171 + 322) = 1;
        }
      }
      v19 = (__int64 *)v101;
      v213 = *((void **)v170 + 1);
      *sub_12F0880(v11 + 912, (__int64 *)v172, v102, v103, v104, v105) = v101;
      if ( v19 )
      {
LABEL_10:
        v174 = v177;
        if ( (_DWORD)v177 == 1 )
        {
          v30 = (__int64)v19;
          LOBYTE(v184) = 0;
        }
        else
        {
          v26 = 1;
          LOBYTE(v184) = 0;
          p_ptr = (__int64 *)&ptr;
          v178 = &v202[8];
          while ( 1 )
          {
            v27 = (__int64)&v170[4 * v26];
            v28 = *(unsigned int **)(*(_QWORD *)(v27 + 8) + 16LL);
            v29 = *v28;
            s1 = v28 + 4;
            n = v29;
            v30 = sub_FF2620((__int64)v19, (__int64)(v28 + 4), v29);
            if ( !v30 )
            {
              v31 = j__strlen("Private");
              if ( n != v31 || n && memcmp(s1, "Private", n) )
                goto LABEL_107;
              if ( (__int64 *)sub_FEEE40((__int64)v19) != v19 )
                goto LABEL_107;
              v59 = (_BYTE *)*v19;
              v60 = v172;
              v61 = (_BYTE *)(*v19 + v19[1]);
              si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
              v213 = &v172[1].m128_u16[4];
              sub_A1FE50(v172, v59, v61);
              v62 = j__strlen("_Private");
              v63 = (unsigned __int64 *)v60;
              v64 = &v198;
              sub_A1FE50(v63, "_Private", &aPrivate_3[v62]);
              v199 = 0x200000000LL;
              v198 = v200;
              v65 = v19[1];
              v66 = *(_QWORD *)(v171 + 96);
              v67 = (const void *)*v19;
              v183 = (int *)v200;
              v182 = (__int64 *)(v66 + 552);
              v68 = *(_WORD *)sub_6F3470(v66 + 552, v67, v65);
              v69 = (__int64 *)sub_6F3470((__int64)v182, v213, si128.m128i_u64[0]);
              v70 = HIDWORD(v199);
              v71 = (__int64)v183;
              v72 = *v170;
              v73 = (unsigned int)v199;
              v74 = (unsigned int)v199 < (unsigned __int64)HIDWORD(v199);
              *(_WORD *)v69 = *(_WORD *)v69 & 0xFE00 | v68 & 0x1FF;
              if ( v74 )
              {
                v75 = (char *)v198 + 16 * v73;
                *(_DWORD *)v75 = v72;
                *((_QWORD *)v75 + 1) = v69;
                LODWORD(v199) = v199 + 1;
              }
              else
              {
                v129 = v72 | v189 & 0xFFFFFFFF00000000LL;
                v189 = v129;
                if ( v70 < v73 + 1 )
                {
                  v182 = v69;
                  sub_2237220(&v198, v71, v73 + 1, 16);
                  v73 = (unsigned int)v199;
                  v69 = v182;
                }
                v130 = (unsigned __int64 *)((char *)v198 + 16 * v73);
                *v130 = v129;
                v130[1] = (unsigned __int64)v69;
                LODWORD(v199) = v199 + 1;
              }
              v183 = (int *)v193;
              v193[0] = &v194;
              v193[1] = nullptr;
              v76 = *(_QWORD *)(v171 + 96);
              v194 = 0;
              if ( sub_13C9950(*(_QWORD *)(v76 + 104), v213, si128.m128i_i64[0], v175, 1, v181 ^ 1u)
                || (unsigned int)sub_12EC5E0(
                                   0,
                                   v213,
                                   si128.m128i_u64[0],
                                   (__int64)v183,
                                   v171 + 256,
                                   *(__int64 **)(*(_QWORD *)(v171 + 96) + 104LL)) )
              {
                v185 = (__int64 *)((*(__int64 (__fastcall **)(__int64, _QWORD, void *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v171 + 16LL))(
                                     v171,
                                     v175,
                                     v198,
                                     (unsigned int)v199,
                                     v180,
                                     v181)
                                 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v185 )
                {
                  v208 = v19;
                  v80 = *(_QWORD *)(v171 + 96);
                  v81 = *(unsigned int *)(v80 + 1336);
                  if ( (_DWORD)v81 )
                  {
                    v82 = *(__int64 **)(*(_QWORD *)(v80 + 1328) + 32 * v81 - 32);
                    if ( v82 != v19 )
                      sub_12F1A10((__int64)(v82 + 122), (__int64 *)&v208, v80, v77, v78, v79);
                  }
                  else
                  {
                    sub_12F1A10(v80 + 1736, (__int64 *)&v208, v80, v77, v78, v79);
                  }
                  v30 = (__int64)v185;
                  v83 = *(__int64 **)(v171 + 32);
                  v84 = v83[4];
                  v182 = v83;
                  v85 = sub_FD3830(v84, 0x34Du, v175, (unsigned __int64)v83, (__int64)v83, v79);
                  LOBYTE(v184) = 1;
                  if ( v85 != 1 )
                  {
                    v86 = &v208;
                    sub_FC70B0((__int64)&v208, (__int64)v182, *(_DWORD *)v27, 845);
                    sub_AE9DF0((unsigned __int8 **)&v208, *(_QWORD *)(v27 + 8), 5u);
                    v184 = v195;
                    sub_FEEE60((__int64)v195, v19, 0);
                    sub_AEC220((unsigned __int8 **)&v208, (_BYTE *)v195[0], (signed __int64)v195[1]);
                    sub_AEC220((unsigned __int8 **)&v208, v213, si128.m128i_i64[0]);
                    v87 = *(_DWORD *)v27;
                    v202[0] = 1;
                    ptr = (void *)__PAIR64__(v87, *v170);
                    sub_AEC610((__int64 *)&v208, p_ptr);
                    *(_QWORD *)&v202[4] = 0;
                    v203 = 0;
                    v88 = *v170;
                    v205 = 0;
                    v204 = p_ptr + 5;
                    LODWORD(ptr) = v88;
                    HIDWORD(ptr) = v88;
                    v196[0] = v197;
                    v186 = (__int64 *)v197;
                    v182 = (__int64 *)v196;
                    v206 = 0;
                    v207 = 0;
                    v202[0] = 1;
                    sub_12E9400(v196, v213, (__int64)v213 + si128.m128i_i64[0]);
                    sub_A0AAD0((__int64)(p_ptr + 3), v182);
                    if ( v196[0] != v186 )
                      operator delete(v196[0]);
                    if ( (_DWORD)ptr && HIDWORD(ptr) )
                    {
                      v89 = v208;
                      if ( !v208 )
                      {
                        v154 = *(_QWORD *)v209;
                        v155 = *(_DWORD *)(*(_QWORD *)v209 + 14976LL);
                        if ( v155 )
                        {
                          v159 = (unsigned int)(v155 - 1);
                          *(_DWORD *)(*(_QWORD *)v209 + 14976LL) = v159;
                          v89 = *(_QWORD **)(v154 + 8 * v159 + 14848);
                          v160 = *((unsigned int *)v89 + 134);
                          *(_BYTE *)v89 = 0;
                          v161 = v89[66];
                          *((_DWORD *)v89 + 106) = 0;
                          v162 = v161 + (v160 << 6);
                          if ( v161 != v162 )
                          {
                            v186 = v19;
                            v163 = v89;
                            v187 = &v208;
                            v164 = v26;
                            v165 = v30;
                            v166 = v162;
                            v188 = &v198;
                            v167 = v27;
                            v168 = v161;
                            do
                            {
                              while ( 1 )
                              {
                                v166 -= 64;
                                v169 = *(void **)(v166 + 24);
                                if ( v169 == (void *)(v166 + 40) )
                                  break;
                                operator delete(v169);
                                if ( v168 == v166 )
                                  goto LABEL_157;
                              }
                            }
                            while ( v168 != v166 );
LABEL_157:
                            v30 = v165;
                            v27 = v167;
                            v26 = v164;
                            v89 = v163;
                            v86 = v187;
                            v19 = v186;
                            v64 = v188;
                          }
                          *((_DWORD *)v89 + 134) = 0;
                        }
                        else
                        {
                          v89 = (_QWORD *)operator new(0x3A0u);
                          *(_BYTE *)v89 = 0;
                          v89[12] = v89 + 14;
                          v89[16] = v89 + 18;
                          v89[20] = v89 + 22;
                          v89[24] = v89 + 26;
                          v89[28] = v89 + 30;
                          v89[32] = v89 + 34;
                          v89[36] = v89 + 38;
                          v89[40] = v89 + 42;
                          v89[44] = v89 + 46;
                          v89[48] = v89 + 50;
                          v89[52] = v89 + 54;
                          *((_BYTE *)v89 + 112) = 0;
                          v89[13] = 0;
                          v89[17] = 0;
                          *((_BYTE *)v89 + 144) = 0;
                          v89[21] = 0;
                          *((_BYTE *)v89 + 176) = 0;
                          v89[25] = 0;
                          *((_BYTE *)v89 + 208) = 0;
                          v89[29] = 0;
                          *((_BYTE *)v89 + 240) = 0;
                          v89[33] = 0;
                          *((_BYTE *)v89 + 272) = 0;
                          v89[37] = 0;
                          *((_BYTE *)v89 + 304) = 0;
                          v89[41] = 0;
                          *((_BYTE *)v89 + 336) = 0;
                          v89[45] = 0;
                          *((_BYTE *)v89 + 368) = 0;
                          v89[49] = 0;
                          *((_BYTE *)v89 + 400) = 0;
                          v89[53] = 0x800000000LL;
                          v89[66] = v89 + 68;
                          v89[67] = 0x600000000LL;
                        }
                        v208 = v89;
                      }
                      v90 = *((unsigned int *)v89 + 134);
                      v91 = v89[66];
                      v92 = p_ptr;
                      v93 = v90 + 1;
                      v94 = v91 + (v90 << 6);
                      if ( v93 > *((unsigned int *)v89 + 135) )
                      {
                        if ( v91 > (unsigned __int64)p_ptr || v94 <= (unsigned __int64)p_ptr )
                        {
                          v188 = (void **)v89;
                          v187 = (void **)(v89 + 68);
                          v186 = v89 + 66;
                          v182 = (__int64 *)sub_2237400(v89 + 66, v89 + 68, v93, 64, v182);
                          sub_9EF810(v186, (__int64)v182);
                          v89 = v188;
                          v156 = v182;
                          v157 = (int)v196[0];
                          v158 = (__int64 *)v188[66];
                          if ( v158 == (__int64 *)v187 )
                          {
                            v188[66] = v182;
                          }
                          else
                          {
                            v187 = (void **)v196[0];
                            v186 = v182;
                            v182 = (__int64 *)v188;
                            free(v158);
                            v89 = v182;
                            v156 = v186;
                            v157 = (int)v187;
                            v182[66] = (__int64)v186;
                          }
                          *((_DWORD *)v89 + 135) = v157;
                          v92 = p_ptr;
                          v94 = (unsigned __int64)&v156[8 * (unsigned __int64)*((unsigned int *)v89 + 134)];
                        }
                        else
                        {
                          v186 = (__int64 *)((char *)p_ptr - v91);
                          v190 = v89;
                          v188 = (void **)(v89 + 68);
                          v187 = (void **)(v89 + 66);
                          v182 = (__int64 *)sub_2237400(v89 + 66, v89 + 68, v93, 64, v182);
                          sub_9EF810((__int64 *)v187, (__int64)v182);
                          v89 = v190;
                          v151 = v182;
                          v152 = (int)v196[0];
                          v153 = (void **)v190[66];
                          if ( v153 == v188 )
                          {
                            v190[66] = v182;
                          }
                          else
                          {
                            v188 = (void **)v196[0];
                            v187 = (void **)v182;
                            v182 = v190;
                            free(v153);
                            v89 = v182;
                            v151 = (__int64 *)v187;
                            v152 = (int)v188;
                            v182[66] = (__int64)v187;
                          }
                          *((_DWORD *)v89 + 135) = v152;
                          v92 = (__int64 *)((char *)v186 + (_QWORD)v151);
                          v94 = (unsigned __int64)&v151[8 * (unsigned __int64)*((unsigned int *)v89 + 134)];
                        }
                      }
                      v95 = *v92;
                      v186 = (__int64 *)v94;
                      v187 = (void **)v89;
                      *(_QWORD *)v94 = v95;
                      LODWORD(v95) = *((_DWORD *)v92 + 2);
                      v182 = v92;
                      *(_DWORD *)(v94 + 8) = v95;
                      *(_QWORD *)(v94 + 12) = *(__int64 *)((char *)v92 + 12);
                      *(_DWORD *)(v94 + 20) = *((_DWORD *)v92 + 5);
                      *(_QWORD *)(v94 + 24) = v94 + 40;
                      sub_12E94C0((_QWORD *)(v94 + 24), (_BYTE *)v92[3], v92[3] + v92[4]);
                      v96 = (__int64 *)v187;
                      *((_BYTE *)v186 + 56) = *((_BYTE *)v182 + 56);
                      ++*((_DWORD *)v96 + 134);
                    }
                    if ( v204 != p_ptr + 5 )
                      operator delete(v204);
                    if ( v195[0] != v184 + 2 )
                      operator delete(v195[0]);
                    sub_AEA040((__int64)v86);
                    sub_FC70B0((__int64)v86, *(_QWORD *)(v171 + 32), *((_DWORD *)v185 + 8), 798);
                    sub_AEA040((__int64)v86);
                    LOBYTE(v184) = 1;
                  }
                }
              }
              else
              {
                v30 = 0;
              }
              if ( v193[0] != v183 + 4 )
                operator delete(v193[0]);
              if ( v198 != v64 + 2 )
                free(v198);
              if ( v213 != &v172[1].m128_u16[4] )
                free(v213);
              if ( !v30 )
              {
LABEL_107:
                ptr = v178;
                v32 = (__int64 ***)v19[32];
                *(_QWORD *)v202 = 0x200000000LL;
                v33 = v19[33];
                if ( (__int64 ***)v33 == v32 )
                  goto LABEL_30;
                v183 = (int *)v27;
                v34 = -1;
                v35 = (__int64 ***)v33;
                LODWORD(v182) = v26;
                v36 = v32;
                do
                {
                  v42 = *v36;
                  v43 = sub_2246430(&s1, **v36, (*v36)[1], 1, v34);
                  if ( v43 <= v34 )
                  {
                    if ( v43 >= v34 )
                    {
                      v37 = *(unsigned int *)v202;
                      v38 = *(unsigned int *)v202 + 1LL;
                    }
                    else
                    {
                      v34 = v43;
                      v38 = 1;
                      v37 = 0;
                      *(_DWORD *)v202 = 0;
                    }
                    v39 = v42[1];
                    v40 = *v42;
                    if ( v38 > *(unsigned int *)&v202[4] )
                    {
                      v186 = *v42;
                      v185 = v39;
                      sub_2237220(p_ptr, v178, v38, 16);
                      v40 = v186;
                      v39 = v185;
                      v37 = *(unsigned int *)v202;
                    }
                    v41 = (__int64 **)((char *)ptr + 16 * v37);
                    *v41 = v40;
                    v41[1] = v39;
                    ++*(_DWORD *)v202;
                  }
                  ++v36;
                }
                while ( v35 != v36 );
                v26 = (unsigned int)v182;
                v27 = (__int64)v183;
                if ( *(_DWORD *)v202 != 1 )
                {
                  if ( ptr != p_ptr + 2 )
                    free(ptr);
LABEL_30:
                  v44 = v26 - 1;
                  v45 = &v208;
                  goto LABEL_31;
                }
                v111 = (unsigned __int8 **)v172;
                v112 = &v208;
                v113 = &v198;
                sub_FC70B0((__int64)v172, *(_QWORD *)(v171 + 32), *v183, 762);
                sub_AE9DF0(v111, *(_QWORD *)(v27 + 8), 5u);
                v182 = (__int64 *)v196;
                sub_FEEE60((__int64)v196, v19, 0);
                sub_AEC220(v111, (_BYTE *)v196[0], (signed __int64)v196[1]);
                sub_AEC220(v111, *(_BYTE **)ptr, *((_QWORD *)ptr + 1));
                v209[0] = 1;
                LODWORD(v183) = v26 - 1;
                v114 = v170[4 * v26 - 4];
                LODWORD(v208) = *v170;
                HIDWORD(v208) = v114;
                sub_AEC610((__int64 *)v111, (__int64 *)&v208);
                v115 = *(_DWORD *)v27;
                v116 = *(_BYTE **)ptr;
                v117 = *((_QWORD *)ptr + 1);
                v211[0] = v212;
                LODWORD(v208) = v115;
                HIDWORD(v208) = v115;
                *(_QWORD *)&v209[4] = 0;
                v210 = 0;
                v211[1] = nullptr;
                v212[0] = 0;
                v212[16] = 0;
                v209[0] = 1;
                v198 = v200;
                sub_12E9400(&v198, v116, (__int64)&v116[v117]);
                sub_A0AAD0((__int64)v211, &v198);
                if ( v198 != v200 )
                  operator delete(v198);
                if ( (_DWORD)v208 && HIDWORD(v208) )
                {
                  v118 = (__int64 *)v213;
                  if ( v213 )
                  {
                    v119 = *((unsigned int *)v213 + 134);
                    v120 = *((__int64 **)v213 + 66);
                    v121 = *((unsigned int *)v213 + 135);
                    v122 = v119 + 1;
                    v123 = (unsigned __int64)&v120[8 * v119];
                  }
                  else
                  {
                    v127 = si128.m128i_i64[0];
                    v128 = *(_DWORD *)(si128.m128i_i64[0] + 14976);
                    if ( v128 )
                    {
                      v137 = (unsigned int)(v128 - 1);
                      *(_DWORD *)(si128.m128i_i64[0] + 14976) = v137;
                      v118 = *(__int64 **)(v127 + 8 * v137 + 14848);
                      v138 = *((unsigned int *)v118 + 134);
                      *(_BYTE *)v118 = 0;
                      v139 = v118[66];
                      *((_DWORD *)v118 + 106) = 0;
                      v140 = v139 + (v138 << 6);
                      if ( v139 != v140 )
                      {
                        v185 = (__int64 *)&v208;
                        v141 = v27;
                        v142 = v139;
                        v143 = v140;
                        v186 = (__int64 *)&v198;
                        v144 = v118;
                        do
                        {
                          while ( 1 )
                          {
                            v143 -= 64;
                            v145 = *(void **)(v143 + 24);
                            if ( v145 == (void *)(v143 + 40) )
                              break;
                            operator delete(v145);
                            if ( v142 == v143 )
                              goto LABEL_132;
                          }
                        }
                        while ( v142 != v143 );
LABEL_132:
                        v118 = v144;
                        v27 = v141;
                        v113 = (void **)v186;
                        v112 = (void **)v185;
                        v139 = v118[66];
                      }
                      *((_DWORD *)v118 + 134) = 0;
                      v121 = *((unsigned int *)v118 + 135);
                      v120 = (__int64 *)v139;
                    }
                    else
                    {
                      v121 = 6;
                      v118 = (__int64 *)operator new(0x3A0u);
                      *(_BYTE *)v118 = 0;
                      v118[12] = (__int64)(v118 + 14);
                      v120 = v118 + 68;
                      v118[16] = (__int64)(v118 + 18);
                      v118[20] = (__int64)(v118 + 22);
                      v118[24] = (__int64)(v118 + 26);
                      v118[28] = (__int64)(v118 + 30);
                      v118[32] = (__int64)(v118 + 34);
                      v118[36] = (__int64)(v118 + 38);
                      v118[40] = (__int64)(v118 + 42);
                      v118[44] = (__int64)(v118 + 46);
                      v118[48] = (__int64)(v118 + 50);
                      v118[52] = (__int64)(v118 + 54);
                      v118[13] = 0;
                      *((_BYTE *)v118 + 112) = 0;
                      v118[17] = 0;
                      *((_BYTE *)v118 + 144) = 0;
                      v118[21] = 0;
                      *((_BYTE *)v118 + 176) = 0;
                      v118[25] = 0;
                      *((_BYTE *)v118 + 208) = 0;
                      v118[29] = 0;
                      *((_BYTE *)v118 + 240) = 0;
                      v118[33] = 0;
                      *((_BYTE *)v118 + 272) = 0;
                      v118[37] = 0;
                      *((_BYTE *)v118 + 304) = 0;
                      v118[41] = 0;
                      *((_BYTE *)v118 + 336) = 0;
                      v118[45] = 0;
                      *((_BYTE *)v118 + 368) = 0;
                      v118[49] = 0;
                      *((_BYTE *)v118 + 400) = 0;
                      v118[53] = 0x800000000LL;
                      v118[66] = (__int64)(v118 + 68);
                      v118[67] = 0x600000000LL;
                    }
                    v213 = v118;
                    v123 = (unsigned __int64)v120;
                    v122 = 1;
                  }
                  v124 = v112;
                  if ( v122 > v121 )
                  {
                    v131 = v118 + 66;
                    if ( v120 > (__int64 *)v112 || v123 <= (unsigned __int64)v112 )
                    {
                      v186 = v118;
                      v185 = v118 + 68;
                      v146 = sub_2237400(v118 + 66, v118 + 68, v122, 64, v113);
                      sub_9EF810(v131, v146);
                      v118 = v186;
                      v147 = (int)v198;
                      v148 = (__int64 *)v186[66];
                      if ( v148 == v185 )
                      {
                        v150 = *((unsigned int *)v186 + 134);
                        *((_DWORD *)v186 + 135) = (_DWORD)v198;
                        v124 = v112;
                        v118[66] = v146;
                        v123 = v146 + (v150 << 6);
                      }
                      else
                      {
                        v185 = v186;
                        free(v148);
                        v118 = v185;
                        v149 = *((unsigned int *)v185 + 134);
                        *((_DWORD *)v185 + 135) = v147;
                        v124 = v112;
                        v118[66] = v146;
                        v123 = v146 + (v149 << 6);
                      }
                    }
                    else
                    {
                      v186 = v118 + 68;
                      v187 = (void **)v118;
                      v185 = (__int64 *)((char *)v112 - (char *)v120);
                      v132 = sub_2237400(v118 + 66, v118 + 68, v122, 64, v113);
                      sub_9EF810(v131, v132);
                      v118 = (__int64 *)v187;
                      v133 = (int)v198;
                      v134 = (__int64 *)v187[66];
                      if ( v134 != v186 )
                      {
                        v186 = (__int64 *)v187;
                        free(v134);
                        v118 = v186;
                      }
                      v135 = *((unsigned int *)v118 + 134);
                      *((_DWORD *)v118 + 135) = v133;
                      v136 = v185;
                      v118[66] = v132;
                      v124 = (void **)((char *)v136 + v132);
                      v123 = v132 + (v135 << 6);
                    }
                  }
                  v125 = *v124;
                  v186 = v118;
                  v185 = (__int64 *)v123;
                  *(_QWORD *)v123 = v125;
                  *(_DWORD *)(v123 + 8) = *((_DWORD *)v124 + 2);
                  *(_QWORD *)(v123 + 12) = *(void **)((char *)v124 + 12);
                  *(_DWORD *)(v123 + 20) = *((_DWORD *)v124 + 5);
                  *(_QWORD *)(v123 + 24) = v123 + 40;
                  sub_12E94C0((_QWORD *)(v123 + 24), v124[3], (__int64)v124[4] + (_QWORD)v124[3]);
                  v126 = v186;
                  *((_BYTE *)v185 + 56) = *((_BYTE *)v124 + 56);
                  ++*((_DWORD *)v126 + 134);
                }
                if ( v211[0] != v112 + 5 )
                  operator delete(v211[0]);
                if ( v196[0] != v182 + 2 )
                  operator delete(v196[0]);
                sub_AEA040((__int64)v172);
                v30 = sub_FF2620((__int64)v19, *(_QWORD *)ptr, *((_QWORD *)ptr + 1));
                if ( ptr != v178 )
                  free(ptr);
                if ( !v30 )
                  break;
              }
            }
            ++v26;
            v19 = (__int64 *)v30;
            if ( v174 == v26 )
              goto LABEL_34;
          }
          v45 = v112;
          v44 = (unsigned int)v183;
LABEL_31:
          v46 = (unsigned __int8 **)v172;
          sub_FC70B0((__int64)v172, *(_QWORD *)(v171 + 32), *(_DWORD *)v27, 761);
          sub_AE9DF0(v46, *(_QWORD *)(v27 + 8), 5u);
          sub_FEEE60((__int64)v45, v19, 0);
          sub_AEC220(v46, v208, *(signed __int64 *)v209);
          v202[0] = 1;
          v47 = *v170;
          HIDWORD(ptr) = v170[4 * v44];
          LODWORD(ptr) = v47;
          sub_AEC610((__int64 *)v46, p_ptr);
          if ( v208 != v45 + 2 )
            operator delete(v208);
          v30 = (__int64)v19;
          sub_AEA040((__int64)v172);
        }
LABEL_34:
        v48 = *(__int64 **)(v171 + 16);
        v49 = *v48;
        if ( v173 != *(_QWORD *)(*v48 + 496) || v173 && memcmp(v176, *(const void **)(v49 + 488), v173) )
        {
          if ( (*(_BYTE *)(v30 + 904) & 8) == 0 && !(_BYTE)v184 )
          {
            v109 = (unsigned __int8 **)v172;
            sub_FC70B0((__int64)v172, *(_QWORD *)(v171 + 32), v175, 841);
            sub_FEEE60((__int64)&v208, (__int64 *)v30, 0);
            sub_AEC220(v109, v208, *(signed __int64 *)v209);
            v202[0] = 1;
            v110 = v170[4 * v177 - 4];
            LODWORD(ptr) = *v170;
            HIDWORD(ptr) = v110;
            sub_AEC610((__int64 *)v109, (__int64 *)&ptr);
            if ( v208 != &v209[8] )
              operator delete(v208);
            sub_AEA040((__int64)v172);
            return v30 & 0xFFFFFFFFFFFFFFF9LL | 2;
          }
          v50 = v171;
          if ( (unsigned __int8)sub_141AE90(v49, *(_QWORD *)(v171 + 40), v30, *(_QWORD *)(v171 + 32)) )
          {
            v51 = v50;
            v52 = *(_QWORD *)(v50 + 32);
            v53 = v175;
            v54 = (__int64 *)v172;
            sub_FC70B0((__int64)v172, v52, v175, 797);
            v209[0] = 1;
            v55 = v170[4 * v177 - 4];
            LODWORD(v208) = *v170;
            HIDWORD(v208) = v55;
            sub_AEC610(v54, (__int64 *)&v208);
            sub_AEA040((__int64)v54);
            *(_DWORD *)(v51 + 308) = v53;
            *(_QWORD *)(v51 + 312) = 0;
            return 0;
          }
          sub_1EC5FF0(*(_QWORD *)(v171 + 168), v30, v180, v175);
        }
        v97 = v171;
        v98 = *(_QWORD *)(*(_QWORD *)(v171 + 96) + 104LL);
        v99 = sub_FEEE40(v30);
        sub_13F92D0(v98 + 632, v99);
        *(_DWORD *)(v97 + 308) = v175;
        *(_QWORD *)(v97 + 312) = v30 & 0xFFFFFFFFFFFFFFF9LL;
        return v30 & 0xFFFFFFFFFFFFFFF9LL;
      }
    }
    else
    {
      v19 = (__int64 *)v17[1];
      if ( v19 )
      {
        v20 = *(_QWORD *)(v171 + 96);
        v21 = sub_FEEE40(v17[1]);
        v22 = *(_QWORD *)(v21 + 1712);
        for ( i = *(_QWORD *)(v21 + 1704); v22 != i; i += 32 )
        {
          v24 = *(_BYTE **)i;
          v25 = *(_QWORD *)(i + 8);
          sub_12F1580(v20, v24, v25, v19, v175);
        }
        goto LABEL_10;
      }
    }
    return 0;
  }
  v57 = *(_QWORD *)(a1 + 312);
  if ( (v57 & 6) == 0 && (v57 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v58 = **(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v58 + 496) != v10 || v10 && memcmp(v176, *(const void **)(v58 + 488), v10) )
      sub_1EC5FF0(*(_QWORD *)(v171 + 168), v57 & 0xFFFFFFFFFFFFFFF8LL, v180, v175);
  }
  return *(_QWORD *)(v171 + 312);
}
