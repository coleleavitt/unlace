void __fastcall sub_171D220(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rax
  char v9; // dl
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __m128i v14; // xmm0
  __int64 *v15; // rdi
  __int64 v16; // r8
  __int64 *v17; // r9
  __int64 v18; // rax
  __m128i v19; // xmm1
  __m128 v20; // rax
  int v21; // eax
  char **v22; // r13
  int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  char *v27; // rax
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rbx
  int v31; // r12d
  int v32; // r14d
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  char *v37; // rax
  int v38; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __m128 v43; // xmm0
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  _QWORD *v48; // r15
  __int64 v49; // r8
  __int64 *v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  _QWORD *v56; // rbx
  __int64 v57; // r12
  __int64 v58; // rax
  __m128i v59; // xmm2
  __int64 v60; // rdx
  __int64 v61; // rax
  _QWORD *v62; // rsi
  _QWORD *v63; // rdi
  __int64 *v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rax
  __m128i v67; // rax
  __int64 v68; // r8
  __int64 v69; // r9
  char *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 *v75; // r9
  __m128 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  char *v81; // rax
  int v82; // eax
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rcx
  __int64 v86; // rdx
  bool v87; // zf
  __int128 *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  _QWORD *v93; // r14
  __int64 v94; // r12
  char **v95; // [rsp+8h] [rbp-300h] BYREF
  __int64 v96; // [rsp+10h] [rbp-2F8h]
  __int128 *v97; // [rsp+18h] [rbp-2F0h] BYREF
  __m128 *v98; // [rsp+20h] [rbp-2E8h]
  __int64 v99; // [rsp+28h] [rbp-2E0h]
  __int128 v100; // [rsp+30h] [rbp-2D8h] BYREF
  __m128 v101; // [rsp+40h] [rbp-2C8h] BYREF
  void *v102[4]; // [rsp+50h] [rbp-2B8h] BYREF
  __m128 v103; // [rsp+70h] [rbp-298h] BYREF
  int v104; // [rsp+80h] [rbp-288h]
  __int64 v105; // [rsp+84h] [rbp-284h]
  int v106; // [rsp+90h] [rbp-278h]
  __int128 v107; // [rsp+98h] [rbp-270h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-260h]
  char v109; // [rsp+B0h] [rbp-258h]
  __int64 v110; // [rsp+B8h] [rbp-250h]
  __int64 v111; // [rsp+C0h] [rbp-248h]
  __int64 v112; // [rsp+C8h] [rbp-240h]
  __m128 v113; // [rsp+D0h] [rbp-238h] BYREF
  int v114; // [rsp+E0h] [rbp-228h]
  __int64 v115; // [rsp+E4h] [rbp-224h]
  int v116; // [rsp+F0h] [rbp-218h]
  __int128 v117; // [rsp+F8h] [rbp-210h] BYREF
  __int64 v118; // [rsp+108h] [rbp-200h]
  char v119; // [rsp+110h] [rbp-1F8h]
  __int64 v120; // [rsp+118h] [rbp-1F0h]
  __int64 v121; // [rsp+120h] [rbp-1E8h]
  __int64 v122; // [rsp+128h] [rbp-1E0h]
  __m128i v123; // [rsp+130h] [rbp-1D8h] BYREF
  __int64 v124; // [rsp+140h] [rbp-1C8h] BYREF
  __int16 v125; // [rsp+150h] [rbp-1B8h]
  __int64 v126; // [rsp+158h] [rbp-1B0h] BYREF
  __m128i v127; // [rsp+190h] [rbp-178h] BYREF
  __int128 v128; // [rsp+1A0h] [rbp-168h]
  __int64 v129; // [rsp+1B0h] [rbp-158h]
  __m128i v130; // [rsp+1B8h] [rbp-150h] BYREF
  __int64 v131; // [rsp+1C8h] [rbp-140h]
  char v132; // [rsp+1D0h] [rbp-138h] BYREF
  __int64 v133; // [rsp+1D8h] [rbp-130h]
  __int64 v134; // [rsp+1E0h] [rbp-128h]
  __int64 v135; // [rsp+1E8h] [rbp-120h]
  _BYTE *v136; // [rsp+210h] [rbp-F8h]
  __int64 v137; // [rsp+218h] [rbp-F0h]
  _BYTE v138[16]; // [rsp+220h] [rbp-E8h] BYREF
  __m128i v139; // [rsp+230h] [rbp-D8h] BYREF
  __int64 v140; // [rsp+240h] [rbp-C8h]
  __int64 v141; // [rsp+248h] [rbp-C0h]
  __int64 v142; // [rsp+250h] [rbp-B8h]
  _QWORD v143[3]; // [rsp+258h] [rbp-B0h] BYREF
  _QWORD v144[10]; // [rsp+270h] [rbp-98h] BYREF
  __int64 v145; // [rsp+2C0h] [rbp-48h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = *(_QWORD *)(a2 + 40);
  v5 = *a1;
  v6 = *a1;
  v7 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v4 & 7) != 0 )
    v7 = 0;
  v8 = sub_1703870(v6, v7);
  if ( *(_BYTE *)(v5 + 20) )
    v10 = *(unsigned int *)(v5 + 12);
  else
    v10 = *(unsigned int *)(v5 + 8);
  v11 = *(_QWORD *)v5 + 8 * v10;
  if ( v8 != (_QWORD *)v11 && *v8 >= 0xFFFFFFFFFFFFFFFELL )
  {
    v12 = v8 + 1;
    do
    {
      v13 = v12;
      if ( (_QWORD *)v11 == v12 )
        break;
      ++v12;
    }
    while ( *v13 >= 0xFFFFFFFFFFFFFFFELL );
  }
  if ( !v9 )
    return;
  v14 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 56) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) != 11
    || !*(_BYTE *)v3[1] )
  {
LABEL_33:
    v51 = v3[2];
    v139 = v14;
    v140 = 0;
    LODWORD(v128) = sub_16FE9F0(v51, v2);
    v127.m128i_i64[0] = v2;
    v130 = v139;
    *(_QWORD *)((char *)&v128 + 4) = 0;
    v139 = 0;
    v131 = v140;
    LODWORD(v129) = 0;
    v140 = 0;
    v133 = 0;
    v132 = v132 & 0x80 | 0x40;
    v134 = 0;
    v135 = 0;
    sub_15A3440((unsigned int *)&v127, 1, v52, v53, v54, v55);
    sub_1705410((__int64)&v139);
    if ( !*(_BYTE *)v3[3] )
    {
      LODWORD(v128) = v128 + 2;
      v132 |= 2u;
    }
    v56 = (_QWORD *)v3[2];
    v57 = *(_QWORD *)v3[4];
    sub_17048E0((__int64)&v139, (__int64)&v127);
    sub_17143A0(v56, &v139, v57);
    sub_1705410((__int64)v143);
    sub_1705410((__int64)&v130);
    return;
  }
  v15 = *(__int64 **)(v2 + 64);
  v100 = 0;
  v101 = 0;
  if ( !v15 || (v98 = &v101, v97 = &v100, sub_1705EB0(v15, &v100, &v101, 0), !(_QWORD)v100) )
  {
    v14 = 0;
    goto LABEL_33;
  }
  v18 = v3[2];
  v19 = _mm_loadu_si128((const __m128i *)(v18 + 184));
  v130.m128i_i64[1] = (__int64)&v132;
  v131 = 0x400000000LL;
  v127 = v19;
  v137 = 0x200000000LL;
  v128 = 0u;
  v129 = 0;
  v130.m128i_i64[0] = 0;
  v136 = v138;
  v20.m128_u64[0] = sub_16FEC70(
                      *(_QWORD **)(*(_QWORD *)(v18 + 176) + 240LL),
                      *(_QWORD **)(*(_QWORD *)(v18 + 176) + 248LL),
                      (__int64)v138,
                      0x200000000LL,
                      v16,
                      v17);
  v113 = v20;
  v21 = sub_B8C330(*(_QWORD *)v3[5]);
  v22 = (char **)v127.m128i_i64[0];
  v23 = v21;
  sub_F6C520(*(_QWORD *)(v100 + 24));
  v27 = sub_16FEFA0(*(_QWORD *)(v100 + 24), (__m128i *)&v113, v22, v24, v25, v26);
  sub_15A3150((__int64)&v127, (__int64)v27);
  sub_171ACE0(v23, (__m128i *)&v113, v2, &v127);
  sub_15A3210((__int64)&v127, 7, (char *)&byte_22F0C30);
  if ( v101.m128_u64[0] && *(char *)(v101.m128_u64[0] + 19) < 0 )
  {
    sub_15A3090((__int64)&v127, (__int64)"...");
  }
  else if ( *(_BYTE *)(v100 + 16) != 25 )
  {
    v29 = *(unsigned __int16 *)(v100 + 22);
    if ( *(_WORD *)(v100 + 22) )
    {
      v96 = (__int64)v3;
      v30 = 0;
      v99 = v2;
      v31 = v29;
      v32 = v29 - 1;
      v95 = (char **)&v124;
      while ( 1 )
      {
        LOBYTE(v140) = 0;
        sub_171B530(
          &v123,
          (const __m128i *)&v113,
          *(_QWORD *)(*((_QWORD *)&v100 + 1) + 8 * v30 + 16),
          0,
          0,
          v28,
          v139.m128i_i64[0],
          v139.m128i_i64[1],
          v140);
        if ( v32 == (_DWORD)v30 && v101.m128_u64[0] && *(char *)(v101.m128_u64[0] + 19) < 0 )
          sub_9EE7C0(&v123, ", ...");
        v139.m128i_i64[0] = (__int64)&v123;
        LOWORD(v142) = 260;
        v37 = sub_15A4EB0((char **)v127.m128i_i64[0], (const void ***)&v139, v33, v34, v35, v36);
        sub_15A3090((__int64)&v127, (__int64)v37);
        if ( (char **)v123.m128i_i64[0] == v95 )
        {
          if ( v31 == (_DWORD)++v30 )
          {
LABEL_25:
            v3 = (__int64 *)v96;
            v2 = v99;
            break;
          }
        }
        else
        {
          operator delete((void *)v123.m128i_i64[0]);
          if ( v31 == (_DWORD)++v30 )
            goto LABEL_25;
        }
        sub_15A3210((__int64)&v127, 15, (char *)&byte_22F0C30);
      }
    }
  }
  sub_15A3210((__int64)&v127, 8, (char *)&byte_22F0C30);
  v38 = sub_16FE9F0(v3[2], v2);
  v96 = v2;
  v95 = (char **)sub_15A5CA0((__int64)&v127, v2, v39, v40, v41, v42);
  v105 = 0x300000000LL;
  v104 = v38;
  v43 = _mm_loadh_ps((const double *)&v95);
  v106 = 0;
  v103 = v43;
  v109 = v109 & 0x80 | 0x40;
  v107 = 0;
  v108 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0;
  sub_15A3440((unsigned int *)&v103, 1, v44, v45, v46, v47);
  if ( !*(_BYTE *)v3[3] )
  {
    v104 += 2;
    v109 |= 2u;
  }
  v48 = (_QWORD *)v3[2];
  v95 = *(char ***)v3[4];
  sub_17048E0((__int64)&v139, (__int64)&v103);
  sub_17143A0(v48, &v139, (__int64)v95);
  sub_1705410((__int64)v143);
  if ( (*(_BYTE *)(v2 + 72) & 1) == 0 )
  {
    v58 = v3[2];
    v59 = _mm_loadu_si128((const __m128i *)(v58 + 184));
    v143[1] = v144;
    v143[2] = 0x400000000LL;
    v139 = v59;
    v144[8] = &v145;
    v60 = v3[6];
    v140 = 0;
    v141 = 0;
    v142 = 0;
    v143[0] = 0;
    v144[9] = 0x200000000LL;
    v61 = *(_QWORD *)(v58 + 176);
    v62 = *(_QWORD **)(v61 + 248);
    v63 = *(_QWORD **)(v61 + 240);
    v95 = *(char ***)(v60 + 16);
    v123.m128i_i64[0] = sub_16FEC70(v63, v62, v60, (__int64)v95, v49, v50);
    v64 = (__int64 *)v3[5];
    v123.m128i_i64[1] = v65;
    v66 = (_QWORD *)sub_B8C330(*v64);
    sub_1702F80(v66, &v123, v2, (__int64)v95, (char ***)&v139);
    v95 = *(char ***)(v3[2] + 184);
    v67.m128i_i64[0] = (__int64)sub_995750(v2);
    v125 = 261;
    v123 = v67;
    v70 = sub_15A4EB0(v95, (const void ***)&v123, v67.m128i_i64[1], 261, v68, v69);
    sub_15A2F70((__int64)&v139, (__int64)v70);
    sub_15A3210((__int64)&v139, 18, (char *)&byte_22F0C30);
    v71 = v3[2];
    LOBYTE(v124) = 0;
    v76.m128_u64[0] = sub_16FEC70(
                        *(_QWORD **)(*(_QWORD *)(v71 + 176) + 240LL),
                        *(_QWORD **)(*(_QWORD *)(v71 + 176) + 248LL),
                        v72,
                        v73,
                        v74,
                        v75);
    v113 = v76;
    v95 = (char **)v102;
    sub_171B120(
      (__int64)v102,
      (const __m128i *)&v113,
      v2,
      v97,
      (__int64)v98,
      1,
      0,
      v123.m128i_i64[0],
      v123.m128i_i64[1],
      v124);
    v125 = 260;
    v123.m128i_i64[0] = (__int64)v95;
    v81 = sub_15A4EB0((char **)v139.m128i_i64[0], (const void ***)&v123, v77, v78, v79, v80);
    sub_15A3090((__int64)&v139, (__int64)v81);
    v82 = sub_16FE9F0(v3[2], v2);
    v85 = 4294967293LL;
    v86 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v100 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v86 + 16) == 13 )
    {
      v87 = ((*(_WORD *)(v86 + 18) >> 3) & 0x1FF) == 435;
      v86 = 3;
      if ( v87 )
        v85 = 3;
    }
    LODWORD(v96) = v85 + v82;
    v88 = (__int128 *)sub_15A5CA0((__int64)&v139, v2, v86, v85, v83, v84);
    v98 = (__m128 *)v2;
    v97 = v88;
    v116 = 0;
    v114 = v96;
    v115 = 0x300000000LL;
    v113 = _mm_loadh_ps((const double *)&v97);
    v117 = 0;
    v118 = 0;
    v119 = v119 & 0x80 | 0x40;
    v120 = 0;
    v121 = 0;
    v122 = 0;
    sub_15A3440((unsigned int *)&v113, 1, v89, v90, v91, v92);
    if ( !*(_BYTE *)v3[3] )
    {
      v114 += 2;
      v119 |= 2u;
    }
    v93 = (_QWORD *)v3[2];
    v94 = *(_QWORD *)v3[4];
    sub_17048E0((__int64)&v123, (__int64)&v113);
    sub_17143A0(v93, &v123, v94);
    sub_1705410((__int64)&v126);
    sub_1705410((__int64)&v117);
    if ( v102[0] != v95 + 2 )
      operator delete(v102[0]);
    sub_1704B40(&v139);
  }
  sub_1705410((__int64)&v107);
  sub_1704B40(&v127);
}
