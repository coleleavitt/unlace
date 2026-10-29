__int64 __fastcall ClpPredictorCorrector::setupForSolve(ClpPredictorCorrector *this, int a2)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // r10d
  char v5; // cl
  double v6; // xmm4_8
  double v7; // xmm2_8
  double v8; // xmm3_8
  double v9; // xmm1_8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  double v14; // xmm8_8
  double v15; // xmm0_8
  char v16; // si
  double v17; // xmm10_8
  double v18; // xmm0_8
  double v19; // xmm0_8
  double v20; // xmm10_8
  double v21; // xmm0_8
  _QWORD *v22; // r11
  _QWORD *v23; // r9
  __int64 v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // xmm0_8
  __int64 v27; // rax
  __int64 v28; // rax
  char v29; // dl
  __int64 v30; // rsi
  __int64 v31; // r11
  char v32; // dl
  double v33; // xmm2_8
  double v34; // xmm2_8
  __int64 v35; // r9
  _QWORD *v36; // rsi
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // xmm0_8
  __int64 v41; // rax
  double v42; // xmm4_8
  double v43; // xmm4_8
  __int64 v44; // r8
  int v45; // edx
  double v46; // xmm0_8
  __int64 v47; // r13
  __int64 v48; // r12
  __int64 v49; // rax
  __int64 v50; // r11
  double *v51; // r15
  __int64 v52; // rdx
  double *v53; // r14
  double *v54; // rbx
  double v55; // xmm0_8
  double v56; // xmm0_8
  char v57; // dl
  double v58; // xmm0_8
  __int64 v59; // r15
  double *v60; // rdx
  double v61; // xmm0_8
  __int64 v62; // r14
  double *v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rsi
  char v66; // dl
  double *v67; // rdx
  __int64 v68; // rbx
  double v69; // xmm0_8
  double *v70; // rdx
  __int64 v71; // rbx
  double v72; // xmm0_8
  __int64 v73; // rbx
  __int64 v74; // r11
  char v75; // dl
  double v76; // xmm1_8
  int v77; // edx

  result = *((_QWORD *)this + 161);
  v3 = *((_DWORD *)this + 26);
  v4 = v3 + *((_DWORD *)this + 27);
  v5 = (*(_DWORD *)(result + 8) <= 19) & (*(_BYTE *)(result + 12) ^ 1);
  if ( a2 == 1 )
  {
    if ( v4 <= 0 )
      return result;
    v11 = *((_QWORD *)this + 156);
    v12 = *((_QWORD *)this + 157);
    v64 = 0;
    do
    {
      *(_QWORD *)(v11 + 8 * v64) = 0;
      *(_QWORD *)(v12 + 8 * v64) = 0;
      v65 = 8 * v64;
      v66 = *(_BYTE *)(*((_QWORD *)this + 33) + v64);
      if ( (v66 & 2) == 0 )
      {
        if ( (v66 & 8) != 0 )
        {
          v67 = (double *)(v65 + *((_QWORD *)this + 147));
          v68 = *((_QWORD *)this + 155);
          v69 = *((double *)this + 107)
              - (*(double *)(*((_QWORD *)this + 141) + 8 * v64) + 1.0e-12)
              * *(double *)(*((_QWORD *)this + 159) + 8 * v64)
              - *(double *)(*((_QWORD *)this + 145) + 8 * v64) * *v67;
          *(double *)(v11 + 8 * v64) = v69;
          *(double *)(v11 + 8 * v64) = v69 + *(double *)(v68 + 8 * v64) * *v67;
          v66 = *(_BYTE *)(*((_QWORD *)this + 33) + v64);
        }
        if ( (v66 & 0x10) != 0 )
        {
          v70 = (double *)(v65 + *((_QWORD *)this + 148));
          v71 = *((_QWORD *)this + 154);
          v72 = *((double *)this + 107)
              - (*(double *)(*((_QWORD *)this + 140) + 8 * v64) + 1.0e-12)
              * *(double *)(*((_QWORD *)this + 160) + 8 * v64)
              + *(double *)(*((_QWORD *)this + 145) + 8 * v64) * *v70;
          *(double *)(v12 + 8 * v64) = v72;
          *(double *)(v12 + 8 * v64) = v72 - *(double *)(v71 + 8 * v64) * *v70;
        }
      }
      ++v64;
    }
    while ( (unsigned int)(v4 - 1) + 1LL != v64 );
    v30 = *((_QWORD *)this + 158);
    goto LABEL_102;
  }
  if ( a2 <= 1 )
  {
    if ( a2 )
    {
LABEL_90:
      if ( !v5 )
      {
        if ( v4 > 0 )
        {
          v11 = *((_QWORD *)this + 156);
          v12 = *((_QWORD *)this + 157);
          v13 = *((_QWORD *)this + 33);
          goto LABEL_49;
        }
        return result;
      }
      if ( v4 <= 0 )
        return result;
      v30 = *((_QWORD *)this + 158);
      v11 = *((_QWORD *)this + 156);
      v12 = *((_QWORD *)this + 157);
LABEL_106:
      v13 = *((_QWORD *)this + 33);
      goto LABEL_107;
    }
    v34 = *((double *)this + 117);
    v35 = *((_QWORD *)this + 16);
    v36 = *((_QWORD **)this + 153);
    v37 = *((_QWORD **)this + 138);
    if ( v3 && v36 != v37 )
    {
      if ( v3 >> 3 <= 0 )
      {
        result = *((_QWORD *)this + 153);
      }
      else
      {
        v38 = *((_QWORD *)this + 153);
        v39 = *((__int64 **)this + 138);
        do
        {
          v40 = *v39;
          v39 += 8;
          v38 += 64;
          *(_QWORD *)(v38 - 64) = v40;
          *(_QWORD *)(v38 - 56) = *(v39 - 7);
          *(_QWORD *)(v38 - 48) = *(v39 - 6);
          *(_QWORD *)(v38 - 40) = *(v39 - 5);
          *(_QWORD *)(v38 - 32) = *(v39 - 4);
          *(_QWORD *)(v38 - 24) = *(v39 - 3);
          *(_QWORD *)(v38 - 16) = *(v39 - 2);
          *(_QWORD *)(v38 - 8) = *(v39 - 1);
        }
        while ( v39 != &v37[8 * (unsigned int)((v3 >> 3) - 1) + 8] );
        v41 = ((v3 >> 3) - 1 + 1LL) << 6;
        v37 = (_QWORD *)((char *)v37 + v41);
        result = (__int64)v36 + v41;
      }
      switch ( v3 % 8 )
      {
        case 1:
          goto LABEL_72;
        case 2:
          goto LABEL_71;
        case 3:
          goto LABEL_70;
        case 4:
          goto LABEL_69;
        case 5:
          goto LABEL_68;
        case 6:
          goto LABEL_67;
        case 7:
          *(_QWORD *)(result + 48) = v37[6];
LABEL_67:
          *(_QWORD *)(result + 40) = v37[5];
LABEL_68:
          *(_QWORD *)(result + 32) = v37[4];
LABEL_69:
          *(_QWORD *)(result + 24) = v37[3];
LABEL_70:
          *(_QWORD *)(result + 16) = v37[2];
LABEL_71:
          *(_QWORD *)(result + 8) = v37[1];
LABEL_72:
          *(_QWORD *)result = *v37;
          break;
        default:
          break;
      }
    }
    v42 = *((double *)this + 118);
    if ( v42 == 0.0 )
    {
      if ( !*((_QWORD *)this + 152) )
        goto LABEL_79;
      result = *((unsigned int *)this + 26);
      v43 = v42 * v42;
      if ( (int)result <= 0 )
        goto LABEL_79;
      v44 = *((_QWORD *)this + 152);
    }
    else
    {
      v43 = v42 * v42;
      if ( *((int *)this + 26) <= 0 )
      {
LABEL_79:
        if ( v4 <= 0 )
          return result;
        v30 = *((_QWORD *)this + 158);
        v47 = *((_QWORD *)this + 154);
        v48 = *((_QWORD *)this + 155);
        v11 = *((_QWORD *)this + 156);
        v12 = *((_QWORD *)this + 157);
        v49 = 0;
        do
        {
          *(_QWORD *)(v30 + 8 * v49) = 0;
          *(_QWORD *)(v47 + 8 * v49) = 0;
          v50 = 8 * v49;
          *(_QWORD *)(v48 + 8 * v49) = 0;
          *(_QWORD *)(v11 + 8 * v49) = 0;
          *(_QWORD *)(v12 + 8 * v49) = 0;
          if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v49) & 2) == 0 )
          {
            v51 = (double *)(v50 + *((_QWORD *)this + 159));
            v52 = *((_QWORD *)this + 151);
            v53 = (double *)(v50 + *((_QWORD *)this + 160));
            v54 = (double *)(v50 + *((_QWORD *)this + 143));
            v55 = *(double *)(*((_QWORD *)this + 104) + 8 * v49) - *v51 + *v53;
            *(double *)(v30 + 8 * v49) = v55;
            v56 = v55 + v34 * v34 * *v54;
            *(double *)(v30 + 8 * v49) = v56;
            if ( v52 )
              *(double *)(v30 + 8 * v49) = v56 + *(double *)(v52 + 8 * v49) * *v54;
            v57 = *(_BYTE *)(*((_QWORD *)this + 33) + v49);
            if ( (v57 & 8) != 0 )
            {
              v58 = *v51;
              v59 = *((_QWORD *)this + 94);
              v60 = (double *)(v50 + *((_QWORD *)this + 141));
              *(double *)(v11 + 8 * v49) = -v58 * (*v60 + 1.0e-12);
              *(double *)(v48 + 8 * v49) = fmax(0.0, *(double *)(v59 + 8 * v49) + *v60 - *v54);
              v57 = *(_BYTE *)(*((_QWORD *)this + 33) + v49);
            }
            if ( (v57 & 0x10) != 0 )
            {
              v61 = *v53;
              v62 = *((_QWORD *)this + 97);
              v63 = (double *)(v50 + *((_QWORD *)this + 140));
              *(double *)(v12 + 8 * v49) = -v61 * (*v63 + 1.0e-12);
              *(double *)(v47 + 8 * v49) = fmin(0.0, *(double *)(v62 + 8 * v49) - *v63 - *v54);
            }
          }
          ++v49;
        }
        while ( (unsigned int)(v4 - 1) + 1LL != v49 );
LABEL_102:
        if ( !v5 )
        {
          v13 = *((_QWORD *)this + 33);
          goto LABEL_50;
        }
        goto LABEL_106;
      }
      v44 = *((_QWORD *)this + 152);
      if ( !v44 )
      {
        result = 1;
        do
        {
          v77 = result;
          *(double *)&v36[result - 1] = *(double *)&v36[result - 1] - *(double *)(v35 + 8 * result - 8) * v43;
          ++result;
        }
        while ( *((_DWORD *)this + 26) > v77 );
        goto LABEL_79;
      }
    }
    result = 1;
    do
    {
      v45 = result;
      v46 = *(double *)&v36[result - 1] - *(double *)(v35 + 8 * result - 8) * v43;
      *(double *)&v36[result - 1] = v46;
      *(double *)&v36[result - 1] = v46 - *(double *)(v44 + 8 * result - 8) * *(double *)(v35 + 8 * result - 8);
      ++result;
    }
    while ( *((_DWORD *)this + 26) > v45 );
    goto LABEL_79;
  }
  if ( a2 != 2 )
  {
    if ( a2 == 3 )
    {
      v6 = *((double *)this + 107) * 0.1;
      v7 = *((double *)this + 107) * 10.0;
      v8 = fmin(1.0, *((double *)this + 127) + 0.1);
      v9 = fmin(1.0, *((double *)this + 126) + 0.1);
      if ( v4 > 0 )
      {
        v10 = 0;
        v11 = *((_QWORD *)this + 156);
        v12 = *((_QWORD *)this + 157);
        v13 = *((_QWORD *)this + 33);
        v14 = -v7;
        do
        {
          v16 = *(_BYTE *)(v13 + v10);
          if ( (v16 & 2) == 0 )
          {
            if ( (v16 & 8) != 0 )
            {
              v20 = *(double *)(*((_QWORD *)this + 147) + 8 * v10) * v8 + *(double *)(*((_QWORD *)this + 159) + 8 * v10);
              v21 = ((*(double *)(*((_QWORD *)this + 145) + 8 * v10) - *(double *)(*((_QWORD *)this + 155) + 8 * v10))
                   * v9
                   + *(double *)(*((_QWORD *)this + 141) + 8 * v10))
                  * v20;
              if ( v21 > 0.0 && v20 < 0.0 )
                v21 = -v21;
              if ( v6 > v21 )
              {
                v15 = v6 - v21;
              }
              else if ( v21 <= v7 )
              {
                v15 = 0.0;
              }
              else
              {
                v15 = fmax(v7 - v21, v14);
              }
              *(double *)(v11 + 8 * v10) = v15 + *(double *)(v11 + 8 * v10);
              v13 = *((_QWORD *)this + 33);
              v16 = *(_BYTE *)(v13 + v10);
            }
            if ( (v16 & 0x10) != 0 )
            {
              v17 = *(double *)(*((_QWORD *)this + 148) + 8 * v10) * v8 + *(double *)(*((_QWORD *)this + 160) + 8 * v10);
              v18 = ((*(double *)(*((_QWORD *)this + 154) + 8 * v10) - *(double *)(*((_QWORD *)this + 145) + 8 * v10))
                   * v9
                   + *(double *)(*((_QWORD *)this + 140) + 8 * v10))
                  * v17;
              if ( v18 > 0.0 && v17 < 0.0 )
                v18 = -v18;
              if ( v6 <= v18 )
              {
                if ( v18 <= v7 )
                  v19 = 0.0;
                else
                  v19 = fmax(v7 - v18, v14);
              }
              else
              {
                v19 = v6 - v18;
              }
              *(double *)(v12 + 8 * v10) = v19 + *(double *)(v12 + 8 * v10);
              v13 = *((_QWORD *)this + 33);
            }
          }
          ++v10;
        }
        while ( (unsigned int)(v4 - 1) + 1LL != v10 );
LABEL_48:
        if ( !v5 )
        {
LABEL_49:
          v30 = *((_QWORD *)this + 158);
LABEL_50:
          v31 = *((_QWORD *)this + 144);
          result = 0;
          while ( 1 )
          {
            v32 = *(_BYTE *)(v13 + result);
            v33 = *(double *)(v30 + 8 * result);
            if ( (v32 & 8) != 0 )
              v33 = v33
                  - (*(double *)(*((_QWORD *)this + 159) + 8 * result)
                   * *(double *)(*((_QWORD *)this + 155) + 8 * result)
                   + *(double *)(v11 + 8 * result))
                  / (*(double *)(*((_QWORD *)this + 141) + 8 * result) + 1.0e-12);
            if ( (v32 & 0x10) != 0 )
            {
              *(double *)(v31 + 8 * result) = (*(double *)(v12 + 8 * result)
                                             - *(double *)(*((_QWORD *)this + 160) + 8 * result)
                                             * *(double *)(*((_QWORD *)this + 154) + 8 * result))
                                            / (*(double *)(*((_QWORD *)this + 140) + 8 * result) + 1.0e-12)
                                            + v33;
              if ( v4 <= (int)++result )
                return result;
            }
            else
            {
              *(double *)(v31 + 8 * result++) = v33;
              if ( v4 <= (int)result )
                return result;
            }
            v13 = *((_QWORD *)this + 33);
          }
        }
        v30 = *((_QWORD *)this + 158);
LABEL_107:
        v73 = *((_QWORD *)this + 142);
        result = 0;
        v74 = *((_QWORD *)this + 144);
        while ( 1 )
        {
          v75 = *(_BYTE *)(v13 + result);
          v76 = *(double *)(v30 + 8 * result);
          if ( (v75 & 8) != 0 )
            v76 = v76
                - (*(double *)(*((_QWORD *)this + 159) + 8 * result) * *(double *)(*((_QWORD *)this + 155) + 8 * result)
                 + *(double *)(v11 + 8 * result))
                / (*(double *)(*((_QWORD *)this + 141) + 8 * result) + 1.0e-12);
          if ( (v75 & 0x10) != 0 )
          {
            *(double *)(v74 + 8 * result) = ((*(double *)(v12 + 8 * result)
                                            - *(double *)(*((_QWORD *)this + 160) + 8 * result)
                                            * *(double *)(*((_QWORD *)this + 154) + 8 * result))
                                           / (*(double *)(*((_QWORD *)this + 140) + 8 * result) + 1.0e-12)
                                           + v76)
                                          * *(double *)(v73 + 8 * result);
            if ( v4 <= (int)++result )
              return result;
          }
          else
          {
            *(double *)(v74 + 8 * result) = v76 * *(double *)(v73 + 8 * result);
            if ( v4 <= (int)++result )
              return result;
          }
          v13 = *((_QWORD *)this + 33);
        }
      }
      return result;
    }
    goto LABEL_90;
  }
  v22 = *((_QWORD **)this + 153);
  v23 = *((_QWORD **)this + 138);
  if ( v3 && v22 != v23 )
  {
    if ( v3 >> 3 > 0 )
    {
      v24 = *((_QWORD *)this + 153);
      v25 = *((__int64 **)this + 138);
      do
      {
        v26 = *v25;
        v25 += 8;
        v24 += 64;
        *(_QWORD *)(v24 - 64) = v26;
        *(_QWORD *)(v24 - 56) = *(v25 - 7);
        *(_QWORD *)(v24 - 48) = *(v25 - 6);
        *(_QWORD *)(v24 - 40) = *(v25 - 5);
        *(_QWORD *)(v24 - 32) = *(v25 - 4);
        *(_QWORD *)(v24 - 24) = *(v25 - 3);
        *(_QWORD *)(v24 - 16) = *(v25 - 2);
        *(_QWORD *)(v24 - 8) = *(v25 - 1);
      }
      while ( v25 != &v23[8 * (unsigned int)((v3 >> 3) - 1) + 8] );
      v27 = ((v3 >> 3) - 1 + 1LL) << 6;
      v23 = (_QWORD *)((char *)v23 + v27);
      v22 = (_QWORD *)((char *)v22 + v27);
    }
    result = (unsigned int)(v3 >> 31) >> 29;
    switch ( v3 % 8 )
    {
      case 1:
        goto LABEL_38;
      case 2:
        goto LABEL_37;
      case 3:
        goto LABEL_36;
      case 4:
        goto LABEL_35;
      case 5:
        goto LABEL_34;
      case 6:
        goto LABEL_33;
      case 7:
        v22[6] = v23[6];
LABEL_33:
        v22[5] = v23[5];
LABEL_34:
        v22[4] = v23[4];
LABEL_35:
        v22[3] = v23[3];
LABEL_36:
        v22[2] = v23[2];
LABEL_37:
        v22[1] = v23[1];
LABEL_38:
        *v22 = *v23;
        break;
      default:
        break;
    }
  }
  if ( v4 > 0 )
  {
    v11 = *((_QWORD *)this + 156);
    v12 = *((_QWORD *)this + 157);
    v28 = 0;
    do
    {
      *(_QWORD *)(v11 + 8 * v28) = 0;
      *(_QWORD *)(v12 + 8 * v28) = 0;
      v29 = *(_BYTE *)(*((_QWORD *)this + 33) + v28);
      if ( (v29 & 2) == 0 )
      {
        if ( (v29 & 8) != 0 )
        {
          *(double *)(v11 + 8 * v28) = *((double *)this + 107)
                                     - (*(double *)(*((_QWORD *)this + 141) + 8 * v28) + 1.0e-12)
                                     * *(double *)(*((_QWORD *)this + 159) + 8 * v28);
          v29 = *(_BYTE *)(*((_QWORD *)this + 33) + v28);
        }
        if ( (v29 & 0x10) != 0 )
          *(double *)(v12 + 8 * v28) = *((double *)this + 107)
                                     - (*(double *)(*((_QWORD *)this + 140) + 8 * v28) + 1.0e-12)
                                     * *(double *)(*((_QWORD *)this + 160) + 8 * v28);
      }
      ++v28;
    }
    while ( (unsigned int)(v4 - 1) + 1LL != v28 );
    v13 = *((_QWORD *)this + 33);
    goto LABEL_48;
  }
  return result;
}

