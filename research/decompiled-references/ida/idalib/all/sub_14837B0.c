_BYTE *__fastcall sub_14837B0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        __int16 a8)
{
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  _BYTE *result; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  unsigned int *v20; // rax
  __int64 v21; // rdx
  size_t v22; // rax
  size_t v23; // rax
  __int64 *v24; // rdi
  __int64 *v25; // rsi
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __m128i *v30; // r9
  unsigned __int32 v31; // r12d
  __int64 *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int16 v41; // ax
  __int64 v42; // r12
  unsigned int *v43; // rax
  unsigned __int8 *v44; // rdx
  size_t v45; // rax
  size_t v46; // rax
  unsigned int *v47; // rbp
  size_t v48; // r14
  _BYTE *v49; // rbp
  __int64 v50; // rbp
  size_t v51; // rax
  __int64 v52; // rbp
  char v53; // al
  _BYTE **v54; // r8
  __int64 *v55; // r10
  unsigned int v56; // r9d
  __int64 v57; // r13
  __int64 v58; // rbx
  __int8 *v59; // r12
  __int32 v60; // eax
  unsigned int v61; // edx
  __int8 *v62; // rax
  __int64 v63; // rbp
  size_t v64; // rax
  __int64 v65; // rax
  __int64 v66; // rbp
  size_t v67; // rax
  __int64 v68; // rax
  __int64 v69; // rbp
  size_t v70; // rax
  __int64 v71; // rax
  __int64 v72; // rbp
  size_t v73; // rax
  __int64 v74; // rax
  __int64 v75; // rbp
  size_t v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbp
  size_t v79; // rax
  __int64 v80; // rax
  __int64 v81; // rbp
  size_t v82; // rax
  __int64 v83; // rax
  __int64 v84; // rbp
  size_t v85; // rax
  __int16 v86; // ax
  int v87; // eax
  size_t v88; // rax
  unsigned int *v89; // rcx
  size_t v90; // rdx
  __int64 *v91; // rdi
  unsigned int v92; // r11d
  __int32 v93; // r10d
  __int64 v94; // rax
  __int64 v95; // rbx
  __int64 v96; // r12
  int v97; // eax
  __int64 v98; // rax
  unsigned __int32 v99; // ecx
  __int64 v100; // rdx
  __m128i si128; // xmm1
  __m128i v102; // xmm2
  __m128 v103; // xmm0
  __m128i v104; // xmm3
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 *v108; // rdi
  const char *v109; // rax
  size_t v110; // rdx
  __int64 v111; // rbp
  size_t v112; // rax
  __int32 v115; // [rsp+10h] [rbp-1C8h]
  unsigned __int64 v117; // [rsp+20h] [rbp-1B8h]
  unsigned __int32 v118; // [rsp+28h] [rbp-1B0h]
  __int64 v119; // [rsp+28h] [rbp-1B0h]
  int *v120; // [rsp+30h] [rbp-1A8h] BYREF
  unsigned int v121; // [rsp+38h] [rbp-1A0h]
  unsigned __int32 v122; // [rsp+3Ch] [rbp-19Ch]
  unsigned __int8 **v123; // [rsp+40h] [rbp-198h]
  _BYTE **v124; // [rsp+48h] [rbp-190h]
  __int64 v125; // [rsp+50h] [rbp-188h]
  __int64 *v126; // [rsp+58h] [rbp-180h]
  __int64 *v127; // [rsp+60h] [rbp-178h]
  unsigned __int64 v128; // [rsp+68h] [rbp-170h]
  unsigned int v129; // [rsp+70h] [rbp-168h]
  __int32 v130; // [rsp+74h] [rbp-164h]
  __m128i *v131; // [rsp+78h] [rbp-160h]
  unsigned __int64 v132; // [rsp+80h] [rbp-158h]
  __int64 v133; // [rsp+88h] [rbp-150h]
  unsigned __int64 v134; // [rsp+98h] [rbp-140h] BYREF
  unsigned __int64 v135; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v136; // [rsp+A8h] [rbp-130h]
  _BYTE *v137; // [rsp+B0h] [rbp-128h] BYREF
  char v138; // [rsp+B8h] [rbp-120h]
  __int64 v139; // [rsp+C0h] [rbp-118h]
  int v140; // [rsp+C8h] [rbp-110h]
  __int16 v141; // [rsp+CCh] [rbp-10Ch]
  __int64 (__fastcall *v142)(__int64); // [rsp+D0h] [rbp-108h]
  __int64 v143; // [rsp+D8h] [rbp-100h]
  __int64 v144; // [rsp+E0h] [rbp-F8h]
  unsigned __int8 *v145[10]; // [rsp+F0h] [rbp-E8h] BYREF
  __m128i v146[5]; // [rsp+140h] [rbp-98h] BYREF
  int v147; // [rsp+190h] [rbp-48h]

  v121 = a3;
  memset(v146, 0, sizeof(v146));
  v137 = (_BYTE *)(a1 + 1952);
  v10 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v138 = v10;
  v139 = a1;
  v147 = 0;
  v140 = 1507350;
  v141 = 63;
  v142 = sub_146A990;
  v143 = 0;
  v144 = 0;
  if ( (unsigned __int8)sub_1477FA0((__int64)&v137) )
  {
    sub_1564840(v145, a1, a1 + 16, 14);
    sub_AE9DF0(v145, 22, 4u);
    sub_AEA040((__int64)v145);
LABEL_6:
    result = v137;
    *v137 = v138;
    return result;
  }
  if ( *(_WORD *)(a1 + 32) != 5 )
  {
    v15 = a1 + 16;
    v16 = 1563;
LABEL_4:
    sub_1564840(v145, a1, v15, v16);
LABEL_5:
    sub_AEA040((__int64)v145);
    LOWORD(v145[0]) = 23;
    sub_15680D0(a1, v145, 1, 1);
    goto LABEL_6;
  }
  v18 = sub_14803B0(a1, a2, v11, v12, v13, v14);
  v19 = *(_QWORD *)(v18 + 8);
  v117 = v18;
  if ( v19 )
  {
    v20 = *(unsigned int **)(v19 + 16);
    v21 = *v20;
    v135 = (unsigned __int64)(v20 + 4);
    v136 = v21;
    v22 = j__strlen("xrOS");
    if ( sub_2246AB0(&v135, "xrOS", v22, 0) != -1
      || (v43 = *(unsigned int **)(v19 + 16),
          v44 = (unsigned __int8 *)*v43,
          v145[0] = (unsigned __int8 *)(v43 + 4),
          v145[1] = v44,
          v45 = j__strlen("xros"),
          sub_2246AB0(v145, "xros", v45, 0) != -1) )
    {
      sub_1564820(v145, a1, *(unsigned int *)v117, 6613);
      sub_1478560(v145, v19);
      sub_AEA040((__int64)v145);
      goto LABEL_10;
    }
    v46 = j__strlen("macosx");
    v47 = *(unsigned int **)(v19 + 16);
    v48 = *v47;
    v49 = v47 + 4;
    if ( v48 != v46 )
    {
      if ( v48 == j__strlen("macosx_app_extension") )
      {
        if ( !v48 )
          goto LABEL_50;
LABEL_49:
        if ( !memcmp(v49, "macosx_app_extension", v48) )
        {
LABEL_50:
          v50 = *(_QWORD *)(a1 + 8);
          v51 = j__strlen("macos_app_extension");
          *(_QWORD *)(v117 + 8) = sub_6F3470(v50 + 552, "macos_app_extension", v51);
          goto LABEL_10;
        }
      }
LABEL_104:
      v119 = *(_QWORD *)(a1 + 8);
      v109 = sub_1479BE0(v49, v48);
      *(_QWORD *)(v117 + 8) = sub_6F3470(v119 + 552, v109, v110);
      goto LABEL_10;
    }
    if ( v48 && memcmp(v49, "macosx", v48) )
    {
      if ( v48 == j__strlen("macosx_app_extension") )
        goto LABEL_49;
      goto LABEL_104;
    }
    v111 = *(_QWORD *)(a1 + 8);
    v112 = j__strlen("macos");
    *(_QWORD *)(v117 + 8) = sub_6F3470(v111 + 552, "macos", v112);
  }
LABEL_10:
  v23 = j__strlen(&byte_22F0C30);
  if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, v23) )
  {
LABEL_51:
    LOWORD(v145[0]) = 23;
    sub_15680D0(a1, v145, 1, 1);
    goto LABEL_6;
  }
  if ( !*(_QWORD *)(a1 + 408) )
  {
    v63 = *(_QWORD *)(a1 + 8);
    v64 = j__strlen("introduced");
    v65 = sub_6F3470(v63 + 552, "introduced", v64);
    v66 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 408) = v65;
    v67 = j__strlen("deprecated");
    v68 = sub_6F3470(v66 + 552, "deprecated", v67);
    v69 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 416) = v68;
    v70 = j__strlen("obsoleted");
    v71 = sub_6F3470(v69 + 552, "obsoleted", v70);
    v72 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 424) = v71;
    v73 = j__strlen("unavailable");
    v74 = sub_6F3470(v72 + 552, "unavailable", v73);
    v75 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 432) = v74;
    v76 = j__strlen("message");
    v77 = sub_6F3470(v75 + 552, "message", v76);
    v78 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 440) = v77;
    v79 = j__strlen("strict");
    v80 = sub_6F3470(v78 + 552, "strict", v79);
    v81 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 448) = v80;
    v82 = j__strlen("replacement");
    v83 = sub_6F3470(v81 + 552, "replacement", v82);
    v84 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 456) = v83;
    v85 = j__strlen("environment");
    *(_QWORD *)(a1 + 464) = sub_6F3470(v84 + 552, "environment", v85);
  }
  if ( *(_WORD *)(a1 + 32) != 5 )
  {
LABEL_94:
    v16 = 1561;
LABEL_95:
    v15 = a1 + 16;
    goto LABEL_4;
  }
  v118 = 0;
  v127 = (__int64 *)&v134;
  v123 = v145;
  v125 = 0;
  v122 = 0;
  v120 = nullptr;
  v126 = (__int64 *)&v135;
  v124 = &v137;
  while ( 1 )
  {
    v24 = *(__int64 **)(a1 + 8);
    v25 = (__int64 *)(a1 + 16);
    v26 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v24, (int *)(a1 + 16));
    v31 = *(_DWORD *)(a1 + 40);
    if ( *(_QWORD *)(a1 + 448) == v26 )
    {
      if ( v122 )
      {
        sub_1564820(v123, a1, v31, 1567);
        sub_1478560(v123, v26);
        v25 = v126;
        LOBYTE(v136) = 1;
        LODWORD(v135) = v122;
        HIDWORD(v135) = v122;
        sub_AEC610((__int64 *)v123, v126);
        sub_AEA040((__int64)v123);
      }
      v122 = v31;
      goto LABEL_55;
    }
    if ( *(_QWORD *)(a1 + 432) == v26 )
    {
      if ( v118 )
      {
        sub_1564820(v123, a1, v31, 1567);
        sub_1478560(v123, v26);
        v25 = v126;
        LOBYTE(v136) = 1;
        LODWORD(v135) = v118;
        HIDWORD(v135) = v118;
        sub_AEC610((__int64 *)v123, v126);
        sub_AEA040((__int64)v123);
      }
      v118 = v31;
      goto LABEL_55;
    }
    if ( *(_QWORD *)(a1 + 416) == v26 )
    {
      v39 = *(_QWORD *)(v117 + 8);
      if ( v39 )
      {
        v40 = *(_QWORD *)(v39 + 16);
        if ( *(_DWORD *)v40 == 5 && *(_DWORD *)(v40 + 16) == 1718187891 && *(_BYTE *)(v40 + 20) == 116 )
        {
          if ( v146[1].m128i_i32[3] )
          {
            LODWORD(v128) = v146[1].m128i_i32[3];
            sub_1564820(v123, a1, v31, 1567);
            sub_1478560(v123, v26);
            v25 = v126;
            LOBYTE(v136) = 1;
            LODWORD(v135) = v128;
            HIDWORD(v135) = v128;
            sub_AEC610((__int64 *)v123, v126);
            sub_AEA040((__int64)v123);
          }
          v146[1].m128i_i32[3] = v31;
          v146[2] = (__m128i)1uLL;
          goto LABEL_55;
        }
      }
    }
    if ( *(_QWORD *)(a1 + 464) == v26 && v120 )
    {
      sub_1564820(v123, a1, v31, 1567);
      sub_1478560(v123, v26);
      v87 = *v120;
      LOBYTE(v136) = 1;
      LODWORD(v135) = v87;
      HIDWORD(v135) = v87;
      sub_AEC610((__int64 *)v123, v126);
      sub_AEA040((__int64)v123);
    }
    if ( *(_WORD *)(a1 + 32) != 64 )
    {
      sub_1564840(v145, a1, a1 + 16, 15);
      sub_1478560(v145, v26);
      sub_AE9DF0(v145, 64, 4u);
      sub_AEA040((__int64)v145);
      LOWORD(v145[0]) = 23;
      sub_15680D0(a1, v145, 1, 1);
      goto LABEL_6;
    }
    v32 = *(__int64 **)(a1 + 8);
    v25 = (__int64 *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v32, (int *)(a1 + 16));
    if ( *(_QWORD *)(a1 + 440) == v26 )
      break;
    if ( *(_QWORD *)(a1 + 456) == v26 )
    {
      v86 = *(_WORD *)(a1 + 32);
      if ( (unsigned __int16)(v86 - 14) > 1u && v86 != 17 && (unsigned __int16)(v86 - 18) > 1u )
        goto LABEL_43;
      v125 = sub_14B6F70(a1);
    }
    else if ( *(_QWORD *)(a1 + 464) == v26 )
    {
      if ( *(_WORD *)(a1 + 32) != 5 )
      {
        v16 = 1562;
        goto LABEL_95;
      }
      v120 = (int *)sub_14803B0(a1, (__int64)v25, v33, v34, v35, v36);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 408) != v26 && *(_QWORD *)(a1 + 416) != v26 || *(_WORD *)(a1 + 32) != 5 )
        goto LABEL_27;
      if ( sub_1477AB0(5) )
        BUG();
      v88 = j__strlen("NA");
      v89 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
      v90 = *v89;
      if ( v90 == v88 && (!*v89 || !memcmp(v89 + 4, "NA", v90)) )
      {
        v91 = *(__int64 **)(a1 + 8);
        v25 = (__int64 *)(a1 + 16);
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
        sub_14634E0(v91, (int *)(a1 + 16));
        if ( *(_QWORD *)(a1 + 408) != v26 )
          v31 = v118;
        v118 = v31;
      }
      else
      {
LABEL_27:
        v25 = v127;
        v134 = 0;
        v37 = sub_147C6B0(a1, v127);
        v29 = v38;
        if ( !((unsigned int)v37 | HIDWORD(v38) & 0x7FFFFFFF | ((unsigned int)v38 | HIDWORD(v37)) & 0x7FFFFFFF) )
          goto LABEL_51;
        if ( *(_QWORD *)(a1 + 408) == v26 )
        {
          v128 = 20;
          v30 = v146;
          v92 = 0;
        }
        else if ( *(_QWORD *)(a1 + 416) == v26 )
        {
          v128 = 48;
          v30 = (__m128i *)((char *)&v146[1].m128i_u64[1] + 4);
          v92 = 1;
        }
        else
        {
          if ( *(_QWORD *)(a1 + 424) != v26 )
          {
            sub_1564820(v123, a1, v31, 1568);
            sub_1478560(v123, v26);
            v25 = v126;
            LOBYTE(v136) = 1;
            v135 = v134;
            sub_AEC610((__int64 *)v123, v126);
            sub_AEA040((__int64)v123);
            goto LABEL_55;
          }
          v128 = 76;
          v30 = (__m128i *)&v146[3].m128i_u64[1];
          v92 = 2;
        }
        v93 = v30->m128i_i32[0];
        if ( v30->m128i_i32[0] )
        {
          v133 = v38;
          v131 = v30;
          v129 = v92;
          v132 = v37;
          v130 = v93;
          sub_1564820(v123, a1, v31, 1567);
          sub_1478560(v123, v26);
          v25 = v126;
          LOBYTE(v136) = 1;
          v135 = __PAIR64__(v146[0].m128i_i32[v128 / 4 + 1], v130);
          sub_AEC610((__int64 *)v123, v126);
          sub_AEA040((__int64)v123);
          v30 = v131;
          v92 = v129;
          v29 = v133;
          v37 = v132;
        }
        v28 = v92;
        v30->m128i_i32[0] = v31;
        v27 = 28LL * v92;
        *(__int64 *)((char *)v146[0].m128i_i64 + v27 + 4) = v37;
        v94 = v134;
        *(__int64 *)((char *)&v146[0].m128i_i64[1] + v27 + 4) = v29;
        *(__int64 *)((char *)v146[1].m128i_i64 + v27 + 4) = v94;
      }
    }
LABEL_55:
    if ( *(_WORD *)(a1 + 32) != 66 )
    {
      v42 = (__int64)v124;
      v52 = 0;
      goto LABEL_57;
    }
    v108 = *(__int64 **)(a1 + 8);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
    sub_14634E0(v108, (int *)(a1 + 16));
    if ( *(_WORD *)(a1 + 32) != 5 )
      goto LABEL_94;
  }
  v41 = *(_WORD *)(a1 + 32);
  v42 = (__int64)v124;
  if ( (unsigned __int16)(v41 - 14) > 1u && v41 != 17 && (unsigned __int16)(v41 - 18) > 1u )
  {
LABEL_43:
    sub_1564840(v145, a1, a1 + 16, 19);
    sub_14780E0(v145, 2);
    goto LABEL_5;
  }
  v52 = sub_14B6F70(a1);
LABEL_57:
  v53 = sub_14808E0(v42, v25, v27, v28, v29, (__int64)v30);
  if ( v53 )
    goto LABEL_6;
  if ( a5 )
    *a5 = HIDWORD(v144);
  if ( v118 )
  {
    v54 = (_BYTE **)v52;
    v55 = a4;
    v56 = 0;
    v57 = a1;
    v123 = (unsigned __int8 **)&v135;
    while ( 1 )
    {
      v58 = 7LL * v56;
      v59 = &v146[0].m128i_i8[v58 * 4];
      v115 = v146[0].m128i_i32[v58];
      if ( v115 )
        break;
LABEL_90:
      if ( ++v56 == 3 )
        goto LABEL_91;
    }
    if ( !v53 )
    {
      v127 = v55;
      LODWORD(v126) = v56;
      v124 = v54;
      sub_1564820(v145, v57, v118, 2064);
      v60 = v146[1].m128i_i32[v58 + 2];
      LOBYTE(v136) = 1;
      v135 = __PAIR64__(v60, v115);
      sub_AEC610((__int64 *)v145, (__int64 *)v123);
      sub_AEA040((__int64)v145);
      v55 = v127;
      v56 = (unsigned int)v126;
      v54 = v124;
    }
    v61 = v56 + 1;
    v62 = &v146[1].m128i_i8[28 * v56 + 12];
    while ( 1 )
    {
      *(_QWORD *)v59 = 0;
      v56 = v61;
      *((_QWORD *)v59 + 1) = 0;
      *((_QWORD *)v59 + 2) = 0;
      *((_DWORD *)v59 + 6) = 0;
      if ( v61 == 3 )
        break;
      v59 = v62;
      v62 += 28;
      if ( !*((_DWORD *)v62 - 7) )
      {
        v53 = 1;
        goto LABEL_90;
      }
      ++v61;
    }
LABEL_91:
    v52 = (__int64)v54;
    a4 = v55;
  }
  v95 = HIDWORD(v144);
  v96 = sub_15D92D0(a4[5], 192);
  sub_14798C0(v96, a2, a6, a7, (v95 << 32) | v121, a8);
  v97 = *(_DWORD *)(v96 + 56);
  *(_QWORD *)(v96 + 64) = v52 & 0xFFFFFFFFFFFFFFFELL;
  *(_QWORD *)(v96 + 40) = 0;
  *(_QWORD *)(v96 + 48) = 0;
  *(_DWORD *)(v96 + 56) = v97 & 0x7F800000 | 0x40001;
  *(_DWORD *)(v96 + 60) = v118;
  v98 = sub_15D7D80(v96);
  v99 = v122;
  *(_QWORD *)(v96 + 72) = v98;
  v100 = v146[1].m128i_i64[0];
  si128 = _mm_load_si128(v146);
  v102 = _mm_loadu_si128((const __m128i *)((char *)&v146[1].m128i_u64[1] + 4));
  *(_QWORD *)(v96 + 80) = v117 | 2;
  v103 = _mm_loadh_ps((const double *)&v120);
  v104 = _mm_loadu_si128((const __m128i *)&v146[3].m128i_u64[1]);
  v105 = v96 + 8LL * *(unsigned __int16 *)(v96 + 56) + 80;
  *(_QWORD *)(v105 + 16) = v100;
  LODWORD(v100) = v146[1].m128i_i32[2];
  *(_DWORD *)(v105 + 84) = v99;
  *(_DWORD *)(v105 + 24) = v100;
  v106 = *(__int64 *)((char *)&v146[2].m128i_i64[1] + 4);
  *(__m128 *)(v105 + 88) = v103;
  *(_QWORD *)(v105 + 44) = v106;
  LODWORD(v106) = v146[3].m128i_i32[1];
  *(__m128i *)v105 = si128;
  *(_DWORD *)(v105 + 52) = v106;
  v107 = v146[4].m128i_i64[1];
  *(__m128i *)(v105 + 28) = v102;
  *(_QWORD *)(v105 + 72) = v107;
  LODWORD(v107) = v147;
  *(__m128i *)(v105 + 56) = v104;
  *(_DWORD *)(v105 + 80) = v107;
  sub_147F4B0((__int64)(a4 + 6), v96);
  sub_147F4B0((__int64)(a4 + 1), v96);
  result = v137;
  *v137 = v138;
  return result;
}
