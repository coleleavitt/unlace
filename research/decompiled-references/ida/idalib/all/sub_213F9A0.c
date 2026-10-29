__int64 __fastcall sub_213F9A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __m128 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  void **v13; // r14
  __m128 *p_s1; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  const void **v18; // rbp
  const void **v19; // r15
  __m128 *v20; // r12
  void *v21; // r13
  int v22; // eax
  __m128i si128; // xmm1
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // ebp
  _QWORD *v28; // r14
  _QWORD *v29; // r12
  __int64 v30; // r13
  __int64 v31; // rbx
  void *v32; // rdi
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // r12
  _QWORD *v41; // rbx
  void *v42; // rdi
  __int64 v43; // rbp
  unsigned int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r13
  __int64 v53; // rdx
  unsigned int v54; // ecx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  size_t v60; // rax
  size_t v61; // rbp
  const void *v62; // r12
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __m128i v70; // xmm2
  size_t v71; // rdx
  int v72; // ebp
  int v73; // eax
  size_t v74; // r12
  __int64 v75; // rax
  const void *v76; // rdi
  size_t v77; // r12
  __int64 v78; // rax
  const void *v79; // rdi
  size_t v80; // r12
  __int64 v81; // rax
  const void *v82; // rdi
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __m128i v96; // xmm3
  __int64 v97; // rsi
  __int64 v98; // rdx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  void *v107; // rax
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // r15
  unsigned __int64 v115; // r12
  __int64 i; // rbp
  int v117; // eax
  bool v118; // dl
  char v119; // al
  __int64 v120; // r13
  unsigned __int64 v121; // rax
  __int64 v122; // rdi
  __m128i v123; // xmm4
  __m128i v124; // xmm5
  bool v125; // zf
  char v126; // al
  unsigned __int64 v127; // rbx
  unsigned __int64 v128; // rax
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rax
  int v131; // ebp
  __int64 v132; // r14
  unsigned __int64 v133; // r13
  unsigned __int64 v134; // r12
  int v135; // ebx
  __int64 v136; // rbp
  unsigned __int64 v137; // rbx
  unsigned __int64 v138; // r12
  _BYTE *v139; // r10
  void **v140; // r14
  __int64 v141; // r13
  unsigned __int64 v142; // r15
  int v143; // ebp
  size_t v144; // r13
  const void **v145; // rbx
  unsigned __int64 v146; // r14
  _BYTE *v147; // r12
  _BYTE *v148; // r10
  __int64 v149; // rbp
  __int64 v150; // rcx
  int v151; // r8d
  __int64 v153; // [rsp+8h] [rbp-300h]
  const void **v154; // [rsp+10h] [rbp-2F8h]
  int v155; // [rsp+18h] [rbp-2F0h]
  char v156; // [rsp+1Eh] [rbp-2EAh]
  char v157; // [rsp+1Fh] [rbp-2E9h]
  void *v158; // [rsp+20h] [rbp-2E8h]
  __int64 v159; // [rsp+28h] [rbp-2E0h]
  __int64 v160; // [rsp+28h] [rbp-2E0h]
  void **v161; // [rsp+30h] [rbp-2D8h]
  __int64 v162; // [rsp+30h] [rbp-2D8h]
  void **v163; // [rsp+38h] [rbp-2D0h]
  __int64 v164; // [rsp+40h] [rbp-2C8h]
  __int64 v165; // [rsp+48h] [rbp-2C0h]
  __m128i v166; // [rsp+50h] [rbp-2B8h] BYREF
  __m128 s1; // [rsp+60h] [rbp-2A8h] BYREF
  void *v168[2]; // [rsp+70h] [rbp-298h] BYREF
  void *v169; // [rsp+80h] [rbp-288h]
  __m128i v170; // [rsp+90h] [rbp-278h] BYREF
  const char *v171; // [rsp+A0h] [rbp-268h]
  __int16 v172; // [rsp+B0h] [rbp-258h]
  __m128i v173; // [rsp+C0h] [rbp-248h] BYREF
  __int16 v174; // [rsp+E0h] [rbp-228h]
  __m128i v175; // [rsp+F0h] [rbp-218h] BYREF
  __m128i v176; // [rsp+100h] [rbp-208h]
  __int16 v177; // [rsp+110h] [rbp-1F8h]
  __m128i v178[2]; // [rsp+120h] [rbp-1E8h] BYREF
  __int16 v179; // [rsp+140h] [rbp-1C8h]
  __m128i v180[3]; // [rsp+150h] [rbp-1B8h] BYREF
  _BYTE v181[24]; // [rsp+180h] [rbp-188h] BYREF
  void *v182; // [rsp+198h] [rbp-170h] BYREF
  unsigned int v183; // [rsp+1A0h] [rbp-168h]
  int v184; // [rsp+1B0h] [rbp-158h] BYREF
  __m128i v185; // [rsp+1B8h] [rbp-150h]
  void *v186; // [rsp+1C8h] [rbp-140h] BYREF
  unsigned int v187; // [rsp+1D0h] [rbp-138h]
  __m128i v188; // [rsp+1E0h] [rbp-128h] BYREF
  __m128i v189; // [rsp+1F0h] [rbp-118h]
  __int16 v190; // [rsp+200h] [rbp-108h]
  __m128i v191; // [rsp+210h] [rbp-F8h] BYREF
  __m128i v192; // [rsp+220h] [rbp-E8h] BYREF
  unsigned __int64 v193; // [rsp+230h] [rbp-D8h] BYREF
  void *v194; // [rsp+238h] [rbp-D0h]
  void *v195; // [rsp+240h] [rbp-C8h]
  void **v196; // [rsp+248h] [rbp-C0h] BYREF
  __int128 v197; // [rsp+250h] [rbp-B8h]
  char v198; // [rsp+260h] [rbp-A8h]
  int v199; // [rsp+264h] [rbp-A4h]
  void *s2[2]; // [rsp+270h] [rbp-98h] BYREF
  void *v201[2]; // [rsp+280h] [rbp-88h] BYREF
  unsigned __int64 v202; // [rsp+290h] [rbp-78h]
  void *v203; // [rsp+298h] [rbp-70h]
  void *v204; // [rsp+2A0h] [rbp-68h]
  void **v205; // [rsp+2A8h] [rbp-60h]
  __int128 v206; // [rsp+2B0h] [rbp-58h]
  char v207; // [rsp+2C0h] [rbp-48h]
  int v208; // [rsp+2C4h] [rbp-44h]

  v6 = a1;
  v7 = (__m128 *)&v166;
  v166 = 0u;
  if ( (unsigned __int8)sub_213B1B0(a1, (__m128 *)&v166, a3, a4, a5, a6) )
  {
    s2[0] = "expected identifier in '.macro' directive";
    LOWORD(v202) = 259;
    return (unsigned int)sub_21543E0(a1, s2, 0, 0);
  }
  v12 = **(_DWORD **)(a1 + 48);
  if ( v12 == 26 )
  {
    sub_2132C70(a1, (__m128 *)&v166);
    v12 = **(_DWORD **)(a1 + 48);
  }
  v13 = s2;
  v169 = nullptr;
  *(_OWORD *)v168 = 0;
  if ( v12 != 9 )
  {
    while ( 1 )
    {
      p_s1 = (__m128 *)s2;
      s2[0] = nullptr;
      s2[1] = nullptr;
      *(_OWORD *)v201 = 0;
      v202 = 0;
      LOWORD(v203) = 0;
      if ( (unsigned __int8)sub_213B1B0(a1, (__m128 *)s2, v8, 0, v10, v11) )
      {
        LOWORD(v193) = 259;
        v191.m128i_i64[0] = (__int64)"expected identifier in '.macro' directive";
        v27 = sub_21543E0(a1, &v191, 0, 0);
        goto LABEL_36;
      }
      v18 = (const void **)v168[0];
      v19 = (const void **)v168[1];
      if ( v168[0] != v168[1] )
      {
        v20 = (__m128 *)s2[0];
        v21 = s2[1];
        while ( 1 )
        {
          if ( v18[1] == v21 )
          {
            if ( !v21 )
              break;
            p_s1 = v20;
            if ( !memcmp(*v18, v20, (size_t)v21) )
              break;
          }
          v18 += 6;
          if ( v19 == v18 )
            goto LABEL_12;
        }
        *(_QWORD *)v181 = v20;
        v188.m128i_i64[0] = (__int64)"'";
        v190 = 259;
        LOWORD(v183) = 261;
        v178[0].m128i_i64[0] = (__int64)"' has multiple parameters named '";
        v179 = 259;
        v177 = 1283;
        v175.m128i_i64[0] = (__int64)"macro '";
        *(_QWORD *)&v181[8] = v21;
        v176 = v166;
        sub_A41580(v180, &v175, v178, v15, v16, v17);
        sub_A41580((__m128i *)&v184, v180, (const __m128i *)v181, v34, v35, v36);
        sub_A41580(&v191, (const __m128i *)&v184, &v188, v37, v38, v39);
        v27 = sub_21543E0(a1, &v191, 0, 0);
LABEL_36:
        v40 = v201[1];
        v41 = v201[0];
        if ( v201[1] != v201[0] )
        {
          do
          {
            if ( *((_DWORD *)v41 + 8) > 0x40u )
            {
              v42 = (void *)v41[3];
              if ( v42 )
                operator delete[](v42);
            }
            v41 += 5;
          }
          while ( v40 != v41 );
          v41 = v201[0];
        }
        if ( v41 )
          operator delete(v41);
        goto LABEL_22;
      }
LABEL_12:
      v22 = **(_DWORD **)(a1 + 48);
      if ( v22 == 10 )
        break;
LABEL_13:
      if ( v22 == 28 )
      {
        sub_2132C70(a1, p_s1);
        v43 = *(_QWORD *)(a1 + 184);
        v44 = sub_21321E0(a1, (__int64)v201, 0);
        if ( (_BYTE)v44 )
        {
          v27 = v44;
          goto LABEL_36;
        }
        if ( (_BYTE)v203 )
        {
          v188.m128i_i64[0] = (__int64)"'";
          v190 = 259;
          *(__m128i *)v181 = v166;
          LOWORD(v183) = 261;
          v178[0].m128i_i64[0] = (__int64)"' in macro '";
          v175.m128i_i64[0] = (__int64)"pointless default value for required parameter '";
          v179 = 259;
          v176 = *(__m128i *)s2;
          v177 = 1283;
          sub_A41580(v180, &v175, v178, v45, 261, 259);
          sub_A41580((__m128i *)&v184, v180, (const __m128i *)v181, v46, v47, v48);
          sub_A41580(&v191, (const __m128i *)&v184, &v188, v49, v50, v51);
          sub_212CE20(a1, v43, (__int64)&v191, nullptr, 0);
        }
      }
      v7 = (__m128 *)v168[1];
      if ( v168[1] == v169 )
      {
        sub_21306C0((__int64)v168, (const __m128i *)v168[1], (const __m128i *)s2);
      }
      else
      {
        si128 = _mm_load_si128((const __m128i *)s2);
        v7 = (__m128 *)((char *)v168[1] + 48);
        *((_QWORD *)v168[1] + 2) = 0;
        v7[-2].m128_u64[1] = 0;
        v7[-1].m128_u64[0] = 0;
        v24 = v201[0];
        v7[-3] = (__m128)si128;
        v7[-2].m128_u64[0] = (unsigned __int64)v24;
        v201[0] = nullptr;
        v7[-2].m128_u64[1] = (unsigned __int64)v201[1];
        v201[1] = nullptr;
        v7[-1].m128_u64[0] = v202;
        v202 = 0;
        v7[-1].m128_i16[4] = (__int16)v203;
        v168[1] = v7;
      }
      if ( **(_DWORD **)(a1 + 48) == 26 )
        sub_2132C70(a1, v7);
      sub_212DC20((__int64 *)v201);
      if ( **(_DWORD **)(a1 + 48) == 9 )
        goto LABEL_59;
      if ( v168[0] != v168[1] && *((_BYTE *)v168[1] - 7) )
      {
        v191.m128i_i64[0] = (__int64)"' should be the last parameter";
        v188.m128i_i64[0] = (__int64)"vararg parameter '";
        v25 = *((_QWORD *)v168[1] - 6);
        LOWORD(v193) = 259;
        v189.m128i_i64[0] = v25;
        v26 = *((_QWORD *)v168[1] - 5);
        v190 = 1283;
        v189.m128i_i64[1] = v26;
        sub_A41580((__m128i *)s2, &v188, &v191, (__int64)"vararg parameter '", v10, v11);
        v27 = sub_2153E90(a1, *(_QWORD *)(a1 + 184), s2, 0, 0);
        goto LABEL_22;
      }
    }
    sub_2132C70(a1, p_s1);
    p_s1 = &s1;
    s1 = 0u;
    v52 = *(_QWORD *)(a1 + 184);
    if ( (unsigned __int8)sub_213B1B0(a1, &s1, v53, v54, v55, v56) )
    {
      v190 = 259;
      v188.m128i_i64[0] = (__int64)"'";
      LOWORD(v183) = 261;
      *(__m128i *)v181 = v166;
      v179 = 259;
      v178[0].m128i_i64[0] = (__int64)"' in macro '";
      v175.m128i_i64[0] = (__int64)"missing parameter qualifier for '";
      v177 = 1283;
      v176 = *(__m128i *)s2;
      sub_A41580(v180, &v175, v178, v57, v58, v59);
      sub_A41580((__m128i *)&v184, v180, (const __m128i *)v181, v108, v109, v110);
      sub_A41580(&v191, (const __m128i *)&v184, &v188, v111, v112, v113);
      v27 = sub_2153E90(a1, v52, &v191, 0, 0);
      goto LABEL_36;
    }
    v60 = j__strlen("req");
    v61 = s1.m128_u64[1];
    v62 = (const void *)s1.m128_u64[0];
    if ( v60 == s1.m128_u64[1] )
    {
      if ( !s1.m128_u64[1] || (p_s1 = (__m128 *)"req", !memcmp((const void *)s1.m128_u64[0], "req", s1.m128_u64[1])) )
      {
        LOBYTE(v203) = 1;
        goto LABEL_57;
      }
      if ( v61 != j__strlen("vararg") )
        goto LABEL_102;
    }
    else
    {
      if ( j__strlen("vararg") != v61 )
      {
LABEL_102:
        v170.m128i_i64[0] = (__int64)v62;
        v188.m128i_i64[0] = (__int64)"'";
        v170.m128i_i64[1] = v61;
        *(__m128i *)v181 = v166;
        v190 = 259;
        v178[0].m128i_i64[0] = (__int64)"' in macro '";
        v174 = 261;
        LOWORD(v183) = 261;
        v173 = *(__m128i *)s2;
        v179 = 259;
        v172 = 773;
        v171 = " is not a valid parameter qualifier for '";
        sub_A41580(&v175, &v170, &v173, v63, v64, v65);
        sub_A41580(v180, &v175, v178, v83, v84, v85);
        sub_A41580((__m128i *)&v184, v180, (const __m128i *)v181, v86, v87, v88);
        sub_A41580(&v191, (const __m128i *)&v184, &v188, v89, v90, v91);
        v27 = sub_2153E90(a1, v52, &v191, 0, 0);
        goto LABEL_36;
      }
      if ( !v61 )
        goto LABEL_56;
    }
    p_s1 = (__m128 *)"vararg";
    if ( memcmp(v62, "vararg", v61) )
      goto LABEL_102;
LABEL_56:
    BYTE1(v203) = 1;
LABEL_57:
    v22 = **(_DWORD **)(a1 + 48);
    goto LABEL_13;
  }
LABEL_59:
  sub_21318A0(a1 + 48, (__int64)v7, v8, v9, v10, v11);
  *(_DWORD *)v181 = 0;
  *(_OWORD *)&v181[8] = 0u;
  v183 = 1;
  v182 = nullptr;
  v66 = sub_2153C00(a1);
  v70 = _mm_loadu_si128((const __m128i *)(v66 + 8));
  v184 = *(_DWORD *)v66;
  v71 = *(unsigned int *)(v66 + 32);
  v185 = v70;
  v187 = v71;
  if ( (unsigned int)v71 > 0x40 )
  {
    v7 = (__m128 *)(v66 + 24);
    sub_2205510(&v186);
  }
  else
  {
    v186 = *(void **)(v66 + 24);
  }
  v72 = 0;
  while ( 1 )
  {
    v73 = **(_DWORD **)(v6 + 48);
    if ( v73 != 1 )
      break;
LABEL_68:
    sub_21318A0(v6 + 48, (__int64)v7, v71, v67, v68, v69);
  }
  while ( 1 )
  {
    if ( !v73 )
    {
      s2[0] = "no matching '.endmacro' in definition";
      LOWORD(v202) = 259;
LABEL_91:
      v27 = sub_2153E90(v6, a2, s2, 0, 0);
      goto LABEL_92;
    }
    if ( v73 != 2 )
    {
      if ( v73 == 8 )
      {
        v7 = *(__m128 **)(v6 + 184);
        sub_213F7A0(v6, v7, 1);
      }
      goto LABEL_67;
    }
    v74 = j__strlen(".endm");
    v75 = sub_2153C00(v6);
    if ( *(_DWORD *)v75 == 2 )
    {
      v76 = *(const void **)(v75 + 8);
      v71 = *(_QWORD *)(v75 + 16);
    }
    else
    {
      v76 = (const void *)sub_212C8F0(v75);
    }
    if ( v71 != v74 || v71 && (v7 = (__m128 *)".endm", memcmp(v76, ".endm", v71)) )
    {
      v77 = j__strlen(".endmacro");
      v78 = sub_2153C00(v6);
      if ( *(_DWORD *)v78 == 2 )
      {
        v79 = *(const void **)(v78 + 8);
        v71 = *(_QWORD *)(v78 + 16);
      }
      else
      {
        v79 = (const void *)sub_212C8F0(v78);
      }
      if ( v71 != v77 || v71 && (v7 = (__m128 *)".endmacro", memcmp(v79, ".endmacro", v71)) )
      {
        v80 = j__strlen(".macro");
        v81 = sub_2153C00(v6);
        if ( *(_DWORD *)v81 == 2 )
        {
          v82 = *(const void **)(v81 + 8);
          v71 = *(_QWORD *)(v81 + 16);
        }
        else
        {
          v82 = (const void *)sub_212C8F0(v81);
        }
        if ( v80 == v71 )
        {
          if ( !v80 || (v7 = (__m128 *)".macro", !memcmp(v82, ".macro", v80)) )
            ++v72;
        }
        goto LABEL_67;
      }
    }
    if ( !v72 )
      break;
    --v72;
LABEL_67:
    sub_21319B0(v6, (void **)v7, v71, v67, v68, v69);
    v73 = **(_DWORD **)(v6 + 48);
    if ( v73 == 1 )
      goto LABEL_68;
  }
  v92 = sub_2153C00(v6);
  v96 = _mm_loadu_si128((const __m128i *)(v92 + 8));
  v97 = v92 + 24;
  *(_DWORD *)v181 = *(_DWORD *)v92;
  *(__m128i *)&v181[8] = v96;
  if ( v183 <= 0x40 && (v98 = *(unsigned int *)(v92 + 32), (unsigned int)v98 <= 0x40) )
  {
    v107 = *(void **)(v92 + 24);
    v183 = v98;
    v182 = v107;
  }
  else
  {
    sub_22056A0(&v182, v97);
  }
  sub_21318A0(v6 + 48, v97, v98, v93, v94, v95);
  if ( **(_DWORD **)(v6 + 48) != 9 )
  {
    v191.m128i_i64[0] = (__int64)"' directive";
    LOWORD(v193) = 259;
    if ( *(_DWORD *)v181 == 2 )
    {
      v101 = *(_QWORD *)&v181[16];
      v102 = *(_QWORD *)&v181[8];
    }
    else
    {
      v102 = sub_212C8F0((__int64)v181);
      v101 = v103;
    }
    v189.m128i_i64[0] = v102;
    v190 = 1283;
    v188.m128i_i64[0] = (__int64)"unexpected token in '";
    v189.m128i_i64[1] = v101;
    sub_A41580((__m128i *)s2, &v188, &v191, v102, v99, v100);
    v27 = sub_21543E0(v6, s2, 0, 0);
    goto LABEL_92;
  }
  if ( sub_212FFF0(*(_QWORD *)(v6 + 16), v166.m128i_i64[0], v166.m128i_i64[1]) )
  {
    LOWORD(v193) = 259;
    v191.m128i_i64[0] = (__int64)"' is already defined";
    v188.m128i_i64[0] = (__int64)"macro '";
    v190 = 1283;
    v189 = v166;
    sub_A41580((__m128i *)s2, &v188, &v191, v104, v105, v106);
    goto LABEL_91;
  }
  v114 = sub_2124B50((__int64)&v184);
  v165 = v114;
  v115 = sub_2124B50((__int64)v181) - v114;
  v154 = (const void **)v168[0];
  v158 = v168[1];
  v164 = v115;
  v155 = -1431655765 * (((char *)v168[1] - (char *)v168[0]) >> 4);
  if ( v155 )
  {
    v156 = 0;
    v157 = 0;
    v153 = v6;
    while ( v115 )
    {
      for ( i = 0; ; ++i )
      {
        v119 = *(_BYTE *)(v114 + i);
        v120 = i + 1;
        if ( v119 == 92 )
          break;
        if ( v119 == 36 )
        {
          if ( v120 == v115 )
            goto LABEL_129;
          v117 = *(unsigned __int8 *)(v114 + v120);
          v118 = (_BYTE)v117 == 110 || (_BYTE)v117 == 36;
          if ( v118 )
          {
            if ( v115 == i )
              goto LABEL_129;
            v125 = (_BYTE)v117 == 36;
            v126 = v156;
            if ( !v125 )
              v126 = v118;
            v156 = v126;
LABEL_139:
            v127 = i + 2;
            goto LABEL_140;
          }
          if ( (unsigned int)(v117 - 48) <= 9 )
          {
            if ( v115 == i )
              goto LABEL_129;
            v156 = 1;
            goto LABEL_139;
          }
        }
        else if ( v120 == v115 )
        {
          goto LABEL_129;
        }
      }
      if ( v120 == v115 || v115 == i )
        break;
      v130 = (unsigned int)(i + 1);
      v159 = i;
      v161 = v13;
      v131 = i + 1;
      v132 = v120;
      v133 = v115;
      do
      {
        v134 = v130;
        v135 = *(unsigned __int8 *)(v114 + v130);
        if ( !isalnum(v135) )
        {
          if ( (unsigned __int8)(v135 - 36) > 0x3Bu )
            break;
          v150 = 0x800000000000401LL;
          if ( !_bittest64(&v150, (unsigned int)(v135 - 36)) )
            break;
        }
        v130 = (unsigned int)++v131;
      }
      while ( v133 != v131 );
      v136 = v159;
      v137 = v134;
      v138 = v133;
      v139 = (_BYTE *)(v114 + v132);
      v140 = v161;
      v141 = v159;
      v160 = v114;
      v142 = v137;
      v162 = v136;
      v143 = 0;
      v144 = v137 + ~v141;
      v163 = v140;
      v145 = v154;
      v146 = v138;
      v147 = v139;
      while ( (const void *)v144 != v145[1] || v144 && memcmp(*v145, v147, v144) )
      {
        ++v143;
        v145 += 6;
        if ( v155 == v143 )
        {
          v127 = v142;
          v148 = v147;
          v114 = v160;
          v115 = v146;
          v149 = v162;
          v13 = v163;
          goto LABEL_153;
        }
      }
      v127 = v142;
      v148 = v147;
      v151 = v143;
      v115 = v146;
      v114 = v160;
      v149 = v162;
      v13 = v163;
      if ( v155 != v151 )
      {
        v157 = 1;
        goto LABEL_140;
      }
LABEL_153:
      if ( *v148 == 40 && *(_BYTE *)(v114 + v149 + 2) == 41 )
        v127 = v149 + 3;
LABEL_140:
      if ( v115 < v127 )
      {
        v129 = 0;
      }
      else
      {
        v128 = v115;
        v115 = v127;
        v129 = v128 - v127;
      }
      v114 += v115;
      v115 = v129;
    }
LABEL_129:
    v6 = v153;
    if ( !v157 && v156 )
    {
      s2[0] = "macro defined with named parameters which are not used in macro body, possible positional parameter found "
              "in body which will have no effect";
      LOWORD(v202) = 259;
      sub_212CE20(v153, a2, (__int64)v13, nullptr, 0);
      v158 = v168[1];
      v154 = (const void **)v168[0];
    }
  }
  v27 = 0;
  *(_OWORD *)v168 = 0;
  v192.m128i_i64[0] = v165;
  v191 = v166;
  v192.m128i_i64[1] = v164;
  *(_OWORD *)s2 = 0;
  v193 = (unsigned __int64)v154;
  v197 = 0;
  v194 = v158;
  v195 = v169;
  v169 = nullptr;
  v201[0] = nullptr;
  v196 = nullptr;
  v198 = 0;
  v199 = 0;
  sub_212DB80((__int64)v13);
  v121 = v193;
  v122 = *(_QWORD *)(v6 + 16);
  v123 = _mm_load_si128(&v191);
  v193 = 0;
  v202 = v121;
  v124 = _mm_load_si128(&v192);
  *(__m128i *)s2 = v123;
  v203 = v194;
  *(__m128i *)v201 = v124;
  v204 = v195;
  v194 = nullptr;
  v205 = v196;
  v195 = nullptr;
  v206 = v197;
  v196 = nullptr;
  v197 = 0u;
  v207 = v198;
  v208 = v199;
  sub_212FD20(v122, (__int64 *)v166.m128i_i64[0], (__int64 *)v166.m128i_i64[1], (const __m128i *)v13);
  sub_9B4A30((void ***)v13 + 7);
  sub_212DB80((__int64)(v13 + 4));
  sub_9B4A30(&v196);
  sub_212DB80((__int64)&v193);
LABEL_92:
  if ( v187 > 0x40 && v186 )
    operator delete[](v186);
  if ( v183 > 0x40 && v182 )
    operator delete[](v182);
LABEL_22:
  v28 = v168[1];
  v29 = v168[0];
  if ( v168[1] != v168[0] )
  {
    do
    {
      while ( 1 )
      {
        v30 = v29[3];
        v31 = v29[2];
        if ( v30 != v31 )
        {
          do
          {
            if ( *(_DWORD *)(v31 + 32) > 0x40u )
            {
              v32 = *(void **)(v31 + 24);
              if ( v32 )
                operator delete[](v32);
            }
            v31 += 40;
          }
          while ( v30 != v31 );
          v31 = v29[2];
        }
        if ( !v31 )
          break;
        v29 += 6;
        operator delete((void *)v31);
        if ( v29 == v28 )
          goto LABEL_31;
      }
      v29 += 6;
    }
    while ( v28 != v29 );
LABEL_31:
    v29 = v168[0];
  }
  if ( v29 )
    operator delete(v29);
  return v27;
}
