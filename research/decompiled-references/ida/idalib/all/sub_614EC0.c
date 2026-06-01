__int64 __fastcall sub_614EC0(__int64 *a1, unsigned __int64 *a2, __int64 *a3, int a4)
{
  unsigned __int64 v6; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  unsigned __int64 v11; // rax
  bool v12; // sf
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i *v15; // rbp
  int v16; // esi
  int v17; // eax
  __int64 v18; // r13
  __int64 v19; // r15
  int v20; // ebx
  __int64 v21; // r14
  unsigned int v22; // ebx
  __m128i v23; // kr00_16
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rsi
  int v27; // r14d
  bool v28; // al
  __int64 v29; // r12
  __int64 v30; // rax
  char *v31; // rbx
  int v32; // r13d
  char *v33; // r14
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r14
  __int64 v39; // rbx
  __int64 v40; // rax
  char *v41; // rcx
  __int64 v42; // r8
  const char *v43; // r15
  __int64 v44; // rax
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // rax
  int v47; // edx
  int aflags; // edx
  __int64 v49; // rax
  unsigned __int8 v50; // al
  unsigned int v51; // r10d
  unsigned __int32 v52; // r13d
  __int64 v53; // r14
  _QWORD *v54; // r12
  void *v55; // rdi
  void *v56; // rdi
  char v57; // al
  int v58; // eax
  int v59; // edx
  int v60; // edx
  char *v61; // rdi
  __int64 v62; // r12
  __int64 v63; // rbp
  char *v64; // rbx
  void *v65; // rdi
  void *v66; // rdi
  char *v67; // rdi
  __int64 v68; // rbp
  __int64 v69; // r12
  char *v70; // rbx
  void *v71; // rdi
  void *v72; // rdi
  char *v73; // rcx
  __int64 v74; // r8
  __int64 v75; // rbp
  __int64 v76; // r12
  const char *v77; // rdi
  int v78; // eax
  unsigned __int64 v79; // r12
  char *v80; // r15
  unsigned __int64 v81; // r13
  __int64 v82; // r14
  unsigned int v83; // eax
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rax
  __int64 v86; // rdx
  void *v87; // rdi
  __int64 v88; // rsi
  int tinfo_udt_member; // eax
  __int64 v90; // rbp
  __m128i v91; // xmm0
  int v92; // eax
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rax
  size_t v95; // r15
  const void *v96; // rbx
  void *v97; // rax
  __int64 v98; // rdx
  bool v99; // cc
  unsigned __int64 *v100; // rax
  int v101; // eax
  __int64 v102; // rdi
  unsigned int v103; // ebp
  int v104; // eax
  unsigned __int64 v105; // rax
  __int64 v106; // rdx
  int v107; // eax
  char *v108; // rdi
  __int64 v109; // r12
  __int64 v110; // rbx
  char *v111; // rbp
  void *v112; // rdi
  void *v113; // rdi
  char v114; // al
  unsigned __int64 v115; // rax
  _QWORD *v116; // rdi
  unsigned __int64 v117; // rsi
  unsigned int v118; // eax
  unsigned __int64 v119; // rax
  __int64 v120; // rbp
  char v121; // al
  __int64 v122; // rcx
  __int64 v123; // r13
  __int64 v124; // r14
  char v125; // al
  __int64 v126; // rdx
  __int64 v127; // r9
  unsigned int v128; // eax
  __m128i si128; // xmm5
  __m128i v130; // xmm4
  __m128i v131; // xmm6
  __m128i v132; // xmm3
  __m128i v133; // xmm2
  __m128i v134; // xmm1
  __m128i v135; // xmm6
  __m128i v136; // xmm0
  __m128i v137; // xmm6
  __m128i v138; // xmm6
  __m128i v139; // xmm6
  unsigned __int64 v140; // rbx
  const __m128i *v141; // rax
  __m128i v142; // xmm0
  int v143; // edi
  int v144; // ecx
  _OWORD *v145; // rax
  __int64 v146; // rdx
  char *v147; // rsi
  __m128i v148; // xmm0
  __int64 v149; // r8
  __int64 v150; // rdx
  unsigned __int64 v151; // rax
  unsigned __int8 v152; // al
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rdi
  __int64 v156; // rdx
  _DWORD *v157; // rax
  __int64 v158; // rsi
  __int64 v159; // rdi
  __int64 v160; // r8
  unsigned int i; // r10d
  unsigned __int64 v162; // rdx
  unsigned __int64 v163; // r15
  __int64 v164; // rax
  __int64 v165; // r13
  _DWORD *v166; // rbp
  unsigned __int64 v167; // rdx
  int v168; // eax
  void *v169; // rax
  int tinfo_property; // eax
  void *v171; // rax
  unsigned int v172; // r10d
  __int64 v174; // [rsp+8h] [rbp-1B90h]
  unsigned int v175; // [rsp+8h] [rbp-1B90h]
  int n; // [rsp+10h] [rbp-1B88h]
  unsigned int na; // [rsp+10h] [rbp-1B88h]
  unsigned int nd; // [rsp+10h] [rbp-1B88h]
  unsigned int nf; // [rsp+10h] [rbp-1B88h]
  unsigned int nb; // [rsp+10h] [rbp-1B88h]
  size_t ng; // [rsp+10h] [rbp-1B88h]
  size_t ne; // [rsp+10h] [rbp-1B88h]
  size_t nc; // [rsp+10h] [rbp-1B88h]
  unsigned int v184; // [rsp+1Ch] [rbp-1B7Ch]
  unsigned int v185; // [rsp+1Ch] [rbp-1B7Ch]
  unsigned int v186; // [rsp+1Ch] [rbp-1B7Ch]
  char *v187; // [rsp+20h] [rbp-1B78h]
  char *v188; // [rsp+20h] [rbp-1B78h]
  __m128i *v189; // [rsp+20h] [rbp-1B78h]
  __int64 v190; // [rsp+20h] [rbp-1B78h]
  __int64 v191; // [rsp+20h] [rbp-1B78h]
  __int64 v192; // [rsp+20h] [rbp-1B78h]
  __int64 v193; // [rsp+20h] [rbp-1B78h]
  int v194; // [rsp+28h] [rbp-1B70h]
  __int64 tinfo_size; // [rsp+28h] [rbp-1B70h]
  int v196; // [rsp+38h] [rbp-1B60h]
  int v197[2]; // [rsp+38h] [rbp-1B60h]
  __int64 *v198; // [rsp+40h] [rbp-1B58h]
  __int64 v199; // [rsp+40h] [rbp-1B58h]
  __int64 v200; // [rsp+40h] [rbp-1B58h]
  int v202; // [rsp+58h] [rbp-1B40h]
  int v203; // [rsp+58h] [rbp-1B40h]
  int v204; // [rsp+5Ch] [rbp-1B3Ch]
  int v205; // [rsp+5Ch] [rbp-1B3Ch]
  __int64 v206; // [rsp+60h] [rbp-1B38h]
  __int64 v207; // [rsp+68h] [rbp-1B30h]
  __int64 v208; // [rsp+68h] [rbp-1B30h]
  __int64 v209; // [rsp+68h] [rbp-1B30h]
  char *v210; // [rsp+68h] [rbp-1B30h]
  __int64 v212; // [rsp+88h] [rbp-1B10h]
  char v213; // [rsp+9Ah] [rbp-1AFEh]
  char v214; // [rsp+9Bh] [rbp-1AFDh]
  int v215; // [rsp+9Ch] [rbp-1AFCh]
  __int64 v216; // [rsp+A0h] [rbp-1AF8h]
  unsigned __int64 v217; // [rsp+A8h] [rbp-1AF0h]
  unsigned __int64 v218; // [rsp+B0h] [rbp-1AE8h]
  unsigned __int64 v219; // [rsp+B8h] [rbp-1AE0h]
  int v220; // [rsp+B8h] [rbp-1AE0h]
  bool v221; // [rsp+C3h] [rbp-1AD5h]
  int v222; // [rsp+C4h] [rbp-1AD4h]
  __int64 v223; // [rsp+C8h] [rbp-1AD0h]
  unsigned __int8 v224; // [rsp+DBh] [rbp-1ABDh] BYREF
  int v225; // [rsp+DCh] [rbp-1ABCh] BYREF
  __int64 v226; // [rsp+E0h] [rbp-1AB8h] BYREF
  __int64 v227; // [rsp+E8h] [rbp-1AB0h] BYREF
  __int128 v228; // [rsp+F0h] [rbp-1AA8h] BYREF
  __int128 v229; // [rsp+100h] [rbp-1A98h] BYREF
  __int64 v230; // [rsp+110h] [rbp-1A88h] BYREF
  __int128 v231; // [rsp+118h] [rbp-1A80h]
  __int64 v232; // [rsp+128h] [rbp-1A70h]
  void *ptr; // [rsp+130h] [rbp-1A68h] BYREF
  __int128 v234; // [rsp+138h] [rbp-1A60h]
  __int128 v235; // [rsp+148h] [rbp-1A50h]
  __int64 v236; // [rsp+158h] [rbp-1A40h]
  int v237; // [rsp+160h] [rbp-1A38h]
  __m128i src[2]; // [rsp+170h] [rbp-1A28h] BYREF
  __m128i v239; // [rsp+190h] [rbp-1A08h] BYREF
  __m128i v240; // [rsp+1A0h] [rbp-19F8h] BYREF
  __m256i v241; // [rsp+1B0h] [rbp-19E8h] BYREF
  int v242[2]; // [rsp+1D0h] [rbp-19C8h] BYREF
  void *v243; // [rsp+1D8h] [rbp-19C0h] BYREF
  void *v244[6]; // [rsp+1E0h] [rbp-19B8h] BYREF
  _OWORD v245[3]; // [rsp+210h] [rbp-1988h] BYREF
  char *v246; // [rsp+240h] [rbp-1958h]
  int v247; // [rsp+248h] [rbp-1950h]
  __int64 v248; // [rsp+250h] [rbp-1948h]
  char v249; // [rsp+258h] [rbp-1940h]
  __m128i v250[3]; // [rsp+260h] [rbp-1938h] BYREF
  __m128i v251; // [rsp+290h] [rbp-1908h] BYREF
  __m128i v252[3]; // [rsp+2A0h] [rbp-18F8h] BYREF
  char *v253; // [rsp+2D0h] [rbp-18C8h]
  int v254; // [rsp+2D8h] [rbp-18C0h]
  __int64 v255; // [rsp+2E0h] [rbp-18B8h]
  char v256; // [rsp+2E8h] [rbp-18B0h]
  _OWORD v257[384]; // [rsp+2F0h] [rbp-18A8h] BYREF
  _OWORD v258[6]; // [rsp+1AF0h] [rbp-A8h] BYREF
  unsigned __int64 v259; // [rsp+1B58h] [rbp-40h]

  v6 = *a2;
  v259 = __readfsqword(0x28u);
  v214 = is_spec_ea(v6);
  if ( v214 )
    return 0;
  v212 = a2[2] & 0x80;
  if ( (a2[2] & 0x80) != 0 )
  {
    v29 = *a1;
    v30 = calc_thunk_func_target((__int64)a2, src[0].m128i_i8);
    v31 = (char *)v30;
    if ( v30 != -1 )
    {
      if ( (unsigned __int8)get_tinfo(a3, v30) )
      {
        v32 = 2;
      }
      else
      {
        v32 = sub_6119A0(v29, v31, nullptr, a3, a4);
        if ( !v32 )
          goto LABEL_48;
      }
      if ( (get_tinfo_property(*a3, 2) & 0xF) == 0xC )
      {
LABEL_49:
        v33 = (char *)src[0].m128i_i64[0];
        *(_QWORD *)v242 = 0;
        if ( src[0].m128i_i64[0] == -1 )
        {
          v78 = 0;
          if ( v32 >= 0 )
            v78 = v32;
          v196 = v78;
          goto LABEL_54;
        }
        if ( (unsigned __int8)get_tinfo(v242, src[0].m128i_i64[0]) )
        {
          if ( v32 <= 2 )
          {
            v196 = 2;
LABEL_59:
            if ( (get_tinfo_property(*(_QWORD *)v242, 2) & 0xF) == 0xA )
            {
              v250[0].m128i_i64[0] = 0;
              v250[0].m128i_i64[0] = get_tinfo_property(*(_QWORD *)v242, 9);
              copy_tinfo_t(v242);
              clear_tinfo_t(v250);
            }
            if ( (get_tinfo_property(*(_QWORD *)v242, 2) & 0xF) == 0xC )
            {
              v35 = *a3;
              *a3 = *(_QWORD *)v242;
              *(_QWORD *)v242 = v35;
              goto LABEL_54;
            }
LABEL_53:
            v196 = 0;
LABEL_54:
            clear_tinfo_t(v242);
            return (unsigned int)v196;
          }
        }
        else
        {
          v196 = sub_6119A0(v29, v33, nullptr, (__int64 *)v242, a4);
          if ( v32 <= v196 )
          {
            if ( !v196 )
              goto LABEL_53;
            goto LABEL_59;
          }
        }
        v196 = v32;
        goto LABEL_54;
      }
    }
LABEL_48:
    v32 = 0;
    goto LABEL_49;
  }
  v202 = *(_DWORD *)(a1[2] + 8) & 0x8000;
  n = sub_565920(a1);
  v8 = getinf(99);
  v9 = v8;
  if ( v8 > 0x10 )
  {
    v221 = v8 == 176 || v8 == 256;
    goto LABEL_5;
  }
  v184 = getinf(99);
  v9 = v184;
  v221 = v184 == 176 || v184 == 256;
  if ( v184 > 0x10 )
  {
LABEL_5:
    if ( v9 != 176 )
    {
      v230 = 32;
      v232 = 0;
      v231 = 0;
      get_stkarg_area_info(&v230, v9);
      v184 = v9;
      goto LABEL_7;
    }
    goto LABEL_66;
  }
  if ( (unsigned int)getinf(99) != 176 )
  {
    v230 = 32;
    v232 = 0;
    v231 = 0;
    get_stkarg_area_info(&v230, v184);
    goto LABEL_162;
  }
LABEL_66:
  if ( (unsigned __int64)getinf(88) > 0x397 )
  {
LABEL_67:
    v214 = 1;
    goto LABEL_68;
  }
  if ( (unsigned __int8)getinf_flag(3, 4) )
  {
    netnode_check(v250, "$ golang", 0, 0);
    v102 = v250[0].m128i_i64[0];
    v103 = netnode_altval(v250[0].m128i_i64[0], 0, 65);
    if ( v103 > 0x74 )
    {
      v104 = *(_DWORD *)(get_ph(v102, nullptr) + 4);
      if ( !v104 )
        goto LABEL_67;
      v105 = (unsigned int)(v104 - 13);
      if ( (unsigned int)v105 <= 0x3B )
      {
        v106 = 0x800000000000005LL;
        if ( _bittest64(&v106, v105) )
          v214 = v103 != 117;
      }
    }
  }
LABEL_68:
  v230 = 32;
  v232 = 0;
  v231 = 0;
  get_stkarg_area_info(&v230, v9);
  v184 = 176;
  v213 = 1;
  if ( v9 <= 0x10 )
  {
    v184 = v9;
LABEL_162:
    v9 = getinf(99);
LABEL_7:
    v213 = v9 == 256 || v9 == 176;
    if ( !v213 )
      v213 = getinf_flag(67, 2);
  }
  v226 = 0;
  ptr = nullptr;
  v236 = 0;
  v237 = 1;
  v234 = 0;
  v235 = 0;
  if ( !(unsigned __int8)tinfo_get_func_frame(&v226, a2) || !(unsigned __int8)get_tinfo_details(v226, 13, &ptr) )
  {
    v218 = 0;
    v216 = 0;
    v217 = -1;
    v204 = 0;
    goto LABEL_11;
  }
  v217 = v234;
  if ( v213 )
    v205 = n;
  else
    v205 = (unsigned __int8)sub_631AD0(*a1, 59);
  v228 = 0;
  get_frame_part(&v228, a2, 0);
  if ( v202 )
  {
    v216 = v228;
    tinfo_size = *((_QWORD *)&v228 + 1) + v231;
  }
  else
  {
    v216 = v231 + v228;
    v119 = a2[6];
    tinfo_size = v231 + v228 + v119;
    if ( !v119 )
      tinfo_size = get_tinfo_size(0, v226, 0);
  }
  v79 = *((_QWORD *)&v231 + 1) + v216;
  if ( *((_QWORD *)&v231 + 1) + v216 < 0 )
    goto LABEL_207;
  v229 = 0;
  get_frame_part(&v229, a2, 1);
  if ( v202 )
  {
    if ( (unsigned __int64)v229 < v79 )
      goto LABEL_207;
  }
  else if ( v79 < *((_QWORD *)&v229 + 1) )
  {
    goto LABEL_207;
  }
  v218 = 0;
  if ( v221 )
  {
    v217 = v234;
    if ( (_QWORD)v234 )
    {
      v140 = v234;
      while ( 1 )
      {
        v141 = (const __m128i *)((char *)ptr + 144 * v217 - 144);
        if ( v141->m128i_i64[0] < 8 * v79 )
          break;
        memset(v250, 0, 24);
        v142 = _mm_loadu_si128(v141);
        build_stkvar_xrefs(
          v250[0].m128i_i64,
          a2,
          (unsigned __int64)v142.m128i_i64[0] >> 3,
          _mm_add_epi64(_mm_srli_si128(v142, 8), v142).m128i_u64[0] >> 3);
        if ( !v250[0].m128i_i64[1] )
          goto LABEL_298;
        if ( *(_BYTE *)(v250[0].m128i_i64[0] + 16 * v250[0].m128i_i64[1] - 7) != 2 )
        {
          if ( !v214 || *(_BYTE *)(v250[0].m128i_i64[0] + 9) != 2 )
          {
LABEL_298:
            if ( v250[0].m128i_i64[0] )
            {
              v250[0].m128i_i64[1] = 0;
              qfree((void *)v250[0].m128i_i64[0]);
            }
            break;
          }
          v140 = v217 - 1;
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
      v140 = 0;
    }
    v218 = v140 - v217;
  }
  v80 = (char *)v257;
  *(_QWORD *)v197 = n - 1;
  while ( 1 )
  {
    if ( tinfo_size <= (__int64)v79 )
      goto LABEL_307;
    v88 = v226;
    v243 = nullptr;
    memset(v244, 0, sizeof(v244));
    v246 = (char *)&dword_0 + 1;
    v247 = -1;
    v248 = 0;
    v249 = 0;
    *(_QWORD *)v242 = 8 * v79;
    v245[0] = 0;
    tinfo_udt_member = find_tinfo_udt_member((int)v242);
    v90 = tinfo_udt_member;
    if ( tinfo_udt_member != -1 )
      break;
    if ( !v202 )
    {
      if ( !(_QWORD)v234
        || (v91 = _mm_loadu_si128((const __m128i *)ptr + 9 * v234 - 9),
            v79 >= _mm_add_epi64(v91, _mm_srli_si128(v91, 8)).m128i_u64[0] >> 3) )
      {
        v123 = v205;
        v124 = v205;
        goto LABEL_276;
      }
    }
    memset(&v250[0].m128i_u64[1], 0, 40);
    v253 = (char *)&dword_0 + 1;
    v254 = -1;
    v255 = 0;
    v256 = 0;
    v250[0].m128i_i64[0] = 8 * v79;
    v251 = 0;
    v252[0] = 0;
    v92 = find_tinfo_udt_member((int)v250);
    v88 = *(_QWORD *)v197 + v79;
    v93 = (*(_QWORD *)v197 + v79) & -n;
    v79 = v93;
    if ( v92 == -1 )
    {
      if ( !v202 )
      {
        if ( !under_debugger )
          interr(1113);
LABEL_392:
        BUG();
      }
      v124 = tinfo_size - v93;
      v151 = tinfo_size - v93;
      goto LABEL_317;
    }
    v94 = *((_QWORD *)ptr + 18 * v92) >> 3;
    if ( v93 < v94 )
    {
      v151 = v94 - v93;
      v124 = v151;
LABEL_317:
      v123 = v205;
      if ( (__int64)v205 << 8 < v151 || v124 <= 0 )
      {
LABEL_199:
        clear_tinfo_t(v252);
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
LABEL_203:
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
LABEL_207:
        v196 = 0;
        goto LABEL_137;
      }
      clear_tinfo_t(v252);
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
LABEL_276:
      while ( v124 > 0 )
      {
        if ( v80 >= (char *)v258 )
          break;
        v126 = v124;
        if ( v123 <= v124 )
          v126 = v123;
        if ( v213 && n > v126 )
          v126 = (unsigned int)round_down_power2((unsigned int)v126, v88);
        v88 = v184;
        *(_QWORD *)v80 = -1;
        *((_QWORD *)v80 + 2) = v126;
        v127 = v79 - v216;
        v128 = v184;
        *((_QWORD *)v80 + 1) = v79 - v216;
        if ( v184 <= 0x10 )
        {
          v200 = v126;
          v128 = getinf(99);
          v126 = v200;
          v127 = v79 - v216;
        }
        v193 = v127;
        if ( v128 != 176 && v128 != 256 )
        {
          v88 = 2;
          v199 = v126;
          v125 = getinf_flag(67, 2);
          v126 = v199;
          if ( !v125 )
            v126 = ((v199 + v193 + n - 1) & -n) - v193;
        }
        v124 -= v126;
        v80 += 24;
        v79 += v126;
      }
LABEL_185:
      clear_tinfo_t(v245);
      if ( v244[3] )
      {
        v244[4] = nullptr;
        qfree(v244[3]);
      }
      v87 = v244[0];
      if ( !v244[0] )
        goto LABEL_189;
LABEL_188:
      v244[1] = nullptr;
      qfree(v87);
      goto LABEL_189;
    }
    if ( v94 < v93 && v213 != 1 )
      goto LABEL_199;
    v79 = v94;
    clear_tinfo_t(v252);
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
    v87 = v244[0];
    if ( v244[0] )
      goto LABEL_188;
LABEL_189:
    if ( v80 >= (char *)v258 )
      goto LABEL_307;
  }
  if ( tinfo_udt_member < v217 )
  {
    if ( *(_QWORD *)v242 >> 3 != v79 )
      goto LABEL_203;
    v81 = (unsigned __int64)v243 >> 3;
    if ( (get_tinfo_property(*(_QWORD *)&v245[0], 2) & 0xF) == 0xB )
      goto LABEL_203;
    *(_QWORD *)v80 = v90;
    v82 = v79 - v216;
    v83 = v184;
    *((_QWORD *)v80 + 1) = v79 - v216;
    if ( v184 <= 0x10 )
      v83 = getinf(99);
    if ( v83 == 176 || v83 == 256 || (unsigned __int8)getinf_flag(67, 2) )
      v84 = v81;
    else
      v84 = ((v82 + *(_QWORD *)v197 + v81) & -n) - v82;
    v85 = v79 + v84;
    if ( !v213 )
    {
      v86 = -n;
      if ( (__int64)v85 <= (__int64)(v86 & (v79 + *(_QWORD *)v197 + 1LL)) )
      {
        while ( v217 != ++v90 )
        {
          v116 = (char *)ptr + 144 * v90;
          if ( *v116 >> 3 >= v85 )
            break;
          v117 = (v116[1] + *v116) >> 3;
          if ( v85 < v117 )
            goto LABEL_203;
          v81 = v117 - v79;
          v118 = v184;
          if ( v184 <= 0x10 )
          {
            v192 = v86;
            v118 = getinf(99);
            v86 = v192;
          }
          if ( v118 == 176 || v118 == 256 || (v191 = v86, v114 = getinf_flag(67, 2), v86 = v191, v114) )
            v115 = v117 - v79;
          else
            v115 = (v191 & (v81 + v82 + *(_QWORD *)v197)) - v82;
          v85 = v79 + v115;
        }
      }
    }
    *((_QWORD *)v80 + 2) = v81;
    v79 = v85;
    v80 += 24;
    goto LABEL_185;
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
  v204 = -1431655765 * ((v80 - (char *)v257) >> 3);
  if ( v202 )
  {
    v143 = -1431655765 * ((v80 - (char *)v257) >> 3) - 1;
    v144 = v143;
    if ( v143 > 0 )
    {
      v145 = v257;
      v146 = v143;
      v147 = (char *)v257 + 24 * v143 + 8;
      while ( 1 )
      {
        v148 = _mm_loadu_si128((const __m128i *)((char *)v145 + 8));
        v149 = *(_QWORD *)v145;
        --v144;
        v150 = 24 * v146;
        v145 = (_OWORD *)((char *)v145 + 24);
        v147 -= 24;
        *(__m128i *)((char *)v145 - 24) = _mm_loadu_si128((const __m128i *)((char *)v257 + v150));
        *((_QWORD *)v145 - 1) = *(_QWORD *)((char *)&v257[1] + v150);
        *(_QWORD *)((char *)v257 + v150) = v149;
        *(__m128i *)(v147 + 24) = v148;
        if ( v144 <= v143 - v144 )
          break;
        v146 = v144;
      }
    }
  }
LABEL_11:
  v224 = 1;
  memset(src, 0, sizeof(src));
  v10 = *((_DWORD *)a2 + 28);
  v239 = 0u;
  memset(&v241, 0, 24);
  v241.m256i_i8[24] = 16;
  v196 = v10;
  v240 = 0;
  if ( v10 )
  {
    v196 = sub_608790(a1, (__int64)src, (__int64)a2, 0x70u, v204 != 0);
    if ( v214 && v221 )
    {
      memset(v250, 0, sizeof(v250));
      memset(v252, 0, 24);
      v252[1].m128i_i8[8] = 16;
      v251 = 0;
      v107 = sub_608790(a1, (__int64)v250, (__int64)a2, 0xB0u, v204 != 0);
      if ( v196 <= v107 )
      {
        v196 = v107;
        si128 = _mm_load_si128(src);
        v130 = _mm_load_si128(&src[1]);
        src[0] = _mm_load_si128(v250);
        v131 = _mm_load_si128(&v250[1]);
        v132 = _mm_load_si128(&v239);
        v133 = _mm_load_si128(&v240);
        v258[0] = si128;
        v134 = _mm_load_si128((const __m128i *)&v241);
        src[1] = v131;
        v135 = _mm_load_si128(&v250[2]);
        v136 = _mm_load_si128((const __m128i *)&v241.m256i_u64[2]);
        v258[1] = v130;
        v239 = v135;
        v137 = _mm_load_si128(&v251);
        v258[2] = v132;
        v240 = v137;
        v138 = _mm_load_si128(v252);
        v258[3] = v133;
        *(__m128i *)v241.m256i_i8 = v138;
        v139 = _mm_load_si128(&v252[1]);
        v258[4] = v134;
        v258[5] = v136;
        *(__m128i *)&v241.m256i_u64[2] = v139;
        v250[0] = si128;
        v250[1] = v130;
        v250[2] = v132;
        v251 = v133;
        v252[0] = v134;
        v252[1] = v136;
      }
      if ( v252[0].m128i_i64[0] )
      {
        v252[0].m128i_i64[1] = 0;
        qfree((void *)v252[0].m128i_i64[0]);
      }
      cleanup_argloc(&v250[2].m128i_u64[1]);
      clear_tinfo_t(&v250[2]);
      v108 = (char *)v250[0].m128i_i64[0];
      if ( v250[0].m128i_i64[0] )
      {
        v109 = v250[0].m128i_i64[1];
        if ( v250[0].m128i_i64[1] )
        {
          v110 = 0;
          do
          {
            v111 = &v108[80 * v110];
            clear_tinfo_t(v111 + 64);
            v112 = *((void **)v111 + 5);
            if ( v112 )
            {
              *((_QWORD *)v111 + 6) = 0;
              qfree(v112);
            }
            v113 = *((void **)v111 + 2);
            if ( v113 )
            {
              *((_QWORD *)v111 + 3) = 0;
              qfree(v113);
            }
            ++v110;
            cleanup_argloc(v111);
            v108 = (char *)v250[0].m128i_i64[0];
          }
          while ( v109 != v110 );
        }
        v250[0].m128i_i64[1] = 0;
        qfree(v108);
      }
    }
    if ( v196 <= 0 )
      goto LABEL_125;
    v224 = 0;
    if ( v204 + v196 > 255 )
      goto LABEL_125;
  }
  else if ( v204 > 255 )
  {
    goto LABEL_128;
  }
  if ( (a2[2] & 2) != 0 )
    src[1].m128i_i32[2] |= 0x80u;
  v11 = a2[6];
  v219 = v11;
  if ( v202 )
  {
    v12 = (__int64)(v231 + v11) < 0;
    v13 = v231 + v11;
    v14 = 0;
    if ( !v12 )
      v14 = v13;
    v219 = v14;
  }
  v222 = !*(_DWORD *)(a1[2] + 4)
      && sub_609220(a1)
      && (v100 = sub_505D70((__int64)(a1 + 203), *a2)) != nullptr
      && *((_BYTE *)v100 + 43) != 2;
  if ( v204 > 0 )
  {
    v194 = 0;
    v15 = src;
    v16 = 2 * n;
    v203 = 2 * n;
    v198 = (__int64 *)v257;
    if ( n <= 2 * n )
      v16 = n;
    v215 = v16;
    while ( 2 )
    {
      v227 = 0;
      v206 = v198[2];
      v207 = *v198;
      v17 = sub_606BE0(*a1, &v227, &ptr, *v198, v206, &v224);
      if ( v17 )
      {
        if ( v17 != 2 )
        {
          v18 = v198[1];
          if ( v194 )
          {
            if ( v213 )
            {
              v19 = v240.m128i_i64[1];
              while ( v240.m128i_i64[1] < (unsigned __int64)v18 )
              {
                v26 = v227;
                v225 = 0;
                get_tinfo_size(&v225, v227, 0);
                v27 = v225;
                v20 = v225 - 1;
                if ( ((v225 - 1) & v225) != 0 )
                {
                  if ( !under_debugger )
                    interr(2858);
                  goto LABEL_392;
                }
                if ( v225 > v203 )
                {
                  if ( v184 <= 0x10 )
                  {
                    v58 = getinf(99);
                    if ( v58 == 176 || v58 == 256 )
                    {
                      v27 = 2 * n;
                      if ( n <= v203 )
                        goto LABEL_121;
                      v27 = 2 * n;
LABEL_119:
                      v59 = getinf(99);
                      v28 = v59 == 176 || v59 == 256;
                      goto LABEL_32;
                    }
                  }
                  else if ( v184 == 176 || v184 == 256 )
                  {
                    v27 = v215;
                    v20 = v215 - 1;
                    goto LABEL_34;
                  }
                  v26 = 512;
                  if ( (unsigned __int8)getinf_flag(67, 512) )
                    goto LABEL_34;
                  v27 = 2 * n;
                }
                v28 = v184 == 176 || v184 == 256;
                if ( n <= v27 )
                {
                  if ( v184 <= 0x10 )
                  {
LABEL_121:
                    v60 = getinf(99);
                    v28 = v60 == 176 || v60 == 256;
                  }
                  if ( v28 )
                    goto LABEL_44;
                  v26 = 4;
                  v57 = getinf_flag(67, 4);
                  goto LABEL_113;
                }
                if ( v184 <= 0x10 )
                  goto LABEL_119;
LABEL_32:
                if ( v28 )
                  goto LABEL_33;
                v26 = 2;
                v57 = getinf_flag(67, 2);
LABEL_113:
                v20 = v27 - 1;
                if ( !v57 )
                {
LABEL_44:
                  v27 = n;
LABEL_33:
                  v20 = v27 - 1;
                }
LABEL_34:
                v21 = (v19 + v20) & -v27;
                if ( v18 == v21 )
                  break;
                if ( v18 < v21 )
                  goto LABEL_124;
                v22 = round_down_power2((unsigned int)(v18 - v21), v26);
                v23 = src[0];
                if ( src[1].m128i_i64[0] < (unsigned __int64)(src[0].m128i_i64[1] + 1) )
                {
                  src[0].m128i_i64[0] = qvector_reserve(v15, src[0].m128i_i64[0], src[0].m128i_i64[1] + 1, 80);
                  v23 = src[0];
                }
                v24 = v23.m128i_i64[0] + 80 * v23.m128i_i64[1];
                *(_DWORD *)v24 = 0;
                *(_QWORD *)(v24 + 8) = 0;
                *(_QWORD *)(v24 + 16) = 0;
                *(_QWORD *)(v24 + 40) = 0;
                *(_QWORD *)(v24 + 64) = 0;
                *(_DWORD *)(v24 + 72) = 0;
                *(_OWORD *)(v24 + 24) = 0;
                *(_OWORD *)(v24 + 48) = 0;
                v25 = v240.m128i_i64[1];
                ++src[0].m128i_i64[1];
                cleanup_argloc(v24);
                *(_DWORD *)v24 = 1;
                *(_QWORD *)(v24 + 8) = v25;
                v250[0].m128i_i64[0] = (unsigned __int8)sub_6AA3E0(a1, v22);
                copy_tinfo_t(v24 + 64);
                clear_tinfo_t(v250);
                v240.m128i_i64[1] += (int)v22;
                v19 = v240.m128i_i64[1];
              }
            }
          }
          v36 = src[0].m128i_i64[1];
          v37 = src[0].m128i_i64[0];
          if ( src[1].m128i_i64[0] < (unsigned __int64)(src[0].m128i_i64[1] + 1) )
          {
            src[0].m128i_i64[0] = qvector_reserve(v15, src[0].m128i_i64[0], src[0].m128i_i64[1] + 1, 80);
            v36 = src[0].m128i_i64[1];
            v37 = src[0].m128i_i64[0];
          }
          v38 = v37 + 80 * v36;
          *(_DWORD *)v38 = 0;
          *(_QWORD *)(v38 + 8) = 0;
          *(_QWORD *)(v38 + 16) = 0;
          *(_QWORD *)(v38 + 40) = 0;
          *(_QWORD *)(v38 + 64) = 0;
          *(_DWORD *)(v38 + 72) = 0;
          *(_OWORD *)(v38 + 24) = 0;
          *(_OWORD *)(v38 + 48) = 0;
          v39 = src[0].m128i_i64[1] + 1;
          v40 = v207;
          ++src[0].m128i_i64[1];
          if ( v207 == -1 )
            goto LABEL_79;
          v41 = (char *)ptr + 144 * v207;
          v42 = *((_QWORD *)v41 + 3);
          if ( v42 )
          {
            v43 = *((const char **)v41 + 2);
            if ( !v43 )
              goto LABEL_79;
            v208 = *((_QWORD *)v41 + 3);
            v187 = (char *)ptr + 144 * v40;
            if ( !strncmp(*((const char **)v41 + 2), "arg_", 4u) )
              goto LABEL_79;
            v101 = strncmp(v43, "var_", 4u);
            v41 = v187;
            v42 = v208;
            if ( !v101 )
              goto LABEL_79;
          }
          else
          {
            v43 = haystack;
            if ( !haystack )
              goto LABEL_79;
          }
          v209 = v42;
          v188 = v41;
          if ( strncmp(v43, "anonymous", 9u) )
          {
            v73 = v188;
            v74 = v209;
            if ( src[0].m128i_i64[0] != src[0].m128i_i64[0] + 80 * v39 )
            {
              v189 = v15;
              v75 = src[0].m128i_i64[0];
              v76 = src[0].m128i_i64[0] + 80 * v39;
              v210 = v73;
              v223 = v74;
              do
              {
                v77 = haystack;
                if ( *(_QWORD *)(v75 + 24) )
                  v77 = *(const char **)(v75 + 16);
                if ( !strcmp(v77, v43) )
                {
                  v15 = v189;
                  goto LABEL_79;
                }
                v75 += 80;
              }
              while ( v76 != v75 );
              v73 = v210;
              v74 = v223;
              v15 = v189;
            }
            if ( (char *)(v38 + 16) != v73 + 16 )
            {
              if ( v74 )
              {
                v95 = v74 - 1;
                if ( v74 != 1 )
                {
                  v96 = *((const void **)v73 + 2);
                  v190 = v74;
                  v97 = (void *)qvector_reserve(v38 + 16, 0, v74, 1);
                  *(_QWORD *)(v38 + 16) = v97;
                  *(_QWORD *)(v38 + 24) = v190;
                  memmove(v97, v96, v95);
                  *(_BYTE *)(*(_QWORD *)(v38 + 16) + v190 - 1) = 0;
                  v98 = v227;
                  v99 = *(_QWORD *)(v38 + 24) <= 1u;
                  v227 = *(_QWORD *)(v38 + 64);
                  *(_QWORD *)(v38 + 64) = v98;
                  if ( !v99 )
                    v224 = 0;
LABEL_80:
                  cleanup_argloc(v38);
                  *(_QWORD *)(v38 + 8) = v18;
                  *(_DWORD *)v38 = 1;
                  v45 = v206 + v18;
                  if ( v240.m128i_i64[1] < v45 )
                    v240.m128i_i64[1] = v45;
                  clear_tinfo_t(&v227);
                  ++v194;
                  v198 += 3;
                  if ( v194 != v204 )
                    continue;
                  goto LABEL_83;
                }
              }
            }
          }
LABEL_79:
          v44 = v227;
          v227 = 0;
          *(_QWORD *)(v38 + 64) = v44;
          goto LABEL_80;
        }
        if ( src[0].m128i_i64[1] )
        {
          v222 |= 8u;
          clear_tinfo_t(&v227);
          goto LABEL_83;
        }
      }
      break;
    }
LABEL_124:
    clear_tinfo_t(&v227);
    goto LABEL_125;
  }
LABEL_83:
  v240.m128i_i64[1] = (v240.m128i_i64[1] + n - 1) & -n;
  if ( src[0].m128i_i64[1] > 0xFFuLL )
    goto LABEL_125;
  v46 = a2[2];
  v47 = -1;
  if ( v219 | v46 & 0x4000 )
    v47 = v219;
  v220 = v47;
  if ( v218 && v214 != 1 )
  {
    if ( (unsigned int)sub_606BE0(*a1, v239.m128i_i64, &ptr, v217, *((_QWORD *)ptr + 18 * v217 + 1) >> 3, &v224) == 1 )
    {
      v120 = (*((_QWORD *)ptr + 18 * v217) >> 3) - v216;
      cleanup_argloc(&v239.m128i_u64[1]);
      v240.m128i_i64[0] = v120;
      v239.m128i_i32[2] = 1;
      if ( v204 )
        v224 = 0;
      goto LABEL_265;
    }
    v46 = a2[2];
  }
  if ( (v46 & 1) != 0 )
  {
    src[1].m128i_i32[2] |= 2u;
    v250[0].m128i_i64[0] = 1;
    copy_tinfo_t(&v239);
    clear_tinfo_t(v250);
  }
  else
  {
    aflags = get_aflags(*a2);
    v49 = 25;
    if ( (aflags & 0x4000000) == 0 )
      v49 = (unsigned __int8)getinf_flag(3, 4) == 0 ? 7LL : 5LL;
    v250[0].m128i_i64[0] = v49;
    copy_tinfo_t(&v239);
    clear_tinfo_t(v250);
    if ( (*(_BYTE *)(a1[2] + 9) & 0x10) == 0 || !(unsigned __int8)calc_retloc(src, v250) )
      goto LABEL_125;
  }
  if ( (v221 & (unsigned __int8)v214) != 0 && v196 )
  {
    v50 = v241.m256i_i8[24] & 0xF0;
    if ( (v241.m256i_i8[24] & 0xF0) != 0xC0 )
    {
LABEL_98:
      v51 = v50;
      goto LABEL_99;
    }
    v51 = src[1].m128i_u32[3];
    goto LABEL_99;
  }
LABEL_265:
  v51 = guess_func_cc((int)src, v220, v222);
  v121 = v241.m256i_i8[24] & 0xF;
  if ( (v51 & 0xFFFFFF0F) == 0 && v51 != 192 )
  {
    src[1].m128i_i32[3] = 0;
    v241.m256i_i8[24] = v51 | v121;
    v50 = (v51 | v121) & 0xF0;
    if ( v50 == 0xC0 )
      goto LABEL_268;
    goto LABEL_98;
  }
  src[1].m128i_i32[3] = v51;
  v241.m256i_i8[24] = v121 | 0xC0;
LABEL_99:
  if ( v51 - 208 <= 0x2F )
  {
    if ( !v239.m128i_i32[2] )
      goto LABEL_125;
    if ( !*((_DWORD *)a2 + 28) )
      goto LABEL_269;
    v52 = src[0].m128i_i32[2] - 1;
    if ( src[0].m128i_i32[2] - 1 >= 0 )
    {
      v53 = 80LL * v52;
      do
      {
        if ( (unsigned int)(*(_DWORD *)(v53 + src[0].m128i_i64[0]) - 3) <= 1
          && !sub_673F50(a2, *(unsigned __int16 *)(v53 + src[0].m128i_i64[0] + 8)) )
        {
          v54 = (_QWORD *)(v53 + src[0].m128i_i64[0]);
          clear_tinfo_t(v53 + src[0].m128i_i64[0] + 64);
          v55 = (void *)v54[5];
          if ( v55 )
          {
            v54[6] = 0;
            qfree(v55);
          }
          v56 = (void *)v54[2];
          if ( v56 )
          {
            v54[3] = 0;
            qfree(v56);
          }
          cleanup_argloc(v54);
          memmove(v54, v54 + 10, src[0].m128i_i64[0] + 80 * src[0].m128i_i64[1]-- - (_QWORD)v54 - 80);
        }
        --v52;
        v53 -= 80;
      }
      while ( v52 != -1 );
    }
    v51 = guess_func_cc((int)src, v220, v222);
    v152 = v241.m256i_i8[24] & 0xF;
    if ( (v51 & 0xFFFFFF0F) != 0 || v51 == 192 )
    {
      src[1].m128i_i32[3] = v51;
      v241.m256i_i8[24] = v152 | 0xC0;
    }
    else
    {
      src[1].m128i_i32[3] = 0;
      v241.m256i_i8[24] = v51 | v152;
      v51 = ((unsigned __int8)v51 | v152) & 0xF0;
      if ( (v241.m256i_i8[24] & 0xF0) == 0xC0 )
        goto LABEL_268;
    }
  }
  if ( v51 <= 0x10 )
LABEL_268:
    v51 = getinf(99);
LABEL_269:
  if ( *((_DWORD *)a2 + 28) || !v204 )
    goto LABEL_271;
  if ( ((v51 - 112) & 0xFFFFFFEF) != 0 )
  {
    switch ( v51 )
    {
      case 0xB0u:
        if ( !v214 )
          goto LABEL_271;
        v153 = 176;
        break;
      case 0x90u:
        v153 = 144;
        break;
      case 0x40u:
        v153 = 64;
        break;
      case 0x30u:
        v153 = 112;
        if ( v222 )
          goto LABEL_271;
        break;
      default:
        goto LABEL_271;
    }
  }
  else
  {
    v153 = v51;
  }
  na = v51;
  *(_QWORD *)v242 = 0;
  v243 = nullptr;
  memset(v244, 0, 40);
  sub_3792E0(0x7D4u, v242, v153);
  if ( !v244[0] )
    goto LABEL_373;
  if ( !(unsigned __int8)calc_arglocs(src) )
    goto LABEL_373;
  v154 = src[0].m128i_i64[0];
  v155 = src[0].m128i_i64[0] + 80 * src[0].m128i_i64[1];
  if ( src[0].m128i_i64[0] == v155 )
    goto LABEL_373;
  while ( *(_DWORD *)v154 != 2 )
  {
    if ( (unsigned int)(*(_DWORD *)v154 - 3) <= 1 )
      goto LABEL_359;
LABEL_353:
    v154 += 80;
    if ( v155 == v154 )
      goto LABEL_373;
  }
  v156 = *(_QWORD *)(v154 + 8);
  v157 = *(_DWORD **)v156;
  v158 = *(_QWORD *)v156 + 24LL * *(_QWORD *)(v156 + 8);
  if ( *(_QWORD *)v156 == v158 )
    goto LABEL_353;
  while ( (unsigned int)(*v157 - 3) > 1 )
  {
    v157 += 6;
    if ( (_DWORD *)v158 == v157 )
      goto LABEL_353;
  }
LABEL_359:
  memset(v250, 0, sizeof(v250));
  v159 = *a1;
  memset(v252, 0, 24);
  v252[1].m128i_i8[8] = 16;
  v251 = 0;
  sub_6070F0(v159, v250[0].m128i_i64, (__int64)a2, &v243, (int)v244[0], 1u);
  v160 = 80 * v250[0].m128i_i64[1];
  i = na;
  v162 = 0xCCCCCCCCCCCCCCCDLL * ((80 * v250[0].m128i_i64[1]) >> 4);
  v163 = v162;
  if ( v162 )
  {
    v164 = src[0].m128i_i64[1];
    v165 = v250[0].m128i_i64[0];
    v166 = (_DWORD *)src[0].m128i_i64[0];
    v167 = v162 + src[0].m128i_i64[1];
    if ( src[1].m128i_i64[0] < v167 )
    {
      nc = 80 * v250[0].m128i_i64[1];
      v175 = i;
      src[0].m128i_i64[0] = qvector_reserve(src, src[0].m128i_i64[0], v167, 80);
      v166 = (_DWORD *)src[0].m128i_i64[0];
      v160 = nc;
      v164 = src[0].m128i_i64[1];
      i = v175;
    }
    nd = i;
    v174 = v165 + v160;
    memmove((char *)v166 + v160, v166, 80 * v164);
    for ( i = nd; v174 != v165; *(v166 - 2) = v168 )
    {
      *v166 = 0;
      nb = i;
      copy_argloc(v166, v165);
      *((_QWORD *)v166 + 2) = 0;
      v172 = nb;
      *(_OWORD *)(v166 + 6) = 0;
      if ( *(_QWORD *)(v165 + 24) )
      {
        v185 = nb;
        ng = *(_QWORD *)(v165 + 24);
        v169 = (void *)qalloc_or_throw(ng);
        *((_QWORD *)v166 + 2) = v169;
        *((_QWORD *)v166 + 4) = ng;
        memcpy(v169, *(const void **)(v165 + 16), ng);
        v172 = v185;
        *((_QWORD *)v166 + 3) = ng;
      }
      *((_QWORD *)v166 + 5) = 0;
      *((_OWORD *)v166 + 3) = 0;
      if ( *(_QWORD *)(v165 + 48) )
      {
        v186 = v172;
        ne = *(_QWORD *)(v165 + 48);
        v171 = (void *)qalloc_or_throw(ne);
        *((_QWORD *)v166 + 5) = v171;
        *((_QWORD *)v166 + 7) = ne;
        memcpy(v171, *(const void **)(v165 + 40), ne);
        v172 = v186;
        *((_QWORD *)v166 + 6) = ne;
      }
      *((_QWORD *)v166 + 8) = 0;
      nf = v172;
      copy_tinfo_t(v166 + 16);
      v168 = *(_DWORD *)(v165 + 72);
      v166 += 20;
      v165 += 80;
      i = nf;
    }
    src[0].m128i_i64[1] += v163;
  }
  if ( i == 48 )
  {
    src[1].m128i_i32[3] = 0;
    v241.m256i_i8[24] = v241.m256i_i8[24] & 0xF | 0x70;
  }
  sub_5E5B70((char **)v250);
LABEL_373:
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
LABEL_271:
  if ( src[0].m128i_i64[1] <= 0x100uLL
    && (sub_605CE0((__int64)src), (unsigned __int8)create_tinfo(a3, 12, 12, v122))
    && ((*((_BYTE *)a2 + 17) & 0x40) == 0
     || (tinfo_property = get_tinfo_property(*a3, 21), tinfo_property == -1)
     || tinfo_property == a2[6]) )
  {
    v196 = 2 - v224;
  }
  else
  {
LABEL_125:
    v196 = 0;
  }
  if ( v241.m256i_i64[0] )
  {
    v241.m256i_i64[1] = 0;
    qfree((void *)v241.m256i_i64[0]);
  }
LABEL_128:
  cleanup_argloc(&v239.m128i_u64[1]);
  clear_tinfo_t(&v239);
  v61 = (char *)src[0].m128i_i64[0];
  if ( src[0].m128i_i64[0] )
  {
    v62 = src[0].m128i_i64[1];
    if ( src[0].m128i_i64[1] )
    {
      v63 = 0;
      do
      {
        v64 = &v61[80 * v63];
        clear_tinfo_t(v64 + 64);
        v65 = *((void **)v64 + 5);
        if ( v65 )
        {
          *((_QWORD *)v64 + 6) = 0;
          qfree(v65);
        }
        v66 = *((void **)v64 + 2);
        if ( v66 )
        {
          *((_QWORD *)v64 + 3) = 0;
          qfree(v66);
        }
        ++v63;
        cleanup_argloc(v64);
        v61 = (char *)src[0].m128i_i64[0];
      }
      while ( v62 != v63 );
    }
    src[0].m128i_i64[1] = 0;
    qfree(v61);
  }
LABEL_137:
  v67 = (char *)ptr;
  if ( ptr )
  {
    v68 = v234;
    if ( (_QWORD)v234 )
    {
      v69 = v212;
      do
      {
        v70 = &v67[144 * v69];
        clear_tinfo_t(v70 + 64);
        v71 = *((void **)v70 + 5);
        if ( v71 )
        {
          *((_QWORD *)v70 + 6) = 0;
          qfree(v71);
        }
        v72 = *((void **)v70 + 2);
        if ( v72 )
        {
          *((_QWORD *)v70 + 3) = 0;
          qfree(v72);
        }
        ++v69;
        v67 = (char *)ptr;
      }
      while ( v68 != v69 );
    }
    *(_QWORD *)&v234 = 0;
    qfree(v67);
  }
  clear_tinfo_t(&v226);
  return (unsigned int)v196;
}
