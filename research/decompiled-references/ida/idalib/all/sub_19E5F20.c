__int64 __fastcall sub_19E5F20(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  unsigned __int64 v7; // r15
  __int64 v8; // r14
  __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // r9
  _QWORD *v15; // r14
  unsigned int v16; // r13d
  char v17; // al
  _QWORD *v18; // r13
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r9
  unsigned __int64 v22; // r13
  unsigned int v23; // edi
  unsigned int v24; // eax
  __int64 *v25; // rsi
  __int64 v26; // r11
  __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rbp
  char v35; // r12
  char v36; // r13
  _QWORD *v37; // rbx
  unsigned __int64 v38; // r15
  char v39; // al
  char v40; // r15
  char v41; // r14
  unsigned __int64 v42; // r13
  char v43; // r12
  char v44; // r13
  unsigned __int64 v45; // rbp
  _QWORD *v46; // rbx
  unsigned __int64 v47; // r15
  char v48; // al
  unsigned __int64 v49; // rsi
  int v50; // esi
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rbx
  unsigned __int64 v58; // rbx
  __int64 v59; // rbp
  __int64 result; // rax
  int v61; // r13d
  int v62; // esi
  unsigned __int64 v63; // rsi
  int v64; // eax
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  unsigned int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // r15
  __int64 v74; // r15
  __int64 v75; // r12
  int v76; // r13d
  unsigned int v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rdi
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rax
  __m128 *v82; // rsi
  __int64 v83; // r15
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned __int64 v87; // r9
  char v88; // al
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // rax
  __int64 v91; // r14
  _QWORD *v92; // r12
  char v93; // al
  __int64 v94; // r9
  _QWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  _QWORD *v101; // rax
  int v102; // esi
  int v103; // eax
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // r12
  unsigned __int64 v106; // r13
  unsigned __int64 *v107; // rax
  int v108; // r9d
  __int64 v109; // r8
  unsigned __int64 v110; // rdi
  _QWORD *v111; // [rsp+8h] [rbp-180h]
  __int64 v112; // [rsp+8h] [rbp-180h]
  __int64 v114; // [rsp+18h] [rbp-170h]
  unsigned __int64 v115; // [rsp+18h] [rbp-170h]
  unsigned __int64 v116; // [rsp+18h] [rbp-170h]
  unsigned __int64 v117; // [rsp+18h] [rbp-170h]
  unsigned __int64 v118; // [rsp+18h] [rbp-170h]
  __int64 v119; // [rsp+18h] [rbp-170h]
  __int64 v122; // [rsp+28h] [rbp-160h]
  __int64 v123; // [rsp+28h] [rbp-160h]
  __int64 v124; // [rsp+28h] [rbp-160h]
  unsigned __int64 v125; // [rsp+28h] [rbp-160h]
  __int64 v126; // [rsp+30h] [rbp-158h]
  __int64 v127; // [rsp+30h] [rbp-158h]
  __int64 v128[2]; // [rsp+38h] [rbp-150h] BYREF
  __int64 v129; // [rsp+48h] [rbp-140h] BYREF
  __int64 v130; // [rsp+54h] [rbp-134h]
  char v131; // [rsp+5Ch] [rbp-12Ch]
  void *v132[2]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v133; // [rsp+70h] [rbp-118h] BYREF
  unsigned __int64 v134; // [rsp+80h] [rbp-108h] BYREF
  __int64 v135; // [rsp+88h] [rbp-100h]
  void *v136; // [rsp+98h] [rbp-F0h]
  __int64 v137; // [rsp+A8h] [rbp-E0h] BYREF
  __m128 v138; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v139; // [rsp+D0h] [rbp-B8h]
  unsigned __int8 *v140; // [rsp+E0h] [rbp-A8h] BYREF
  char v141; // [rsp+138h] [rbp-50h]
  unsigned int v142; // [rsp+140h] [rbp-48h]
  char v143; // [rsp+144h] [rbp-44h]

  v7 = (unsigned __int64)a6 << 32;
  v8 = a5;
  v10 = (__int64)a1;
  v128[0] = a2;
  v111 = (_QWORD *)sub_168B6C0((__int64)a1);
  v12 = sub_1897840((__int64)a1, a2, v7 | v8, 0, 1);
  if ( !v12 )
  {
    v12 = sub_1897840((__int64)a1, v128[0], v7 | v8, 0, 0);
    if ( !v12 )
    {
      v71 = sub_18979A0(a1, v128[0], 0);
      if ( v71 )
      {
        v129 = *(_QWORD *)(v71 + 40);
        sub_168B9F0((__int64)&v138, a1, a4, 0x1D29u, 0);
        v72 = sub_19D3F70((__int64)&v138, v128);
        v73 = sub_19D3F70(v72, &v129);
        sub_FDEB80((__int64)v132, &v129);
        v131 = 1;
        LODWORD(v130) = a5 + 1;
        HIDWORD(v130) = a6 - 1;
        sub_19CF590((__int64)&v134, v130, 1, (_BYTE *)v132[0], (signed __int64)v132[1]);
        sub_1589170(v73, &v134);
        if ( v136 != &v137 )
          operator delete(v136);
        if ( v132[0] != &v133 )
          operator delete(v132[0]);
      }
      else
      {
        sub_168B9F0((__int64)&v138, a1, a4, 0x1D28u, 0);
        sub_19D3F70((__int64)&v138, v128);
      }
      sub_15F7200(&v138);
      goto LABEL_36;
    }
  }
  v13 = *a1;
  v14 = *(_QWORD *)(*a1 + 736);
  v15 = *(_QWORD **)(v14 + 64);
  v16 = *(_DWORD *)(v14 + 80);
  v114 = v14 + 64;
  if ( !a7
    || (v122 = *(_QWORD *)(*a1 + 736),
        v17 = sub_FD3830(*(_QWORD *)(*(_QWORD *)(v13 + 264) + 32LL), 0x1BCFu, 0, *(_QWORD *)(v13 + 264), v11, v14),
        v14 = v122,
        v17 == 1) )
  {
    v123 = v14;
    if ( !v16 )
      goto LABEL_8;
    goto LABEL_10;
  }
  if ( *(_DWORD *)(v122 + 72) )
    sub_171EC50(&v138, v15, &v15[5 * v16], v114, 0);
  else
    sub_171EC50(&v138, &v15[5 * v16], &v15[5 * v16], v114, 1);
  v19 = v138.m128_u64[1];
  v18 = (_QWORD *)v138.m128_u64[0];
  v20 = *(_QWORD *)(v13 + 736);
  sub_171EC50(
    &v138,
    (_QWORD *)(*(_QWORD *)(v20 + 64) + 40LL * *(unsigned int *)(v20 + 80)),
    (_QWORD *)(*(_QWORD *)(v20 + 64) + 40LL * *(unsigned int *)(v20 + 80)),
    v20 + 64,
    1);
  if ( (_QWORD *)v138.m128_u64[0] != v18 )
  {
    v118 = v138.m128_u64[0];
    v90 = v19;
    v91 = v12;
    v92 = (_QWORD *)v90;
    while ( 1 )
    {
      v93 = sub_19DA8A0(v13, a3, a5, a6, v91, (__int64)(v18 + 1));
      v94 = (__int64)(v18 + 3);
      if ( v93 )
      {
        v12 = v91;
        sub_19DA8A0(v13, a3, a5, a6, v91, v94);
        break;
      }
      if ( (unsigned __int8)sub_19DA8A0(v13, a3, a5, a6, v91, v94) )
      {
LABEL_85:
        v12 = v91;
        break;
      }
      if ( v18 + 5 != v92 )
      {
        if ( v18[5] < 0xFFFFFFFFFFFFFFFELL )
        {
          v18 += 5;
          goto LABEL_84;
        }
        v95 = v18 + 10;
        while ( 1 )
        {
          v18 = v95;
          if ( v95 == v92 )
            break;
          v95 += 5;
          if ( *v18 < 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_84;
        }
      }
      v18 = v92;
LABEL_84:
      if ( (_QWORD *)v118 == v18 )
        goto LABEL_85;
    }
  }
  v13 = *a1;
  v21 = *(_QWORD *)(*a1 + 736);
  v16 = *(_DWORD *)(v21 + 80);
  v15 = *(_QWORD **)(v21 + 64);
  v123 = v21;
  v114 = v21 + 64;
  if ( !v16 )
  {
LABEL_8:
    sub_171EC50(&v138, &v15[5 * v16], &v15[5 * v16], v114, 1);
    v22 = v138.m128_u64[0];
    goto LABEL_12;
  }
LABEL_10:
  v23 = v16 - 1;
  v24 = (v16 - 1) & sub_FDE780(v128[0]);
  v16 = *(_DWORD *)(v123 + 80);
  v25 = &v15[5 * v24];
  v26 = *v25;
  if ( v128[0] != *v25 )
  {
    v102 = 1;
    if ( v26 == -1 )
    {
LABEL_92:
      v15 = *(_QWORD **)(v123 + 64);
      goto LABEL_8;
    }
    while ( 1 )
    {
      v108 = v102 + 1;
      v24 = v23 & (v24 + v102);
      v25 = &v15[5 * v24];
      v109 = *v25;
      if ( v128[0] == *v25 )
        break;
      v102 = v108;
      if ( v109 == -1 )
        goto LABEL_92;
    }
  }
  sub_171EC50(&v138, v25, (_QWORD *)(*(_QWORD *)(v123 + 64) + 40LL * v16), v114, 1);
  v22 = v138.m128_u64[0];
LABEL_12:
  v27 = *(_QWORD *)(v13 + 736);
  v28 = *(unsigned int *)(v27 + 80);
  v27 += 64;
  v29 = (_QWORD *)(*(_QWORD *)v27 + 40 * v28);
  sub_171EC50(&v138, v29, v29, v27, 1);
  if ( v138.m128_u64[0] == v22 )
  {
LABEL_61:
    sub_168B9F0((__int64)&v138, (__int64 *)v10, a3, 0xE76u, 0);
    v74 = *(_QWORD *)(v12 + 40);
    if ( v141 )
    {
      sub_AE9DF0(&v140, *(_QWORD *)(v12 + 40), 9u);
    }
    else if ( v143 )
    {
      v96 = sub_168B9E0(&v138);
      v100 = v139;
      if ( v139 )
      {
        v119 = v96;
        v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v139 + 32LL))(v139);
        v96 = v119;
      }
      v134 = v100;
      v101 = sub_1587BC0(v96, (__int64 *)&v134, v96, v97, v98, v99);
      sub_AE9DF0((unsigned __int8 **)(*v101 + 32LL * v142 + 8), v74, 9u);
    }
    sub_15F7200(&v138);
    sub_168B9F0((__int64)&v138, (__int64 *)v10, *(_DWORD *)(v12 + 24), 0x171Eu, 0);
    v134 = *(_QWORD *)(v12 + 40);
    sub_15894B0((__int64)&v138, (__int64 *)&v134);
    sub_15F7200(&v138);
    goto LABEL_32;
  }
  v32 = v22 + 24;
  v33 = v22 + 8;
  if ( v22 == -8 )
  {
    v42 = 0;
    v41 = 1;
    v40 = 0;
  }
  else
  {
    v124 = v22 + 24;
    v115 = v12;
    v34 = 0;
    v35 = 0;
    v126 = v10;
    v36 = 1;
    v37 = (_QWORD *)v33;
    do
    {
      v38 = *v37 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v38 )
      {
        v39 = sub_BA7E40(*v37 & 0xFFFFFFFFFFFFFFF8LL, (__int64)v29, v33, v32, v30, v31);
        if ( v39 )
        {
          v35 = v39;
          v34 = v38;
        }
        else
        {
          v36 = 0;
        }
      }
      v37 = (_QWORD *)(v37[1] & 0xFFFFFFFFFFFFFFF8LL);
    }
    while ( v37 );
    v32 = v124;
    v40 = v35;
    v41 = v36;
    v12 = v115;
    v42 = v34;
    v10 = v126;
    if ( !v124 )
    {
      v49 = 0;
      goto LABEL_28;
    }
  }
  v116 = v12;
  v43 = v40;
  v125 = v42;
  v44 = v41;
  v45 = 0;
  v127 = v10;
  v46 = (_QWORD *)v32;
  do
  {
    v47 = *v46 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v47 )
    {
      v48 = sub_BA7E40(*v46 & 0xFFFFFFFFFFFFFFF8LL, 0, v33, v32, v30, v31);
      if ( v48 )
      {
        v43 = v48;
        v45 = v47;
      }
      else
      {
        v44 = 0;
      }
    }
    v46 = (_QWORD *)(v46[1] & 0xFFFFFFFFFFFFFFF8LL);
  }
  while ( v46 );
  v49 = v45;
  v40 = v43;
  v12 = v116;
  v41 = v44;
  v10 = v127;
  v42 = v125;
LABEL_28:
  if ( !v42 )
    v42 = v49;
  if ( v41 )
    goto LABEL_61;
  if ( v40 )
  {
    v79 = *(_QWORD *)v10;
    v138.m128_u64[0] = v128[0];
    v80 = sub_15F1670(v79);
    if ( v80
      && ((v81 = sub_BA85D0(v80),
           v82 = (__m128 *)v138.m128_u64[0],
           v83 = v81,
           (v87 = sub_BAD910(v81, v138.m128_i64[0], 1, 0, 1, 0)) != 0)
       || (v82 = &v138, (v87 = sub_BADBA0(v83, (__int64)&v138, 1, v85, v86, 0)) != 0)
       || (v82 = (__m128 *)v138.m128_u64[0], (v87 = sub_BAD910(v83, v138.m128_i64[0], 0, 0, 1, 0)) != 0)
       || (v82 = &v138, (v87 = sub_BADBA0(v83, (__int64)&v138, 0, v85, v86, 0)) != 0)) )
    {
      v117 = v87;
      v88 = sub_BA7E40(v87, (__int64)v82, v84, v85, v86, v87);
      v31 = v117;
      if ( !v88 )
        goto LABEL_32;
      sub_168B9F0((__int64)&v138, (__int64 *)v10, a3, 0x1C59u, 0);
      sub_19D3F70((__int64)&v138, v128);
      sub_15F7200(&v138);
      sub_168B9F0((__int64)&v138, (__int64 *)v10, *(_DWORD *)(v117 + 24), 0x171Eu, 0);
      v89 = *(_QWORD *)(v117 + 40);
    }
    else
    {
      sub_168B9F0((__int64)&v138, (__int64 *)v10, a3, 0x1CD9u, 0);
      sub_19D3F70((__int64)&v138, v128);
      sub_15F7200(&v138);
      sub_168B9F0((__int64)&v138, (__int64 *)v10, *(_DWORD *)(v42 + 24), 0x171Eu, 0);
      v89 = *(_QWORD *)(v42 + 40);
    }
    v134 = v89;
    sub_15894B0((__int64)&v138, (__int64 *)&v134);
    sub_15F7200(&v138);
  }
LABEL_32:
  if ( (*(_BYTE *)(v12 + 59) & 3) == 2 )
    goto LABEL_36;
  v50 = *(_DWORD *)(v12 + 24);
  if ( v50 )
  {
    v51 = sub_1021680(*(_QWORD *)(*(_QWORD *)v10 + 272LL), v50);
    if ( v51 )
    {
      if ( v51 != 3 )
        goto LABEL_36;
    }
  }
  v61 = *(_DWORD *)(v10 + 40);
  v134 = v128[0];
  v135 = a3;
  if ( !v61 )
  {
    v138.m128_u64[0] = 0;
LABEL_44:
    v62 = 2 * v61;
    goto LABEL_45;
  }
  v75 = *(_QWORD *)(v10 + 24);
  v76 = v61 - 1;
  v77 = v76 & sub_FDE780(v128[0]);
  v63 = v75 + 16LL * v77;
  v78 = *(_QWORD *)v63;
  if ( v134 == *(_QWORD *)v63 )
  {
LABEL_65:
    sub_1898540(
      &v138,
      (_QWORD *)v63,
      (_QWORD *)(*(_QWORD *)(v10 + 24) + 16LL * *(unsigned int *)(v10 + 40)),
      v10 + 24,
      1);
    goto LABEL_36;
  }
  if ( v78 != -1 )
  {
    v30 = 1;
    v110 = 0;
    while ( 1 )
    {
      if ( !v110 && v78 == -2 )
        v110 = v63;
      v31 = (unsigned int)(v30 + 1);
      v77 = v76 & (v30 + v77);
      v63 = v75 + 16LL * v77;
      v78 = *(_QWORD *)v63;
      if ( v134 == *(_QWORD *)v63 )
        goto LABEL_65;
      if ( v78 == -1 )
      {
        v33 = *(unsigned int *)(v10 + 40);
        v61 = *(_DWORD *)(v10 + 40);
        if ( !v110 )
          goto LABEL_99;
        v63 = v110;
        goto LABEL_100;
      }
      v30 = (unsigned int)v31;
    }
  }
  v33 = *(unsigned int *)(v10 + 40);
LABEL_99:
  v61 = v33;
LABEL_100:
  v103 = *(_DWORD *)(v10 + 32);
  v32 = (unsigned int)(3 * v33);
  v138.m128_u64[0] = v63;
  v64 = v103 + 1;
  if ( 4 * v64 >= (unsigned int)v32 )
    goto LABEL_44;
  v32 = (unsigned int)v33 >> 3;
  if ( (int)v33 - (v64 + *(_DWORD *)(v10 + 36)) > (unsigned int)v32 )
    goto LABEL_46;
  v62 = v33;
LABEL_45:
  sub_18ACB90(v10 + 24, v62, v33, v32, v30, v31);
  sub_19D29B0((__int64 *)(v10 + 24), (__int64 *)&v134, &v138);
  v63 = v138.m128_u64[0];
  v64 = *(_DWORD *)(v10 + 32) + 1;
LABEL_46:
  *(_DWORD *)(v10 + 32) = v64;
  if ( *(_QWORD *)v63 != -1 )
    --*(_DWORD *)(v10 + 36);
  v65 = v134;
  *(_DWORD *)(v63 + 8) = 0;
  *(_QWORD *)v63 = v65;
  sub_1898540(&v138, (_QWORD *)v63, (_QWORD *)(*(_QWORD *)(v10 + 24) + 16LL * *(unsigned int *)(v10 + 40)), v10 + 24, 1);
  v66 = *(unsigned int *)(v10 + 56);
  *(_DWORD *)(v138.m128_u64[0] + 8) = v66;
  v67 = *(unsigned int *)(v10 + 60);
  if ( v66 < v67 )
  {
    v68 = *(_QWORD *)(v10 + 48) + 16 * v66;
    *(_QWORD *)v68 = v134;
    *(_DWORD *)(v68 + 8) = v135;
    ++*(_DWORD *)(v10 + 56);
    if ( (*(_BYTE *)(sub_168B6E0(v10) + 107) & 4) == 0 )
      goto LABEL_37;
    goto LABEL_50;
  }
  v104 = v66 + 1;
  v105 = v134;
  v106 = (unsigned int)v135;
  if ( v67 < v104 )
    sub_2237220(v10 + 48, v10 + 64, v104, 16);
  v107 = (unsigned __int64 *)(*(_QWORD *)(v10 + 48) + 16LL * *(unsigned int *)(v10 + 56));
  *v107 = v105;
  v107[1] = v106;
  ++*(_DWORD *)(v10 + 56);
LABEL_36:
  if ( (*(_BYTE *)(sub_168B6E0(v10) + 107) & 4) == 0 )
    goto LABEL_37;
LABEL_50:
  v69 = sub_FDEF00(v128[0]);
  if ( v69 <= 0xB && ((1LL << v69) & 0xEC0) != 0 )
  {
    sub_168B9F0((__int64)&v138, (__int64 *)v10, a3, 0xBD1u, 0);
    v70 = sub_19D3F70((__int64)&v138, v128);
    v134 = __PAIR64__(a6, a5);
    sub_1587DB0(v70, (__int64 *)&v134);
    sub_15F7200(&v138);
  }
LABEL_37:
  v52 = sub_A8A1F0(v111);
  v57 = *(_QWORD *)(v52 + 48);
  if ( v57 )
    v58 = v57 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v58 = sub_A7AA70((__int64)v111, v52, v53, v54, v55, v56);
  v59 = v128[0];
  result = sub_EEE9A0(32, v111, 8u);
  *(_WORD *)result = *(_WORD *)result & 0xFE00 | 0x1E;
  if ( unk_2CD7484 )
  {
    v112 = result;
    sub_EE9B50(30);
    result = v112;
  }
  *(_QWORD *)(result + 8) = v58;
  *(_WORD *)(result + 1) &= 0xF801u;
  *(_QWORD *)(result + 16) = v59;
  *(_DWORD *)(result + 24) = a3;
  *(_DWORD *)(result + 28) = a6;
  return result;
}
