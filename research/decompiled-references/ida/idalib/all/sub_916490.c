signed __int64 __fastcall sub_916490(__int64 a1, __int64 a2, int *a3, const __m128i *a4, __int64 a5)
{
  const __m128i *v7; // rsi
  __int64 v8; // r14
  unsigned int v9; // r15d
  int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rbp
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 i; // rax
  unsigned __int64 v22; // r9
  __int64 *v23; // rdx
  unsigned __int64 v24; // rax
  unsigned int v25; // r10d
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rbp
  unsigned int v28; // r13d
  unsigned int v29; // r12d
  unsigned int *v30; // rdi
  __int64 v31; // rdx
  unsigned int *v32; // r14
  unsigned int v33; // r8d
  __int64 v34; // rcx
  _DWORD *v35; // rax
  unsigned int v36; // r13d
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r11
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rbp
  __int64 v42; // rdx
  __int64 v43; // rcx
  char *v46; // rcx
  char *v47; // r12
  unsigned int v48; // r14d
  unsigned __int64 v49; // r11
  __m128i *v50; // rdi
  unsigned __int64 v51; // r9
  const __m128i *v52; // r13
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r10
  int v56; // r12d
  int v57; // r10d
  unsigned int v58; // ecx
  __int64 v59; // rax
  unsigned int v61; // r12d
  unsigned __int64 v62; // rdi
  unsigned int v63; // r12d
  _DWORD *v64; // rcx
  __int64 v65; // rdx
  __int64 *v66; // rdx
  _QWORD *v67; // r11
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rdi
  unsigned __int64 v70; // r12
  __int64 v71; // rdx
  __int64 v72; // rbp
  char *v75; // rbp
  unsigned int v76; // ecx
  _QWORD *v77; // rdx
  unsigned __int64 v78; // r13
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r14
  unsigned __int64 v81; // r12
  __int64 v82; // rdi
  __int64 v83; // rax
  char *v86; // rbp
  __int64 v87; // rdx
  __int64 v88; // rdi
  char *v91; // rdx
  bool v92; // cf
  char *v93; // rdi
  unsigned __int64 v94; // rcx
  char *v95; // r8
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // r11
  __int64 v98; // rbp
  __int64 v99; // r12
  unsigned __int64 v102; // rbp
  unsigned __int64 v103; // r11
  char *v104; // r12
  __m128i *v105; // rdi
  unsigned __int64 v106; // r9
  __int64 v107; // rax
  unsigned __int64 v108; // rbp
  __int64 v109; // rax
  __int64 *v110; // r13
  __int64 *v111; // rbp
  char *v112; // rcx
  signed __int64 v115; // rdx
  char *v116; // rdx
  _DWORD *v117; // r12
  _DWORD *v118; // rbp
  char *v119; // rcx
  signed __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rdx
  __m128i *v125; // rax
  char *v126; // rdx
  const __m128i *v127; // rsi
  __m128i *v128; // rax
  __m128i v129; // xmm0
  __int64 v130; // r14
  __int64 v131; // rdx
  __int64 v134; // rdi
  __int64 v135; // r8
  __int64 v138; // rax
  __int64 v139; // r13
  __int64 *v142; // r11
  char *v143; // rdx
  __int64 *v144; // rdi
  char *v145; // rax
  unsigned __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rdi
  char *v149; // rax
  _DWORD *v150; // r8
  __int64 v151; // r11
  __int64 v152; // rdi
  char *v155; // rax
  __m128i *v156; // rax
  char *v157; // rdx
  const __m128i *v158; // rsi
  __m128i *v159; // rax
  __m128i v160; // xmm3
  __int64 v161; // rsi
  unsigned __int64 v162; // rcx
  char *v163; // r8
  unsigned __int64 v164; // rdx
  unsigned __int64 v165; // r11
  __int64 v166; // rdi
  __int64 v167; // rbp
  _QWORD *v168; // rdi
  _QWORD *v169; // rbp
  __int64 v170; // rax
  char *v173; // r11
  __int64 v174; // r12
  __int64 v175; // rdi
  __int64 v178; // r8
  __int64 v179; // rdx
  char *v182; // rbp
  __m128i *v183; // rdi
  __int64 v184; // rax
  unsigned __int64 v185; // rax
  int v186; // eax
  unsigned __int64 v191; // rbp
  __int64 v192; // rax
  __int64 v193; // rcx
  char *v196; // rax
  char *v197; // rcx
  signed __int64 v200; // rax
  __int64 *v201; // r14
  __int64 *v202; // rcx
  __int64 *v203; // r8
  char *v204; // rax
  __int64 *v205; // rsi
  char *v206; // rax
  char *v207; // rbp
  signed __int64 v210; // rdx
  __int64 v211; // r8
  __int64 v212; // rdx
  __int64 v215; // rdi
  __int64 v216; // rcx
  __int64 v219; // rdi
  __int64 v220; // rdx
  __int64 *v223; // r11
  char *v224; // r8
  __int64 *v225; // rbp
  __int64 *v226; // r8
  int v227; // eax
  __int64 v228; // rdi
  __int64 v229; // rax
  char *v232; // r13
  signed __int64 v235; // r8
  __int64 v236; // rdi
  __int64 v237; // rdx
  __int64 *v240; // r12
  char *v241; // r8
  __int64 v242; // rdi
  __int64 v243; // rax
  __int64 v246; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v247; // [rsp+8h] [rbp-C0h]
  __int64 v248; // [rsp+10h] [rbp-B8h]
  int v249; // [rsp+18h] [rbp-B0h]
  char v250; // [rsp+1Ch] [rbp-ACh]
  __int64 v251; // [rsp+20h] [rbp-A8h]
  const __m128i *v252; // [rsp+28h] [rbp-A0h]
  __int64 v253; // [rsp+30h] [rbp-98h]
  __int64 v254; // [rsp+38h] [rbp-90h]
  __int64 v255; // [rsp+40h] [rbp-88h]
  char v256; // [rsp+48h] [rbp-80h]
  char v257; // [rsp+4Ch] [rbp-7Ch]
  unsigned int v258; // [rsp+50h] [rbp-78h]
  char v259; // [rsp+54h] [rbp-74h]
  unsigned __int64 v260; // [rsp+58h] [rbp-70h]
  int v261; // [rsp+60h] [rbp-68h]
  __int64 v262; // [rsp+60h] [rbp-68h]
  char *v263; // [rsp+68h] [rbp-60h]
  unsigned __int64 v264; // [rsp+70h] [rbp-58h]
  __int64 *v265; // [rsp+78h] [rbp-50h]
  int v267; // [rsp+88h] [rbp-40h]
  unsigned int v268; // [rsp+8Ch] [rbp-3Ch]

  v7 = a4;
  v8 = *(_QWORD *)(a1 + 8);
  v248 = *(_QWORD *)(a1 + 112);
  v9 = *(_DWORD *)(a1 + 24);
  v10 = a5 + (_DWORD)a4 - v8;
  v246 = v8;
  v254 = *(_QWORD *)(a1 + 128);
  v11 = 1 << *(_DWORD *)(a1 + 256);
  v12 = v10 - v9;
  v13 = v10 - v11;
  if ( v11 >= v12 )
    v13 = *(_DWORD *)(a1 + 24);
  if ( !*(_DWORD *)(a1 + 40) )
    v9 = v13;
  v265 = (__int64 *)(v8 + v9);
  v252 = (const __m128i *)((char *)v7 + a5);
  v247 = (unsigned __int64)&v7->m128i_u64[-1] + a5;
  v249 = *a3;
  v261 = a3[1];
  v14 = *(_QWORD *)(a1 + 248);
  v15 = *(_QWORD *)(v14 + 112);
  v255 = *(_QWORD *)(v14 + 128);
  v251 = v15;
  v253 = *(_QWORD *)(v14 + 8);
  v260 = v253 + *(unsigned int *)(v14 + 24);
  v263 = *(char **)v14;
  v267 = *(_QWORD *)v14 - v253;
  v16 = *(_DWORD *)(v14 + 264);
  v268 = v9 - v267;
  v17 = *(_DWORD *)(v14 + 260);
  v18 = *(_QWORD *)v14 - v260 + (_DWORD)v7 - (_DWORD)v265;
  if ( *(_DWORD *)(a1 + 296) )
  {
    v19 = 4LL << v17;
    if ( 4LL << v16 )
    {
      v20 = 0;
      do
      {
        _mm_prefetch((const char *)(v15 + v20), 2);
        v20 += 64LL;
      }
      while ( 4LL << v16 > v20 );
    }
    if ( v19 )
    {
      for ( i = 0; i < v19; i += 64LL )
        _mm_prefetch((const char *)(v255 + i), 2);
    }
  }
  v22 = (unsigned __int64)v7->m128i_u64 + (v18 == 0);
  if ( v247 <= v22 )
    goto LABEL_50;
  v256 = 56 - v16;
  v259 = 56 - v17;
  v250 = 64 - *(_DWORD *)(a1 + 264);
  v258 = v9 - 1;
  v257 = 64 - *(_DWORD *)(a1 + 260);
  v264 = (unsigned __int64)&v252[-1].m128i_u64[1] + 1;
  while ( 1 )
  {
LABEL_19:
    v25 = v22 - v246;
    v26 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)v22) >> v256;
    v27 = (0xCF1BBCDCBB000000LL * *(_QWORD *)v22) >> v259;
    v28 = *(_DWORD *)(v251 + 4 * (v26 >> 8));
    v29 = *(_DWORD *)(v255 + 4 * (v27 >> 8));
    v30 = (unsigned int *)(v248 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)v22) >> v250));
    v31 = *v30;
    v32 = (unsigned int *)(v254 + 4 * ((0xCF1BBCDCBB000000LL * *(_QWORD *)v22) >> v257));
    v33 = *v32;
    v34 = (unsigned int)(v22 - v246 - v249 + 1);
    v35 = (_DWORD *)(v246 + v34);
    if ( (unsigned int)v34 < v9 )
      v35 = (_DWORD *)(v253 + (unsigned int)v34 + v267 - v9);
    *v32 = v25;
    *v30 = v25;
    if ( v258 - (unsigned int)v34 > 2 && *(_DWORD *)(v22 + 1) == *v35 )
      break;
    if ( (unsigned int)v31 <= v9 )
    {
      if ( (_BYTE)v26 == (_BYTE)v28 )
      {
        v36 = v28 >> 8;
        v37 = v253 + v36;
        if ( v260 < v37 && *(_QWORD *)v22 == *(_QWORD *)v37 )
        {
          v38 = v22 + 8;
          v39 = (unsigned __int64)&v263[v22 - v37];
          if ( (unsigned __int64)v252 < v39 )
            v39 = (unsigned __int64)v252;
          v40 = v39 - 7;
          v41 = v39;
          if ( v38 >= v39 - 7 )
          {
            v201 = (__int64 *)(v37 + 8);
            v202 = (__int64 *)(v22 + 8);
          }
          else
          {
            v42 = *(_QWORD *)(v37 + 8);
            v43 = *(_QWORD *)(v22 + 8);
            if ( v42 != v43 )
            {
              _RCX = v42 ^ v43;
              __asm { tzcnt   rcx, rcx }
              v46 = (char *)((unsigned int)_RCX >> 3);
              goto LABEL_32;
            }
            v202 = (__int64 *)(v22 + 16);
            v201 = (__int64 *)(v37 + 16);
            if ( v40 > v22 + 16 )
            {
              v211 = *(_QWORD *)(v37 + 16);
              v212 = *(_QWORD *)(v22 + 16);
              if ( v211 != v212 )
              {
LABEL_319:
                _RDX = v211 ^ v212;
                __asm { tzcnt   rdx, rdx }
                v46 = (char *)v202 + ((unsigned int)_RDX >> 3) - v38;
                goto LABEL_32;
              }
              while ( 1 )
              {
                ++v202;
                ++v201;
                if ( v40 <= (unsigned __int64)v202 )
                  break;
                v211 = *v201;
                v212 = *v202;
                if ( *v201 != *v202 )
                  goto LABEL_319;
              }
            }
          }
          if ( (unsigned __int64)v202 < v41 - 3 && *(_DWORD *)v201 == *(_DWORD *)v202 )
          {
            v202 = (__int64 *)((char *)v202 + 4);
            v201 = (__int64 *)((char *)v201 + 4);
          }
          if ( (unsigned __int64)v202 < v41 - 1 && *(_WORD *)v201 == *(_WORD *)v202 )
          {
            v202 = (__int64 *)((char *)v202 + 2);
            v201 = (__int64 *)((char *)v201 + 2);
          }
          if ( v41 > (unsigned __int64)v202 )
            v202 = (__int64 *)((char *)v202 + (*(_BYTE *)v201 == *(_BYTE *)v202));
          v46 = (char *)v202 - v38;
LABEL_32:
          if ( v263 != &v46[v37 + 8] )
          {
LABEL_33:
            v47 = v46 + 8;
            v48 = v25 + v267 - v9 - v36;
            if ( (unsigned __int64)v7 >= v22 )
              goto LABEL_206;
            v49 = v22;
            if ( *(_BYTE *)(v22 - 1) == *(_BYTE *)(v37 - 1) )
            {
              do
              {
                --v49;
                --v37;
                v47 = &v46[v22 + 8 - v49];
              }
              while ( v49 > (unsigned __int64)v7 && v260 < v37 && *(_BYTE *)(v49 - 1) == *(_BYTE *)(v37 - 1) );
            }
            goto LABEL_38;
          }
          v207 = &v46[v38];
          if ( (unsigned __int64)&v46[v38] >= v264 )
          {
            v223 = v265;
            v224 = v207;
          }
          else
          {
            if ( *v265 != *(_QWORD *)v207 )
            {
              _RDX = *v265 ^ *(_QWORD *)v207;
              __asm { tzcnt   rdx, rdx }
              v210 = (unsigned int)_RDX >> 3;
LABEL_316:
              v46 += v210;
              goto LABEL_33;
            }
            v224 = v207 + 8;
            v223 = v265 + 1;
            if ( v264 > (unsigned __int64)(v207 + 8) )
            {
              v236 = v265[1];
              v237 = *((_QWORD *)v207 + 1);
              if ( v237 != v236 )
              {
LABEL_368:
                _RDX = v236 ^ v237;
                __asm { tzcnt   rdx, rdx }
                v210 = &v224[(unsigned int)_RDX >> 3] - v207;
                goto LABEL_316;
              }
              while ( 1 )
              {
                v224 += 8;
                ++v223;
                if ( v264 <= (unsigned __int64)v224 )
                  break;
                v236 = *v223;
                v237 = *(_QWORD *)v224;
                if ( *v223 != *(_QWORD *)v224 )
                  goto LABEL_368;
              }
            }
          }
          if ( v224 < &v252[-1].m128i_i8[13] && *(_DWORD *)v223 == *(_DWORD *)v224 )
          {
            v224 += 4;
            v223 = (__int64 *)((char *)v223 + 4);
          }
          if ( v224 < &v252[-1].m128i_i8[15] && *(_WORD *)v223 == *(_WORD *)v224 )
          {
            v224 += 2;
            v223 = (__int64 *)((char *)v223 + 2);
          }
          if ( v252 > (const __m128i *)v224 )
            v224 += *(_BYTE *)v223 == (unsigned __int8)*v224;
          v210 = v224 - v207;
          goto LABEL_316;
        }
      }
LABEL_15:
      if ( v33 <= v9 )
      {
        if ( (_BYTE)v27 != (_BYTE)v29
          || (v61 = v29 >> 8, v24 = v253 + v61, v260 >= v24)
          || *(_DWORD *)v22 != *(_DWORD *)v24 )
        {
LABEL_17:
          v22 += ((__int64)(v22 - (_QWORD)v7) >> 8) + 1;
          goto LABEL_18;
        }
        v33 = v268 + v61;
      }
      else
      {
        v24 = v246 + v33;
        if ( *(_DWORD *)v22 != *(_DWORD *)v24 )
          goto LABEL_17;
      }
      v49 = v22 + 1;
      v62 = (0xCF1BBCDCB7A56463LL * *(_QWORD *)(v22 + 1)) >> v256;
      v63 = *(_DWORD *)(v251 + 4 * (v62 >> 8));
      v64 = (_DWORD *)(v248 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v22 + 1)) >> v250));
      v65 = (unsigned int)*v64;
      *v64 = v25 + 1;
      if ( (unsigned int)v65 <= v9 )
      {
        if ( (_BYTE)v62 == (_BYTE)v63 )
        {
          v76 = v63 >> 8;
          v77 = (_QWORD *)(v253 + (v63 >> 8));
          if ( v260 < (unsigned __int64)v77 && *(_QWORD *)(v22 + 1) == *v77 )
          {
            v78 = v22 + 9;
            v79 = v22 + 9 + v263 - (char *)(v77 + 1);
            if ( (unsigned __int64)v252 < v79 )
              v79 = (unsigned __int64)v252;
            v80 = v79 - 7;
            v81 = v79;
            if ( v78 >= v79 - 7 )
            {
              v225 = v77 + 1;
              v226 = (__int64 *)(v22 + 9);
            }
            else
            {
              v82 = v77[1];
              v83 = *(_QWORD *)(v22 + 9);
              if ( v82 != v83 )
              {
                _RDI = v83 ^ v82;
                __asm { tzcnt   r8, rdi }
                v86 = (char *)((unsigned int)_R8 >> 3);
                goto LABEL_79;
              }
              v226 = (__int64 *)(v22 + 17);
              v225 = v77 + 2;
              if ( v80 > v22 + 17 )
              {
                v228 = v77[2];
                v229 = *(_QWORD *)(v22 + 17);
                if ( v228 != v229 )
                {
LABEL_361:
                  _RAX = v228 ^ v229;
                  __asm { tzcnt   rax, rax }
                  v86 = (char *)v226 + ((unsigned int)_RAX >> 3) - v78;
                  goto LABEL_79;
                }
                while ( 1 )
                {
                  ++v226;
                  ++v225;
                  if ( v80 <= (unsigned __int64)v226 )
                    break;
                  v228 = *v225;
                  v229 = *v226;
                  if ( *v225 != *v226 )
                    goto LABEL_361;
                }
              }
            }
            if ( (unsigned __int64)v226 < v81 - 3 && *(_DWORD *)v225 == *(_DWORD *)v226 )
            {
              v226 = (__int64 *)((char *)v226 + 4);
              v225 = (__int64 *)((char *)v225 + 4);
            }
            if ( (unsigned __int64)v226 < v81 - 1 && *(_WORD *)v225 == *(_WORD *)v226 )
            {
              v226 = (__int64 *)((char *)v226 + 2);
              v225 = (__int64 *)((char *)v225 + 2);
            }
            if ( v81 > (unsigned __int64)v226 )
              v226 = (__int64 *)((char *)v226 + (*(_BYTE *)v225 == *(_BYTE *)v226));
            v86 = (char *)v226 - v78;
LABEL_79:
            if ( v263 != (char *)v77 + (_QWORD)v86 + 8 )
            {
LABEL_80:
              v47 = v86 + 8;
              v48 = v267 - v9 + v25 + 1 - v76;
              if ( v49 > (unsigned __int64)v7 && *(_BYTE *)v22 == *((_BYTE *)v77 - 1) )
              {
                do
                {
                  --v49;
                  v77 = (_QWORD *)((char *)v77 - 1);
                  v47 = &v86[v22 + 9 - v49];
                }
                while ( v49 > (unsigned __int64)v7
                     && v260 < (unsigned __int64)v77
                     && *(_BYTE *)(v49 - 1) == *((_BYTE *)v77 - 1) );
              }
              goto LABEL_38;
            }
            v232 = &v86[v78];
            if ( (unsigned __int64)v232 >= v264 )
            {
              v240 = v265;
              v241 = v232;
            }
            else
            {
              if ( *v265 != *(_QWORD *)v232 )
              {
                _RDI = *(_QWORD *)v232 ^ *v265;
                __asm { tzcnt   r8, rdi }
                v235 = (unsigned int)_R8 >> 3;
LABEL_365:
                v86 += v235;
                goto LABEL_80;
              }
              v241 = v232 + 8;
              v240 = v265 + 1;
              if ( v264 > (unsigned __int64)(v232 + 8) )
              {
                v242 = v265[1];
                v243 = *((_QWORD *)v232 + 1);
                if ( v243 != v242 )
                {
LABEL_385:
                  _RAX = v242 ^ v243;
                  __asm { tzcnt   rax, rax }
                  v235 = &v241[(unsigned int)_RAX >> 3] - v232;
                  goto LABEL_365;
                }
                while ( 1 )
                {
                  v241 += 8;
                  ++v240;
                  if ( v264 <= (unsigned __int64)v241 )
                    break;
                  v242 = *v240;
                  v243 = *(_QWORD *)v241;
                  if ( *v240 != *(_QWORD *)v241 )
                    goto LABEL_385;
                }
              }
            }
            if ( v241 < &v252[-1].m128i_i8[13] && *(_DWORD *)v240 == *(_DWORD *)v241 )
            {
              v241 += 4;
              v240 = (__int64 *)((char *)v240 + 4);
            }
            if ( v241 < &v252[-1].m128i_i8[15] && *(_WORD *)v240 == *(_WORD *)v241 )
            {
              v241 += 2;
              v240 = (__int64 *)((char *)v240 + 2);
            }
            if ( v252 > (const __m128i *)v241 && *(_BYTE *)v240 == *v241 )
              ++v241;
            v235 = v241 - v232;
            goto LABEL_365;
          }
        }
      }
      else
      {
        v66 = (__int64 *)(v246 + v65);
        if ( *(_QWORD *)(v22 + 1) == *v66 )
        {
          v191 = v22 + 9;
          if ( v22 + 9 >= v264 )
          {
            v203 = v66 + 1;
            v204 = (char *)(v22 + 9);
          }
          else
          {
            v192 = v66[1];
            v193 = *(_QWORD *)(v22 + 9);
            if ( v192 != v193 )
            {
              _RAX = v193 ^ v192;
              __asm { tzcnt   rax, rax }
              v196 = (char *)((unsigned int)_RAX >> 3);
LABEL_272:
              v47 = v196 + 8;
              v48 = v49 - (_DWORD)v66;
              if ( v49 > (unsigned __int64)v7 && v265 < v66 && *((_BYTE *)v66 - 1) == *(_BYTE *)v22 )
              {
                do
                {
                  --v49;
                  v66 = (__int64 *)((char *)v66 - 1);
                  v47 = &v196[v22 + 9 - v49];
                }
                while ( v49 > (unsigned __int64)v7 && v265 < v66 && *(_BYTE *)(v49 - 1) == *((_BYTE *)v66 - 1) );
              }
              goto LABEL_38;
            }
            v204 = (char *)(v22 + 17);
            v203 = v66 + 2;
            if ( v264 > v22 + 17 )
            {
              v215 = v66[2];
              v216 = *(_QWORD *)(v22 + 17);
              if ( v215 != v216 )
              {
LABEL_325:
                _RCX = v215 ^ v216;
                __asm { tzcnt   rcx, rcx }
                v196 = &v204[((unsigned int)_RCX >> 3) - v191];
                goto LABEL_272;
              }
              while ( 1 )
              {
                v204 += 8;
                ++v203;
                if ( v264 <= (unsigned __int64)v204 )
                  break;
                v215 = *v203;
                v216 = *(_QWORD *)v204;
                if ( *v203 != *(_QWORD *)v204 )
                  goto LABEL_325;
              }
            }
          }
          if ( v204 < &v252[-1].m128i_i8[13] && *(_DWORD *)v203 == *(_DWORD *)v204 )
          {
            v204 += 4;
            v203 = (__int64 *)((char *)v203 + 4);
          }
          if ( v204 < &v252[-1].m128i_i8[15] && *(_WORD *)v203 == *(_WORD *)v204 )
          {
            v204 += 2;
            v203 = (__int64 *)((char *)v203 + 2);
          }
          if ( v252 > (const __m128i *)v204 )
            v204 += *(_BYTE *)v203 == (unsigned __int8)*v204;
          v196 = &v204[-v191];
          goto LABEL_272;
        }
      }
      v67 = (_QWORD *)(v24 + 4);
      v68 = v22 + 4;
      if ( v33 < v9 )
      {
        v69 = v68 + v263 - (char *)v67;
        if ( (unsigned __int64)v252 < v69 )
          v69 = (unsigned __int64)v252;
        v70 = v69 - 7;
        if ( v69 - 7 <= v68 )
        {
          v110 = (__int64 *)(v24 + 4);
          v111 = (__int64 *)(v22 + 4);
        }
        else
        {
          v71 = *(_QWORD *)(v24 + 4);
          v72 = *(_QWORD *)(v22 + 4);
          if ( v71 != v72 )
          {
            _RDX = v72 ^ v71;
            __asm { tzcnt   rbp, rdx }
            v75 = (char *)((unsigned int)_RBP >> 3);
            goto LABEL_63;
          }
          v111 = (__int64 *)(v22 + 12);
          v110 = (__int64 *)(v24 + 12);
          if ( v70 > v22 + 12 )
          {
            v130 = *(_QWORD *)(v24 + 12);
            v131 = *(_QWORD *)(v22 + 12);
            if ( v131 != v130 )
            {
LABEL_161:
              _RDX = v130 ^ v131;
              __asm { tzcnt   rdx, rdx }
              v75 = (char *)v111 + ((unsigned int)_RDX >> 3) - v68;
LABEL_63:
              if ( v263 != (char *)v67 + (_QWORD)v75 )
              {
LABEL_64:
                v47 = v75 + 4;
                v48 = v25 - v33;
                if ( v260 >= v24 || (unsigned __int64)v7 >= v22 )
                  goto LABEL_206;
                v49 = v22;
                if ( *(_BYTE *)(v22 - 1) == *(_BYTE *)(v24 - 1) )
                {
                  do
                  {
                    --v49;
                    --v24;
                    v47 = &v75[v22 + 4 - v49];
                  }
                  while ( v49 > (unsigned __int64)v7 && v260 < v24 && *(_BYTE *)(v49 - 1) == *(_BYTE *)(v24 - 1) );
                }
                goto LABEL_38;
              }
LABEL_121:
              v112 = &v75[v68];
              if ( (unsigned __int64)v112 >= v264 )
              {
                v142 = v265;
                v143 = v112;
              }
              else
              {
                if ( *v265 != *(_QWORD *)v112 )
                {
                  _RDX = *(_QWORD *)v112 ^ *v265;
                  __asm { tzcnt   rdx, rdx }
                  v115 = (unsigned int)_RDX >> 3;
LABEL_124:
                  v75 += v115;
                  goto LABEL_64;
                }
                v143 = v112 + 8;
                v142 = v265 + 1;
                if ( v264 > (unsigned __int64)(v112 + 8) )
                {
                  v174 = v265[1];
                  v175 = *((_QWORD *)v112 + 1);
                  if ( v175 != v174 )
                  {
LABEL_236:
                    _RDI = v174 ^ v175;
                    __asm { tzcnt   rdi, rdi }
                    v115 = &v143[(unsigned int)_RDI >> 3] - v112;
                    goto LABEL_124;
                  }
                  while ( 1 )
                  {
                    v143 += 8;
                    ++v142;
                    if ( v264 <= (unsigned __int64)v143 )
                      break;
                    v175 = *v142;
                    v174 = *(_QWORD *)v143;
                    if ( *v142 != *(_QWORD *)v143 )
                      goto LABEL_236;
                  }
                }
              }
              if ( v143 < &v252[-1].m128i_i8[13] && *(_DWORD *)v142 == *(_DWORD *)v143 )
              {
                v143 += 4;
                v142 = (__int64 *)((char *)v142 + 4);
              }
              if ( v143 < &v252[-1].m128i_i8[15] && *(_WORD *)v142 == *(_WORD *)v143 )
              {
                v143 += 2;
                v142 = (__int64 *)((char *)v142 + 2);
              }
              if ( v252 > (const __m128i *)v143 )
                v143 += *(_BYTE *)v142 == (unsigned __int8)*v143;
              v115 = v143 - v112;
              goto LABEL_124;
            }
            while ( 1 )
            {
              ++v111;
              ++v110;
              if ( v70 <= (unsigned __int64)v111 )
                break;
              v131 = *v110;
              v130 = *v111;
              if ( *v110 != *v111 )
                goto LABEL_161;
            }
          }
        }
        if ( (unsigned __int64)v111 < v69 - 3 && *(_DWORD *)v110 == *(_DWORD *)v111 )
        {
          v111 = (__int64 *)((char *)v111 + 4);
          v110 = (__int64 *)((char *)v110 + 4);
        }
        if ( (unsigned __int64)v111 < v69 - 1 && *(_WORD *)v110 == *(_WORD *)v111 )
        {
          v111 = (__int64 *)((char *)v111 + 2);
          v110 = (__int64 *)((char *)v110 + 2);
        }
        if ( v69 > (unsigned __int64)v111 )
          v111 = (__int64 *)((char *)v111 + (*(_BYTE *)v110 == *(_BYTE *)v111));
        v75 = (char *)v111 - v68;
        if ( v263 != (char *)v67 + (_QWORD)v75 )
          goto LABEL_64;
        goto LABEL_121;
      }
      if ( v264 <= v68 )
      {
        v116 = (char *)(v22 + 4);
      }
      else
      {
        v87 = *(_QWORD *)(v24 + 4);
        v88 = *(_QWORD *)(v22 + 4);
        if ( v87 != v88 )
        {
          _RDX = v88 ^ v87;
          __asm { tzcnt   rdx, rdx }
          v91 = (char *)((unsigned int)_RDX >> 3);
          goto LABEL_89;
        }
        v116 = (char *)(v22 + 12);
        v67 = (_QWORD *)(v24 + 12);
        if ( v264 > v22 + 12 )
        {
          v134 = *(_QWORD *)(v24 + 12);
          v135 = *(_QWORD *)(v22 + 12);
          if ( v134 != v135 )
          {
LABEL_164:
            _RDI = v135 ^ v134;
            __asm { tzcnt   rdi, rdi }
            v91 = &v116[((unsigned int)_RDI >> 3) - v68];
LABEL_89:
            v47 = v91 + 4;
            v48 = v22 - v24;
            if ( (unsigned __int64)v7 >= v22 || (unsigned __int64)v265 >= v24 )
              goto LABEL_206;
            v49 = v22;
            if ( *(_BYTE *)(v24 - 1) == *(_BYTE *)(v22 - 1) )
            {
              do
              {
                --v49;
                --v24;
                v47 = &v91[v22 + 4 - v49];
              }
              while ( v49 > (unsigned __int64)v7
                   && (unsigned __int64)v265 < v24
                   && *(_BYTE *)(v49 - 1) == *(_BYTE *)(v24 - 1) );
            }
            goto LABEL_38;
          }
          while ( 1 )
          {
            v116 += 8;
            ++v67;
            if ( v264 <= (unsigned __int64)v116 )
              break;
            v134 = *v67;
            v135 = *(_QWORD *)v116;
            if ( *v67 != *(_QWORD *)v116 )
              goto LABEL_164;
          }
        }
      }
      if ( v116 < &v252[-1].m128i_i8[13] && *(_DWORD *)v67 == *(_DWORD *)v116 )
      {
        v116 += 4;
        v67 = (_QWORD *)((char *)v67 + 4);
      }
      if ( v116 < &v252[-1].m128i_i8[15] && *(_WORD *)v67 == *(_WORD *)v116 )
      {
        v116 += 2;
        v67 = (_QWORD *)((char *)v67 + 2);
      }
      if ( v252 > (const __m128i *)v116 )
        v116 += *(_BYTE *)v67 == (unsigned __int8)*v116;
      v91 = &v116[-v68];
      goto LABEL_89;
    }
    v23 = (__int64 *)(v246 + v31);
    if ( *(_QWORD *)v22 != *v23 )
      goto LABEL_15;
    v146 = v22 + 8;
    if ( v22 + 8 >= v264 )
    {
      v150 = v23 + 1;
      v149 = (char *)(v22 + 8);
LABEL_218:
      if ( v149 < &v252[-1].m128i_i8[13] && *v150 == *(_DWORD *)v149 )
      {
        v149 += 4;
        ++v150;
      }
      if ( v149 < &v252[-1].m128i_i8[15] && *(_WORD *)v150 == *(_WORD *)v149 )
      {
        v149 += 2;
        v150 = (_DWORD *)((char *)v150 + 2);
      }
      if ( v252 > (const __m128i *)v149 )
        v149 += *(_BYTE *)v150 == (unsigned __int8)*v149;
      v155 = &v149[-v146];
      goto LABEL_227;
    }
    v147 = v23[1];
    v148 = *(_QWORD *)(v22 + 8);
    if ( v147 == v148 )
    {
      v149 = (char *)(v22 + 16);
      v150 = v23 + 2;
      if ( v264 <= v22 + 16 )
        goto LABEL_218;
      v151 = v23[2];
      v152 = *(_QWORD *)(v22 + 16);
      if ( v152 == v151 )
      {
        do
        {
          v149 += 8;
          v150 += 2;
          if ( v264 <= (unsigned __int64)v149 )
            goto LABEL_218;
          v152 = *(_QWORD *)v150;
          v151 = *(_QWORD *)v149;
        }
        while ( *(_QWORD *)v150 == *(_QWORD *)v149 );
      }
      _RDI = v151 ^ v152;
      __asm { tzcnt   rdi, rdi }
      v155 = &v149[((unsigned int)_RDI >> 3) - v146];
    }
    else
    {
      _RAX = v148 ^ v147;
      __asm { tzcnt   rax, rax }
      v155 = (char *)((unsigned int)_RAX >> 3);
    }
LABEL_227:
    v47 = v155 + 8;
    v48 = v22 - (_DWORD)v23;
    if ( v265 >= v23 || (unsigned __int64)v7 >= v22 )
    {
LABEL_206:
      v49 = v22;
      goto LABEL_38;
    }
    v49 = v22;
    if ( *((_BYTE *)v23 - 1) == *(_BYTE *)(v22 - 1) )
    {
      do
      {
        --v49;
        v23 = (__int64 *)((char *)v23 - 1);
        v47 = &v155[v22 + 8 - v49];
      }
      while ( v49 > (unsigned __int64)v7 && v265 < v23 && *(_BYTE *)(v49 - 1) == *((_BYTE *)v23 - 1) );
    }
LABEL_38:
    v50 = *(__m128i **)(a2 + 24);
    v51 = v49 - (_QWORD)v7;
    v52 = v252 - 2;
    if ( v49 > (unsigned __int64)&v252[-2] )
    {
      sub_916400(v50, v7, v49, v252 - 2);
    }
    else
    {
      *v50 = _mm_loadu_si128(v7);
      if ( v51 <= 0x10 )
      {
        *(_QWORD *)(a2 + 24) += v51;
        v53 = *(_QWORD *)(a2 + 8);
        goto LABEL_41;
      }
      v125 = *(__m128i **)(a2 + 24);
      v125[1] = _mm_loadu_si128(v7 + 1);
      if ( (__int64)(v51 - 16) > 16 )
      {
        v126 = &v125->m128i_i8[v51];
        v127 = v7 + 2;
        v128 = v125 + 2;
        do
        {
          v129 = _mm_loadu_si128(v127);
          v128 += 2;
          v127 += 2;
          v128[-2] = v129;
          v128[-1] = _mm_loadu_si128(v127 - 1);
        }
        while ( v126 > (char *)v128 );
      }
    }
    *(_QWORD *)(a2 + 24) += v51;
    v53 = *(_QWORD *)(a2 + 8);
    if ( v51 > 0xFFFF )
    {
      v123 = v53 - *(_QWORD *)a2;
      *(_DWORD *)(a2 + 72) = 1;
      *(_DWORD *)(a2 + 76) = v123 >> 3;
    }
LABEL_41:
    *(_WORD *)(v53 + 4) = v51;
    **(_DWORD **)(a2 + 8) = v48 + 3;
    v54 = *(_QWORD *)(a2 + 8);
    if ( (unsigned __int64)(v47 - 3) > 0xFFFF )
    {
      *(_DWORD *)(a2 + 72) = 2;
      *(_DWORD *)(a2 + 76) = (v54 - *(_QWORD *)a2) >> 3;
    }
    *(_WORD *)(v54 + 6) = (_WORD)v47 - 3;
    v22 = (unsigned __int64)&v47[v49];
    *(_QWORD *)(a2 + 8) += 8LL;
    v7 = (const __m128i *)&v47[v49];
    v261 = v249;
    v249 = v48;
    if ( v247 >= (unsigned __int64)&v47[v49] )
      goto LABEL_44;
LABEL_18:
    if ( v247 <= v22 )
      goto LABEL_50;
  }
  v92 = (unsigned int)v34 < v9;
  v93 = (char *)(v35 + 1);
  v94 = v22 + 5;
  v95 = (char *)v252;
  if ( v92 )
    v95 = v263;
  v96 = v94 + v95 - v93;
  if ( (unsigned __int64)v252 < v96 )
    v96 = (unsigned __int64)v252;
  v97 = v96 - 7;
  if ( v94 >= v96 - 7 )
  {
    v117 = v35 + 1;
    v118 = (_DWORD *)(v22 + 5);
    goto LABEL_136;
  }
  v98 = *(_QWORD *)(v35 + 1);
  v99 = *(_QWORD *)(v22 + 5);
  if ( v98 != v99 )
  {
    _RBP = v99 ^ v98;
    __asm { tzcnt   rbp, rbp }
    v102 = (unsigned int)_RBP >> 3;
    goto LABEL_103;
  }
  v118 = (_DWORD *)(v22 + 13);
  v117 = v35 + 3;
  if ( v97 <= v22 + 13 )
  {
LABEL_136:
    if ( (unsigned __int64)v118 < v96 - 3 && *v117 == *v118 )
    {
      ++v118;
      ++v117;
    }
    if ( (unsigned __int64)v118 < v96 - 1 && *(_WORD *)v117 == *(_WORD *)v118 )
    {
      v118 = (_DWORD *)((char *)v118 + 2);
      v117 = (_DWORD *)((char *)v117 + 2);
    }
    if ( v96 > (unsigned __int64)v118 )
      v118 = (_DWORD *)((char *)v118 + (*(_BYTE *)v117 == *(_BYTE *)v118));
    v102 = (unsigned __int64)v118 - v94;
    if ( v95 != &v93[v102] )
      goto LABEL_104;
LABEL_145:
    v119 = (char *)(v102 + v94);
    if ( (unsigned __int64)v119 >= v264 )
    {
      v144 = v265;
      v145 = v119;
    }
    else
    {
      if ( *v265 != *(_QWORD *)v119 )
      {
        _RAX = *(_QWORD *)v119 ^ *v265;
        __asm { tzcnt   rax, rax }
        v122 = (unsigned int)_RAX >> 3;
LABEL_148:
        v102 += v122;
        goto LABEL_104;
      }
      v145 = v119 + 8;
      v144 = v265 + 1;
      if ( v264 > (unsigned __int64)(v119 + 8) )
      {
        v178 = v265[1];
        v179 = *((_QWORD *)v119 + 1);
        if ( v179 != v178 )
        {
LABEL_239:
          _RDX = v178 ^ v179;
          __asm { tzcnt   rdx, rdx }
          v122 = &v145[(unsigned int)_RDX >> 3] - v119;
          goto LABEL_148;
        }
        while ( 1 )
        {
          v145 += 8;
          ++v144;
          if ( v264 <= (unsigned __int64)v145 )
            break;
          v179 = *v144;
          v178 = *(_QWORD *)v145;
          if ( *v144 != *(_QWORD *)v145 )
            goto LABEL_239;
        }
      }
    }
    if ( v145 < &v252[-1].m128i_i8[13] && *(_DWORD *)v144 == *(_DWORD *)v145 )
    {
      v145 += 4;
      v144 = (__int64 *)((char *)v144 + 4);
    }
    if ( v145 < &v252[-1].m128i_i8[15] && *(_WORD *)v144 == *(_WORD *)v145 )
    {
      v145 += 2;
      v144 = (__int64 *)((char *)v144 + 2);
    }
    if ( v252 > (const __m128i *)v145 )
      v145 += *(_BYTE *)v144 == (unsigned __int8)*v145;
    v122 = v145 - v119;
    goto LABEL_148;
  }
  v138 = *(_QWORD *)(v35 + 3);
  v139 = *(_QWORD *)(v22 + 13);
  if ( v138 == v139 )
  {
    do
    {
      v118 += 2;
      v117 += 2;
      if ( v97 <= (unsigned __int64)v118 )
        goto LABEL_136;
      v138 = *(_QWORD *)v117;
      v139 = *(_QWORD *)v118;
    }
    while ( *(_QWORD *)v117 == *(_QWORD *)v118 );
  }
  _RAX = v139 ^ v138;
  __asm { tzcnt   rax, rax }
  v102 = (unsigned __int64)v118 + ((unsigned int)_RAX >> 3) - v94;
LABEL_103:
  if ( v95 == &v93[v102] )
    goto LABEL_145;
LABEL_104:
  v103 = v22 + 1;
  v104 = (char *)(v102 + 4);
  v105 = *(__m128i **)(a2 + 24);
  v52 = v252 - 2;
  v106 = v22 + 1 - (_QWORD)v7;
  if ( v103 > (unsigned __int64)&v252[-2] )
  {
    sub_916400(v105, v7, v103, v252 - 2);
  }
  else
  {
    *v105 = _mm_loadu_si128(v7);
    if ( v106 <= 0x10 )
    {
      *(_QWORD *)(a2 + 24) += v106;
      v107 = *(_QWORD *)(a2 + 8);
      goto LABEL_107;
    }
    v156 = *(__m128i **)(a2 + 24);
    v156[1] = _mm_loadu_si128(v7 + 1);
    if ( (__int64)(v106 - 16) > 16 )
    {
      v157 = &v156->m128i_i8[v106];
      v158 = v7 + 2;
      v159 = v156 + 2;
      do
      {
        v160 = _mm_loadu_si128(v158);
        v159 += 2;
        v158 += 2;
        v159[-2] = v160;
        v159[-1] = _mm_loadu_si128(v158 - 1);
      }
      while ( v157 > (char *)v159 );
    }
  }
  *(_QWORD *)(a2 + 24) += v106;
  v107 = *(_QWORD *)(a2 + 8);
  if ( v106 > 0xFFFF )
  {
    v124 = v107 - *(_QWORD *)a2;
    *(_DWORD *)(a2 + 72) = 1;
    *(_DWORD *)(a2 + 76) = v124 >> 3;
  }
LABEL_107:
  *(_WORD *)(v107 + 4) = v106;
  v108 = v102 + 1;
  **(_DWORD **)(a2 + 8) = 1;
  v109 = *(_QWORD *)(a2 + 8);
  if ( v108 > 0xFFFF )
  {
    *(_DWORD *)(a2 + 72) = 2;
    *(_DWORD *)(a2 + 76) = (v109 - *(_QWORD *)a2) >> 3;
  }
  v22 = (unsigned __int64)&v104[v103];
  *(_WORD *)(v109 + 6) = v108;
  v7 = (const __m128i *)&v104[v103];
  *(_QWORD *)(a2 + 8) += 8LL;
  if ( v247 < (unsigned __int64)&v104[v103] )
    goto LABEL_18;
LABEL_44:
  v55 = v25 + 2;
  v56 = v261;
  *(_DWORD *)(v248 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v246 + v55)) >> v250)) = v55;
  *(_DWORD *)(v248 + 4 * ((0xCF1BBCDCB7A56463LL * *(_QWORD *)(v22 - 2)) >> v250)) = v22 - 2 - v246;
  *(_DWORD *)(v254 + 4 * ((0xCF1BBCDCBB000000LL * *(_QWORD *)(v246 + v55)) >> v257)) = v55;
  *(_DWORD *)(v254 + 4 * ((0xCF1BBCDCBB000000LL * *(_QWORD *)(v22 - 1)) >> v257)) = v22 - 1 - v246;
  while ( 2 )
  {
    v57 = v22 - v246;
    v58 = v22 - v246 - v56;
    v59 = v58 + v246;
    if ( v58 < v9 )
      v59 = v58 - (unsigned __int64)v268 + v253;
    if ( v56 + v258 - v57 > 2 && *(_DWORD *)v22 == *(_DWORD *)v59 )
    {
      v92 = v58 < v9;
      v161 = v59 + 4;
      v162 = v22 + 4;
      v163 = (char *)v252;
      if ( v92 )
        v163 = v263;
      v164 = (unsigned __int64)&v163[v162 - v161];
      if ( (unsigned __int64)v252 < v164 )
        v164 = (unsigned __int64)v252;
      v165 = v164 - 7;
      if ( v162 >= v164 - 7 )
      {
        v169 = (_QWORD *)(v59 + 4);
        v168 = (_QWORD *)(v22 + 4);
      }
      else
      {
        v166 = *(_QWORD *)(v59 + 4);
        v167 = *(_QWORD *)(v22 + 4);
        if ( v166 != v167 )
        {
          _RDI = v167 ^ v166;
          __asm { tzcnt   rdi, rdi }
          v173 = (char *)((unsigned int)_RDI >> 3);
          goto LABEL_250;
        }
        v168 = (_QWORD *)(v22 + 12);
        v169 = (_QWORD *)(v59 + 12);
        if ( v165 > v22 + 12 )
        {
          v262 = *(_QWORD *)(v59 + 12);
          v170 = *(_QWORD *)(v22 + 12);
          if ( v262 != v170 )
          {
            _RAX = v262 ^ v170;
LABEL_216:
            __asm { tzcnt   r11, rax }
            v173 = (char *)v168 + ((unsigned int)_R11 >> 3) - v162;
LABEL_250:
            if ( v163 != &v173[v161] )
            {
LABEL_251:
              v182 = v173 + 4;
              v183 = *(__m128i **)(a2 + 24);
              if ( (unsigned __int64)v52 < v22 )
                sub_916400(v183, (const __m128i *)v22, v22, v52);
              else
                *v183 = _mm_loadu_si128((const __m128i *)v22);
              *(_WORD *)(*(_QWORD *)(a2 + 8) + 4LL) = 0;
              **(_DWORD **)(a2 + 8) = 1;
              v184 = *(_QWORD *)(a2 + 8);
              if ( (unsigned __int64)(v173 + 1) > 0xFFFF )
              {
                *(_DWORD *)(a2 + 72) = 2;
                *(_DWORD *)(a2 + 76) = (v184 - *(_QWORD *)a2) >> 3;
              }
              *(_WORD *)(v184 + 6) = (_WORD)v173 + 1;
              *(_QWORD *)(a2 + 8) += 8LL;
              *(_DWORD *)(v254 + 4 * ((0xCF1BBCDCBB000000LL * *(_QWORD *)v22) >> v257)) = v57;
              v185 = 0xCF1BBCDCB7A56463LL * *(_QWORD *)v22;
              v22 += (unsigned __int64)v182;
              *(_DWORD *)(v248 + 4 * (v185 >> v250)) = v57;
              if ( v247 < v22 )
              {
                v227 = v249;
                v7 = (const __m128i *)v22;
                v249 = v56;
                v261 = v227;
                goto LABEL_18;
              }
              v186 = v56;
              v56 = v249;
              v249 = v186;
              continue;
            }
            v197 = &v173[v162];
            if ( (unsigned __int64)v197 >= v264 )
            {
              v205 = v265;
              v206 = v197;
            }
            else
            {
              if ( *v265 != *(_QWORD *)v197 )
              {
                _RAX = *(_QWORD *)v197 ^ *v265;
                __asm { tzcnt   rax, rax }
                v200 = (unsigned int)_RAX >> 3;
LABEL_282:
                v173 += v200;
                goto LABEL_251;
              }
              v206 = v197 + 8;
              v205 = v265 + 1;
              if ( v264 > (unsigned __int64)(v197 + 8) )
              {
                v219 = v265[1];
                v220 = *((_QWORD *)v197 + 1);
                if ( v220 != v219 )
                {
LABEL_334:
                  _RDX = v219 ^ v220;
                  __asm { tzcnt   rdx, rdx }
                  v200 = &v206[(unsigned int)_RDX >> 3] - v197;
                  goto LABEL_282;
                }
                while ( 1 )
                {
                  v206 += 8;
                  ++v205;
                  if ( v264 <= (unsigned __int64)v206 )
                    break;
                  v220 = *v205;
                  v219 = *(_QWORD *)v206;
                  if ( *v205 != *(_QWORD *)v206 )
                    goto LABEL_334;
                }
              }
            }
            if ( v206 < &v252[-1].m128i_i8[13] && *(_DWORD *)v205 == *(_DWORD *)v206 )
            {
              v206 += 4;
              v205 = (__int64 *)((char *)v205 + 4);
            }
            if ( v206 < &v252[-1].m128i_i8[15] && *(_WORD *)v205 == *(_WORD *)v206 )
            {
              v206 += 2;
              v205 = (__int64 *)((char *)v205 + 2);
            }
            if ( v252 > (const __m128i *)v206 )
              v206 += *(_BYTE *)v205 == (unsigned __int8)*v206;
            v200 = v206 - v197;
            goto LABEL_282;
          }
          while ( 1 )
          {
            ++v168;
            ++v169;
            if ( v165 <= (unsigned __int64)v168 )
              break;
            if ( *v169 != *v168 )
            {
              _RAX = *v168 ^ *v169;
              goto LABEL_216;
            }
          }
        }
      }
      if ( (unsigned __int64)v168 < v164 - 3 && *(_DWORD *)v169 == *(_DWORD *)v168 )
      {
        v168 = (_QWORD *)((char *)v168 + 4);
        v169 = (_QWORD *)((char *)v169 + 4);
      }
      if ( (unsigned __int64)v168 < v164 - 1 && *(_WORD *)v169 == *(_WORD *)v168 )
      {
        v168 = (_QWORD *)((char *)v168 + 2);
        v169 = (_QWORD *)((char *)v169 + 2);
      }
      if ( v164 > (unsigned __int64)v168 )
        v168 = (_QWORD *)((char *)v168 + (*(_BYTE *)v169 == *(_BYTE *)v168));
      v173 = (char *)v168 - v162;
      goto LABEL_250;
    }
    break;
  }
  v261 = v56;
  v7 = (const __m128i *)v22;
  if ( v247 > v22 )
    goto LABEL_19;
LABEL_50:
  *a3 = v249;
  a3[1] = v261;
  return (char *)v252 - (char *)v7;
}
