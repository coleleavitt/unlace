__int64 __fastcall ClpNode::applyNode(ClpNode *this, ClpSimplex *a2, int a3)
{
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // r10
  __int64 v8; // rbx
  int v9; // ebp
  int v10; // ecx
  __int64 v11; // r11
  int v12; // eax
  int v13; // eax
  __int64 result; // rax
  const void *v15; // rdi
  const ClpDualRowSteepest *v16; // rsi
  int v17; // ecx
  unsigned __int8 *v18; // rdi
  unsigned __int8 *v19; // rsi
  int v20; // r10d
  unsigned int v21; // r11d
  __int64 v22; // rax
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned __int8 *v25; // rdx
  unsigned __int8 *v26; // rax
  signed int v27; // r11d
  __int64 v28; // rax
  double *v29; // r10
  double *v30; // rdi
  int v31; // r11d
  __int64 v32; // rax
  unsigned int v33; // edx
  int v34; // ebx
  __int64 v35; // rcx
  unsigned int v36; // ebp
  __int64 v37; // rax
  unsigned int v38; // ebp
  double *v39; // rsi
  double *v40; // rcx
  int v41; // r11d
  __int64 v42; // rdx
  int v43; // r11d
  _QWORD *v44; // rsi
  _QWORD *v45; // r10
  __int64 *v46; // rdx
  _QWORD *v47; // rax
  __int64 v48; // xmm0_8
  __int64 v49; // rax
  _QWORD *v50; // r11
  _QWORD *v51; // r10
  __int64 *v52; // rdx
  _QWORD *v53; // rax
  __int64 v54; // xmm0_8
  __int64 v55; // rax
  _QWORD *v56; // rsi
  __int64 *v57; // rdi
  __int64 *v58; // r10
  __int64 *v59; // rdx
  __int64 *v60; // rax
  __int64 v61; // xmm0_8
  __int64 v62; // rax
  __m128d v63; // xmm1
  int v64; // esi
  double v65; // xmm0_8
  double v66; // xmm2_8
  int v67; // eax
  __m128d v68; // xmm2
  __int64 v69; // rbp
  int v70; // ebx
  int v71; // esi
  __m128d v72; // xmm2
  _QWORD *v73; // r11
  __int64 *v74; // rdx
  _QWORD *v75; // rax
  __int64 v76; // xmm0_8
  __int64 v77; // rax
  _QWORD *v78; // r11
  _QWORD *v79; // rsi
  __int64 *v80; // rdx
  _QWORD *v81; // rax
  __int64 v82; // xmm0_8
  __int64 v83; // rax
  _QWORD *v84; // rdx
  unsigned int *v85; // r10
  unsigned int *v86; // r11
  unsigned int v87; // edi
  __m128i *v88; // rax
  const __m128i *v89; // rdx
  __int64 v90; // rdi
  __m128i v91; // xmm1
  __m128i v92; // xmm0
  __int64 v93; // rax
  _QWORD *v94; // r10
  _QWORD *v95; // r11
  __int64 v96; // rdx
  __int64 *v97; // rax
  __int64 v98; // xmm0_8
  __int64 v99; // rax
  unsigned int *v100; // rdx
  unsigned int *v101; // rax
  unsigned int v102; // ebp
  __int64 v103; // rdx
  unsigned __int8 *v104; // rax
  unsigned __int8 v105; // bp
  __int64 v106; // [rsp+10h] [rbp-58h]
  __int64 v107; // [rsp+18h] [rbp-50h]
  __int64 v108; // [rsp+18h] [rbp-50h]

  v5 = *((int *)a2 + 27);
  v6 = *((_QWORD *)a2 + 22);
  v106 = *((_QWORD *)a2 + 23);
  if ( a3 <= 1 )
  {
    v63.m128d_f64[0] = *((double *)this + 1);
    v64 = *((_DWORD *)this + 29);
    v65 = v63.m128d_f64[0];
    v66 = fabs(v63.m128d_f64[0]);
    v67 = *((_BYTE *)this + 112) & 1;
    if ( (*((_BYTE *)this + 112) & 6) != 0 )
      v67 = 1 - v67;
    if ( v67 )
    {
      if ( v66 < 4.503599627370496e15 )
      {
        v68.m128d_f64[0] = (double)(int)v63.m128d_f64[0];
        *(_QWORD *)&v65 = COERCE_UNSIGNED_INT64(
                            COERCE_DOUBLE(
                              *(_QWORD *)&_mm_cmpgt_sd((__m128d)*(unsigned __int64 *)&v63.m128d_f64[0], v68).m128d_f64[0]
                            & 0x3FF0000000000000LL)
                          + v68.m128d_f64[0])
                        | *(_QWORD *)&v63.m128d_f64[0] & 0x8000000000000000LL;
      }
      ClpSimplex::setColumnLower(a2, v64, v65);
    }
    else
    {
      if ( v66 < 4.503599627370496e15 )
      {
        v72 = 0;
        v72.m128d_f64[0] = (double)(int)v63.m128d_f64[0];
        *(_QWORD *)&v65 = COERCE_UNSIGNED_INT64(
                            v72.m128d_f64[0]
                          - COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v72, v63).m128d_f64[0] & 0x3FF0000000000000LL))
                        | *(_QWORD *)&v63.m128d_f64[0] & 0x8000000000000000LL;
      }
      ClpSimplex::setColumnUpper(a2, v64, v65);
    }
    if ( *((int *)this + 32) > 0 )
    {
      v69 = 0;
      v70 = 0;
      while ( 1 )
      {
        v71 = *(_DWORD *)(*((_QWORD *)this + 13) + v69);
        if ( (v71 & 0x10000000) != 0 )
          break;
LABEL_102:
        ++v70;
        v69 += 4;
        ClpSimplex::setColumnUpper(a2, v71, *(double *)(v6 + 8LL * v71));
        if ( *((_DWORD *)this + 32) <= v70 )
          goto LABEL_10;
      }
      while ( 1 )
      {
        ++v70;
        v69 += 4;
        ClpSimplex::setColumnLower(a2, v71 & 0xFFFFFFF, *(double *)(v106 + 8LL * (v71 & 0xFFFFFFF)));
        if ( v70 >= *((_DWORD *)this + 32) )
          break;
        v71 = *(_DWORD *)(*((_QWORD *)this + 13) + v69);
        if ( (v71 & 0x10000000) == 0 )
          goto LABEL_102;
      }
    }
  }
  else
  {
    v7 = *((_QWORD *)a2 + 34);
    if ( (int)v5 > 0 )
    {
      v8 = 0;
      v9 = -1;
      do
      {
        v10 = v8;
        if ( *(_BYTE *)(v7 + v8) )
        {
          v11 = ++v9;
          v12 = *(_DWORD *)(*((_QWORD *)this + 10) + 4LL * v9);
          if ( v12 != (int)*(double *)(v6 + 8 * v8) )
          {
            v107 = v7;
            ClpSimplex::setColumnLower(a2, v8, (double)v12);
            v11 = v9;
            v10 = v8;
            v7 = v107;
          }
          v13 = *(_DWORD *)(*((_QWORD *)this + 11) + 4 * v11);
          if ( v13 != (int)*(double *)(v106 + 8 * v8) )
          {
            v108 = v7;
            ClpSimplex::setColumnUpper(a2, v10, (double)v13);
            v7 = v108;
          }
        }
        ++v8;
      }
      while ( v8 != (unsigned int)(v5 - 1) + 1LL );
    }
  }
LABEL_10:
  result = (unsigned int)a3;
  if ( a3 && a3 <= 2 )
  {
    result = ClpSimplex::copyFactorization(a2, *((ClpFactorization **)this + 5));
    v15 = *((const void **)a2 + 155);
    if ( v15 )
    {
      result = (__int64)__dynamic_cast(
                          v15,
                          (const struct __class_type_info *)&`typeinfo for'ClpDualRowPivot,
                          (const struct __class_type_info *)&`typeinfo for'ClpDualRowSteepest,
                          0);
      if ( result )
      {
        v16 = *((const ClpDualRowSteepest **)this + 6);
        if ( v16 )
          result = ClpDualRowSteepest::fill((ClpDualRowSteepest *)result, v16);
      }
    }
    v17 = *((_DWORD *)a2 + 26);
    v18 = *((unsigned __int8 **)a2 + 33);
    v19 = *((unsigned __int8 **)this + 7);
    v20 = v5 + v17;
    if ( v19 != v18 && (_DWORD)v5 + v17 )
    {
      v21 = v20 >> 3;
      if ( v20 >> 3 > 0 )
      {
        if ( (v19 >= v18 + 16 || v18 >= v19 + 16) && v21 > 1 )
        {
          v22 = 0;
          v23 = 0;
          do
          {
            ++v23;
            *(__m128i *)&v18[v22] = _mm_loadu_si128((const __m128i *)&v19[v22]);
            v22 += 16;
          }
          while ( v21 >> 1 > v23 );
          v24 = 8LL * (v21 & 0xFFFFFFFE);
          v25 = &v19[v24];
          v26 = &v18[v24];
          if ( v21 != (v21 & 0xFFFFFFFE) )
          {
            *v26 = *v25;
            v26[1] = v25[1];
            v26[2] = v25[2];
            v26[3] = v25[3];
            v26[4] = v25[4];
            v26[5] = v25[5];
            v26[6] = v25[6];
            v26[7] = v25[7];
          }
          v27 = v21 - 1;
        }
        else
        {
          v27 = v21 - 1;
          v103 = *((_QWORD *)a2 + 33);
          v104 = *((unsigned __int8 **)this + 7);
          do
          {
            v105 = *v104;
            v104 += 8;
            v103 += 8;
            *(_BYTE *)(v103 - 8) = v105;
            *(_BYTE *)(v103 - 7) = *(v104 - 7);
            *(_BYTE *)(v103 - 6) = *(v104 - 6);
            *(_BYTE *)(v103 - 5) = *(v104 - 5);
            *(_BYTE *)(v103 - 4) = *(v104 - 4);
            *(_BYTE *)(v103 - 3) = *(v104 - 3);
            *(_BYTE *)(v103 - 2) = *(v104 - 2);
            *(_BYTE *)(v103 - 1) = *(v104 - 1);
          }
          while ( v104 != &v19[8 * v27 + 8] );
        }
        v28 = 8LL * v27 + 8;
        v19 += v28;
        v18 += v28;
      }
      result = (unsigned int)(v20 % 8);
      switch ( v20 % 8 )
      {
        case 1:
          goto LABEL_54;
        case 2:
          goto LABEL_53;
        case 3:
          goto LABEL_52;
        case 4:
          goto LABEL_51;
        case 5:
          goto LABEL_50;
        case 6:
          goto LABEL_49;
        case 7:
          v18[6] = v19[6];
LABEL_49:
          v18[5] = v19[5];
LABEL_50:
          v18[4] = v19[4];
LABEL_51:
          v18[3] = v19[3];
LABEL_52:
          v18[2] = v19[2];
LABEL_53:
          v18[1] = v19[1];
LABEL_54:
          result = *v19;
          *v18 = result;
          break;
        default:
          break;
      }
    }
    v44 = *((_QWORD **)this + 8);
    if ( a3 == 2 )
    {
      v45 = *((_QWORD **)a2 + 15);
      if ( v45 != v44 && (_DWORD)v5 )
      {
        if ( (int)v5 >> 3 > 0 )
        {
          v46 = *((__int64 **)this + 8);
          v47 = *((_QWORD **)a2 + 15);
          do
          {
            v48 = *v46;
            v47 += 8;
            v46 += 8;
            *(v47 - 8) = v48;
            *(v47 - 7) = *(v46 - 7);
            *(v47 - 6) = *(v46 - 6);
            *(v47 - 5) = *(v46 - 5);
            *(v47 - 4) = *(v46 - 4);
            *(v47 - 3) = *(v46 - 3);
            *(v47 - 2) = *(v46 - 2);
            *(v47 - 1) = *(v46 - 1);
          }
          while ( v47 != &v45[8 * (unsigned int)(((int)v5 >> 3) - 1) + 8] );
          v49 = (((int)v5 >> 3) - 1 + 1LL) << 6;
          v44 = (_QWORD *)((char *)v44 + v49);
          v45 = (_QWORD *)((char *)v45 + v49);
        }
        switch ( (int)v5 % 8 )
        {
          case 1:
            goto LABEL_69;
          case 2:
            goto LABEL_68;
          case 3:
            goto LABEL_67;
          case 4:
            goto LABEL_66;
          case 5:
            goto LABEL_65;
          case 6:
            goto LABEL_64;
          case 7:
            v45[6] = v44[6];
LABEL_64:
            v45[5] = v44[5];
LABEL_65:
            v45[4] = v44[4];
LABEL_66:
            v45[3] = v44[3];
LABEL_67:
            v45[2] = v44[2];
LABEL_68:
            v45[1] = v44[1];
LABEL_69:
            *v45 = *v44;
            break;
          default:
            break;
        }
      }
      v50 = *((_QWORD **)a2 + 17);
      v51 = *((_QWORD **)this + 9);
      if ( v51 != v50 && (_DWORD)v5 )
      {
        if ( (int)v5 >> 3 <= 0 )
        {
          v56 = *((_QWORD **)this + 9);
        }
        else
        {
          v52 = *((__int64 **)this + 9);
          v53 = *((_QWORD **)a2 + 17);
          do
          {
            v54 = *v52;
            v53 += 8;
            v52 += 8;
            *(v53 - 8) = v54;
            *(v53 - 7) = *(v52 - 7);
            *(v53 - 6) = *(v52 - 6);
            *(v53 - 5) = *(v52 - 5);
            *(v53 - 4) = *(v52 - 4);
            *(v53 - 3) = *(v52 - 3);
            *(v53 - 2) = *(v52 - 2);
            *(v53 - 1) = *(v52 - 1);
          }
          while ( v53 != &v50[8 * (unsigned int)(((int)v5 >> 3) - 1) + 8] );
          v55 = (((int)v5 >> 3) - 1 + 1LL) << 6;
          v56 = (_QWORD *)((char *)v51 + v55);
          v50 = (_QWORD *)((char *)v50 + v55);
        }
        switch ( (int)v5 % 8 )
        {
          case 1:
            goto LABEL_83;
          case 2:
            goto LABEL_82;
          case 3:
            goto LABEL_81;
          case 4:
            goto LABEL_80;
          case 5:
            goto LABEL_79;
          case 6:
            goto LABEL_78;
          case 7:
            v50[6] = v56[6];
LABEL_78:
            v50[5] = v56[5];
LABEL_79:
            v50[4] = v56[4];
LABEL_80:
            v50[3] = v56[3];
LABEL_81:
            v50[2] = v56[2];
LABEL_82:
            v50[1] = v56[1];
LABEL_83:
            *v50 = *v56;
            break;
          default:
            break;
        }
      }
      result = (int)v5;
      v57 = *((__int64 **)a2 + 16);
      v58 = &v51[(int)v5];
      if ( v17 && v58 != v57 )
      {
        if ( v17 >> 3 > 0 )
        {
          v59 = v58;
          v60 = *((__int64 **)a2 + 16);
          do
          {
            v61 = *v59;
            v60 += 8;
            v59 += 8;
            *(v60 - 8) = v61;
            *(v60 - 7) = *(v59 - 7);
            *(v60 - 6) = *(v59 - 6);
            *(v60 - 5) = *(v59 - 5);
            *(v60 - 4) = *(v59 - 4);
            *(v60 - 3) = *(v59 - 3);
            *(v60 - 2) = *(v59 - 2);
            *(v60 - 1) = *(v59 - 1);
          }
          while ( v60 != &v57[8 * (unsigned int)((v17 >> 3) - 1) + 8] );
          v62 = ((v17 >> 3) - 1 + 1LL) << 6;
          v58 = (__int64 *)((char *)v58 + v62);
          v57 = (__int64 *)((char *)v57 + v62);
        }
        result = (unsigned int)(v17 >> 31) >> 29;
        switch ( v17 % 8 )
        {
          case 1:
            goto LABEL_34;
          case 2:
            goto LABEL_33;
          case 3:
            goto LABEL_32;
          case 4:
            goto LABEL_31;
          case 5:
            goto LABEL_30;
          case 6:
            goto LABEL_29;
          case 7:
            v57[6] = v58[6];
LABEL_29:
            v57[5] = v58[5];
LABEL_30:
            v57[4] = v58[4];
LABEL_31:
            v57[3] = v58[3];
LABEL_32:
            v57[2] = v58[2];
LABEL_33:
            v57[1] = v58[1];
LABEL_34:
            *v57 = *v58;
            break;
          default:
            break;
        }
      }
      v29 = *((double **)a2 + 29);
      if ( v29 )
      {
        v30 = *((double **)a2 + 15);
        if ( (int)v5 > 0 )
        {
          if ( (v29 >= v30 + 2 || v30 >= v29 + 2) && (unsigned int)v5 > 9 )
          {
            v31 = 0;
            v32 = ((unsigned __int64)v30 >> 3) & 1;
            if ( (((unsigned __int64)v30 >> 3) & 1) != 0 )
            {
              v31 = 1;
              *v30 = *v30 * *v29;
            }
            v33 = 0;
            v34 = v5 - v32;
            v35 = ((unsigned __int64)v30 >> 3) & 1;
            v36 = v5 - v32;
            v37 = 0;
            v38 = v36 >> 1;
            v39 = &v30[v35];
            v40 = &v29[v35];
            do
            {
              ++v33;
              *(__m128d *)&v39[v37] = _mm_mul_pd(*(__m128d *)&v40[v37], *(__m128d *)&v39[v37]);
              v37 += 2;
            }
            while ( v38 > v33 );
            result = v34 & 0xFFFFFFFE;
            v41 = result + v31;
            if ( (_DWORD)result != v34 )
            {
              v42 = v41;
              v43 = v41 + 1;
              result = (__int64)&v30[v42];
              *(double *)result = *(double *)result * v29[v42];
              if ( (int)v5 > v43 )
              {
                result = v43;
                v30[v43] = v30[v43] * v29[v43];
              }
            }
          }
          else
          {
            result = 0;
            do
            {
              *(double *)((char *)v30 + result) = *(double *)((char *)v30 + result) * *(double *)((char *)v29 + result);
              result += 8;
            }
            while ( result != 8LL * (unsigned int)(v5 - 1) + 8 );
          }
        }
      }
    }
    else
    {
      v73 = *((_QWORD **)a2 + 150);
      if ( v73 != v44 && (_DWORD)v5 + v17 )
      {
        if ( v20 >> 3 > 0 )
        {
          v74 = *((__int64 **)this + 8);
          v75 = *((_QWORD **)a2 + 150);
          do
          {
            v76 = *v74;
            v75 += 8;
            v74 += 8;
            *(v75 - 8) = v76;
            *(v75 - 7) = *(v74 - 7);
            *(v75 - 6) = *(v74 - 6);
            *(v75 - 5) = *(v74 - 5);
            *(v75 - 4) = *(v74 - 4);
            *(v75 - 3) = *(v74 - 3);
            *(v75 - 2) = *(v74 - 2);
            *(v75 - 1) = *(v74 - 1);
          }
          while ( v75 != &v73[8 * (unsigned int)((v20 >> 3) - 1) + 8] );
          v77 = ((v20 >> 3) - 1 + 1LL) << 6;
          v44 = (_QWORD *)((char *)v44 + v77);
          v73 = (_QWORD *)((char *)v73 + v77);
        }
        result = (unsigned int)(v20 % 8);
        switch ( v20 % 8 )
        {
          case 1:
            goto LABEL_120;
          case 2:
            goto LABEL_119;
          case 3:
            goto LABEL_118;
          case 4:
            goto LABEL_117;
          case 5:
            goto LABEL_116;
          case 6:
            goto LABEL_115;
          case 7:
            v73[6] = v44[6];
LABEL_115:
            v73[5] = v44[5];
LABEL_116:
            v73[4] = v44[4];
LABEL_117:
            v73[3] = v44[3];
LABEL_118:
            v73[2] = v44[2];
LABEL_119:
            v73[1] = v44[1];
LABEL_120:
            *v73 = *v44;
            break;
          default:
            break;
        }
      }
      v78 = *((_QWORD **)a2 + 147);
      v79 = *((_QWORD **)this + 9);
      if ( v79 != v78 && (_DWORD)v5 + v17 )
      {
        if ( v20 >> 3 <= 0 )
        {
          v84 = *((_QWORD **)this + 9);
        }
        else
        {
          v80 = *((__int64 **)this + 9);
          v81 = *((_QWORD **)a2 + 147);
          do
          {
            v82 = *v80;
            v81 += 8;
            v80 += 8;
            *(v81 - 8) = v82;
            *(v81 - 7) = *(v80 - 7);
            *(v81 - 6) = *(v80 - 6);
            *(v81 - 5) = *(v80 - 5);
            *(v81 - 4) = *(v80 - 4);
            *(v81 - 3) = *(v80 - 3);
            *(v81 - 2) = *(v80 - 2);
            *(v81 - 1) = *(v80 - 1);
          }
          while ( &v78[8 * (unsigned int)((v20 >> 3) - 1) + 8] != v81 );
          v83 = ((v20 >> 3) - 1 + 1LL) << 6;
          v84 = (_QWORD *)((char *)v79 + v83);
          v78 = (_QWORD *)((char *)v78 + v83);
        }
        result = (unsigned int)(v20 >> 31) >> 29;
        switch ( v20 % 8 )
        {
          case 1:
            goto LABEL_134;
          case 2:
            goto LABEL_133;
          case 3:
            goto LABEL_132;
          case 4:
            goto LABEL_131;
          case 5:
            goto LABEL_130;
          case 6:
            goto LABEL_129;
          case 7:
            v78[6] = v84[6];
LABEL_129:
            v78[5] = v84[5];
LABEL_130:
            v78[4] = v84[4];
LABEL_131:
            v78[3] = v84[3];
LABEL_132:
            v78[2] = v84[2];
LABEL_133:
            v78[1] = v84[1];
LABEL_134:
            *v78 = *v84;
            break;
          default:
            break;
        }
      }
      v85 = *((unsigned int **)a2 + 157);
      v86 = *((unsigned int **)this + 12);
      if ( v86 != v85 && v17 )
      {
        v87 = v17 >> 3;
        if ( v17 >> 3 > 0 )
        {
          if ( (v85 >= v86 + 8 || v86 >= v85 + 8) && v87 > 1 )
          {
            v88 = *((__m128i **)a2 + 157);
            v89 = *((const __m128i **)this + 12);
            v90 = v87 - 1;
            do
            {
              v91 = _mm_loadu_si128(v89);
              v88 += 2;
              v89 += 2;
              v92 = _mm_loadu_si128(v89 - 1);
              v88[-2] = v91;
              v88[-1] = v92;
            }
            while ( v88 != (__m128i *)&v85[8 * v90 + 8] );
          }
          else
          {
            v100 = *((unsigned int **)this + 12);
            v90 = v87 - 1;
            v101 = *((unsigned int **)a2 + 157);
            do
            {
              v102 = *v100;
              v101 += 8;
              v100 += 8;
              *(v101 - 8) = v102;
              *(v101 - 7) = *(v100 - 7);
              *(v101 - 6) = *(v100 - 6);
              *(v101 - 5) = *(v100 - 5);
              *(v101 - 4) = *(v100 - 4);
              *(v101 - 3) = *(v100 - 3);
              *(v101 - 2) = *(v100 - 2);
              *(v101 - 1) = *(v100 - 1);
            }
            while ( &v85[8 * v90 + 8] != v101 );
          }
          v93 = 32 * ((int)v90 + 1LL);
          v86 = (unsigned int *)((char *)v86 + v93);
          v85 = (unsigned int *)((char *)v85 + v93);
        }
        result = (unsigned int)(v17 % 8);
        switch ( v17 % 8 )
        {
          case 1:
            goto LABEL_150;
          case 2:
            goto LABEL_149;
          case 3:
            goto LABEL_148;
          case 4:
            goto LABEL_147;
          case 5:
            goto LABEL_146;
          case 6:
            goto LABEL_145;
          case 7:
            v85[6] = v86[6];
LABEL_145:
            v85[5] = v86[5];
LABEL_146:
            v85[4] = v86[4];
LABEL_147:
            v85[3] = v86[3];
LABEL_148:
            v85[2] = v86[2];
LABEL_149:
            v85[1] = v86[1];
LABEL_150:
            result = *v86;
            *v85 = result;
            break;
          default:
            break;
        }
      }
      v94 = *((_QWORD **)a2 + 16);
      v95 = &v79[v5];
      if ( v95 != v94 && v17 )
      {
        if ( v17 >> 3 > 0 )
        {
          v96 = *((_QWORD *)a2 + 16);
          v97 = &v79[v5];
          do
          {
            v98 = *v97;
            v97 += 8;
            v96 += 64;
            *(_QWORD *)(v96 - 64) = v98;
            *(_QWORD *)(v96 - 56) = *(v97 - 7);
            *(_QWORD *)(v96 - 48) = *(v97 - 6);
            *(_QWORD *)(v96 - 40) = *(v97 - 5);
            *(_QWORD *)(v96 - 32) = *(v97 - 4);
            *(_QWORD *)(v96 - 24) = *(v97 - 3);
            *(_QWORD *)(v96 - 16) = *(v97 - 2);
            *(_QWORD *)(v96 - 8) = *(v97 - 1);
          }
          while ( v97 != &v95[8 * (unsigned int)((v17 >> 3) - 1) + 8] );
          v99 = ((v17 >> 3) - 1 + 1LL) << 6;
          v95 = (_QWORD *)((char *)v95 + v99);
          v94 = (_QWORD *)((char *)v94 + v99);
        }
        result = (unsigned int)(v17 >> 31) >> 29;
        switch ( v17 % 8 )
        {
          case 1:
            goto LABEL_164;
          case 2:
            goto LABEL_163;
          case 3:
            goto LABEL_162;
          case 4:
            goto LABEL_161;
          case 5:
            goto LABEL_160;
          case 6:
            goto LABEL_159;
          case 7:
            v94[6] = v95[6];
LABEL_159:
            v94[5] = v95[5];
LABEL_160:
            v94[4] = v95[4];
LABEL_161:
            v94[3] = v95[3];
LABEL_162:
            v94[2] = v95[2];
LABEL_163:
            v94[1] = v95[1];
LABEL_164:
            *v94 = *v95;
            break;
          default:
            break;
        }
      }
    }
    *((double *)a2 + 9) = (*((double *)this + 2) + *((double *)a2 + 5)) / *(double *)a2;
  }
  return result;
}

