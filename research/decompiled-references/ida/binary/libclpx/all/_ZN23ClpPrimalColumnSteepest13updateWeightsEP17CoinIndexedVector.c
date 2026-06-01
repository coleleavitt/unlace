void __fastcall ClpPrimalColumnSteepest::updateWeights(ClpPrimalColumnSteepest *this, CoinIndexedVector *a2)
{
  int v2; // r12d
  int v3; // ecx
  __int64 v4; // r10
  __int64 v5; // r8
  bool v6; // zf
  int v7; // ebp
  const __m128i *v8; // rax
  double *v9; // rdx
  __int64 v10; // r11
  __int64 v11; // r9
  double v12; // xmm1_8
  __int64 v13; // r15
  int v14; // ebx
  __int64 v15; // r13
  double v16; // xmm2_8
  int v17; // r14d
  __int64 v18; // rsi
  __int64 v19; // rbp
  int v20; // ecx
  double *v21; // rcx
  double v22; // xmm0_8
  __int64 v23; // rcx
  __int64 v24; // rax
  double v25; // xmm2_8
  double *v26; // rax
  __int64 v27; // rcx
  double j; // xmm2_8
  __int64 v29; // rsi
  double v30; // xmm0_8
  double v31; // xmm0_8
  double v32; // xmm3_8
  double *v33; // rax
  double v34; // xmm0_8
  double v35; // xmm3_8
  double v36; // xmm4_8
  double v37; // xmm1_8
  double v38; // xmm2_8
  double v39; // xmm0_8
  double v40; // xmm1_8
  __int64 v41; // rsi
  double v42; // xmm2_8
  __int64 v43; // rbp
  __int64 v44; // rcx
  __int64 v45; // r13
  int v46; // esi
  __int64 v47; // rsi
  __int64 v48; // rax
  double v49; // xmm2_8
  double *v50; // rax
  int *v51; // rcx
  double i; // xmm2_8
  __int64 v53; // rsi
  double *v54; // r9
  double v55; // xmm0_8
  double v56; // xmm3_8
  unsigned int v57; // esi
  int *v58; // rdx
  const __m128i *v59; // rcx
  __int64 v60; // rsi
  __m128i v61; // xmm1
  __m128i v62; // xmm0
  __int64 v63; // rdx
  int v64; // eax
  _QWORD *v65; // rdx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __int64 v69; // r10
  int v70; // r11d
  __int64 v71; // r13
  __int64 v72; // rbp
  int v73; // ecx
  __int64 v74; // r11
  int v75; // r13d
  __int64 v76; // rcx
  __int64 v77; // rbp
  int v78; // esi
  CoinMessageHandler *v79; // rax
  CoinMessageHandler *v80; // rax
  double v81; // xmm0_8
  __int64 v82; // rax
  __int64 v83; // r12
  __int64 v84; // rcx
  __int64 v85; // rbp
  int v86; // esi
  __int64 v87; // rbp
  __int64 v88; // r11
  int v89; // ecx
  unsigned int v90; // esi
  int *v91; // rdx
  const __m128i *v92; // rcx
  __int64 v93; // rsi
  __m128i v94; // xmm1
  __m128i v95; // xmm0
  __int64 v96; // rdx
  __int64 v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rax
  double v100; // xmm0_8
  int *v101; // rdx
  const __m128i *v102; // rcx
  int v103; // r11d
  int *v104; // rdx
  const __m128i *v105; // rcx
  int v106; // r11d
  signed int v107; // [rsp+0h] [rbp-78h]
  int *v108; // [rsp+10h] [rbp-68h]
  signed int v109; // [rsp+1Ch] [rbp-5Ch]
  __int64 v110; // [rsp+20h] [rbp-58h]

  v2 = *((_DWORD *)this + 19);
  if ( v2 == 4 )
  {
    if ( !*((_DWORD *)this + 22) )
      return;
    v3 = 3;
  }
  else
  {
    if ( v2 == 5 )
      return;
    v3 = *((_DWORD *)this + 19);
  }
  v4 = *((_QWORD *)this + 6);
  v5 = *((_QWORD *)this + 1);
  v6 = *((_BYTE *)a2 + 28) == 0;
  v7 = *((_DWORD *)a2 + 4);
  v8 = *(const __m128i **)a2;
  v9 = *((double **)a2 + 1);
  v10 = *(_QWORD *)(v4 + 8);
  v11 = *(_QWORD *)(v5 + 1256);
  v12 = 0.0;
  v13 = *((_QWORD *)this + 4);
  v108 = *(int **)v4;
  v107 = *(_DWORD *)(v5 + 1152);
  v109 = *(_DWORD *)(v5 + 1160);
  v14 = *(_DWORD *)(v5 + 1168);
  *((_QWORD *)this + 3) = 0;
  *((_DWORD *)this + 23) = v14;
  if ( v6 )
  {
    if ( v14 >= 0 )
    {
      if ( v3 != 1 )
      {
        v15 = *((_QWORD *)this + 8);
        if ( (unsigned int)(v2 - 4) > 1 || *((int *)this + 22) > 1 )
        {
          if ( v7 <= 0 )
          {
            v25 = -0.0;
            v17 = 0;
            v26 = (double *)(v10 + 8LL * v14);
          }
          else
          {
            v16 = 0.0;
            v17 = 0;
            v18 = (__int64)v8->m128i_i64 + 4 * (unsigned int)(v7 - 1) + 4;
            do
            {
              v19 = v8->m128i_i32[0];
              v20 = *(_DWORD *)(v15 + 4LL * (*(int *)(v11 + 4 * v19) >> 5));
              if ( _bittest(&v20, *(_DWORD *)(v11 + 4 * v19)) )
              {
                v21 = &v9[v19];
                *((double *)this + 3) = v16 + *v21 * *v21;
                v22 = *v21;
                v23 = v17++;
                *(double *)(v10 + 8 * v19) = v22 * -2.0;
                v108[v23] = v19;
                v16 = *((double *)this + 3);
              }
              v8 = (const __m128i *)((char *)v8 + 4);
            }
            while ( v8 != (const __m128i *)v18 );
            if ( *(double *)(v10 + 8LL * v14) == 0.0 && v16 > 0.0 )
            {
              v24 = v17;
              v25 = v16 * -2.0;
              ++v17;
              v108[v24] = v14;
              v26 = (double *)(v10 + 8LL * v14);
            }
            else
            {
              if ( v16 <= 0.0 )
                v25 = -0.0;
              else
                v25 = v16 * -2.0;
              v26 = (double *)(v10 + 8LL * v14);
            }
          }
          *v26 = v25;
        }
        else
        {
          if ( v7 > 0 )
          {
            v87 = (__int64)v8->m128i_i64 + 4 * (unsigned int)(v7 - 1) + 4;
            do
            {
              v88 = v8->m128i_i32[0];
              v89 = *(_DWORD *)(v15 + 4LL * (*(int *)(v11 + 4 * v88) >> 5));
              if ( _bittest(&v89, *(_DWORD *)(v11 + 4 * v88)) )
                *((double *)this + 3) = v9[v88] * v9[v88] + *((double *)this + 3);
              v8 = (const __m128i *)((char *)v8 + 4);
            }
            while ( (const __m128i *)v87 != v8 );
          }
          v17 = 0;
        }
        v67 = *(_DWORD *)(v15 + 4LL * (v107 >> 5));
        if ( _bittest(&v67, v107) )
          *((double *)this + 3) = *((double *)this + 3) + 1.0;
        v65 = (_QWORD *)(v13 + 8LL * v109);
        v68 = *(_DWORD *)(v15 + 4LL * (v109 >> 5));
        if ( _bittest(&v68, v109) )
        {
LABEL_82:
          *v65 = 0x4000000000000000LL;
LABEL_83:
          *(_DWORD *)(v4 + 16) = v17;
          v12 = *((double *)this + 3);
          if ( v17 )
            goto LABEL_28;
          goto LABEL_27;
        }
LABEL_74:
        *v65 = 0x3FF0000000000000LL;
        goto LABEL_83;
      }
      if ( v7 <= 0 )
        goto LABEL_150;
      v51 = (int *)v8;
      for ( i = 0.0; ; i = *((double *)this + 3) )
      {
        v53 = *v51++;
        v54 = &v9[v53];
        *((double *)this + 3) = i + *v54 * *v54;
        *(double *)(v10 + 8 * v53) = *v54 * -2.0;
        if ( v51 == (int *)((char *)v8->m128i_i64 + 4 * (unsigned int)(v7 - 1) + 4) )
          break;
      }
      v55 = *((double *)this + 3);
      if ( v55 <= 0.0 )
LABEL_150:
        v56 = -0.0;
      else
        v56 = -2.0 * v55;
      *(double *)(v10 + 8LL * v14) = v56;
      *((double *)this + 3) = *((double *)this + 3) + 1.0;
      *(_QWORD *)(v13 + 8LL * v109) = 0x4000000000000000LL;
      if ( v7 && v8 != (const __m128i *)v108 )
      {
        v57 = v7 >> 3;
        if ( v7 >> 3 > 0 )
        {
          if ( (v8 >= (const __m128i *)v108 + 2 || v108 >= v8[2].m128i_i32) && v57 > 1 )
          {
            v58 = v108;
            v59 = v8;
            v60 = v57 - 1;
            do
            {
              v61 = _mm_loadu_si128(v59);
              v58 += 8;
              v59 += 2;
              v62 = _mm_loadu_si128(v59 - 1);
              *((__m128i *)v58 - 2) = v61;
              *((__m128i *)v58 - 1) = v62;
            }
            while ( &v108[8 * v60 + 8] != v58 );
          }
          else
          {
            v101 = v108;
            v102 = v8;
            v60 = v57 - 1;
            do
            {
              v103 = v102->m128i_i32[0];
              v101 += 8;
              v102 += 2;
              *(v101 - 8) = v103;
              *(v101 - 7) = v102[-2].m128i_i32[1];
              *(v101 - 6) = v102[-2].m128i_i32[2];
              *(v101 - 5) = v102[-2].m128i_i32[3];
              *(v101 - 4) = v102[-1].m128i_i32[0];
              *(v101 - 3) = v102[-1].m128i_i32[1];
              *(v101 - 2) = v102[-1].m128i_i32[2];
              *(v101 - 1) = v102[-1].m128i_i32[3];
            }
            while ( &v108[8 * v60 + 8] != v101 );
          }
          v63 = 32 * ((int)v60 + 1LL);
          v108 = (int *)((char *)v108 + v63);
          v8 = (const __m128i *)((char *)v8 + v63);
        }
        switch ( v7 % 8 )
        {
          case 1:
            goto LABEL_139;
          case 2:
            goto LABEL_138;
          case 3:
            goto LABEL_137;
          case 4:
            goto LABEL_136;
          case 5:
            goto LABEL_135;
          case 6:
            goto LABEL_134;
          case 7:
            goto LABEL_133;
          default:
            break;
        }
LABEL_140:
        *(_DWORD *)(v4 + 16) = v7;
        v12 = *((double *)this + 3);
        goto LABEL_28;
      }
      goto LABEL_26;
    }
    if ( v3 != 1 )
    {
      v69 = *((_QWORD *)this + 8);
      v70 = (*(_DWORD *)(v69 + 4LL * (v107 >> 5)) >> v107) & 1;
      if ( v7 > 0 )
      {
        v71 = (__int64)v8->m128i_i64 + 4 * (unsigned int)(v7 - 1) + 4;
        do
        {
          v72 = v8->m128i_i32[0];
          v73 = *(_DWORD *)(v69 + 4LL * (*(int *)(v11 + 4 * v72) >> 5));
          if ( _bittest(&v73, *(_DWORD *)(v11 + 4 * v72)) )
          {
            v12 = v12 + v9[v72] * v9[v72];
            *((double *)this + 3) = v12;
          }
          v8 = (const __m128i *)((char *)v8 + 4);
        }
        while ( (const __m128i *)v71 != v8 );
        if ( v70 )
          goto LABEL_95;
LABEL_29:
        if ( v12 >= 1.001e-30 )
          goto LABEL_31;
        goto LABEL_30;
      }
      if ( !v70 )
        goto LABEL_30;
LABEL_152:
      v12 = 1.0;
      goto LABEL_96;
    }
    if ( v7 <= 0 )
      goto LABEL_152;
    v97 = (__int64)v8->m128i_i64 + 4 * (unsigned int)(v7 - 1) + 4;
    do
    {
      v98 = v8->m128i_i32[0];
      v8 = (const __m128i *)((char *)v8 + 4);
      v12 = v12 + v9[v98] * v9[v98];
      *((double *)this + 3) = v12;
    }
    while ( (const __m128i *)v97 != v8 );
LABEL_95:
    v12 = v12 + 1.0;
LABEL_96:
    *((double *)this + 3) = v12;
    goto LABEL_29;
  }
  if ( v14 >= 0 )
  {
    if ( v3 != 1 )
    {
      v41 = *((_QWORD *)this + 8);
      v110 = v41;
      if ( (unsigned int)(v2 - 4) > 1 || *((int *)this + 22) > 1 )
      {
        if ( v7 <= 0 )
        {
          v49 = -0.0;
          v17 = 0;
          v50 = (double *)(v10 + 8LL * v14);
        }
        else
        {
          v42 = 0.0;
          v17 = 0;
          v43 = (unsigned int)(v7 - 1) + 1LL;
          v44 = 0;
          do
          {
            v45 = v8->m128i_i32[v44];
            v46 = *(_DWORD *)(v110 + 4LL * (*(int *)(v11 + 4 * v45) >> 5));
            if ( _bittest(&v46, *(_DWORD *)(v11 + 4 * v45)) )
            {
              v47 = v17++;
              *((double *)this + 3) = v42 + v9[v44] * v9[v44];
              *(double *)(v10 + 8 * v45) = v9[v44] * -2.0;
              v108[v47] = v45;
              v42 = *((double *)this + 3);
            }
            ++v44;
          }
          while ( v43 != v44 );
          if ( *(double *)(v10 + 8LL * v14) == 0.0 && v42 > 0.0 )
          {
            v48 = v17;
            v49 = v42 * -2.0;
            ++v17;
            v108[v48] = v14;
            v50 = (double *)(v10 + 8LL * v14);
          }
          else
          {
            if ( v42 <= 0.0 )
              v49 = -0.0;
            else
              v49 = v42 * -2.0;
            v50 = (double *)(v10 + 8LL * v14);
          }
        }
        v41 = v110;
        *v50 = v49;
      }
      else if ( v7 <= 0 )
      {
        v17 = 0;
      }
      else
      {
        v83 = *((_QWORD *)this + 8);
        v84 = 0;
        v85 = (unsigned int)(v7 - 1) + 1LL;
        do
        {
          v86 = *(_DWORD *)(v83 + 4LL * (*(int *)(v11 + 4LL * v8->m128i_i32[v84]) >> 5));
          if ( _bittest(&v86, *(_DWORD *)(v11 + 4LL * v8->m128i_i32[v84])) )
            *((double *)this + 3) = v9[v84] * v9[v84] + *((double *)this + 3);
          ++v84;
        }
        while ( v85 != v84 );
        v17 = 0;
        v41 = v110;
      }
      v64 = *(_DWORD *)(v41 + 4LL * (v107 >> 5));
      if ( _bittest(&v64, v107) )
        *((double *)this + 3) = *((double *)this + 3) + 1.0;
      v65 = (_QWORD *)(v13 + 8LL * v109);
      v66 = *(_DWORD *)(v110 + 4LL * (v109 >> 5));
      if ( _bittest(&v66, v109) )
        goto LABEL_82;
      goto LABEL_74;
    }
    if ( v7 <= 0 )
      goto LABEL_149;
    v27 = 0;
    for ( j = 0.0; ; j = *((double *)this + 3) )
    {
      v29 = v8->m128i_i32[v27];
      *((double *)this + 3) = j + v9[v27] * v9[v27];
      v30 = v9[v27++];
      *(double *)(v10 + 8 * v29) = v30 * -2.0;
      if ( (unsigned int)(v7 - 1) + 1LL == v27 )
        break;
    }
    v31 = *((double *)this + 3);
    if ( v31 <= 0.0 )
LABEL_149:
      v32 = -0.0;
    else
      v32 = -2.0 * v31;
    *(double *)(v10 + 8LL * v14) = v32;
    *((double *)this + 3) = *((double *)this + 3) + 1.0;
    *(_QWORD *)(v13 + 8LL * v109) = 0x4000000000000000LL;
    if ( v7 && v8 != (const __m128i *)v108 )
    {
      v90 = v7 >> 3;
      if ( v7 >> 3 > 0 )
      {
        if ( (v108 >= v8[2].m128i_i32 || v8 >= (const __m128i *)v108 + 2) && v90 > 1 )
        {
          v91 = v108;
          v92 = v8;
          v93 = v90 - 1;
          do
          {
            v94 = _mm_loadu_si128(v92);
            v91 += 8;
            v92 += 2;
            v95 = _mm_loadu_si128(v92 - 1);
            *((__m128i *)v91 - 2) = v94;
            *((__m128i *)v91 - 1) = v95;
          }
          while ( &v108[8 * v93 + 8] != v91 );
        }
        else
        {
          v104 = v108;
          v105 = v8;
          v93 = v90 - 1;
          do
          {
            v106 = v105->m128i_i32[0];
            v104 += 8;
            v105 += 2;
            *(v104 - 8) = v106;
            *(v104 - 7) = v105[-2].m128i_i32[1];
            *(v104 - 6) = v105[-2].m128i_i32[2];
            *(v104 - 5) = v105[-2].m128i_i32[3];
            *(v104 - 4) = v105[-1].m128i_i32[0];
            *(v104 - 3) = v105[-1].m128i_i32[1];
            *(v104 - 2) = v105[-1].m128i_i32[2];
            *(v104 - 1) = v105[-1].m128i_i32[3];
          }
          while ( &v108[8 * v93 + 8] != v104 );
        }
        v96 = 32 * ((int)v93 + 1LL);
        v108 = (int *)((char *)v108 + v96);
        v8 = (const __m128i *)((char *)v8 + v96);
      }
      switch ( v7 % 8 )
      {
        case 1:
          goto LABEL_139;
        case 2:
          goto LABEL_138;
        case 3:
          goto LABEL_137;
        case 4:
          goto LABEL_136;
        case 5:
          goto LABEL_135;
        case 6:
          goto LABEL_134;
        case 7:
LABEL_133:
          v108[6] = v8[1].m128i_i32[2];
LABEL_134:
          v108[5] = v8[1].m128i_i32[1];
LABEL_135:
          v108[4] = v8[1].m128i_i32[0];
LABEL_136:
          v108[3] = v8->m128i_i32[3];
LABEL_137:
          v108[2] = v8->m128i_i32[2];
LABEL_138:
          v108[1] = v8->m128i_i32[1];
LABEL_139:
          *v108 = v8->m128i_i32[0];
          break;
        default:
          goto LABEL_140;
      }
      goto LABEL_140;
    }
LABEL_26:
    *(_DWORD *)(v4 + 16) = v7;
    v12 = *((double *)this + 3);
    if ( v7 )
    {
LABEL_28:
      v2 = *((_DWORD *)this + 19);
      goto LABEL_29;
    }
LABEL_27:
    *(_BYTE *)(v4 + 28) = 0;
    goto LABEL_28;
  }
  if ( v3 == 1 )
  {
    if ( v7 <= 0 )
      goto LABEL_152;
    v99 = (__int64)&v9[(unsigned int)(v7 - 1) + 1];
    do
    {
      v100 = *v9++;
      v12 = v12 + v100 * v100;
      *((double *)this + 3) = v12;
    }
    while ( (double *)v99 != v9 );
    goto LABEL_95;
  }
  v74 = *((_QWORD *)this + 8);
  v75 = (*(_DWORD *)(v74 + 4LL * (v107 >> 5)) >> v107) & 1;
  if ( v7 > 0 )
  {
    v76 = 0;
    v77 = (unsigned int)(v7 - 1) + 1LL;
    do
    {
      v78 = *(_DWORD *)(v74 + 4LL * (*(int *)(v11 + 4LL * v8->m128i_i32[v76]) >> 5));
      if ( _bittest(&v78, *(_DWORD *)(v11 + 4LL * v8->m128i_i32[v76])) )
      {
        v12 = v12 + v9[v76] * v9[v76];
        *((double *)this + 3) = v12;
      }
      ++v76;
    }
    while ( v77 != v76 );
    if ( v75 )
      goto LABEL_95;
    goto LABEL_29;
  }
  if ( v75 )
    goto LABEL_152;
LABEL_30:
  v12 = 1.0e-30;
  *((_QWORD *)this + 3) = 0x39B4484BFEEBC2A0LL;
LABEL_31:
  v33 = (double *)(v13 + 8LL * v107);
  v34 = *v33;
  *v33 = v12;
  v35 = fmax(v12, v34) + 0.1;
  if ( v2 != 4 )
  {
    v36 = *((double *)this + 3);
    v37 = fabs(v36 - v34);
    if ( v37 <= 0.1 * v35 )
      goto LABEL_36;
    if ( v2 != 1 )
      goto LABEL_34;
    if ( v37 > v35 * 10.1 )
      goto LABEL_106;
    goto LABEL_36;
  }
  if ( *((_DWORD *)this + 22) != 1 )
  {
    v36 = *((double *)this + 3);
    v37 = fabs(v36 - v34);
    if ( v37 > 0.1 * v35 )
    {
LABEL_34:
      v38 = 0.99;
      goto LABEL_35;
    }
LABEL_36:
    if ( v14 < 0 )
      return;
    goto LABEL_37;
  }
  v36 = *((double *)this + 3);
  v37 = fabs(v36 - v34);
  if ( v37 <= 0.5 * v35 )
    goto LABEL_36;
  v38 = 0.9;
LABEL_35:
  if ( v37 <= v35 * v38 )
    goto LABEL_36;
LABEL_106:
  v79 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *(CoinMessageHandler **)(v5 + 344),
                                39,
                                (const CoinMessages *)(v5 + 416));
  v80 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v79);
  v81 = *((double *)this + 3);
  v82 = CoinMessageHandler::operator<<(v80);
  CoinMessageHandler::operator<<(v82, 0, v81);
  ClpPrimalColumnSteepest::initializeWeights(this);
  if ( v14 < 0 )
    return;
  v36 = 1.0;
  v13 = *((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 3) = 0x3FF0000000000000LL;
LABEL_37:
  v39 = *(double *)(v5 + 792);
  v40 = 1.0e30;
  if ( fabs(v39) <= 1.0e15 )
    v40 = v39 * v39;
  *(double *)(v13 + 8LL * *(int *)(v5 + 1160)) = v36 / v40;
}

