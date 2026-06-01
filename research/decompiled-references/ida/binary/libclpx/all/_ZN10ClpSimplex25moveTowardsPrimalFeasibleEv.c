double __fastcall ClpSimplex::moveTowardsPrimalFeasible(
        ClpSimplex *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  __int64 v10; // rdx
  CoinPackedMatrix *v11; // rdi
  __int64 (__fastcall *v12)(ClpPackedMatrix *); // rax
  unsigned __int64 v13; // rax
  int *v14; // rbp
  double v15; // xmm5_8
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  double v20; // xmm3_8
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // r12d
  double v24; // xmm4_8
  double v25; // xmm0_8
  __int64 v26; // r8
  double v27; // xmm1_8
  double v28; // xmm2_8
  __int64 (__fastcall ***v29)(double, double, double, double, double, double, double, double); // rdi
  __int64 (__fastcall **v30)(double, double, double, double, double, double, double, double); // rax
  __int64 (__fastcall *v31)(double, double, double, double, double, double, double, double); // rdx
  __int64 (__fastcall *v32)(ClpPackedMatrix *); // rdx
  __int64 v33; // r15
  __int64 (__fastcall *v34)(double, double, double, double, double, double, double, double); // rdx
  __int64 (__fastcall *v35)(double, double, double, double, double, double, double, double); // rax
  __int64 (__fastcall *v36)(double, double, double, double, double, double, double, double); // rax
  const CoinPackedMatrix *v37; // rsi
  double v38; // xmm4_8
  double v39; // xmm5_8
  double v40; // xmm10_8
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rax
  double v44; // xmm3_8
  int v45; // r9d
  __int64 v46; // r11
  double v47; // xmm0_8
  int v48; // edx
  __int64 v49; // rdx
  int v50; // ecx
  double v51; // xmm1_8
  double v53; // xmm11_8
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // r10
  __int64 v57; // r11
  __int64 v58; // r14
  __int64 v59; // r13
  __int64 v60; // rdx
  double v61; // xmm6_8
  double *v62; // r12
  double v63; // xmm8_8
  double v64; // xmm7_8
  double v65; // xmm0_8
  __int64 v66; // rax
  double v67; // xmm6_8
  double v68; // xmm0_8
  bool v69; // sf
  int v70; // edx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rsi
  __int64 v74; // rax
  double v75; // xmm2_8
  __int64 v76; // rdx
  double v77; // xmm1_8
  double v78; // xmm9_8
  double v79; // xmm5_8
  double v80; // xmm2_8
  double v81; // xmm6_8
  __int64 v82; // rdx
  double v83; // xmm0_8
  __int64 v84; // rdi
  double v85; // xmm1_8
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // [rsp+0h] [rbp-E8h]
  __int64 v91; // [rsp+8h] [rbp-E0h]
  double v92; // [rsp+10h] [rbp-D8h]
  int v93; // [rsp+10h] [rbp-D8h]
  __int64 v94; // [rsp+20h] [rbp-C8h]
  __int64 v95; // [rsp+28h] [rbp-C0h]
  __int64 v96; // [rsp+30h] [rbp-B8h]
  __int64 v97; // [rsp+38h] [rbp-B0h]
  __int64 v98; // [rsp+40h] [rbp-A8h]
  _BYTE v99[32]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v100; // [rsp+70h] [rbp-78h]
  __int64 v101; // [rsp+78h] [rbp-70h]
  __int64 v102; // [rsp+80h] [rbp-68h]
  __int64 v103; // [rsp+88h] [rbp-60h]

  memset(*((void **)this + 14), 0, 8LL * *((int *)this + 26));
  v10 = *((_QWORD *)this + 24);
  v11 = nullptr;
  if ( v10 )
  {
    v12 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v10;
    if ( v12 == ClpPackedMatrix::getPackedMatrix )
      v11 = *(CoinPackedMatrix **)(v10 + 88);
    else
      v11 = (CoinPackedMatrix *)v12(*((ClpPackedMatrix **)this + 24));
  }
  CoinPackedMatrix::times(v11, *((const double **)this + 15), *((double **)this + 14));
  v13 = *((int *)this + 26);
  if ( v13 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v14 = (int *)operator new[](4 * v13);
  v16 = *((_DWORD *)this + 26);
  if ( v16 <= 0 )
  {
    v92 = 0.0;
    goto LABEL_37;
  }
  v17 = (unsigned int)(v16 - 1);
  v18 = *((_QWORD *)this + 14);
  v19 = *((_QWORD *)this + 18);
  v20 = *((double *)this + 110);
  v21 = 0;
  v22 = v17 + 1;
  v23 = 0;
  v24 = 0.0;
  do
  {
    v27 = *(double *)(v18 + 8 * v21);
    v28 = *(double *)(v19 + 8 * v21) - v20;
    if ( v28 > v27 )
    {
      v25 = *(double *)(v19 + 8 * v21) - v27;
    }
    else
    {
      v25 = *(double *)(*((_QWORD *)this + 19) + 8 * v21);
      v28 = v20 + v25;
      if ( v27 <= v20 + v25 )
        goto LABEL_10;
      v27 = v27 - v25;
      v25 = v27;
    }
    a9 = 0.0;
    if ( v25 != 0.0 )
    {
      v24 = v24 + v25;
      v26 = v23++;
      v14[v26] = v21;
    }
LABEL_10:
    ++v21;
  }
  while ( v22 != v21 );
  v92 = v24;
  if ( v23 )
  {
    v29 = *((__int64 (__fastcall ****)(double, double, double, double, double, double, double, double))this + 24);
    v30 = *v29;
    v31 = (*v29)[6];
    if ( (char *)v31 == (char *)ClpPackedMatrix::getIndices )
    {
      v32 = (__int64 (__fastcall *)(ClpPackedMatrix *))v30[7];
      v90 = (__int64)v29[11][5];
      if ( v32 == ClpPackedMatrix::getVectorStarts )
        goto LABEL_17;
LABEL_76:
      v89 = ((__int64 (__fastcall *)(double, double, double, double, double, double, double, double))v32)(
              v25,
              v27,
              v28,
              v20,
              v24,
              v15,
              a8,
              a9);
      v29 = *((__int64 (__fastcall ****)(double, double, double, double, double, double, double, double))this + 24);
      v33 = v89;
      v30 = *v29;
    }
    else
    {
      v88 = v31(v25, v27, v28, v20, v24, v15, a8, a9);
      v29 = *((__int64 (__fastcall ****)(double, double, double, double, double, double, double, double))this + 24);
      v90 = v88;
      v30 = *v29;
      v32 = (__int64 (__fastcall *)(ClpPackedMatrix *))(*v29)[7];
      if ( v32 != ClpPackedMatrix::getVectorStarts )
        goto LABEL_76;
LABEL_17:
      v33 = (__int64)v29[11][6];
    }
    v34 = v30[8];
    if ( (char *)v34 == (char *)ClpPackedMatrix::getVectorLengths )
    {
      v96 = (__int64)v29[11][7];
    }
    else
    {
      v87 = v34(v25, v27, v28, v20, v24, v15, a8, a9);
      v29 = *((__int64 (__fastcall ****)(double, double, double, double, double, double, double, double))this + 24);
      v96 = v87;
      v30 = *v29;
    }
    v35 = v30[5];
    if ( (char *)v35 == (char *)ClpPackedMatrix::getElements )
    {
      v91 = (__int64)v29[11][4];
LABEL_22:
      v36 = **v29;
      if ( (char *)v36 == (char *)ClpPackedMatrix::getPackedMatrix )
        v37 = (const CoinPackedMatrix *)v29[11];
      else
        v37 = (const CoinPackedMatrix *)v36(v25, v27, v28, v20, v24, v15, a8, a9);
    }
    else
    {
      v86 = v35(v25, v27, v28, v20, v24, v15, a8, a9);
      v29 = *((__int64 (__fastcall ****)(double, double, double, double, double, double, double, double))this + 24);
      v91 = v86;
      if ( v29 )
        goto LABEL_22;
      v37 = nullptr;
    }
    CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v99, v37);
    CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)v99);
    v38 = *((double *)this + 110);
    v39 = 1.797693134862316e308;
    v98 = v101;
    v94 = v102;
    v40 = v92;
    v95 = v103;
    v97 = v100;
    while ( 2 )
    {
      if ( v40 <= v38 || !v23 )
      {
LABEL_36:
        v92 = v40;
        CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v99);
        goto LABEL_37;
      }
      v41 = *((_QWORD *)this + 14);
      v42 = *((_QWORD *)this + 18);
      v43 = 0;
      v44 = v38;
      v45 = -1;
      v46 = 0;
      v40 = 0.0;
LABEL_33:
      v49 = v14[v43];
      v50 = v14[v43];
      v51 = *(double *)(v41 + 8 * v49);
      if ( *(double *)(v42 + 8 * v49) - v38 <= v51 )
      {
        if ( v51 > *(double *)(*((_QWORD *)this + 19) + 8 * v49) + v38 )
        {
          v47 = v51 - *(double *)(*((_QWORD *)this + 19) + 8 * v49);
LABEL_29:
          if ( v47 != 0.0 )
          {
            v48 = v46 + 1;
            v14[v46] = v50;
            v40 = v40 + v47;
            v46 = (int)v46 + 1;
            if ( v47 > v44 )
            {
              v44 = v47;
              v45 = v50;
              v46 = v48;
            }
          }
        }
        if ( v23 <= (int)++v43 )
        {
          if ( v40 == 0.0 || v40 >= v39 - 0.00000001 )
            goto LABEL_36;
          v53 = 1.0;
          if ( *(double *)(v42 + 8LL * v45) <= *(double *)(v41 + 8LL * v45) )
            v53 = -1.0;
          v54 = *(int *)(v94 + 4LL * v45);
          v55 = *(_DWORD *)(v95 + 4LL * v45);
          if ( (int)v54 + v55 > (int)v54 && v38 <= v44 )
          {
            v93 = v46;
            v56 = 0;
            v57 = (unsigned int)(v55 - 1);
            v58 = v98 + 4 * v54;
            v59 = v97 + 8 * v54;
            while ( 1 )
            {
              v60 = *(int *)(v58 + 4 * v56);
              v61 = *(double *)(v59 + 8 * v56) * v53;
              v62 = (double *)(*((_QWORD *)this + 15) + 8 * v60);
              v63 = *v62;
              if ( v61 <= 0.0 )
              {
                v64 = -1.0;
                v65 = v63 - *(double *)(*((_QWORD *)this + 22) + 8 * v60);
                if ( v65 > v44 )
                {
                  v65 = v44;
                  v64 = -1.0;
                }
              }
              else
              {
                v64 = 1.0;
                v65 = *(double *)(*((_QWORD *)this + 23) + 8 * v60) - v63;
                if ( v65 > v44 )
                {
                  v65 = v44;
                  v64 = 1.0;
                }
              }
              v66 = *(int *)(v33 + 4 * v60);
              v67 = fabs(v61);
              v68 = v65 / v67;
              v69 = *(int *)(v96 + 4 * v60) < 0;
              v70 = v66 + *(_DWORD *)(v96 + 4 * v60);
              if ( !(v69 ^ __OFSUB__(v70, (_DWORD)v66) | (v70 == (_DWORD)v66)) )
                break;
              if ( v68 > 1.0e-12 )
              {
                v44 = v44 - v67 * v68;
                *v62 = v63 + v68 * v64;
                v38 = *((double *)this + 110);
              }
LABEL_58:
              if ( v57 != v56 )
              {
                ++v56;
                if ( v38 <= v44 )
                  continue;
              }
              LODWORD(v46) = v93;
              goto LABEL_61;
            }
            v71 = v90 + 4 * v66;
            v72 = v91 + 8 * v66;
            v73 = (unsigned int)(v70 - v66 - 1) + 1LL;
            v74 = 0;
            while ( 1 )
            {
LABEL_53:
              v76 = *(int *)(v71 + 4 * v74);
              if ( v45 == (_DWORD)v76 )
                goto LABEL_52;
              v77 = *(double *)(v72 + 8 * v74) * v64;
              v78 = *(double *)(*((_QWORD *)this + 14) + 8 * v76);
              v79 = v77 * v68;
              if ( v77 > 0.0 )
                break;
              v80 = *(double *)(*((_QWORD *)this + 18) + 8 * v76) - v78;
              if ( v80 <= v79 )
                goto LABEL_52;
              ++v74;
              v68 = v80 / v77;
              if ( v73 == v74 )
              {
LABEL_57:
                if ( v68 > 1.0e-12 )
                {
                  v81 = v67 * v68;
                  v82 = 0;
                  v83 = v68 * v64;
                  v44 = v44 - v81;
                  *v62 = v63 + v83;
                  do
                  {
                    v84 = *(int *)(v71 + 4 * v82);
                    v85 = *(double *)(v72 + 8 * v82++);
                    *(double *)(*((_QWORD *)this + 14) + 8 * v84) = v85 * v83
                                                                  + *(double *)(*((_QWORD *)this + 14) + 8 * v84);
                  }
                  while ( v74 != v82 );
                  v38 = *((double *)this + 110);
                }
                goto LABEL_58;
              }
            }
            v75 = *(double *)(*((_QWORD *)this + 19) + 8 * v76) - v78;
            if ( v79 > v75 )
              v68 = v75 / v77;
LABEL_52:
            if ( v73 == ++v74 )
              goto LABEL_57;
            goto LABEL_53;
          }
LABEL_61:
          v39 = v40;
          v23 = v46;
          continue;
        }
        goto LABEL_33;
      }
      break;
    }
    v47 = *(double *)(v42 + 8 * v49) - v51;
    goto LABEL_29;
  }
LABEL_37:
  operator delete[](v14);
  return v92;
}

