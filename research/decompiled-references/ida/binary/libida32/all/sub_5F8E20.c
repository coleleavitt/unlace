__int64 __fastcall sub_5F8E20(__int64 *a1, unsigned int *a2, __int64 *a3, int a4)
{
  __int64 v6; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  bool v12; // sf
  int v13; // eax
  int v14; // edx
  __m128i *v15; // rbp
  int v16; // ecx
  int v17; // eax
  signed __int32 v18; // r13d
  unsigned __int32 j; // r15d
  int v20; // ebx
  int v21; // r14d
  bool v22; // cc
  unsigned int v23; // r15d
  __m128i v24; // kr00_16
  __int64 v25; // rbx
  __int32 v26; // r14d
  __int64 v27; // rsi
  int v28; // r14d
  bool v29; // al
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // rax
  char *v35; // rcx
  __int64 v36; // r8
  const char *v37; // r15
  __int64 v38; // rax
  unsigned __int32 v39; // r13d
  __int64 v40; // rax
  int v41; // edx
  unsigned __int8 v42; // al
  unsigned int v43; // r10d
  unsigned __int32 v44; // r13d
  __int64 v45; // r14
  _QWORD *v46; // r12
  void *v47; // rdi
  void *v48; // rdi
  __int64 v49; // r12
  unsigned int v50; // eax
  unsigned int v51; // ebp
  int v52; // r13d
  unsigned int v53; // r14d
  __int64 v55; // rax
  char v56; // al
  int v57; // eax
  int v58; // edx
  int v59; // eax
  char *v60; // rdi
  __int64 v61; // r12
  __int64 v62; // rbp
  char *v63; // rbx
  void *v64; // rdi
  void *v65; // rdi
  char *v66; // rdi
  __int64 v67; // rbp
  __int64 v68; // r12
  char *v69; // rbx
  void *v70; // rdi
  void *v71; // rdi
  char *v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rbp
  __int64 v75; // r12
  const char *v76; // rdi
  int v77; // eax
  int v78; // r15d
  signed int v79; // r13d
  _OWORD *v80; // rbx
  unsigned __int64 v81; // r14
  __int64 v82; // rcx
  int v83; // r12d
  unsigned int v84; // eax
  char v85; // al
  int v86; // eax
  int v87; // eax
  void *v88; // rdi
  __int64 v89; // rsi
  int tinfo_udt_member; // eax
  __m128i v91; // xmm0
  int v92; // eax
  __int64 v93; // rcx
  size_t v94; // r15
  const void *v95; // rbx
  void *v96; // rax
  __int64 v97; // rdx
  unsigned int *v98; // rax
  int v99; // eax
  __int64 v100; // rdi
  unsigned int v101; // ebp
  int v102; // eax
  unsigned __int64 v103; // rax
  __int64 v104; // rdx
  int v105; // eax
  char *v106; // rdi
  __int64 v107; // r12
  __int64 v108; // rbx
  char *v109; // rbp
  void *v110; // rdi
  void *v111; // rdi
  unsigned int v112; // eax
  __int32 v113; // ebp
  char v114; // al
  __int64 v115; // rcx
  int v116; // r14d
  char v117; // al
  int v118; // edx
  int v119; // r9d
  int v120; // r8d
  unsigned int v121; // eax
  __m128i si128; // xmm5
  __m128i v123; // xmm4
  __m128i v124; // xmm6
  __m128i v125; // xmm3
  __m128i v126; // xmm2
  __m128i v127; // xmm1
  __m128i v128; // xmm6
  __m128i v129; // xmm0
  __m128i v130; // xmm6
  __m128i v131; // xmm6
  __m128i v132; // xmm6
  __int64 i; // rcx
  char v134; // al
  int v135; // eax
  _QWORD *v136; // rsi
  __int64 v137; // rdx
  unsigned int v138; // eax
  unsigned __int64 v139; // rbx
  const __m128i *v140; // rax
  __m128i v141; // xmm0
  int v142; // esi
  int v143; // ecx
  _OWORD *v144; // rdx
  __int64 v145; // rax
  __int64 v146; // r9
  int v147; // r8d
  __int64 v148; // rdi
  unsigned __int8 v149; // al
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rdi
  __int64 v153; // rdx
  _DWORD *v154; // rax
  __int64 v155; // rsi
  __int64 v156; // rdi
  __int64 v157; // r8
  unsigned int k; // r10d
  unsigned __int64 v159; // rdx
  unsigned __int64 v160; // r15
  __int64 v161; // rax
  __int64 v162; // r13
  _DWORD *v163; // rbp
  unsigned __int64 v164; // rdx
  int v165; // eax
  const void *v166; // rsi
  void *v167; // rax
  int tinfo_property; // eax
  void *v169; // rax
  unsigned int v170; // r10d
  __int64 v172; // [rsp+8h] [rbp-1B50h]
  __int64 v173; // [rsp+8h] [rbp-1B50h]
  int n; // [rsp+10h] [rbp-1B48h]
  unsigned int na; // [rsp+10h] [rbp-1B48h]
  unsigned int nc; // [rsp+10h] [rbp-1B48h]
  unsigned int ne; // [rsp+10h] [rbp-1B48h]
  unsigned int nb; // [rsp+10h] [rbp-1B48h]
  size_t nf; // [rsp+10h] [rbp-1B48h]
  size_t nd; // [rsp+10h] [rbp-1B48h]
  unsigned int v181; // [rsp+18h] [rbp-1B40h]
  unsigned int v182; // [rsp+18h] [rbp-1B40h]
  unsigned int v183; // [rsp+18h] [rbp-1B40h]
  int v184; // [rsp+1Ch] [rbp-1B3Ch]
  int v185; // [rsp+1Ch] [rbp-1B3Ch]
  char *v186; // [rsp+20h] [rbp-1B38h]
  char *v187; // [rsp+20h] [rbp-1B38h]
  __m128i *v188; // [rsp+20h] [rbp-1B38h]
  __int64 v189; // [rsp+20h] [rbp-1B38h]
  __int64 v190; // [rsp+20h] [rbp-1B38h]
  __int64 v191; // [rsp+20h] [rbp-1B38h]
  int v192; // [rsp+20h] [rbp-1B38h]
  __int64 v193; // [rsp+20h] [rbp-1B38h]
  __int64 v194; // [rsp+20h] [rbp-1B38h]
  int v195; // [rsp+28h] [rbp-1B30h]
  int v196; // [rsp+28h] [rbp-1B30h]
  int v197; // [rsp+28h] [rbp-1B30h]
  signed int tinfo_size; // [rsp+30h] [rbp-1B28h]
  int v199; // [rsp+34h] [rbp-1B24h]
  int v200; // [rsp+34h] [rbp-1B24h]
  int v201; // [rsp+34h] [rbp-1B24h]
  _OWORD *v202; // [rsp+38h] [rbp-1B20h]
  int v204; // [rsp+50h] [rbp-1B08h]
  int v205; // [rsp+50h] [rbp-1B08h]
  __int64 v206; // [rsp+58h] [rbp-1B00h]
  int v207; // [rsp+58h] [rbp-1B00h]
  __int64 v208; // [rsp+60h] [rbp-1AF8h]
  __int64 v209; // [rsp+60h] [rbp-1AF8h]
  __int64 v210; // [rsp+60h] [rbp-1AF8h]
  char *v211; // [rsp+60h] [rbp-1AF8h]
  __int64 v213; // [rsp+80h] [rbp-1AD8h]
  char v214; // [rsp+92h] [rbp-1AC6h]
  char v215; // [rsp+93h] [rbp-1AC5h]
  int v216; // [rsp+94h] [rbp-1AC4h]
  unsigned __int64 v217; // [rsp+98h] [rbp-1AC0h]
  int v218; // [rsp+A0h] [rbp-1AB8h]
  bool v219; // [rsp+A7h] [rbp-1AB1h]
  unsigned __int64 v220; // [rsp+A8h] [rbp-1AB0h]
  int v221; // [rsp+B0h] [rbp-1AA8h]
  int v222; // [rsp+B4h] [rbp-1AA4h]
  __int64 v223; // [rsp+B8h] [rbp-1AA0h]
  unsigned __int8 v224; // [rsp+CBh] [rbp-1A8Dh] BYREF
  int v225; // [rsp+CCh] [rbp-1A8Ch] BYREF
  __int64 v226; // [rsp+D0h] [rbp-1A88h] BYREF
  __int64 v227; // [rsp+D8h] [rbp-1A80h] BYREF
  __int64 v228; // [rsp+E0h] [rbp-1A78h] BYREF
  __int64 v229; // [rsp+E8h] [rbp-1A70h] BYREF
  __int64 v230; // [rsp+F0h] [rbp-1A68h] BYREF
  __int64 v231; // [rsp+F8h] [rbp-1A60h]
  int v232; // [rsp+100h] [rbp-1A58h]
  void *v233; // [rsp+110h] [rbp-1A48h] BYREF
  __int128 v234; // [rsp+118h] [rbp-1A40h]
  __int128 v235; // [rsp+128h] [rbp-1A30h]
  __int64 v236; // [rsp+138h] [rbp-1A20h]
  int v237; // [rsp+140h] [rbp-1A18h]
  __m128i src[2]; // [rsp+150h] [rbp-1A08h] BYREF
  __m128i v239; // [rsp+170h] [rbp-19E8h] BYREF
  __m128i v240; // [rsp+180h] [rbp-19D8h] BYREF
  __m256i v241; // [rsp+190h] [rbp-19C8h] BYREF
  int v242[2]; // [rsp+1B0h] [rbp-19A8h] BYREF
  void *v243; // [rsp+1B8h] [rbp-19A0h] BYREF
  void *v244[6]; // [rsp+1C0h] [rbp-1998h] BYREF
  _OWORD v245[2]; // [rsp+1F0h] [rbp-1968h] BYREF
  __int64 v246; // [rsp+210h] [rbp-1948h]
  int v247; // [rsp+218h] [rbp-1940h]
  __int64 v248; // [rsp+220h] [rbp-1938h]
  char v249; // [rsp+228h] [rbp-1930h]
  __m128i v250[3]; // [rsp+230h] [rbp-1928h] BYREF
  __m128i v251; // [rsp+260h] [rbp-18F8h] BYREF
  __m256i v252; // [rsp+270h] [rbp-18E8h] BYREF
  __int64 v253; // [rsp+290h] [rbp-18C8h]
  int v254; // [rsp+298h] [rbp-18C0h]
  __int64 v255; // [rsp+2A0h] [rbp-18B8h]
  char v256; // [rsp+2A8h] [rbp-18B0h]
  _OWORD v257[384]; // [rsp+2B0h] [rbp-18A8h] BYREF
  _OWORD v258[6]; // [rsp+1AB0h] [rbp-A8h] BYREF
  unsigned __int64 v259; // [rsp+1B18h] [rbp-40h]

  v6 = *a2;
  v259 = __readfsqword(0x28u);
  v215 = is_spec_ea(v6);
  if ( v215 )
    return 0;
  v213 = *((_QWORD *)a2 + 1) & 0x80LL;
  if ( (*((_QWORD *)a2 + 1) & 0x80) != 0 )
  {
    v49 = *a1;
    v50 = calc_thunk_func_target(a2, src);
    v51 = v50;
    if ( v50 != -1 )
    {
      if ( (unsigned __int8)get_tinfo(a3, v50) )
      {
        v52 = 2;
      }
      else
      {
        v52 = sub_5F5920(v49, v51, nullptr, a3, a4);
        if ( !v52 )
          goto LABEL_86;
      }
      if ( (get_tinfo_property(*a3, 2) & 0xF) == 0xC )
      {
LABEL_87:
        v53 = src[0].m128i_i32[0];
        *(_QWORD *)v242 = 0;
        if ( src[0].m128i_i32[0] == -1 )
        {
          v77 = 0;
          if ( v52 >= 0 )
            v77 = v52;
          v199 = v77;
          goto LABEL_92;
        }
        if ( (unsigned __int8)get_tinfo(v242, src[0].m128i_u32[0]) )
        {
          if ( v52 <= 2 )
          {
            v199 = 2;
LABEL_97:
            if ( (get_tinfo_property(*(_QWORD *)v242, 2) & 0xF) == 0xA )
            {
              v250[0].m128i_i64[0] = 0;
              v250[0].m128i_i64[0] = get_tinfo_property(*(_QWORD *)v242, 9);
              copy_tinfo_t(v242);
              clear_tinfo_t(v250);
            }
            if ( (get_tinfo_property(*(_QWORD *)v242, 2) & 0xF) == 0xC )
            {
              v55 = *a3;
              *a3 = *(_QWORD *)v242;
              *(_QWORD *)v242 = v55;
              goto LABEL_92;
            }
LABEL_91:
            v199 = 0;
LABEL_92:
            clear_tinfo_t(v242);
            return (unsigned int)v199;
          }
        }
        else
        {
          v199 = sub_5F5920(v49, v53, nullptr, (__int64 *)v242, a4);
          if ( v52 <= v199 )
          {
            if ( !v199 )
              goto LABEL_91;
            goto LABEL_97;
          }
        }
        v199 = v52;
        goto LABEL_92;
      }
    }
LABEL_86:
    v52 = 0;
    goto LABEL_87;
  }
  v184 = *(_DWORD *)(a1[2] + 8) & 0x8000;
  n = sub_54C1C0(a1);
  v8 = getinf(99);
  v9 = v8;
  if ( v8 > 0x10 )
  {
    v219 = v8 == 176 || v8 == 256;
    goto LABEL_5;
  }
  v181 = getinf(99);
  v9 = v181;
  v219 = v181 == 176 || v181 == 256;
  if ( v181 > 0x10 )
  {
LABEL_5:
    if ( v9 != 176 )
    {
      v230 = 24;
      v231 = 0;
      v232 = 0;
      get_stkarg_area_info(&v230, v9);
      v181 = v9;
      goto LABEL_7;
    }
    goto LABEL_104;
  }
  if ( (unsigned int)getinf(99) != 176 )
  {
    v230 = 24;
    v231 = 0;
    v232 = 0;
    get_stkarg_area_info(&v230, v181);
    goto LABEL_161;
  }
LABEL_104:
  if ( (unsigned __int64)getinf(88) > 0x397 )
  {
LABEL_105:
    v215 = 1;
    goto LABEL_106;
  }
  if ( (unsigned __int8)getinf_flag(3, 4) )
  {
    netnode_check(v250, "$ golang", 0, 0);
    v100 = v250[0].m128i_u32[0];
    v101 = netnode_altval(v250[0].m128i_u32[0], 0, 65);
    if ( v101 > 0x74 )
    {
      v102 = *(_DWORD *)(get_ph(v100, nullptr) + 4);
      if ( !v102 )
        goto LABEL_105;
      v103 = (unsigned int)(v102 - 13);
      if ( (unsigned int)v103 <= 0x3B )
      {
        v104 = 0x800000000000005LL;
        if ( _bittest64(&v104, v103) )
          v215 = v101 != 117;
      }
    }
  }
LABEL_106:
  v230 = 24;
  v231 = 0;
  v232 = 0;
  get_stkarg_area_info(&v230, v9);
  v181 = 176;
  v214 = 1;
  if ( v9 <= 0x10 )
  {
    v181 = v9;
LABEL_161:
    v9 = getinf(99);
LABEL_7:
    v214 = v9 == 256 || v9 == 176;
    if ( !v214 )
      v214 = getinf_flag(67, 2);
  }
  v226 = 0;
  v233 = nullptr;
  v236 = 0;
  v237 = 1;
  v234 = 0;
  v235 = 0;
  if ( !(unsigned __int8)tinfo_get_func_frame(&v226, a2) || !(unsigned __int8)get_tinfo_details(v226, 13, &v233) )
  {
    v220 = 0;
    v218 = 0;
    v217 = -1;
    v204 = 0;
    goto LABEL_11;
  }
  v217 = v234;
  if ( v214 )
    v78 = n;
  else
    v78 = (unsigned __int8)sub_614FB0(*a1, 59);
  v227 = 0;
  get_frame_part(&v227, a2, 0);
  if ( v184 )
  {
    v218 = v227;
    tinfo_size = HIDWORD(v227) + v231;
  }
  else
  {
    v218 = v231 + v227;
    v112 = a2[7];
    tinfo_size = v112 + v231 + v227;
    if ( !v112 )
      tinfo_size = get_tinfo_size(0, v226, 0);
  }
  v79 = HIDWORD(v231) + v218;
  if ( HIDWORD(v231) + v218 < 0 )
    goto LABEL_206;
  v228 = 0;
  get_frame_part(&v228, a2, 1);
  if ( v184 )
  {
    if ( (unsigned int)v228 < v79 )
      goto LABEL_206;
  }
  else if ( (unsigned int)v79 < HIDWORD(v228) )
  {
    goto LABEL_206;
  }
  v220 = 0;
  if ( v219 )
  {
    v217 = v234;
    if ( (_QWORD)v234 )
    {
      v139 = v234;
      while ( 1 )
      {
        v140 = (const __m128i *)((char *)v233 + 128 * v217 - 128);
        if ( v140->m128i_i64[0] < (unsigned __int64)(8LL * v79) )
          break;
        memset(v250, 0, 24);
        v141 = _mm_loadu_si128(v140);
        build_stkvar_xrefs(
          v250,
          a2,
          (unsigned __int64)v141.m128i_i64[0] >> 3,
          _mm_add_epi64(_mm_srli_si128(v141, 8), v141).m128i_u64[0] >> 3);
        if ( !v250[0].m128i_i64[1] )
          goto LABEL_298;
        if ( *(_BYTE *)(v250[0].m128i_i64[0] + 8 * v250[0].m128i_i64[1] - 3) != 2 )
        {
          if ( !v215 || *(_BYTE *)(v250[0].m128i_i64[0] + 5) != 2 )
          {
LABEL_298:
            if ( v250[0].m128i_i64[0] )
            {
              v250[0].m128i_i64[1] = 0;
              qfree((void *)v250[0].m128i_i64[0]);
            }
            break;
          }
          v139 = v217 - 1;
        }
        if ( v250[0].m128i_i64[0] )
        {
          v250[0].m128i_i64[1] = 0;
          qfree((void *)v250[0].m128i_i64[0]);
        }
        if ( v217 == 1 )
        {
          v217 = 0;
          break;
        }
        --v217;
      }
    }
    else
    {
      v139 = 0;
    }
    v220 = v139 - v217;
  }
  v80 = v257;
  v207 = -n;
  v205 = -n;
  while ( 1 )
  {
    if ( tinfo_size <= v79 )
      goto LABEL_307;
    v89 = v226;
    v243 = nullptr;
    v246 = 1;
    memset(v244, 0, sizeof(v244));
    v247 = -1;
    v248 = 0;
    v249 = 0;
    *(_QWORD *)v242 = 8LL * v79;
    v245[0] = 0;
    tinfo_udt_member = find_tinfo_udt_member((int)v242);
    if ( tinfo_udt_member != -1 )
      break;
    if ( !v184 )
    {
      if ( !(_QWORD)v234
        || (v91 = _mm_loadu_si128((const __m128i *)v233 + 8 * (_QWORD)v234 - 8),
            v79 >= _mm_add_epi64(v91, _mm_srli_si128(v91, 8)).m128i_u64[0] >> 3) )
      {
        v116 = v78;
        goto LABEL_264;
      }
    }
    v250[0].m128i_i64[0] = 8LL * v79;
    v89 = v226;
    memset(&v250[0].m128i_u64[1], 0, 40);
    v253 = 1;
    v254 = -1;
    v255 = 0;
    v256 = 0;
    v251 = 0;
    *(_OWORD *)v252.m256i_i8 = 0;
    v92 = find_tinfo_udt_member((int)v250);
    v79 = (n + v79 - 1) & v207;
    if ( v92 == -1 )
    {
      if ( !v184 )
      {
        if ( !under_debugger )
          interr(1113);
LABEL_391:
        BUG();
      }
      v116 = tinfo_size - v79;
      goto LABEL_316;
    }
    v93 = *((_QWORD *)v233 + 16 * (__int64)v92) >> 3;
    if ( v79 < (unsigned int)v93 )
    {
      v116 = v93 - v79;
LABEL_316:
      if ( (__int64)v78 << 8 < (unsigned __int64)v116 || v116 <= 0 )
      {
LABEL_198:
        clear_tinfo_t(&v252);
        if ( v250[2].m128i_i64[1] )
        {
          v251.m128i_i64[0] = 0;
          qfree((void *)v250[2].m128i_i64[1]);
        }
        if ( v250[1].m128i_i64[0] )
        {
          v250[1].m128i_i64[1] = 0;
          qfree((void *)v250[1].m128i_i64[0]);
        }
LABEL_202:
        clear_tinfo_t(v245);
        if ( v244[3] )
        {
          v244[4] = nullptr;
          qfree(v244[3]);
        }
        if ( v244[0] )
        {
          v244[1] = nullptr;
          qfree(v244[0]);
        }
LABEL_206:
        v199 = 0;
        goto LABEL_136;
      }
      clear_tinfo_t(&v252);
      if ( v250[2].m128i_i64[1] )
      {
        v251.m128i_i64[0] = 0;
        qfree((void *)v250[2].m128i_i64[1]);
      }
      if ( v250[1].m128i_i64[0] )
      {
        v250[1].m128i_i64[1] = 0;
        qfree((void *)v250[1].m128i_i64[0]);
      }
LABEL_264:
      while ( v116 > 0 )
      {
        if ( v80 >= v258 )
          break;
        v118 = v116;
        if ( v78 <= v116 )
          v118 = v78;
        if ( n > v118 && v214 )
          v118 = round_down_power2((unsigned int)v118, v89);
        v119 = v118;
        *(_QWORD *)v80 = -1;
        v120 = v79 - v218;
        *((_QWORD *)v80 + 2) = v118;
        v121 = v181;
        *((_DWORD *)v80 + 2) = v79 - v218;
        if ( v181 <= 0x10 )
        {
          v201 = v118;
          v197 = v118;
          v121 = getinf(99);
          v118 = v201;
          v119 = v197;
          v120 = v79 - v218;
        }
        v196 = v119;
        v192 = v120;
        if ( v121 != 176 && v121 != 256 )
        {
          v89 = 2;
          v200 = v118;
          v117 = getinf_flag(67, 2);
          v118 = v200;
          if ( !v117 )
            v118 = (-n & (v196 + n - 1 + v192)) - v192;
        }
        v116 -= v118;
        v80 = (_OWORD *)((char *)v80 + 24);
        v79 += v118;
      }
LABEL_184:
      clear_tinfo_t(v245);
      if ( v244[3] )
      {
        v244[4] = nullptr;
        qfree(v244[3]);
      }
      v88 = v244[0];
      if ( !v244[0] )
        goto LABEL_188;
LABEL_187:
      v244[1] = nullptr;
      qfree(v88);
      goto LABEL_188;
    }
    if ( v79 > (unsigned int)v93 && v214 != 1 )
      goto LABEL_198;
    v79 = *((_QWORD *)v233 + 16 * (__int64)v92) >> 3;
    clear_tinfo_t(&v252);
    if ( v250[2].m128i_i64[1] )
    {
      v251.m128i_i64[0] = 0;
      qfree((void *)v250[2].m128i_i64[1]);
    }
    if ( v250[1].m128i_i64[0] )
    {
      v250[1].m128i_i64[1] = 0;
      qfree((void *)v250[1].m128i_i64[0]);
    }
    clear_tinfo_t(v245);
    if ( v244[3] )
    {
      v244[4] = nullptr;
      qfree(v244[3]);
    }
    v88 = v244[0];
    if ( v244[0] )
      goto LABEL_187;
LABEL_188:
    if ( v80 >= v258 )
      goto LABEL_307;
  }
  v189 = tinfo_udt_member;
  if ( tinfo_udt_member < v217 )
  {
    if ( *(_QWORD *)v242 >> 3 != v79 )
      goto LABEL_202;
    v81 = (unsigned __int64)v243 >> 3;
    if ( (get_tinfo_property(*(_QWORD *)&v245[0], 2) & 0xF) == 0xB )
      goto LABEL_202;
    v82 = v189;
    v83 = v79 - v218;
    *(_QWORD *)v80 = v189;
    *((_DWORD *)v80 + 2) = v79 - v218;
    v84 = v181;
    if ( v181 <= 0x10 )
    {
      v84 = getinf(99);
      v82 = v189;
    }
    if ( v84 == 176 || v84 == 256 || (v190 = v82, v85 = getinf_flag(67, 2), v82 = v190, v85) )
      v86 = v81;
    else
      v86 = (v205 & (v83 + v81 + n - 1)) - v83;
    v87 = v79 + v86;
    if ( !v214 && v87 <= (v207 & (n + v79)) )
    {
      for ( i = v82 + 1; v217 != i; ++i )
      {
        v136 = (char *)v233 + 128 * i;
        if ( *v136 >> 3 >= (unsigned __int64)v87 )
          break;
        v137 = (v136[1] + *v136) >> 3;
        if ( v87 < (unsigned int)v137 )
          goto LABEL_202;
        v81 = (unsigned int)(v137 - v79);
        v138 = v181;
        if ( v181 <= 0x10 )
        {
          v194 = i;
          v138 = getinf(99);
          i = v194;
        }
        if ( v138 == 176 || v138 == 256 || (v193 = i, v134 = getinf_flag(67, 2), i = v193, v134) )
          v135 = v81;
        else
          v135 = (v205 & (v81 + n - 1 + v83)) - v83;
        v87 = v79 + v135;
      }
    }
    *((_QWORD *)v80 + 2) = v81;
    v79 = v87;
    v80 = (_OWORD *)((char *)v80 + 24);
    goto LABEL_184;
  }
  clear_tinfo_t(v245);
  if ( v244[3] )
  {
    v244[4] = nullptr;
    qfree(v244[3]);
  }
  if ( v244[0] )
  {
    v244[1] = nullptr;
    qfree(v244[0]);
  }
LABEL_307:
  v204 = -1431655765 * (((char *)v80 - (char *)v257) >> 3);
  if ( v184 )
  {
    v142 = -1431655765 * (((char *)v80 - (char *)v257) >> 3) - 1;
    v143 = v142;
    if ( v142 > 0 )
    {
      v144 = v257;
      do
      {
        v145 = v143;
        v146 = *(_QWORD *)v144;
        v147 = *((_DWORD *)v144 + 2);
        --v143;
        v148 = *((_QWORD *)v144 + 2);
        v144 = (_OWORD *)((char *)v144 + 24);
        v145 *= 24;
        *(__m128i *)((char *)v144 - 24) = _mm_loadu_si128((const __m128i *)((char *)v257 + v145));
        *((_QWORD *)v144 - 1) = *(_QWORD *)((char *)&v257[1] + v145);
        *(_QWORD *)((char *)v257 + v145) = v146;
        *(_DWORD *)((char *)v257 + v145 + 8) = v147;
        *(_QWORD *)((char *)&v257[1] + v145) = v148;
      }
      while ( v142 - v143 < v143 );
    }
  }
LABEL_11:
  v224 = 1;
  memset(src, 0, sizeof(src));
  v10 = a2[22];
  v239 = 0u;
  v240.m128i_i64[0] = 0;
  v240.m128i_i32[2] = 0;
  memset(&v241, 0, 24);
  v241.m256i_i8[24] = 16;
  v199 = v10;
  if ( v10 )
  {
    v199 = sub_5EC8D0(a1, (__int64)src, (__int64)a2, 0x70u, v204 != 0);
    if ( v215 && v219 )
    {
      memset(v250, 0, sizeof(v250));
      v251.m128i_i64[0] = 0;
      v251.m128i_i32[2] = 0;
      memset(&v252, 0, 24);
      v252.m256i_i8[24] = 16;
      v105 = sub_5EC8D0(a1, (__int64)v250, (__int64)a2, 0xB0u, v204 != 0);
      if ( v199 <= v105 )
      {
        v199 = v105;
        si128 = _mm_load_si128(src);
        v123 = _mm_load_si128(&src[1]);
        src[0] = _mm_load_si128(v250);
        v124 = _mm_load_si128(&v250[1]);
        v125 = _mm_load_si128(&v239);
        v126 = _mm_load_si128(&v240);
        v258[0] = si128;
        v127 = _mm_load_si128((const __m128i *)&v241);
        src[1] = v124;
        v128 = _mm_load_si128(&v250[2]);
        v129 = _mm_load_si128((const __m128i *)&v241.m256i_u64[2]);
        v258[1] = v123;
        v239 = v128;
        v130 = _mm_load_si128(&v251);
        v258[2] = v125;
        v240 = v130;
        v131 = _mm_load_si128((const __m128i *)&v252);
        v258[3] = v126;
        *(__m128i *)v241.m256i_i8 = v131;
        v132 = _mm_load_si128((const __m128i *)&v252.m256i_u64[2]);
        v258[4] = v127;
        v258[5] = v129;
        *(__m128i *)&v241.m256i_u64[2] = v132;
        v250[0] = si128;
        v250[1] = v123;
        v250[2] = v125;
        v251 = v126;
        *(__m128i *)v252.m256i_i8 = v127;
        *(__m128i *)&v252.m256i_u64[2] = v129;
      }
      if ( v252.m256i_i64[0] )
      {
        v252.m256i_i64[1] = 0;
        qfree((void *)v252.m256i_i64[0]);
      }
      cleanup_argloc(&v250[2].m128i_u64[1]);
      clear_tinfo_t(&v250[2]);
      v106 = (char *)v250[0].m128i_i64[0];
      if ( v250[0].m128i_i64[0] )
      {
        v107 = v250[0].m128i_i64[1];
        if ( v250[0].m128i_i64[1] )
        {
          v108 = 0;
          do
          {
            v109 = &v106[80 * v108];
            clear_tinfo_t(v109 + 64);
            v110 = *((void **)v109 + 5);
            if ( v110 )
            {
              *((_QWORD *)v109 + 6) = 0;
              qfree(v110);
            }
            v111 = *((void **)v109 + 2);
            if ( v111 )
            {
              *((_QWORD *)v109 + 3) = 0;
              qfree(v111);
            }
            ++v108;
            cleanup_argloc(v109);
            v106 = (char *)v250[0].m128i_i64[0];
          }
          while ( v107 != v108 );
        }
        v250[0].m128i_i64[1] = 0;
        qfree(v106);
      }
    }
    if ( v199 <= 0 )
      goto LABEL_124;
    v224 = 0;
    if ( v204 + v199 > 255 )
      goto LABEL_124;
  }
  else if ( v204 > 255 )
  {
    goto LABEL_127;
  }
  if ( (a2[2] & 2) != 0 )
    src[1].m128i_i32[2] |= 0x80u;
  v11 = a2[7];
  v221 = v11;
  if ( v184 )
  {
    v12 = (int)v231 + v11 < 0;
    v13 = v231 + v11;
    v14 = 0;
    if ( !v12 )
      v14 = v13;
    v221 = v14;
  }
  v222 = !*(_DWORD *)(a1[2] + 4)
      && sub_5ED360(a1)
      && (v98 = sub_4EE820((__int64)(a1 + 194), *a2)) != nullptr
      && *((_BYTE *)v98 + 23) != 2;
  if ( v204 > 0 )
  {
    v195 = 0;
    v15 = src;
    v16 = 2 * n;
    v185 = 2 * n;
    v202 = v257;
    if ( n <= 2 * n )
      v16 = n;
    v216 = v16;
    while ( 2 )
    {
      v229 = 0;
      v206 = *((_QWORD *)v202 + 2);
      v208 = *(_QWORD *)v202;
      v17 = sub_5EAD10(*a1, &v229, &v233, *(_QWORD *)v202, v206, &v224);
      if ( v17 )
      {
        if ( v17 != 2 )
        {
          v18 = *((_DWORD *)v202 + 2);
          if ( v195 )
          {
            if ( v214 )
            {
              for ( j = v240.m128i_u32[2]; j < v18; v240.m128i_i32[2] = j )
              {
                v27 = v229;
                v225 = 0;
                get_tinfo_size(&v225, v229, 0);
                v28 = v225;
                v20 = v225 - 1;
                if ( (v225 & (v225 - 1)) != 0 )
                {
                  if ( !under_debugger )
                    interr(2858);
                  goto LABEL_391;
                }
                if ( v225 > v185 )
                {
                  if ( v181 <= 0x10 )
                  {
                    v57 = getinf(99);
                    if ( v57 == 176 || v57 == 256 )
                    {
                      v28 = 2 * n;
                      if ( n > v185 )
                      {
                        v28 = 2 * n;
LABEL_118:
                        v58 = getinf(99);
                        v29 = v58 == 256 || v58 == 176;
LABEL_32:
                        v20 = v28 - 1;
                        if ( v29 )
                          goto LABEL_33;
                        v27 = 2;
                        v56 = getinf_flag(67, 2);
                        goto LABEL_112;
                      }
LABEL_120:
                      v59 = getinf(99);
                      v29 = v59 == 176 || v59 == 256;
                      goto LABEL_42;
                    }
                  }
                  else if ( v181 == 176 || v181 == 256 )
                  {
                    v28 = v216;
                    v20 = v216 - 1;
                    goto LABEL_33;
                  }
                  v27 = 512;
                  if ( (unsigned __int8)getinf_flag(67, 512) )
                    goto LABEL_33;
                  v28 = 2 * n;
                }
                v29 = v181 == 176 || v181 == 256;
                if ( n > v28 )
                {
                  if ( v181 <= 0x10 )
                    goto LABEL_118;
                  goto LABEL_32;
                }
                if ( v181 <= 0x10 )
                  goto LABEL_120;
LABEL_42:
                if ( v29 )
                  goto LABEL_43;
                v27 = 4;
                v56 = getinf_flag(67, 4);
LABEL_112:
                v20 = v28 - 1;
                if ( !v56 )
                {
LABEL_43:
                  v21 = (j + n - 1) & -n;
                  v22 = v18 < v21;
                  if ( v18 == v21 )
                    break;
                  goto LABEL_34;
                }
LABEL_33:
                v21 = (j + v20) & -v28;
                v22 = v18 < v21;
                if ( v18 == v21 )
                  break;
LABEL_34:
                if ( v22 )
                  goto LABEL_123;
                v23 = round_down_power2((unsigned int)(v18 - v21), v27);
                v24 = src[0];
                if ( src[1].m128i_i64[0] < (unsigned __int64)(src[0].m128i_i64[1] + 1) )
                {
                  src[0].m128i_i64[0] = qvector_reserve(v15, src[0].m128i_i64[0], src[0].m128i_i64[1] + 1, 80);
                  v24 = src[0];
                }
                v25 = v24.m128i_i64[0] + 80 * v24.m128i_i64[1];
                *(_DWORD *)v25 = 0;
                *(_QWORD *)(v25 + 8) = 0;
                *(_QWORD *)(v25 + 16) = 0;
                *(_QWORD *)(v25 + 40) = 0;
                *(_QWORD *)(v25 + 64) = 0;
                *(_DWORD *)(v25 + 72) = 0;
                *(_OWORD *)(v25 + 24) = 0;
                *(_OWORD *)(v25 + 48) = 0;
                v26 = v240.m128i_i32[2];
                ++src[0].m128i_i64[1];
                cleanup_argloc(v25);
                *(_DWORD *)v25 = 1;
                *(_DWORD *)(v25 + 8) = v26;
                v250[0].m128i_i64[0] = (unsigned __int8)sub_689BF0(a1, v23);
                copy_tinfo_t(v25 + 64);
                clear_tinfo_t(v250);
                j = v240.m128i_i32[2] + v23;
              }
            }
          }
          v30 = src[0].m128i_i64[1];
          v31 = src[0].m128i_i64[0];
          if ( src[1].m128i_i64[0] < (unsigned __int64)(src[0].m128i_i64[1] + 1) )
          {
            src[0].m128i_i64[0] = qvector_reserve(v15, src[0].m128i_i64[0], src[0].m128i_i64[1] + 1, 80);
            v30 = src[0].m128i_i64[1];
            v31 = src[0].m128i_i64[0];
          }
          v32 = v31 + 80 * v30;
          *(_DWORD *)v32 = 0;
          *(_QWORD *)(v32 + 8) = 0;
          *(_QWORD *)(v32 + 16) = 0;
          *(_QWORD *)(v32 + 40) = 0;
          *(_QWORD *)(v32 + 64) = 0;
          *(_DWORD *)(v32 + 72) = 0;
          *(_OWORD *)(v32 + 24) = 0;
          *(_OWORD *)(v32 + 48) = 0;
          v33 = src[0].m128i_i64[1] + 1;
          v34 = v208;
          ++src[0].m128i_i64[1];
          if ( v208 == -1 )
            goto LABEL_50;
          v35 = (char *)v233 + 128 * v208;
          v36 = *((_QWORD *)v35 + 3);
          if ( v36 )
          {
            v37 = *((const char **)v35 + 2);
            if ( !v37 )
              goto LABEL_50;
            v209 = *((_QWORD *)v35 + 3);
            v186 = (char *)v233 + 128 * v34;
            if ( !strncmp(*((const char **)v35 + 2), "arg_", 4u) )
              goto LABEL_50;
            v99 = strncmp(v37, "var_", 4u);
            v35 = v186;
            v36 = v209;
            if ( !v99 )
              goto LABEL_50;
          }
          else
          {
            v37 = haystack;
            if ( !haystack )
              goto LABEL_50;
          }
          v210 = v36;
          v187 = v35;
          if ( strncmp(v37, "anonymous", 9u) )
          {
            v72 = v187;
            v73 = v210;
            if ( src[0].m128i_i64[0] != src[0].m128i_i64[0] + 80 * v33 )
            {
              v188 = v15;
              v74 = src[0].m128i_i64[0];
              v75 = src[0].m128i_i64[0] + 80 * v33;
              v211 = v72;
              v223 = v73;
              do
              {
                v76 = haystack;
                if ( *(_QWORD *)(v74 + 24) )
                  v76 = *(const char **)(v74 + 16);
                if ( !strcmp(v76, v37) )
                {
                  v15 = v188;
                  goto LABEL_50;
                }
                v74 += 80;
              }
              while ( v75 != v74 );
              v72 = v211;
              v73 = v223;
              v15 = v188;
            }
            if ( (char *)(v32 + 16) != v72 + 16 )
            {
              if ( v73 )
              {
                v94 = v73 - 1;
                if ( v73 != 1 )
                {
                  v95 = *((const void **)v72 + 2);
                  v191 = v73;
                  v96 = (void *)qvector_reserve(v32 + 16, 0, v73, 1);
                  *(_QWORD *)(v32 + 16) = v96;
                  *(_QWORD *)(v32 + 24) = v191;
                  memmove(v96, v95, v94);
                  *(_BYTE *)(*(_QWORD *)(v32 + 16) + v191 - 1) = 0;
                  v97 = v229;
                  v22 = *(_QWORD *)(v32 + 24) <= 1u;
                  v229 = *(_QWORD *)(v32 + 64);
                  *(_QWORD *)(v32 + 64) = v97;
                  if ( !v22 )
                    v224 = 0;
LABEL_51:
                  cleanup_argloc(v32);
                  *(_DWORD *)(v32 + 8) = v18;
                  *(_DWORD *)v32 = 1;
                  v39 = v206 + v18;
                  if ( v240.m128i_i32[2] < v39 )
                    v240.m128i_i32[2] = v39;
                  clear_tinfo_t(&v229);
                  ++v195;
                  v202 = (_OWORD *)((char *)v202 + 24);
                  if ( v195 != v204 )
                    continue;
                  goto LABEL_54;
                }
              }
            }
          }
LABEL_50:
          v38 = v229;
          v229 = 0;
          *(_QWORD *)(v32 + 64) = v38;
          goto LABEL_51;
        }
        if ( src[0].m128i_i64[1] )
        {
          v222 |= 8u;
          clear_tinfo_t(&v229);
          goto LABEL_54;
        }
      }
      break;
    }
LABEL_123:
    clear_tinfo_t(&v229);
    goto LABEL_124;
  }
LABEL_54:
  v240.m128i_i32[2] = (n + v240.m128i_i32[2] - 1) & -n;
  if ( src[0].m128i_i64[1] > 0xFFuLL )
    goto LABEL_124;
  v40 = *((_QWORD *)a2 + 1);
  if ( (v40 & 0x4000) == 0 )
  {
    v41 = -1;
    if ( v221 )
      v41 = v221;
    v221 = v41;
  }
  if ( v220 && v215 != 1 )
  {
    if ( (unsigned int)sub_5EAD10(*a1, v239.m128i_i64, &v233, v217, *((_QWORD *)v233 + 16 * v217 + 1) >> 3, &v224) == 1 )
    {
      v113 = (*((_QWORD *)v233 + 16 * v217) >> 3) - v218;
      cleanup_argloc(&v239.m128i_u64[1]);
      v240.m128i_i32[0] = v113;
      v239.m128i_i32[2] = 1;
      if ( v204 )
        v224 = 0;
      goto LABEL_253;
    }
    v40 = *((_QWORD *)a2 + 1);
  }
  if ( (v40 & 1) != 0 )
  {
    src[1].m128i_i32[2] |= 2u;
    v250[0].m128i_i64[0] = 1;
    copy_tinfo_t(&v239);
    clear_tinfo_t(v250);
  }
  else
  {
    v250[0].m128i_i64[0] = (-(__int64)((get_aflags(*a2) & 0x4000000) == 0) & 0xFFFFFFFFFFFFFFEELL) + 25;
    copy_tinfo_t(&v239);
    clear_tinfo_t(v250);
    if ( (*(_BYTE *)(a1[2] + 9) & 0x10) == 0 || !(unsigned __int8)calc_retloc(src, v250) )
      goto LABEL_124;
  }
  if ( (v219 & (unsigned __int8)v215) != 0 && v199 )
  {
    v42 = v241.m256i_i8[24] & 0xF0;
    if ( (v241.m256i_i8[24] & 0xF0) != 0xC0 )
    {
LABEL_69:
      v43 = v42;
      goto LABEL_70;
    }
    v43 = src[1].m128i_u32[3];
    goto LABEL_70;
  }
LABEL_253:
  v43 = guess_func_cc((int)src, v221, v222);
  v114 = v241.m256i_i8[24] & 0xF;
  if ( (v43 & 0xFFFFFF0F) == 0 && v43 != 192 )
  {
    src[1].m128i_i32[3] = 0;
    v241.m256i_i8[24] = v43 | v114;
    v42 = (v43 | v114) & 0xF0;
    if ( v42 == 0xC0 )
      goto LABEL_256;
    goto LABEL_69;
  }
  src[1].m128i_i32[3] = v43;
  v241.m256i_i8[24] = v114 | 0xC0;
LABEL_70:
  if ( v43 - 208 <= 0x2F )
  {
    if ( !v239.m128i_i32[2] )
      goto LABEL_124;
    if ( !a2[22] )
      goto LABEL_257;
    v44 = src[0].m128i_i32[2] - 1;
    if ( src[0].m128i_i32[2] - 1 >= 0 )
    {
      v45 = 80LL * v44;
      do
      {
        if ( (unsigned int)(*(_DWORD *)(v45 + src[0].m128i_i64[0]) - 3) <= 1
          && !sub_656160(a2, *(unsigned __int16 *)(v45 + src[0].m128i_i64[0] + 8)) )
        {
          v46 = (_QWORD *)(v45 + src[0].m128i_i64[0]);
          clear_tinfo_t(v45 + src[0].m128i_i64[0] + 64);
          v47 = (void *)v46[5];
          if ( v47 )
          {
            v46[6] = 0;
            qfree(v47);
          }
          v48 = (void *)v46[2];
          if ( v48 )
          {
            v46[3] = 0;
            qfree(v48);
          }
          cleanup_argloc(v46);
          memmove(v46, v46 + 10, src[0].m128i_i64[0] + 80 * src[0].m128i_i64[1]-- - (_QWORD)v46 - 80);
        }
        --v44;
        v45 -= 80;
      }
      while ( v44 != -1 );
    }
    v43 = guess_func_cc((int)src, v221, v222);
    v149 = v241.m256i_i8[24] & 0xF;
    if ( (v43 & 0xFFFFFF0F) != 0 || v43 == 192 )
    {
      src[1].m128i_i32[3] = v43;
      v241.m256i_i8[24] = v149 | 0xC0;
    }
    else
    {
      src[1].m128i_i32[3] = 0;
      v241.m256i_i8[24] = v43 | v149;
      v43 = ((unsigned __int8)v43 | v149) & 0xF0;
      if ( (v241.m256i_i8[24] & 0xF0) == 0xC0 )
        goto LABEL_256;
    }
  }
  if ( v43 <= 0x10 )
LABEL_256:
    v43 = getinf(99);
LABEL_257:
  if ( a2[22] || !v204 )
    goto LABEL_259;
  if ( ((v43 - 112) & 0xFFFFFFEF) != 0 )
  {
    switch ( v43 )
    {
      case 0xB0u:
        if ( !v215 )
          goto LABEL_259;
        v150 = 176;
        break;
      case 0x90u:
        v150 = 144;
        break;
      case 0x40u:
        v150 = 64;
        break;
      default:
        if ( v222 )
          goto LABEL_259;
        v150 = 112;
        if ( v43 != 48 )
          goto LABEL_259;
        break;
    }
  }
  else
  {
    v150 = v43;
  }
  na = v43;
  *(_QWORD *)v242 = 0;
  v243 = nullptr;
  memset(v244, 0, 40);
  sub_375980(0x7D4u, v242, v150);
  if ( !v244[0] )
    goto LABEL_372;
  if ( !(unsigned __int8)calc_arglocs(src) )
    goto LABEL_372;
  v151 = src[0].m128i_i64[0];
  v152 = src[0].m128i_i64[0] + 80 * src[0].m128i_i64[1];
  if ( src[0].m128i_i64[0] == v152 )
    goto LABEL_372;
  while ( *(_DWORD *)v151 != 2 )
  {
    if ( (unsigned int)(*(_DWORD *)v151 - 3) <= 1 )
      goto LABEL_358;
LABEL_352:
    v151 += 80;
    if ( v152 == v151 )
      goto LABEL_372;
  }
  v153 = *(_QWORD *)(v151 + 8);
  v154 = *(_DWORD **)v153;
  v155 = *(_QWORD *)v153 + 24LL * *(_QWORD *)(v153 + 8);
  if ( *(_QWORD *)v153 == v155 )
    goto LABEL_352;
  while ( (unsigned int)(*v154 - 3) > 1 )
  {
    v154 += 6;
    if ( (_DWORD *)v155 == v154 )
      goto LABEL_352;
  }
LABEL_358:
  memset(v250, 0, sizeof(v250));
  v156 = *a1;
  v251.m128i_i64[0] = 0;
  v251.m128i_i32[2] = 0;
  memset(&v252, 0, 24);
  v252.m256i_i8[24] = 16;
  sub_5EB220(v156, v250[0].m128i_i64, (__int64)a2, &v243, (int)v244[0], 1u);
  v157 = 80 * v250[0].m128i_i64[1];
  k = na;
  v159 = 0xCCCCCCCCCCCCCCCDLL * ((80 * v250[0].m128i_i64[1]) >> 4);
  v160 = v159;
  if ( v159 )
  {
    v161 = src[0].m128i_i64[1];
    v162 = v250[0].m128i_i64[0];
    v163 = (_DWORD *)src[0].m128i_i64[0];
    v164 = v159 + src[0].m128i_i64[1];
    if ( src[1].m128i_i64[0] < v164 )
    {
      v173 = 80 * v250[0].m128i_i64[1];
      src[0].m128i_i64[0] = qvector_reserve(src, src[0].m128i_i64[0], v164, 80);
      v163 = (_DWORD *)src[0].m128i_i64[0];
      k = na;
      v161 = src[0].m128i_i64[1];
      v157 = v173;
    }
    nc = k;
    v172 = v162 + v157;
    memmove((char *)v163 + v157, v163, 80 * v161);
    for ( k = nc; v172 != v162; *(v163 - 2) = v165 )
    {
      *v163 = 0;
      v166 = (const void *)v162;
      nb = k;
      copy_argloc(v163, v162);
      *((_QWORD *)v163 + 2) = 0;
      v170 = nb;
      *(_OWORD *)(v163 + 6) = 0;
      if ( *(_QWORD *)(v162 + 24) )
      {
        v182 = nb;
        nf = *(_QWORD *)(v162 + 24);
        v167 = (void *)qalloc_or_throw(nf, (const char *)v162);
        *((_QWORD *)v163 + 2) = v167;
        *((_QWORD *)v163 + 4) = nf;
        v166 = *(const void **)(v162 + 16);
        memcpy(v167, v166, nf);
        v170 = v182;
        *((_QWORD *)v163 + 3) = nf;
      }
      *((_QWORD *)v163 + 5) = 0;
      *((_OWORD *)v163 + 3) = 0;
      if ( *(_QWORD *)(v162 + 48) )
      {
        v183 = v170;
        nd = *(_QWORD *)(v162 + 48);
        v169 = (void *)qalloc_or_throw(nd, (const char *)v166);
        *((_QWORD *)v163 + 5) = v169;
        *((_QWORD *)v163 + 7) = nd;
        memcpy(v169, *(const void **)(v162 + 40), nd);
        v170 = v183;
        *((_QWORD *)v163 + 6) = nd;
      }
      *((_QWORD *)v163 + 8) = 0;
      ne = v170;
      copy_tinfo_t(v163 + 16);
      v165 = *(_DWORD *)(v162 + 72);
      v163 += 20;
      v162 += 80;
      k = ne;
    }
    src[0].m128i_i64[1] += v160;
  }
  if ( k == 48 )
  {
    src[1].m128i_i32[3] = 0;
    v241.m256i_i8[24] = v241.m256i_i8[24] & 0xF | 0x70;
  }
  sub_5C9DC0((char **)v250);
LABEL_372:
  if ( v244[2] )
  {
    v244[3] = nullptr;
    qfree(v244[2]);
  }
  if ( v243 )
  {
    v244[0] = nullptr;
    qfree(v243);
  }
LABEL_259:
  if ( src[0].m128i_i64[1] <= 0x100uLL
    && (sub_5E9E10((__int64)src), (unsigned __int8)create_tinfo(a3, 12, 12, v115))
    && ((*((_BYTE *)a2 + 9) & 0x40) == 0
     || (tinfo_property = get_tinfo_property(*a3, 21), tinfo_property == -1)
     || a2[7] == tinfo_property) )
  {
    v199 = 2 - v224;
  }
  else
  {
LABEL_124:
    v199 = 0;
  }
  if ( v241.m256i_i64[0] )
  {
    v241.m256i_i64[1] = 0;
    qfree((void *)v241.m256i_i64[0]);
  }
LABEL_127:
  cleanup_argloc(&v239.m128i_u64[1]);
  clear_tinfo_t(&v239);
  v60 = (char *)src[0].m128i_i64[0];
  if ( src[0].m128i_i64[0] )
  {
    v61 = src[0].m128i_i64[1];
    if ( src[0].m128i_i64[1] )
    {
      v62 = 0;
      do
      {
        v63 = &v60[80 * v62];
        clear_tinfo_t(v63 + 64);
        v64 = *((void **)v63 + 5);
        if ( v64 )
        {
          *((_QWORD *)v63 + 6) = 0;
          qfree(v64);
        }
        v65 = *((void **)v63 + 2);
        if ( v65 )
        {
          *((_QWORD *)v63 + 3) = 0;
          qfree(v65);
        }
        ++v62;
        cleanup_argloc(v63);
        v60 = (char *)src[0].m128i_i64[0];
      }
      while ( v61 != v62 );
    }
    src[0].m128i_i64[1] = 0;
    qfree(v60);
  }
LABEL_136:
  v66 = (char *)v233;
  if ( v233 )
  {
    v67 = v234;
    if ( (_QWORD)v234 )
    {
      v68 = v213;
      do
      {
        v69 = &v66[128 * v68];
        clear_tinfo_t(v69 + 64);
        v70 = *((void **)v69 + 5);
        if ( v70 )
        {
          *((_QWORD *)v69 + 6) = 0;
          qfree(v70);
        }
        v71 = *((void **)v69 + 2);
        if ( v71 )
        {
          *((_QWORD *)v69 + 3) = 0;
          qfree(v71);
        }
        ++v68;
        v66 = (char *)v233;
      }
      while ( v67 != v68 );
    }
    *(_QWORD *)&v234 = 0;
    qfree(v66);
  }
  clear_tinfo_t(&v226);
  return (unsigned int)v199;
}

