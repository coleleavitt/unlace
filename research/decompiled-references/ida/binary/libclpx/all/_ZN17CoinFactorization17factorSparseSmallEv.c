__int64 __fastcall CoinFactorization::factorSparseSmall(CoinFactorization *this)
{
  _QWORD *v2; // r12
  __int64 v3; // rbx
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // r14
  int v7; // esi
  CoinArrayWithLength *v8; // rdi
  int v9; // edx
  __int64 v10; // rax
  void *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 v15; // r9
  __int64 v16; // r11
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // r13
  __int64 v20; // rdi
  int v21; // ecx
  double v22; // xmm6_8
  __int64 v23; // rax
  __int64 v24; // rdi
  __m128i v25; // xmm3
  __m128i v26; // xmm5
  int v27; // eax
  int v28; // edx
  __int64 v29; // rsi
  _DWORD *v30; // r12
  const __m128i *v31; // rax
  __int64 v32; // r15
  int v33; // ebx
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // eax
  double v37; // xmm2_8
  int v38; // ebp
  __int64 v39; // rbx
  int v40; // eax
  __int64 v41; // rcx
  unsigned __int64 v42; // r11
  char v43; // r15
  __int64 v44; // rdi
  int v45; // r10d
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // rdx
  double v49; // xmm1_8
  double v50; // xmm4_8
  __int64 i; // rdx
  unsigned int v52; // ebp
  int v54; // esi
  int v55; // edx
  __int64 v56; // rax
  int v57; // r10d
  int v58; // r11d
  int v59; // r15d
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // r10
  __int64 v63; // rcx
  __int64 v64; // r15
  __int64 v65; // rdx
  __int64 v66; // r11
  int *v67; // r9
  __int64 v68; // rcx
  int v69; // edi
  int v70; // eax
  int *v71; // rcx
  __int64 v72; // rdx
  _DWORD *v73; // r15
  __int64 v74; // rbx
  __int64 v75; // rbx
  int v76; // eax
  unsigned int v77; // r8d
  int v78; // ebx
  int v79; // eax
  int v80; // ebp
  int v81; // esi
  char v82; // al
  int v83; // eax
  double v84; // xmm1_8
  int v85; // r10d
  char v86; // al
  int v87; // edx
  int v88; // eax
  int v89; // ecx
  int v90; // esi
  const __m128i *v91; // r8
  __m128i v92; // xmm1
  unsigned int v93; // edi
  __m128i v94; // xmm2
  __m128i v95; // xmm1
  int v96; // ecx
  unsigned int v97; // eax
  int v98; // eax
  int v99; // esi
  __int64 v100; // rdx
  __int64 v101; // rsi
  int v102; // ebx
  __int64 v103; // rcx
  __int64 v104; // r12
  __int64 v105; // r13
  __int64 v106; // r10
  __int64 v107; // rax
  __int64 v108; // rsi
  int v109; // eax
  __int64 v110; // rax
  __int64 v111; // r8
  int v112; // eax
  int v113; // eax
  _QWORD *v114; // rcx
  __int64 v115; // rax
  _QWORD *v116; // rax
  int v117; // eax
  int v118; // eax
  __m128i si128; // xmm0
  __int64 v120; // rax
  __m128i *v121; // rdx
  _WORD *v122; // rax
  __m128i v123; // xmm0
  __int64 v124; // rax
  __m128i *v125; // rdx
  _WORD *v126; // rcx
  int v127; // [rsp+8h] [rbp-130h]
  int v128; // [rsp+10h] [rbp-128h]
  double v129; // [rsp+10h] [rbp-128h]
  __int64 v130; // [rsp+10h] [rbp-128h]
  __int64 v131; // [rsp+18h] [rbp-120h]
  int v132; // [rsp+20h] [rbp-118h]
  __m128i v133; // [rsp+20h] [rbp-118h]
  __int64 v134; // [rsp+20h] [rbp-118h]
  int v135; // [rsp+30h] [rbp-108h]
  int v136[4]; // [rsp+30h] [rbp-108h]
  __int64 v137; // [rsp+30h] [rbp-108h]
  int v138; // [rsp+40h] [rbp-F8h]
  int v140; // [rsp+50h] [rbp-E8h]
  __int64 v141; // [rsp+50h] [rbp-E8h]
  int v142; // [rsp+60h] [rbp-D8h]
  __m128i v143; // [rsp+60h] [rbp-D8h]
  __m128i v144; // [rsp+60h] [rbp-D8h]
  __int64 v145; // [rsp+78h] [rbp-C0h]
  __int64 v146; // [rsp+88h] [rbp-B0h]
  int v147; // [rsp+90h] [rbp-A8h]
  int v148; // [rsp+94h] [rbp-A4h]
  __int64 v149; // [rsp+98h] [rbp-A0h]
  __int64 v150; // [rsp+A0h] [rbp-98h]
  __int64 v151; // [rsp+A8h] [rbp-90h]
  __int64 v152; // [rsp+B0h] [rbp-88h]
  __int64 v153; // [rsp+B8h] [rbp-80h]
  __int64 v154; // [rsp+C0h] [rbp-78h]
  int v155; // [rsp+C8h] [rbp-70h]
  void *s; // [rsp+D0h] [rbp-68h]
  signed int v157; // [rsp+D8h] [rbp-60h]
  int v158; // [rsp+DCh] [rbp-5Ch]
  CoinArrayWithLength *v159; // [rsp+E0h] [rbp-58h]
  CoinArrayWithLength *v160; // [rsp+E8h] [rbp-50h]
  int v161; // [rsp+F0h] [rbp-48h]
  unsigned int v162; // [rsp+F4h] [rbp-44h]
  const __m128i *v163; // [rsp+F8h] [rbp-40h]

  v2 = nullptr;
  v3 = *((_QWORD *)this + 78);
  v4 = *((_QWORD *)this + 63);
  v5 = *((_DWORD *)this + 8);
  v6 = *((_QWORD *)this + 75);
  if ( *((int *)this + 158) <= -2 )
    v3 = 0;
  v7 = 8 * v5;
  if ( *((int *)this + 128) <= -2 )
    v4 = 0;
  if ( *((int *)this + 152) <= -2 )
    v6 = 0;
  v8 = (CoinFactorization *)((char *)this + 872);
  v160 = v8;
  if ( v5 < 0 )
    v7 = -1;
  CoinArrayWithLength::conditionalNew(v8, v7);
  v9 = *((_DWORD *)this + 8);
  if ( *((int *)this + 220) > -2 )
    v2 = *((_QWORD **)this + 109);
  v155 = (int)v2;
  v157 = abs32(*((_DWORD *)this + 217));
  if ( v9 )
  {
    if ( v9 / 8 <= 0 )
    {
      v116 = v2;
    }
    else
    {
      v114 = v2;
      v115 = (unsigned int)(v9 / 8 - 1);
      do
      {
        *v114 = 0;
        v114[1] = 0;
        v114 += 8;
        *(v114 - 6) = 0;
        *(v114 - 5) = 0;
        *(v114 - 4) = 0;
        *(v114 - 3) = 0;
        *(v114 - 2) = 0;
        *(v114 - 1) = 0;
      }
      while ( v114 != &v2[8 * v115 + 8] );
      v116 = &v2[8 * (int)v115 + 8];
    }
    switch ( v9 % 8 )
    {
      case 1:
        goto LABEL_217;
      case 2:
        goto LABEL_216;
      case 3:
        goto LABEL_215;
      case 4:
        goto LABEL_214;
      case 5:
        goto LABEL_213;
      case 6:
        goto LABEL_212;
      case 7:
        v116[6] = 0;
LABEL_212:
        v116[5] = 0;
LABEL_213:
        v116[4] = 0;
LABEL_214:
        v116[3] = 0;
LABEL_215:
        v116[2] = 0;
LABEL_216:
        v116[1] = 0;
LABEL_217:
        *v116 = 0;
        break;
      default:
        break;
    }
  }
  v159 = (CoinFactorization *)((char *)this + 896);
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 896), 4000);
  v10 = 0;
  v11 = *((void **)this + 112);
  if ( *((int *)this + 226) <= -2 )
    v11 = nullptr;
  s = v11;
  if ( *((int *)this + 120) > -2 )
    v10 = *((_QWORD *)this + 59);
  v154 = v10;
  v12 = *((_DWORD *)this + 8);
  v148 = v12;
  if ( v12 )
  {
    v117 = v12 + 7;
    if ( *((int *)this + 8) >= 0 )
      v117 = *((_DWORD *)this + 8);
    v118 = v117 >> 3;
    if ( v118 <= 0 )
    {
      v122 = (_WORD *)v154;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_294F00);
      v120 = (unsigned int)(v118 - 1);
      v121 = (__m128i *)v154;
      do
        *v121++ = si128;
      while ( (__m128i *)(v154 + 16 * v120 + 16) != v121 );
      v122 = (_WORD *)(v154 + 16 * ((int)v120 + 1LL));
    }
    switch ( v148 % 8 )
    {
      case 1:
        goto LABEL_224;
      case 2:
        goto LABEL_223;
      case 3:
        goto LABEL_222;
      case 4:
        goto LABEL_221;
      case 5:
        goto LABEL_220;
      case 6:
        goto LABEL_219;
      case 7:
        v122[6] = -4;
LABEL_219:
        v122[5] = -4;
LABEL_220:
        v122[4] = -4;
LABEL_221:
        v122[3] = -4;
LABEL_222:
        v122[2] = -4;
LABEL_223:
        v122[1] = -4;
LABEL_224:
        *v122 = -4;
        break;
      default:
        break;
    }
  }
  v13 = *((_QWORD *)this + 26);
  v14 = *((_QWORD *)this + 29);
  v15 = *((_QWORD *)this + 32);
  v16 = *((_QWORD *)this + 95);
  if ( *((int *)this + 54) <= -2 )
    v13 = 0;
  v149 = v13;
  v17 = *((_QWORD *)this + 81);
  if ( *((int *)this + 60) <= -2 )
    v14 = 0;
  if ( *((int *)this + 66) <= -2 )
    v15 = 0;
  if ( *((int *)this + 164) <= -2 )
    v17 = 0;
  v131 = v17;
  v18 = *((_DWORD *)this + 288);
  if ( *((int *)this + 192) <= -2 )
    v16 = 0;
  if ( v18 <= 2 && v148 == *((_DWORD *)this + 11) )
  {
    v103 = *((_QWORD *)this + 10);
    v104 = *((_QWORD *)this + 50);
    v105 = *((_QWORD *)this + 53);
    if ( *((int *)this + 22) <= -2 )
      v103 = 0;
    v130 = v103;
    if ( *((int *)this + 102) <= -2 )
      v104 = 0;
    if ( *((int *)this + 108) <= -2 )
      v105 = 0;
    if ( v148 > 0 )
    {
      v106 = 0;
      do
      {
        if ( *(_DWORD *)(v14 + 4 * v106) == 1 )
        {
          v107 = *(int *)(v131 + 4 * v106);
          if ( *(double *)(v6 + 8 * v107) == -1.0 && !*(_DWORD *)(v15 + 4 * v106) )
          {
            v108 = *(int *)(v3 + 4 * v107);
            v109 = *(_DWORD *)(4 * v108 + v149);
            if ( v109 > 0 )
            {
              *((_DWORD *)this + 18) -= v109;
              v141 = v106;
              v137 = v16;
              v110 = *(int *)(v104 + 4 * v108);
              v111 = *(int *)(v105 + 4 * v108);
              v134 = v15;
              *(_DWORD *)(v104 + 4 * v111) = v110;
              *(_DWORD *)(v105 + 4 * v110) = v111;
              *(_DWORD *)(v104 + 4 * v108) = *((_DWORD *)this + 14);
              *(_DWORD *)(v105 + 4 * v108) = -2;
              CoinFactorization::deleteLink(this, v108);
              v106 = v141;
              v16 = v137;
              v15 = v134;
              *(_DWORD *)(4 * v108 + v149) = -1;
              *(_DWORD *)(v14 + 4 * v141) = 0;
              v112 = *((_DWORD *)this + 15) + 1;
              *((_DWORD *)this + 15) = v112;
              *(_DWORD *)(v137 + 4LL * v112) = 0;
              *(_DWORD *)(v130 + 4LL * *((int *)this + 14)) = v141;
              v113 = *((_DWORD *)this + 11);
              ++*((_DWORD *)this + 14);
              v148 = v113;
            }
          }
        }
        ++v106;
      }
      while ( (int)v106 < v148 );
    }
    CoinFactorization::preProcess(this, 4, -1);
    v148 = *((_DWORD *)this + 8);
    if ( v148 )
    {
      if ( v148 / 8 <= 0 )
      {
        v126 = (_WORD *)v154;
      }
      else
      {
        v123 = _mm_load_si128((const __m128i *)&xmmword_294F00);
        v124 = (unsigned int)(v148 / 8 - 1);
        v125 = (__m128i *)v154;
        do
          *v125++ = v123;
        while ( (__m128i *)(v154 + 16 * v124 + 16) != v125 );
        v126 = (_WORD *)(v154 + 16 * ((int)v124 + 1LL));
      }
      v18 = *((_DWORD *)this + 288);
      switch ( v148 % 8 )
      {
        case 1:
          goto LABEL_241;
        case 2:
          goto LABEL_240;
        case 3:
          goto LABEL_239;
        case 4:
          goto LABEL_238;
        case 5:
          goto LABEL_237;
        case 6:
          goto LABEL_236;
        case 7:
          v126[6] = -4;
LABEL_236:
          v126[5] = -4;
LABEL_237:
          v126[4] = -4;
LABEL_238:
          v126[3] = -4;
LABEL_239:
          v126[2] = -4;
LABEL_240:
          v126[1] = -4;
LABEL_241:
          *v126 = -4;
          break;
        default:
          break;
      }
    }
    else
    {
      v18 = *((_DWORD *)this + 288);
    }
  }
  v19 = v3;
  v20 = *((_QWORD *)this + 38);
  v21 = *((_DWORD *)this + 45);
  v22 = *(double *)this;
  *((_DWORD *)this + 144) = *((_DWORD *)this + 14);
  v23 = 0;
  v147 = v21;
  if ( *((int *)this + 78) <= -2 )
    v20 = 0;
  v146 = v20;
  v24 = *((_QWORD *)this + 35);
  if ( *((int *)this + 72) <= -2 )
    v24 = 0;
  v153 = v24;
  if ( *((int *)this + 48) > -2 )
    v23 = *((_QWORD *)this + 23);
  v151 = v23;
  CoinFactorization::separateLinks(this, 1, v18 > 1);
  v25 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  v26 = v25;
  v27 = 5;
  v28 = *((_DWORD *)this + 125);
  v29 = -(__int64)(v14 >> 2) & 3;
  v30 = (_DWORD *)v14;
  v158 = 1000;
  v161 = -(int)(v14 >> 2) & 3;
  v142 = 1;
  if ( (unsigned int)(v29 + 3) >= 5 )
    v27 = v29 + 3;
  v162 = v27;
  v31 = (const __m128i *)(v14 + 4LL * (unsigned int)v29);
  v32 = v4;
  v163 = v31;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        v33 = 1;
        if ( v28 < 1 )
        {
LABEL_65:
          v52 = 0;
          goto LABEL_66;
        }
        while ( 1 )
        {
          v34 = *(int *)(v153 + 4LL * v33);
          v35 = 0;
          if ( *((int *)this + 22) > -2 )
            v35 = *((_QWORD *)this + 10);
          v152 = v35;
          if ( v33 == 1 && *(int *)(v153 + 4) >= 0 && !*((_DWORD *)this + 288) )
            break;
          if ( (int)v34 >= 0 )
          {
            v132 = -1;
            v138 = -1;
            v127 = -1;
            v36 = *((_DWORD *)this + 8);
            goto LABEL_44;
          }
LABEL_64:
          v33 = ++v142;
          if ( v142 > v28 )
            goto LABEL_65;
        }
        v36 = *((_DWORD *)this + 8);
        if ( (int)v34 < 0 )
          goto LABEL_137;
        if ( (int)v34 < v36 )
        {
          while ( 1 )
          {
            LODWORD(v34) = *(_DWORD *)(v146 + 4 * v34);
            if ( (int)v34 < 0 )
              break;
            if ( (int)v34 >= v36 )
              goto LABEL_179;
          }
LABEL_137:
          v132 = -1;
          v138 = -1;
          v127 = -1;
          goto LABEL_138;
        }
LABEL_179:
        v99 = v34 - v36;
        v100 = v99;
        v138 = v99;
        v101 = *(int *)(v131 + 4LL * v99);
        v102 = *(_DWORD *)(v19 + 4 * v101);
        v132 = v101;
        v127 = v102;
        if ( v102 >= 0 )
        {
          v46 = v30[v100];
          v135 = -1;
          v75 = 4LL * v102;
          goto LABEL_105;
        }
LABEL_138:
        LODWORD(v34) = *(_DWORD *)(v153 + 4);
LABEL_44:
        v37 = 1.797693134862316e308;
        v128 = 0;
        v135 = -1;
        v38 = v142 - 1;
        v39 = v32;
LABEL_45:
        ++v128;
        v145 = 4LL * (int)v34;
        v140 = *(_DWORD *)(v146 + v145);
        if ( (int)v34 >= v36 )
        {
          v54 = v34 - v148;
          v55 = *(_DWORD *)(v131 + 4LL * v54);
          v56 = v55;
          if ( v55 < v55 + v30[v54] )
          {
            v57 = v138;
            v58 = v132;
            v59 = v135;
            while ( 1 )
            {
              if ( COERCE_DOUBLE(*(_QWORD *)(v6 + 8 * v56) & v25.m128i_i64[0]) >= COERCE_DOUBLE(
                                                                                    *(_QWORD *)(v6 + 8LL * v55)
                                                                                  & v25.m128i_i64[0])
                                                                                * v22 )
              {
                v60 = *(_DWORD *)(v149 + 4LL * *(int *)(v19 + 4 * v56));
                if ( v37 > (double)(v60 * v38) )
                {
                  if ( v142 + 1 >= v60 )
                  {
                    v138 = v54;
                    v132 = v56;
                    LODWORD(v34) = -1;
                    v127 = *(_DWORD *)(v19 + 4 * v56);
                    v37 = (double)(v60 * v38);
                    v135 = -1;
                    goto LABEL_78;
                  }
                  v37 = (double)(v60 * v38);
                  v58 = v56;
                  v57 = v54;
                  v127 = *(_DWORD *)(v19 + 4 * v56);
                  v59 = -1;
                }
              }
              if ( v55 + (unsigned __int64)(unsigned int)(v30[v54] - 1) + 1 == ++v56 )
              {
                LODWORD(v34) = *(_DWORD *)(v146 + v145);
                v138 = v57;
                v132 = v58;
                v135 = v59;
                goto LABEL_78;
              }
            }
          }
          LODWORD(v34) = *(_DWORD *)(v146 + v145);
LABEL_78:
          if ( v127 < 0 || v147 > v128 )
            goto LABEL_80;
          goto LABEL_128;
        }
        v40 = *(_DWORD *)(v151 + 4LL * (int)v34);
        if ( v40 < v142 + v40 )
        {
          v41 = v40;
          v42 = v40 + (unsigned __int64)(unsigned int)(v142 - 1) + 1;
          v43 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v44 = *(int *)(v39 + 4 * v41);
              v45 = v41;
              v46 = v30[v44];
              v47 = *(_DWORD *)(v39 + 4 * v41);
              if ( v37 > (double)(v38 * v46) )
                break;
LABEL_48:
              if ( v42 == ++v41 )
                goto LABEL_58;
            }
            v48 = *(int *)(v131 + 4 * v44);
            *(_QWORD *)&v49 = *(_QWORD *)(v6 + 8 * v48) & v26.m128i_i64[0];
            v50 = v49 * v22;
            if ( *(_DWORD *)(v19 + 4 * v48) != (_DWORD)v34 )
            {
              for ( i = v48 + 1; *(_DWORD *)(v19 + 4 * (i + 1) - 4) != (_DWORD)v34; ++i )
                ;
              *(_QWORD *)&v49 = *(_QWORD *)(v6 + 8 * i) & v26.m128i_i64[0];
            }
            if ( v49 < v50 )
            {
              if ( v127 == -1 )
                v43 = 1;
              goto LABEL_48;
            }
            if ( v46 < v142 )
            {
              v32 = v39;
              v74 = (int)v34;
              if ( v147 > v128 )
              {
                v132 = -1;
                goto LABEL_104;
              }
              v135 = v41;
              v138 = v47;
              v127 = v34;
              v132 = -1;
              v75 = 4LL * (int)v34;
              goto LABEL_105;
            }
            ++v41;
            v43 = 0;
            v135 = v45;
            v138 = v47;
            v127 = v34;
            v37 = (double)(v38 * v30[v44]);
            v132 = -1;
            if ( v42 == v41 )
            {
LABEL_58:
              if ( v127 >= 0 && v147 <= v128 )
                goto LABEL_128;
              if ( !v43 )
                goto LABEL_61;
              v61 = 0;
              v62 = 0;
              v63 = 0;
              v64 = *((_QWORD *)this + 38);
              v65 = *((_QWORD *)this + 35);
              v66 = *((_QWORD *)this + 41);
              if ( *((int *)this + 78) > -2 )
                v62 = *((_QWORD *)this + 38);
              if ( *((int *)this + 72) > -2 )
                v63 = *((_QWORD *)this + 35);
              v150 = v63;
              v67 = (int *)(v62 + v145);
              if ( *((int *)this + 84) > -2 )
                v61 = *((_QWORD *)this + 41);
              v68 = *v67;
              v69 = *(_DWORD *)(v61 + 4LL * (int)v34);
              if ( v69 < 0 )
                *(_DWORD *)(v150 + 4LL * (-2 - v69)) = v68;
              else
                *(_DWORD *)(v62 + 4LL * v69) = v68;
              if ( (int)v68 >= 0 )
                *(_DWORD *)(v61 + 4 * v68) = v69;
              *v67 = -2;
              *(_DWORD *)(v61 + 4LL * (int)v34) = -2;
              v70 = *((_DWORD *)this + 125) + 1;
              if ( *((int *)this + 78) <= -2 )
                v64 = 0;
              if ( *((int *)this + 72) <= -2 )
                v65 = 0;
              if ( *((int *)this + 84) <= -2 )
                v66 = 0;
              v71 = (int *)(v65 + 4LL * v70);
              v72 = *v71;
              v73 = (_DWORD *)(v145 + v64);
              *(_DWORD *)(v66 + 4LL * (int)v34) = -2 - v70;
              *v71 = v34;
              if ( (int)v72 < 0 )
              {
                *v73 = -1;
              }
              else
              {
                *v73 = v72;
                *(_DWORD *)(v66 + 4 * v72) = v34;
              }
              LODWORD(v34) = v140;
LABEL_80:
              if ( (int)v34 < 0 )
                goto LABEL_62;
LABEL_81:
              v36 = *((_DWORD *)this + 8);
              goto LABEL_45;
            }
          }
        }
        if ( v127 >= 0 && v147 <= v128 )
        {
LABEL_128:
          v32 = v39;
          v75 = 4LL * v127;
          v46 = v30[v138];
          goto LABEL_105;
        }
LABEL_61:
        LODWORD(v34) = *(_DWORD *)(v146 + 4LL * (int)v34);
        if ( v140 >= 0 )
          goto LABEL_81;
LABEL_62:
        v32 = v39;
        if ( v127 < 0 )
        {
          v28 = *((_DWORD *)this + 125);
          goto LABEL_64;
        }
        v44 = v138;
        v74 = v127;
        v45 = v135;
        v47 = v138;
        LODWORD(v34) = v127;
LABEL_104:
        v46 = v30[v44];
        v135 = v45;
        v138 = v47;
        v127 = v34;
        v75 = 4 * v74;
LABEL_105:
        v76 = *(_DWORD *)(v149 + v75) - 1;
        *((_DWORD *)this + 18) -= v76 + v46;
        if ( v46 - 1 <= 0 )
        {
          *(__m128i *)v136 = v26;
          v133 = v25;
          v129 = v22;
          v86 = CoinFactorization::pivotColumnSingleton(this, v127, v138);
          goto LABEL_141;
        }
        if ( v76 <= 0 )
        {
          *(__m128i *)v136 = v26;
          v133 = v25;
          v129 = v22;
          v86 = CoinFactorization::pivotRowSingleton(this, v127, v138);
          goto LABEL_141;
        }
        if ( v46 == 2 )
        {
          *(__m128i *)v136 = v26;
          v133 = v25;
          v129 = v22;
          v86 = CoinFactorization::pivotOneOtherRow(this, v127, v138);
LABEL_141:
          v22 = v129;
          v25 = v133;
          v26 = *(__m128i *)v136;
          if ( v86 )
            goto LABEL_116;
          goto LABEL_142;
        }
        v77 = v46 + 4;
        if ( (v77 & 0xF) != 0 )
          v77 = (v77 & 0xFFFFFFF0) + 16;
        v78 = (int)(v77 + 31) >> 5;
        v79 = v78 * v76;
        v80 = v79;
        if ( v158 < v79 )
        {
          v81 = 4 * v79;
          if ( v79 < 0 )
            v81 = -1;
          v143 = v26;
          CoinArrayWithLength::conditionalNew(v159, v81);
          v26 = v143;
          v158 = v80;
          if ( *((int *)this + 226) < -1 )
            s = nullptr;
          else
            s = *((void **)this + 112);
        }
        v144 = v26;
        v82 = CoinFactorization::pivot<unsigned short>((int)this, v127, v138, v132, v135, v155, s, v78, v154, 65531);
        v26 = v144;
        if ( !v82 )
        {
LABEL_142:
          v52 = -99;
          goto LABEL_66;
        }
LABEL_116:
        *(_DWORD *)(v152 + 4LL * *((int *)this + 14)) = v138;
        v83 = *((_DWORD *)this + 14) + 1;
        *((_DWORD *)this + 14) = v83;
        if ( !v157 )
        {
          v28 = *((_DWORD *)this + 125);
          v142 = 1;
          continue;
        }
        break;
      }
      v84 = 3.5;
      v85 = *((_DWORD *)this + 8) - v83;
      if ( v85 <= 2000 )
      {
        v84 = 2.75;
        if ( v85 <= 800 )
        {
          v84 = 1.5;
          if ( v85 > 256 )
            v84 = 2.0;
        }
      }
      if ( v84 * (double)*((int *)this + 18) <= (double)v85 * (double)v85 || v157 >= v85 || (v85 & 7) != 0 )
      {
        v142 = 1;
        v28 = *((_DWORD *)this + 125);
        continue;
      }
      break;
    }
    v87 = *((_DWORD *)this + 11);
    if ( v87 <= 0 )
    {
      v96 = 0;
    }
    else
    {
      if ( v162 > v87 - 1 )
      {
        v97 = 0;
        v96 = 0;
        goto LABEL_159;
      }
      if ( v161 )
      {
        v88 = 1;
        v89 = *v30 != 0;
        if ( v161 != 1 )
        {
          if ( v30[1] )
            ++v89;
          v88 = 2;
          if ( v161 != 2 )
          {
            if ( v30[2] )
              ++v89;
            v88 = 3;
          }
        }
      }
      else
      {
        v88 = 0;
        v89 = 0;
      }
      v90 = v87 - v161;
      v91 = v163;
      v92 = 0;
      v93 = 0;
      do
      {
        v94 = _mm_load_si128(v91);
        ++v93;
        ++v91;
        v92 = _mm_sub_epi32(v92, _mm_andnot_si128(_mm_cmpeq_epi32(v94, (__m128i)0LL), (__m128i)-1LL));
      }
      while ( (unsigned int)(v87 - v161) >> 2 > v93 );
      v95 = _mm_add_epi32(v92, _mm_srli_si128(v92, 8));
      v96 = _mm_cvtsi128_si32(_mm_add_epi32(v95, _mm_srli_si128(v95, 4))) + v89;
      v97 = (v90 & 0xFFFFFFFC) + v88;
      if ( (v90 & 0xFFFFFFFC) != v90 )
      {
LABEL_159:
        if ( v30[v97] )
          ++v96;
        if ( (int)(v97 + 1) < v87 )
        {
          if ( v30[v97 + 1] )
            ++v96;
          if ( (int)(v97 + 2) < v87 )
          {
            if ( v30[v97 + 2] )
              ++v96;
            if ( v87 > (int)(v97 + 3) )
            {
              if ( v30[v97 + 3] )
                ++v96;
              if ( (int)(v97 + 4) < v87 )
              {
                if ( v30[v97 + 4] )
                  ++v96;
                v98 = v97 + 5;
                if ( v98 < v87 && v30[v98] )
                  ++v96;
              }
            }
          }
        }
      }
    }
    if ( v85 != v96 )
    {
      v157 = 0;
      v142 = 1;
      v28 = *((_DWORD *)this + 125);
      continue;
    }
    break;
  }
  v52 = 2;
  if ( (*((_BYTE *)this + 496) & 4) != 0 )
  {
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::operator<<();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<double>();
    std::__ostream_insert<char,std::char_traits<char>>();
    std::ostream::_M_insert<double>();
    std::endl<char,std::char_traits<char>>();
  }
LABEL_66:
  CoinArrayWithLength::conditionalDelete(v160);
  CoinArrayWithLength::conditionalDelete(v159);
  return v52;
}

