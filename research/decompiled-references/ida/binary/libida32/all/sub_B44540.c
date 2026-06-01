__int64 __fastcall sub_B44540(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r12
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned __int64 v20; // rsi
  __int64 v21; // r12
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  unsigned __int64 v28; // rbp
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned __int64 v32; // r14
  int v33; // eax
  __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rcx
  unsigned __int64 *v37; // rax
  int v38; // r13d
  unsigned int v39; // edi
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rsi
  char *v42; // rdx
  char v43; // r14
  char v44; // r12
  bool v45; // r14
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // r13
  unsigned __int64 v50; // rdx
  __m128i *v51; // rcx
  const __m128i *v52; // rax
  int v53; // eax
  unsigned __int8 v54; // dl
  int v55; // eax
  char v56; // r13
  __int64 v58; // r12
  unsigned __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  _DWORD *v63; // rax
  __int64 v64; // rdi
  __int64 v65; // r13
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rax
  _DWORD *v70; // rsi
  __int64 v71; // rdi
  int v72; // eax
  __int64 v73; // rdi
  int v74; // eax
  unsigned int v75; // r13d
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // rbp
  __int64 *v82; // rdx
  unsigned __int64 *v83; // rax
  int v84; // edx
  __int64 v85; // rax
  unsigned int v86; // r14d
  __int64 v87; // r13
  __int64 v88; // rdi
  void *v89; // rax
  __int64 v90; // r8
  unsigned __int64 *v91; // r9
  int v92; // eax
  unsigned int v93; // esi
  __int64 v94; // rcx
  __int64 v95; // rcx
  _QWORD *v96; // r11
  unsigned __int64 v97; // r14
  __int64 v98; // rdi
  _QWORD *v99; // rax
  __int64 v100; // r14
  __int64 v101; // rcx
  unsigned __int64 *v102; // rsi
  _QWORD *n; // rdx
  unsigned __int64 *ii; // rax
  unsigned __int64 v105; // rdx
  __int64 v106; // r9
  int v107; // r8d
  unsigned int v108; // edi
  __int64 v109; // rcx
  __int64 v110; // r10
  unsigned __int64 v111; // rdx
  int v112; // edi
  __int64 v113; // rsi
  int v114; // ecx
  unsigned int v115; // r12d
  unsigned __int64 v116; // rdi
  int v117; // r9d
  unsigned __int64 *v118; // r10
  __int64 v119; // rsi
  __int64 v120; // rdx
  size_t v121; // rdx
  __int64 v122; // rax
  _QWORD *v123; // rax
  int v124; // r8d
  int v125; // ecx
  unsigned __int64 v126; // r14
  unsigned __int64 *v127; // r12
  __int64 v128; // r14
  __int64 v129; // rcx
  unsigned __int64 *v130; // rsi
  unsigned __int64 *k; // rdx
  unsigned __int64 *m; // rax
  unsigned __int64 v133; // rdx
  __int64 v134; // r9
  int v135; // r8d
  unsigned int v136; // edi
  __int64 *v137; // rcx
  __int64 v138; // r10
  unsigned __int64 v139; // rdx
  char v140; // si
  __int64 v141; // rdi
  int v142; // esi
  unsigned int v143; // ecx
  unsigned __int64 v144; // r8
  int v145; // r10d
  unsigned __int64 *v146; // r11
  int v147; // r8d
  int v148; // esi
  char v149; // dl
  __m128 *v150; // r12
  unsigned __int64 v151; // rax
  unsigned __int64 v152; // rax
  unsigned __int64 v153; // rax
  unsigned __int64 v154; // rax
  unsigned __int64 v155; // rax
  unsigned __int64 v156; // rax
  unsigned __int64 v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // rcx
  __int64 v160; // rcx
  __int64 v161; // rdx
  _QWORD *v162; // rdx
  __m128 *i; // rax
  unsigned __int64 v164; // rdx
  __int64 v165; // r8
  int v166; // edi
  unsigned int v167; // esi
  __int64 v168; // r9
  int v169; // edi
  _QWORD *v170; // rax
  __m128 *v171; // rcx
  unsigned __int64 v172; // rdx
  unsigned __int64 v173; // rdx
  unsigned __int64 v174; // rdx
  unsigned __int64 v175; // rdx
  unsigned __int64 v176; // rdx
  unsigned __int64 v177; // rdx
  unsigned __int64 v178; // rdx
  __int64 v179; // rsi
  char v180; // di
  __int64 v181; // rdx
  _QWORD *v182; // rdx
  __m128 *j; // rax
  unsigned __int64 v184; // rdx
  __int64 v185; // r9
  int v186; // r8d
  unsigned int v187; // edi
  __int64 v188; // r10
  int v189; // r8d
  unsigned __int64 v190; // r14
  __int64 v191; // rax
  unsigned __int64 v192; // rdx
  unsigned __int64 v193; // rdx
  unsigned __int64 v194; // rax
  _DWORD *v195; // rax
  __int64 v196; // rdi
  __int32 v197; // edx
  __int64 *v198; // r11
  int v199; // r11d
  __int64 v200; // r10
  int v201; // r11d
  __int64 v202; // r13
  __int64 v203; // rdi
  unsigned __int64 v204; // [rsp+8h] [rbp-110h]
  __int64 v205; // [rsp+10h] [rbp-108h] BYREF
  __int64 *v206; // [rsp+18h] [rbp-100h]
  __int64 v207; // [rsp+20h] [rbp-F8h]
  __int64 v208; // [rsp+28h] [rbp-F0h]
  __m128 *v209; // [rsp+30h] [rbp-E8h]
  unsigned __int8 v210; // [rsp+3Eh] [rbp-DAh]
  unsigned __int8 v211; // [rsp+3Fh] [rbp-D9h]
  int v212; // [rsp+40h] [rbp-D8h]
  int v213; // [rsp+44h] [rbp-D4h]
  unsigned __int64 v214; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v215; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v216; // [rsp+58h] [rbp-C0h]
  __m128 v217; // [rsp+60h] [rbp-B8h] BYREF
  int v218; // [rsp+70h] [rbp-A8h]

  v7 = *(_DWORD *)(a1 + 344);
  v8 = *(_QWORD *)(a3 + 104);
  v205 = a3;
  v213 = v7;
  v9 = *(_DWORD *)(a1 + 240);
  v214 = a2;
  v212 = v9;
  v10 = *(_QWORD *)(v8 + 96);
  v206 = a4;
  v207 = a5;
  v210 = a6;
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) == 0 )
  {
    a4 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v10 & 2) == 0 )
        goto LABEL_4;
      v58 = a4[2295];
      v59 = v8 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v58 )
      {
        v60 = a4[294];
        a4[304] += 24;
        v61 = (v60 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        a2 = v61 + 24;
        if ( a4[295] >= v61 + 24 && v60 )
        {
          a4[294] = a2;
          v62 = (v60 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          a2 = 24;
          v62 = sub_962430((__int64)(a4 + 294), 24, 24, 3, a5, a6);
          v61 = v62 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v62 = v58;
        v59 = v61 | 4;
        *(_DWORD *)(v62 + 8) = 0;
        *(_QWORD *)(v62 + 16) = v8;
      }
      v11 = v59 & 0xFFFFFFFFFFFFFFFELL;
      v10 = v11 | 1;
      *(_QWORD *)(v8 + 96) = v11 | 1;
    }
  }
  if ( v11 )
  {
    v11 &= 4u;
    if ( (_DWORD)v11 )
    {
      v63 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v63 )
      {
        v64 = *(_QWORD *)v63;
        v11 = *(unsigned int *)(*(_QWORD *)v63 + 12LL);
        if ( v63[2] != (_DWORD)v11 )
        {
          v63[2] = v11;
          a2 = v8;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v64 + 152LL))(v64, v8);
        }
      }
    }
  }
LABEL_4:
  v12 = *(_QWORD *)(v205 + 128);
  if ( (*(_BYTE *)(v12 + 24) & 1) != 0 )
    v13 = sub_B72C40(v12, a2, v11);
  else
    v13 = *(_QWORD *)(v12 + 24);
  v14 = *(_QWORD *)(v205 + 104);
  v15 = *(_QWORD *)(v14 + 96);
  v16 = v15;
  v17 = v15 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v15 & 1) == 0 )
  {
    a4 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v15 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v15 & 2) == 0 )
      {
        v18 = *(_QWORD *)(v205 + 128);
        v19 = 3LL * *(unsigned int *)(v18 + 16);
        v20 = v13 + 24LL * *(unsigned int *)(v18 + 16);
        v204 = v20;
        goto LABEL_10;
      }
      v65 = a4[2295];
      v66 = v14 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v65 )
      {
        v67 = a4[294];
        a4[304] += 24;
        v68 = (v67 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( a4[295] >= v68 + 24 && v67 )
        {
          a4[294] = v68 + 24;
          v69 = (v67 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v69 = sub_962430((__int64)(a4 + 294), 24, 24, 3, a5, a6);
          v68 = v69 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v69 = v65;
        v66 = v68 | 4;
        *(_DWORD *)(v69 + 8) = 0;
        *(_QWORD *)(v69 + 16) = v14;
      }
      v17 = v66 & 0xFFFFFFFFFFFFFFFELL;
      v16 = v17 | 1;
      *(_QWORD *)(v14 + 96) = v17 | 1;
    }
  }
  if ( v17 )
  {
    if ( (v17 & 4) != 0 )
    {
      v70 = (_DWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v70 )
      {
        v71 = *(_QWORD *)v70;
        v72 = *(_DWORD *)(*(_QWORD *)v70 + 12LL);
        if ( v70[2] != v72 )
        {
          v70[2] = v72;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v71 + 152LL))(v71, v14);
        }
      }
    }
  }
  v18 = *(_QWORD *)(v205 + 128);
  v14 = *(_QWORD *)(v205 + 104);
  v19 = *(_QWORD *)(v14 + 96);
  v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
  v204 = v13 + 24LL * *(unsigned int *)(v18 + 16);
  LOBYTE(v15) = v19;
  if ( (v19 & 1) != 0 || (a4 = (__int64 *)(v19 & 0xFFFFFFFFFFFFFFFCLL), (v19 & 0xFFFFFFFFFFFFFFFCLL) == 0) )
  {
    if ( !v20 )
      goto LABEL_17;
LABEL_83:
    v20 &= 4u;
    if ( (_DWORD)v20 )
    {
      v19 &= 0xFFFFFFFFFFFFFFF8LL;
      if ( v19 )
      {
        v73 = *(_QWORD *)v19;
        v74 = *(_DWORD *)(*(_QWORD *)v19 + 12LL);
        if ( *(_DWORD *)(v19 + 8) != v74 )
        {
          *(_DWORD *)(v19 + 8) = v74;
          v20 = v14;
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v73 + 152LL))(v73, v14);
        }
      }
    }
    goto LABEL_17;
  }
LABEL_10:
  if ( (v15 & 2) == 0 )
    goto LABEL_18;
  v21 = a4[2295];
  v22 = v14 & 0xFFFFFFFFFFFFFFFBLL;
  if ( v21 )
  {
    v23 = a4[294];
    a4[304] += 24;
    v24 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a4[295] >= v24 + 24 && v23 )
    {
      a4[294] = v24 + 24;
      v25 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v25 = sub_962430((__int64)(a4 + 294), 24, 24, 3, a5, a6);
      v24 = v25 & 0xFFFFFFFFFFFFFFFBLL;
    }
    *(_QWORD *)v25 = v21;
    v22 = v24 | 4;
    *(_DWORD *)(v25 + 8) = 0;
    *(_QWORD *)(v25 + 16) = v14;
  }
  v20 = v22 & 0xFFFFFFFFFFFFFFFELL;
  v19 = v20 | 1;
  *(_QWORD *)(v14 + 96) = v20 | 1;
  if ( v20 )
    goto LABEL_83;
LABEL_17:
  v18 = *(_QWORD *)(v205 + 128);
LABEL_18:
  if ( (*(_BYTE *)(v18 + 24) & 1) != 0 )
    v26 = sub_B72C40(v18, v20, v19);
  else
    v26 = *(_QWORD *)(v18 + 24);
  v211 = 0;
  if ( v26 != v204 )
  {
    v209 = &v217;
    do
    {
      v27 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v27 + 8) & 0xF) != 0 )
        v27 = sub_F411C0(**(_QWORD **)(v26 + 16));
      v28 = *(_QWORD *)(*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_BYTE *)(*(_QWORD *)v28 + 16LL) != 29 )
      {
        v29 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v29 + 8) & 0xF) != 0 )
          v29 = sub_F411C0(**(_QWORD **)(v26 + 16));
        v30 = sub_F3F500(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL), v20, v19, a4, a5);
        if ( v30 )
        {
          v31 = v30 + 64;
          if ( (unsigned __int8)sub_B6A440(v30 + 64) )
          {
            v32 = v205 + 64;
LABEL_30:
            v33 = *(_BYTE *)(v32 + 8) & 0x7F;
            if ( v33 != 24 )
            {
              while ( v33 )
              {
                v34 = sub_B6D830(v32);
                if ( v34 == sub_B6D830(v31) )
                  goto LABEL_37;
                v35 = *(_QWORD *)(sub_B68470(v32) + 16);
                if ( (v35 & 4) != 0 )
                {
                  v32 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
                  goto LABEL_30;
                }
                v32 = v35 & 0xFFFFFFFFFFFFFFF8LL;
                v33 = *(_BYTE *)(v32 + 8) & 0x7F;
                if ( v33 == 24 )
                  break;
              }
            }
          }
        }
        if ( !v210 && (*(_BYTE *)(*(_QWORD *)v28 + 17LL) & 4) != 0 )
          goto LABEL_56;
      }
LABEL_37:
      v36 = *(_BYTE *)(a1 + 32) & 1;
      if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
      {
        v37 = (unsigned __int64 *)(a1 + 40);
        v38 = 7;
      }
      else
      {
        v75 = *(_DWORD *)(a1 + 48);
        v37 = *(unsigned __int64 **)(a1 + 40);
        if ( !v75 )
          goto LABEL_211;
        v38 = v75 - 1;
      }
      v39 = v38 & (v28 ^ (v28 >> 9));
      v40 = &v37[2 * v39];
      v41 = *v40;
      if ( v28 == *v40 )
        goto LABEL_40;
      v90 = 1;
      v91 = nullptr;
      if ( v41 )
      {
        while ( 1 )
        {
          if ( !v91 && v41 == -1 )
            v91 = v40;
          v39 = v38 & (v90 + v39);
          v40 = &v37[2 * v39];
          v41 = *v40;
          if ( v28 == *v40 )
            goto LABEL_40;
          if ( !v41 )
            break;
          v90 = (unsigned int)(v90 + 1);
        }
        if ( v91 )
          v40 = v91;
      }
      v92 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
      v93 = 4 * v92;
      if ( (_BYTE)v36 )
      {
        if ( v93 > 0x17 )
        {
          if ( (unsigned __int64)(*(_QWORD *)(a1 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v217.m128_u64[0] = *(_QWORD *)(a1 + 40);
            v217.m128_i32[2] = *(_DWORD *)(a1 + 48);
            v150 = v209 + 1;
          }
          else
          {
            v150 = v209;
          }
          v151 = *(_QWORD *)(a1 + 56);
          if ( v151 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v150->m128_u64[0] = v151;
            ++v150;
            v150[-1].m128_i32[2] = *(_DWORD *)(a1 + 64);
          }
          v152 = *(_QWORD *)(a1 + 72);
          if ( v152 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v150->m128_u64[0] = v152;
            ++v150;
            v150[-1].m128_i32[2] = *(_DWORD *)(a1 + 80);
          }
          v153 = *(_QWORD *)(a1 + 88);
          if ( v153 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v150->m128_u64[0] = v153;
            ++v150;
            v150[-1].m128_i32[2] = *(_DWORD *)(a1 + 96);
          }
          v154 = *(_QWORD *)(a1 + 104);
          if ( v154 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v150->m128_u64[0] = v154;
            ++v150;
            v150[-1].m128_i32[2] = *(_DWORD *)(a1 + 112);
          }
          v155 = *(_QWORD *)(a1 + 120);
          if ( v155 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v150->m128_u64[0] = v155;
            ++v150;
            v150[-1].m128_i32[2] = *(_DWORD *)(a1 + 128);
          }
          v156 = *(_QWORD *)(a1 + 136);
          if ( v156 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v150->m128_u64[0] = v156;
            ++v150;
            v150[-1].m128_i32[2] = *(_DWORD *)(a1 + 144);
          }
          v157 = *(_QWORD *)(a1 + 152);
          if ( v157 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v150->m128_u64[0] = v157;
            ++v150;
            v150[-1].m128_i32[2] = *(_DWORD *)(a1 + 160);
          }
          *(_BYTE *)(a1 + 32) &= ~1u;
          v158 = (_QWORD *)sub_220C370(1024, 8, v157 - 1, v36, v90, v91);
          v159 = *(_QWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 48) = 64;
          *(_QWORD *)(a1 + 40) = v158;
          v160 = v159 & 1;
          *(_QWORD *)(a1 + 32) = v160;
          v140 = v160 & 1;
          if ( (v160 & 1) != 0 )
          {
            v158 = (_QWORD *)(a1 + 40);
            v161 = 16;
          }
          else
          {
            v161 = 128;
          }
          v162 = &v158[v161];
          if ( v162 != v158 )
          {
            do
            {
              *v158 = 0;
              v158 += 2;
            }
            while ( v162 != v158 );
            LOBYTE(v160) = *(_BYTE *)(a1 + 32);
            v140 = v160 & 1;
          }
          for ( i = v209; i != v150; ++i )
          {
            v164 = i->m128_u64[0];
            v140 = v160 & 1;
            if ( i->m128_u64[0] - 1 <= 0xFFFFFFFFFFFFFFFDLL )
            {
              if ( v140 )
              {
                v165 = a1 + 40;
                v166 = 7;
              }
              else
              {
                v169 = *(_DWORD *)(a1 + 48);
                v165 = *(_QWORD *)(a1 + 40);
                if ( !v169 )
                {
                  *(_QWORD *)&dword_0 = i->m128_u64[0];
                  BUG();
                }
                v166 = v169 - 1;
              }
              v167 = v166 & (v164 ^ (v164 >> 9));
              v160 = v165 + 16LL * v167;
              v168 = *(_QWORD *)v160;
              if ( *(_QWORD *)v160 != v164 )
              {
                v199 = 1;
                v200 = 0;
                if ( v168 )
                {
                  while ( 1 )
                  {
                    if ( !v200 && v168 == -1 )
                      v200 = v160;
                    v167 = v166 & (v199 + v167);
                    v160 = v165 + 16LL * v167;
                    v168 = *(_QWORD *)v160;
                    if ( v164 == *(_QWORD *)v160 )
                      break;
                    if ( !v168 )
                    {
                      if ( v200 )
                        v160 = v200;
                      break;
                    }
                    ++v199;
                  }
                }
              }
              *(_QWORD *)v160 = i->m128_u64[0];
              *(_DWORD *)(v160 + 8) = i->m128_i32[2];
              LODWORD(v160) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
              *(_DWORD *)(a1 + 32) = v160;
              v140 = v160 & 1;
            }
          }
          goto LABEL_225;
        }
        if ( (unsigned int)(8 - *(_DWORD *)(a1 + 36) - v92) <= 1 )
        {
          v170 = *(_QWORD **)(a1 + 40);
          if ( (unsigned __int64)v170 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v197 = *(_DWORD *)(a1 + 48);
            v217.m128_u64[0] = *(_QWORD *)(a1 + 40);
            v217.m128_i32[2] = v197;
            v171 = v209 + 1;
          }
          else
          {
            v171 = v209;
          }
          v172 = *(_QWORD *)(a1 + 56);
          if ( v172 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v171->m128_u64[0] = v172;
            ++v171;
            v171[-1].m128_i32[2] = *(_DWORD *)(a1 + 64);
          }
          v173 = *(_QWORD *)(a1 + 72);
          if ( v173 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v171->m128_u64[0] = v173;
            ++v171;
            v171[-1].m128_i32[2] = *(_DWORD *)(a1 + 80);
          }
          v174 = *(_QWORD *)(a1 + 88);
          if ( v174 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v171->m128_u64[0] = v174;
            ++v171;
            v171[-1].m128_i32[2] = *(_DWORD *)(a1 + 96);
          }
          v175 = *(_QWORD *)(a1 + 104);
          if ( v175 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v171->m128_u64[0] = v175;
            ++v171;
            v171[-1].m128_i32[2] = *(_DWORD *)(a1 + 112);
          }
          v176 = *(_QWORD *)(a1 + 120);
          if ( v176 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v171->m128_u64[0] = v176;
            ++v171;
            v171[-1].m128_i32[2] = *(_DWORD *)(a1 + 128);
          }
          v177 = *(_QWORD *)(a1 + 136);
          if ( v177 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v171->m128_u64[0] = v177;
            ++v171;
            v171[-1].m128_i32[2] = *(_DWORD *)(a1 + 144);
          }
          v178 = *(_QWORD *)(a1 + 152);
          if ( v178 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
          {
            v171->m128_u64[0] = v178;
            ++v171;
            v171[-1].m128_i32[2] = *(_DWORD *)(a1 + 160);
          }
          v179 = *(_QWORD *)(a1 + 32) & 1LL;
          v180 = *(_BYTE *)(a1 + 32) & 1;
          *(_QWORD *)(a1 + 32) = v179;
          v112 = v180 & 1;
          if ( v112 )
          {
            v170 = (_QWORD *)(a1 + 40);
            v181 = 16;
          }
          else
          {
            v181 = 2LL * *(unsigned int *)(a1 + 48);
          }
          v182 = &v170[v181];
          if ( v182 != v170 )
          {
            do
            {
              *v170 = 0;
              v170 += 2;
            }
            while ( v182 != v170 );
            LOBYTE(v179) = *(_BYTE *)(a1 + 32);
            LOBYTE(v112) = v179 & 1;
          }
          for ( j = v209; j != v171; ++j )
          {
            v184 = j->m128_u64[0];
            LOBYTE(v112) = v179 & 1;
            if ( j->m128_u64[0] - 1 <= 0xFFFFFFFFFFFFFFFDLL )
            {
              if ( (_BYTE)v112 )
              {
                v185 = a1 + 40;
                v186 = 7;
              }
              else
              {
                v189 = *(_DWORD *)(a1 + 48);
                v185 = *(_QWORD *)(a1 + 40);
                if ( !v189 )
                {
                  *(_QWORD *)&dword_0 = j->m128_u64[0];
                  BUG();
                }
                v186 = v189 - 1;
              }
              v187 = v186 & (v184 ^ (v184 >> 9));
              v179 = v185 + 16LL * v187;
              v188 = *(_QWORD *)v179;
              if ( *(_QWORD *)v179 != v184 )
              {
                v201 = 1;
                v202 = 0;
                if ( v188 )
                {
                  while ( 1 )
                  {
                    if ( !v202 && v188 == -1 )
                      v202 = v179;
                    v187 = v186 & (v201 + v187);
                    LODWORD(v208) = v201 + 1;
                    v179 = v185 + 16LL * v187;
                    v188 = *(_QWORD *)v179;
                    if ( v184 == *(_QWORD *)v179 )
                      break;
                    if ( !v188 )
                    {
                      if ( v202 )
                        v179 = v202;
                      break;
                    }
                    v201 = v208;
                  }
                }
              }
              *(_QWORD *)v179 = j->m128_u64[0];
              *(_DWORD *)(v179 + 8) = j->m128_i32[2];
              LODWORD(v179) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
              *(_DWORD *)(a1 + 32) = v179;
              LOBYTE(v112) = v179 & 1;
            }
          }
LABEL_164:
          if ( (_BYTE)v112 )
          {
            v113 = a1 + 40;
            v114 = 7;
          }
          else
          {
            v125 = *(_DWORD *)(a1 + 48);
            v113 = *(_QWORD *)(a1 + 40);
            if ( !v125 )
              goto LABEL_383;
            v114 = v125 - 1;
          }
          v115 = v114 & (v28 ^ (v28 >> 9));
          v40 = (unsigned __int64 *)(v113 + 16LL * v115);
          v92 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
          v116 = *v40;
          if ( v28 != *v40 )
          {
            v117 = 1;
            v118 = nullptr;
            if ( v116 )
            {
              while ( 1 )
              {
                if ( v116 == -1 && !v118 )
                  v118 = v40;
                v115 = v114 & (v117 + v115);
                v40 = (unsigned __int64 *)(v113 + 16LL * v115);
                v116 = *v40;
                if ( v28 == *v40 )
                  break;
                if ( !v116 )
                {
                  if ( v118 )
                    v40 = v118;
                  break;
                }
                ++v117;
              }
            }
          }
        }
      }
      else
      {
        v75 = *(_DWORD *)(a1 + 48);
        v94 = 2 * v75;
        if ( 3 * v75 <= v93 )
        {
          v127 = *(unsigned __int64 **)(a1 + 40);
          if ( (unsigned int)v94 <= 8 )
          {
            v37 = *(unsigned __int64 **)(a1 + 40);
LABEL_211:
            *(_BYTE *)(a1 + 32) |= 1u;
            LODWORD(v126) = v75;
            v127 = v37;
          }
          else
          {
            v126 = ((((((unsigned int)(v94 - 1) | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 2)
                    | (unsigned int)(v94 - 1)
                    | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)
                    | (((((unsigned int)(v94 - 1) | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 2)
                      | (unsigned int)(v94 - 1)
                      | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 4)) >> 8)
                  | (((unsigned int)(v94 - 1) | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 2)
                  | (unsigned int)(v94 - 1)
                  | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)
                  | (((((unsigned int)(v94 - 1) | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 2)
                    | (unsigned int)(v94 - 1)
                    | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 4)
                  | (((((((unsigned int)(v94 - 1) | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 2)
                      | (unsigned int)(v94 - 1)
                      | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)
                      | (((((unsigned int)(v94 - 1) | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 2)
                        | (unsigned int)(v94 - 1)
                        | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 4)) >> 8)
                    | (((unsigned int)(v94 - 1) | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 2)
                    | (unsigned int)(v94 - 1)
                    | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)
                    | (((((unsigned int)(v94 - 1) | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 2)
                      | (unsigned int)(v94 - 1)
                      | ((unsigned __int64)(unsigned int)(v94 - 1) >> 1)) >> 4)) >> 16))
                 + 1;
            v203 = 16LL * (unsigned int)v126;
            if ( (unsigned int)v126 <= 0x40 )
            {
              v203 = 1024;
              LODWORD(v126) = 64;
            }
            v37 = (unsigned __int64 *)sub_220C370(v203, 8, v40, v94, v90, v91);
            *(_QWORD *)(a1 + 40) = v37;
            *(_DWORD *)(a1 + 48) = v126;
          }
          v128 = 2LL * (unsigned int)v126;
          v129 = *(_QWORD *)(a1 + 32) & 1LL;
          v130 = &v127[2 * v75];
          *(_QWORD *)(a1 + 32) = v129;
          if ( v129 )
          {
            v37 = (unsigned __int64 *)(a1 + 40);
            v128 = 16;
          }
          for ( k = &v37[v128]; k != v37; v37 += 2 )
            *v37 = 0;
          for ( m = v127; v130 != m; *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2)
                                                          | *(_DWORD *)(a1 + 32) & 1 )
          {
            while ( 1 )
            {
              v133 = *m;
              if ( *m - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                break;
              m += 2;
              if ( v130 == m )
                goto LABEL_224;
            }
            if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
            {
              v134 = a1 + 40;
              v135 = 7;
            }
            else
            {
              v147 = *(_DWORD *)(a1 + 48);
              v134 = *(_QWORD *)(a1 + 40);
              if ( !v147 )
              {
                *(_QWORD *)&dword_0 = *m;
                BUG();
              }
              v135 = v147 - 1;
            }
            v136 = v135 & (v133 ^ (v133 >> 9));
            v137 = (__int64 *)(v134 + 16LL * v136);
            v138 = *v137;
            if ( v133 != *v137 && v138 )
            {
              LODWORD(v208) = 1;
              v198 = nullptr;
              v215 = v133;
              while ( 1 )
              {
                if ( v138 == -1 && !v198 )
                  v198 = v137;
                v136 = v135 & (v208 + v136);
                v137 = (__int64 *)(v134 + 16LL * v136);
                v138 = *v137;
                if ( v215 == *v137 )
                  break;
                if ( !v138 )
                {
                  if ( v198 )
                    v137 = v198;
                  break;
                }
                LODWORD(v208) = v208 + 1;
              }
            }
            v139 = *m;
            m += 2;
            *v137 = v139;
            *((_DWORD *)v137 + 2) = *((_DWORD *)m - 2);
          }
LABEL_224:
          operator delete();
          v140 = *(_BYTE *)(a1 + 32) & 1;
LABEL_225:
          if ( v140 )
          {
            v141 = a1 + 40;
            v142 = 7;
          }
          else
          {
            v148 = *(_DWORD *)(a1 + 48);
            v141 = *(_QWORD *)(a1 + 40);
            if ( !v148 )
            {
LABEL_383:
              *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1;
              BUG();
            }
            v142 = v148 - 1;
          }
          v143 = v142 & (v28 ^ (v28 >> 9));
          v92 = (*(_DWORD *)(a1 + 32) >> 1) + 1;
          v40 = (unsigned __int64 *)(v141 + 16LL * v143);
          v144 = *v40;
          if ( v28 != *v40 )
          {
            v145 = 1;
            v146 = nullptr;
            if ( v144 )
            {
              while ( 1 )
              {
                if ( v144 == -1 && !v146 )
                  v146 = v40;
                v143 = v142 & (v145 + v143);
                v40 = (unsigned __int64 *)(v141 + 16LL * v143);
                v144 = *v40;
                if ( v28 == *v40 )
                  break;
                if ( !v144 )
                {
                  if ( v146 )
                    v40 = v146;
                  goto LABEL_142;
                }
                ++v145;
              }
            }
          }
          goto LABEL_142;
        }
        v95 = v75 - *(_DWORD *)(a1 + 36) - v92;
        if ( (unsigned int)v95 <= v75 >> 3 )
        {
          v96 = *(_QWORD **)(a1 + 40);
          if ( v75 <= 8 )
          {
            *(_BYTE *)(a1 + 32) |= 1u;
            LODWORD(v97) = v75;
            v99 = v96;
          }
          else
          {
            v208 = *(_QWORD *)(a1 + 40);
            v97 = ((((((((((v75 - 1) | ((unsigned __int64)(v75 - 1) >> 1)) >> 2)
                       | (v75 - 1)
                       | ((unsigned __int64)(v75 - 1) >> 1)) >> 4)
                     | (((v75 - 1) | ((unsigned __int64)(v75 - 1) >> 1)) >> 2)
                     | (v75 - 1)
                     | ((unsigned __int64)(v75 - 1) >> 1)) >> 8)
                   | (((((v75 - 1) | ((unsigned __int64)(v75 - 1) >> 1)) >> 2)
                     | (v75 - 1)
                     | ((unsigned __int64)(v75 - 1) >> 1)) >> 4)
                   | (((v75 - 1) | ((unsigned __int64)(v75 - 1) >> 1)) >> 2)
                   | (v75 - 1)
                   | ((unsigned __int64)(v75 - 1) >> 1)) >> 16)
                 | (((((((v75 - 1) | ((unsigned __int64)(v75 - 1) >> 1)) >> 2)
                     | (v75 - 1)
                     | ((unsigned __int64)(v75 - 1) >> 1)) >> 4)
                   | (((v75 - 1) | ((unsigned __int64)(v75 - 1) >> 1)) >> 2)
                   | (v75 - 1)
                   | ((unsigned __int64)(v75 - 1) >> 1)) >> 8)
                 | (((((v75 - 1) | ((unsigned __int64)(v75 - 1) >> 1)) >> 2)
                   | (v75 - 1)
                   | ((unsigned __int64)(v75 - 1) >> 1)) >> 4)
                 | (((v75 - 1) | ((unsigned __int64)(v75 - 1) >> 1)) >> 2)
                 | (v75 - 1)
                 | ((unsigned __int64)(v75 - 1) >> 1))
                + 1;
            v98 = 16LL * (unsigned int)v97;
            if ( (unsigned int)v97 <= 0x40 )
            {
              v98 = 1024;
              LODWORD(v97) = 64;
            }
            v99 = (_QWORD *)sub_220C370(v98, 8, v40, v95, v90, v91);
            v96 = (_QWORD *)v208;
            *(_QWORD *)(a1 + 40) = v99;
            *(_DWORD *)(a1 + 48) = v97;
          }
          v100 = 2LL * (unsigned int)v97;
          v101 = *(_QWORD *)(a1 + 32) & 1LL;
          v102 = &v96[2 * v75];
          *(_QWORD *)(a1 + 32) = v101;
          if ( v101 )
          {
            v99 = (_QWORD *)(a1 + 40);
            v100 = 16;
          }
          for ( n = &v99[v100]; n != v99; v99 += 2 )
            *v99 = 0;
          for ( ii = v96;
                v102 != ii;
                *(_DWORD *)(a1 + 32) = (2 * (*(_DWORD *)(a1 + 32) >> 1) + 2) | *(_DWORD *)(a1 + 32) & 1 )
          {
            while ( 1 )
            {
              v105 = *ii;
              if ( *ii - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                break;
              ii += 2;
              if ( v102 == ii )
                goto LABEL_163;
            }
            if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
            {
              v106 = a1 + 40;
              v107 = 7;
            }
            else
            {
              v124 = *(_DWORD *)(a1 + 48);
              v106 = *(_QWORD *)(a1 + 40);
              if ( !v124 )
              {
                *(_QWORD *)&dword_0 = *ii;
                BUG();
              }
              v107 = v124 - 1;
            }
            v108 = v107 & (v105 ^ (v105 >> 9));
            v109 = v106 + 16LL * v108;
            v110 = *(_QWORD *)v109;
            if ( *(_QWORD *)v109 != v105 && v110 )
            {
              LODWORD(v215) = 1;
              v208 = 0;
              v216 = v105;
              while ( 1 )
              {
                if ( v110 == -1 )
                {
                  if ( v208 )
                    v109 = v208;
                  v208 = v109;
                }
                v108 = v107 & (v215 + v108);
                v109 = v106 + 16LL * v108;
                v110 = *(_QWORD *)v109;
                if ( v216 == *(_QWORD *)v109 )
                  break;
                if ( !v110 )
                {
                  if ( v208 )
                    v109 = v208;
                  break;
                }
                LODWORD(v215) = v215 + 1;
              }
            }
            v111 = *ii;
            ii += 2;
            *(_QWORD *)v109 = v111;
            *(_DWORD *)(v109 + 8) = *((_DWORD *)ii - 2);
          }
LABEL_163:
          operator delete();
          LOBYTE(v112) = *(_BYTE *)(a1 + 32) & 1;
          goto LABEL_164;
        }
      }
LABEL_142:
      *(_DWORD *)(a1 + 32) = (2 * v92) | *(_DWORD *)(a1 + 32) & 1;
      if ( *v40 )
        --*(_DWORD *)(a1 + 36);
      *v40 = v28;
      *((_DWORD *)v40 + 2) = 0;
LABEL_40:
      v42 = (char *)(v40 + 1);
      if ( (*(_BYTE *)(v26 + 12) & 1) != 0 )
      {
        v43 = *v42;
        *v42 |= 1u;
        v44 = *(_BYTE *)(a1 + 362);
        v45 = (v43 & 1) == 0;
        if ( v44 )
        {
          v46 = *(_QWORD *)(a1 + 224);
          if ( v46 )
          {
            v44 = 0;
          }
          else
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
              v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            *(_QWORD *)(a1 + 224) = v46;
          }
        }
      }
      else
      {
        *(_DWORD *)v42 += 2;
        v44 = 0;
        v45 = 1;
      }
      if ( !*(_BYTE *)(a1 + 361) )
        goto LABEL_52;
      v208 = v26;
      v47 = 0;
      v217 = _mm_loadh_ps((const double *)&v205);
      if ( (*(_BYTE *)(v26 + 12) & 1) == 0 )
        v47 = *(_DWORD *)v42 >> 1;
      v218 = v47;
      v48 = *(unsigned int *)(a1 + 240);
      v49 = *(_QWORD *)(a1 + 232);
      v50 = v48 + 1;
      v51 = (__m128i *)(v49 + 24 * v48);
      v52 = (const __m128i *)v209;
      if ( v50 > *(unsigned int *)(a1 + 244) )
      {
        v119 = a1 + 248;
        if ( v49 > (unsigned __int64)v209 || v51 <= (__m128i *)v209 )
        {
          sub_22134E0(a1 + 232, v119, v50, 24);
          v51 = (__m128i *)(*(_QWORD *)(a1 + 232) + 24LL * *(unsigned int *)(a1 + 240));
          v52 = (const __m128i *)v209;
        }
        else
        {
          sub_22134E0(a1 + 232, v119, v50, 24);
          v120 = *(_QWORD *)(a1 + 232);
          v52 = (const __m128i *)((char *)v209 + v120 - v49);
          v51 = (__m128i *)(v120 + 24LL * *(unsigned int *)(a1 + 240));
        }
      }
      *v51 = _mm_loadu_si128(v52);
      v51[1].m128i_i64[0] = v52[1].m128i_i64[0];
      v53 = v212;
      ++*(_DWORD *)(a1 + 240);
      v54 = *(_BYTE *)(v26 + 12);
      if ( v53 )
      {
        if ( (v54 & 0xC) == 0xC )
        {
          v55 = 3;
          if ( (*(_BYTE *)(v26 + 12) & 2) == 0 )
          {
            v84 = 0;
            v55 = 0;
LABEL_122:
            if ( v213 > v84 )
              v55 = v213;
          }
        }
        else
        {
          v55 = (v54 >> 2) & 3;
          if ( v55 != 2 )
          {
            v84 = (v54 >> 2) & 3;
            goto LABEL_122;
          }
          v55 = 3;
        }
      }
      else
      {
        v55 = (v54 >> 2) & 3;
        if ( (v54 & 0xC) == 0xC )
          v55 = 2 * ((v54 & 2) != 0);
      }
      *(_DWORD *)(a1 + 344) = v55;
LABEL_52:
      v20 = v26;
      v56 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v206)(v207, v26, a1 + 232);
      if ( v56 )
      {
        if ( !*(_BYTE *)(a1 + 361) )
        {
          if ( !*(_BYTE *)(a1 + 360) )
            return 1;
          goto LABEL_55;
        }
        v85 = operator new(0x90u);
        v86 = *(_DWORD *)(a1 + 240);
        v87 = v85;
        v88 = v85 + 16;
        v89 = (void *)(v85 + 32);
        *(_QWORD *)(v87 + 16) = v89;
        *(_QWORD *)(v87 + 24) = 0x400000000LL;
        if ( v88 == a1 + 232 || !v86 )
          goto LABEL_127;
        if ( v86 <= 4uLL )
        {
          v121 = 24LL * v86;
          goto LABEL_186;
        }
        sub_22134E0(v88, v89, v86, 24);
        v89 = *(void **)(v87 + 16);
        v121 = 24LL * *(unsigned int *)(a1 + 240);
        if ( v121 )
LABEL_186:
          memcpy(v89, *(const void **)(a1 + 232), v121);
        *(_DWORD *)(v87 + 24) = v86;
LABEL_127:
        v20 = a1 + 8;
        *(_DWORD *)(v87 + 128) = *(_DWORD *)(a1 + 344);
        *(_QWORD *)(v87 + 136) = *(_QWORD *)(a1 + 352);
        std::__detail::_List_node_base::_M_hook(
          (std::__detail::_List_node_base *)v87,
          (std::__detail::_List_node_base *)(a1 + 8));
        ++*(_QWORD *)(a1 + 24);
        goto LABEL_128;
      }
      if ( !v45 )
        goto LABEL_114;
      v76 = **(_QWORD **)(v26 + 16);
      v77 = *(_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF0LL);
      if ( !v210 )
      {
        if ( (*(_BYTE *)(v77 + 8) & 0xF) != 0 )
          v77 = sub_F411C0(v76);
        v81 = sub_F3F500(*(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL), v26, v19, a4, a5);
        if ( !v81 )
          goto LABEL_114;
        goto LABEL_133;
      }
      if ( (*(_BYTE *)(v77 + 8) & 0xF) != 0 )
        v77 = sub_F411C0(v76);
      v78 = sub_F46B20(*(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v78 )
      {
        v20 = 0;
        v217.m128_u64[0] = *(_QWORD *)(v78 + 32);
        v79 = sub_EFEE90(v209, 0);
        if ( !v79 )
          goto LABEL_114;
        v19 = *(_BYTE *)(v79 + 28) & 0x7F;
        if ( (_BYTE)v19 != 72 )
          goto LABEL_114;
        v81 = *(_QWORD *)(v79 + 48);
      }
      else
      {
        v122 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v122 + 8) & 0xF) != 0 )
          v122 = sub_F411C0(**(_QWORD **)(v26 + 16));
        v123 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v122 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v123 + 16LL) != 48 )
          goto LABEL_114;
        v81 = sub_F3D1D0(*v123, v26, v19, a4, a5);
      }
      if ( !v81 )
        goto LABEL_114;
      if ( !*(_QWORD *)(v81 + 128) )
      {
        v190 = *(_QWORD *)(v81 + 104);
        v191 = *(_QWORD *)(v190 + 96);
        v19 = v191 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v191 & 1) == 0 )
        {
          a4 = (__int64 *)(v191 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v191 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          {
            if ( (v191 & 2) == 0 )
              goto LABEL_114;
            a5 = a4[2295];
            v192 = v190 & 0xFFFFFFFFFFFFFFFBLL;
            if ( a5 )
            {
              v20 = a4[294];
              a4[304] += 24;
              v193 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( a4[295] >= v193 + 24 && v20 )
              {
                a4[294] = v193 + 24;
                v194 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                v20 = 24;
                v208 = a5;
                v194 = sub_962430((__int64)(a4 + 294), 24, 24, 3, a5, v80);
                a5 = v208;
                v193 = v194 & 0xFFFFFFFFFFFFFFFBLL;
              }
              *(_QWORD *)v194 = a5;
              v192 = v193 | 4;
              *(_DWORD *)(v194 + 8) = 0;
              *(_QWORD *)(v194 + 16) = v190;
            }
            v19 = v192 & 0xFFFFFFFFFFFFFFFELL;
            v191 = v19 | 1;
            *(_QWORD *)(v190 + 96) = v19 | 1;
          }
        }
        if ( v19 )
        {
          v19 &= 4u;
          if ( (_DWORD)v19 )
          {
            v195 = (_DWORD *)(v191 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v195 )
            {
              v196 = *(_QWORD *)v195;
              v19 = *(unsigned int *)(*(_QWORD *)v195 + 12LL);
              if ( v195[2] != (_DWORD)v19 )
              {
                v195[2] = v19;
                v20 = v190;
                (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v196 + 152LL))(v196, v190);
              }
            }
          }
        }
        if ( !*(_QWORD *)(v81 + 128) )
        {
LABEL_114:
          if ( *(_BYTE *)(a1 + 361) )
            --*(_DWORD *)(a1 + 240);
          if ( v44 )
            *(_QWORD *)(a1 + 224) = 0;
          goto LABEL_56;
        }
      }
      if ( !*(_BYTE *)(a1 + 188) )
        goto LABEL_241;
      a4 = *(__int64 **)(a1 + 168);
      a5 = *(unsigned int *)(a1 + 180);
      v20 = 8 * a5;
      v82 = &a4[a5];
      if ( a4 != v82 )
      {
        v83 = *(unsigned __int64 **)(a1 + 168);
        if ( v81 == *a4 )
          goto LABEL_107;
        do
        {
          if ( v82 == (__int64 *)++v83 )
            break;
        }
        while ( v81 != *v83 );
      }
      if ( (unsigned int)a5 < *(_DWORD *)(a1 + 176) )
      {
        a5 = (unsigned int)(a5 + 1);
        v56 = *(_BYTE *)(a1 + 188);
        *(_DWORD *)(a1 + 180) = a5;
        *v82 = v81;
        a4 = *(__int64 **)(a1 + 168);
        v83 = (unsigned __int64 *)((char *)a4 + v20);
      }
      else
      {
LABEL_241:
        v20 = v81;
        v83 = (unsigned __int64 *)sub_2212A20(a1 + 168, v81);
        a4 = *(__int64 **)(a1 + 168);
        v56 = v149;
        if ( !*(_BYTE *)(a1 + 188) )
        {
          v19 = (__int64)&a4[*(unsigned int *)(a1 + 176)];
          goto LABEL_108;
        }
      }
LABEL_107:
      v19 = (__int64)&a4[*(unsigned int *)(a1 + 180)];
LABEL_108:
      if ( (unsigned __int64 *)v19 != v83 )
      {
        v20 = *v83;
        a4 = (__int64 *)(*v83 + 2);
        if ( (unsigned __int64)a4 <= 1 )
        {
          do
            ++v83;
          while ( (unsigned __int64 *)v19 != v83 && *v83 >= 0xFFFFFFFFFFFFFFFELL );
        }
      }
      if ( !v56 )
        goto LABEL_114;
LABEL_133:
      v20 = v214;
      if ( !(unsigned __int8)sub_B44540(a1, v214, v81, v206, v207, v210) )
        goto LABEL_114;
      if ( !*(_BYTE *)(a1 + 360) )
        return 1;
LABEL_128:
      v211 = *(_BYTE *)(a1 + 361);
      if ( v211 )
      {
        --*(_DWORD *)(a1 + 240);
        goto LABEL_56;
      }
LABEL_55:
      v211 = 1;
LABEL_56:
      v26 += 24;
    }
    while ( v26 != v204 );
  }
  *(_DWORD *)(a1 + 344) = v213;
  return v211;
}

