__int64 __fastcall CoinFactorization::factorSparseLarge(CoinFactorization *this)
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
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r13
  __int64 v20; // rcx
  int v21; // esi
  double v22; // xmm6_8
  __int64 v23; // rax
  __int64 v24; // rcx
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
  unsigned int v52; // ebx
  int v53; // esi
  int v54; // edx
  __int64 v55; // rax
  int v56; // r10d
  int v57; // r11d
  int v58; // r15d
  int v59; // ecx
  __int64 v60; // rax
  __int64 v61; // r10
  __int64 v62; // rcx
  __int64 v63; // r15
  __int64 v64; // rdx
  __int64 v65; // r11
  int *v66; // r9
  __int64 v67; // rcx
  int v68; // edi
  int v69; // eax
  int *v70; // rcx
  __int64 v71; // rdx
  _DWORD *v72; // r15
  __int64 v73; // rbx
  __int64 v74; // rbx
  int v75; // eax
  unsigned int v76; // r8d
  int v77; // ebx
  int v78; // eax
  int v79; // ebp
  int v80; // esi
  char v81; // al
  int v82; // eax
  double v83; // xmm1_8
  int v84; // r10d
  char v85; // al
  int v87; // edx
  int v88; // eax
  int v89; // ecx
  int v90; // esi
  const __m128i *v91; // r8
  __m128i v92; // xmm1
  unsigned int v93; // edi
  __m128i v94; // xmm2
  __m128i v95; // xmm1
  int v96; // edi
  unsigned int v97; // eax
  int v98; // eax
  int v99; // esi
  __int64 v100; // rdx
  __int64 v101; // rsi
  int v102; // ebx
  _QWORD *v103; // rcx
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r12
  __int64 v108; // r13
  __int64 v109; // r10
  __int64 v110; // rax
  __int64 v111; // rsi
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // r8
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  __m128i si128; // xmm0
  __int64 v120; // rax
  __m128i *v121; // rdx
  _DWORD *v122; // rax
  __m128i v123; // xmm0
  __int64 v124; // rax
  __m128i *v125; // rdx
  _DWORD *v126; // rcx
  int v127; // r13d
  int v128; // [rsp+8h] [rbp-130h]
  int v129; // [rsp+10h] [rbp-128h]
  double v130; // [rsp+10h] [rbp-128h]
  __int64 v131; // [rsp+10h] [rbp-128h]
  __int64 v132; // [rsp+18h] [rbp-120h]
  int v133; // [rsp+20h] [rbp-118h]
  __m128i v134; // [rsp+20h] [rbp-118h]
  __int64 v135; // [rsp+20h] [rbp-118h]
  int v136; // [rsp+30h] [rbp-108h]
  int v137[4]; // [rsp+30h] [rbp-108h]
  __int64 v138; // [rsp+30h] [rbp-108h]
  int v139; // [rsp+40h] [rbp-F8h]
  int v141; // [rsp+50h] [rbp-E8h]
  __int64 v142; // [rsp+50h] [rbp-E8h]
  int v143; // [rsp+60h] [rbp-D8h]
  __m128i v144; // [rsp+60h] [rbp-D8h]
  __m128i v145; // [rsp+60h] [rbp-D8h]
  __int64 v146; // [rsp+78h] [rbp-C0h]
  __int64 v147; // [rsp+88h] [rbp-B0h]
  int v148; // [rsp+90h] [rbp-A8h]
  int v149; // [rsp+94h] [rbp-A4h]
  __int64 v150; // [rsp+98h] [rbp-A0h]
  __int64 v151; // [rsp+A0h] [rbp-98h]
  __int64 v152; // [rsp+A8h] [rbp-90h]
  __int64 v153; // [rsp+B0h] [rbp-88h]
  __int64 v154; // [rsp+B8h] [rbp-80h]
  __int64 v155; // [rsp+C0h] [rbp-78h]
  int v156; // [rsp+C8h] [rbp-70h]
  void *s; // [rsp+D0h] [rbp-68h]
  signed int v158; // [rsp+D8h] [rbp-60h]
  int v159; // [rsp+DCh] [rbp-5Ch]
  CoinArrayWithLength *v160; // [rsp+E0h] [rbp-58h]
  CoinArrayWithLength *v161; // [rsp+E8h] [rbp-50h]
  int v162; // [rsp+F0h] [rbp-48h]
  unsigned int v163; // [rsp+F4h] [rbp-44h]
  const __m128i *v164; // [rsp+F8h] [rbp-40h]

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
  v161 = v8;
  if ( v5 < 0 )
    v7 = -1;
  CoinArrayWithLength::conditionalNew(v8, v7);
  v9 = *((_DWORD *)this + 8);
  if ( *((int *)this + 220) > -2 )
    v2 = *((_QWORD **)this + 109);
  v156 = (int)v2;
  v158 = abs32(*((_DWORD *)this + 217));
  if ( v9 )
  {
    if ( v9 / 8 <= 0 )
    {
      v105 = v2;
    }
    else
    {
      v103 = v2;
      v104 = (unsigned int)(v9 / 8 - 1);
      do
      {
        *v103 = 0;
        v103[1] = 0;
        v103 += 8;
        *(v103 - 6) = 0;
        *(v103 - 5) = 0;
        *(v103 - 4) = 0;
        *(v103 - 3) = 0;
        *(v103 - 2) = 0;
        *(v103 - 1) = 0;
      }
      while ( v103 != &v2[8 * v104 + 8] );
      v105 = &v2[8 * (int)v104 + 8];
    }
    switch ( v9 % 8 )
    {
      case 1:
        goto LABEL_211;
      case 2:
        goto LABEL_210;
      case 3:
        goto LABEL_209;
      case 4:
        goto LABEL_208;
      case 5:
        goto LABEL_207;
      case 6:
        goto LABEL_206;
      case 7:
        v105[6] = 0;
LABEL_206:
        v105[5] = 0;
LABEL_207:
        v105[4] = 0;
LABEL_208:
        v105[3] = 0;
LABEL_209:
        v105[2] = 0;
LABEL_210:
        v105[1] = 0;
LABEL_211:
        *v105 = 0;
        break;
      default:
        break;
    }
  }
  v160 = (CoinFactorization *)((char *)this + 896);
  CoinArrayWithLength::conditionalNew((CoinFactorization *)((char *)this + 896), 4000);
  v10 = 0;
  v11 = *((void **)this + 112);
  if ( *((int *)this + 226) <= -2 )
    v11 = nullptr;
  s = v11;
  if ( *((int *)this + 120) > -2 )
    v10 = *((_QWORD *)this + 59);
  v155 = v10;
  v12 = *((_DWORD *)this + 8);
  v149 = v12;
  if ( v12 )
  {
    v117 = v12 + 7;
    if ( *((int *)this + 8) >= 0 )
      v117 = *((_DWORD *)this + 8);
    v118 = v117 >> 3;
    if ( v118 <= 0 )
    {
      v122 = (_DWORD *)v155;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_294F10);
      v120 = (unsigned int)(v118 - 1);
      v121 = (__m128i *)v155;
      do
      {
        *v121 = si128;
        v121 += 2;
        v121[-1] = si128;
      }
      while ( (__m128i *)(v155 + 32 * v120 + 32) != v121 );
      v122 = (_DWORD *)(v155 + 32 * ((int)v120 + 1LL));
    }
    switch ( v149 % 8 )
    {
      case 1:
        goto LABEL_225;
      case 2:
        goto LABEL_224;
      case 3:
        goto LABEL_223;
      case 4:
        goto LABEL_222;
      case 5:
        goto LABEL_221;
      case 6:
        goto LABEL_220;
      case 7:
        v122[6] = 2147483638;
LABEL_220:
        v122[5] = 2147483638;
LABEL_221:
        v122[4] = 2147483638;
LABEL_222:
        v122[3] = 2147483638;
LABEL_223:
        v122[2] = 2147483638;
LABEL_224:
        v122[1] = 2147483638;
LABEL_225:
        *v122 = 2147483638;
        break;
      default:
        break;
    }
    v149 = *((_DWORD *)this + 8);
  }
  v13 = *((_QWORD *)this + 26);
  v14 = *((_QWORD *)this + 29);
  v15 = *((_QWORD *)this + 32);
  v16 = *((_QWORD *)this + 95);
  v17 = *((_DWORD *)this + 288);
  if ( *((int *)this + 54) <= -2 )
    v13 = 0;
  v150 = v13;
  v18 = *((_QWORD *)this + 81);
  if ( *((int *)this + 60) <= -2 )
    v14 = 0;
  if ( *((int *)this + 66) <= -2 )
    v15 = 0;
  if ( *((int *)this + 164) <= -2 )
    v18 = 0;
  v132 = v18;
  if ( *((int *)this + 192) <= -2 )
    v16 = 0;
  if ( v17 <= 2 && *((_DWORD *)this + 11) == v149 )
  {
    v106 = *((_QWORD *)this + 10);
    v107 = *((_QWORD *)this + 50);
    v108 = *((_QWORD *)this + 53);
    if ( *((int *)this + 22) <= -2 )
      v106 = 0;
    v131 = v106;
    if ( *((int *)this + 102) <= -2 )
      v107 = 0;
    if ( *((int *)this + 108) <= -2 )
      v108 = 0;
    if ( v149 > 0 )
    {
      v109 = 0;
      do
      {
        if ( *(_DWORD *)(v14 + 4 * v109) == 1 )
        {
          v110 = *(int *)(v132 + 4 * v109);
          if ( *(double *)(v6 + 8 * v110) == -1.0 && !*(_DWORD *)(v15 + 4 * v109) )
          {
            v111 = *(int *)(v3 + 4 * v110);
            v112 = *(_DWORD *)(4 * v111 + v150);
            if ( v112 > 0 )
            {
              *((_DWORD *)this + 18) -= v112;
              v142 = v109;
              v138 = v16;
              v113 = *(int *)(v107 + 4 * v111);
              v114 = *(int *)(v108 + 4 * v111);
              v135 = v15;
              *(_DWORD *)(v107 + 4 * v114) = v113;
              *(_DWORD *)(v108 + 4 * v113) = v114;
              *(_DWORD *)(v107 + 4 * v111) = *((_DWORD *)this + 14);
              *(_DWORD *)(v108 + 4 * v111) = -2;
              CoinFactorization::deleteLink(this, v111);
              v109 = v142;
              v16 = v138;
              v15 = v135;
              *(_DWORD *)(4 * v111 + v150) = -1;
              *(_DWORD *)(v14 + 4 * v142) = 0;
              v115 = *((_DWORD *)this + 15) + 1;
              *((_DWORD *)this + 15) = v115;
              *(_DWORD *)(v138 + 4LL * v115) = 0;
              *(_DWORD *)(v131 + 4LL * *((int *)this + 14)) = v142;
              v116 = *((_DWORD *)this + 11);
              ++*((_DWORD *)this + 14);
              v149 = v116;
            }
          }
        }
        ++v109;
      }
      while ( (int)v109 < v149 );
    }
    CoinFactorization::preProcess(this, 4, -1);
    v149 = *((_DWORD *)this + 8);
    if ( v149 )
    {
      if ( v149 / 8 <= 0 )
      {
        v126 = (_DWORD *)v155;
      }
      else
      {
        v123 = _mm_load_si128((const __m128i *)&xmmword_294F10);
        v124 = (unsigned int)(v149 / 8 - 1);
        v125 = (__m128i *)v155;
        do
        {
          *v125 = v123;
          v125 += 2;
          v125[-1] = v123;
        }
        while ( (__m128i *)(v155 + 32 * v124 + 32) != v125 );
        v126 = (_DWORD *)(v155 + 32 * ((int)v124 + 1LL));
      }
      switch ( v149 % 8 )
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
          v126[6] = 2147483638;
LABEL_236:
          v126[5] = 2147483638;
LABEL_237:
          v126[4] = 2147483638;
LABEL_238:
          v126[3] = 2147483638;
LABEL_239:
          v126[2] = 2147483638;
LABEL_240:
          v126[1] = 2147483638;
LABEL_241:
          *v126 = 2147483638;
          break;
        default:
          break;
      }
      v17 = *((_DWORD *)this + 288);
      v149 = *((_DWORD *)this + 8);
    }
    else
    {
      v17 = *((_DWORD *)this + 288);
    }
  }
  v19 = v3;
  v20 = *((_QWORD *)this + 38);
  v21 = *((_DWORD *)this + 45);
  v22 = *(double *)this;
  *((_DWORD *)this + 144) = *((_DWORD *)this + 14);
  v23 = 0;
  v148 = v21;
  if ( *((int *)this + 78) <= -2 )
    v20 = 0;
  v147 = v20;
  v24 = *((_QWORD *)this + 35);
  if ( *((int *)this + 72) <= -2 )
    v24 = 0;
  v154 = v24;
  if ( *((int *)this + 48) > -2 )
    v23 = *((_QWORD *)this + 23);
  v152 = v23;
  CoinFactorization::separateLinks(this, 1, v17 > 1);
  v25 = _mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  v26 = v25;
  v27 = 5;
  v28 = *((_DWORD *)this + 125);
  v29 = -(__int64)(v14 >> 2) & 3;
  v30 = (_DWORD *)v14;
  v159 = 1000;
  v162 = -(int)(v14 >> 2) & 3;
  v143 = 1;
  if ( (unsigned int)(v29 + 3) >= 5 )
    v27 = v29 + 3;
  v163 = v27;
  v31 = (const __m128i *)(v14 + 4LL * (unsigned int)v29);
  v32 = v4;
  v164 = v31;
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
          goto LABEL_142;
        }
        while ( 1 )
        {
          v34 = *(int *)(v154 + 4LL * v33);
          v35 = 0;
          if ( *((int *)this + 22) > -2 )
            v35 = *((_QWORD *)this + 10);
          v153 = v35;
          if ( v33 == 1 && *(int *)(v154 + 4) >= 0 && !*((_DWORD *)this + 288) )
            break;
          if ( (int)v34 >= 0 )
          {
            v133 = -1;
            v139 = -1;
            v128 = -1;
            v36 = *((_DWORD *)this + 8);
            goto LABEL_44;
          }
LABEL_64:
          v33 = ++v143;
          if ( v143 > v28 )
            goto LABEL_65;
        }
        v36 = *((_DWORD *)this + 8);
        if ( (int)v34 < 0 )
          goto LABEL_136;
        if ( (int)v34 < v36 )
        {
          while ( 1 )
          {
            LODWORD(v34) = *(_DWORD *)(v147 + 4 * v34);
            if ( (int)v34 < 0 )
              break;
            if ( (int)v34 >= v36 )
              goto LABEL_180;
          }
LABEL_136:
          v133 = -1;
          v139 = -1;
          v128 = -1;
          goto LABEL_137;
        }
LABEL_180:
        v99 = v34 - v36;
        v100 = v99;
        v139 = v99;
        v101 = *(int *)(v132 + 4LL * v99);
        v102 = *(_DWORD *)(v19 + 4 * v101);
        v133 = v101;
        v128 = v102;
        if ( v102 >= 0 )
        {
          v46 = v30[v100];
          v136 = -1;
          v74 = 4LL * v102;
          goto LABEL_104;
        }
LABEL_137:
        LODWORD(v34) = *(_DWORD *)(v154 + 4);
LABEL_44:
        v37 = 1.797693134862316e308;
        v129 = 0;
        v136 = -1;
        v38 = v143 - 1;
        v39 = v32;
LABEL_45:
        ++v129;
        v146 = 4LL * (int)v34;
        v141 = *(_DWORD *)(v147 + v146);
        if ( (int)v34 >= v36 )
        {
          v53 = v34 - v149;
          v54 = *(_DWORD *)(v132 + 4LL * v53);
          v55 = v54;
          if ( v54 < v54 + v30[v53] )
          {
            v56 = v139;
            v57 = v133;
            v58 = v136;
            while ( 1 )
            {
              if ( COERCE_DOUBLE(*(_QWORD *)(v6 + 8 * v55) & v25.m128i_i64[0]) >= COERCE_DOUBLE(
                                                                                    *(_QWORD *)(v6 + 8LL * v54)
                                                                                  & v25.m128i_i64[0])
                                                                                * v22 )
              {
                v59 = *(_DWORD *)(v150 + 4LL * *(int *)(v19 + 4 * v55));
                if ( v37 > (double)(v59 * v38) )
                {
                  if ( v143 + 1 >= v59 )
                  {
                    v139 = v53;
                    v133 = v55;
                    LODWORD(v34) = -1;
                    v128 = *(_DWORD *)(v19 + 4 * v55);
                    v37 = (double)(v59 * v38);
                    v136 = -1;
                    goto LABEL_77;
                  }
                  v37 = (double)(v59 * v38);
                  v57 = v55;
                  v56 = v53;
                  v128 = *(_DWORD *)(v19 + 4 * v55);
                  v58 = -1;
                }
              }
              if ( v54 + (unsigned __int64)(unsigned int)(v30[v53] - 1) + 1 == ++v55 )
              {
                LODWORD(v34) = *(_DWORD *)(v147 + v146);
                v139 = v56;
                v133 = v57;
                v136 = v58;
                goto LABEL_77;
              }
            }
          }
          LODWORD(v34) = *(_DWORD *)(v147 + v146);
LABEL_77:
          if ( v128 < 0 || v148 > v129 )
            goto LABEL_79;
          goto LABEL_127;
        }
        v40 = *(_DWORD *)(v152 + 4LL * (int)v34);
        if ( v40 < v143 + v40 )
        {
          v41 = v40;
          v42 = v40 + (unsigned __int64)(unsigned int)(v143 - 1) + 1;
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
            v48 = *(int *)(v132 + 4 * v44);
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
              if ( v128 == -1 )
                v43 = 1;
              goto LABEL_48;
            }
            if ( v46 < v143 )
            {
              v32 = v39;
              v73 = (int)v34;
              if ( v148 > v129 )
              {
                v133 = -1;
                goto LABEL_103;
              }
              v136 = v41;
              v139 = v47;
              v128 = v34;
              v133 = -1;
              v74 = 4LL * (int)v34;
              goto LABEL_104;
            }
            ++v41;
            v43 = 0;
            v136 = v45;
            v139 = v47;
            v128 = v34;
            v37 = (double)(v38 * v30[v44]);
            v133 = -1;
            if ( v42 == v41 )
            {
LABEL_58:
              if ( v128 >= 0 && v148 <= v129 )
                goto LABEL_127;
              if ( !v43 )
                goto LABEL_61;
              v60 = 0;
              v61 = 0;
              v62 = 0;
              v63 = *((_QWORD *)this + 38);
              v64 = *((_QWORD *)this + 35);
              v65 = *((_QWORD *)this + 41);
              if ( *((int *)this + 78) > -2 )
                v61 = *((_QWORD *)this + 38);
              if ( *((int *)this + 72) > -2 )
                v62 = *((_QWORD *)this + 35);
              v151 = v62;
              v66 = (int *)(v61 + v146);
              if ( *((int *)this + 84) > -2 )
                v60 = *((_QWORD *)this + 41);
              v67 = *v66;
              v68 = *(_DWORD *)(v60 + 4LL * (int)v34);
              if ( v68 < 0 )
                *(_DWORD *)(v151 + 4LL * (-2 - v68)) = v67;
              else
                *(_DWORD *)(v61 + 4LL * v68) = v67;
              if ( (int)v67 >= 0 )
                *(_DWORD *)(v60 + 4 * v67) = v68;
              *v66 = -2;
              *(_DWORD *)(v60 + 4LL * (int)v34) = -2;
              v69 = *((_DWORD *)this + 125) + 1;
              if ( *((int *)this + 78) <= -2 )
                v63 = 0;
              if ( *((int *)this + 72) <= -2 )
                v64 = 0;
              if ( *((int *)this + 84) <= -2 )
                v65 = 0;
              v70 = (int *)(v64 + 4LL * v69);
              v71 = *v70;
              v72 = (_DWORD *)(v146 + v63);
              *(_DWORD *)(v65 + 4LL * (int)v34) = -2 - v69;
              *v70 = v34;
              if ( (int)v71 < 0 )
              {
                *v72 = -1;
              }
              else
              {
                *v72 = v71;
                *(_DWORD *)(v65 + 4 * v71) = v34;
              }
              LODWORD(v34) = v141;
LABEL_79:
              if ( (int)v34 < 0 )
                goto LABEL_62;
LABEL_80:
              v36 = *((_DWORD *)this + 8);
              goto LABEL_45;
            }
          }
        }
        if ( v128 >= 0 && v148 <= v129 )
        {
LABEL_127:
          v32 = v39;
          v74 = 4LL * v128;
          v46 = v30[v139];
          goto LABEL_104;
        }
LABEL_61:
        LODWORD(v34) = *(_DWORD *)(v147 + 4LL * (int)v34);
        if ( v141 >= 0 )
          goto LABEL_80;
LABEL_62:
        v32 = v39;
        if ( v128 < 0 )
        {
          v28 = *((_DWORD *)this + 125);
          goto LABEL_64;
        }
        v44 = v139;
        v73 = v128;
        v45 = v136;
        v47 = v139;
        LODWORD(v34) = v128;
LABEL_103:
        v46 = v30[v44];
        v136 = v45;
        v139 = v47;
        v128 = v34;
        v74 = 4 * v73;
LABEL_104:
        v75 = *(_DWORD *)(v150 + v74) - 1;
        *((_DWORD *)this + 18) -= v75 + v46;
        if ( v46 - 1 <= 0 )
        {
          *(__m128i *)v137 = v26;
          v134 = v25;
          v130 = v22;
          v85 = CoinFactorization::pivotColumnSingleton(this, v128, v139);
          goto LABEL_140;
        }
        if ( v75 <= 0 )
        {
          *(__m128i *)v137 = v26;
          v134 = v25;
          v130 = v22;
          v85 = CoinFactorization::pivotRowSingleton(this, v128, v139);
          goto LABEL_140;
        }
        if ( v46 == 2 )
        {
          *(__m128i *)v137 = v26;
          v134 = v25;
          v130 = v22;
          v85 = CoinFactorization::pivotOneOtherRow(this, v128, v139);
LABEL_140:
          v22 = v130;
          v25 = v134;
          v26 = *(__m128i *)v137;
          if ( v85 )
            goto LABEL_115;
          goto LABEL_141;
        }
        v76 = v46 + 4;
        if ( (v76 & 0xF) != 0 )
          v76 = (v76 & 0xFFFFFFF0) + 16;
        v77 = (int)(v76 + 31) >> 5;
        v78 = v77 * v75;
        v79 = v78;
        if ( v159 < v78 )
        {
          v80 = 4 * v78;
          if ( v78 < 0 )
            v80 = -1;
          v144 = v26;
          CoinArrayWithLength::conditionalNew(v160, v80);
          v26 = v144;
          v159 = v79;
          if ( *((int *)this + 226) < -1 )
            s = nullptr;
          else
            s = *((void **)this + 112);
        }
        v145 = v26;
        v81 = CoinFactorization::pivot<int>((int)this, v128, v139, v133, v136, v156, s, v77, v155, 2147483637);
        v26 = v145;
        if ( !v81 )
        {
LABEL_141:
          v52 = -99;
          goto LABEL_142;
        }
LABEL_115:
        *(_DWORD *)(v153 + 4LL * *((int *)this + 14)) = v139;
        v82 = *((_DWORD *)this + 14) + 1;
        *((_DWORD *)this + 14) = v82;
        if ( !v158 )
        {
          v28 = *((_DWORD *)this + 125);
          v143 = 1;
          continue;
        }
        break;
      }
      v83 = 3.5;
      v84 = *((_DWORD *)this + 8) - v82;
      if ( v84 <= 2000 )
      {
        v83 = 2.75;
        if ( v84 <= 800 )
        {
          v83 = 1.5;
          if ( v84 > 256 )
            v83 = 2.0;
        }
      }
      if ( v83 * (double)*((int *)this + 18) <= (double)v84 * (double)v84 || v158 >= v84 || (v84 & 7) != 0 )
      {
        v143 = 1;
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
      if ( v163 > v87 - 1 )
      {
        v97 = 0;
        v96 = 0;
        goto LABEL_159;
      }
      if ( v162 )
      {
        v88 = 1;
        v89 = *v30 != 0;
        if ( v162 != 1 )
        {
          if ( v30[1] )
            ++v89;
          v88 = 2;
          if ( v162 != 2 )
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
      v90 = v87 - v162;
      v91 = v164;
      v92 = 0;
      v93 = 0;
      do
      {
        v94 = _mm_load_si128(v91);
        ++v93;
        ++v91;
        v92 = _mm_sub_epi32(v92, _mm_andnot_si128(_mm_cmpeq_epi32(v94, (__m128i)0LL), (__m128i)-1LL));
      }
      while ( (unsigned int)(v87 - v162) >> 2 > v93 );
      v95 = _mm_add_epi32(v92, _mm_srli_si128(v92, 8));
      v96 = v89 + _mm_cvtsi128_si32(_mm_add_epi32(v95, _mm_srli_si128(v95, 4)));
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
    if ( v84 == v96 )
    {
      v127 = v96;
      if ( (*((_BYTE *)this + 496) & 4) != 0 )
        goto LABEL_249;
    }
    else
    {
      if ( *((_DWORD *)this + 217) )
      {
        v28 = *((_DWORD *)this + 125);
        v158 = 0;
        v143 = 1;
        continue;
      }
      v127 = v96;
      if ( (*((_BYTE *)this + 496) & 4) == 0 )
      {
LABEL_245:
        v52 = 2;
        *((_DWORD *)this + 217) = -v127;
        goto LABEL_142;
      }
LABEL_249:
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
    break;
  }
  v52 = 2;
  if ( !*((_DWORD *)this + 217) )
    goto LABEL_245;
LABEL_142:
  CoinArrayWithLength::conditionalDelete(v161);
  CoinArrayWithLength::conditionalDelete(v160);
  return v52;
}

