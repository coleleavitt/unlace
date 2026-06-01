/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47F276
// Address: 0x0047F276

//----- (0047F276) --------------------------------------------------------
int __usercall sub_47F276@<eax>(__m128i a1@<xmm0>, double a2, int a3, int a4, int *a5, _BYTE *a6, int a7)
{
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  int *v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rax
  double v17; // st7
  int v18; // eax
  unsigned __int64 v19; // rdi
  unsigned int v20; // ecx
  int v21; // ecx
  unsigned int v22; // edx
  bool v23; // zf
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int *v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // edx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int *v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // eax
  int v43; // edx
  int v44; // eax
  int v45; // eax
  unsigned int v46; // esi
  unsigned int v47; // edx
  unsigned int v48; // edi
  __int32 v49; // eax
  unsigned int v50; // ecx
  char v51; // bl
  int v52; // ebx
  int v53; // eax
  int v54; // eax
  unsigned int v55; // esi
  unsigned int v56; // edx
  unsigned int v57; // edi
  __int32 v58; // eax
  unsigned int v59; // ecx
  char v60; // bl
  unsigned int v61; // eax
  unsigned int v62; // ecx
  int v63; // ecx
  char v64; // al
  unsigned int v65; // ecx
  unsigned __int64 v66; // rax
  unsigned int v67; // kr04_4
  unsigned __int64 v68; // rax
  unsigned int v69; // eax
  __int32 v70; // ecx
  unsigned __int64 v71; // rax
  bool v72; // cf
  __int32 v73; // edx
  __m128i *v74; // edx
  __m128i *v75; // ecx
  unsigned int v76; // ecx
  int v77; // eax
  int v78; // edx
  int v79; // ecx
  unsigned int v80; // eax
  unsigned __int64 v81; // rax
  int v82; // eax
  unsigned int v83; // ecx
  unsigned __int64 v84; // rax
  __int32 v85; // edx
  unsigned int v86; // eax
  unsigned int v87; // ecx
  int v88; // ecx
  char v89; // al
  unsigned int v90; // ecx
  unsigned __int64 v91; // rax
  unsigned int v92; // kr08_4
  unsigned __int64 v93; // rax
  unsigned int v94; // eax
  __int32 v95; // ecx
  unsigned __int64 v96; // rax
  __int32 v97; // edx
  __m128i *v98; // edx
  __m128i *v99; // ecx
  unsigned int v100; // ecx
  int v101; // eax
  unsigned int v102; // edx
  int v103; // ecx
  unsigned int v104; // eax
  unsigned __int64 v105; // rax
  int v106; // eax
  unsigned int v107; // ecx
  unsigned __int64 v108; // rax
  __int32 v109; // edx
  unsigned int v110; // ecx
  _BYTE *v111; // edi
  int v112; // edi
  __int64 v113; // rax
  __int32 v114; // kr0C_4
  unsigned int v115; // kr10_4
  unsigned __int64 v116; // rax
  int v117; // eax
  _BYTE *v118; // ecx
  unsigned int v119; // eax
  unsigned int v120; // edi
  int v121; // ecx
  __int64 v122; // rax
  int v123; // eax
  unsigned int v124; // edx
  unsigned int v125; // eax
  char v126; // dl
  unsigned int v127; // edi
  int v128; // ecx
  __int64 v129; // rax
  __int32 v130; // kr18_4
  unsigned __int64 v131; // rax
  unsigned int v132; // edi
  unsigned int v133; // eax
  unsigned int v134; // ecx
  char v135; // dl
  unsigned int v136; // eax
  _BYTE v138[460]; // [esp+18h] [ebp-964h] BYREF
  unsigned int v139; // [esp+1E4h] [ebp-798h] BYREF
  unsigned int v140[2]; // [esp+1E8h] [ebp-794h] BYREF
  char v141; // [esp+1F0h] [ebp-78Ch]
  unsigned int v142; // [esp+1F8h] [ebp-784h]
  int *v143; // [esp+1FCh] [ebp-780h]
  unsigned int v144; // [esp+200h] [ebp-77Ch]
  unsigned int v145; // [esp+204h] [ebp-778h]
  unsigned int v146; // [esp+208h] [ebp-774h]
  unsigned int v147; // [esp+20Ch] [ebp-770h]
  unsigned int v148; // [esp+210h] [ebp-76Ch]
  _BYTE *v149; // [esp+214h] [ebp-768h]
  _DWORD *v150; // [esp+218h] [ebp-764h]
  double v151; // [esp+21Ch] [ebp-760h]
  char v152; // [esp+227h] [ebp-755h]
  unsigned int v153; // [esp+228h] [ebp-754h]
  unsigned int v154; // [esp+22Ch] [ebp-750h]
  unsigned int v155; // [esp+230h] [ebp-74Ch]
  unsigned int v156; // [esp+234h] [ebp-748h]
  int v157; // [esp+238h] [ebp-744h]
  _DWORD v158[115]; // [esp+23Ch] [ebp-740h] BYREF
  unsigned int v159; // [esp+408h] [ebp-574h]
  __m128i v160[28]; // [esp+40Ch] [ebp-570h] BYREF
  unsigned int v161; // [esp+5D8h] [ebp-3A4h] BYREF
  __m128i v162; // [esp+5DCh] [ebp-3A0h] BYREF
  unsigned int v163; // [esp+7A8h] [ebp-1D4h] BYREF
  __m128i v164[28]; // [esp+7ACh] [ebp-1D0h] BYREF

  v143 = a5;
  v149 = a6;
  sub_481924(v140);
  v7 = 1;
  if ( (v140[0] & 0x1F) == 0x1F )
  {
    v141 = 0;
  }
  else
  {
    sub_48198C(v140);
    v141 = 1;
  }
  v8 = HIDWORD(a2);
  if ( a2 < 0.0 )
    v9 = 45;
  else
    v9 = 32;
  v10 = v143;
  *v143 = v9;
  v10[2] = (int)v149;
  sub_477EEF(1, 32, &v139, 0, 0);
  if ( (v8 & 0x7FF00000) == 0 && (!(v8 & 0xFFFFF | LODWORD(a2)) || (v139 & 0x1000000) != 0) )
  {
    v143[1] = 0;
    v11 = sub_46C78C(1, 32, v149, a7, (int)"0");
    goto LABEL_11;
  }
  v12 = sub_479B08((int *)&a2);
  if ( v12 )
    v143[1] = 1;
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( sub_46C78C(1, 32, v149, a7, (int)"1#INF") )
      goto LABEL_309;
    goto LABEL_305;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v11 = sub_46C78C(1, 32, v149, a7, (int)"1#QNAN");
LABEL_11:
    if ( !v11 )
      goto LABEL_306;
LABEL_309:
    sub_467F04(1, 32);
    __debugbreak();
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v11 = sub_46C78C(1, 32, v149, a7, (int)"1#SNAN");
    goto LABEL_11;
  }
  if ( v15 == 1 )
  {
    v11 = sub_46C78C(1, 32, v149, a7, (int)"1#IND");
    goto LABEL_11;
  }
  v142 = 0;
  HIDWORD(a2) = v8 & 0x7FFFFFFF;
  v151 = a2;
  v144 = a3 + 1;
  if ( ((HIDWORD(v151) >> 20) & 0x7FF) != 0 )
  {
    v16 = 0x10000000000000LL;
    v154 = 0;
  }
  else
  {
    v16 = 0;
    v154 = 1;
  }
  v145 = v16 + LODWORD(v151);
  v19 = v16 + __PAIR64__(HIDWORD(v151) & 0xFFFFF, LODWORD(v151));
  v156 = ((HIDWORD(v151) >> 20) & 0x7FF) + v154;
  sub_4819E0(*(unsigned __int64 *)&a2);
  v17 = sub_468340(a1);
  v18 = sub_482A20(v17);
  v147 = v18;
  LODWORD(v19) = 32;
  if ( v18 == 0x7FFFFFFF || v18 == 0x80000000 )
    v147 = 0;
  v164[0].m128i_i64[0] = __PAIR64__(HIDWORD(v19), v145);
  v20 = (HIDWORD(v19) != 0) + 1;
  v150 = (_DWORD *)v20;
  v163 = v20;
  if ( v156 < 0x433 )
  {
    if ( v156 != 53 )
    {
      v160[0].m128i_i64[0] = 0x10000000000000LL;
      v159 = 2;
      if ( HIDWORD(v19) )
      {
        v43 = 0;
        while ( v160[0].m128i_i32[v43] == v164[0].m128i_i32[v43] )
        {
          if ( ++v43 == 2 )
          {
            v23 = !_BitScanReverse((unsigned int *)&v44, HIDWORD(v19));
            HIDWORD(v151) = 0;
            if ( v23 )
              v45 = 0;
            else
              v45 = v44 + 1;
            v46 = v20 + ((unsigned int)(32 - v45) < 2);
            if ( v46 <= 0x73 )
            {
              v47 = v46 - 1;
              if ( v46 )
              {
                v48 = v46 - 2;
                while ( 1 )
                {
                  v49 = v47 >= v20 ? 0 : v164[0].m128i_i32[v47];
                  v50 = v48 >= v20 ? 0 : *(&v163 + v47);
                  v164[0].m128i_i32[v47--] = (4 * v49) | (v50 >> 30);
                  --v48;
                  if ( v47 == -1 )
                    break;
                  v20 = v163;
                }
              }
              v163 = v46;
            }
            else
            {
              v159 = 0;
              v163 = 0;
              sub_471A66(0, 32 - v45, v164, 0x1CCu, (unsigned int)v160, 0);
            }
            v51 = 53 - v156;
            LODWORD(v19) = (1077 - v156) >> 5;
            sub_464890(v160, 0, 4 * v19);
            v52 = v51 & 0x1F;
            v160[0].m128i_i32[v19] = 1 << v52;
            goto LABEL_112;
          }
        }
      }
    }
    HIDWORD(v151) = 0;
    v23 = !_BitScanReverse((unsigned int *)&v53, v164[0].m128i_u32[HIDWORD(v19) != 0]);
    if ( v23 )
      v54 = 0;
    else
      v54 = v53 + 1;
    v55 = v20 + (v54 == 32);
    if ( v55 <= 0x73 )
    {
      v56 = v55 - 1;
      if ( v55 )
      {
        v57 = v55 - 2;
        while ( 1 )
        {
          v58 = v56 >= v20 ? 0 : v164[0].m128i_i32[v56];
          v59 = v57 >= v20 ? 0 : *(&v163 + v56);
          v164[0].m128i_i32[v56--] = (2 * v58) | (v59 >> 31);
          --v57;
          if ( v56 == -1 )
            break;
          v20 = v163;
        }
      }
      v163 = v55;
    }
    else
    {
      v159 = 0;
      v163 = 0;
      sub_471A66(1, 32 - v54, v164, 0x1CCu, (unsigned int)v160, 0);
    }
    v60 = 52 - v156;
    LODWORD(v19) = (1076 - v156) >> 5;
    sub_464890(v160, 0, 4 * v19);
    v52 = v60 & 0x1F;
    v160[0].m128i_i32[v19] = 1 << v52;
LABEL_112:
    v159 = v19 + 1;
    v161 = v19 + 1;
    sub_471A66(v52, v19, &v162, 0x1CCu, (unsigned int)v160, 4 * (v19 + 1));
    v7 = 1;
  }
  else
  {
    v160[0].m128i_i64[0] = 0x10000000000000LL;
    v159 = 2;
    if ( HIDWORD(v19) )
    {
      v21 = 0;
      while ( v160[0].m128i_i32[v21] == v164[0].m128i_i32[v21] )
      {
        if ( ++v21 == 2 )
        {
          v153 = (v156 - 1073) >> 5;
          v148 = (v156 - 1073) & 0x1F;
          v155 = 32 - v148;
          v24 = sub_4634C0(1, 32 - ((v156 - 49) & 0x1F));
          v22 = (unsigned int)v150;
          HIDWORD(v151) = 0;
          v146 = v24 - 1;
          v145 = ~(v24 - 1);
          v23 = !_BitScanReverse((unsigned int *)&v24, *(&v163 + (_DWORD)v150));
          if ( v23 )
            v154 = 0;
          else
            v154 = v24 + 1;
          v25 = v153;
          if ( (unsigned int)v150 + v153 > 0x73
            || (LODWORD(v19) = 32 - v154,
                v26 = (unsigned int)v150 + v153 + (32 - v154 < v148),
                HIDWORD(v151) = v26,
                v26 > 0x73) )
          {
            v159 = 0;
            v163 = 0;
            sub_471A66(1, v19, v164, 0x1CCu, (unsigned int)v160, 0);
          }
          else
          {
            LODWORD(v19) = v153 - 1;
            v27 = v26 - 1;
            v142 = v153 - 1;
            v156 = v27;
            if ( v27 != v153 - 1 )
            {
              LODWORD(v19) = v27 - v153;
              v28 = &v163 + v27 - v153;
              v150 = v28;
              while ( 1 )
              {
                v29 = (unsigned int)v19 >= v22 ? 0 : v28[1];
                v154 = v29;
                v30 = (int)v19 - 1 >= v22 ? 0 : *v28;
                v31 = v156;
                v164[0].m128i_i32[v156] = ((v146 & v154) << v148) | ((v145 & v30) >> v155);
                v32 = v31 - 1;
                v28 = v150 - 1;
                v156 = v32;
                LODWORD(v19) = v19 - 1;
                --v150;
                if ( v32 == v142 )
                  break;
                v22 = v163;
              }
              v25 = v153;
            }
            if ( v25 )
            {
              memset(v164, 0, 4 * v25);
              LODWORD(v19) = (char *)v164 + 4 * v25;
            }
            v163 = HIDWORD(v151);
          }
          v160[0].m128i_i32[0] = 4;
          goto LABEL_51;
        }
      }
    }
    v148 = (v156 - 1074) >> 5;
    v154 = (v156 - 1074) & 0x1F;
    v142 = 32 - v154;
    v34 = sub_4634C0(1, 32 - ((v156 - 50) & 0x1F));
    v33 = (unsigned int)v150;
    v155 = 0;
    v145 = v34 - 1;
    HIDWORD(v151) = ~(v34 - 1);
    v23 = !_BitScanReverse((unsigned int *)&v34, *(&v163 + (_DWORD)v150));
    if ( v23 )
      v153 = 0;
    else
      v153 = v34 + 1;
    v35 = v148;
    if ( (unsigned int)v150 + v148 > 0x73
      || (LODWORD(v19) = 32 - v153, v36 = (unsigned int)v150 + v148 + (32 - v153 < v154), v146 = v36, v36 > 0x73) )
    {
      v159 = 0;
      v163 = 0;
      sub_471A66(1, v19, v164, 0x1CCu, (unsigned int)v160, 0);
    }
    else
    {
      LODWORD(v19) = v148 - 1;
      v37 = v36 - 1;
      v155 = v148 - 1;
      v156 = v37;
      if ( v37 != v148 - 1 )
      {
        LODWORD(v19) = v37 - v148;
        v38 = &v163 + v37 - v148;
        v150 = v38;
        while ( 1 )
        {
          v39 = (unsigned int)v19 >= v33 ? 0 : v38[1];
          v153 = v39;
          v40 = (int)v19 - 1 >= v33 ? 0 : *v38;
          v41 = v156;
          v164[0].m128i_i32[v156] = ((v145 & v153) << v154) | ((HIDWORD(v151) & v40) >> v142);
          v42 = v41 - 1;
          v38 = v150 - 1;
          v156 = v42;
          LODWORD(v19) = v19 - 1;
          --v150;
          if ( v42 == v155 )
            break;
          v33 = v163;
        }
        v35 = v148;
      }
      if ( v35 )
      {
        memset(v164, 0, 4 * v35);
        LODWORD(v19) = (char *)v164 + 4 * v35;
      }
      v163 = v146;
    }
    v160[0].m128i_i32[0] = 2;
LABEL_51:
    v160[0].m128i_i32[1] = 0;
    v161 = 1;
    v159 = 1;
    sub_471A66(1, v19, &v162, 0x1CCu, (unsigned int)v160, 4u);
  }
  v145 = 10;
  if ( (v147 & 0x80000000) == 0 )
  {
    v61 = v147 / 0xA;
    v155 = v147 / 0xA;
    v62 = v147 % 0xA;
    v142 = v147 % 0xA;
    if ( v147 / 0xA )
    {
      while ( 1 )
      {
        if ( v61 > 0x26 )
          v61 = 38;
        v63 = (unsigned __int8)byte_4A625E[4 * v61];
        HIDWORD(v19) = (unsigned __int8)byte_4A625F[4 * v61];
        v154 = v61;
        LODWORD(v19) = 4 * v63;
        v159 = v63 + HIDWORD(v19);
        sub_464890(v160, 0, 4 * v63);
        sub_464310(
          (unsigned int)v160 + v19,
          (unsigned int)&dword_4A5958[(unsigned __int16)word_4A625C[2 * v154]],
          4 * HIDWORD(v19));
        LODWORD(v19) = v159;
        if ( v159 <= 1 )
        {
          LODWORD(v19) = v160[0].m128i_i32[0];
          if ( v160[0].m128i_i32[0] )
          {
            if ( v160[0].m128i_i32[0] != 1 )
            {
              if ( v161 )
              {
                v65 = 0;
                HIDWORD(v151) = v161;
                HIDWORD(v19) = 0;
                do
                {
                  v66 = v162.m128i_u32[HIDWORD(v19)] * (unsigned __int64)(unsigned int)v19;
                  v67 = v162.m128i_i32[HIDWORD(v19)] * v19;
                  v162.m128i_i32[HIDWORD(v19)] = v65 + v67;
                  v68 = __PAIR64__(HIDWORD(v66), v65) + v67;
                  ++HIDWORD(v19);
                  v65 = HIDWORD(v68);
                }
                while ( HIDWORD(v19) != HIDWORD(v151) );
                if ( HIDWORD(v68) )
                {
                  if ( v161 >= 0x73 )
                  {
                    v159 = 0;
                    v161 = 0;
                    sub_471A66(1, v19, &v162, 0x1CCu, (unsigned int)v160, 0);
                    v64 = 0;
                    goto LABEL_168;
                  }
                  v162.m128i_i32[v161++] = HIDWORD(v68);
                }
              }
            }
          }
          else
          {
            v157 = 0;
            v161 = 0;
            sub_471A66(1, 0, &v162, 0x1CCu, (unsigned int)v158, 0);
          }
          v64 = 1;
          goto LABEL_168;
        }
        if ( v161 > 1 )
        {
          v74 = v160;
          if ( v159 >= v161 )
            v74 = &v162;
          v148 = (unsigned int)v74;
          v75 = &v162;
          if ( v159 >= v161 )
            v75 = v160;
          v153 = (unsigned int)v75;
          if ( v159 >= v161 )
          {
            v76 = v161;
            v146 = v161;
          }
          else
          {
            v76 = v159;
            v146 = v159;
          }
          if ( v159 < v161 )
            LODWORD(v19) = v161;
          v77 = 0;
          HIDWORD(v19) = 0;
          v157 = 0;
          while ( 1 )
          {
            if ( v74->m128i_i32[HIDWORD(v19)] )
            {
              v78 = 0;
              v79 = HIDWORD(v19);
              v156 = 0;
              v150 = nullptr;
              if ( (_DWORD)v19 )
              {
                do
                {
                  if ( v79 == 115 )
                    break;
                  if ( v79 == v77 )
                  {
                    v80 = v156;
                    v158[v79] = 0;
                    v157 = HIDWORD(v19) + v80 + 1;
                  }
                  v81 = (unsigned __int64)v150
                      + *(unsigned int *)(v148 + 4 * HIDWORD(v19))
                      * (unsigned __int64)*(unsigned int *)(v153 + 4 * v156);
                  v72 = __CFADD__((_DWORD)v81, v158[v79]);
                  v158[v79] += v81;
                  v78 = v72 + HIDWORD(v81);
                  ++v79;
                  ++v156;
                  v150 = (_DWORD *)v78;
                  v77 = v157;
                }
                while ( v156 != (_DWORD)v19 );
                while ( v78 )
                {
                  if ( v79 == 115 )
                    goto LABEL_174;
                  if ( v79 == v77 )
                  {
                    v158[v79] = 0;
                    v157 = v79 + 1;
                  }
                  v72 = __CFADD__(v78, v158[v79]);
                  v158[v79] += v78;
                  v77 = v157;
                  v78 = v72;
                  ++v79;
                }
              }
              if ( v79 == 115 )
              {
LABEL_174:
                v161 = 0;
                sub_471A66(1, v19, &v162, 0x1CCu, (unsigned int)v138, 0);
LABEL_175:
                v64 = 0;
                goto LABEL_168;
              }
              v76 = v146;
              v74 = (__m128i *)v148;
            }
            else if ( HIDWORD(v19) == v77 )
            {
              v158[HIDWORD(v19)] = 0;
              v77 = HIDWORD(v19) + 1;
              v157 = HIDWORD(v19) + 1;
            }
            if ( ++HIDWORD(v19) == v76 )
            {
              v161 = v77;
              sub_471A66(1, v19, &v162, 0x1CCu, (unsigned int)v158, 4 * v77);
              goto LABEL_167;
            }
          }
        }
        v153 = v162.m128i_i32[0];
        v161 = v159;
        sub_471A66(1, v159, &v162, 0x1CCu, (unsigned int)v160, 4 * v159);
        v69 = v153;
        if ( v153 )
        {
          if ( v153 != 1 )
          {
            if ( v161 )
            {
              HIDWORD(v151) = v161;
              v70 = 0;
              LODWORD(v19) = 0;
              do
              {
                v71 = v162.m128i_u32[v19] * (unsigned __int64)v69;
                v72 = __CFADD__(v70, (_DWORD)v71);
                v162.m128i_i32[v19] = v70 + v71;
                v69 = v153;
                v73 = v72 + HIDWORD(v71);
                LODWORD(v19) = v19 + 1;
                v70 = v73;
              }
              while ( (_DWORD)v19 != HIDWORD(v151) );
              if ( v73 )
              {
                if ( v161 >= 0x73 )
                {
                  v159 = 0;
                  v161 = 0;
                  sub_471A66(1, v19, &v162, 0x1CCu, (unsigned int)v160, 0);
                  goto LABEL_175;
                }
                v162.m128i_i32[v161++] = v73;
              }
            }
          }
        }
        else
        {
          v159 = 0;
          v161 = 0;
          sub_471A66(1, v19, &v162, 0x1CCu, (unsigned int)v160, 0);
        }
LABEL_167:
        v64 = 1;
LABEL_168:
        if ( !v64 )
          break;
        v61 = v155 - v154;
        v155 -= v154;
        if ( !v155 )
        {
          v62 = v142;
          goto LABEL_171;
        }
      }
      v161 = 0;
      goto LABEL_177;
    }
LABEL_171:
    if ( v62 )
    {
      v82 = dword_4A62F4[v62];
      HIDWORD(v151) = v82;
      if ( !v82 )
      {
LABEL_173:
        v161 = 0;
LABEL_177:
        sub_471A66(1, v19, &v162, 0x1CCu, (unsigned int)v138, 0);
        goto LABEL_254;
      }
      if ( v82 != 1 )
      {
        v83 = v161;
        if ( v161 )
        {
          v155 = 0;
          LODWORD(v19) = 0;
          do
          {
            v84 = v162.m128i_u32[v19] * (unsigned __int64)(unsigned int)v82;
            v72 = __CFADD__(v155, (_DWORD)v84);
            v162.m128i_i32[v19] = v155 + v84;
            v82 = HIDWORD(v151);
            v85 = v72 + HIDWORD(v84);
            LODWORD(v19) = v19 + 1;
            v155 = v85;
          }
          while ( (_DWORD)v19 != v83 );
          if ( v85 )
          {
            if ( v161 < 0x73 )
            {
              v162.m128i_i32[v161++] = v85;
              goto LABEL_254;
            }
            goto LABEL_173;
          }
        }
      }
    }
    goto LABEL_254;
  }
  v86 = -v147 / 0xA;
  v150 = (_DWORD *)v86;
  v87 = -v147 % 0xA;
  v142 = v87;
  if ( v86 )
  {
    while ( 1 )
    {
      if ( v86 > 0x26 )
        v86 = 38;
      v88 = (unsigned __int8)byte_4A625E[4 * v86];
      HIDWORD(v19) = (unsigned __int8)byte_4A625F[4 * v86];
      v148 = v86;
      LODWORD(v19) = 4 * v88;
      v159 = v88 + HIDWORD(v19);
      sub_464890(v160, 0, 4 * v88);
      sub_464310(
        (unsigned int)v160 + v19,
        (unsigned int)&dword_4A5958[(unsigned __int16)word_4A625C[2 * v148]],
        4 * HIDWORD(v19));
      LODWORD(v19) = v159;
      if ( v159 <= 1 )
        break;
      if ( v163 > 1 )
      {
        v98 = v160;
        if ( v159 >= v163 )
          v98 = v164;
        v154 = (unsigned int)v98;
        v99 = v164;
        if ( v159 >= v163 )
          v99 = v160;
        v155 = (unsigned int)v99;
        if ( v159 >= v163 )
        {
          v100 = v163;
          v153 = v163;
        }
        else
        {
          v100 = v159;
          v153 = v159;
        }
        if ( v159 < v163 )
          LODWORD(v19) = v163;
        v101 = 0;
        HIDWORD(v19) = 0;
        v157 = 0;
        do
        {
          if ( v98->m128i_i32[HIDWORD(v19)] )
          {
            v102 = 0;
            v103 = HIDWORD(v19);
            v156 = 0;
            v146 = 0;
            if ( (_DWORD)v19 )
            {
              do
              {
                if ( v103 == 115 )
                  break;
                if ( v103 == v101 )
                {
                  v104 = v156;
                  v158[v103] = 0;
                  v157 = HIDWORD(v19) + v104 + 1;
                }
                v105 = v146
                     + *(unsigned int *)(v154 + 4 * HIDWORD(v19)) * (unsigned __int64)*(unsigned int *)(v155 + 4 * v156);
                v72 = __CFADD__((_DWORD)v105, v158[v103]);
                v158[v103] += v105;
                v102 = v72 + HIDWORD(v105);
                ++v103;
                ++v156;
                v146 = v102;
                v101 = v157;
              }
              while ( v156 != (_DWORD)v19 );
              while ( v102 )
              {
                if ( v103 == 115 )
                  goto LABEL_199;
                if ( v103 == v101 )
                {
                  v158[v103] = 0;
                  v157 = v103 + 1;
                }
                v72 = __CFADD__(v102, v158[v103]);
                v158[v103] += v102;
                v101 = v157;
                v102 = v72;
                ++v103;
              }
            }
            if ( v103 == 115 )
              goto LABEL_199;
            v100 = v153;
            v98 = (__m128i *)v154;
          }
          else if ( HIDWORD(v19) == v101 )
          {
            v158[HIDWORD(v19)] = 0;
            v101 = HIDWORD(v19) + 1;
            v157 = HIDWORD(v19) + 1;
          }
          ++HIDWORD(v19);
        }
        while ( HIDWORD(v19) != v100 );
        v163 = v101;
        sub_471A66(1, v19, v164, 0x1CCu, (unsigned int)v158, 4 * v101);
      }
      else
      {
        v155 = v164[0].m128i_i32[0];
        v163 = v159;
        sub_471A66(1, v159, v164, 0x1CCu, (unsigned int)v160, 4 * v159);
        v94 = v155;
        if ( v155 )
        {
          if ( v155 != 1 )
          {
            if ( v163 )
            {
              HIDWORD(v151) = v163;
              v95 = 0;
              LODWORD(v19) = 0;
              do
              {
                v96 = v164[0].m128i_u32[v19] * (unsigned __int64)v94;
                v72 = __CFADD__(v95, (_DWORD)v96);
                v164[0].m128i_i32[v19] = v95 + v96;
                v94 = v155;
                v97 = v72 + HIDWORD(v96);
                LODWORD(v19) = v19 + 1;
                v95 = v97;
              }
              while ( (_DWORD)v19 != HIDWORD(v151) );
              if ( v97 )
              {
                if ( v163 >= 0x73 )
                  goto LABEL_199;
                v164[0].m128i_i32[v163++] = v97;
              }
            }
          }
        }
        else
        {
          v163 = 0;
          sub_471A66(1, v19, v164, 0x1CCu, (unsigned int)v138, 0);
        }
      }
      v89 = 1;
LABEL_238:
      if ( !v89 )
      {
        v163 = 0;
        goto LABEL_253;
      }
      v86 = (unsigned int)v150 - v148;
      v150 = (_DWORD *)((char *)v150 - v148);
      if ( !v150 )
      {
        v87 = v142;
        goto LABEL_241;
      }
    }
    LODWORD(v19) = v160[0].m128i_i32[0];
    if ( !v160[0].m128i_i32[0] )
    {
      v163 = 0;
      sub_471A66(1, 0, v164, 0x1CCu, (unsigned int)v138, 0);
LABEL_191:
      v89 = 1;
      goto LABEL_238;
    }
    if ( v160[0].m128i_i32[0] == 1 )
      goto LABEL_191;
    if ( !v163 )
      goto LABEL_191;
    v90 = 0;
    HIDWORD(v151) = v163;
    HIDWORD(v19) = 0;
    do
    {
      v91 = v164[0].m128i_u32[HIDWORD(v19)] * (unsigned __int64)(unsigned int)v19;
      v92 = v164[0].m128i_i32[HIDWORD(v19)] * v19;
      v164[0].m128i_i32[HIDWORD(v19)] = v90 + v92;
      v93 = __PAIR64__(HIDWORD(v91), v90) + v92;
      ++HIDWORD(v19);
      v90 = HIDWORD(v93);
    }
    while ( HIDWORD(v19) != HIDWORD(v151) );
    if ( !HIDWORD(v93) )
      goto LABEL_191;
    if ( v163 < 0x73 )
    {
      v164[0].m128i_i32[v163++] = HIDWORD(v93);
      goto LABEL_191;
    }
LABEL_199:
    v163 = 0;
    sub_471A66(1, v19, v164, 0x1CCu, (unsigned int)v138, 0);
    v89 = 0;
    goto LABEL_238;
  }
LABEL_241:
  if ( !v87 )
    goto LABEL_254;
  v106 = dword_4A62F4[v87];
  HIDWORD(v151) = v106;
  if ( v106 )
  {
    if ( v106 == 1 )
      goto LABEL_254;
    v107 = v163;
    if ( !v163 )
      goto LABEL_254;
    v155 = 0;
    LODWORD(v19) = 0;
    do
    {
      v108 = v164[0].m128i_u32[v19] * (unsigned __int64)(unsigned int)v106;
      v72 = __CFADD__(v155, (_DWORD)v108);
      v164[0].m128i_i32[v19] = v155 + v108;
      v106 = HIDWORD(v151);
      v109 = v72 + HIDWORD(v108);
      LODWORD(v19) = v19 + 1;
      v155 = v109;
    }
    while ( (_DWORD)v19 != v107 );
    if ( !v109 )
      goto LABEL_254;
    if ( v163 < 0x73 )
    {
      v164[0].m128i_i32[v163++] = v109;
      goto LABEL_254;
    }
  }
  v163 = 0;
LABEL_253:
  sub_471A66(1, v19, v164, 0x1CCu, (unsigned int)v138, 0);
LABEL_254:
  v110 = v163;
  v111 = v149;
  v156 = (unsigned int)v149;
  if ( v163 )
  {
    v155 = 0;
    v112 = 0;
    do
    {
      v113 = 10LL * v164[0].m128i_u32[v112];
      v114 = 10 * v164[0].m128i_i32[v112];
      v115 = v155;
      v164[0].m128i_i32[v112] = v155 + v114;
      v116 = __PAIR64__(HIDWORD(v113), v115) + (unsigned int)v114;
      ++v112;
      v155 = HIDWORD(v116);
    }
    while ( v112 != v110 );
    v111 = (_BYTE *)v156;
    if ( HIDWORD(v116) )
    {
      if ( v163 >= 0x73 )
      {
        v163 = 0;
        sub_471A66(1, v156, v164, 0x1CCu, (unsigned int)v138, 0);
      }
      else
      {
        v164[0].m128i_i32[v163++] = HIDWORD(v116);
      }
    }
  }
  v117 = sub_470AB0((int)&v163, &v161);
  v118 = v149;
  if ( v117 == 10 )
  {
    v119 = v161;
    v111 = v149 + 1;
    ++v147;
    *v149 = 49;
    v156 = (unsigned int)(v118 + 1);
    HIDWORD(v151) = v119;
    if ( v119 )
    {
      v120 = 0;
      v121 = 0;
      do
      {
        v122 = 10LL * v162.m128i_u32[v121];
        v162.m128i_i32[v121++] = v120 + v122;
        v120 = (v122 + (unsigned __int64)v120) >> 32;
      }
      while ( v121 != HIDWORD(v151) );
      HIDWORD(v151) = v120;
      v23 = v120 == 0;
      v111 = (_BYTE *)v156;
      if ( !v23 )
      {
        if ( v161 >= 0x73 )
        {
          v161 = 0;
          sub_471A66(1, v156, &v162, 0x1CCu, (unsigned int)v138, 0);
        }
        else
        {
          v162.m128i_i32[v161++] = HIDWORD(v151);
        }
      }
      v118 = v149;
    }
  }
  else
  {
    if ( !v117 )
    {
      v123 = v147 - 1;
      goto LABEL_270;
    }
    v111 = v149 + 1;
    *v149 = v117 + 48;
    v156 = (unsigned int)(v118 + 1);
  }
  v123 = v147;
LABEL_270:
  v143[1] = v123;
  v124 = v144;
  if ( v123 >= 0 && v144 <= 0x7FFFFFFF && !a4 )
    v124 = v123 + v144;
  v125 = a7 - 1;
  if ( a7 - 1 >= v124 )
    v125 = v124;
  v126 = 0;
  v155 = (unsigned int)&v118[v125];
  v152 = 0;
  if ( v111 != &v118[v125] )
  {
    do
    {
      HIDWORD(v151) = v163;
      if ( !v163 )
        break;
      v127 = 0;
      v128 = 0;
      do
      {
        v129 = 1000000000LL * v164[0].m128i_u32[v128];
        v130 = 1000000000 * v164[0].m128i_i32[v128];
        v164[0].m128i_i32[v128] = v127 + v130;
        v131 = __PAIR64__(HIDWORD(v129), v127) + (unsigned int)v130;
        ++v128;
        v127 = HIDWORD(v131);
      }
      while ( v128 != HIDWORD(v151) );
      HIDWORD(v151) = HIDWORD(v131);
      v132 = v156;
      if ( HIDWORD(v131) )
      {
        if ( v163 >= 0x73 )
        {
          v163 = 0;
          sub_471A66(1, v156, v164, 0x1CCu, (unsigned int)v138, 0);
        }
        else
        {
          v164[0].m128i_i32[v163++] = HIDWORD(v131);
        }
      }
      v133 = sub_470AB0((int)&v163, &v161);
      v144 = 8;
      v134 = v155 - v132;
      do
      {
        HIDWORD(v151) = v133 / v145;
        v135 = v133 % v145 + 48;
        v136 = v144;
        if ( v134 > v144 )
        {
          *(_BYTE *)(v144 + v132) = v135;
        }
        else if ( v135 != 48 )
        {
          v126 = 1;
          v152 = 1;
          goto LABEL_294;
        }
        v126 = v152;
LABEL_294:
        v144 = v136 - 1;
        v23 = v136 == 0;
        v133 = HIDWORD(v151);
      }
      while ( !v23 );
      if ( v134 > 9 )
        v134 = 9;
      v111 = (_BYTE *)(v134 + v132);
      v156 = (unsigned int)v111;
    }
    while ( v111 != (_BYTE *)v155 );
  }
  *v111 = 0;
  if ( v163 || v126 )
LABEL_305:
    v7 = 0;
LABEL_306:
  if ( v141 )
    sub_481941(v140);
  return v7;
}
// 47FD20: conditional instruction was optimized away because ecx.4>=2u
// 4801E9: conditional instruction was optimized away because ecx.4>=2u
// 4A5958: using guessed type int dword_4A5958[512];
// 4A625C: using guessed type __int16 word_4A625C[];
// 4A62F4: using guessed type int dword_4A62F4[];
