__int64 __fastcall sub_3FFBC0(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // eax
  __int64 v6; // rax
  unsigned __int16 v7; // dx
  __int64 v8; // rsi
  int v9; // eax
  __m128i *v10; // rax
  __m128i si128; // xmm6
  char v12; // si
  char v13; // cl
  char v14; // al
  int v15; // ecx
  bool v16; // zf
  int v17; // eax
  __int16 v18; // dx
  int v19; // r13d
  int v20; // r14d
  __int64 v21; // rax
  int v22; // r12d
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rsi
  bool v27; // al
  int v28; // ecx
  __int64 v29; // rdx
  __m128i *v30; // rsi
  int v31; // eax
  int v32; // ecx
  unsigned __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  unsigned int v36; // eax
  __m128i *v37; // rbx
  unsigned int v38; // r12d
  __int64 v39; // rdi
  __int64 v40; // r15
  unsigned __int8 v41; // al
  unsigned int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 (__fastcall *v45)(__int64, int); // rax
  int v46; // eax
  int v47; // r15d
  int v48; // eax
  __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 (__fastcall *v53)(__int64, int); // rax
  int v54; // r15d
  unsigned int v55; // eax
  int tinfo_size; // eax
  int v57; // eax
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 (__fastcall *v60)(__int64, int); // rax
  int v61; // r15d
  int v62; // eax
  const char *v63; // r15
  size_t v64; // rax
  size_t v65; // r13
  size_t v66; // r12
  __int64 v67; // rsi
  char v68; // r13
  __int64 v69; // r12
  char *v70; // rax
  char *v71; // r11
  int v72; // r8d
  int v73; // r9d
  _BYTE *v74; // r10
  char *v75; // rax
  char *v76; // r11
  unsigned __int64 v77; // r8
  unsigned __int8 v78; // al
  int v79; // ecx
  _BYTE *v80; // rax
  unsigned __int64 v81; // r12
  size_t v82; // r8
  size_t v83; // r10
  __int64 v84; // r9
  char *v85; // rsi
  __int64 v86; // r12
  unsigned __int64 v87; // r13
  char v88; // al
  __int64 v89; // rdx
  int v90; // r15d
  double v91; // xmm0_8
  int v92; // eax
  char v93; // al
  char v94; // al
  __int16 v95; // ax
  char *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // r14
  int v99; // eax
  unsigned __int8 v100; // al
  int dtype_size; // eax
  char v102; // al
  char v103; // al
  __int64 v104; // rdi
  int v105; // eax
  __int64 v106; // rdx
  __m128i v107; // xmm0
  int v108; // eax
  unsigned __int8 v109; // al
  __int64 v110; // rdi
  __int16 v111; // ax
  __m128i v112; // xmm4
  __m128i v113; // xmm3
  __m128i v114; // xmm2
  __m128i v115; // xmm5
  __m128i v116; // xmm1
  __m128i v117; // xmm0
  __m128i v118; // xmm5
  __m128i v119; // xmm5
  __m128i v120; // xmm5
  __m128i v121; // xmm7
  __m128i v122; // xmm6
  __m128i v123; // xmm9
  __m128i v124; // xmm5
  __m128i v125; // xmm8
  unsigned __int64 v126; // r9
  unsigned __int64 v127; // r12
  __m128i *v128; // rax
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rax
  __int64 v131; // rdx
  unsigned __int64 v132; // r12
  unsigned __int64 v133; // r8
  char *v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rdx
  void *v137; // r14
  char *v138; // rdx
  __int64 v139; // rdi
  unsigned __int8 v140; // al
  void *v141; // r15
  void *v142; // rdi
  unsigned int v143; // [rsp+Ch] [rbp-454h]
  int v145; // [rsp+28h] [rbp-438h]
  char v146; // [rsp+2Fh] [rbp-431h]
  int v147; // [rsp+30h] [rbp-430h]
  char v148; // [rsp+34h] [rbp-42Ch]
  int v149; // [rsp+38h] [rbp-428h]
  __int64 v150; // [rsp+38h] [rbp-428h]
  int n; // [rsp+48h] [rbp-418h]
  char *na; // [rsp+48h] [rbp-418h]
  size_t nb; // [rsp+48h] [rbp-418h]
  size_t nc; // [rsp+48h] [rbp-418h]
  size_t nf; // [rsp+48h] [rbp-418h]
  size_t ne; // [rsp+48h] [rbp-418h]
  size_t nd; // [rsp+48h] [rbp-418h]
  unsigned int v158; // [rsp+50h] [rbp-410h]
  char v159; // [rsp+50h] [rbp-410h]
  signed int v160; // [rsp+50h] [rbp-410h]
  unsigned __int64 v161; // [rsp+50h] [rbp-410h]
  __int64 v162; // [rsp+50h] [rbp-410h]
  unsigned __int64 v163; // [rsp+50h] [rbp-410h]
  unsigned __int64 v164; // [rsp+50h] [rbp-410h]
  __int64 v165; // [rsp+50h] [rbp-410h]
  int v166; // [rsp+58h] [rbp-408h]
  int v167; // [rsp+5Ch] [rbp-404h]
  unsigned __int8 v168; // [rsp+5Ch] [rbp-404h]
  bool v169; // [rsp+5Ch] [rbp-404h]
  char v170; // [rsp+5Ch] [rbp-404h]
  unsigned __int8 v171; // [rsp+5Ch] [rbp-404h]
  __int64 v172; // [rsp+68h] [rbp-3F8h] BYREF
  unsigned __int8 v173[16]; // [rsp+70h] [rbp-3F0h] BYREF
  char *s; // [rsp+80h] [rbp-3E0h] BYREF
  __int128 v175; // [rsp+88h] [rbp-3D8h]
  void *src; // [rsp+A0h] [rbp-3C0h] BYREF
  _BYTE v177[24]; // [rsp+A8h] [rbp-3B8h] BYREF
  __int64 v178; // [rsp+C0h] [rbp-3A0h]
  __int128 v179; // [rsp+C8h] [rbp-398h]
  _QWORD v180[2]; // [rsp+D8h] [rbp-388h] BYREF
  int v181; // [rsp+E8h] [rbp-378h]
  double v182; // [rsp+F8h] [rbp-368h] BYREF
  __m128i v183; // [rsp+100h] [rbp-360h] BYREF
  __m128i v184; // [rsp+110h] [rbp-350h] BYREF
  __m128i v185; // [rsp+120h] [rbp-340h] BYREF
  __m128i v186; // [rsp+130h] [rbp-330h] BYREF
  __m128i v187; // [rsp+140h] [rbp-320h] BYREF
  __m128i v188; // [rsp+150h] [rbp-310h] BYREF
  __m128i v189; // [rsp+160h] [rbp-300h] BYREF
  void *dest[2]; // [rsp+170h] [rbp-2F0h] BYREF
  __m128i v191; // [rsp+180h] [rbp-2E0h] BYREF
  __m128i v192; // [rsp+190h] [rbp-2D0h] BYREF
  __m128i v193; // [rsp+1A0h] [rbp-2C0h] BYREF
  __m128i v194; // [rsp+1B0h] [rbp-2B0h] BYREF
  __m128i v195; // [rsp+1C0h] [rbp-2A0h] BYREF
  __m128i v196; // [rsp+1D0h] [rbp-290h] BYREF
  __m128i v197; // [rsp+1E0h] [rbp-280h] BYREF
  unsigned __int8 v198[16]; // [rsp+1F0h] [rbp-270h] BYREF
  __int64 v199; // [rsp+200h] [rbp-260h]
  char v200[8]; // [rsp+208h] [rbp-258h] BYREF
  void *v201; // [rsp+210h] [rbp-250h]
  unsigned __int64 v202; // [rsp+218h] [rbp-248h]
  char v203[16]; // [rsp+228h] [rbp-238h] BYREF
  __int32 v204; // [rsp+238h] [rbp-228h]
  char v205; // [rsp+380h] [rbp-E0h] BYREF
  __m128i v206; // [rsp+3D0h] [rbp-90h] BYREF
  __m128i v207; // [rsp+3E0h] [rbp-80h]
  __m128i v208; // [rsp+3F0h] [rbp-70h]
  __m128i v209; // [rsp+400h] [rbp-60h]
  __m128i v210; // [rsp+410h] [rbp-50h]
  unsigned __int64 v211; // [rsp+428h] [rbp-38h]

  v3 = *(unsigned __int16 *)(a1 + 48);
  v211 = __readfsqword(0x28u);
  if ( (unsigned __int16)v3 <= 0x139u )
  {
    v57 = 575;
    if ( (unsigned __int16)v3 < 0x138u )
      v57 = v3;
    v167 = v57;
  }
  else
  {
    v4 = 575;
    if ( (unsigned __int16)(v3 - 573) >= 2u )
      v4 = v3;
    v167 = v4;
  }
  if ( *(unsigned __int16 *)(a2 + 10) != v167 && *(unsigned __int16 *)(a2 + 8) != v167 )
    return 0;
  v6 = *(_QWORD *)(a1 + 800);
  v7 = *(_WORD *)(a2 + 12);
  if ( (*(_BYTE *)(v6 + 604) & 8) == 0 && (v7 & 0x400) == 0 )
    return 0;
  v8 = *(_QWORD *)(v6 + 8);
  v9 = *(_DWORD *)(v8 + 104);
  if ( v3 < v9 || v3 >= *(_DWORD *)(v8 + 108) )
  {
    v148 = 0;
    v143 = 0;
    v145 = 0;
  }
  else
  {
    v34 = v3 - v9;
    v143 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * v34 + 8) & 0x100;
    v145 = *(_DWORD *)(*(_QWORD *)(v8 + 112) + 16LL * v34 + 8) & 4;
    v148 = (unsigned __int16)(*(_WORD *)(*(_QWORD *)(v8 + 112) + 16LL * v34 + 8) & 0x100) >> 8;
  }
  v10 = &v183;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v10->m128i_i32[1] = -1;
    v10->m128i_i16[0] = 0;
    v10 += 5;
    v10[-5].m128i_i16[1] = 0;
    v10[-5].m128i_i64[1] = 0;
    v10[-4] = si128;
    v10[-3].m128i_i64[0] = 0;
    *(__m128i *)((char *)&v10[-3] + 8) = 0;
    v10[-2].m128i_i32[2] = 0;
    v10[-1].m128i_i64[0] = 0;
    v10[-1].m128i_i32[2] = 0;
  }
  while ( &v206 != v10 );
  v166 = v7;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
    goto LABEL_21;
  v12 = *(_BYTE *)(a1 + 57);
  v13 = *(_BYTE *)(a1 + 96);
  v14 = 0;
  if ( v12 < 0 )
  {
    v14 = v12 & 0x7F;
    if ( (unsigned __int8)((v12 & 0x7F) - 17) <= 1u )
    {
      v166 = v7 | 0x10;
    }
    else if ( (unsigned __int8)(v14 - 9) <= 3u )
    {
      v166 = v7 | 1;
      if ( (v7 & 0x42) != 0 || (unsigned __int8)(v13 - 19) > 2u )
        goto LABEL_21;
      goto LABEL_137;
    }
  }
  if ( (unsigned __int8)(v13 - 9) <= 3u )
  {
    v15 = v166 | 1;
    v16 = (v166 & 0x42) == 0;
    v166 |= 1u;
    if ( !v16 || (unsigned __int8)(v14 - 19) > 2u )
      goto LABEL_21;
    goto LABEL_19;
  }
  if ( (v166 & 0x42) == 0 )
  {
    v78 = v14 - 19;
    if ( (unsigned __int8)(v13 - 19) <= 2u )
    {
      v79 = 0x2000;
      if ( v78 <= 2u )
      {
LABEL_138:
        v166 |= v79;
        goto LABEL_21;
      }
LABEL_137:
      v166 &= 0xC7FFu;
      v79 = 2048;
      goto LABEL_138;
    }
    if ( v78 <= 2u )
    {
      v17 = 2;
      if ( !v13 )
        goto LABEL_20;
      v15 = v166;
LABEL_19:
      BYTE1(v15) &= 0xC7u;
      v17 = 4096;
      v166 = v15;
LABEL_20:
      v166 |= v17;
    }
  }
LABEL_21:
  v18 = v7 & 0x3800;
  if ( v18 && (v166 & 0x3800) != v18 )
    goto LABEL_48;
  if ( !*(_BYTE *)(a1 + 65) )
  {
    v149 = 0;
    v20 = 0;
    v146 = 0;
    goto LABEL_102;
  }
  v19 = 0;
  v20 = 0;
  v146 = 0;
  v147 = 17;
  v149 = 0;
  while ( 1 )
  {
    if ( v167 > 710 )
    {
      v40 = v19;
      if ( v167 > 775 )
      {
        while ( (unsigned int)(v167 - 922) <= 1 )
        {
          while ( 2 )
          {
            if ( v19 > 1 )
              goto LABEL_60;
            v51 = *(_QWORD *)(a1 + 832);
            v52 = *(unsigned __int16 *)(a1 + 40 * v40 + 70);
            v53 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v51 + 168LL);
            if ( v53 == sub_3EA010 )
              v54 = sub_3EA010(v51, v52);
            else
              v54 = ((__int64 (__fastcall *)(__int64, __int64, double))v53)(v51, v52, 0.0);
            v55 = sub_3EE210(a1, a1 + 144, 0.0);
            sub_3FE370((__int64)&src, *(_QWORD *)(a1 + 832), 0x10u, v55, v166, 0.0);
            tinfo_size = get_tinfo_size(0, src, 0);
            sub_32F3F0((__int64)&v183.m128i_i64[10 * v20], v54, tinfo_size, (__int64)&src);
            ++v19;
            ++v20;
            clear_tinfo_t(&src);
            v40 = v19;
            if ( !*(_BYTE *)(a1 + 40LL * v19 + 65) )
              goto LABEL_100;
            if ( v167 <= 710 )
            {
LABEL_92:
              v40 = v19;
              continue;
            }
            break;
          }
        }
        goto LABEL_60;
      }
      if ( v167 <= 712 )
        goto LABEL_59;
      if ( ((1LL << ((unsigned __int8)v167 + 55)) & 0x4000802040022A15LL) == 0 )
      {
        if ( ((1LL << ((unsigned __int8)v167 + 55)) & 0x18000060) != 0 )
          goto LABEL_73;
        goto LABEL_59;
      }
    }
    else
    {
      if ( v167 > 665 )
      {
        switch ( v167 )
        {
          case 666:
          case 703:
          case 705:
          case 707:
            goto LABEL_64;
          case 693:
            if ( v19 != 1 )
              goto LABEL_33;
            v23 = 1;
            v24 = 104;
            v19 = 2;
            v22 = v166 | 1;
            break;
          case 694:
            if ( v19 != 1 )
              goto LABEL_33;
            v23 = 1;
            v24 = 104;
            v19 = 2;
            v22 = v166 & 0xFFFFFFFE;
            break;
          case 710:
            goto LABEL_73;
          default:
            goto LABEL_59;
        }
        goto LABEL_34;
      }
      if ( v167 <= 460 )
      {
        while ( 1 )
        {
          if ( v167 > 458 )
            goto LABEL_92;
          if ( v167 > 455 )
            goto LABEL_59;
          if ( v167 <= 452 )
            break;
          if ( v19 )
            goto LABEL_33;
          v58 = *(_QWORD *)(a1 + 832);
          v59 = *(unsigned __int16 *)(a1 + 70);
          v60 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v58 + 168LL);
          if ( v60 == sub_3EA010 )
          {
            v61 = sub_3EA010(v58, v59);
          }
          else
          {
            v99 = ((__int64 (__fastcall *)(__int64, __int64, double))v60)(v58, v59, 0.0);
            v58 = *(_QWORD *)(a1 + 832);
            v61 = v99;
          }
          sub_3FE370((__int64)&src, v58, 0x10u, 4u, v166, 0.0);
          v62 = get_tinfo_size(0, src, 0);
          sub_32F3F0((__int64)&v183.m128i_i64[10 * v20++], v61, v62, (__int64)&src);
          v19 = 1;
          clear_tinfo_t(&src);
          if ( !*(_BYTE *)(a1 + 105) )
            goto LABEL_100;
        }
        if ( v167 > 397 )
        {
          if ( v167 == 404 )
            goto LABEL_73;
        }
        else if ( v167 > 381 )
        {
          v49 = 32777;
          if ( _bittest64(&v49, (unsigned int)(v167 - 382)) )
          {
LABEL_73:
            v23 = v19;
            v22 = v166;
            v24 = 40LL * v19 + 64;
            v19 = v19 + 1 - (*(_BYTE *)(a1 + 145) == 0 && v20 == 0);
            goto LABEL_34;
          }
        }
LABEL_59:
        v40 = v19;
LABEL_60:
        v23 = v19;
        v22 = v166;
        ++v19;
        v24 = 40 * v40 + 64;
        goto LABEL_34;
      }
      if ( v167 > 623 )
        goto LABEL_59;
      if ( v167 > 621 )
      {
        if ( v19 )
        {
          if ( v19 == 1 )
          {
            v24 = 184;
            v19 = 2;
            v23 = 3;
            v22 = v166;
          }
          else
          {
            v23 = v19 - 1;
            v22 = v166;
            ++v19;
            v24 = 40LL * v23 + 64;
          }
        }
        else
        {
          v22 = v166;
          v23 = 0;
          v24 = 64;
          v19 = 1;
        }
        goto LABEL_34;
      }
      if ( (v167 & 0xFFFFFFFB) != 0x262 && v167 != 564 )
        goto LABEL_59;
    }
LABEL_64:
    if ( v19 == 1 )
    {
      if ( !sub_3EE080(a1, a1 + 64) )
      {
        if ( !under_debugger )
          sub_3835A0(0xC872u, a1 + 64, 0.0);
        goto LABEL_281;
      }
      v41 = sub_3EE110(a1, a1 + 64, 0.0);
      if ( (unsigned int)((unsigned __int64)get_dtype_size(v41) >> 1) != 8 )
      {
        if ( !under_debugger )
          sub_3835A0(0xC873u, a1 + 64, 0.0);
        goto LABEL_281;
      }
      v42 = sub_3EE210(a1, a1 + 64, 0.0);
      v43 = *(_QWORD *)(a1 + 832);
      v44 = *(unsigned __int16 *)(a1 + 70);
      v158 = v42;
      v45 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v43 + 168LL);
      if ( v45 == sub_3EA010 )
      {
        v46 = sub_3EA010(v43, v44);
      }
      else
      {
        v46 = v45(v43, v44);
        v43 = *(_QWORD *)(a1 + 832);
      }
      v47 = v46;
      sub_3FE370((__int64)&src, v43, 8u, v158, v166, 0.0);
      v48 = get_tinfo_size(0, src, 0);
      sub_32F3F0((__int64)&v183.m128i_i64[10 * v20++], v47, v48, (__int64)&src);
      v19 = 2;
      clear_tinfo_t(&src);
      v23 = 1;
      v24 = 104;
      v22 = v166;
    }
    else
    {
LABEL_33:
      v21 = v19;
      v22 = v166;
      v23 = v19++;
      v24 = 40 * v21 + 64;
    }
LABEL_34:
    v25 = a1 + v24;
    if ( !*(_BYTE *)(a1 + 40LL * v19 + 65) && (v22 & 0x20) != 0 )
      break;
    v26 = v25;
    n = v23;
    v27 = sub_3EDFE0(a1, v25);
    v28 = n;
    v29 = v26;
    if ( v27 && (n > 0 || v148) )
    {
      v50 = sub_3EFC90(a1, v26, 0.0);
      v28 = n;
      if ( v147 <= v50 )
        v50 = v147;
      v29 = v26;
      v147 = v50;
    }
    if ( ((v28 == 0 ? 12290 : 10306) & v22) != 0 )
      v22 |= 2u;
    v30 = &v183 + 5 * v20;
    v31 = sub_3FEA40(a1, (__int64)v30, v29, v22, 0.0);
    v32 = v31;
    if ( !v31 )
      goto LABEL_48;
    if ( v31 == 2 )
    {
      if ( (v22 & 4) != 0 )
      {
        v33 = get_tinfo_size(0, v184.m128i_i64[10 * v20 + 1], 0);
        v32 = 2;
        v146 |= v33 > 8;
        goto LABEL_25;
      }
      if ( !under_debugger )
        sub_3835A0(0xC874u, (__int64)v30, 0.0);
LABEL_281:
      BUG();
    }
LABEL_25:
    ++v149;
    v20 += v32;
    if ( !*(_BYTE *)(a1 + 40LL * v19 + 65) )
      goto LABEL_100;
  }
  v35 = a1 + 40LL * v23;
  if ( *(_BYTE *)(v35 + 65) != 5 || *(_QWORD *)(v35 + 72) )
  {
LABEL_48:
    v36 = 0;
    goto LABEL_49;
  }
LABEL_100:
  if ( v147 > 16 || (v166 & 0x2000) != 0 )
LABEL_102:
    v147 = sub_3EFC90(a1, a1 + 64, 0.0);
  s = nullptr;
  v175 = 0;
  v63 = *(const char **)a2;
  if ( *(_QWORD *)a2 )
  {
    v64 = strlen(*(const char **)a2);
    v65 = v64 + 1;
    v66 = v64;
    s = (char *)qvector_reserve(&s, 0, v64 + 1, 1);
    *(_QWORD *)&v175 = v65;
    memmove(s, v63, v66);
    s[v66] = 0;
  }
  if ( (v166 & 0x400) != 0 )
  {
    v67 = a1 + 40LL * (v149 - 1) + 64;
    v100 = sub_3EE110(a1, v67, 0.0);
    dtype_size = get_dtype_size(v100);
    if ( (v166 & 0x2802) != 0 )
    {
      if ( dtype_size == 8 )
        goto LABEL_184;
      v16 = dtype_size == 4;
      v102 = 108;
      v159 = 0;
      if ( v16 )
        v102 = 102;
      v68 = v102;
    }
    else
    {
      v16 = dtype_size == 8;
      v103 = 0;
      v68 = 108;
      if ( v16 )
        v103 = 108;
      v159 = v103;
    }
  }
  else if ( (v166 & 0x608) != 0 && (v67 = a1 + 24, (unsigned __int8)sub_3EE340(a1, a1 + 24, 1)) )
  {
    if ( (unsigned int)v147 > 8 || ((v147 - 1) & v147) != 0 )
      sub_3EAF00(0.0, a1, v67);
    v68 = 100;
    if ( (unsigned int)v147 <= 4 )
      v68 = aBhsd[(unsigned int)v147 >> 1];
    v159 = 0;
  }
  else
  {
    v67 = a1 + 24;
    if ( sub_3EFD10(a1, a1 + 24, 0.0) )
    {
      v159 = 0;
      v68 = 113;
      goto LABEL_110;
    }
LABEL_184:
    v159 = 0;
    v68 = 0;
  }
LABEL_110:
  v69 = v175;
  if ( !(_QWORD)v175 )
    goto LABEL_122;
  na = s;
  v70 = strchr(s, 35);
  v71 = na;
  if ( !v70 || v70 - na == -1 )
  {
LABEL_118:
    v67 = 36;
    nb = (size_t)v71;
    v75 = strchr(v71, 36);
    if ( !v75 )
      goto LABEL_122;
    v76 = (char *)nb;
    v77 = (unsigned __int64)&v75[-nb];
    if ( &v75[-nb] == (char *)-1LL )
      goto LABEL_122;
    if ( !v68 )
    {
      v126 = v69 - 1;
      if ( v77 < v69 - 1 )
      {
        v127 = v77 + 1;
        if ( v77 + 1 < v126 )
        {
          v67 = nb + v127;
          ne = (size_t)&v75[-nb];
          v164 = v126 - v127;
          memmove(v75, (const void *)v67, v126 - v127);
          v76 = s;
          v77 = v164 + ne;
          v127 = v164 + ne + 1;
        }
        if ( *((_QWORD *)&v175 + 1) < v127 )
        {
          v67 = (__int64)v76;
          v163 = v77;
          s = (char *)qvector_reserve(&s, v76, v127, 1);
          v77 = v163;
          v76 = s;
        }
        *(_QWORD *)&v175 = v127;
        v76[v77] = 0;
      }
      goto LABEL_122;
    }
    *v75 = v68;
    if ( !v159 )
      goto LABEL_122;
    v130 = v175;
    v67 = (__int64)s;
    if ( (_QWORD)v175 )
    {
      v131 = v175 + 1;
      v132 = v175 - 1;
      if ( *((_QWORD *)&v175 + 1) >= (unsigned __int64)(v175 + 1) )
        goto LABEL_240;
    }
    else
    {
      if ( *((_QWORD *)&v175 + 1) > 1u )
      {
        *(_QWORD *)&v175 = 2;
        v132 = 0;
        s[1] = 0;
LABEL_242:
        s[v132] = 108;
        goto LABEL_122;
      }
      v132 = 0;
      v131 = 2;
    }
    nf = v77;
    v162 = v131;
    s = (char *)qvector_reserve(&s, s, v131, 1);
    v67 = (__int64)s;
    v77 = nf;
    v130 = v132 + 1;
    v131 = v162;
LABEL_240:
    v133 = v77 + 1;
    *(_QWORD *)&v175 = v131;
    *(_BYTE *)(v67 + v130) = 0;
    if ( v133 < v132 )
    {
      v161 = v133;
      v67 = (__int64)&s[v133];
      memmove(&s[v133 + 1], &s[v133], v132 - v133);
      v132 = v161;
    }
    goto LABEL_242;
  }
  v67 = a1 + 64;
  while ( 1 )
  {
    if ( !*(_BYTE *)(v67 + 1) )
    {
      if ( !under_debugger )
        sub_3835A0(0xC905u, v67, 0.0);
      goto LABEL_281;
    }
    if ( (unsigned __int8)sub_3EE030(a1, v67) )
      break;
    v67 += 40;
    if ( v72 == 7 )
    {
      v167 = v73;
      goto LABEL_118;
    }
  }
  v167 = v73;
  *v74 = *(_QWORD *)(a1 + 40LL * v72 + 72) + 48;
  v69 = v175;
  if ( (_QWORD)v175 )
  {
    v71 = s;
    goto LABEL_118;
  }
LABEL_122:
  if ( (v166 & 4) != 0 )
  {
    v36 = 0;
    if ( v149 + 1 != v20 )
      goto LABEL_124;
    v67 = 0;
    *(_OWORD *)v177 = 0;
    src = nullptr;
    v80 = (_BYTE *)qvector_reserve(&src, 0, 6, 1);
    src = v80;
    *(_QWORD *)v177 = 6;
    *(_DWORD *)v80 = 1851878495;
    v80[4] = 101;
    *((_BYTE *)src + 5) = 0;
    v81 = *(_QWORD *)v177;
    if ( *(_QWORD *)v177 )
    {
      v82 = *(_QWORD *)v177 - 1LL;
      if ( *(_QWORD *)v177 != 1 )
      {
        v83 = v175;
        v84 = *(_QWORD *)v177 - 1LL;
        if ( (_QWORD)v175 )
        {
          v83 = v175 - 1;
          v84 = v82 + v175 - 1;
          v81 = *(_QWORD *)v177 + v175 - 1;
        }
        v85 = s;
        if ( *((_QWORD *)&v175 + 1) < v81 )
        {
          v150 = v84;
          nd = v83;
          v165 = *(_QWORD *)v177 - 1LL;
          s = (char *)qvector_reserve(&s, s, v81, 1);
          v84 = v150;
          v85 = s;
          v83 = nd;
          v82 = v165;
        }
        *(_QWORD *)&v175 = v81;
        v85[v84] = 0;
        v67 = (__int64)src;
        memcpy(&s[v83], src, v82);
      }
    }
    if ( src )
    {
      *(_QWORD *)v177 = 0;
      qfree(src);
    }
    if ( v146 && (!v68 || v68 == 113) )
    {
      v86 = v175;
      v87 = 2;
      if ( (_QWORD)v175 )
      {
        v87 = v175 + 1;
        v86 = v175 - 1;
      }
      v67 = (__int64)s;
      if ( *((_QWORD *)&v175 + 1) < v87 )
      {
        s = (char *)qvector_reserve(&s, s, v87, 1);
        v67 = (__int64)s;
      }
      *(_QWORD *)&v175 = v87;
      *(_BYTE *)(v67 + v86) = 113;
      s[v86 + 1] = 0;
    }
  }
  if ( (v166 & 0x400) == 0 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    {
      v88 = *(_BYTE *)(a1 + 57);
      if ( v88 < 0 )
      {
        v108 = v88 & 0x7F;
        if ( v108 )
        {
          v109 = v108 - 1;
          v110 = 7;
          if ( v109 <= 0x14u )
            v110 = (unsigned int)byte_42E210[v109];
          v147 = get_dtype_size(v110);
        }
      }
    }
    v89 = 102;
    if ( (v166 & 0x3042) == 0 )
    {
      v89 = 117;
      if ( (v166 & 1) == 0 )
        v89 = (v166 & 0x10) == 0 ? 115 : 112;
    }
    v67 = (__int64)"_%c%d";
    sub_FA510((__int64 *)&s, (__int64)"_%c%d", v89, 8 * v147);
    if ( (v166 & 0x3800) != 0 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) == 8 )
      {
        v105 = sub_3EFC30(a1, a1 + 104, 0.0);
      }
      else
      {
        v104 = 7;
        if ( (unsigned __int8)(*(_BYTE *)(a1 + 96) - 1) <= 0x14u )
          v104 = (unsigned int)byte_42E210[(unsigned __int8)(*(_BYTE *)(a1 + 96) - 1)];
        v105 = get_dtype_size(v104);
      }
      v106 = 102;
      if ( (v166 & 0x2842) == 0 )
      {
        v106 = 117;
        if ( (v166 & 1) == 0 )
          v106 = (v166 & 0x10) == 0 ? 115 : 112;
      }
      v67 = (__int64)"_%c%d";
      sub_FA510((__int64 *)&s, (__int64)"_%c%d", v106, 8 * v105);
    }
  }
  v172 = 1;
  if ( !v145 || (copy_tinfo_t(&v172, &v184.m128i_u64[1]), (v67 = v143) != 0) )
  {
    v90 = 0;
  }
  else
  {
    --v20;
    v90 = 1;
  }
  v160 = v183.m128i_i32[2];
  if ( v167 == 575 )
  {
    v111 = *(_WORD *)(a1 + 48);
    if ( v111 != 575 && v111 != 314 )
    {
      v112 = _mm_load_si128(&v183);
      v113 = _mm_load_si128(&v184);
      v114 = _mm_load_si128(&v185);
      v183 = _mm_load_si128(&v193);
      v115 = _mm_load_si128(&v194);
      v116 = _mm_load_si128(&v186);
      v117 = _mm_load_si128(&v187);
      v206 = v112;
      v184 = v115;
      v118 = _mm_load_si128(&v195);
      v207 = v113;
      v185 = v118;
      v119 = _mm_load_si128(&v196);
      v208 = v114;
      v186 = v119;
      v120 = _mm_load_si128(&v197);
      v209 = v116;
      v210 = v117;
      v187 = v120;
      v193 = v112;
      v194 = v113;
      v195 = v114;
      v196 = v116;
      v197 = v117;
      if ( v111 == 573 || v111 == 312 )
      {
        v121 = _mm_load_si128((const __m128i *)dest);
        v122 = _mm_load_si128(&v191);
        *(__m128i *)dest = v114;
        v123 = _mm_load_si128(&v188);
        v124 = _mm_load_si128(&v192);
        v188 = v112;
        v125 = _mm_load_si128(&v189);
        v208 = v121;
        v206 = v123;
        v207 = v125;
        v209 = v122;
        v210 = v124;
        v189 = v113;
        v191 = v116;
        v192 = v117;
        v193 = v123;
        v194 = v125;
        v195 = v121;
        v196 = v122;
        v197 = v124;
      }
    }
  }
  v91 = 0.0;
  src = (void *)0xFFFFFFFF00000000LL;
  *(_QWORD *)v177 = 0;
  v178 = 0;
  v180[0] = 0;
  *(__m128i *)&v177[8] = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
  v179 = 0;
  v180[1] = 0;
  v181 = 0;
  v169 = v167 == 425 || (unsigned int)(v167 - 427) <= 1;
  if ( !v169 )
  {
LABEL_173:
    v95 = *(_WORD *)(a1 + 48);
    if ( v95 == 11 || v95 == 331 )
    {
      v67 = (__int64)(&v183 + 5 * v90 + 5);
      if ( sub_1255A0(&v183.m128i_u8[-v90 & 0x50], v67, 0) )
      {
        if ( v20 != 2 )
        {
          if ( !under_debugger )
            sub_3835A0(0xCE80u, v67, v91);
          goto LABEL_281;
        }
        v140 = sub_3EE110(a1, a1 + 64, v91);
        v98 = sub_3F56D0(a1, 3u, v140, 0, 0x3BEA45E214ADDC55LL, v160, 0);
LABEL_180:
        if ( v169 )
        {
          v128 = *(__m128i **)(a1 + 8);
          *(_QWORD *)v173 = a1 + 40;
          v129 = sub_C79F0(v128 + 87, (unsigned __int64 *)(a1 + 40), (_QWORD **)v173);
          copy_tinfo_t(v129 + 32, &v172);
          *(_BYTE *)(v98 + 65) |= 2u;
          sub_3EFE10(a1, v98, (unsigned __int8 *)&src);
        }
        else if ( *(_DWORD *)v98 == 56 )
        {
          if ( v145 )
          {
            v107 = _mm_cvtsi32_si128(*(_DWORD *)(v98 + 68));
            *(_DWORD *)v173 = 1;
            *(_QWORD *)&v173[4] = _mm_unpacklo_epi32(v107, _mm_cvtsi32_si128(v160)).m128i_u64[0];
            v98 = (__int64)sub_124CA0(v98, v173);
            sub_11C7E0((__int64)v173);
          }
          sub_B4CD0(*(_QWORD **)(a1 + 16), v98);
        }
        v93 = 1;
        goto LABEL_169;
      }
      v95 = *(_WORD *)(a1 + 48);
    }
    if ( v95 == 919 )
    {
      if ( v20 != 3 || !v90 )
      {
        if ( !under_debugger )
          sub_3835A0(0xCE60u, v67, v91);
        goto LABEL_281;
      }
      v134 = (char *)s1;
      if ( (_QWORD)v175 )
        v134 = s;
      v135 = sub_335C70(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), (__int64)v134, &v172, 2, (__int64)&v188, 1);
      v136 = *(_QWORD *)(v135 + 72);
      v183.m128i_i8[0] = 4;
      *(_DWORD *)(v136 + 280) |= 0x14u;
      v183.m128i_i64[1] = v135;
      sub_124BC0((__int64)&v188, v198);
      v189.m128i_i64[0] = v199;
      copy_tinfo_t(&v189.m128i_u64[1], v200);
      v137 = (void *)v202;
      if ( v202 && (nc = v202 - 1, v202 != 1) )
      {
        v141 = v201;
        v142 = dest[0];
        if ( v191.m128i_i64[0] < v202 )
        {
          dest[0] = (void *)qvector_reserve(dest, dest[0], v202, 1);
          v142 = dest[0];
        }
        dest[1] = v137;
        memmove(v142, v141, nc);
        *((char *)dest[0] + (unsigned __int64)v137 - 1) = 0;
      }
      else
      {
        dest[1] = nullptr;
      }
      copy_argloc(&v191.m128i_u64[1], v203);
      v138 = (char *)s1;
      v139 = *(_QWORD *)(a1 + 8);
      v192.m128i_i32[2] = v204;
      if ( (_QWORD)v175 )
        v138 = s;
      v97 = sub_335C70(v139, *(_QWORD *)(a1 + 40), (__int64)v138, &v172, 2, (__int64)&v183, 1);
    }
    else
    {
      v96 = (char *)s1;
      if ( (_QWORD)v175 )
        v96 = s;
      v97 = sub_335C70(
              *(_QWORD *)(a1 + 8),
              *(_QWORD *)(a1 + 40),
              (__int64)v96,
              &v172,
              v20,
              (__int64)v183.m128i_i64 + (-v90 & 0x50),
              1);
    }
    v98 = v97;
    *(_DWORD *)(*(_QWORD *)(v97 + 72) + 280LL) |= 0x14u;
    goto LABEL_180;
  }
  if ( v20 != 2 || v90 )
  {
    if ( !under_debugger )
      sub_3835A0(0xC906u, v67, 0.0);
    goto LABEL_281;
  }
  *(_QWORD *)&v91 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v183.m128i_u32[2]), _mm_cvtsi32_si128(v188.m128i_u32[2])).m128i_u64[0];
  v182 = v91;
  v92 = sub_3EE210(a1, a1 + 64, v91);
  v93 = sub_3FE0C0(
          (__int64)&src,
          *(_QWORD *)(a1 + 832),
          *(_QWORD *)(a1 + 8),
          v166,
          v188.m128i_i32[1],
          v92,
          2,
          (int *)&v182);
  if ( v93 )
  {
    v67 = (__int64)&v177[16];
    copy_tinfo_t(&v172, &v177[16]);
    goto LABEL_173;
  }
LABEL_169:
  v170 = v93;
  cleanup_argloc(v180);
  v94 = v170;
  if ( v178 )
  {
    *(_QWORD *)&v179 = 0;
    qfree(v178);
    v94 = v170;
  }
  v171 = v94;
  clear_tinfo_t(&v177[16]);
  sub_11C7E0((__int64)&src);
  clear_tinfo_t(&v172);
  v36 = v171;
LABEL_124:
  if ( s )
  {
    v168 = v36;
    *(_QWORD *)&v175 = 0;
    qfree(s);
    v36 = v168;
  }
LABEL_49:
  v37 = (__m128i *)&v205;
  v38 = v36;
  while ( 1 )
  {
    cleanup_argloc(&v37[3].m128i_u64[1]);
    v39 = v37[2].m128i_i64[0];
    if ( v39 )
    {
      v37[2].m128i_i64[1] = 0;
      qfree(v39);
    }
    clear_tinfo_t(&v37[1].m128i_u64[1]);
    sub_11C7E0((__int64)v37);
    if ( &v183 == v37 )
      break;
    v37 -= 5;
  }
  return v38;
}
