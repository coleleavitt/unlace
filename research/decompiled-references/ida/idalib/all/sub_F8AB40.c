void __fastcall sub_F8AB40(__int64 a1, char *a2, __int64 a3, unsigned __int8 a4, unsigned __int8 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 *v14; // r13
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned int v23; // eax
  int v24; // edx
  __int64 *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 *k; // rsi
  char *v29; // rbx
  int v30; // eax
  __int64 *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  __int64 *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  int v45; // eax
  int v46; // esi
  bool v47; // zf
  __int64 v48; // rax
  __int64 *v49; // r8
  __int64 v50; // rbp
  __int64 v51; // rbp
  __int64 v52; // rax
  __int64 v53; // r12
  int v54; // esi
  __int64 v55; // rbx
  __int64 v56; // rdx
  int v57; // r9d
  int v58; // edi
  unsigned int i; // eax
  _QWORD *v60; // rsi
  unsigned int v61; // eax
  unsigned int v62; // eax
  __int64 v63; // rsi
  __int64 *v64; // rsi
  __int64 *v65; // rdx
  __int64 v66; // r9
  __int64 v67; // rax
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  unsigned int v72; // esi
  __int64 v73; // rdi
  unsigned int v74; // edx
  __int64 v75; // rax
  char *v76; // rcx
  __int64 *v77; // rdi
  __int64 v78; // r9
  __int64 v79; // r8
  unsigned __int64 v80; // rdx
  __int64 v81; // r9
  unsigned __int64 v82; // r12
  __int64 v83; // rax
  __int64 *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 *v87; // rsi
  int v88; // eax
  __int64 v89; // r8
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 *v93; // rdx
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  int v96; // ecx
  __int64 v97; // rsi
  int v98; // ecx
  unsigned int v99; // edx
  __int64 *v100; // rax
  __int64 v101; // rdi
  bool v102; // al
  __int64 v103; // rdx
  __int64 *v104; // rsi
  int v105; // eax
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 *v110; // rdx
  __int64 v111; // rax
  int v112; // eax
  int v113; // edi
  __int64 v114; // rax
  __int64 v115; // r10
  __int64 *v116; // rax
  __int64 v117; // rcx
  __int64 *v118; // rbp
  __int64 *v119; // rbx
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  __int64 v127; // r9
  unsigned int v128; // eax
  void *v129; // rax
  __int64 v130; // rdx
  void *v131; // rsi
  int v132; // esi
  unsigned int v133; // eax
  __int64 v134; // rax
  __int64 *v135; // rax
  int v136; // r12d
  __int64 v137; // r11
  int v138; // ecx
  __int64 v139; // rcx
  __int64 v140; // rbx
  int v141; // ebp
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  _QWORD *v146; // rax
  __int64 v147; // rdx
  _QWORD *j; // rdx
  unsigned int v149; // edx
  unsigned __int64 v150; // rax
  __int64 v151; // [rsp+0h] [rbp-508h]
  __int64 v153; // [rsp+10h] [rbp-4F8h]
  __int64 *v155; // [rsp+20h] [rbp-4E8h]
  __int64 **v156; // [rsp+28h] [rbp-4E0h]
  unsigned __int64 v157; // [rsp+30h] [rbp-4D8h]
  unsigned int v159; // [rsp+54h] [rbp-4B4h]
  int v160; // [rsp+58h] [rbp-4B0h]
  __int64 v162; // [rsp+60h] [rbp-4A8h] BYREF
  __int64 *v163; // [rsp+68h] [rbp-4A0h] BYREF
  __m128 v164; // [rsp+70h] [rbp-498h] BYREF
  __m128i v165[2]; // [rsp+80h] [rbp-488h] BYREF
  _OWORD v166[2]; // [rsp+A0h] [rbp-468h] BYREF
  _QWORD v167[2]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned int v168; // [rsp+D0h] [rbp-438h]
  void *ptr; // [rsp+D8h] [rbp-430h]
  __int64 v170; // [rsp+E0h] [rbp-428h]
  _BYTE v171[72]; // [rsp+E8h] [rbp-420h] BYREF
  _QWORD v172[4]; // [rsp+130h] [rbp-3D8h] BYREF
  void *v173; // [rsp+150h] [rbp-3B8h]
  __int64 v174; // [rsp+158h] [rbp-3B0h]
  _BYTE v175[512]; // [rsp+160h] [rbp-3A8h] BYREF
  void *v176; // [rsp+360h] [rbp-1A8h]
  __int64 v177; // [rsp+368h] [rbp-1A0h]
  int v178; // [rsp+370h] [rbp-198h]
  char v179; // [rsp+374h] [rbp-194h]
  __int64 v180; // [rsp+378h] [rbp-190h] BYREF
  void *v181; // [rsp+398h] [rbp-170h] BYREF
  __int64 v182; // [rsp+3A0h] [rbp-168h]
  _BYTE v183[256]; // [rsp+3A8h] [rbp-160h] BYREF
  void *src; // [rsp+4A8h] [rbp-60h]
  __int64 v185; // [rsp+4B0h] [rbp-58h]
  unsigned int v186; // [rsp+4B8h] [rbp-50h]
  __int64 v187; // [rsp+4C0h] [rbp-48h]

  v6 = a1;
  v8 = *(unsigned int *)(a1 + 872);
  v9 = *(unsigned int *)(a1 + 168);
  v160 = *(_DWORD *)(a1 + 168);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 876) )
  {
    sub_2237220(a1 + 864, a1 + 880, v8 + 1, 8);
    v8 = *(unsigned int *)(a1 + 872);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 864) + 8 * v8) = v9;
  v10 = *(_QWORD *)(a1 + 8);
  ++*(_DWORD *)(v6 + 872);
  v11 = *(_QWORD *)v6;
  v12 = *(_QWORD *)(v6 + 32);
  v172[1] = v10;
  v172[0] = v11;
  v172[2] = v12;
  v172[3] = sub_B8C330(v10);
  v173 = v175;
  v174 = 0x4000000000LL;
  v176 = &v180;
  v181 = v183;
  v182 = 0x1000000000LL;
  v187 = v6 + 48;
  v177 = 4;
  v178 = 0;
  v179 = 1;
  src = nullptr;
  v185 = 0;
  v186 = 0;
  sub_F821D0((__int64)v172, a2, a3, a5, a6, v13);
  v14 = (__int64 *)v173;
  v15 = 8LL * (unsigned int)v174;
  v16 = *(unsigned int *)(v6 + 168);
  v17 = v15 >> 3;
  v18 = (v15 >> 3) + v16;
  v19 = v15 >> 3;
  if ( v18 > *(unsigned int *)(v6 + 172) )
  {
    v151 = 8LL * (unsigned int)v174;
    sub_2237220(v6 + 160, v6 + 176, v18, 8);
    v16 = *(unsigned int *)(v6 + 168);
    v15 = v151;
    v18 = v17 + v16;
  }
  v20 = *(_QWORD *)(v6 + 160);
  v21 = v20 + 8 * v16;
  if ( v15 )
  {
    v17 = -v17;
    v14 = (__int64 *)((char *)v14 + 8 * v17 + v15);
    do
    {
      v20 = v14[v19 - 1];
      v21 += 8;
      *(_QWORD *)(v21 - 8) = v20;
      --v19;
    }
    while ( v19 );
  }
  *(_DWORD *)(v6 + 168) = v18;
  if ( a5 )
  {
    v22 = (unsigned int)v182;
    if ( (_DWORD)v182 )
    {
      v72 = *(_DWORD *)(v6 + 128);
      v165[0].m128i_i64[0] = (__int64)a2;
      if ( v72 )
      {
        v15 = v72 - 1;
        v73 = *(_QWORD *)(v6 + 112);
        v74 = v15 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v75 = v73 + 280LL * v74;
        v76 = *(char **)v75;
        if ( a2 == *(char **)v75 )
          goto LABEL_81;
        v136 = 1;
        v137 = 0;
        if ( v76 != (char *)-4096LL )
        {
          while ( 1 )
          {
            if ( v76 == (char *)-8192LL && !v137 )
              v137 = v75;
            v22 = (unsigned int)(v136 + 1);
            v74 = v15 & (v136 + v74);
            v75 = v73 + 280LL * v74;
            v76 = *(char **)v75;
            if ( *(char **)v75 == a2 )
              break;
            if ( v76 == (char *)-4096LL )
            {
              if ( v137 )
                v75 = v137;
              goto LABEL_170;
            }
            ++v136;
          }
LABEL_81:
          v77 = (__int64 *)(v75 + 8);
          if ( *(_DWORD *)(v75 + 16) )
            goto LABEL_10;
          goto LABEL_82;
        }
LABEL_170:
        v138 = *(_DWORD *)(v6 + 120);
        v167[0] = v75;
        v18 = (unsigned int)(v138 + 1);
        v20 = 3 * v72;
        if ( 4 * (int)v18 < (unsigned int)v20 )
        {
          v20 = v72 - *(_DWORD *)(v6 + 124) - (unsigned int)v18;
          if ( (unsigned int)v20 > v72 >> 3 )
          {
            v139 = (__int64)a2;
LABEL_173:
            v47 = *(_QWORD *)v75 == -4096;
            *(_DWORD *)(v6 + 120) = v18;
            if ( !v47 )
              --*(_DWORD *)(v6 + 124);
            *(_QWORD *)v75 = v139;
            v77 = (__int64 *)(v75 + 8);
            *(_QWORD *)(v75 + 8) = v75 + 24;
            *(_QWORD *)(v75 + 16) = 0x1000000000LL;
LABEL_82:
            sub_F7E7D0(v77, (__int64)&v181);
            goto LABEL_10;
          }
LABEL_178:
          sub_F7B840((__int64 **)(v6 + 112), v72, v18, v20, v15, v22);
          sub_F794A0((__int64 *)(v6 + 112), v165[0].m128i_i64, v167);
          v139 = v165[0].m128i_i64[0];
          LODWORD(v18) = *(_DWORD *)(v6 + 120) + 1;
          v75 = v167[0];
          goto LABEL_173;
        }
      }
      else
      {
        v167[0] = 0;
      }
      v72 *= 2;
      goto LABEL_178;
    }
  }
LABEL_10:
  if ( *(char **)(v6 + 8) == a2 )
  {
    operator delete(*(_QWORD *)(v6 + 136), 16LL * *(unsigned int *)(v6 + 152), 8);
    v128 = v186;
    *(_DWORD *)(v6 + 152) = v186;
    if ( v128 )
    {
      v129 = (void *)sub_22300B0(16LL * v128, 8, v124, v125, v126, v127);
      v130 = v185;
      v131 = src;
      *(_QWORD *)(v6 + 136) = v129;
      *(_QWORD *)(v6 + 144) = v130;
      memcpy(v129, v131, 16LL * *(unsigned int *)(v6 + 152));
    }
    else
    {
      *(_QWORD *)(v6 + 136) = 0;
      *(_QWORD *)(v6 + 144) = 0;
    }
  }
  sub_F7DBA0(v6 + 160, 8 * (*(_QWORD *)(v6 + 16) - a6) + 2);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v6 + 40) + 2320LL) + 172LL) & 0x20) == 0 )
    sub_F7DBA0(v6 + 160, *(_QWORD *)(v6 + 8) | 3LL);
  v23 = *(_DWORD *)(v6 + 168);
  v167[0] = 0;
  v167[1] = 0;
  v159 = v23;
  ptr = v171;
  v168 = 0;
  v170 = 0x800000000LL;
  sub_F89810(v6, a2, a3, a6, a2, a6, (__int64)v167);
  v24 = *(_DWORD *)(v6 + 720);
  if ( *(char **)(v6 + 8) != a2 )
    goto LABEL_14;
  if ( !v24 )
    goto LABEL_15;
  v50 = *(unsigned int *)(v6 + 728);
  v49 = *(__int64 **)(v6 + 712);
  v17 = (__int64)v49;
  v14 = &v49[4 * v50];
  if ( v49 == v14 )
  {
LABEL_45:
    v17 = (__int64)v49;
    v51 = (__int64)&v49[4 * v50];
    if ( v49 == (__int64 *)v51 )
      goto LABEL_60;
    if ( *v49 == -8192 || *v49 == -4096 )
    {
      do
      {
        v17 += 32;
        if ( v51 == v17 )
          goto LABEL_60;
      }
      while ( *(_QWORD *)v17 == -4096 || *(_QWORD *)v17 == -8192 );
    }
    v156 = &v163;
    v52 = v6;
    v6 = v17;
    v17 = v52;
    goto LABEL_52;
  }
  if ( *v49 == -8192 || *v49 == -4096 )
  {
    v116 = v49 + 4;
    do
    {
      v17 = (__int64)v116;
      if ( v14 == v116 )
        goto LABEL_45;
      v117 = *v116;
      v116 += 4;
    }
    while ( v117 == -8192 || v117 == -4096 );
  }
  v118 = (__int64 *)(v6 + 736);
  v119 = v14;
  while ( 1 )
  {
LABEL_142:
    v120 = *(_QWORD *)v17;
    v14 = (__int64 *)(*(_QWORD *)(v17 + 24) - v159);
    if ( (*(_BYTE *)(*(_QWORD *)v17 + 28LL) & 0x7F) == 0x24 )
    {
      v165[0].m128i_i32[2] = 0;
      v165[0].m128i_i64[0] = v120 & 0xFFFFFFFFFFFFFFF8LL | 1;
      *sub_F844D0(v118, (__int64)v165) = v14;
      v14 = (__int64 *)(*(_QWORD *)(v17 + 24) + 1LL - v159);
      v165[0].m128i_i64[0] = v120 & 0xFFFFFFFFFFFFFFF8LL;
      v165[0].m128i_i32[2] = 0;
    }
    else
    {
      sub_E7A980((__int64)v165, v120, 0);
    }
    *sub_F844D0(v118, (__int64)v165) = v14;
    if ( (__int64 *)(v17 + 32) == v119 )
      break;
    v121 = *(_QWORD *)(v17 + 32);
    if ( v121 == -8192 || v121 == -4096 )
    {
      v122 = (__int64 *)(v17 + 64);
      while ( 1 )
      {
        v17 = (__int64)v122;
        if ( v122 == v119 )
          goto LABEL_152;
        while ( 1 )
        {
          v123 = *v122;
          v122 += 4;
          if ( v123 == -8192 )
            break;
          if ( v123 != -4096 )
            goto LABEL_142;
          v17 = (__int64)v122;
          if ( v122 == v119 )
            goto LABEL_152;
        }
      }
    }
    v17 += 32;
  }
LABEL_152:
  v24 = *(_DWORD *)(v6 + 720);
LABEL_14:
  if ( v24 )
  {
    v49 = *(__int64 **)(v6 + 712);
    v50 = *(unsigned int *)(v6 + 728);
    goto LABEL_45;
  }
LABEL_15:
  if ( *(_DWORD *)(v6 + 724) )
  {
    v25 = *(__int64 **)(v6 + 712);
    v26 = *(unsigned int *)(v6 + 728);
    v27 = 4 * v26;
    if ( (unsigned int)v26 <= 0x40 )
      goto LABEL_17;
    operator delete(v25, v27 * 8, 8);
    *(_QWORD *)(v6 + 712) = 0;
    *(_QWORD *)(v6 + 720) = 0;
    *(_DWORD *)(v6 + 728) = 0;
  }
  while ( *(_QWORD *)(v6 + 8) == *(_QWORD *)(v6 + 32) )
  {
    v64 = *(__int64 **)(v6 + 760);
    if ( *(_DWORD *)(v6 + 768) )
      sub_F7F6F0((__m128 *)v165, v64, &v64[8 * (unsigned __int64)*(unsigned int *)(v6 + 776)], v6 + 760, 0);
    else
      sub_F7F6F0(
        (__m128 *)v165,
        &v64[8 * (unsigned __int64)*(unsigned int *)(v6 + 776)],
        &v64[8 * (unsigned __int64)*(unsigned int *)(v6 + 776)],
        v6 + 760,
        1);
    v53 = v165[0].m128i_i64[1];
    v51 = v165[0].m128i_i64[0];
    v65 = (__int64 *)(*(_QWORD *)(v6 + 760) + ((unsigned __int64)*(unsigned int *)(v6 + 776) << 6));
    sub_F7F6F0((__m128 *)v165, v65, v65, v6 + 760, 1);
    v55 = v165[0].m128i_i64[0];
    if ( v51 == v165[0].m128i_i64[0] )
      break;
    while ( 1 )
    {
      v67 = *(_QWORD *)(*(_QWORD *)(v6 + 160) + 8LL * *(_QWORD *)v51) & 7LL;
      if ( (unsigned int)v67 < 4 )
        break;
      if ( (unsigned int)v67 > 5 )
      {
        if ( (_DWORD)v67 != 6 )
          break;
LABEL_72:
        v70 = v51 + 64;
        if ( v53 == v51 + 64 )
          goto LABEL_118;
LABEL_73:
        v71 = *(_QWORD *)(v51 + 64);
        v51 = v70;
        if ( v71 == -2 || v71 == -1 )
        {
          do
            v51 += 64;
          while ( v53 != v51 && *(_QWORD *)v51 >= 0xFFFFFFFFFFFFFFFELL );
        }
        if ( v51 == v55 )
          goto LABEL_21;
      }
      else
      {
        v68 = *(_QWORD *)(*(_QWORD *)(v6 + 160) + 8LL * *(_QWORD *)v51) & 0xFFFFFFFFFFFFFFF8LL;
        v14 = (__int64 *)v68;
        v69 = sub_B72690(v68 + 72);
        if ( v69 )
          v69 -= 64LL;
        if ( *(_QWORD *)(v6 + 8) != v69 )
          goto LABEL_72;
        sub_F83C80(v6, v68, (__m128i *)(v51 + 8));
        v70 = v51 + 64;
        if ( v53 != v51 + 64 )
          goto LABEL_73;
LABEL_118:
        v51 = v53;
        if ( v53 == v55 )
          goto LABEL_21;
      }
    }
LABEL_103:
    v86 = *(unsigned int *)(v17 + 776);
    v87 = v163;
    v88 = *(_DWORD *)(v17 + 768) + 1;
    v89 = (unsigned int)(4 * v88);
    v164.m128_u64[0] = (unsigned __int64)v163;
    if ( (unsigned int)v89 >= 3 * (int)v86 )
    {
      sub_F83F40((__int64)v14, 2 * v86, v86, (unsigned int)(2 * v86), v89, v66);
LABEL_131:
      sub_F7E700(v14, v155, &v164);
      v87 = (__int64 *)v164.m128_u64[0];
      v88 = *(_DWORD *)(v17 + 768) + 1;
      goto LABEL_105;
    }
    v90 = (unsigned int)(v86 - *(_DWORD *)(v17 + 772) - v88);
    if ( (unsigned int)v90 <= (unsigned int)v86 >> 3 )
    {
      sub_F83F40((__int64)v14, v86, v86, v90, v89, v66);
      goto LABEL_131;
    }
LABEL_105:
    v47 = *v87 == -1;
    *(_DWORD *)(v17 + 768) = v88;
    if ( !v47 )
      --*(_DWORD *)(v17 + 772);
    v91 = v162;
    v87[5] = 0;
    *((_OWORD *)v87 + 1) = 0;
    *((_OWORD *)v87 + 3) = 0;
    v92 = *(unsigned int *)(v17 + 776);
    *v87 = v91;
    v87[1] = 0;
    v93 = (__int64 *)(*(_QWORD *)(v17 + 760) + (v92 << 6));
    v87[4] = 0;
    v163 = v87;
    sub_F7F6F0(&v164, v87, v93, (__int64)v14, 1);
    v157 = v164.m128_u64[0];
    v94 = sub_F7F8F0(*(_QWORD *)v17, v55);
    *(_QWORD *)(v157 + 48) = v94;
    v95 = sub_B98760(v94, v55);
    v80 = v157;
    *(_QWORD *)(v157 + 56) = *(_QWORD *)(v95 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_90:
    *(__m128i *)(v80 + 8) = _mm_load_si128(v165);
    *(_QWORD *)(v80 + 24) = v165[1].m128i_i64[0];
    if ( (*(_BYTE *)(v55 + 28) & 0x7F) != 0x24 )
      goto LABEL_94;
    v162 = v53 + 1;
    if ( (unsigned __int8)sub_F7E700(v14, v155, v156) )
    {
      sub_F7F6F0(
        &v164,
        v163,
        (__int64 *)(*(_QWORD *)(v17 + 760) + ((unsigned __int64)*(unsigned int *)(v17 + 776) << 6)),
        (__int64)v14,
        1);
      v82 = v164.m128_u64[0];
      goto LABEL_93;
    }
    v103 = *(unsigned int *)(v17 + 776);
    v104 = v163;
    v105 = *(_DWORD *)(v17 + 768) + 1;
    v106 = (unsigned int)(2 * v103);
    v107 = (unsigned int)(4 * v105);
    v164.m128_u64[0] = (unsigned __int64)v163;
    if ( (unsigned int)v107 >= 3 * (int)v103 )
    {
      v132 = 2 * v103;
LABEL_159:
      sub_F83F40((__int64)v14, v132, v103, v106, v107, v81);
      sub_F7E700(v14, v155, &v164);
      v104 = (__int64 *)v164.m128_u64[0];
      v105 = *(_DWORD *)(v17 + 768) + 1;
      goto LABEL_122;
    }
    v106 = (unsigned int)(v103 - *(_DWORD *)(v17 + 772) - v105);
    if ( (unsigned int)v106 <= (unsigned int)v103 >> 3 )
    {
      v132 = v103;
      goto LABEL_159;
    }
LABEL_122:
    v47 = *v104 == -1;
    *(_DWORD *)(v17 + 768) = v105;
    if ( !v47 )
      --*(_DWORD *)(v17 + 772);
    v108 = v162;
    v104[5] = 0;
    *((_OWORD *)v104 + 1) = 0;
    *((_OWORD *)v104 + 3) = 0;
    v109 = *(unsigned int *)(v17 + 776);
    *v104 = v108;
    v104[1] = 0;
    v110 = (__int64 *)(*(_QWORD *)(v17 + 760) + (v109 << 6));
    v104[4] = 0;
    v163 = v104;
    sub_F7F6F0(&v164, v104, v110, (__int64)v14, 1);
    v82 = v164.m128_u64[0];
    v111 = sub_F7F8F0(*(_QWORD *)v17, v55);
    *(_QWORD *)(v82 + 48) = v111;
    *(_QWORD *)(v82 + 56) = *(_QWORD *)(sub_B98760(v111, v55) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_93:
    *(__m128i *)(v82 + 8) = _mm_load_si128(v165);
    *(_QWORD *)(v82 + 24) = v165[1].m128i_i64[0];
LABEL_94:
    while ( 2 )
    {
      if ( v6 + 32 != v51 )
      {
        v83 = *(_QWORD *)(v6 + 32);
        if ( v83 == -8192 || v83 == -4096 )
        {
          v84 = (__int64 *)(v6 + 64);
          while ( 1 )
          {
            v6 = (__int64)v84;
            if ( v84 == (__int64 *)v51 )
              goto LABEL_58;
            v85 = *v84;
            v84 += 4;
            if ( v85 != -8192 && v85 != -4096 )
              goto LABEL_52;
          }
        }
        v6 += 32;
LABEL_52:
        v53 = *(_QWORD *)(v6 + 24);
        if ( (*(_DWORD *)(*(_QWORD *)(v17 + 160) + 8 * v53) & 7) == 7 )
          continue;
        v54 = *(_DWORD *)(v17 + 104);
        v55 = *(_QWORD *)v6;
        v56 = *(_QWORD *)(v6 + 8);
        if ( v54 )
        {
          v57 = 1;
          v58 = v54 - 1;
          for ( i = (v54 - 1)
                  & (((0xBF58476D1CE4E5B9LL
                     * ((unsigned int)(37 * v56)
                      | ((unsigned __int64)(((unsigned int)v55 >> 9) ^ ((unsigned int)v55 >> 4)) << 32))) >> 31)
                   ^ (756364221 * v56)); ; i = v58 & v61 )
          {
            v60 = (_QWORD *)(*(_QWORD *)(v17 + 88) + 40LL * i);
            if ( v55 == *v60 && v56 == v60[1] )
              break;
            if ( *v60 == -4096 && v60[1] == 0x7FFFFFFFFFFFFFFFLL )
              goto LABEL_85;
            v61 = v57 + i;
            ++v57;
          }
          v79 = v60[2];
          v78 = v60[4];
        }
        else
        {
LABEL_85:
          v78 = 0;
          v79 = 0;
        }
        if ( *(_QWORD *)(v6 + 16) != v78 )
          goto LABEL_87;
        v96 = *(_DWORD *)(v17 + 776);
        v97 = *(_QWORD *)(v17 + 760);
        if ( v96 )
        {
          v98 = v96 - 1;
          v99 = v98 & (((0xBF58476D1CE4E5B9LL * v53) >> 31) ^ (484763065 * v53));
          v100 = (__int64 *)(v97 + ((unsigned __int64)v99 << 6));
          v101 = *v100;
          if ( v53 == *v100 )
            goto LABEL_110;
          v112 = 1;
          if ( v101 != -1 )
          {
            while ( 1 )
            {
              v113 = v112 + 1;
              v114 = v98 & (v99 + v112);
              v99 = v114;
              v100 = (__int64 *)(v97 + (v114 << 6));
              v115 = *v100;
              if ( v53 == *v100 )
                break;
              v112 = v113;
              if ( v115 == -1 )
                goto LABEL_128;
            }
LABEL_110:
            v165[0] = _mm_loadu_si128((const __m128i *)(v100 + 1));
            v165[1] = _mm_loadu_si128((const __m128i *)(v100 + 3));
            v166[0] = _mm_loadu_si128((const __m128i *)(v100 + 5));
            *(_QWORD *)&v166[1] = v100[7];
            if ( !v165[1].m128i_i64[1] )
            {
LABEL_111:
              v155 = (__int64 *)v79;
              v153 = v78;
              v102 = sub_F7BE60(v166);
              v78 = v153;
              v79 = (__int64)v155;
              if ( v102 )
                continue;
            }
LABEL_87:
            sub_F822B0((__int64)v165, v17, v55, *(_QWORD *)(v6 + 16), v79, v78);
            if ( v165[0].m128i_i64[0] || !sub_F7BE70(&v165[0].m128i_u64[1]) )
            {
              v162 = v53;
              v14 = (__int64 *)(v17 + 760);
              v155 = &v162;
              if ( !(unsigned __int8)sub_F7E700((__int64 *)(v17 + 760), &v162, v156) )
                goto LABEL_103;
              sub_F7F6F0(
                &v164,
                v163,
                (__int64 *)(*(_QWORD *)(v17 + 760) + ((unsigned __int64)*(unsigned int *)(v17 + 776) << 6)),
                v17 + 760,
                1);
              v80 = v164.m128_u64[0];
              goto LABEL_90;
            }
            continue;
          }
        }
LABEL_128:
        memset(v165, 0, sizeof(v165));
        memset(v166, 0, 24);
        goto LABEL_111;
      }
      break;
    }
LABEL_58:
    v24 = *(_DWORD *)(v17 + 720);
    v6 = v17;
    if ( !v24 )
      goto LABEL_15;
    v49 = *(__int64 **)(v17 + 712);
LABEL_60:
    v62 = 4 * v24;
    v63 = *(unsigned int *)(v6 + 728);
    v25 = v49;
    if ( (unsigned int)(4 * v24) < 0x40 )
      v62 = 64;
    if ( (unsigned int)v63 > v62 )
    {
      if ( v24 == 1 )
      {
        v140 = 4096;
        v141 = 128;
      }
      else
      {
        _BitScanReverse(&v133, v24 - 1);
        v134 = (unsigned int)(1 << (33 - (v133 ^ 0x1F)));
        if ( (int)v134 < 64 )
          v134 = 64;
        if ( (_DWORD)v134 == (_DWORD)v63 )
        {
          *(_QWORD *)(v6 + 720) = 0;
          v135 = &v49[4 * v134];
          do
          {
            *v25 = -4096;
            v25 += 4;
          }
          while ( v135 != v25 );
          continue;
        }
        v149 = 4 * (int)v134 / 3u;
        v150 = (((v149 + 1)
               | ((unsigned __int64)(v149 + 1) >> 1)
               | (((v149 + 1) | ((unsigned __int64)(v149 + 1) >> 1)) >> 2)) >> 4)
             | (v149 + 1)
             | ((unsigned __int64)(v149 + 1) >> 1)
             | (((v149 + 1) | ((unsigned __int64)(v149 + 1) >> 1)) >> 2)
             | (((((v149 + 1)
                 | ((unsigned __int64)(v149 + 1) >> 1)
                 | (((v149 + 1) | ((unsigned __int64)(v149 + 1) >> 1)) >> 2)) >> 4)
               | (v149 + 1)
               | ((unsigned __int64)(v149 + 1) >> 1)
               | (((v149 + 1) | ((unsigned __int64)(v149 + 1) >> 1)) >> 2)) >> 8);
        v141 = (v150 | (v150 >> 16)) + 1;
        v140 = 32 * ((v150 | (v150 >> 16)) + 1);
      }
      operator delete(v49, 32 * v63, 8);
      *(_DWORD *)(v6 + 728) = v141;
      v146 = (_QWORD *)sub_22300B0(v140, 8, v142, v143, v144, v145);
      v147 = *(unsigned int *)(v6 + 728);
      *(_QWORD *)(v6 + 720) = 0;
      *(_QWORD *)(v6 + 712) = v146;
      for ( j = &v146[4 * v147]; j != v146; v146 += 4 )
        *v146 = -4096;
    }
    else
    {
      v27 = 4 * v63;
LABEL_17:
      for ( k = &v25[v27]; k != v25; v25 += 4 )
        *v25 = -4096;
      *(_QWORD *)(v6 + 720) = 0;
    }
  }
LABEL_21:
  v29 = a2;
  while ( 1 )
  {
    v30 = *(_DWORD *)(v6 + 872);
    v165[0].m128i_i64[0] = (__int64)v29;
    v165[0].m128i_i64[1] = a6;
    v165[1].m128i_i32[1] = v159 - v160;
    v165[1].m128i_i32[0] = v30 - 1;
    if ( (unsigned __int8)sub_F7F750((__int64 *)(v6 + 688), v165[0].m128i_i64, &v163) )
      goto LABEL_23;
    v32 = *(unsigned int *)(v6 + 704);
    v31 = v163;
    v45 = *(_DWORD *)(v6 + 696) + 1;
    v46 = 2 * v32;
    v33 = (unsigned int)(4 * v45);
    v164.m128_u64[0] = (unsigned __int64)v163;
    if ( (unsigned int)v33 < 3 * (int)v32 )
    {
      if ( (int)v32 - *(_DWORD *)(v6 + 700) - v45 > (unsigned int)v32 >> 3 )
        goto LABEL_37;
      v46 = v32;
    }
    sub_F869E0(v6 + 688, v46, (__int64)v163, v32, v33, v34);
    sub_F7F750((__int64 *)(v6 + 688), v165[0].m128i_i64, (__int64 **)&v164);
    v31 = (__int64 *)v164.m128_u64[0];
    v45 = *(_DWORD *)(v6 + 696) + 1;
LABEL_37:
    v47 = *v31 == -4096;
    *(_DWORD *)(v6 + 696) = v45;
    if ( !v47 || v31[1] != 0x7FFFFFFFFFFFFFFFLL )
      --*(_DWORD *)(v6 + 700);
    v48 = v165[1].m128i_i64[0];
    *(__m128i *)v31 = _mm_load_si128(v165);
    v31[2] = v48;
LABEL_23:
    v35 = *(_QWORD *)(sub_EDE580(*(_QWORD *)(v6 + 40), v29, (__int64)v31, v32, v33, v34)[9] + 48LL);
    v29 = (char *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v35 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      break;
    if ( (v35 & 4) != 0 )
    {
      v40 = sub_EDE580(*(_QWORD *)(v6 + 40), *(char **)(v6 + 32), v36, v37, v38, v39);
      if ( sub_F81DB0(v40 + 9, (__int64)v29, v41, v42, v43, v44) != a6 )
        break;
    }
  }
  sub_F8BF10(v6, a2, a3, a4, a6);
  if ( ptr != v171 )
    free(ptr);
  operator delete(v167[0], 8LL * v168, 8);
  operator delete(src, 16LL * v186, 8);
  if ( v181 != v183 )
    free(v181);
  if ( !v179 )
    free(v176);
  if ( v173 != v175 )
    free(v173);
}
