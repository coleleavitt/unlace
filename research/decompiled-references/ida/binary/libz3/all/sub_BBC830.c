__m128i *__fastcall sub_BBC830(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __m128 v5; // xmm0
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // r15d
  int v9; // eax
  int v10; // r10d
  __m128i v11; // xmm1
  unsigned __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r10
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r13
  __m128i v28; // xmm7
  _DWORD *v29; // rax
  __int64 v30; // r11
  __int64 v31; // r11
  __int64 v32; // rdx
  __m128i v33; // xmm0
  _QWORD *v34; // rax
  __int64 v35; // rdi
  __m128i v36; // xmm1
  __int64 v37; // rax
  __int64 v38; // r13
  __m128i v39; // xmm6
  _QWORD *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // r13
  __m128i v43; // xmm7
  __m128i v44; // xmm0
  __int64 v45; // rdi
  __int64 v46; // rax
  __m128i v47; // xmm5
  _QWORD *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rax
  __m128i v53; // xmm5
  _QWORD *v54; // rax
  __int64 v55; // rax
  _DWORD *v56; // rdx
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  int *v59; // rdi
  int v60; // r8d
  int v61; // r9d
  __int64 v62; // r11
  __int64 v63; // r11
  __int64 v64; // rdx
  __int64 v65; // r10
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // r13
  __m128i v75; // xmm6
  __int64 v76; // r11
  __int64 v77; // r11
  __int64 v78; // rdx
  __int64 v79; // r10
  __int64 v80; // rax
  __int64 v81; // rdi
  __m128i v82; // xmm6
  __m128i v83; // xmm0
  __int64 v84; // rdi
  __int64 v85; // rax
  __m128i v86; // xmm4
  __int64 v87; // r13
  __int64 v88; // rax
  __m128i v89; // xmm0
  __int64 v90; // rdi
  __int64 v91; // rax
  __m128i v92; // xmm6
  __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // r10
  __int64 v96; // rax
  __int64 v97; // r13
  __m128 *v98; // r9
  __int64 v99; // rax
  __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rdi
  __int64 v103; // rax
  __m128i v104; // xmm5
  __int64 *v105; // r13
  unsigned __int64 v106; // rdx
  __int64 *v107; // rax
  __int64 v108; // rsi
  __int64 *v110; // r13
  __int64 v111; // rdx
  __int64 v112; // rax
  __m128i si128; // xmm3
  _QWORD *v114; // rax
  unsigned int v115; // edx
  __int64 v116; // rsi
  _DWORD *v117; // rax
  int v118; // edx
  int v119; // ecx
  __int64 v120; // rax
  __int64 v121; // r13
  __m128i v122; // xmm6
  _QWORD *v123; // rax
  __int64 v124; // rdi
  __int64 v125; // rax
  __m128i v126; // xmm4
  __int64 v127; // r13
  unsigned __int64 v128; // rdx
  __int64 v129; // r13
  int v130; // [rsp+0h] [rbp-388h]
  __m128i *v131; // [rsp+8h] [rbp-380h]
  __int64 v132; // [rsp+10h] [rbp-378h]
  __int64 v133; // [rsp+10h] [rbp-378h]
  __int64 v134; // [rsp+10h] [rbp-378h]
  int v135[2]; // [rsp+18h] [rbp-370h] BYREF
  __m128i v136; // [rsp+20h] [rbp-368h] BYREF
  int v137[2]; // [rsp+30h] [rbp-358h]
  int *v138; // [rsp+38h] [rbp-350h]
  int v139[4]; // [rsp+40h] [rbp-348h] BYREF
  __int64 *v140; // [rsp+50h] [rbp-338h]
  __m128 *v141; // [rsp+58h] [rbp-330h]
  __int64 v142; // [rsp+60h] [rbp-328h]
  __int64 v143; // [rsp+68h] [rbp-320h] BYREF
  __int64 v144; // [rsp+78h] [rbp-310h] BYREF
  __m128i v145; // [rsp+80h] [rbp-308h] BYREF
  __int64 v146; // [rsp+90h] [rbp-2F8h] BYREF
  _QWORD v147[2]; // [rsp+98h] [rbp-2F0h] BYREF
  _QWORD v148[2]; // [rsp+A8h] [rbp-2E0h] BYREF
  __int64 v149; // [rsp+B8h] [rbp-2D0h] BYREF
  _QWORD v150[2]; // [rsp+C0h] [rbp-2C8h] BYREF
  _QWORD v151[2]; // [rsp+D0h] [rbp-2B8h] BYREF
  __int64 v152; // [rsp+E0h] [rbp-2A8h] BYREF
  _QWORD v153[3]; // [rsp+E8h] [rbp-2A0h] BYREF
  __int64 v154; // [rsp+100h] [rbp-288h] BYREF
  __int64 v155; // [rsp+108h] [rbp-280h] BYREF
  __int64 v156; // [rsp+110h] [rbp-278h] BYREF
  char v157[8]; // [rsp+118h] [rbp-270h] BYREF
  __int64 v158; // [rsp+120h] [rbp-268h] BYREF
  __int64 v159; // [rsp+128h] [rbp-260h] BYREF
  int v160[4]; // [rsp+130h] [rbp-258h] BYREF
  __m128i v161; // [rsp+140h] [rbp-248h] BYREF
  __m128i v162; // [rsp+150h] [rbp-238h] BYREF
  __m128i v163; // [rsp+160h] [rbp-228h] BYREF
  __m128i v164; // [rsp+170h] [rbp-218h] BYREF
  __m128i v165[2]; // [rsp+180h] [rbp-208h] BYREF
  __m128i v166; // [rsp+1A0h] [rbp-1E8h] BYREF
  __m128i v167; // [rsp+1B0h] [rbp-1D8h] BYREF
  __m128i v168[2]; // [rsp+1C0h] [rbp-1C8h] BYREF
  __m128i v169; // [rsp+1E0h] [rbp-1A8h] BYREF
  __m128i v170; // [rsp+1F0h] [rbp-198h] BYREF
  __m128i v171; // [rsp+200h] [rbp-188h] BYREF
  __m128i v172; // [rsp+210h] [rbp-178h] BYREF
  __int64 v173; // [rsp+220h] [rbp-168h] BYREF
  unsigned int v174; // [rsp+228h] [rbp-160h]
  __int64 v175; // [rsp+22Ch] [rbp-15Ch]
  __m128 v176; // [rsp+240h] [rbp-148h]
  __int64 v177; // [rsp+250h] [rbp-138h]
  __m128 v178; // [rsp+260h] [rbp-128h]
  __int64 v179; // [rsp+270h] [rbp-118h]
  __m128 v180; // [rsp+280h] [rbp-108h]
  __int64 *v181; // [rsp+290h] [rbp-F8h]
  __m128 v182; // [rsp+2A0h] [rbp-E8h]
  __int64 v183; // [rsp+2B0h] [rbp-D8h]
  __m128 v184; // [rsp+2C0h] [rbp-C8h]
  __int64 v185; // [rsp+2D0h] [rbp-B8h]
  __m128 v186; // [rsp+2E0h] [rbp-A8h]
  __int64 v187; // [rsp+2F0h] [rbp-98h]
  __m128 v188; // [rsp+300h] [rbp-88h]
  __int64 v189; // [rsp+310h] [rbp-78h]
  __m128 v190; // [rsp+320h] [rbp-68h] BYREF
  _QWORD v191[11]; // [rsp+330h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a2 + 24);
  v131 = a1;
  v143 = a3;
  v158 = v4;
  v159 = 0;
  v5.m128_u64[0] = 0;
  v6 = sub_186B270(0x80u);
  v175 = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 32) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 80) = 0;
  *(_OWORD *)(v6 + 96) = 0;
  *(_OWORD *)(v6 + 112) = 0;
  v138 = (int *)&v144;
  v144 = 0;
  sub_BB70A0(&v144, &v143);
  v7 = v144;
  v145 = 0u;
  if ( v144 )
  {
    *(_QWORD *)v137 = v4;
    v8 = 8;
    *(_QWORD *)v135 = 0;
    v132 = 0;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v7 - 4);
      if ( !v9 )
        goto LABEL_6;
      while ( 1 )
      {
        v136.m128i_i64[0] = *(_QWORD *)(v7 + 8LL * (unsigned int)(v9 - 1));
        if ( !sub_BB0340((_QWORD *)v6, v8, v136.m128i_i64[0]) )
          break;
        *(_DWORD *)(v7 - 4) = v10;
        v9 = *(_DWORD *)(v7 - 4);
        if ( !v9 )
          goto LABEL_6;
      }
      if ( *(_WORD *)(v136.m128i_i64[0] + 4) )
        break;
      *(_QWORD *)v139 = &v145;
      v140 = &v145.m128i_i64[1];
      if ( (unsigned __int8)sub_1408FA0(a2 + 1848, v136.m128i_i64[0], &v145)
        && sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0])
        && sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[1]) )
      {
        v145.m128i_i64[0] = *(_QWORD *)(v15 + 8);
        v123 = sub_BB0340((_QWORD *)v6, v8, v14);
        v124 = *(_QWORD *)(a2 + 24);
        v145.m128i_i64[1] = v123[1];
        v125 = sub_15E1B70(v124);
        v38 = v125;
        v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v125);
        if ( v125 )
        {
          ++*(_DWORD *)(v125 + 8);
          sub_BB0560(v132, v4);
          ++*(_DWORD *)(v38 + 8);
          v146 = v38;
        }
        else
        {
          sub_BB0560(v132, v4);
          v146 = 0;
        }
        sub_BB70A0(&v159, &v146);
        v126 = _mm_load_si128(&v136);
        v173 = v6;
        v174 = v8;
        v162 = v126;
        sub_686B20((__int64)&v173, &v162);
        goto LABEL_54;
      }
      if ( (unsigned __int8)sub_1409000(a2 + 1848, v136.m128i_i64[0], *(_QWORD *)v139, v140)
        && sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0])
        && sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[1]) )
      {
        v145.m128i_i64[0] = *(_QWORD *)(v17 + 8);
        v87 = sub_BB0340((_QWORD *)v6, v8, v16)[1];
        v145.m128i_i64[1] = v87;
        v88 = sub_993400(a2 + 1832, 0);
        v89 = _mm_loadl_epi64(&v145);
        v90 = *(_QWORD *)(a2 + 1736);
        v177 = v87;
        v5 = (__m128)_mm_unpacklo_epi64(v89, (__m128i)(unsigned __int64)v88);
        v176 = v5;
        v91 = sub_15E1AF0(v90);
        v38 = v91;
        v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v91);
        if ( v91 )
        {
          ++*(_DWORD *)(v91 + 8);
          sub_BB0560(v132, v4);
          ++*(_DWORD *)(v38 + 8);
          v147[0] = v38;
        }
        else
        {
          sub_BB0560(v132, v4);
          v147[0] = 0;
        }
        sub_BB70A0(&v159, v147);
        v92 = _mm_load_si128(&v136);
        v173 = v6;
        v174 = v8;
        v163 = v92;
        sub_686B20((__int64)&v173, &v163);
        goto LABEL_54;
      }
      if ( (unsigned __int8)sub_1409060(a2 + 1848, v136.m128i_i64[0], *(_QWORD *)v139, v140)
        && sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0])
        && sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[1]) )
      {
        v145.m128i_i64[0] = *(_QWORD *)(v19 + 8);
        v93 = sub_BB0340((_QWORD *)v6, v8, v18)[1];
        v94 = *(_QWORD *)(a2 + 1736);
        v147[1] = v95;
        v145.m128i_i64[1] = v93;
        v96 = sub_15E1AF0(v94);
        v97 = v96;
        if ( v96 )
          ++*(_DWORD *)(v96 + 8);
        sub_BB0560(v132, v4);
        v133 = sub_15E1B70(*(_QWORD *)(a2 + 1832));
        v98 = (__m128 *)sub_993400(a2 + 1832, 0);
        v99 = *(_QWORD *)(a2 + 24);
        v100 = *(_QWORD *)(a2 + 1832);
        v141 = v98;
        *(_QWORD *)v139 = v99;
        v140 = (__int64 *)v145.m128i_i64[1];
        sub_15E1B70(v100);
        v101 = sub_15E1BF0(v139[0]);
        v102 = *(_QWORD *)(a2 + 1736);
        v5 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(&v145), (__m128i)(unsigned __int64)v101);
        v179 = v133;
        v178 = v5;
        v103 = sub_15E1AF0(v102);
        v132 = v103;
        v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v103);
        if ( v103 )
        {
          ++*(_DWORD *)(v103 + 8);
          sub_BB0560(v97, v4);
          ++*(_DWORD *)(v132 + 8);
          v148[0] = v132;
        }
        else
        {
          sub_BB0560(v97, v4);
          v148[0] = 0;
        }
        sub_BB70A0(&v159, v148);
        v104 = _mm_load_si128(&v136);
        v173 = v6;
        v174 = v8;
        v164 = v104;
        sub_686B20((__int64)&v173, &v164);
LABEL_35:
        --*(_DWORD *)(v7 - 4);
        v6 = v173;
        v8 = v174;
      }
      else if ( (unsigned __int8)sub_1408E70(a2 + 1848, v136.m128i_i64[0], *(_QWORD *)v139, v140)
             && sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0])
             && sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[1]) )
      {
        v145.m128i_i64[0] = *(_QWORD *)(v21 + 8);
        v145.m128i_i64[1] = sub_BB0340((_QWORD *)v6, v8, v20)[1];
        v141 = *(__m128 **)(a2 + 24);
        sub_993400(a2 + 1832, 1u);
        v22 = sub_15E1B70(*(_QWORD *)(a2 + 1832));
        *(_QWORD *)v139 = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        v23 = *(_QWORD *)(a2 + 1736);
        v142 = *(_QWORD *)(a2 + 24);
        v148[1] = v145.m128i_i64[0];
        sub_15E1AF0(v23);
        v24 = (__int64 *)sub_15E1B70(*(_QWORD *)(a2 + 1832));
        v140 = v24;
        if ( v24 )
          ++*((_DWORD *)v24 + 2);
        v25 = *(_QWORD *)(a2 + 1736);
        v181 = v140;
        v5 = _mm_loadh_ps((const double *)v139);
        v180 = v5;
        v26 = sub_15E1AF0(v25);
        v27 = v26;
        v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v26);
        if ( v26 )
        {
          ++*(_DWORD *)(v26 + 8);
          sub_BB0560(v132, v4);
          ++*(_DWORD *)(v27 + 8);
          v149 = v27;
        }
        else
        {
          sub_BB0560(v132, v4);
          v149 = 0;
        }
        sub_BB70A0(&v159, &v149);
        v28 = _mm_load_si128(&v136);
        v173 = v6;
        v174 = v8;
        v165[0] = v28;
        sub_686B20((__int64)&v173, v165);
        --*(_DWORD *)(v7 - 4);
        v6 = v173;
        v8 = v174;
        sub_BB0560((__int64)v140, v142);
        sub_BB0560(*(__int64 *)v139, (__int64)v141);
        v132 = v27;
      }
      else
      {
        if ( !*(_WORD *)(v136.m128i_i64[0] + 4) )
        {
          v29 = *(_DWORD **)(*(_QWORD *)(v136.m128i_i64[0] + 16) + 24LL);
          if ( v29 )
          {
            if ( *(_DWORD *)(a2 + 1744) == *v29 && v29[1] == 10 && *(_DWORD *)(v136.m128i_i64[0] + 24) == 2 )
            {
              v30 = *(_QWORD *)(v136.m128i_i64[0] + 40);
              v145.m128i_i64[0] = *(_QWORD *)(v136.m128i_i64[0] + 32);
              v145.m128i_i64[1] = v30;
              *(_QWORD *)v139 = sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0]);
              if ( *(_QWORD *)v139 )
              {
                if ( sub_BB0340((_QWORD *)v6, v8, v31) )
                {
                  v33 = _mm_loadl_epi64((const __m128i *)(*(_QWORD *)v139 + 8LL));
                  v145.m128i_i64[0] = v33.m128i_i64[0];
                  v34 = sub_BB0340((_QWORD *)v6, v8, v32);
                  v35 = *(_QWORD *)(a2 + 1736);
                  v36 = _mm_loadl_epi64((const __m128i *)(v34 + 1));
                  v145.m128i_i64[1] = v36.m128i_i64[0];
                  v5 = (__m128)_mm_unpacklo_epi64(v33, v36);
                  v165[1] = (__m128i)v5;
                  v37 = sub_15E1AF0(v35);
                  v38 = v37;
                  v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v37);
                  if ( v37 )
                    ++*(_DWORD *)(v37 + 8);
                  sub_BB0560(v132, v4);
                  v150[0] = v38;
                  if ( v38 )
                    ++*(_DWORD *)(v38 + 8);
                  sub_BB70A0(&v159, v150);
                  v39 = _mm_load_si128(&v136);
                  v173 = v6;
                  v174 = v8;
                  v166 = v39;
                  sub_686B20((__int64)&v173, &v166);
                  goto LABEL_54;
                }
              }
            }
          }
        }
        *(_QWORD *)v139 = v157;
        sub_180C5A0(v157, "seq.unit-inv");
        if ( (unsigned __int8)sub_1407860(a2 + 1848, *(_QWORD *)v139, v136.m128i_i64[0])
          && (v145.m128i_i64[0] = *(_QWORD *)(v136.m128i_i64[0] + 32),
              (v54 = sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0])) != nullptr)
          && (v55 = v54[1], !*(_WORD *)(v55 + 4))
          && (v56 = *(_DWORD **)(*(_QWORD *)(v55 + 16) + 24LL)) != nullptr
          && *(_DWORD *)(a2 + 1744) == *v56
          && !v56[1]
          && *(_DWORD *)(v55 + 24) == 1 )
        {
          v57 = _mm_loadl_epi64(&v136);
          v145.m128i_i64[1] = *(_QWORD *)(v55 + 32);
          v38 = v145.m128i_i64[1];
          v58 = _mm_unpacklo_epi64(v57, (__m128i)v145.m128i_u64[1]);
          if ( v145.m128i_i64[1] )
            ++*(_DWORD *)(v145.m128i_i64[1] + 8);
          v136 = v58;
          sub_BB0560(v132, v4);
          v5 = (__m128)_mm_load_si128(&v136);
          v173 = v6;
          v174 = v8;
          v167 = (__m128i)v5;
          sub_686B20((__int64)&v173, &v167);
LABEL_54:
          --*(_DWORD *)(v7 - 4);
          v6 = v173;
          v132 = v38;
          v8 = v174;
        }
        else
        {
          if ( (unsigned __int8)sub_1407860(a2 + 1848, a2 + 2056, v136.m128i_i64[0]) )
          {
            v145.m128i_i64[0] = *(_QWORD *)(v136.m128i_i64[0] + 32);
            v40 = sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0]);
            if ( v40 )
            {
              v145.m128i_i64[0] = v40[1];
              *(_QWORD *)v139 = a2 + 1832;
              sub_993400(a2 + 1832, 1u);
              v41 = *(_QWORD *)(a2 + 1736);
              v150[1] = v145.m128i_i64[0];
              sub_15E1AF0(v41);
              v42 = sub_15E1B70(*(_QWORD *)(a2 + 1832));
              v43 = (__m128i)(unsigned __int64)sub_993400(*(__int64 *)v139, 0);
              v44 = _mm_loadl_epi64(&v145);
              v45 = *(_QWORD *)(a2 + 1736);
              v183 = v42;
              v5 = (__m128)_mm_unpacklo_epi64(v44, v43);
              v182 = v5;
              v46 = sub_15E1AF0(v45);
              v38 = v46;
              v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v46);
              if ( v46 )
              {
                ++*(_DWORD *)(v46 + 8);
                sub_BB0560(v132, v4);
                ++*(_DWORD *)(v38 + 8);
                v151[0] = v38;
              }
              else
              {
                sub_BB0560(v132, v4);
                v151[0] = 0;
              }
              sub_BB70A0(&v159, v151);
              v47 = _mm_load_si128(&v136);
              v173 = v6;
              v174 = v8;
              v168[0] = v47;
              sub_686B20((__int64)&v173, v168);
              goto LABEL_54;
            }
          }
          if ( (unsigned __int8)sub_1407860(a2 + 1848, a2 + 2064, v136.m128i_i64[0]) )
          {
            v145.m128i_i64[0] = *(_QWORD *)(v136.m128i_i64[0] + 32);
            v48 = sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0]);
            if ( v48 )
            {
              v145.m128i_i64[0] = v48[1];
              sub_993400(a2 + 1832, 1u);
              v49 = *(_QWORD *)(a2 + 1736);
              v151[1] = v145.m128i_i64[0];
              sub_15E1AF0(v49);
              v50 = sub_15E1B70(*(_QWORD *)(a2 + 1832));
              v51 = *(_QWORD *)(a2 + 1736);
              v5 = (__m128)_mm_unpacklo_epi64(_mm_loadl_epi64(&v145), (__m128i)(unsigned __int64)v50);
              v168[1] = (__m128i)v5;
              v52 = sub_15E1AF0(v51);
              v38 = v52;
              v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v52);
              if ( v52 )
              {
                ++*(_DWORD *)(v52 + 8);
                sub_BB0560(v132, v4);
                ++*(_DWORD *)(v38 + 8);
                v152 = v38;
              }
              else
              {
                sub_BB0560(v132, v4);
                v152 = 0;
              }
              sub_BB70A0(&v159, &v152);
              v53 = _mm_load_si128(&v136);
              v173 = v6;
              v174 = v8;
              v169 = v53;
              sub_686B20((__int64)&v173, &v169);
              goto LABEL_54;
            }
          }
          if ( (unsigned __int8)sub_1407860(a2 + 1848, a2 + 2072, v136.m128i_i64[0]) )
          {
            v76 = *(_QWORD *)(v136.m128i_i64[0] + 40);
            v145.m128i_i64[0] = *(_QWORD *)(v136.m128i_i64[0] + 32);
            v145.m128i_i64[1] = v76;
            if ( sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0]) )
            {
              if ( sub_BB0340((_QWORD *)v6, v8, v77) )
              {
                v145.m128i_i64[0] = *(_QWORD *)(v79 + 8);
                v145.m128i_i64[1] = sub_BB0340((_QWORD *)v6, v8, v78)[1];
                v80 = sub_993400(a2 + 1832, 0);
                v81 = *(_QWORD *)(a2 + 1736);
                v185 = v80;
                v184 = _mm_loadh_ps((const double *)&v145.m128i_i64[1]);
                *(_QWORD *)v139 = sub_15E1AF0(v81);
                v82 = (__m128i)(unsigned __int64)sub_993400(a2 + 1832, 0);
                v83 = _mm_loadl_epi64(&v145);
                v84 = *(_QWORD *)(a2 + 1736);
                v187 = *(_QWORD *)v139;
                v5 = (__m128)_mm_unpacklo_epi64(v83, v82);
                v186 = v5;
                v85 = sub_15E1AF0(v84);
                v38 = v85;
                v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v85);
                if ( v85 )
                {
                  ++*(_DWORD *)(v85 + 8);
                  sub_BB0560(v132, v4);
                  ++*(_DWORD *)(v38 + 8);
                  v153[0] = v38;
                }
                else
                {
                  sub_BB0560(v132, v4);
                  v153[0] = 0;
                }
                sub_BB70A0(&v159, v153);
                v86 = _mm_load_si128(&v136);
                v173 = v6;
                v174 = v8;
                v170 = v86;
                sub_686B20((__int64)&v173, &v170);
                goto LABEL_54;
              }
            }
          }
          v59 = (int *)(a2 + 1848);
          if ( (unsigned __int8)sub_1407860(a2 + 1848, a2 + 2080, v136.m128i_i64[0])
            && (v59 = (int *)v6,
                v62 = *(_QWORD *)(v136.m128i_i64[0] + 40),
                v145.m128i_i64[0] = *(_QWORD *)(v136.m128i_i64[0] + 32),
                v145.m128i_i64[1] = v62,
                sub_BB0340((_QWORD *)v6, v8, v145.m128i_i64[0]))
            && (v59 = (int *)v6, sub_BB0340((_QWORD *)v6, v8, v63)) )
          {
            v145.m128i_i64[0] = *(_QWORD *)(v65 + 8);
            v145.m128i_i64[1] = sub_BB0340((_QWORD *)v6, v8, v64)[1];
            v140 = *(__int64 **)(a2 + 24);
            v66 = sub_993400(a2 + 1832, 0);
            v67 = *(_QWORD *)(a2 + 1736);
            v189 = v66;
            v188 = _mm_loadh_ps((const double *)&v145.m128i_i64[1]);
            sub_15E1AF0(v67);
            v68 = *(_QWORD *)(a2 + 1736);
            v153[1] = v145.m128i_i64[1];
            sub_15E1AF0(v68);
            v69 = sub_15E1B70(*(_QWORD *)(a2 + 1832));
            *(_QWORD *)v139 = v69;
            if ( v69 )
              ++*(_DWORD *)(v69 + 8);
            v70 = *(_QWORD *)(a2 + 1736);
            v153[2] = v145.m128i_i64[0];
            v71 = sub_15E1AF0(v70);
            v72 = *(_QWORD *)(a2 + 1736);
            v191[0] = v71;
            v5 = _mm_loadh_ps((const double *)v139);
            v190 = v5;
            v73 = sub_15E1AF0(v72);
            v74 = v73;
            v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v73);
            if ( v73 )
            {
              ++*(_DWORD *)(v73 + 8);
              sub_BB0560(v132, v4);
              ++*(_DWORD *)(v74 + 8);
              v154 = v74;
            }
            else
            {
              sub_BB0560(v132, v4);
              v154 = 0;
            }
            sub_BB70A0(&v159, &v154);
            v75 = _mm_load_si128(&v136);
            v173 = v6;
            v174 = v8;
            v171 = v75;
            sub_686B20((__int64)&v173, &v171);
            --*(_DWORD *)(v7 - 4);
            v6 = v173;
            v8 = v174;
            sub_BB0560(*(__int64 *)v139, (__int64)v140);
            v132 = v74;
          }
          else
          {
            if ( *(_QWORD *)v135 )
            {
              v105 = *(__int64 **)v135;
              v106 = *(_QWORD *)v135 + 8LL * *(unsigned int *)(*(_QWORD *)v135 - 4LL);
              v107 = *(__int64 **)v135;
              if ( *(_QWORD *)v135 < v106 )
              {
                do
                {
                  v108 = *v105;
                  if ( *v105 )
                  {
                    if ( (*(_DWORD *)(v108 + 8))-- == 1 )
                    {
                      v59 = *(int **)v137;
                      *(_QWORD *)v139 = v106;
                      sub_15D7BC0(*(_QWORD *)v137, v108);
                      v106 = *(_QWORD *)v139;
                    }
                  }
                  ++v105;
                }
                while ( (unsigned __int64)v105 < v106 );
                v107 = *(__int64 **)v135;
              }
              *((_DWORD *)v107 - 1) = 0;
            }
            v110 = (__int64 *)(v136.m128i_i64[0] + 32);
            v111 = *(unsigned int *)(v136.m128i_i64[0] + 24);
            v140 = (__int64 *)(v136.m128i_i64[0] + 32 + 8 * v111);
            if ( 8 * v111 )
            {
              v141 = &v190;
              *(__m128 *)v139 = _mm_loadh_ps((const double *)v135);
              do
              {
                v190.m128_u64[0] = *v110;
                v114 = sub_BB0340((_QWORD *)v6, v8, v190.m128_i64[0]);
                if ( v114 )
                {
                  v112 = v114[1];
                  v155 = v112;
                  if ( v112 )
                    ++*(_DWORD *)(v112 + 8);
                  v59 = &v160[2];
                  *(__m128i *)v160 = _mm_load_si128((const __m128i *)v139);
                  sub_BB70A0(&v160[2], &v155);
                  si128 = _mm_load_si128((const __m128i *)v160);
                  *(_QWORD *)v137 = *(_QWORD *)v160;
                  *(__m128i *)v139 = si128;
                  *(_QWORD *)v135 = *(_QWORD *)&v160[2];
                }
                else
                {
                  v59 = v138;
                  v144 = v7;
                  sub_BB70A0(v138, v141);
                  v7 = v144;
                }
                ++v110;
              }
              while ( v140 != v110 );
              if ( *(_QWORD *)v135 )
                v115 = *(_DWORD *)(*(_QWORD *)v135 - 4LL);
              else
                v115 = 0;
              if ( v115 < *(_DWORD *)(v136.m128i_i64[0] + 24) )
                goto LABEL_119;
              goto LABEL_111;
            }
            if ( !(_DWORD)v111 )
            {
LABEL_111:
              v116 = *(_QWORD *)(v136.m128i_i64[0] + 16);
              if ( !*(_WORD *)(v136.m128i_i64[0] + 4) )
              {
                v117 = *(_DWORD **)(v116 + 24);
                if ( v117 )
                {
                  if ( *(_DWORD *)(a2 + 1720) == *v117 && v117[1] == 67 )
                  {
                    sub_180B130(v59);
                    if ( (unsigned __int8)sub_186A530(*(double *)v5.m128_u64) )
                    {
                      sub_186A4C0(*(double *)v5.m128_u64);
                      v127 = sub_180B150(v59, v116);
                      std::__ostream_insert<char,std::char_traits<char>>();
                      sub_1606360(&v190, v136.m128i_i64[0], *(_QWORD *)(a2 + 24), 0, 0, 0);
                      sub_160E8B0(v127, &v190);
                      std::operator<<<std::char_traits<char>>();
                      sub_18572D0(v191);
                      sub_186A500(v191, "\n");
                    }
                    else
                    {
                      v129 = sub_180B150(v59, v116);
                      std::__ostream_insert<char,std::char_traits<char>>();
                      sub_1606360(&v190, v136.m128i_i64[0], *(_QWORD *)(a2 + 24), 0, 0, 0);
                      sub_160E8B0(v129, &v190);
                      std::operator<<<std::char_traits<char>>();
                      sub_18572D0(v191);
                    }
                    v128 = *(_QWORD *)(a2 + 24);
                    v12 = *(_QWORD *)(v128 + 864);
                    *v131 = _mm_unpacklo_epi64((__m128i)v12, (__m128i)v128);
                    if ( v12 )
                      goto LABEL_7;
                    goto LABEL_8;
                  }
                }
              }
              --*(_DWORD *)(v7 - 4);
              if ( *(_QWORD *)v135 )
              {
                v118 = *(_DWORD *)(*(_QWORD *)v135 - 4LL);
                v119 = v135[0];
              }
              else
              {
                v119 = 0;
                v118 = 0;
              }
              v120 = sub_15DC610(
                       *(_QWORD *)(a2 + 24),
                       v116,
                       v118,
                       v119,
                       v60,
                       v61,
                       v130,
                       (int)v131,
                       v132,
                       v135[0],
                       v136.m128i_i32[0],
                       v136.m128i_i8[8],
                       v137[0],
                       (int)v138,
                       v139[0],
                       *(void **)&v139[2]);
              v121 = v120;
              v136 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v136), (__m128i)(unsigned __int64)v120);
              if ( v120 )
              {
                ++*(_DWORD *)(v120 + 8);
                sub_BB0560(v134, v4);
                ++*(_DWORD *)(v121 + 8);
                v156 = v121;
              }
              else
              {
                sub_BB0560(v134, v4);
                v156 = 0;
              }
              sub_BB70A0(&v159, &v156);
              v122 = _mm_load_si128(&v136);
              v173 = v6;
              v174 = v8;
              v172 = v122;
              sub_686B20((__int64)&v173, &v172);
              v132 = v121;
              v6 = v173;
              v8 = v174;
LABEL_119:
              if ( !v7 )
                goto LABEL_6;
            }
          }
        }
      }
    }
    v173 = v6;
    v5 = (__m128)_mm_unpacklo_epi64((__m128i)v136.m128i_u64[0], (__m128i)v136.m128i_u64[0]);
    v174 = v8;
    v161 = (__m128i)v5;
    sub_686B20((__int64)&v173, &v161);
    goto LABEL_35;
  }
  *(_QWORD *)v135 = 0;
  v8 = 8;
  *(_QWORD *)v137 = v4;
  v132 = 0;
LABEL_6:
  v11 = _mm_loadl_epi64((const __m128i *)(a2 + 24));
  v12 = sub_BB0340((_QWORD *)v6, v8, v143)[1];
  *v131 = _mm_unpacklo_epi64((__m128i)v12, v11);
  if ( v12 )
LABEL_7:
    ++*(_DWORD *)(v12 + 8);
LABEL_8:
  if ( v7 )
    sub_186B220((void *)(v7 - 8));
  if ( v6 )
    sub_186B220((void *)v6);
  *(_QWORD *)v160 = *(_QWORD *)v137;
  *(_QWORD *)&v160[2] = *(_QWORD *)v135;
  sub_2334C0((__int64 *)v160);
  sub_2334C0(&v158);
  sub_BB0560(v132, v4);
  return v131;
}

