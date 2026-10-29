__int64 __fastcall ClpDualRowSteepest::pivotRow(
        ClpDualRowSteepest *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  __int64 v9; // r8
  int **v10; // rdi
  double v11; // xmm1_8
  int *v12; // rbp
  int *v13; // r14
  __int64 v14; // r9
  __int64 v15; // r15
  int v16; // r13d
  double v17; // xmm2_8
  double v18; // xmm0_8
  double v19; // xmm4_8
  double v20; // xmm0_8
  double v21; // xmm3_8
  int v22; // eax
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  double v27; // xmm3_8
  __int64 v28; // rax
  double *v29; // rdx
  double v30; // xmm5_8
  double v31; // xmm0_8
  double v32; // xmm0_8
  double v33; // xmm0_8
  __int64 v34; // r11
  int v35; // eax
  __int64 result; // rax
  __int64 v37; // rsi
  int v38; // ecx
  int *v39; // rdx
  unsigned __int64 v40; // rdi
  __int64 v41; // rcx
  double v42; // xmm0_8
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // ecx
  __int64 (__fastcall **v46)(ClpDualRowSteepest *, __int64, __int64, __int64, double, double, double, double, double, double, double, double); // rax
  double v47; // xmm0_8
  __int64 v48; // r10
  int *v49; // rdx
  int v50; // edi
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rsi
  double *v54; // rcx
  bool v55; // al
  _DWORD *v56; // rdi
  __int64 (*v57)(void); // rax
  __int64 v58; // [rsp+8h] [rbp-80h]
  __int64 v59; // [rsp+10h] [rbp-78h]
  int v60; // [rsp+18h] [rbp-70h]
  __int64 v61; // [rsp+30h] [rbp-58h]
  char v62; // [rsp+3Fh] [rbp-49h]
  int v63; // [rsp+40h] [rbp-48h]
  _DWORD v64[17]; // [rsp+44h] [rbp-44h]

  v9 = *((_QWORD *)this + 1);
  v10 = *((int ***)this + 5);
  v11 = 1000.0;
  v12 = v10[1];
  v13 = *v10;
  v14 = *((int *)v10 + 4);
  v15 = *(_QWORD *)(v9 + 1256);
  v16 = *(_DWORD *)(v9 + 1168);
  v17 = 1000000.0;
  v18 = fmin(0.01, *(double *)(v9 + 760)) + *(double *)(v9 + 880);
  if ( v18 <= 1000.0 )
    v17 = v18 * v18;
  v19 = 0.0;
  v58 = *(_QWORD *)(v9 + 1200);
  v61 = *(_QWORD *)(v9 + 984);
  v59 = *(_QWORD *)(v9 + 1008);
  if ( v16 >= 0 && *(_DWORD *)(v9 + 104) > v16 )
  {
    v28 = *(int *)(v15 + 4LL * v16);
    v29 = (double *)&v12[2 * v16];
    v30 = *v29;
    v31 = *(double *)(v58 + 8 * v28);
    a8 = *(double *)(v59 + 8 * v28) + v17;
    if ( v31 > a8 )
    {
      v32 = (v31 - *(double *)(v59 + 8 * v28)) * (v31 - *(double *)(v59 + 8 * v28));
      if ( v30 == 0.0 )
      {
        if ( v32 <= 0.0 )
          v55 = v32 <= -1.0e-50;
        else
          v55 = v32 >= 1.0e-50;
        if ( v55 )
        {
          *((_DWORD *)v10 + 4) = v14 + 1;
          v13[v14] = v16;
          *v29 = v32;
          LODWORD(v14) = *((_DWORD *)v10 + 4);
        }
        goto LABEL_5;
      }
    }
    else
    {
      a8 = *(double *)(v61 + 8 * v28) - v17;
      if ( a8 <= v31 )
      {
        if ( v30 != 0.0 )
          *v29 = 1.0e-100;
        goto LABEL_5;
      }
      v32 = (v31 - *(double *)(v61 + 8 * v28)) * (v31 - *(double *)(v61 + 8 * v28));
      if ( v30 == 0.0 )
      {
        CoinIndexedVector::add((CoinIndexedVector *)v10, v16, v32);
        v9 = *((_QWORD *)this + 1);
        v19 = 0.0;
        LODWORD(v14) = *(_DWORD *)(*((_QWORD *)this + 5) + 16LL);
        v11 = 1000.0;
        goto LABEL_5;
      }
    }
    *v29 = v32;
  }
LABEL_5:
  v62 = 0;
  if ( *(_DWORD *)(v9 + 1328) + 199 >= *(_DWORD *)(v9 + 308)
    && (v20 = *(double *)(v9 + 768), v21 = *(double *)(v9 + 760), v20 > v21) )
  {
    v22 = *((_DWORD *)this + 6);
    v62 = 1;
    v17 = v17 * fmin(v20 / v21, 1000.0);
    if ( v22 > 1 )
      goto LABEL_8;
  }
  else
  {
    v22 = *((_DWORD *)this + 6);
    if ( v22 > 1 )
    {
LABEL_8:
      v23 = (int)v14 / 8;
      if ( (int)v14 / 8 < 2000 )
        v23 = 2000;
      if ( v22 == 2 )
      {
        v27 = (double)(int)v14;
      }
      else
      {
        v24 = *(_QWORD *)(v9 + 1264);
        v25 = *(_QWORD *)(v24 + 8);
        if ( v25 )
        {
          v26 = *(_DWORD *)(v25 + 72);
        }
        else
        {
          v56 = *(_DWORD **)(v24 + 16);
          v57 = *(__int64 (**)(void))(*(_QWORD *)v56 + 136LL);
          if ( (char *)v57 == (char *)CoinDenseFactorization::numberElements )
          {
            v26 = v56[9] * (v56[10] + v56[13]);
          }
          else
          {
            v60 = v14;
            v26 = v57();
            v9 = *((_QWORD *)this + 1);
            v19 = 0.0;
            LODWORD(v14) = v60;
          }
        }
        v27 = (double)(int)v14;
        v11 = (double)v26 / (double)*(int *)(v9 + 104);
        if ( v11 < 1.0 )
        {
          v23 = (int)v14 / 20;
          if ( (int)v14 / 20 < 2000 )
            v23 = 2000;
        }
        else if ( v11 > 10.0 )
        {
          v23 = v14 + 1;
          v11 = v11 / 80.0 * v27;
          if ( v11 <= v27 )
          {
            v23 = (int)v11;
            if ( (int)v11 < 2000 )
              v23 = 2000;
          }
        }
      }
      goto LABEL_26;
    }
  }
  v23 = v14 + 1;
  v27 = (double)(int)v14;
LABEL_26:
  v33 = *(double *)(v9 + 760);
  v64[0] = v14;
  v64[1] = 0;
  if ( v33 > 0.001 )
    v23 = v14 + 1;
  v34 = 0;
  v35 = 1664525 * *(_DWORD *)(v9 + 356) + 1013904223;
  *(_DWORD *)(v9 + 356) = v35;
  v63 = (int)((double)v35 * 2.328306436538696e-10 * v27);
  v64[2] = v63;
  result = 0xFFFFFFFFLL;
  do
  {
    v37 = (unsigned int)v64[v34 - 1];
    v38 = v64[v34];
    if ( v38 > (int)v37 )
    {
      v39 = &v13[(int)v37];
      v40 = (unsigned __int64)&v13[(int)v37 + 1 + (unsigned __int64)(unsigned int)(v38 - 1 - v37)];
      while ( 1 )
      {
        while ( 1 )
        {
          v41 = *v39;
          v37 = v41;
          v42 = *(double *)&v12[2 * v41];
          if ( v42 > v17 )
            break;
LABEL_35:
          if ( (int *)v40 == ++v39 )
            goto LABEL_43;
        }
        v11 = fmin(*(double *)(*((_QWORD *)this + 4) + 8 * v41), 1.0e50);
        v27 = v11 * v19;
        if ( v42 <= v11 * v19 )
          goto LABEL_34;
        if ( (_DWORD)v41 != v16 )
          break;
        v42 = v42 * 1.0e-10;
        if ( v27 <= v42 )
          break;
        if ( (int *)v40 == ++v39 )
          goto LABEL_43;
      }
      v43 = *(int *)(v15 + 4 * v41);
      if ( (*(_BYTE *)(*(_QWORD *)(v9 + 264) + v43) & 0x40) != 0 )
      {
        ++v23;
      }
      else
      {
        v27 = *(double *)(v58 + 8 * v43);
        a8 = *(double *)(v59 + 8 * v43) + v17;
        if ( v27 > a8 || (a8 = *(double *)(v61 + 8 * v43) - v17, a8 > v27) )
        {
          result = (unsigned int)v37;
          v19 = v42 / v11;
        }
      }
LABEL_34:
      if ( !--v23 )
        break;
      goto LABEL_35;
    }
LABEL_43:
    if ( !v23 )
      break;
    v34 += 2;
  }
  while ( v34 != 4 );
  v44 = (unsigned int)result >> 31;
  LOBYTE(v45) = v44;
  if ( (int)result < 0 && v62 )
  {
    v46 = *(__int64 (__fastcall ***)(ClpDualRowSteepest *, __int64, __int64, __int64, double, double, double, double, double, double, double, double))this;
    v47 = *(double *)(v9 + 768);
    *(_QWORD *)(v9 + 768) = 0;
    result = (*v46)(this, v37, v44, v44, v47, v11, v17, v27, v19, 1.0e50, a8, 1.0e-10);
    v9 = *((_QWORD *)this + 1);
    LODWORD(v14) = *(_DWORD *)(*((_QWORD *)this + 5) + 16LL);
    v45 = (unsigned int)result >> 31;
    *(double *)(v9 + 768) = v47;
  }
  if ( v16 < 0 && (_BYTE)v45 )
  {
    v48 = *((_QWORD *)this + 5);
    if ( (int)v14 <= 0 )
    {
      *(_DWORD *)(v48 + 16) = 0;
    }
    else
    {
      v49 = v13;
      v50 = 0;
      v51 = (__int64)&v13[(unsigned int)(v14 - 1) + 1];
      do
      {
        while ( 1 )
        {
          v53 = *v49;
          v54 = (double *)&v12[2 * v53];
          if ( fabs(*v54) <= 1.0e-50 )
            break;
          ++v49;
          v52 = v50++;
          v13[v52] = v53;
          if ( v49 == (int *)v51 )
            goto LABEL_55;
        }
        ++v49;
        *v54 = 0.0;
      }
      while ( v49 != (int *)v51 );
LABEL_55:
      *(_DWORD *)(v48 + 16) = v50;
      if ( v50 )
      {
LABEL_56:
        *(_DWORD *)(v9 + 1232) = v50;
        return result;
      }
    }
    *(_BYTE *)(v48 + 28) = 0;
    v50 = 0;
    goto LABEL_56;
  }
  return result;
}

