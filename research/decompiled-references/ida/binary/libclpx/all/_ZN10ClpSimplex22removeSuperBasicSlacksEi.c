void __fastcall ClpSimplex::removeSuperBasicSlacks(ClpSimplex *this, int a2, double a3)
{
  __int64 v4; // rdx
  CoinPackedMatrix *v5; // rdi
  __int64 (__fastcall *v6)(ClpPackedMatrix *); // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // edx
  int v14; // r9d
  _BYTE *v15; // rax
  double v16; // xmm1_8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 (***v19)(void); // rdi
  __int64 (**v20)(void); // rax
  __int64 (*v21)(void); // rdx
  __int64 (__fastcall *v22)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v23)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v24)(ClpPackedMatrix *); // rax
  __int64 (*v25)(void); // rax
  const CoinPackedMatrix *v26; // rsi
  int *v27; // r10
  __int64 v28; // rbx
  __int64 v29; // r9
  double v30; // xmm10_8
  double v31; // xmm1_8
  double v32; // xmm5_8
  double v33; // xmm6_8
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 v39; // r15
  __int64 v40; // rdx
  double *v41; // r14
  double v42; // xmm7_8
  double v43; // xmm1_8
  __int64 v44; // rax
  int v45; // edx
  __int64 v46; // r8
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  double v50; // xmm2_8
  __int64 v51; // rdx
  double v52; // xmm3_8
  double v53; // xmm8_8
  double v54; // xmm9_8
  double v55; // xmm0_8
  __int64 v56; // rdx
  __int64 v57; // r9
  double v58; // xmm2_8
  int v59; // ecx
  CoinMessageHandler *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rax
  _BYTE *v66; // rax
  _BYTE *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // [rsp+0h] [rbp-188h]
  __int64 v73; // [rsp+10h] [rbp-178h]
  __int64 v74; // [rsp+18h] [rbp-170h]
  __int64 v75; // [rsp+20h] [rbp-168h]
  __int64 v76; // [rsp+28h] [rbp-160h]
  int *v77; // [rsp+30h] [rbp-158h]
  __int64 v78; // [rsp+38h] [rbp-150h]
  __int64 v79; // [rsp+40h] [rbp-148h]
  double *v80; // [rsp+50h] [rbp-138h]
  __int64 v81; // [rsp+58h] [rbp-130h]
  __int64 v82; // [rsp+60h] [rbp-128h]
  int v83; // [rsp+68h] [rbp-120h]
  int v84; // [rsp+6Ch] [rbp-11Ch]
  int v85; // [rsp+70h] [rbp-118h]
  _BYTE v87[32]; // [rsp+80h] [rbp-108h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-E8h]
  __int64 v89; // [rsp+A8h] [rbp-E0h]
  __int64 v90; // [rsp+B0h] [rbp-D8h]
  __int64 v91; // [rsp+B8h] [rbp-D0h]
  char s[168]; // [rsp+E0h] [rbp-A8h] BYREF

  memset(*((void **)this + 14), 0, 8LL * *((int *)this + 26));
  v4 = *((_QWORD *)this + 24);
  v5 = nullptr;
  if ( v4 )
  {
    v6 = **(__int64 (__fastcall ***)(ClpPackedMatrix *))v4;
    if ( v6 == ClpPackedMatrix::getPackedMatrix )
      v5 = *(CoinPackedMatrix **)(v4 + 88);
    else
      v5 = (CoinPackedMatrix *)v6(*((ClpPackedMatrix **)this + 24));
  }
  CoinPackedMatrix::times(v5, *((const double **)this + 15), *((double **)this + 14));
  v7 = *((int *)this + 26);
  if ( v7 > 0xFFFFFFFFFFFFFFFLL
    || (v8 = operator new[](8 * v7), v9 = *((int *)this + 26), v80 = (double *)v8, v9 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v10 = operator new[](4 * v9);
  v11 = *((_DWORD *)this + 26);
  v77 = (int *)v10;
  if ( v11 <= 0 )
  {
    v84 = 0;
    v18 = 0;
  }
  else
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    do
    {
      v15 = (_BYTE *)(*((_QWORD *)this + 33) + v13 + *((_DWORD *)this + 27));
      if ( (*v15 & 7) != 1 )
      {
        v16 = *((double *)this + 110);
        a3 = *(double *)(*((_QWORD *)this + 14) + v12);
        if ( a3 > *(double *)(*((_QWORD *)this + 18) + v12) + v16
          && *(double *)(*((_QWORD *)this + 19) + v12) - v16 > a3 )
        {
          *v15 = *v15 & 0xF8 | 4;
          v11 = *((_DWORD *)this + 26);
          v17 = v14++;
          a3 = fmin(a3 - *(double *)(*((_QWORD *)this + 18) + v12), *(double *)(*((_QWORD *)this + 19) + v12) - a3);
          v80[v17] = a3;
          v77[v17] = v13;
        }
      }
      ++v13;
      v12 += 8;
    }
    while ( v13 < v11 );
    v84 = v14;
    v18 = v14;
  }
  if ( a2 >= (int)v18 )
    goto LABEL_51;
  CoinSort_2<double,int>(v80, &v80[v18], v77);
  v19 = *((__int64 (****)(void))this + 24);
  v20 = *v19;
  v21 = (*v19)[6];
  if ( (char *)v21 == (char *)ClpPackedMatrix::getIndices )
  {
    v22 = (__int64 (__fastcall *)(ClpPackedMatrix *))v20[7];
    v75 = (__int64)v19[11][5];
    if ( v22 == ClpPackedMatrix::getVectorStarts )
      goto LABEL_17;
  }
  else
  {
    v68 = v21();
    v19 = *((__int64 (****)(void))this + 24);
    v75 = v68;
    v20 = *v19;
    v22 = (__int64 (__fastcall *)(ClpPackedMatrix *))(*v19)[7];
    if ( v22 == ClpPackedMatrix::getVectorStarts )
    {
LABEL_17:
      v23 = (__int64 (__fastcall *)(ClpPackedMatrix *))v20[8];
      v73 = (__int64)v19[11][6];
      if ( v23 == ClpPackedMatrix::getVectorLengths )
        goto LABEL_18;
LABEL_64:
      v70 = ((__int64 (*)(void))v23)();
      v19 = *((__int64 (****)(void))this + 24);
      v74 = v70;
      v24 = (__int64 (__fastcall *)(ClpPackedMatrix *))(*v19)[5];
      if ( v24 == ClpPackedMatrix::getElements )
        goto LABEL_19;
      goto LABEL_65;
    }
  }
  v69 = ((__int64 (*)(void))v22)();
  v19 = *((__int64 (****)(void))this + 24);
  v73 = v69;
  v20 = *v19;
  v23 = (__int64 (__fastcall *)(ClpPackedMatrix *))(*v19)[8];
  if ( v23 != ClpPackedMatrix::getVectorLengths )
    goto LABEL_64;
LABEL_18:
  v24 = (__int64 (__fastcall *)(ClpPackedMatrix *))v20[5];
  v74 = (__int64)v19[11][7];
  if ( v24 == ClpPackedMatrix::getElements )
  {
LABEL_19:
    v76 = (__int64)v19[11][4];
    goto LABEL_20;
  }
LABEL_65:
  v71 = ((__int64 (*)(void))v24)();
  v19 = *((__int64 (****)(void))this + 24);
  v76 = v71;
  if ( v19 )
  {
LABEL_20:
    v25 = **v19;
    if ( (char *)v25 == (char *)ClpPackedMatrix::getPackedMatrix )
      v26 = (const CoinPackedMatrix *)v19[11];
    else
      v26 = (const CoinPackedMatrix *)v25();
    goto LABEL_22;
  }
  v26 = nullptr;
LABEL_22:
  CoinPackedMatrix::CoinPackedMatrix((CoinPackedMatrix *)v87, v26);
  CoinPackedMatrix::reverseOrdering((CoinPackedMatrix *)v87);
  v82 = v89;
  v78 = v90;
  v79 = v91;
  v81 = v88;
  if ( v84 > 0 )
  {
    v85 = 0;
    v27 = v77;
    while ( 1 )
    {
      v28 = *v27;
      v29 = *((_QWORD *)this + 14);
      v30 = -1.0;
      v31 = *(double *)(v29 + 8 * v28);
      v83 = *v27;
      a3 = *(double *)(*((_QWORD *)this + 19) + 8 * v28) - v31;
      v32 = v31 - *(double *)(*((_QWORD *)this + 18) + 8 * v28);
      if ( v32 > a3 )
      {
        v32 = *(double *)(*((_QWORD *)this + 19) + 8 * v28) - v31;
        v30 = 1.0;
      }
      v33 = *((double *)this + 110);
      v34 = *(int *)(v78 + 4 * v28);
      v35 = *(_DWORD *)(v79 + 4 * v28);
      if ( (int)v34 + v35 > (int)v34 )
        break;
LABEL_47:
      if ( v33 > v32 )
      {
LABEL_53:
        v31 = *(double *)(v29 + 8 * v28);
        a3 = *(double *)(*((_QWORD *)this + 19) + 8 * v28) - v31;
LABEL_54:
        ++v85;
        if ( v33 <= a3 )
        {
          if ( v33 > v31 - *(double *)(*((_QWORD *)this + 18) + 8 * v28) )
          {
            v67 = (_BYTE *)(*((_QWORD *)this + 33) + *((_DWORD *)this + 27) + v83);
            *v67 = *v67 & 0xF8 | 3;
          }
        }
        else
        {
          v66 = (_BYTE *)(*((_QWORD *)this + 33) + *((_DWORD *)this + 27) + v83);
          *v66 = *v66 & 0xF8 | 2;
        }
      }
      if ( &v77[v84 - 1 + 1] == ++v27 )
      {
        v59 = v84;
        goto LABEL_50;
      }
    }
    if ( v33 <= v32 )
    {
      v36 = (unsigned int)(v35 - 1);
      v37 = 0;
      v38 = v82 + 4 * v34;
      v39 = v81 + 8 * v34;
      while ( 1 )
      {
        v40 = *(int *)(v38 + 4 * v37);
        if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v40) & 7) != 1 )
          goto LABEL_29;
        v41 = (double *)(*((_QWORD *)this + 15) + 8 * v40);
        v42 = *v41;
        if ( *(double *)(v39 + 8 * v37) * v30 <= 0.0 )
        {
          v43 = -1.0;
          a3 = v42 - *(double *)(*((_QWORD *)this + 22) + 8 * v40);
        }
        else
        {
          v43 = 1.0;
          a3 = *(double *)(*((_QWORD *)this + 23) + 8 * v40) - v42;
        }
        v44 = *(int *)(v73 + 4 * v40);
        v45 = *(_DWORD *)(v74 + 4 * v40);
        if ( (int)v44 + v45 <= (int)v44 )
        {
          if ( a3 > 1.0e-12 )
          {
            *v41 = v42 + a3 * v43;
            goto LABEL_45;
          }
LABEL_29:
          if ( v36 == v37 )
            goto LABEL_47;
          goto LABEL_30;
        }
        v46 = (unsigned int)(v45 - 1) + 1LL;
        v47 = v75 + 4 * v44;
        v48 = v76 + 8 * v44;
        v49 = 0;
        do
        {
          while ( 1 )
          {
            v51 = *(int *)(v47 + 4 * v49);
            v52 = *(double *)(v29 + 8 * v51);
            v53 = *(double *)(v48 + 8 * v49) * v43;
            v54 = v53 * a3;
            if ( v53 <= 0.0 )
              break;
            v50 = *(double *)(*((_QWORD *)this + 19) + 8 * v51) - v52;
            if ( v54 > v50 )
              goto LABEL_37;
LABEL_38:
            if ( v46 == ++v49 )
              goto LABEL_42;
          }
          v50 = *(double *)(*((_QWORD *)this + 18) + 8 * v51) - v52;
          if ( v50 > v54 )
          {
LABEL_37:
            a3 = v50 / v53;
            goto LABEL_38;
          }
          ++v49;
        }
        while ( v46 != v49 );
LABEL_42:
        if ( a3 <= 1.0e-12 )
          goto LABEL_29;
        v55 = a3 * v43;
        v56 = 0;
        *v41 = v42 + v55;
        do
        {
          v57 = *(int *)(v47 + 4 * v56);
          v58 = *(double *)(v48 + 8 * v56++);
          *(double *)(*((_QWORD *)this + 14) + 8 * v57) = v58 * v55 + *(double *)(*((_QWORD *)this + 14) + 8 * v57);
        }
        while ( v49 != v56 );
LABEL_45:
        v29 = *((_QWORD *)this + 14);
        v33 = *((double *)this + 110);
        a3 = *(double *)(v29 + 8 * v28);
        if ( v30 <= 0.0 )
        {
          v32 = a3 - *(double *)(*((_QWORD *)this + 18) + 8 * v28);
          goto LABEL_29;
        }
        v32 = *(double *)(*((_QWORD *)this + 19) + 8 * v28) - a3;
        if ( v36 == v37 )
          goto LABEL_47;
LABEL_30:
        ++v37;
        if ( v33 > v32 )
          goto LABEL_53;
      }
    }
    goto LABEL_54;
  }
  v85 = 0;
  v59 = v84;
LABEL_50:
  sprintf(s, "Threshold %d found %d fixed %d", a2, v59, v85);
  v60 = (CoinMessageHandler *)CoinMessageHandler::message(
                                *((CoinMessageHandler **)this + 43),
                                92,
                                (ClpSimplex *)((char *)this + 416));
  v65 = CoinMessageHandler::operator<<(v60, (__int64)s, v61, v62, v63, v64, v72);
  CoinMessageHandler::operator<<(v65, 0, a3);
  CoinPackedMatrix::~CoinPackedMatrix((CoinPackedMatrix *)v87);
LABEL_51:
  operator delete[](v80);
  operator delete[](v77);
}

