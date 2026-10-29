CoinIndexedVector *__fastcall ClpPrimalColumnSteepest::djsAndDevex2(
        ClpPrimalColumnSteepest *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        CoinIndexedVector *a4,
        CoinIndexedVector *a5,
        double a6,
        double a7)
{
  __int64 v10; // rax
  CoinIndexedVector *v11; // rcx
  __int64 v12; // r14
  double v13; // xmm3_8
  __int64 v14; // r8
  double v15; // xmm2_8
  __int64 v16; // r15
  double v17; // xmm6_8
  __int64 v18; // r10
  int v19; // r9d
  __int64 v20; // r11
  __int64 v21; // rsi
  double v22; // xmm4_8
  int v23; // ebx
  __int64 v24; // rax
  double *v25; // rcx
  int v26; // edx
  double v27; // xmm0_8
  __int64 v28; // r13
  double *v29; // rcx
  double v30; // xmm0_8
  bool v31; // cl
  CoinIndexedVector *result; // rax
  int v33; // esi
  double *v34; // rax
  __int64 v35; // r13
  double v36; // xmm4_8
  double v37; // xmm5_8
  int *v38; // rsi
  __int64 v39; // r10
  __int64 v40; // rdi
  int v41; // eax
  __int64 v42; // r9
  __int64 v43; // r11
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rcx
  signed int v47; // edx
  double *v48; // rax
  double v49; // xmm0_8
  double *v50; // rcx
  double v51; // xmm1_8
  double v52; // xmm0_8
  double v53; // xmm1_8
  int v54; // eax
  int *v55; // rdx
  __int64 v56; // rsi
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rcx
  double *v60; // r10
  double *v61; // rax
  double v62; // xmm0_8
  double v63; // xmm1_8
  double v64; // xmm0_8
  double v65; // xmm1_8
  double *v66; // rdx
  bool v67; // dl
  double *v68; // r13
  __int64 v69; // [rsp+0h] [rbp-78h]
  double v71; // [rsp+10h] [rbp-68h]
  __int64 *v74; // [rsp+20h] [rbp-58h]
  double *v75; // [rsp+28h] [rbp-50h]
  __int64 v76; // [rsp+30h] [rbp-48h]
  int v77; // [rsp+3Ch] [rbp-3Ch]

  v10 = *((_QWORD *)this + 1);
  v69 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL);
  v71 = fmin(0.01, *(double *)(v10 + 768)) + *(double *)(v10 + 872);
  ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(v10 + 1264), a3, a2);
  v11 = a5;
  v12 = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 392LL))(
    *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
    *((_QWORD *)this + 1),
    a2,
    v11,
    a4,
    -1.0);
  v13 = v71;
  v14 = *((_QWORD *)this + 1);
  v15 = 0.0;
  v16 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL);
  v17 = -v71;
  v18 = *(_QWORD *)(v14 + 1184);
  v74 = *((__int64 **)this + 5);
  while ( !v12 )
  {
    v19 = *((_DWORD *)a2 + 4);
    v20 = *(_QWORD *)a2;
    v21 = *((_QWORD *)a2 + 1);
    v23 = *(_DWORD *)(v14 + 108);
    if ( v19 > 0 )
    {
      v22 = 1.01;
      goto LABEL_5;
    }
LABEL_44:
    ++v12;
  }
  v19 = *((_DWORD *)a4 + 4);
  v18 = *(_QWORD *)(v14 + 1192);
  v20 = *(_QWORD *)a4;
  v21 = *((_QWORD *)a4 + 1);
  if ( v19 <= 0 )
  {
LABEL_15:
    if ( (_DWORD)v12 != 1 )
      goto LABEL_43;
    goto LABEL_16;
  }
  v22 = 1.0;
  v23 = 0;
LABEL_5:
  v24 = 0;
  while ( 2 )
  {
    v25 = (double *)(v18 + 8LL * *(int *)(v20 + 4 * v24));
    v26 = v23 + *(_DWORD *)(v20 + 4 * v24);
    v27 = *v25 - *(double *)(v21 + 8 * v24);
    *(_QWORD *)(v21 + 8 * v24) = 0;
    *v25 = v27;
    switch ( *(_BYTE *)(*(_QWORD *)(v14 + 264) + v26) & 7 )
    {
      case 0:
      case 4:
        v28 = 8LL * v26;
        a7 = 100.0 * v13;
        if ( fabs(v27) <= 100.0 * v13 )
          goto LABEL_56;
        v29 = (double *)(v28 + v69);
        v30 = v27 * 10.0 * (v27 * 10.0);
        if ( *(double *)(v28 + v69) != 0.0 )
          goto LABEL_50;
        goto LABEL_9;
      case 1:
        v66 = (double *)(v16 + 8LL * v26);
        if ( *v66 != 0.0 )
          *v66 = 2.225073858507201e-308;
        goto LABEL_41;
      case 2:
        v28 = 8LL * v26;
        if ( v27 <= v13 )
          goto LABEL_56;
        a7 = v27 * v22;
        v29 = (double *)(v28 + v69);
        v30 = v27 * (v27 * v22);
        if ( *(double *)(v28 + v69) != 0.0 )
          goto LABEL_50;
LABEL_9:
        a7 = *(double *)(v28 + v16);
        v75 = (double *)(v28 + v16);
        if ( a7 != 0.0 )
          goto LABEL_52;
        if ( v30 > 0.0 )
          goto LABEL_11;
        a7 = -1.0e-50;
        v31 = v30 <= -1.0e-50;
        goto LABEL_12;
      case 3:
        v28 = 8LL * v26;
        if ( v17 <= v27 )
        {
LABEL_56:
          v68 = (double *)(v16 + v28);
          if ( *v68 != 0.0 )
            *v68 = 2.225073858507201e-308;
          goto LABEL_41;
        }
        a7 = v27 * v22;
        v29 = (double *)(v28 + v69);
        v30 = v27 * (v27 * v22);
        if ( *(double *)(v28 + v69) != 0.0 )
        {
LABEL_50:
          *v29 = v30;
          goto LABEL_41;
        }
        a7 = *(double *)(v28 + v16);
        v75 = (double *)(v28 + v16);
        if ( a7 != 0.0 )
        {
LABEL_52:
          v30 = v30 + a7;
          if ( v30 <= 0.0 )
          {
            a7 = -1.0e-50;
            v67 = v30 <= -1.0e-50;
          }
          else
          {
            v67 = v30 >= 1.0e-50;
          }
          if ( !v67 )
          {
            *v75 = 1.0e-100;
            goto LABEL_41;
          }
LABEL_14:
          ++v24;
          *v75 = v30;
          if ( v19 <= (int)v24 )
            goto LABEL_15;
          continue;
        }
        if ( v30 > 0.0 )
LABEL_11:
          v31 = v30 >= 1.0e-50;
        else
          v31 = v30 <= -1.0e-50;
LABEL_12:
        if ( v31 )
        {
          v76 = *v74;
          v77 = *((_DWORD *)v74 + 4);
          *((_DWORD *)v74 + 4) = v77 + 1;
          *(_DWORD *)(v76 + 4LL * v77) = v26;
          goto LABEL_14;
        }
LABEL_41:
        if ( v19 > (int)++v24 )
          continue;
        if ( (_DWORD)v12 != 1 )
        {
LABEL_43:
          v18 = *(_QWORD *)(v14 + 1184);
          goto LABEL_44;
        }
LABEL_16:
        *((_DWORD *)a2 + 4) = 0;
        *((_BYTE *)a2 + 28) = 0;
        *((_DWORD *)a4 + 4) = 0;
        *((_BYTE *)a4 + 28) = 0;
        result = (CoinIndexedVector *)(v16 + 8LL * *(int *)(v14 + 1152));
        if ( *(double *)result != 0.0 )
          *(_QWORD *)result = 0x10000000000000LL;
        v33 = *((_DWORD *)this + 23);
        if ( v33 >= 0 )
        {
          *((_DWORD *)this + 23) = -1;
          v34 = (double *)(v16 + 8LL * *(int *)(*(_QWORD *)(v14 + 1256) + 4LL * v33));
          if ( *v34 != 0.0 )
            *v34 = 2.225073858507201e-308;
          v35 = *(int *)(v14 + 1160);
          if ( (int)v35 >= 0 )
            v15 = *(double *)(*((_QWORD *)this + 4) + 8LL * (int)v35);
          *((_DWORD *)a2 + 4) = 0;
          *((_BYTE *)a2 + 28) = 0;
          *((_DWORD *)a4 + 4) = 0;
          *((_BYTE *)a4 + 28) = 0;
          CoinIndexedVector::insert(a2, v33, -1.0);
          ClpFactorization::updateColumnTranspose(*(ClpFactorization **)(*((_QWORD *)this + 1) + 1264LL), a3, a2);
          (*(void (__fastcall **)(_QWORD, _QWORD, CoinIndexedVector *, CoinIndexedVector *, CoinIndexedVector *, double, double, double, double, double, double, double))(**(_QWORD **)(*((_QWORD *)this + 1) + 192LL) + 392LL))(
            *(_QWORD *)(*((_QWORD *)this + 1) + 192LL),
            *((_QWORD *)this + 1),
            a2,
            a5,
            a4,
            -1.0,
            a7,
            v15,
            v13,
            v36,
            v37,
            v17);
          v38 = *(int **)a2;
          v39 = *((_QWORD *)a2 + 1);
          v40 = *((_QWORD *)this + 4);
          v41 = *((_DWORD *)a2 + 4);
          v42 = *(int *)(*((_QWORD *)this + 1) + 108LL);
          if ( v41 > 0 )
          {
            v43 = *((_QWORD *)this + 8);
            v44 = (__int64)&v38[v41 - 1 + 1];
            do
            {
              while ( 1 )
              {
                v45 = 8LL * *v38;
                v46 = 8 * v42 + v45;
                v47 = v42 + *v38;
                v48 = (double *)(v39 + v45);
                v49 = *v48;
                v50 = (double *)(v40 + v46);
                v51 = *v50;
                *v48 = 0.0;
                LODWORD(v48) = *(_DWORD *)(v43 + 4LL * (v47 >> 5));
                v52 = v49 * v49 * *((double *)this + 3);
                if ( _bittest((const int *)&v48, v47) )
                  v52 = v52 + 1.0;
                v53 = v51 * 0.99;
                if ( v53 > v52 )
                  break;
                ++v38;
                *v50 = v52;
                if ( v38 == (int *)v44 )
                  goto LABEL_29;
              }
              ++v38;
              *v50 = v53;
            }
            while ( (int *)v44 != v38 );
          }
LABEL_29:
          v54 = *((_DWORD *)a4 + 4);
          v55 = *(int **)a4;
          v56 = *((_QWORD *)a4 + 1);
          if ( v54 <= 0 )
          {
LABEL_35:
            if ( (int)v35 < 0 )
              goto LABEL_37;
          }
          else
          {
            v57 = *((_QWORD *)this + 8);
            v58 = (__int64)&v55[v54 - 1 + 1];
            do
            {
              while ( 1 )
              {
                v59 = *v55;
                v60 = (double *)(v40 + 8 * v59);
                v61 = (double *)(v56 + 8 * v59);
                v62 = *v61;
                v63 = *v60;
                *v61 = 0.0;
                LODWORD(v61) = *(_DWORD *)(v57 + 4LL * ((int)v59 >> 5));
                v64 = v62 * v62 * *((double *)this + 3);
                if ( _bittest((const int *)&v61, v59) )
                  v64 = v64 + 1.0;
                v65 = v63 * 0.99;
                if ( v65 > v64 )
                  break;
                ++v55;
                *v60 = v64;
                if ( v55 == (int *)v58 )
                  goto LABEL_35;
              }
              ++v55;
              *v60 = v65;
            }
            while ( v55 != (int *)v58 );
            if ( (int)v35 < 0 )
            {
LABEL_37:
              result = a5;
              *((_DWORD *)a5 + 4) = 0;
              *((_BYTE *)a5 + 28) = 0;
              *((_DWORD *)a2 + 4) = 0;
              *((_BYTE *)a2 + 28) = 0;
              *((_DWORD *)a4 + 4) = 0;
              *((_BYTE *)a4 + 28) = 0;
              return result;
            }
          }
          *(double *)(v40 + 8 * v35) = v15;
          goto LABEL_37;
        }
        return result;
      default:
        goto LABEL_41;
    }
  }
}

