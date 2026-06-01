__int64 __fastcall sub_C6E070(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  __int16 v8; // ax
  __int64 v9; // rcx
  unsigned int v10; // r12d
  __int64 v11; // rdx
  void *v12; // rdi
  unsigned __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v17; // rdx
  int *v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rdi
  int v24; // edx
  unsigned int v25; // r9d
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rbp
  char v30; // bl
  int v31; // edx
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // rax
  unsigned __int64 v37; // rbp
  __int64 v38; // r14
  char *v39; // rdx
  char *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // r9d
  __int64 v51; // rax
  unsigned int v52; // edx
  __int64 v53; // rax
  __int16 *v54; // rdx
  int v55; // esi
  __int64 v56; // rcx
  __int16 v57; // di
  __int64 v58; // rdx
  int v59; // eax
  int v60; // eax
  __int64 *v61; // rbx
  void *v62; // rax
  char v63; // bp
  char v64; // al
  __int64 v65; // rcx
  __int64 v66; // rbx
  _QWORD *v67; // r15
  __int64 v68; // r13
  __int64 v69; // rdi
  __int64 v70; // rsi
  __int64 v71; // rsi
  __m128i v72; // xmm2
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rax
  __int32 v76; // eax
  __int64 v77; // rdi
  void *v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int64 v83; // rbp
  __int64 v84; // rax
  unsigned __int64 v85; // rax
  _QWORD *v86; // rdx
  __int64 v87; // rsi
  __int64 v88; // rcx
  __int64 v89; // r8
  int v90; // r9d
  __int64 v91; // rcx
  __int64 v92; // r8
  int v93; // r9d
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  char v97; // al
  char v98; // al
  __int64 v99; // rax
  unsigned int v100; // r9d
  __int64 v101; // rbx
  __int64 v102; // rax
  unsigned __int64 v103; // r14
  __int64 v104; // rbp
  char *v105; // rdx
  char *v106; // rdi
  __int64 v107; // rax
  char v108; // bl
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  char v112; // bp
  __int64 v113; // rax
  __int64 v114; // r13
  _QWORD *v115; // r15
  __int64 v116; // rcx
  __int64 v117; // rsi
  __int64 v118; // rdi
  int v119; // ecx
  __int64 v120; // rcx
  __m128i v121; // xmm7
  __int64 v122; // r15
  __int64 v123; // r13
  __int64 v124; // rdx
  __int32 v125; // r13d
  __int64 v126; // rsi
  unsigned __int64 v127; // rdx
  _BOOL8 v128; // rcx
  void *v129; // rdx
  _QWORD *v130; // rax
  _QWORD *v131; // rsi
  unsigned __int8 **v132; // rax
  __int64 v133; // rsi
  __int64 v134; // rax
  __int64 v135; // r12
  __int64 v136; // rdi
  char v137; // r12
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  unsigned __int64 v141; // rax
  __int64 v142; // rdi
  char v143; // r12
  unsigned int v144; // eax
  char v145; // [rsp+0h] [rbp-908h]
  __int64 v146; // [rsp+10h] [rbp-8F8h]
  __int64 v147; // [rsp+10h] [rbp-8F8h]
  unsigned int v148; // [rsp+10h] [rbp-8F8h]
  unsigned int v149; // [rsp+10h] [rbp-8F8h]
  unsigned int v150; // [rsp+10h] [rbp-8F8h]
  unsigned int v151; // [rsp+10h] [rbp-8F8h]
  __int32 v152; // [rsp+18h] [rbp-8F0h]
  __int64 v153; // [rsp+18h] [rbp-8F0h]
  __int32 v154; // [rsp+20h] [rbp-8E8h]
  __int64 v155[2]; // [rsp+38h] [rbp-8D0h] BYREF
  __int64 v156; // [rsp+48h] [rbp-8C0h] BYREF
  void *v157; // [rsp+50h] [rbp-8B8h]
  unsigned int v158; // [rsp+58h] [rbp-8B0h]
  char v159; // [rsp+5Ch] [rbp-8ACh]
  void *v160; // [rsp+60h] [rbp-8A8h] BYREF
  unsigned int v161; // [rsp+68h] [rbp-8A0h]
  char v162; // [rsp+6Ch] [rbp-89Ch]
  void *v163; // [rsp+70h] [rbp-898h] BYREF
  unsigned int v164; // [rsp+78h] [rbp-890h]
  char v165; // [rsp+7Ch] [rbp-88Ch]
  void *v166; // [rsp+80h] [rbp-888h] BYREF
  unsigned int v167; // [rsp+88h] [rbp-880h]
  char v168; // [rsp+8Ch] [rbp-87Ch]
  void *v169; // [rsp+90h] [rbp-878h] BYREF
  unsigned __int64 v170; // [rsp+98h] [rbp-870h]
  __int64 *v171; // [rsp+A0h] [rbp-868h]
  __m128i *v172; // [rsp+A8h] [rbp-860h]
  void **v173; // [rsp+B0h] [rbp-858h]
  void **v174; // [rsp+B8h] [rbp-850h]
  void *v175[2]; // [rsp+D0h] [rbp-838h] BYREF
  void *v176; // [rsp+E0h] [rbp-828h]
  char v177; // [rsp+108h] [rbp-800h]
  __m128i v178; // [rsp+110h] [rbp-7F8h] BYREF
  __int64 v179; // [rsp+120h] [rbp-7E8h]
  unsigned int v180[4]; // [rsp+128h] [rbp-7E0h] BYREF
  __int64 v181; // [rsp+138h] [rbp-7D0h]
  _BYTE *v182; // [rsp+140h] [rbp-7C8h]
  __int64 v183; // [rsp+148h] [rbp-7C0h]
  _BYTE v184[80]; // [rsp+150h] [rbp-7B8h] BYREF
  __m128i v185; // [rsp+1A0h] [rbp-768h] BYREF
  __int64 v186; // [rsp+1B0h] [rbp-758h] BYREF
  int v187; // [rsp+1B8h] [rbp-750h] BYREF
  char v188; // [rsp+1BCh] [rbp-74Ch]
  __int64 v189; // [rsp+1C8h] [rbp-740h]
  void *ptr; // [rsp+1D0h] [rbp-738h]
  __int64 v191; // [rsp+1D8h] [rbp-730h]
  _BYTE v192[16]; // [rsp+1E0h] [rbp-728h] BYREF
  __int128 v193; // [rsp+1F0h] [rbp-718h]
  __int128 v194; // [rsp+200h] [rbp-708h]
  __int128 v195; // [rsp+210h] [rbp-6F8h]
  char v196; // [rsp+221h] [rbp-6E7h]
  __int64 *v197; // [rsp+8B0h] [rbp-58h]
  __int64 v198; // [rsp+8B8h] [rbp-50h]
  int *v199; // [rsp+8C0h] [rbp-48h]

  v7 = a2;
  v155[0] = a2;
  v8 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v9 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( (unsigned int)(v9 - 21) <= 0xA )
  {
    sub_BF05D0(*a1, a2);
    v10 = sub_BEDB10(*a1);
    if ( !(_BYTE)v10 )
      return v10;
    v7 = v155[0];
    v8 = (*(_WORD *)(v155[0] + 2) >> 3) & 0x3F;
    v9 = (*(_WORD *)(v155[0] + 2) >> 3) & 0x3F;
  }
  if ( (_DWORD)v9 == 32 )
    goto LABEL_15;
  v11 = (unsigned int)(v9 - 19);
  if ( (unsigned int)v11 <= 1 )
    goto LABEL_15;
  if ( (*(_BYTE *)(v7 + 1) & 6) != 0 )
    goto LABEL_7;
  if ( !sub_BF86C0(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v11, v9, a5)
    || !sub_BF86C0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v79, v80, a5) )
  {
    v7 = v155[0];
    v8 = (*(_WORD *)(v155[0] + 2) >> 3) & 0x3F;
    v9 = (*(_WORD *)(v155[0] + 2) >> 3) & 0x3F;
    goto LABEL_7;
  }
  v97 = sub_BF86C0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, v95, v96, a5);
  v7 = v155[0];
  if ( v97 )
  {
LABEL_15:
    v17 = *a1;
    v18 = (int *)a1[1];
    v19 = 1;
    v185.m128i_i64[0] = (__int64)&v186;
    v198 = v17;
    v197 = a1;
    v199 = v18;
    v20 = sub_BD7CB0(v7);
    v23 = &v186;
    v24 = 0;
    v186 = v20;
    v25 = 1;
    v193 = 0;
    v194 = 0;
    v195 = 0;
    v187 = 0;
    v188 &= ~1u;
    v185.m128i_i64[1] = 0x1000000001LL;
    LODWORD(v175[0]) = 0;
    BYTE4(v175[0]) &= ~1u;
    v177 = 0;
    while ( 1 )
    {
      v29 = (__int64)&v23[14 * v19 - 14];
      if ( v24 != 1 )
        break;
      v34 = *(_QWORD *)v29;
      v35 = (*(_WORD *)(*(_QWORD *)v29 + 2LL) >> 3) & 0x3F;
      if ( v35 == 32 )
      {
        if ( v177 )
        {
          v45 = v198;
          **(_BYTE **)(v198 + 24) = 1;
          v46 = *(_DWORD *)(v45 + 916);
          if ( v46 > 2 )
          {
            if ( v46 != 3 )
              goto LABEL_100;
          }
          else if ( !*(_BYTE *)(v45 + 914) && !*(_BYTE *)(v45 + 915) )
          {
            goto LABEL_63;
          }
        }
      }
      else if ( (unsigned int)(v35 - 19) <= 1 )
      {
        if ( v177 || (a2 = (__int64)&v178, !(unsigned __int8)sub_BEC1F0((__int64)v175, &v178)) )
        {
          v51 = v198;
          v177 = 1;
          **(_BYTE **)(v198 + 24) = 1;
          v52 = *(_DWORD *)(v51 + 916);
          if ( v52 > 2 )
          {
            if ( v52 != 3 )
              goto LABEL_100;
          }
          else if ( !*(_BYTE *)(v51 + 914) && !*(_BYTE *)(v51 + 915) )
          {
            goto LABEL_79;
          }
          v53 = v198;
          v54 = *(__int16 **)(v198 + 24);
          v55 = *(_DWORD *)(v198 + 900);
          v56 = *((_QWORD *)v54 + 1);
          v57 = *v54;
          *((_QWORD *)v54 + 1) = 0;
          *(_DWORD *)(v53 + 900) = *(_DWORD *)(v53 + 40) + 1;
          v58 = *(_QWORD *)(v29 + 80);
          if ( v58 )
          {
            *(__m128i *)*(_QWORD *)(v58 + 24) = _mm_loadu_si128((const __m128i *)(v29 + 88));
            *(_DWORD *)(v58 + 900) = *(_DWORD *)(v29 + 104);
          }
          *(_QWORD *)(v29 + 80) = v53;
          *(_WORD *)(v29 + 88) = v57;
          *(_QWORD *)(v29 + 96) = v56;
          *(_DWORD *)(v29 + 104) = v55;
        }
        else if ( v178.m128i_i8[0] == (((*(_WORD *)(v34 + 2) >> 3) & 0x3F) == 20) )
        {
          a2 = v178.m128i_u8[0];
          sub_BEF100(*v197, (void *)v178.m128i_u8[0], v34, (__int64)v175);
LABEL_79:
          v23 = (__int64 *)v185.m128i_i64[0];
          v25 = v185.m128i_u32[2];
LABEL_63:
          v185.m128i_i32[2] = v25 - 1;
          v27 = (__int64)&v23[14 * v25 - 14];
          v28 = *(_QWORD *)(v27 + 80);
          if ( v28 )
          {
LABEL_19:
            *(__m128i *)*(_QWORD *)(v28 + 24) = _mm_loadu_si128((const __m128i *)(v27 + 88));
            *(_DWORD *)(v28 + 900) = *(_DWORD *)(v27 + 104);
          }
LABEL_20:
          if ( *(_DWORD *)(v27 + 8) > 1u )
            sub_A2BBA0((int *)(v27 + 8));
LABEL_22:
          v25 = v185.m128i_u32[2];
LABEL_23:
          if ( !v25 )
            goto LABEL_47;
          goto LABEL_24;
        }
      }
      else if ( v177 )
      {
        if ( !*(_DWORD *)(v198 + 48) || !*(_BYTE *)(v198 + 914) && !*(_BYTE *)(v198 + 915) )
          goto LABEL_63;
        **(_BYTE **)(v198 + 24) = 1;
      }
      sub_A2C150((int *)(v29 + 8), (int *)v175);
      *(_BYTE *)(v29 + 64) = v177;
      v177 = 0;
      *(_DWORD *)(v29 + 72) = 2;
      v146 = sub_BD7CB0(*(_QWORD *)(v34 + 24));
      v36 = v185.m128i_u32[2];
      v37 = v185.m128i_u32[2] + 1LL;
      v152 = v185.m128i_i32[2];
      if ( v185.m128i_u32[3] < v37 )
      {
        v38 = sub_22136C0(&v185, &v186, v185.m128i_u32[2] + 1LL, 112, &v178);
        v65 = 112LL * v185.m128i_u32[2];
        v66 = v185.m128i_i64[0] + v65;
        if ( v185.m128i_i64[0] != v185.m128i_i64[0] + v65 )
        {
          v67 = (_QWORD *)v185.m128i_i64[0];
          v68 = v38;
          do
          {
            v69 = v68 + 8;
            v68 += 112;
            *(_QWORD *)(v68 - 112) = *v67;
            v70 = (__int64)(v67 + 1);
            v67 += 14;
            sub_A2BB60(v69, v70);
            *(_BYTE *)(v68 - 48) = *((_BYTE *)v67 - 48);
            LODWORD(v70) = *((_DWORD *)v67 - 10);
            *(_QWORD *)(v68 - 32) = 0;
            *(_DWORD *)(v68 - 40) = v70;
            v71 = *(v67 - 4);
            *(_BYTE *)(v68 - 24) = 0;
            *(_BYTE *)(v68 - 23) = 0;
            *(_QWORD *)(v68 - 16) = 0;
            v72 = _mm_loadu_si128((const __m128i *)(v67 - 3));
            *(_DWORD *)(v68 - 8) = 0;
            *(_QWORD *)(v68 - 32) = v71;
            LODWORD(v71) = *((_DWORD *)v67 - 2);
            *(__m128i *)(v68 - 24) = v72;
            *(_DWORD *)(v68 - 8) = v71;
            *(v67 - 4) = 0;
          }
          while ( (_QWORD *)v66 != v67 );
          v73 = v185.m128i_i64[0];
          v74 = 112LL * v185.m128i_u32[2];
          v66 = v185.m128i_i64[0] + v74;
          if ( v185.m128i_i64[0] != v185.m128i_i64[0] + v74 )
          {
            do
            {
              while ( 1 )
              {
                v66 -= 112;
                v75 = *(_QWORD *)(v66 + 80);
                if ( v75 )
                {
                  *(__m128i *)*(_QWORD *)(v75 + 24) = _mm_loadu_si128((const __m128i *)(v66 + 88));
                  *(_DWORD *)(v75 + 900) = *(_DWORD *)(v66 + 104);
                }
                if ( *(_DWORD *)(v66 + 8) > 1u )
                  break;
                if ( v73 == v66 )
                  goto LABEL_115;
              }
              sub_A2BBA0((int *)(v66 + 8));
            }
            while ( v73 != v66 );
LABEL_115:
            v66 = v185.m128i_i64[0];
          }
        }
        v76 = v178.m128i_i32[0];
        if ( (__int64 *)v66 != &v186 )
        {
          v154 = v178.m128i_i32[0];
          free((void *)v66);
          v76 = v154;
        }
        v185.m128i_i32[3] = v76;
        v36 = v185.m128i_u32[2];
        v185.m128i_i64[0] = v38;
      }
      else
      {
        v38 = v185.m128i_i64[0];
      }
      v39 = (char *)(v38 + 112 * v36);
      a2 = v38 + 112 * v37;
      if ( v39 != (char *)a2 )
      {
        do
        {
          v40 = v39;
          v39 += 112;
          memset(v40, 0, 0x70u);
          *(v39 - 100) = 0;
        }
        while ( (char *)a2 != v39 );
        v38 = v185.m128i_i64[0];
      }
      v21 = v146;
      v25 = v152 + 1;
      v41 = 112LL * (unsigned int)v37;
      v185.m128i_i32[2] = v152 + 1;
      *(_QWORD *)(v38 + v41 - 112) = v146;
      *(_DWORD *)(v185.m128i_i64[0] + v41 - 40) = 0;
      if ( v152 == -1 )
      {
LABEL_47:
        v10 = 0;
        if ( v177 )
        {
          if ( LODWORD(v175[0]) <= 1 )
            goto LABEL_49;
LABEL_71:
          sub_A2BBA0((int *)v175);
        }
        else
        {
          v10 = 1;
          sub_A2C150(v199, (int *)v175);
          if ( LODWORD(v175[0]) > 1 )
            goto LABEL_71;
        }
LABEL_49:
        v42 = v185.m128i_i64[0];
        v43 = v185.m128i_i64[0] + 112LL * v185.m128i_u32[2];
        if ( v185.m128i_i64[0] != v43 )
        {
          do
          {
            while ( 1 )
            {
              v43 -= 112;
              v44 = *(_QWORD *)(v43 + 80);
              if ( v44 )
              {
                *(__m128i *)*(_QWORD *)(v44 + 24) = _mm_loadu_si128((const __m128i *)(v43 + 88));
                *(_DWORD *)(v44 + 900) = *(_DWORD *)(v43 + 104);
              }
              if ( *(_DWORD *)(v43 + 8) > 1u )
                break;
              if ( v42 == v43 )
                goto LABEL_54;
            }
            sub_A2BBA0((int *)(v43 + 8));
          }
          while ( v42 != v43 );
LABEL_54:
          v43 = v185.m128i_i64[0];
        }
        if ( (__int64 *)v43 != &v186 )
          free((void *)v43);
        return v10;
      }
LABEL_24:
      v19 = v25;
      v23 = (__int64 *)v185.m128i_i64[0];
      v24 = *(_DWORD *)(v185.m128i_i64[0] + 112LL * v25 - 40);
    }
    if ( v24 )
    {
      if ( v24 == 2 )
      {
        a2 = (__int64)v175;
        v19 = *(_QWORD *)v29;
        v178.m128i_i32[0] = 0;
        v178.m128i_i8[4] &= ~1u;
        LOBYTE(v183) = 0;
        sub_A2C150(v178.m128i_i32, (int *)v175);
        v30 = v177;
        v177 = 0;
        LOBYTE(v183) = v30;
        v31 = (*(_WORD *)(v19 + 2) >> 3) & 0x3F;
        if ( v31 == 32 )
        {
          if ( !v30 )
          {
            a2 = (__int64)&v178;
            sub_A30FE0((__int64)v175, v178.m128i_i32);
            goto LABEL_32;
          }
LABEL_31:
          v30 = 1;
LABEL_32:
          v177 = v30;
          --v185.m128i_i32[2];
          v32 = v185.m128i_i64[0] + 112LL * v185.m128i_u32[2];
          v33 = *(_QWORD *)(v32 + 80);
          if ( v33 )
          {
            *(__m128i *)*(_QWORD *)(v33 + 24) = _mm_loadu_si128((const __m128i *)(v32 + 88));
            *(_DWORD *)(v33 + 900) = *(_DWORD *)(v32 + 104);
          }
          if ( *(_DWORD *)(v32 + 8) > 1u )
            sub_A2BBA0((int *)(v32 + 8));
          if ( v178.m128i_i32[0] > 1u )
            sub_A2BBA0(v178.m128i_i32);
          goto LABEL_22;
        }
        if ( (unsigned int)(v31 - 19) > 1 )
        {
          v30 |= *(_BYTE *)(v29 + 64);
          if ( v30 )
            goto LABEL_31;
          a2 = v29 + 8;
          v60 = *(_DWORD *)(v29 + 8);
          if ( (unsigned int)(v31 - 5) <= 1 && v60 == 7 && v178.m128i_i32[0] == 2 )
          {
            sub_A30FE0((__int64)v175, (int *)a2);
            a2 = (__int64)&v178.m128i_i64[1];
            sub_BEE2C0((__int64)v175, (__int64)&v178.m128i_i64[1], ((*(_WORD *)(v19 + 2) >> 3) & 0x3F) == 6);
            goto LABEL_32;
          }
          if ( v31 == 5 )
          {
            if ( v178.m128i_i32[0] == 7 )
            {
              if ( v60 == 2 )
              {
                sub_A30FE0((__int64)v175, v178.m128i_i32);
                a2 = v29 + 16;
                sub_BEE2C0((__int64)v175, v29 + 16, 0);
                goto LABEL_32;
              }
              goto LABEL_97;
            }
          }
          else if ( v31 == 6 && v60 == 7 )
          {
            if ( v178.m128i_i32[0] == 7 )
            {
              if ( !*(_QWORD *)sub_A2D340(v29 + 8) && !*(_QWORD *)sub_A2D340((__int64)&v178) )
              {
                a2 = v29 + 8;
                v82 = sub_A2D320(v29 + 8);
                if ( v82 )
                {
                  v83 = 0;
                  if ( (v82 & 3) == 1 )
                    v83 = v82 & 0xFFFFFFFFFFFFFFFCLL;
                }
                else
                {
                  v83 = 0;
                }
                v84 = sub_A2D320((__int64)&v178);
                if ( v84 )
                {
                  if ( (v84 & 3) == 1 )
                  {
                    v85 = v84 & 0xFFFFFFFFFFFFFFFCLL;
                    v30 = v85 == 0 || v83 == 0;
                    if ( !v30 && (*(_WORD *)v83 & 0x1FF) == 0x7F && (*(_WORD *)v85 & 0x1FF) == 0x7F )
                    {
                      v86 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v83 + 24) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
                      if ( (*(_QWORD *)(*(_QWORD *)(v83 + 24) + 16LL) & 4) != 0 )
                        v86 = (_QWORD *)*v86;
                      a2 = *(_QWORD *)(*(_QWORD *)(v85 + 24) + 16LL);
                      v21 = a2 & 0xFFFFFFFFFFFFFFF8LL;
                      LOBYTE(a2) = a2 & 4;
                      if ( (_BYTE)a2 )
                        v21 = *(_QWORD *)v21;
                      if ( (_QWORD *)v21 == v86 )
                      {
                        BYTE4(v169) &= ~1u;
                        LODWORD(v169) = 13;
                        a2 = (__int64)&v169;
                        v170 = v83;
                        v171 = (__int64 *)v85;
                        sub_A2BFE0((__int64)v175, (__int64)&v169);
                        if ( (unsigned int)v169 > 1 )
                          sub_A2BBA0((int *)&v169);
                        goto LABEL_32;
                      }
                    }
                  }
                }
              }
              goto LABEL_31;
            }
            goto LABEL_97;
          }
          if ( v60 == 2 && v178.m128i_i32[0] == 2 )
          {
            v108 = sub_F41720(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL));
            v167 = sub_A884B0(*(_QWORD *)(v198 + 16), *(_QWORD *)(v19 + 8), v109, v110, v111);
            if ( v167 > 0x40 )
              sub_21E1730(&v166, 0, 0);
            else
              v166 = nullptr;
            v168 = v108;
            LODWORD(v170) = v179;
            if ( (unsigned int)v179 > 0x40 )
              sub_21E17D0(&v169);
            else
              v169 = (void *)v178.m128i_i64[1];
            a2 = v19;
            BYTE4(v170) = BYTE4(v179);
            v112 = sub_BFA6A0(v198, v19, v29 + 16, (*(_WORD *)(v19 + 2) >> 3) & 0x3F, (__int64)&v169, (__int64)&v166);
            if ( (unsigned int)v170 > 0x40 && v169 )
              operator delete[](v169);
            v30 = 1;
            if ( v112 )
            {
              a2 = (__int64)v175;
              v30 = sub_BEEA30((__int64)&v166, (__int64)v175) ^ 1;
            }
            if ( v167 > 0x40 && v166 )
              operator delete[](v166);
            goto LABEL_32;
          }
LABEL_97:
          a2 = v19;
          v61 = (__int64 *)sub_E0FED0(*v197, v19, 108, 0);
          v62 = (void *)sub_EC8B80(v19);
          if ( v61 )
          {
            a2 = (__int64)&v169;
            v169 = v62;
            LOBYTE(v170) = 1;
            sub_AC88D0(v61, (__int64 *)&v169);
          }
          goto LABEL_31;
        }
      }
LABEL_100:
      a2 = (__int64)&v169;
      v63 = sub_BEC1F0(v29 + 8, &v166);
      v64 = sub_BEC1F0((__int64)&v178, &v169);
      v30 = v64;
      if ( v63 )
      {
        if ( !v64 )
        {
          v30 = v63;
          goto LABEL_32;
        }
        if ( ((*(_WORD *)(v19 + 2) >> 3) & 0x3F) == 0x14 )
        {
          a2 = 1;
          if ( (_BYTE)v166 )
            goto LABEL_135;
          goto LABEL_104;
        }
        a2 = 0;
        if ( (_BYTE)v166 )
LABEL_104:
          a2 = (unsigned __int8)v169;
      }
      else
      {
        if ( !v64 )
          goto LABEL_31;
        if ( (_BYTE)v169 != (((*(_WORD *)(v19 + 2) >> 3) & 0x3F) == 20) )
          goto LABEL_32;
        a2 = (unsigned __int8)v169;
      }
LABEL_135:
      v30 = sub_BEF100(*v197, (void *)a2, v19, (__int64)v175) ^ 1;
      goto LABEL_32;
    }
    v26 = *(_QWORD *)v29;
    if ( ((**(_WORD **)v29 + 394) & 0x1FFu) > 1 )
    {
LABEL_17:
      a2 = v198;
      v177 = sub_C15CD0((__int64)v175, v198, v26, v21, v22) ^ 1;
      if ( v177 )
      {
        v178.m128i_i8[4] &= ~1u;
        v178.m128i_i32[0] = 0;
        a2 = (__int64)&v178;
        sub_A2BFE0((__int64)v175, (__int64)&v178);
        if ( v178.m128i_i32[0] > 1u )
          sub_A2BBA0(v178.m128i_i32);
      }
      --v185.m128i_i32[2];
      v27 = v185.m128i_i64[0] + 112LL * v185.m128i_u32[2];
      v28 = *(_QWORD *)(v27 + 80);
      if ( v28 )
        goto LABEL_19;
      goto LABEL_20;
    }
    v59 = (*(_WORD *)(v26 + 2) >> 3) & 0x3F;
    if ( v59 != 32 && (unsigned int)(v59 - 19) > 1 )
    {
      if ( (*(_BYTE *)(v26 + 1) & 6) != 0 )
        goto LABEL_17;
      v147 = *(_QWORD *)v29;
      if ( !sub_BF86C0(*(_QWORD *)(*(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v26, v21, v22)
        || !sub_BF86C0(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v147 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
              a2,
              v147,
              v21,
              v22)
        || (v98 = sub_BF86C0(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v147 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                    a2,
                    v147,
                    v21,
                    v22),
            v26 = v147,
            !v98) )
      {
        v26 = *(_QWORD *)v29;
        goto LABEL_17;
      }
      v19 = v185.m128i_u32[2];
      v25 = v185.m128i_u32[2];
    }
    *(_DWORD *)(v29 + 72) = 1;
    v148 = v25;
    v99 = sub_BD7CB0(*(_QWORD *)(v26 + 16));
    v100 = v148;
    v101 = v99;
    v102 = v19;
    v103 = v19 + 1;
    if ( v185.m128i_u32[3] < v103 )
    {
      v113 = sub_22136C0(&v185, &v186, v103, 112, &v178);
      v21 = v185.m128i_u32[2];
      v100 = v148;
      v104 = v113;
      v114 = v113;
      v115 = (_QWORD *)v185.m128i_i64[0];
      v153 = v185.m128i_i64[0] + 112LL * v185.m128i_u32[2];
      if ( v185.m128i_i64[0] != v153 )
      {
        do
        {
          v116 = *v115;
          v117 = (__int64)(v115 + 1);
          v118 = v114 + 8;
          v149 = v100;
          v114 += 112;
          v115 += 14;
          *(_QWORD *)(v114 - 112) = v116;
          sub_A2BB60(v118, v117);
          v100 = v149;
          *(_BYTE *)(v114 - 48) = *((_BYTE *)v115 - 48);
          v119 = *((_DWORD *)v115 - 10);
          *(_QWORD *)(v114 - 32) = 0;
          *(_DWORD *)(v114 - 40) = v119;
          v120 = *(v115 - 4);
          *(_BYTE *)(v114 - 24) = 0;
          *(_BYTE *)(v114 - 23) = 0;
          *(_QWORD *)(v114 - 16) = 0;
          v121 = _mm_loadu_si128((const __m128i *)(v115 - 3));
          *(_DWORD *)(v114 - 8) = 0;
          *(_QWORD *)(v114 - 32) = v120;
          v21 = *((unsigned int *)v115 - 2);
          *(__m128i *)(v114 - 24) = v121;
          *(_DWORD *)(v114 - 8) = v21;
          *(v115 - 4) = 0;
        }
        while ( (_QWORD *)v153 != v115 );
        v122 = v185.m128i_i64[0];
        v123 = v185.m128i_i64[0] + 112LL * v185.m128i_u32[2];
        while ( v122 != v123 )
        {
          while ( 1 )
          {
            v123 -= 112;
            v124 = *(_QWORD *)(v123 + 80);
            if ( v124 )
            {
              *(__m128i *)*(_QWORD *)(v124 + 24) = _mm_loadu_si128((const __m128i *)(v123 + 88));
              v21 = *(unsigned int *)(v123 + 104);
              *(_DWORD *)(v124 + 900) = v21;
            }
            if ( *(_DWORD *)(v123 + 8) <= 1u )
              break;
            v150 = v100;
            sub_A2BBA0((int *)(v123 + 8));
            v100 = v150;
            if ( v122 == v123 )
              goto LABEL_208;
          }
        }
      }
LABEL_208:
      v125 = v178.m128i_i32[0];
      if ( (__int64 *)v185.m128i_i64[0] != &v186 )
      {
        v151 = v100;
        free((void *)v185.m128i_i64[0]);
        v100 = v151;
      }
      v185.m128i_i64[0] = v104;
      v102 = v185.m128i_u32[2];
      v185.m128i_i32[3] = v125;
    }
    else
    {
      v104 = v185.m128i_i64[0];
    }
    v105 = (char *)(v104 + 112 * v102);
    a2 = v104 + 112 * v103;
    if ( v105 != (char *)a2 )
    {
      do
      {
        v106 = v105;
        v105 += 112;
        memset(v106, 0, 0x70u);
        v21 = 0;
        *(v105 - 100) = 0;
      }
      while ( (char *)a2 != v105 );
      v104 = v185.m128i_i64[0];
    }
    v25 = v100 + 1;
    v185.m128i_i32[2] = v25;
    v107 = 112LL * (unsigned int)v103;
    *(_QWORD *)(v104 + v107 - 112) = v101;
    *(_DWORD *)(v185.m128i_i64[0] + v107 - 40) = 0;
    goto LABEL_23;
  }
  v8 = (*(_WORD *)(v155[0] + 2) >> 3) & 0x3F;
  v9 = (*(_WORD *)(v155[0] + 2) >> 3) & 0x3F;
LABEL_7:
  v12 = (void *)*a1;
  if ( (unsigned int)(v9 - 9) <= 6 )
  {
    v178.m128i_i64[0] = (__int64)a1;
    v185.m128i_i64[0] = (__int64)v155;
    v185.m128i_i64[1] = (__int64)a1;
    return (unsigned int)sub_C64B50((__int64)v12, v7, (__int64)&v178, (__int64 **)&v185, a5);
  }
  v13 = *(_QWORD *)(v7 + 16);
  v14 = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 42 )
  {
    v14 &= 0xFFFFFFFFFFFFFFF0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) == 42 && (_DWORD)v9 == 6 )
    {
      v178 = 0u;
      LOBYTE(v180[0]) |= 1u;
      v182 = v184;
      v179 = 0;
      v181 = 0;
      v183 = 0x800000000LL;
      v184[65] = 0;
      v185 = 0u;
      v186 = 0;
      LOBYTE(v187) = v187 | 1;
      v189 = 0;
      ptr = v192;
      v191 = 0x800000000LL;
      v196 = 0;
      v87 = *(_QWORD *)(v7 + 16);
      v175[0] = v12;
      v175[1] = &v178;
      LOBYTE(v176) = 0;
      v10 = sub_C24FB0((__m128i *)v175, v87, (__int64)v192, (__int64)&v185, v14, a6);
      if ( !(_BYTE)v10 )
      {
        if ( (unsigned __int8)sub_BEDB10(*a1) )
        {
          v94 = *(_QWORD *)(v155[0] + 24);
          v175[0] = (void *)*a1;
          LOBYTE(v176) = 0;
          v175[1] = &v185;
          sub_C24FB0((__m128i *)v175, v94, v155[0], v91, v92, v93);
          goto LABEL_168;
        }
        goto LABEL_231;
      }
      v126 = *(_QWORD *)(v155[0] + 24);
      v175[0] = (void *)*a1;
      LOBYTE(v176) = 0;
      v175[1] = &v185;
      v10 = sub_C24FB0((__m128i *)v175, v126, v155[0], v88, v89, v90);
      if ( (_BYTE)v10 )
      {
        if ( !sub_BEC590(&v178, &v185) )
        {
          v129 = nullptr;
          if ( v178.m128i_i64[0] && (v178.m128i_i8[0] & 3) == 1 )
            v129 = (void *)(v178.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
          v163 = v129;
          if ( v185.m128i_i64[0] && (v185.m128i_i8[0] & 3) == 1 )
          {
            v169 = &v178;
            v171 = v155;
            v166 = (void *)(v185.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
            v172 = &v185;
            v173 = &v163;
            v170 = (unsigned __int64)a1;
            v174 = &v166;
            if ( v129 && (v185.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            {
              if ( (unsigned __int8)sub_BECAD0(*a1, &v178, &v185) )
              {
                v10 = sub_BF76F0((__int64 *)&v169, 0x978u);
              }
              else
              {
                if ( (*(_WORD *)v163 & 0x1FF) != 0x7F || (*(_WORD *)v166 & 0x1FF) != 0x7F )
                  goto LABEL_228;
                v130 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v163 + 3) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
                if ( (*(_QWORD *)(*((_QWORD *)v163 + 3) + 16LL) & 4) != 0 )
                  v130 = (_QWORD *)*v130;
                v131 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v166 + 3) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
                if ( (*(_QWORD *)(*((_QWORD *)v166 + 3) + 16LL) & 4) != 0 )
                  v131 = (_QWORD *)*v131;
                if ( v131 == v130 )
                {
                  v142 = a1[1];
                  BYTE4(v175[0]) &= ~1u;
                  LODWORD(v175[0]) = 13;
                  v175[1] = v163;
                  v176 = v166;
                  sub_A30FE0(v142, (int *)v175);
                  if ( LODWORD(v175[0]) > 1 )
                    sub_A2BBA0((int *)v175);
                }
                else
                {
LABEL_228:
                  v10 = sub_BF05D0(*a1, v155[0]);
                }
              }
              goto LABEL_168;
            }
          }
          else
          {
            v169 = &v178;
            v171 = v155;
            v166 = nullptr;
            v172 = &v185;
            v173 = &v163;
            v170 = (unsigned __int64)a1;
            v174 = &v166;
          }
          v10 = sub_BF76F0((__int64 *)&v169, 0x9A4u);
          goto LABEL_168;
        }
        if ( (((unsigned __int8)v187 | LOBYTE(v180[0])) & 1) == 0 )
        {
          if ( (*(__m128i *)v175 = _mm_load_si128(&v178),
                v141 = sub_A2B5D0(v175),
                (unsigned int)v183 != (unsigned __int64)(unsigned int)v191)
            || (v143 = v180[0] & 8, (v180[0] & 8) != 0) && (unsigned int)v183 != (unsigned __int64)(v180[0] >> 4)
            || (v144 = sub_BEDBE0(v141, (__int64)v180, (__int64)&v187, v175),
                v128 = v143 != 0,
                v127 = (unsigned int)v183 - v128,
                v144 < v127) )
          {
            sub_E0FF50(*a1, v155[0], 2476, 0);
          }
        }
        v133 = v155[0];
        v134 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155[0] + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v134 + 16) != 42 )
        {
          v134 = sub_F3F310(
                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v155[0] + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                   v155[0],
                   v127,
                   v128);
          v133 = v155[0];
        }
        v135 = *(_QWORD *)(v134 + 32);
        v136 = *a1;
        v156 = 0;
        if ( (unsigned __int8)sub_BEC0F0(v136, *(unsigned int *)(v133 + 4), v135, &v156, 0) )
        {
          if ( v156 )
          {
            LODWORD(v175[1]) = 65;
            sub_21E1730(v175, v179, 1);
            v159 = 0;
            v158 = (unsigned int)v175[1];
            LODWORD(v175[1]) = 65;
            v157 = v175[0];
            sub_21E1730(v175, v186, 1);
            v162 = 0;
            v161 = (unsigned int)v175[1];
            LODWORD(v175[1]) = 65;
            v160 = v175[0];
            sub_21E1730(v175, v156, 1);
            v165 = 0;
            v137 = v159;
            v164 = (unsigned int)v175[1];
            v163 = v175[0];
            LODWORD(v175[1]) = v158;
            if ( v158 > 0x40 )
              sub_21E17D0(v175);
            else
              v175[0] = v157;
            sub_21E1D30(v175, &v160);
            BYTE4(v170) = v137;
            LODWORD(v170) = v175[1];
            v169 = v175[0];
            sub_BF2B90((__int64)&v166, (__int64)&v169);
            if ( (unsigned int)v170 > 0x40 && v169 )
              operator delete[](v169);
            sub_A884B0(*(_QWORD *)(*a1 + 16), *(_QWORD *)(v155[0] + 8), v138, v139, v140);
            v145 = v168;
            sub_21E2D00(v175, &v166);
            BYTE4(v170) = v145;
            LODWORD(v170) = v175[1];
            v169 = v175[0];
            sub_BF2AD0((__int64)v175, (__int64)&v169, 65);
            if ( LODWORD(v175[1]) <= 0x40 )
            {
              if ( v175[0] == v166 )
                goto LABEL_248;
            }
            else if ( (unsigned __int8)sub_21E2030(v175, &v166) )
            {
LABEL_246:
              if ( v175[0] )
                operator delete[](v175[0]);
              goto LABEL_248;
            }
            v10 = sub_BF7400(*a1, v155[0], (__int64)&v166, *(_QWORD *)(v155[0] + 8));
            if ( !(_BYTE)v10 )
            {
              if ( LODWORD(v175[1]) > 0x40 && v175[0] )
                operator delete[](v175[0]);
              goto LABEL_249;
            }
            if ( LODWORD(v175[1]) > 0x40 )
              goto LABEL_246;
LABEL_248:
            v10 = sub_BEEA30((__int64)&v169, a1[1]);
LABEL_249:
            if ( (unsigned int)v170 > 0x40 && v169 )
              operator delete[](v169);
            if ( v167 > 0x40 && v166 )
              operator delete[](v166);
            if ( v164 > 0x40 && v163 )
              operator delete[](v163);
            if ( v161 > 0x40 && v160 )
              operator delete[](v160);
            if ( v158 > 0x40 && v157 )
              operator delete[](v157);
LABEL_168:
            if ( ptr != v192 )
              free(ptr);
            v78 = v182;
            if ( v182 == v184 )
              return v10;
LABEL_126:
            free(v78);
            return v10;
          }
          v132 = (unsigned __int8 **)sub_E0FED0(*a1, v155[0], 2477, 0);
          if ( v132 )
            sub_AC60B0(v132, v135, 8u);
        }
      }
LABEL_231:
      v10 = 0;
      goto LABEL_168;
    }
  }
  if ( (unsigned __int8)v8 > 1u )
  {
    if ( (_BYTE)v8 == 32 )
    {
      sub_C1BDB0((__int64)v12, v13, v15, v9, v14);
      return (unsigned int)sub_C21130(a1, *(_QWORD *)(v7 + 24), v47, v48, v49, v50);
    }
    else
    {
      return (unsigned int)sub_BF05D0((__int64)v12, v7);
    }
  }
  v10 = 0;
  v185 = 0u;
  ptr = v192;
  v186 = 0;
  LOBYTE(v187) = v187 | 1;
  v189 = 0;
  v191 = 0x800000000LL;
  v196 = 0;
  if ( sub_C3A3B0((__int64)v12, v7, (__int64)&v185, 1u, v14, a6) )
  {
    v77 = *a1;
    v178.m128i_i8[4] &= ~1u;
    v178.m128i_i32[0] = 0;
    v10 = sub_C12830(v77, (_DWORD *)v7, *(_QWORD *)(v7 + 8), (__int64)&v185, (__int64)&v178, 0);
    if ( (_BYTE)v10 )
    {
      if ( v178.m128i_i32[0] <= 0xDu && (v81 = 8322, _bittest64(&v81, v178.m128i_u32[0])) || (v178.m128i_i8[4] & 1) != 0 )
        sub_A30FE0(a1[1], v178.m128i_i32);
      else
        v10 = sub_BEEA30((__int64)&v178.m128i_i64[1], a1[1]);
    }
    if ( v178.m128i_i32[0] > 1u )
      sub_A2BBA0(v178.m128i_i32);
  }
  v78 = ptr;
  if ( ptr != v192 )
    goto LABEL_126;
  return v10;
}

