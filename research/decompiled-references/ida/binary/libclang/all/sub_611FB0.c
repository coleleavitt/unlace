void __fastcall sub_611FB0(const __m128i *a1, __int64 a2)
{
  const __m128i *v2; // rbp
  __int64 v3; // rbx
  unsigned __int16 v4; // ax
  const __m128i *v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // rsi
  const __m128i *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __m128i *v18; // r12
  __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __m128i *v24; // rax
  __int64 v25; // rsi
  unsigned __int64 v26; // rax
  const __m128i *v27; // rsi
  int v28; // eax
  const __m128i **v29; // r12
  const __m128i **v30; // rbx
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __m128i *v37; // rcx
  __m128i *v38; // rdx
  __int64 *v39; // r13
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rdx
  __m128i v44; // xmm0
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  __m128i *v48; // rcx
  __m128i *v49; // rax
  __int64 v50; // rsi
  int v51; // eax
  unsigned int *v52; // r13
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r14
  __int64 v56; // rcx
  __m128i v57; // xmm0
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rdx
  __m128i *v61; // r12
  __int64 v62; // rdx
  __m128i *v63; // rax
  __int64 v64; // rdx
  __m128i *v65; // rdx
  __int64 v66; // r13
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __m128i *v72; // r12
  __m128i *v73; // rdx
  __int64 v74; // r12
  __int64 v75; // rdi
  __int64 v76; // rsi
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 *v85; // rax
  __int64 v86; // r13
  __int64 v87; // r14
  int v88; // eax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rsi
  __int64 v92; // r13
  __int64 v93; // rax
  __int64 v94; // rdx
  __m128i v95; // xmm0
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rdx
  __m128i *v99; // rcx
  __m128i *v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rax
  __m128 v103; // xmm0
  __m128i v104; // xmm1
  __int64 v105; // rbx
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rdx
  __m128i *v109; // rsi
  __int64 v110; // rcx
  _DWORD *v111; // rdi
  char v112; // al
  __m128i *v113; // r12
  __int64 v114; // rdx
  __int64 v115; // r13
  __int64 v116; // rax
  __int64 v117; // rdx
  __m128i v118; // xmm0
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rbx
  __int64 v122; // rsi
  __int64 v123; // rax
  __int64 v124; // rdx
  unsigned int v125; // edx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // r13
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // r12
  __int64 v132; // rsi
  __int64 v133; // rsi
  __int64 v134; // rax
  const __m128i *v135; // rsi
  __m128i v136; // xmm1
  __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rdi
  __m128 v140; // xmm0
  __int64 v141; // rsi
  char v142; // al
  __int64 v143; // rsi
  __int64 v144; // rsi
  const __m128i *v145; // rsi
  int v146; // eax
  __int64 v147; // r12
  __int64 v148; // rsi
  __int64 v150; // r13
  __int64 v151; // rax
  __int64 v152; // rdx
  __m128i v153; // xmm0
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rdx
  __m128i *v157; // rcx
  __m128i *v158; // rdx
  __int64 v159; // rdx
  __int64 v160; // rdi
  __m128i v161; // xmm1
  __int64 v162; // rax
  __m128 v163; // xmm0
  __int64 v164; // rdi
  __int64 v165; // rsi
  unsigned __int64 v166; // rax
  __m128i v167; // xmm2
  __m128i v168; // xmm1
  __int64 v169; // rdx
  __m128i v170; // xmm0
  __int64 v171; // rdi
  __int64 v172; // rax
  const __m128i *v173; // rsi
  __int64 v174; // r15
  __int64 v175; // rbp
  __int64 v176; // rsi
  __int64 v177; // rax
  __int64 v178; // rsi
  __m128i v179; // xmm0
  __int64 v180; // rcx
  __int64 v181; // rdi
  __int64 v182; // rsi
  __int64 v183; // rax
  __int64 v184; // rcx
  __int64 v185; // rsi
  __m128i v186; // xmm0
  __int64 v187; // rdi
  __int64 v188; // rax
  __int64 v189; // rsi
  __m128i v190; // xmm0
  __int64 v191; // rcx
  __int64 v192; // rdi
  __int64 v193; // r14
  __int64 v194; // rsi
  __int64 v195; // r14
  __int64 v196; // rsi
  __int64 v197; // r14
  __int64 v198; // rsi
  __int64 v199; // rbp
  __int64 v200; // rsi
  __int64 v201; // r14
  __int64 v202; // rsi
  __int64 v203; // [rsp+8h] [rbp-A0h]
  __m128i v204; // [rsp+10h] [rbp-98h] BYREF
  __int64 v205; // [rsp+20h] [rbp-88h]
  __m128i v206; // [rsp+30h] [rbp-78h] BYREF
  __int64 v207; // [rsp+40h] [rbp-68h]
  __int64 v208; // [rsp+48h] [rbp-60h]
  __m128i v209; // [rsp+50h] [rbp-58h]
  __int64 v210; // [rsp+60h] [rbp-48h]
  int v211; // [rsp+68h] [rbp-40h]

  v2 = a1;
  v3 = a2;
  while ( 2 )
  {
    v4 = *(_WORD *)v3 & 0x1FF;
    if ( v4 <= 0x76u )
    {
      if ( v4 == 4 )
      {
        if ( *(_BYTE *)(v3 + 2) > 0x6Fu )
        {
LABEL_85:
          sub_5F9AA0(v2, v3);
        }
        else
        {
          v7 = v3;
          v8 = v2;
          switch ( *(_BYTE *)(v3 + 2) >> 3 )
          {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
LABEL_9:
              sub_5F9AA0(v8, v7);
              break;
          }
        }
        return;
      }
    }
    else if ( v4 <= 0x78u )
    {
      v5 = a1;
      v6 = a2;
      v7 = v3;
      v8 = v2;
      switch ( (*(_WORD *)(v3 + 2) >> 3) & 0x3F )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0xE:
        case 0xF:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
        case 0x1D:
        case 0x1E:
        case 0x1F:
        case 0x20:
          goto LABEL_9;
        default:
          a2 = v6;
          a1 = v5;
          break;
      }
    }
LABEL_8:
    switch ( v4 )
    {
      case 0u:
      case 2u:
      case 4u:
      case 6u:
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xEu:
      case 0xFu:
      case 0x11u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x1Au:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x21u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x35u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x47u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Eu:
      case 0x4Fu:
      case 0x50u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Du:
      case 0x5Eu:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x66u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Fu:
      case 0x70u:
      case 0x72u:
      case 0x75u:
      case 0x77u:
      case 0x78u:
        goto LABEL_85;
      case 1u:
        v12 = *(_BYTE *)(v3 + 1);
        v13 = *(_QWORD *)(v3 + 8LL * ((v12 & 2) != 0) + 24);
        if ( v13 )
        {
          sub_5F99B0(v2, v13);
          v12 = *(_BYTE *)(v3 + 1);
        }
        v14 = *(_QWORD *)(v3 + 8LL * ((v12 & 2) != 0) + 16);
        if ( v14 )
          sub_5F99B0(v2, v14);
        v15 = sub_ACB330(v3);
        if ( !v15 )
          return;
        v16 = v2->m128i_i64[0];
        v17 = v2->m128i_i64[1];
        v18 = &v206;
        v19 = v2[2].m128i_i64[0];
        v20 = _mm_loadu_si128(v2 + 1);
        v206.m128i_i64[0] = v15;
        v208 = v17;
        v210 = v19;
        v211 = 0;
        v206.m128i_i64[1] = 1;
        v207 = 0;
        v209 = v20;
        v21 = *(unsigned int *)(v16 + 8);
        v22 = v21 + 1;
        if ( *(unsigned int *)(v16 + 12) >= (unsigned __int64)(v21 + 1) )
          goto LABEL_20;
        v175 = *(_QWORD *)v16;
        v176 = v16 + 16;
        if ( (unsigned __int64)&v206 < *(_QWORD *)v16 || (unsigned __int64)&v206 >= v175 + (v21 << 6) )
        {
          sub_25D6060(v16, v176, v22, 64);
          v21 = *(unsigned int *)(v16 + 8);
LABEL_20:
          v23 = *(_QWORD *)v16;
        }
        else
        {
          sub_25D6060(v16, v176, v22, 64);
          v23 = *(_QWORD *)v16;
          v21 = *(unsigned int *)(v16 + 8);
          v18 = (__m128i *)((char *)&v206 + *(_QWORD *)v16 - v175);
        }
        v24 = (__m128i *)(v23 + (v21 << 6));
        *v24 = _mm_loadu_si128(v18);
        v24[1] = _mm_loadu_si128(v18 + 1);
        v24[2] = _mm_loadu_si128(v18 + 2);
        v24[3] = _mm_loadu_si128(v18 + 3);
        ++*(_DWORD *)(v16 + 8);
        return;
      case 3u:
        v25 = *(_QWORD *)(v3 + 16);
        if ( v25 )
          sub_5F99B0(v2, v25);
        v26 = *(_QWORD *)(v3 + 24);
        if ( v26 > 7 )
          goto LABEL_140;
        return;
      case 5u:
        sub_5F9AA0(v2, v3);
        if ( (*(_BYTE *)(v3 + 2) & 0x40) != 0 )
        {
          v27 = *(const __m128i **)(v3 + 16);
          if ( v27 )
            goto LABEL_180;
        }
        return;
      case 7u:
        v28 = *(_DWORD *)(v3 + 4);
        if ( v28 )
        {
          v29 = (const __m128i **)(v3 + 8LL * (unsigned int)(v28 - 1) + 24);
          v30 = (const __m128i **)(v3 + 16);
          do
          {
            if ( *v29 )
              sub_5FA470(v2, *v29);
            --v29;
          }
          while ( v29 != v30 );
        }
        return;
      case 0xDu:
        v9 = v2[2].m128i_i64[0];
        v10 = v2->m128i_i64[1];
        v211 = 11;
        v11 = v2->m128i_i64[0];
        v208 = v10;
        v210 = v9;
        v209 = _mm_loadu_si128(v2 + 1);
        goto LABEL_12;
      case 0x10u:
        v31 = v2->m128i_i64[0];
        v32 = v2[2].m128i_i64[0];
        v211 = 14;
        v33 = v2->m128i_i64[1];
        v206 = (__m128i)(unsigned __int64)v3;
        v210 = v32;
        v208 = v33;
        v207 = 0;
        v209 = _mm_loadu_si128(v2 + 1);
        v34 = *(unsigned int *)(v31 + 8);
        v35 = v34 + 1;
        if ( *(unsigned int *)(v31 + 12) < (unsigned __int64)(v34 + 1) )
        {
          v195 = *(_QWORD *)v31;
          v196 = v31 + 16;
          if ( (unsigned __int64)&v206 < *(_QWORD *)v31 || (unsigned __int64)&v206 >= v195 + (v34 << 6) )
          {
            sub_25D6060(v31, v196, v35, 64);
            v34 = *(unsigned int *)(v31 + 8);
            v36 = *(_QWORD *)v31;
            v37 = &v206;
          }
          else
          {
            sub_25D6060(v31, v196, v35, 64);
            v36 = *(_QWORD *)v31;
            v34 = *(unsigned int *)(v31 + 8);
            v37 = (__m128i *)((char *)&v206 + *(_QWORD *)v31 - v195);
          }
        }
        else
        {
          v36 = *(_QWORD *)v31;
          v37 = &v206;
        }
        v38 = (__m128i *)((v34 << 6) + v36);
        *v38 = _mm_loadu_si128(v37);
        v38[1] = _mm_loadu_si128(v37 + 1);
        v38[2] = _mm_loadu_si128(v37 + 2);
        v38[3] = _mm_loadu_si128(v37 + 3);
        ++*(_DWORD *)(v31 + 8);
        v39 = (__int64 *)(v3 + 48);
        v40 = v3 + 48 + 8LL * *(unsigned int *)(v3 + 16);
        if ( v3 + 48 != v40 )
        {
          do
          {
            v41 = *v39;
            if ( *v39 )
            {
              v42 = v2->m128i_i64[0];
              v43 = v2[2].m128i_i64[0];
              v211 = 0;
              v44 = _mm_loadu_si128(v2 + 1);
              v45 = v2->m128i_i64[1];
              v206.m128i_i64[0] = v41;
              v210 = v43;
              v208 = v45;
              v206.m128i_i64[1] = 1;
              v207 = 0;
              v209 = v44;
              v46 = *(unsigned int *)(v42 + 8);
              if ( *(unsigned int *)(v42 + 12) < (unsigned __int64)(v46 + 1) )
              {
                v174 = *(_QWORD *)v42;
                if ( (unsigned __int64)&v206 < *(_QWORD *)v42 || (unsigned __int64)&v206 >= v174 + (v46 << 6) )
                {
                  sub_25D6060(v42, v42 + 16, v46 + 1, 64);
                  v46 = *(unsigned int *)(v42 + 8);
                  v47 = *(_QWORD *)v42;
                  v48 = &v206;
                }
                else
                {
                  sub_25D6060(v42, v42 + 16, v46 + 1, 64);
                  v47 = *(_QWORD *)v42;
                  v46 = *(unsigned int *)(v42 + 8);
                  v48 = (__m128i *)((char *)&v206 + *(_QWORD *)v42 - v174);
                }
              }
              else
              {
                v47 = *(_QWORD *)v42;
                v48 = &v206;
              }
              v49 = (__m128i *)((v46 << 6) + v47);
              *v49 = _mm_loadu_si128(v48);
              v49[1] = _mm_loadu_si128(v48 + 1);
              v49[2] = _mm_loadu_si128(v48 + 2);
              v49[3] = _mm_loadu_si128(v48 + 3);
              ++*(_DWORD *)(v42 + 8);
            }
            ++v39;
          }
          while ( (__int64 *)v40 != v39 );
        }
        return;
      case 0x12u:
        v3 = *(_QWORD *)(v3 + 16);
        continue;
      case 0x18u:
        sub_5FA660(v2, v3);
        if ( !(unsigned __int8)sub_8C6660(v3) )
        {
          v50 = *(_QWORD *)(v3 + 56);
          if ( v50 )
            goto LABEL_47;
        }
        return;
      case 0x19u:
        sub_5FA660(v2, v3);
        return;
      case 0x1Bu:
        v3 = *(_QWORD *)(v3 + 16);
        if ( v3 )
          continue;
        return;
      case 0x1Cu:
        v51 = *(_DWORD *)(v3 + 32);
        if ( v51 )
        {
          v52 = (unsigned int *)(v3 + 16LL * (unsigned int)(v51 - 1) + 44);
          do
          {
            v53 = *(_QWORD *)(v52 + 1);
            if ( (v53 & 3) == 1 )
            {
              if ( v53 > 3 )
              {
                v54 = *v52;
                v55 = v2->m128i_i64[0];
                v211 = 10;
                v56 = v2[2].m128i_i64[0];
                v57 = _mm_loadu_si128(v2 + 1);
                v206.m128i_i64[0] = v53 & 0xFFFFFFFFFFFFFFFCLL;
                v58 = v2->m128i_i64[1];
                v206.m128i_i64[1] = v54;
                v210 = v56;
                v208 = v58;
                v207 = 0;
                v209 = v57;
                v59 = *(unsigned int *)(v55 + 8);
                v60 = v59 + 1;
                if ( *(unsigned int *)(v55 + 12) < (unsigned __int64)(v59 + 1) )
                {
                  v61 = &v206;
                  v182 = v55 + 16;
                  if ( (unsigned __int64)&v206 < *(_QWORD *)v55
                    || (v203 = *(_QWORD *)v55, (unsigned __int64)&v206 >= *(_QWORD *)v55 + (v59 << 6)) )
                  {
                    sub_25D6060(v55, v182, v60, 64);
                    v59 = *(unsigned int *)(v55 + 8);
                    v62 = *(_QWORD *)v55;
                  }
                  else
                  {
                    sub_25D6060(v55, v182, v60, 64);
                    v62 = *(_QWORD *)v55;
                    v59 = *(unsigned int *)(v55 + 8);
                    v61 = (__m128i *)((char *)&v206 + *(_QWORD *)v55 - v203);
                  }
                }
                else
                {
                  v61 = &v206;
                  v62 = *(_QWORD *)v55;
                }
                v63 = (__m128i *)(v62 + (v59 << 6));
                *v63 = _mm_loadu_si128(v61);
                v63[1] = _mm_loadu_si128(v61 + 1);
                v63[2] = _mm_loadu_si128(v61 + 2);
                v63[3] = _mm_loadu_si128(v61 + 3);
                ++*(_DWORD *)(v55 + 8);
              }
            }
            else if ( (v53 & 3) - 2 > 1 )
            {
              v165 = *(_QWORD *)(v3 + 16LL * *(unsigned int *)(v3 + 32) + 8LL * (unsigned int)(v53 >> 2) + 40);
              if ( v165 )
                sub_5F99B0(v2, v165);
            }
            v52 -= 4;
          }
          while ( v52 != (unsigned int *)(v3 + 28) );
        }
        v173 = *(const __m128i **)(v3 + 24);
        if ( v173 )
          sub_5FA470(v2, v173);
        return;
      case 0x22u:
        sub_5F9AA0(v2, v3);
        if ( !*(_BYTE *)(v3 + 26) )
        {
          v27 = *(const __m128i **)(v3 + 40);
          if ( v27 )
            goto LABEL_180;
        }
        return;
      case 0x26u:
        v27 = *(const __m128i **)(v3 + 16);
        if ( v27 )
          goto LABEL_180;
        return;
      case 0x2Fu:
        v66 = v2->m128i_i64[0];
        v67 = v2[2].m128i_i64[0];
        v211 = 2;
        v68 = v2->m128i_i64[1];
        v206 = (__m128i)(unsigned __int64)v3;
        v210 = v67;
        v208 = v68;
        v207 = 0;
        v209 = _mm_loadu_si128(v2 + 1);
        v69 = *(unsigned int *)(v66 + 8);
        v70 = v69 + 1;
        if ( *(unsigned int *)(v66 + 12) < (unsigned __int64)(v69 + 1) )
        {
          v197 = *(_QWORD *)v66;
          v72 = &v206;
          v198 = v66 + 16;
          if ( (unsigned __int64)&v206 < *(_QWORD *)v66 || (unsigned __int64)&v206 >= v197 + (v69 << 6) )
          {
            sub_25D6060(v66, v198, v70, 64);
            v69 = *(unsigned int *)(v66 + 8);
            v71 = *(_QWORD *)v66;
          }
          else
          {
            sub_25D6060(v66, v198, v70, 64);
            v71 = *(_QWORD *)v66;
            v69 = *(unsigned int *)(v66 + 8);
            v72 = (__m128i *)((char *)&v206 + *(_QWORD *)v66 - v197);
          }
        }
        else
        {
          v71 = *(_QWORD *)v66;
          v72 = &v206;
        }
        v73 = (__m128i *)((v69 << 6) + v71);
        *v73 = _mm_loadu_si128(v72);
        v73[1] = _mm_loadu_si128(v72 + 1);
        v73[2] = _mm_loadu_si128(v72 + 2);
        v73[3] = _mm_loadu_si128(v72 + 3);
        ++*(_DWORD *)(v66 + 8);
        v74 = *(_QWORD *)(v3 + 16);
        if ( !v74 )
          goto LABEL_72;
        if ( (unsigned __int8)sub_8123C0(*(_QWORD *)(v3 + 16)) )
          return;
        v74 = *(_QWORD *)(v3 + 16);
LABEL_72:
        if ( (*(_WORD *)v74 & 0x1FF) != 0x2F )
          goto LABEL_78;
        v75 = *(_QWORD *)(v74 + 24);
        if ( !v75 )
          goto LABEL_78;
        if ( (*(_BYTE *)(v75 + 28) & 0x7Fu) - 47 > 2 )
          goto LABEL_77;
        if ( (unsigned __int8)sub_781720() )
        {
          v141 = *(_QWORD *)(v74 + 16);
          if ( v141 )
LABEL_218:
            sub_5F99B0(v2, v141);
        }
        else
        {
          v74 = *(_QWORD *)(v3 + 16);
LABEL_77:
          if ( v74 )
LABEL_78:
            sub_5F99B0(v2, v74);
        }
        return;
      case 0x34u:
        v76 = sub_8C53B0(v3);
        if ( v76 )
          sub_5F99B0(v2, v76);
        v77 = v2[2].m128i_i64[0];
        v211 = 12;
        v78 = v2->m128i_i64[1];
        v11 = v2->m128i_i64[0];
        v210 = v77;
        v208 = v78;
        v209 = _mm_loadu_si128(v2 + 1);
        goto LABEL_12;
      case 0x36u:
        v79 = *(_QWORD *)(v3 + 48);
        if ( (v79 & 4) != 0 )
        {
          v80 = v79 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v80 )
            v3 = v80;
        }
        goto LABEL_85;
      case 0x45u:
        sub_AC4830(&v206);
        v204 = _mm_load_si128(&v206);
        v205 = v207;
        if ( (v204.m128i_i8[8] & 3) != 0 )
          v85 = (__int64 *)sub_ACE280(&v204, v3, v81, v82, v83, v84);
        else
          v85 = (__int64 *)v204.m128i_i64[0];
        if ( *v85 )
          sub_5F99B0(v2, *v85);
        v86 = *(_QWORD *)(v3 + 24);
        v87 = v86 + 24LL * (*(_WORD *)(v3 + 20) >> 1);
        break;
      case 0x46u:
        if ( (*(_BYTE *)(v3 + 2) & 8) != 0 && *(_DWORD *)(v3 + 56) )
        {
          v177 = *(unsigned int *)(v3 + 68);
          v178 = v2->m128i_i64[1];
          v179 = _mm_loadu_si128(v2 + 1);
          v180 = v2[2].m128i_i64[0];
          v211 = 7;
          v181 = v2->m128i_i64[0];
          v208 = v178;
          v210 = v180;
          v206.m128i_i64[0] = v3 + 72;
          v206.m128i_i64[1] = v3 + 72 + 32 * v177;
          v207 = 0;
          v209 = v179;
          sub_611F00(v181, &v206);
        }
        v92 = v2->m128i_i64[0];
        v93 = v2[2].m128i_i64[0];
        v211 = 9;
        v94 = v2->m128i_i64[1];
        v95 = _mm_loadu_si128(v2 + 1);
        v206 = (__m128i)(unsigned __int64)v3;
        v210 = v93;
        v208 = v94;
        v207 = 0;
        v209 = v95;
        v96 = *(unsigned int *)(v92 + 8);
        v97 = v96 + 1;
        if ( *(unsigned int *)(v92 + 12) < (unsigned __int64)(v96 + 1) )
        {
          v201 = *(_QWORD *)v92;
          v202 = v92 + 16;
          if ( (unsigned __int64)&v206 < *(_QWORD *)v92 || (unsigned __int64)&v206 >= v201 + (v96 << 6) )
          {
            sub_25D6060(v92, v202, v97, 64);
            v96 = *(unsigned int *)(v92 + 8);
            v98 = *(_QWORD *)v92;
            v99 = &v206;
          }
          else
          {
            sub_25D6060(v92, v202, v97, 64);
            v98 = *(_QWORD *)v92;
            v96 = *(unsigned int *)(v92 + 8);
            v99 = (__m128i *)((char *)&v206 + *(_QWORD *)v92 - v201);
          }
        }
        else
        {
          v98 = *(_QWORD *)v92;
          v99 = &v206;
        }
        v100 = (__m128i *)((v96 << 6) + v98);
        *v100 = _mm_loadu_si128(v99);
        v100[1] = _mm_loadu_si128(v99 + 1);
        v100[2] = _mm_loadu_si128(v99 + 2);
        v100[3] = _mm_loadu_si128(v99 + 3);
        ++*(_DWORD *)(v92 + 8);
        if ( !*(_QWORD *)(v3 + 16) )
          return;
        v101 = v2->m128i_i64[1];
        v102 = v2[2].m128i_i64[0];
        v103 = _mm_loadh_ps((const double *)(v3 + 24));
        v104 = _mm_loadu_si128(v2 + 1);
        v105 = v2->m128i_i64[0];
        v211 = 8;
        v208 = v101;
        v210 = v102;
        v207 = 0;
        v209 = v104;
        v206 = (__m128i)v103;
        v106 = *(unsigned int *)(v105 + 8);
        v107 = v106 + 1;
        if ( *(unsigned int *)(v105 + 12) >= (unsigned __int64)(v106 + 1) )
          goto LABEL_107;
        v199 = *(_QWORD *)v105;
        v200 = v105 + 16;
        if ( (unsigned __int64)&v206 < *(_QWORD *)v105 || (unsigned __int64)&v206 >= v199 + (v106 << 6) )
        {
          sub_25D6060(v105, v200, v107, 64);
          v106 = *(unsigned int *)(v105 + 8);
LABEL_107:
          v108 = *(_QWORD *)v105;
          v109 = &v206;
        }
        else
        {
          sub_25D6060(v105, v200, v107, 64);
          v108 = *(_QWORD *)v105;
          v106 = *(unsigned int *)(v105 + 8);
          v109 = (__m128i *)((char *)&v206 + *(_QWORD *)v105 - v199);
        }
        v110 = 16;
        v111 = (_DWORD *)((v106 << 6) + v108);
        while ( v110 )
        {
          *v111 = v109->m128i_i32[0];
          v109 = (__m128i *)((char *)v109 + 4);
          ++v111;
          --v110;
        }
        ++*(_DWORD *)(v105 + 8);
        return;
      case 0x48u:
        v112 = *(_BYTE *)(v3 + 2);
        v113 = &v206;
        if ( (v112 & 0x10) != 0 )
        {
          v114 = 16LL * ((v112 & 8) != 0) + 8LL * ((v112 & 0x20) != 0);
          if ( *(_DWORD *)(v3 + v114 + 32) )
          {
            v188 = *(unsigned int *)(v3 + v114 + 44);
            v189 = v2->m128i_i64[1];
            v190 = _mm_loadu_si128(v2 + 1);
            v191 = v2[2].m128i_i64[0];
            v211 = 7;
            v192 = v2->m128i_i64[0];
            v208 = v189;
            v210 = v191;
            v206.m128i_i64[0] = v3 + v114 + 48;
            v206.m128i_i64[1] = v206.m128i_i64[0] + 32 * v188;
            v207 = 0;
            v209 = v190;
            sub_611F00(v192, &v206);
          }
        }
        v115 = v2->m128i_i64[0];
        v116 = v2[2].m128i_i64[0];
        v211 = 5;
        v117 = v2->m128i_i64[1];
        v118 = _mm_loadu_si128(v2 + 1);
        v206 = (__m128i)(unsigned __int64)v3;
        v210 = v116;
        v208 = v117;
        v207 = 0;
        v209 = v118;
        v119 = *(unsigned int *)(v115 + 8);
        v120 = v119 + 1;
        if ( *(unsigned int *)(v115 + 12) >= (unsigned __int64)(v119 + 1) )
        {
          v64 = *(_QWORD *)v115;
        }
        else
        {
          v121 = *(_QWORD *)v115;
          v122 = v115 + 16;
          if ( (unsigned __int64)&v206 < *(_QWORD *)v115 || (unsigned __int64)&v206 >= v121 + (v119 << 6) )
          {
            sub_25D6060(v115, v122, v120, 64);
            v119 = *(unsigned int *)(v115 + 8);
            v64 = *(_QWORD *)v115;
          }
          else
          {
            sub_25D6060(v115, v122, v120, 64);
            v64 = *(_QWORD *)v115;
            v119 = *(unsigned int *)(v115 + 8);
            v113 = (__m128i *)((char *)&v206 + *(_QWORD *)v115 - v121);
          }
        }
        v65 = (__m128i *)((v119 << 6) + v64);
        *v65 = _mm_loadu_si128(v113);
        v65[1] = _mm_loadu_si128(v113 + 1);
        v65[2] = _mm_loadu_si128(v113 + 2);
        v65[3] = _mm_loadu_si128(v113 + 3);
        ++*(_DWORD *)(v115 + 8);
        return;
      case 0x4Cu:
        v123 = v2[2].m128i_i64[0];
        v211 = 13;
        v124 = v2->m128i_i64[1];
        v11 = v2->m128i_i64[0];
        v210 = v123;
        v208 = v124;
        v209 = _mm_loadu_si128(v2 + 1);
LABEL_12:
        v206 = (__m128i)(unsigned __int64)v3;
        v207 = 0;
        sub_611F00(v11, &v206);
        return;
      case 0x4Du:
        sub_5F9AA0(v2, v3);
        v26 = *(_QWORD *)(v3 + 24);
        if ( v26 > 7 )
          goto LABEL_140;
        return;
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
        sub_5FB6E0(v2, v3);
        return;
      case 0x5Cu:
        v125 = *(_DWORD *)(v3 + 16);
        v126 = *(unsigned __int8 *)(v3 + 3);
        if ( v125 > 1 )
        {
          v127 = v125 - 1;
          v128 = 8 * v127;
          v129 = v127 - (v125 - 2);
          v130 = (unsigned __int8)v126;
          v131 = 8 * v129;
          while ( 1 )
          {
            v126 = v130;
            v132 = *(_QWORD *)(v130 + v3 + 8LL * ((*(_BYTE *)(v3 + 2) & 8) != 0) + 8 + v128);
            if ( v132 )
            {
              sub_5F99B0(v2, v132);
              v130 = *(unsigned __int8 *)(v3 + 3);
              v126 = v130;
            }
            if ( v128 == v131 )
              break;
            v128 -= 8;
          }
        }
        v133 = *(_QWORD *)(v3 + v126);
        if ( v133 )
          sub_5F99B0(v2, v133);
        v50 = *(_QWORD *)(v3 + 8LL * ((*(_BYTE *)(v3 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(v3 + 3));
        if ( v50 )
LABEL_47:
          sub_5F99B0(v2, v50);
        return;
      case 0x5Fu:
        sub_5F9AA0(v2, v3);
        v26 = *(_QWORD *)(v3 + 16);
        if ( (v26 & 4) != 0 && v26 > 7 )
          goto LABEL_140;
        return;
      case 0x60u:
        sub_5F9AA0(v2, v3);
        v26 = *(_QWORD *)(v3 + 16);
        if ( v26 > 7 )
          goto LABEL_140;
        return;
      case 0x61u:
        sub_5F9AA0(v2, v3);
        v26 = *(_QWORD *)(v3 + 16);
        if ( (v26 & 4) != 0 && v26 > 7 )
LABEL_140:
          sub_5FA470(v2, (const __m128i *)(v26 & 0xFFFFFFFFFFFFFFF8LL));
        return;
      case 0x65u:
        v27 = *(const __m128i **)(v3 + 16);
        if ( v27 )
          goto LABEL_180;
        return;
      case 0x67u:
        v134 = *(_QWORD *)(v3 + 64);
        if ( v134 && (v134 & 4) == 0 && (v134 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          sub_5FA470(v2, (const __m128i *)(v134 & 0xFFFFFFFFFFFFFFF8LL));
        v135 = *(const __m128i **)(v3 + 48);
        if ( v135 )
          sub_5FA470(v2, v135);
        if ( *(_QWORD *)(v3 + 32) )
        {
          v136 = _mm_loadu_si128(v2 + 1);
          v137 = v2[2].m128i_i64[0];
          v138 = v2->m128i_i64[1];
          v139 = v2->m128i_i64[0];
          v140 = _mm_loadh_ps((const double *)(v3 + 40));
          v207 = 0;
          v210 = v137;
          v208 = v138;
          v211 = 8;
          v209 = v136;
          v206 = (__m128i)v140;
          sub_611F00(v139, &v206);
        }
        v141 = *(_QWORD *)(v3 + 16);
        if ( v141 )
          goto LABEL_218;
        return;
      case 0x6Bu:
        v142 = *(_BYTE *)(v3 + 2);
        if ( v142 < 0 )
        {
          v143 = *(_QWORD *)(v3 + 8LL * ((v142 & 0x10) != 0) + 56);
          if ( v143 )
          {
            sub_5F99B0(v2, v143);
            v142 = *(_BYTE *)(v3 + 2);
          }
        }
        if ( (v142 & 0x10) != 0 )
        {
          v144 = *(_QWORD *)(v3 + 56);
          if ( v144 )
            sub_5F99B0(v2, v144);
        }
        v145 = *(const __m128i **)(v3 + 32);
        if ( v145 )
          sub_5FA470(v2, v145);
        v146 = *(_DWORD *)(v3 + 4);
        if ( v146 )
        {
          v147 = (unsigned int)(v146 - 1);
          do
          {
            v148 = *(_QWORD *)(v3
                             + 8 * (v147 + ((unsigned int)*(char *)(v3 + 2) >> 31) + ((*(_BYTE *)(v3 + 2) & 0x10) != 0))
                             + 56);
            if ( v148 )
              sub_5F99B0(v2, v148);
          }
          while ( v147-- != 0 );
        }
        return;
      case 0x6Eu:
        if ( (*(_BYTE *)(v3 + 2) & 0x10) != 0 && *(_DWORD *)(v3 + 72) )
        {
          v183 = *(unsigned int *)(v3 + 84);
          v184 = v2[2].m128i_i64[0];
          v211 = 7;
          v185 = v2->m128i_i64[1];
          v186 = _mm_loadu_si128(v2 + 1);
          v206.m128i_i64[0] = v3 + 88;
          v187 = v2->m128i_i64[0];
          v210 = v184;
          v208 = v185;
          v206.m128i_i64[1] = v3 + 88 + 32 * v183;
          v207 = 0;
          v209 = v186;
          sub_611F00(v187, &v206);
        }
        v150 = v2->m128i_i64[0];
        v151 = v2[2].m128i_i64[0];
        v211 = 9;
        v152 = v2->m128i_i64[1];
        v153 = _mm_loadu_si128(v2 + 1);
        v206 = (__m128i)(unsigned __int64)v3;
        v210 = v151;
        v208 = v152;
        v207 = 0;
        v209 = v153;
        v154 = *(unsigned int *)(v150 + 8);
        v155 = v154 + 1;
        if ( *(unsigned int *)(v150 + 12) < (unsigned __int64)(v154 + 1) )
        {
          v193 = *(_QWORD *)v150;
          v194 = v150 + 16;
          if ( (unsigned __int64)&v206 < *(_QWORD *)v150 || (unsigned __int64)&v206 >= v193 + (v154 << 6) )
          {
            sub_25D6060(v150, v194, v155, 64);
            v154 = *(unsigned int *)(v150 + 8);
            v156 = *(_QWORD *)v150;
            v157 = &v206;
          }
          else
          {
            sub_25D6060(v150, v194, v155, 64);
            v156 = *(_QWORD *)v150;
            v154 = *(unsigned int *)(v150 + 8);
            v157 = (__m128i *)((char *)&v206 + *(_QWORD *)v150 - v193);
          }
        }
        else
        {
          v156 = *(_QWORD *)v150;
          v157 = &v206;
        }
        v158 = (__m128i *)((v154 << 6) + v156);
        *v158 = _mm_loadu_si128(v157);
        v158[1] = _mm_loadu_si128(v157 + 1);
        v158[2] = _mm_loadu_si128(v157 + 2);
        v158[3] = _mm_loadu_si128(v157 + 3);
        ++*(_DWORD *)(v150 + 8);
        if ( *(_QWORD *)(v3 + 32) )
        {
          v159 = v2->m128i_i64[1];
          v160 = v2->m128i_i64[0];
          v161 = _mm_loadu_si128(v2 + 1);
          v162 = v2[2].m128i_i64[0];
          v163 = _mm_loadh_ps((const double *)(v3 + 40));
          v211 = 8;
          v208 = v159;
          v210 = v162;
          v207 = 0;
          v209 = v161;
          v206 = (__m128i)v163;
          sub_611F00(v160, &v206);
        }
        v164 = *(_QWORD *)(v3 + 16);
        if ( v164 )
        {
          if ( !(unsigned __int8)sub_8123C0(v164) )
          {
            v141 = *(_QWORD *)(v3 + 16);
            if ( v141 )
              goto LABEL_218;
          }
        }
        return;
      case 0x71u:
        return;
      case 0x73u:
        sub_5F9AA0(v2, v3);
        v27 = *(const __m128i **)(v3 + 40);
        if ( v27 )
LABEL_180:
          sub_5FA470(v2, v27);
        return;
      case 0x74u:
        sub_5F9AA0(v2, v3);
        return;
      case 0x76u:
        sub_5FA560(v2, *(_QWORD *)(v3 + 16));
        return;
      default:
        goto LABEL_8;
    }
    break;
  }
LABEL_91:
  while ( v86 != v87 )
  {
    while ( 1 )
    {
      v88 = *(_DWORD *)(v87 - 24);
      v87 -= 24;
      if ( !v88 )
        break;
      if ( v88 == 1 )
      {
        v91 = sub_81B3D0(v3, v87);
        if ( !v91 )
          goto LABEL_91;
      }
      else
      {
        v89 = sub_81B3F0(v3, v87);
        if ( v89 )
          sub_5F99B0(v2, v89);
        v90 = sub_81B3E0(v3, v87);
        if ( !v90 )
          goto LABEL_91;
        v91 = v90;
      }
      sub_5F99B0(v2, v91);
      if ( v86 == v87 )
        return;
    }
    v166 = *(_QWORD *)(v87 + 8);
    if ( (v166 & 1) == 0 && v166 )
    {
      v167 = _mm_cvtsi32_si128(*(_DWORD *)(v87 + 20));
      v168 = _mm_loadu_si128(v2 + 1);
      v169 = v2[2].m128i_i64[0];
      v170 = (__m128i)v166;
      v171 = v2->m128i_i64[0];
      v211 = 10;
      v172 = v2->m128i_i64[1];
      v207 = 0;
      v210 = v169;
      v208 = v172;
      v209 = v168;
      v206 = _mm_unpacklo_epi64(v170, v167);
      sub_611F00(v171, &v206);
    }
  }
}

