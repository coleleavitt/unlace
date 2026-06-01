__int64 __fastcall sub_10C680(__int64 a1, __m128i *a2, __int64 a3, unsigned __int8 *a4, unsigned __int64 a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // rax
  const __m128i *v8; // rsi
  unsigned __int64 v9; // rax
  const __m128i *v10; // rax
  unsigned int v11; // eax
  unsigned __int64 *v12; // rdx
  unsigned __int64 *v13; // rdx
  __m128i *v14; // r15
  int v15; // r14d
  unsigned __int16 *v16; // rdi
  int v17; // r8d
  unsigned __int64 v18; // r9
  __int16 *v19; // rsi
  int v20; // r10d
  __int16 *v21; // rcx
  signed __int64 v22; // r13
  __int64 v23; // rbp
  int v24; // edx
  __int64 v25; // rax
  unsigned __int16 v26; // bx
  unsigned __int8 v27; // di
  unsigned __int8 v28; // r11
  unsigned __int8 v29; // si
  unsigned __int8 v30; // cl
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rax
  int v34; // eax
  char v35; // r10
  int v36; // eax
  char v37; // di
  unsigned int v38; // eax
  unsigned int v39; // ecx
  unsigned __int64 *v40; // rsi
  const __m128i *v41; // rsi
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rdi
  __int8 *v44; // rcx
  size_t v45; // r12
  __int8 *v46; // rdx
  const __m128i *v47; // rax
  signed __int64 v48; // rbp
  const void *v49; // rsi
  char *v50; // rcx
  __int8 *v51; // r13
  const __m128i *v52; // rax
  __m128i *v53; // rcx
  __m128i v54; // xmm0
  size_t v55; // rbx
  size_t v56; // rax
  __m128i *v57; // rdi
  unsigned __int64 v59; // rdx
  __m128i *v60; // rdi
  _BOOL8 v61; // rbx
  unsigned __int64 v62; // rax
  unsigned int v63; // eax
  unsigned __int64 *v64; // r11
  __m128i *v65; // rdx
  const __m128i *v66; // rsi
  __m128i v67; // xmm6
  __int8 *v68; // rdx
  __int64 *v69; // rdi
  __int8 *v70; // rsi
  __int64 v71; // rax
  int v72; // eax
  unsigned __int64 v73; // r10
  __m128i *v74; // rcx
  const __m128i *v75; // rbp
  signed __int64 v76; // rbp
  const void *v77; // rsi
  char *v78; // rax
  char *v79; // rax
  const __m128i *v80; // rbp
  __m128i *v81; // rcx
  __m128i v82; // xmm7
  int v83; // r14d
  unsigned __int16 *v84; // r8
  int v85; // r9d
  unsigned __int64 v86; // rcx
  __int16 *v87; // rdi
  int v88; // r10d
  __int16 *v89; // rsi
  signed __int64 v90; // rbx
  __int64 v91; // r12
  int v92; // edx
  __int64 v93; // rax
  unsigned __int16 v94; // bp
  unsigned __int8 v95; // r8
  unsigned __int8 v96; // di
  unsigned __int8 v97; // si
  unsigned __int64 v98; // rbp
  unsigned __int64 v99; // rbp
  unsigned __int64 v100; // rax
  int v101; // eax
  char v102; // r10
  int v103; // eax
  char v104; // r8
  unsigned int v105; // eax
  unsigned int v106; // esi
  unsigned __int64 *v107; // rdi
  __m128i *v108; // r8
  const __m128i *v109; // rax
  unsigned __int64 v110; // rdx
  const __m128i *v111; // r13
  signed __int64 v112; // r13
  const void *v113; // rsi
  char *v114; // rax
  char *v115; // rbx
  const __m128i *v116; // r13
  __m128i *v117; // r8
  __m128i v118; // xmm3
  _DWORD *v119; // rax
  __int64 v120; // r9
  __int64 v121; // r10
  _BOOL8 v122; // rbp
  unsigned __int64 v123; // rax
  unsigned __int64 v124; // rdx
  unsigned int v125; // eax
  unsigned __int64 *v126; // r10
  __m128i *v127; // rcx
  const __m128i *v128; // rax
  __m128i v129; // xmm3
  __int32 *v130; // r13
  char *v131; // rax
  __int64 *v132; // rdx
  char *v133; // rcx
  __int64 v134; // rsi
  __m128i *v135; // rcx
  const __m128i *v136; // rax
  __m128i v137; // xmm5
  unsigned __int64 v138; // r13
  __m128i *v139; // rdx
  const __m128i *v140; // rsi
  __m128i v141; // xmm4
  __m128i *v142; // r8
  const __m128i *v143; // r13
  __m128i v144; // xmm4
  __int32 *v145; // rbp
  char *v146; // rax
  __int64 *v147; // rdx
  char *v148; // rsi
  __int64 v149; // rcx
  __m128i *v150; // rcx
  const __m128i *v151; // rbp
  __m128i v152; // xmm3
  unsigned __int64 v153; // [rsp+8h] [rbp-180h]
  const __m128i *v154; // [rsp+10h] [rbp-178h]
  __int64 v156; // [rsp+20h] [rbp-168h]
  unsigned __int16 v158; // [rsp+28h] [rbp-160h]
  int v159; // [rsp+28h] [rbp-160h]
  unsigned __int16 v160; // [rsp+28h] [rbp-160h]
  signed __int64 v161; // [rsp+28h] [rbp-160h]
  unsigned __int16 v162; // [rsp+30h] [rbp-158h]
  signed __int64 v163; // [rsp+30h] [rbp-158h]
  unsigned __int16 v164; // [rsp+30h] [rbp-158h]
  __int64 v166; // [rsp+40h] [rbp-148h]
  unsigned __int64 v167; // [rsp+48h] [rbp-140h]
  unsigned int v168; // [rsp+54h] [rbp-134h]
  unsigned int v169; // [rsp+54h] [rbp-134h]
  int v170[2]; // [rsp+68h] [rbp-120h] BYREF
  unsigned __int64 v171; // [rsp+70h] [rbp-118h]
  size_t n; // [rsp+78h] [rbp-110h]
  __int64 v173; // [rsp+80h] [rbp-108h]
  unsigned __int64 v174; // [rsp+90h] [rbp-F8h]
  size_t v175; // [rsp+98h] [rbp-F0h]
  __int64 v176; // [rsp+A0h] [rbp-E8h]
  unsigned __int64 v177; // [rsp+B0h] [rbp-D8h]
  size_t v178; // [rsp+B8h] [rbp-D0h]
  __int64 v179; // [rsp+C0h] [rbp-C8h]
  unsigned __int64 v180; // [rsp+D0h] [rbp-B8h] BYREF
  __int64 v181; // [rsp+D8h] [rbp-B0h]
  unsigned __int64 *v182; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 *v183; // [rsp+E8h] [rbp-A0h]
  unsigned __int8 *v184; // [rsp+F0h] [rbp-98h]
  __int64 v185; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v186; // [rsp+100h] [rbp-88h] BYREF
  unsigned __int64 v187; // [rsp+108h] [rbp-80h] BYREF
  __int64 v188; // [rsp+110h] [rbp-78h] BYREF
  unsigned __int64 v189; // [rsp+118h] [rbp-70h] BYREF
  __int64 v190; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v191; // [rsp+128h] [rbp-60h]
  unsigned __int64 v192; // [rsp+130h] [rbp-58h]
  unsigned __int64 v193; // [rsp+138h] [rbp-50h]
  unsigned __int64 v194; // [rsp+148h] [rbp-40h]

  v6 = (_DWORD *)a1;
  v194 = __readfsqword(0x28u);
  v7 = (__int64)a2->m128i_i64 + a3;
  if ( a3 <= 0 )
    v7 = (__int64)a2;
  v8 = *(const __m128i **)(a1 + 30120);
  v156 = v7;
  v9 = *(_QWORD *)(a1 + 30360);
  *(_QWORD *)v170 = v8;
  v153 = v9;
  if ( !a6 )
  {
    v14 = a2;
LABEL_41:
    v55 = v153 - (_QWORD)v8;
    v56 = v156 - (_QWORD)v14;
    if ( v6[7592] == 2 )
    {
      if ( v55 <= v56 )
      {
        if ( v14 )
        {
          v60 = v14;
          v14 = (__m128i *)((char *)v14 + v55);
          memmove(v60, v8, v153 - (_QWORD)v8);
        }
        v8 = (const __m128i *)(v6 + 7593);
        v6[7592] = 0;
        v55 = 0x10000;
        *(_QWORD *)v170 = v6 + 7593;
        if ( (unsigned __int64)(v156 - (_QWORD)v14) >= 0x10000 )
          goto LABEL_43;
      }
    }
    else if ( v55 <= v56 )
    {
LABEL_43:
      if ( v14 )
      {
        v57 = v14;
        v14 = (__m128i *)((char *)v14 + v55);
        memcpy(v57, v8, v55);
      }
      return (char *)v14 - (char *)a2;
    }
    return -70;
  }
  v10 = *(const __m128i **)(a1 + 29896);
  *(_DWORD *)(a1 + 30004) = 1;
  v154 = v10;
  v166 = *(_QWORD *)(a1 + 29904);
  v167 = *(_QWORD *)(a1 + 29912);
  v191 = *(unsigned int *)(a1 + 26684);
  v192 = *(unsigned int *)(a1 + 26688);
  v193 = *(unsigned int *)(a1 + 26692);
  if ( !a5 )
    return -20;
  v183 = a4;
  v184 = a4 + 8;
  v11 = a4[a5 - 1];
  v59 = *a4;
  v182 = (unsigned __int64 *)a4;
  v180 = v59;
  switch ( a5 )
  {
    case 1uLL:
      goto LABEL_53;
    case 2uLL:
      goto LABEL_52;
    case 3uLL:
      goto LABEL_51;
    case 4uLL:
      goto LABEL_50;
    case 5uLL:
      goto LABEL_49;
    case 6uLL:
      goto LABEL_48;
    case 7uLL:
      v59 += (unsigned __int64)a4[6] << 48;
LABEL_48:
      v59 += (unsigned __int64)a4[5] << 40;
LABEL_49:
      v59 += (unsigned __int64)a4[4] << 32;
LABEL_50:
      v59 += (unsigned __int64)a4[3] << 24;
LABEL_51:
      v59 += (unsigned __int64)a4[2] << 16;
LABEL_52:
      v180 = ((unsigned __int64)a4[1] << 8) + v59;
LABEL_53:
      if ( !(_BYTE)v11 )
        return -20;
      LODWORD(v181) = __lzcnt(v11) - 8 * a5 + 41;
LABEL_8:
      sub_10BAF0(&v185, &v186, &v180, *(_QWORD *)a1);
      sub_10BAF0((__int64 *)&v187, &v188, v12, *(_QWORD *)(a1 + 16));
      sub_10BAF0((__int64 *)&v189, &v190, v13, *(_QWORD *)(a1 + 8));
      v14 = a2;
      v15 = a6;
      break;
    default:
      v182 = (unsigned __int64 *)&a4[a5 - 8];
      v180 = *v182;
      if ( !(_BYTE)v11 )
        return -20;
      LODWORD(v181) = __lzcnt(v11) - 23;
      if ( a5 > 0xFFFFFFFFFFFFFF88LL )
        return -20;
      goto LABEL_8;
  }
  do
  {
    v16 = (unsigned __int16 *)(v186 + 8 * v185);
    v17 = *((unsigned __int8 *)v16 + 2);
    v18 = *((unsigned int *)v16 + 1);
    v19 = (__int16 *)(v190 + 8 * v189);
    v20 = *((unsigned __int8 *)v19 + 2);
    v21 = (__int16 *)(v188 + 8 * v187);
    v22 = *((unsigned int *)v19 + 1);
    v23 = *v16;
    v24 = *((unsigned __int8 *)v21 + 2);
    v25 = *((unsigned int *)v21 + 1);
    v158 = *v19;
    v26 = *v21;
    v27 = *((_BYTE *)v16 + 3);
    v28 = v24 + v17 + v20;
    v29 = *((_BYTE *)v19 + 3);
    v30 = *((_BYTE *)v21 + 3);
    v162 = v26;
    if ( (unsigned __int8)v24 > 1u )
    {
      v31 = v180 << v181;
      LODWORD(v181) = v181 + v24;
      v32 = v25 + (v31 >> -(char)v24);
      v193 = v192;
      v33 = v191;
      v191 = v32;
      v192 = v33;
      goto LABEL_11;
    }
    v61 = (_DWORD)v18 == 0;
    if ( (_BYTE)v24 )
    {
      v124 = v61 + (_DWORD)v25 + (v180 << v181 >> 63);
      LODWORD(v181) = v181 + 1;
      if ( v124 == 3 )
      {
        v32 = v191 - 1 - (v191 == 1);
      }
      else
      {
        v32 = *(&v191 + v124) - (*(&v191 + v124) == 0);
        if ( v124 == 1 )
        {
LABEL_137:
          v192 = v191;
          v191 = v32;
LABEL_11:
          if ( (_BYTE)v20 )
            goto LABEL_64;
          goto LABEL_12;
        }
      }
      v193 = v192;
      goto LABEL_137;
    }
    v32 = *(&v181 + v61 + 10);
    v62 = *(&v181 + ((_DWORD)v18 != 0) + 10);
    v191 = v32;
    v192 = v62;
    if ( (_BYTE)v20 )
    {
LABEL_64:
      v22 += v180 << v181 >> -(char)v20;
      LODWORD(v181) = v181 + v20;
      if ( v28 <= 0x1Eu )
        goto LABEL_13;
      goto LABEL_65;
    }
LABEL_12:
    if ( v28 <= 0x1Eu )
      goto LABEL_13;
LABEL_65:
    v63 = v181;
    if ( (unsigned int)v181 > 0x40 )
    {
      v182 = (unsigned __int64 *)qword_136680;
    }
    else if ( v182 >= (unsigned __int64 *)v184 )
    {
      LODWORD(v181) = v181 & 7;
      v182 = (unsigned __int64 *)((char *)v182 - (v63 >> 3));
      v180 = *v182;
    }
    else if ( v182 != (unsigned __int64 *)v183 )
    {
      v168 = (unsigned int)v181 >> 3;
      v64 = (unsigned __int64 *)((char *)v182 - ((unsigned int)v181 >> 3));
      if ( v183 > (unsigned __int8 *)v64 )
      {
        v168 = (_DWORD)v182 - (_DWORD)v183;
        v64 = (unsigned __int64 *)((char *)v182 - (unsigned int)((_DWORD)v182 - (_DWORD)v183));
      }
      v182 = v64;
      LODWORD(v181) = v181 - 8 * v168;
      v180 = *v64;
    }
LABEL_13:
    if ( (_BYTE)v17 )
    {
      v18 += v180 << v181 >> -(char)v17;
      LODWORD(v181) = v181 + v17;
    }
    if ( v15 != 1 )
    {
      v34 = v181 + v27;
      v35 = 64 - v34;
      v36 = v29 + v34;
      v185 = v23 + ((v180 >> v35) & ~(-1LL << v27));
      v37 = 64 - v36;
      v38 = v30 + v36;
      LODWORD(v181) = v38;
      v189 = v158 + ((v180 >> v37) & ~(-1LL << v29));
      v187 = v162 + ((v180 >> (64 - (unsigned __int8)v38)) & ~(-1LL << v30));
      if ( v38 > 0x40 )
      {
        v182 = (unsigned __int64 *)qword_136680;
      }
      else if ( v182 >= (unsigned __int64 *)v184 )
      {
        LODWORD(v181) = v38 & 7;
        v182 = (unsigned __int64 *)((char *)v182 - (v38 >> 3));
        v180 = *v182;
      }
      else if ( v182 != (unsigned __int64 *)v183 )
      {
        v39 = v38 >> 3;
        v40 = (unsigned __int64 *)((char *)v182 - (v38 >> 3));
        if ( v183 > (unsigned __int8 *)v40 )
        {
          v39 = (_DWORD)v182 - (_DWORD)v183;
          v40 = (unsigned __int64 *)((char *)v182 - (unsigned int)((_DWORD)v182 - (_DWORD)v183));
        }
        v182 = v40;
        LODWORD(v181) = v38 - 8 * v39;
        v180 = *v40;
      }
    }
    v41 = *(const __m128i **)v170;
    v42 = *(_QWORD *)(a1 + 30360);
    v43 = *(_QWORD *)v170 + v18;
    if ( *(_QWORD *)v170 + v18 > v42 )
    {
      v72 = v15;
      v159 = v15;
      v6 = (_DWORD *)a1;
      if ( v72 <= 0 )
        return -20;
      v73 = v42 - *(_QWORD *)v170;
      if ( v73 )
      {
        v45 = -70;
        if ( v73 > v156 - (__int64)v14 )
          return v45;
        sub_10AE00(v14, *(const __m128i **)v170, v73);
        v18 = v120 - v121;
        v14 = (__m128i *)((char *)v14 + v121);
      }
      v74 = (__m128i *)((char *)v14 + v18);
      v45 = v22 + v18;
      *(_DWORD *)(a1 + 30368) = 0;
      *(_QWORD *)v170 = a1 + 30372;
      v75 = (__m128i *)((char *)v14 + v18 - v32);
      v153 = a1 + 95908;
      if ( v156 - 32 < (unsigned __int64)v14->m128i_u64 + v22 + v18 || a1 + 95908 < v18 + a1 + 30372 )
      {
        v174 = v18;
        v175 = v22;
        v176 = v32;
        v45 = sub_10AFD0((unsigned __int64)v14, v156, (const __m128i **)v170, v153, v154, v166, v18, v22, v32, v167);
      }
      else
      {
        *v14 = _mm_loadu_si128((const __m128i *)(a1 + 30372));
        if ( v18 > 0x10 )
        {
          v14[1] = _mm_loadu_si128((const __m128i *)(a1 + 30388));
          if ( (__int64)(v18 - 16) > 16 )
          {
            v139 = v14 + 2;
            v140 = (const __m128i *)(a1 + 30404);
            do
            {
              v141 = _mm_loadu_si128(v140);
              v139 += 2;
              v140 += 2;
              v139[-2] = v141;
              v139[-1] = _mm_loadu_si128(v140 - 1);
            }
            while ( v74 > v139 );
          }
        }
        *(_QWORD *)v170 = v18 + a1 + 30372;
        if ( v32 <= (char *)v74 - (char *)v154 )
          goto LABEL_94;
        if ( v32 > (unsigned __int64)v74 - v166 )
          return -20;
        v76 = (char *)v75 - (char *)v154;
        v77 = (const void *)(v167 + v76);
        if ( v167 < v167 + v76 + v22 )
        {
          v22 += v76;
          v163 = -v76;
          v78 = (char *)memmove(v74, v77, -v76);
          v75 = v154;
          v74 = (__m128i *)&v78[v163];
LABEL_94:
          if ( v32 <= 0xF )
          {
            if ( v32 > 7 )
            {
              v74->m128i_i64[0] = v75->m128i_i64[0];
            }
            else
            {
              v74->m128i_i8[0] = v75->m128i_i8[0];
              v74->m128i_i8[1] = v75->m128i_i8[1];
              v74->m128i_i8[2] = v75->m128i_i8[2];
              v74->m128i_i8[3] = v75->m128i_i8[3];
              v145 = (__int32 *)((char *)v75->m128i_i32 + *((unsigned int *)qword_136640 + v32));
              v74->m128i_i32[1] = *v145;
              v75 = (const __m128i *)((char *)v145 - *((int *)qword_136660 + v32));
            }
            if ( (unsigned __int64)v22 > 8 )
            {
              v146 = &v74->m128i_i8[8];
              v147 = &v75->m128i_i64[1];
              v148 = &v74->m128i_i8[v22];
              if ( (char *)v74 - (char *)v75 > 15 )
              {
                *(__m128i *)((char *)v74 + 8) = _mm_loadu_si128((const __m128i *)&v75->m128i_u64[1]);
                if ( v22 - 8 > 16 )
                {
                  v150 = (__m128i *)((char *)v74 + 24);
                  v151 = (const __m128i *)((char *)v75 + 24);
                  do
                  {
                    v152 = _mm_loadu_si128(v151);
                    v150 += 2;
                    v151 += 2;
                    v150[-2] = v152;
                    v150[-1] = _mm_loadu_si128(v151 - 1);
                  }
                  while ( v148 > (char *)v150 );
                }
              }
              else
              {
                do
                {
                  v149 = *v147;
                  v146 += 8;
                  ++v147;
                  *((_QWORD *)v146 - 1) = v149;
                }
                while ( v148 > v146 );
              }
            }
          }
          else
          {
            *v74 = _mm_loadu_si128(v75);
            if ( v22 > 16 )
            {
              v79 = &v74->m128i_i8[v22];
              v80 = v75 + 1;
              v81 = v74 + 1;
              do
              {
                v82 = _mm_loadu_si128(v80);
                v81 += 2;
                v80 += 2;
                v81[-2] = v82;
                v81[-1] = _mm_loadu_si128(v80 - 1);
              }
              while ( v79 > (char *)v81 );
            }
          }
          goto LABEL_98;
        }
        memmove(v74, v77, v22);
      }
LABEL_98:
      if ( v45 > 0xFFFFFFFFFFFFFF88LL )
        return v45;
      v14 = (__m128i *)((char *)v14 + v45);
      if ( v159 == 1 )
        goto LABEL_37;
      v83 = v159 - 1;
      while ( 1 )
      {
        v84 = (unsigned __int16 *)(v186 + 8 * v185);
        v85 = *((unsigned __int8 *)v84 + 2);
        v86 = *((unsigned int *)v84 + 1);
        v87 = (__int16 *)(v190 + 8 * v189);
        v88 = *((unsigned __int8 *)v87 + 2);
        v89 = (__int16 *)(v188 + 8 * v187);
        v90 = *((unsigned int *)v87 + 1);
        v91 = *v84;
        v92 = *((unsigned __int8 *)v89 + 2);
        v93 = *((unsigned int *)v89 + 1);
        v160 = *v87;
        v94 = *v89;
        v95 = *((_BYTE *)v84 + 3);
        v96 = *((_BYTE *)v87 + 3);
        v97 = *((_BYTE *)v89 + 3);
        v164 = v94;
        if ( (unsigned __int8)v92 > 1u )
        {
          v98 = v180 << v181;
          LODWORD(v181) = v181 + v92;
          v99 = v93 + (v98 >> -(char)v92);
          v193 = v192;
          v100 = v191;
          v191 = v99;
          v192 = v100;
          goto LABEL_103;
        }
        v122 = (_DWORD)v86 == 0;
        if ( !(_BYTE)v92 )
        {
          v99 = *(&v181 + v122 + 10);
          v123 = *(&v181 + ((_DWORD)v86 != 0) + 10);
          v191 = v99;
          v192 = v123;
          goto LABEL_103;
        }
        v138 = v122 + (_DWORD)v93 + (v180 << v181 >> 63);
        LODWORD(v181) = v181 + 1;
        if ( v138 == 3 )
          break;
        v99 = *(&v191 + v138) - (*(&v191 + v138) == 0);
        if ( v138 != 1 )
          goto LABEL_167;
LABEL_168:
        v192 = v191;
        v191 = v99;
LABEL_103:
        if ( (_BYTE)v88 )
        {
          v90 += v180 << v181 >> -(char)v88;
          LODWORD(v181) = v181 + v88;
        }
        if ( (unsigned __int8)(v92 + v85 + v88) > 0x1Eu )
        {
          v125 = v181;
          if ( (unsigned int)v181 > 0x40 )
          {
            v182 = (unsigned __int64 *)qword_136680;
          }
          else if ( v182 >= (unsigned __int64 *)v184 )
          {
            LODWORD(v181) = v181 & 7;
            v182 = (unsigned __int64 *)((char *)v182 - (v125 >> 3));
            v180 = *v182;
          }
          else if ( v182 != (unsigned __int64 *)v183 )
          {
            v169 = (unsigned int)v181 >> 3;
            v126 = (unsigned __int64 *)((char *)v182 - ((unsigned int)v181 >> 3));
            if ( v183 > (unsigned __int8 *)v126 )
            {
              v169 = (_DWORD)v182 - (_DWORD)v183;
              v126 = (unsigned __int64 *)((char *)v182 - (unsigned int)((_DWORD)v182 - (_DWORD)v183));
            }
            v182 = v126;
            LODWORD(v181) = v181 - 8 * v169;
            v180 = *v126;
          }
        }
        if ( (_BYTE)v85 )
        {
          v86 += v180 << v181 >> -(char)v85;
          LODWORD(v181) = v181 + v85;
        }
        if ( v83 != 1 )
        {
          v101 = v181 + v95;
          v102 = 64 - v101;
          v103 = v96 + v101;
          v185 = v91 + ((v180 >> v102) & ~(-1LL << v95));
          v104 = 64 - v103;
          v105 = v97 + v103;
          LODWORD(v181) = v105;
          v189 = v160 + ((v180 >> v104) & ~(-1LL << v96));
          v187 = v164 + ((v180 >> (64 - (unsigned __int8)v105)) & ~(-1LL << v97));
          if ( v105 > 0x40 )
          {
            v182 = (unsigned __int64 *)qword_136680;
          }
          else if ( v182 >= (unsigned __int64 *)v184 )
          {
            LODWORD(v181) = v105 & 7;
            v182 = (unsigned __int64 *)((char *)v182 - (v105 >> 3));
            v180 = *v182;
          }
          else if ( v182 != (unsigned __int64 *)v183 )
          {
            v106 = v105 >> 3;
            v107 = (unsigned __int64 *)((char *)v182 - (v105 >> 3));
            if ( v183 > (unsigned __int8 *)v107 )
            {
              v106 = (_DWORD)v182 - (_DWORD)v183;
              v107 = (unsigned __int64 *)((char *)v182 - (unsigned int)((_DWORD)v182 - (_DWORD)v183));
            }
            v182 = v107;
            LODWORD(v181) = v105 - 8 * v106;
            v180 = *v107;
          }
        }
        v108 = (__m128i *)((char *)v14 + v86);
        v109 = *(const __m128i **)v170;
        v45 = v86 + v90;
        v110 = *(_QWORD *)v170 + v86;
        v111 = (__m128i *)((char *)v14 + v86 - v99);
        if ( v156 - 32 < (unsigned __int64)v14->m128i_u64 + v86 + v90 || v153 < v110 )
        {
          v177 = v86;
          v178 = v90;
          v179 = v99;
          v45 = sub_10AFD0((unsigned __int64)v14, v156, (const __m128i **)v170, v153, v154, v166, v86, v90, v99, v167);
        }
        else
        {
          *v14 = _mm_loadu_si128(*(const __m128i **)v170);
          if ( v86 > 0x10 )
          {
            v14[1] = _mm_loadu_si128(v109 + 1);
            if ( (__int64)(v86 - 16) > 16 )
            {
              v127 = v14 + 2;
              v128 = v109 + 2;
              do
              {
                v129 = _mm_loadu_si128(v128);
                v127 += 2;
                v128 += 2;
                v127[-2] = v129;
                v127[-1] = _mm_loadu_si128(v128 - 1);
              }
              while ( v108 > v127 );
            }
          }
          *(_QWORD *)v170 = v110;
          if ( v99 <= (char *)v108 - (char *)v154 )
            goto LABEL_122;
          if ( v99 > (unsigned __int64)v108 - v166 )
            return -20;
          v112 = (char *)v111 - (char *)v154;
          v113 = (const void *)(v167 + v112);
          if ( v167 < v167 + v112 + v90 )
          {
            v90 += v112;
            v161 = -v112;
            v114 = (char *)memmove(v108, v113, -v112);
            v111 = v154;
            v108 = (__m128i *)&v114[v161];
LABEL_122:
            if ( v99 <= 0xF )
            {
              if ( v99 > 7 )
              {
                v108->m128i_i64[0] = v111->m128i_i64[0];
              }
              else
              {
                v108->m128i_i8[0] = v111->m128i_i8[0];
                v108->m128i_i8[1] = v111->m128i_i8[1];
                v108->m128i_i8[2] = v111->m128i_i8[2];
                v108->m128i_i8[3] = v111->m128i_i8[3];
                v130 = (__int32 *)((char *)v111->m128i_i32 + *((unsigned int *)qword_136640 + v99));
                v108->m128i_i32[1] = *v130;
                v111 = (const __m128i *)((char *)v130 - *((int *)qword_136660 + v99));
              }
              if ( (unsigned __int64)v90 > 8 )
              {
                v131 = &v108->m128i_i8[8];
                v132 = &v111->m128i_i64[1];
                v133 = &v108->m128i_i8[v90];
                if ( (char *)v108 - (char *)v111 > 15 )
                {
                  *(__m128i *)((char *)v108 + 8) = _mm_loadu_si128((const __m128i *)&v111->m128i_u64[1]);
                  if ( v90 - 8 > 16 )
                  {
                    v142 = (__m128i *)((char *)v108 + 24);
                    v143 = (const __m128i *)((char *)v111 + 24);
                    do
                    {
                      v144 = _mm_loadu_si128(v143);
                      v142 += 2;
                      v143 += 2;
                      v142[-2] = v144;
                      v142[-1] = _mm_loadu_si128(v143 - 1);
                    }
                    while ( v133 > (char *)v142 );
                  }
                }
                else
                {
                  do
                  {
                    v134 = *v132;
                    v131 += 8;
                    ++v132;
                    *((_QWORD *)v131 - 1) = v134;
                  }
                  while ( v133 > v131 );
                }
              }
            }
            else
            {
              *v108 = _mm_loadu_si128(v111);
              if ( v90 > 16 )
              {
                v115 = &v108->m128i_i8[v90];
                v116 = v111 + 1;
                v117 = v108 + 1;
                do
                {
                  v118 = _mm_loadu_si128(v116);
                  v117 += 2;
                  v116 += 2;
                  v117[-2] = v118;
                  v117[-1] = _mm_loadu_si128(v116 - 1);
                }
                while ( v115 > (char *)v117 );
              }
            }
            goto LABEL_126;
          }
          memmove(v108, v113, v90);
        }
LABEL_126:
        if ( v45 > 0xFFFFFFFFFFFFFF88LL )
          return v45;
        v14 = (__m128i *)((char *)v14 + v45);
        if ( !--v83 )
        {
          v6 = (_DWORD *)a1;
          goto LABEL_37;
        }
      }
      v99 = v191 - 1 - (v191 == 1);
LABEL_167:
      v193 = v192;
      goto LABEL_168;
    }
    v44 = &v14->m128i_i8[v18];
    v45 = v18 + v22;
    v46 = (__int8 *)(*(_QWORD *)v170 + v18 - 32);
    v47 = (__m128i *)((char *)v14 + v18 - v32);
    if ( v46 < &v14->m128i_i8[v18 + v22] || v153 < v43 )
    {
      v171 = v18;
      n = v22;
      v173 = v32;
      v45 = sub_10AEC0(v14, v156, v46, (const __m128i **)v170, v153, v154, v18, v22, v32, v166, v167);
    }
    else
    {
      *v14 = _mm_loadu_si128(*(const __m128i **)v170);
      if ( v18 > 0x10 )
      {
        v14[1] = _mm_loadu_si128(v41 + 1);
        if ( (__int64)(v18 - 16) > 16 )
        {
          v65 = v14 + 2;
          v66 = v41 + 2;
          do
          {
            v67 = _mm_loadu_si128(v66);
            v65 += 2;
            v66 += 2;
            v65[-2] = v67;
            v65[-1] = _mm_loadu_si128(v66 - 1);
          }
          while ( v44 > (__int8 *)v65 );
        }
      }
      *(_QWORD *)v170 = v43;
      if ( v32 > v44 - (__int8 *)v154 )
      {
        if ( v32 > (unsigned __int64)&v44[-v166] )
          return -20;
        v48 = (char *)v47 - (char *)v154;
        v49 = (const void *)(v167 + (char *)v47 - (char *)v154);
        if ( v167 >= (unsigned __int64)v49 + v22 )
        {
          memmove(v44, v49, v22);
          goto LABEL_34;
        }
        v22 += v48;
        v50 = (char *)memmove(v44, v49, (char *)v154 - (char *)v47);
        v47 = v154;
        v44 = &v50[-v48];
      }
      if ( v32 <= 0xF )
      {
        if ( v32 <= 7 )
        {
          *v44 = v47->m128i_i8[0];
          v44[1] = v47->m128i_i8[1];
          v44[2] = v47->m128i_i8[2];
          v44[3] = v47->m128i_i8[3];
          v119 = (__int32 *)((char *)v47->m128i_i32 + *((unsigned int *)qword_136640 + v32));
          *((_DWORD *)v44 + 1) = *v119;
          v47 = (const __m128i *)((char *)v119 - *((int *)qword_136660 + v32));
        }
        else
        {
          *(_QWORD *)v44 = v47->m128i_i64[0];
        }
        if ( (unsigned __int64)v22 > 8 )
        {
          v68 = v44 + 8;
          v69 = &v47->m128i_i64[1];
          v70 = &v44[v22];
          if ( v44 - (__int8 *)v47 > 15 )
          {
            *(__m128i *)(v44 + 8) = _mm_loadu_si128((const __m128i *)&v47->m128i_u64[1]);
            if ( v22 - 8 > 16 )
            {
              v135 = (__m128i *)(v44 + 24);
              v136 = (const __m128i *)((char *)v47 + 24);
              do
              {
                v137 = _mm_loadu_si128(v136);
                v135 += 2;
                v136 += 2;
                v135[-2] = v137;
                v135[-1] = _mm_loadu_si128(v136 - 1);
              }
              while ( v70 > (__int8 *)v135 );
            }
          }
          else
          {
            do
            {
              v71 = *v69;
              v68 += 8;
              ++v69;
              *((_QWORD *)v68 - 1) = v71;
            }
            while ( v70 > v68 );
          }
        }
      }
      else
      {
        *(__m128i *)v44 = _mm_loadu_si128(v47);
        if ( v22 > 16 )
        {
          v51 = &v44[v22];
          v52 = v47 + 1;
          v53 = (__m128i *)(v44 + 16);
          do
          {
            v54 = _mm_loadu_si128(v52);
            v53 += 2;
            v52 += 2;
            v53[-2] = v54;
            v53[-1] = _mm_loadu_si128(v52 - 1);
          }
          while ( v51 > (__int8 *)v53 );
        }
      }
    }
LABEL_34:
    if ( v45 > 0xFFFFFFFFFFFFFF88LL )
      return v45;
    v14 = (__m128i *)((char *)v14 + v45);
    --v15;
  }
  while ( v15 );
  v6 = (_DWORD *)a1;
LABEL_37:
  if ( v182 == (unsigned __int64 *)v183 && (_DWORD)v181 == 64 )
  {
    v8 = *(const __m128i **)v170;
    v6[6671] = v191;
    v6[6672] = v192;
    v6[6673] = v193;
    goto LABEL_41;
  }
  return -20;
}

