// Alternative name is '_ZN10ClpSimplexC1EPK8ClpModeliPKiiS4_bbb'
void __fastcall ClpSimplex::ClpSimplex(
        ClpSimplex *this,
        const ClpModel *a2,
        int a3,
        const int *a4,
        int a5,
        const int *a6,
        bool a7,
        bool a8,
        bool a9)
{
  ClpDualRowSteepest *v13; // r13
  ClpPrimalColumnSteepest *v14; // r13
  ClpEventHandler *v15; // rdi
  unsigned __int64 v16; // rdi
  int v17; // r14d
  double *v18; // r13
  bool v19; // cl
  __int64 v20; // rax
  double *v21; // rdx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  double v27; // xmm1_8
  double *v28; // rbp
  __int64 v29; // rdi
  __int64 (*v30)(void); // rax
  CoinPackedMatrix *v31; // rdi
  const int *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  double *v35; // rsi
  double *v36; // rsi
  double *v37; // rax
  double *v38; // rax
  int v39; // edi
  double *v40; // rax
  double *v41; // rax
  double v42; // [rsp+0h] [rbp-68h]
  int v45; // [rsp+14h] [rbp-54h]
  _BYTE v46[64]; // [rsp+28h] [rbp-40h] BYREF

  ClpModel::ClpModel(this, a2, a3, a4, a5, a6, a7, (CoinMessages *)a8);
  *((_QWORD *)this + 88) = 0x3D3C25C268497682LL;
  *((_QWORD *)this + 87) = 0;
  *((_QWORD *)this + 89) = 0xFFFFFFFEFFFFFFFELL;
  *((_QWORD *)this + 93) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 90) = 0xFFEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 97) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 105) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 91) = 2;
  *((_QWORD *)this + 94) = 0x430C6BF526340000LL;
  *((_QWORD *)this + 106) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 107) = 0xBFF0000000000000LL;
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 108) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 95) = 0;
  *((_QWORD *)this + 103) = 0xFFEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 98) = 0x4202A05F20000000LL;
  *((_QWORD *)this + 96) = 0;
  *((_QWORD *)this + 99) = 0;
  *((_QWORD *)this + 109) = 0x3E7AD7F29ABCAF48LL;
  *((_QWORD *)this + 100) = 0;
  *((_QWORD *)this + 110) = 0x3E7AD7F29ABCAF48LL;
  *((_QWORD *)this + 101) = 0;
  *((_QWORD *)this + 113) = 0x4202A05F20000000LL;
  *((_QWORD *)this + 102) = 0;
  *((_QWORD *)this + 104) = 0;
  *((_QWORD *)this + 111) = 0;
  *((_QWORD *)this + 112) = 0;
  *((_QWORD *)this + 114) = 0;
  *((_QWORD *)this + 115) = 0;
  *((_QWORD *)this + 123) = 0;
  *((_QWORD *)this + 124) = 0;
  *((_QWORD *)this + 125) = 0;
  *((_QWORD *)this + 116) = 0x3E45798EE2308C3ALL;
  *((_QWORD *)this + 126) = 0;
  *((_QWORD *)this + 144) = -1;
  *((_QWORD *)this + 145) = -1;
  *((_QWORD *)this + 146) = 0xFFFFFF9CFFFFFFFFLL;
  *((_QWORD *)this + 127) = 0;
  *((_QWORD *)this + 163) = 0x64FFFFFFFFLL;
  *((_QWORD *)this + 128) = 0;
  *((_QWORD *)this + 166) = 0xFFF0BDC1FFF0BDC1LL;
  *((_QWORD *)this + 129) = 0;
  *((_QWORD *)this + 130) = 0;
  *((_QWORD *)this + 131) = 0;
  *((_QWORD *)this + 147) = 0;
  *((_QWORD *)this + 148) = 0;
  *((_QWORD *)this + 149) = 0;
  *((_QWORD *)this + 150) = 0;
  *((_QWORD *)this + 151) = 0;
  *((_QWORD *)this + 152) = 0;
  *((_QWORD *)this + 153) = 0;
  *((_QWORD *)this + 154) = 100;
  *((_QWORD *)this + 157) = 0;
  *((_QWORD *)this + 158) = 0;
  *((_QWORD *)this + 159) = 0;
  *((_DWORD *)this + 320) = 0;
  *((_QWORD *)this + 161) = 0;
  *((_QWORD *)this + 162) = 1;
  *((_QWORD *)this + 165) = 0;
  *((_QWORD *)this + 167) = 0;
  *((_QWORD *)this + 168) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)this + 169) = 0;
  *((_QWORD *)this + 171) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 340) = 0;
  *((_QWORD *)this + 172) = 0x4024000000000000LL;
  *((_QWORD *)this + 173) = 0;
  *((_QWORD *)this + 174) = 0;
  *((_QWORD *)this + 175) = 0;
  ClpSimplexProgress::ClpSimplexProgress((ClpSimplex *)((char *)this + 1408));
  *((_OWORD *)this + 66) = 0;
  *((_OWORD *)this + 67) = 0;
  *((_OWORD *)this + 68) = 0;
  *((_OWORD *)this + 69) = 0;
  *((_OWORD *)this + 70) = 0;
  *((_OWORD *)this + 71) = 0;
  *(_OWORD *)((char *)this + 1724) = 0;
  *((_QWORD *)this + 164) = 0;
  *((_OWORD *)this + 109) = 0;
  *((_OWORD *)this + 110) = 0;
  ClpSimplex::getEmptyFactorization(this);
  v13 = (ClpDualRowSteepest *)operator new(0x48u);
  ClpDualRowSteepest::ClpDualRowSteepest(v13, 3);
  *((_QWORD *)this + 155) = v13;
  v14 = (ClpPrimalColumnSteepest *)operator new(0x70u);
  ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(v14, 3);
  v15 = *((ClpEventHandler **)this + 45);
  *((_QWORD *)this + 156) = v14;
  *((_DWORD *)this + 78) = 1;
  ClpEventHandler::setSimplex(v15, this);
  if ( a9 )
  {
    v16 = *((int *)a2 + 27);
    v45 = *((_DWORD *)a2 + 26);
    v17 = *((_DWORD *)a2 + 27);
    if ( v16 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v18 = (double *)operator new[](8 * v16);
    if ( v17 )
    {
      if ( v17 / 8 <= 0 )
      {
        v38 = v18;
      }
      else
      {
        v37 = v18;
        do
        {
          *v37 = 0.0;
          v37[1] = 0.0;
          v37 += 8;
          *(v37 - 6) = 0.0;
          *(v37 - 5) = 0.0;
          *(v37 - 4) = 0.0;
          *(v37 - 3) = 0.0;
          *(v37 - 2) = 0.0;
          *(v37 - 1) = 0.0;
        }
        while ( v37 != &v18[8 * (unsigned int)(v17 / 8 - 1) + 8] );
        v38 = &v18[8 * (v17 / 8 - 1) + 8];
      }
      switch ( v17 % 8 )
      {
        case 1:
          goto LABEL_43;
        case 2:
          goto LABEL_42;
        case 3:
          goto LABEL_41;
        case 4:
          goto LABEL_40;
        case 5:
          goto LABEL_39;
        case 6:
          goto LABEL_38;
        case 7:
          v38[6] = 0.0;
LABEL_38:
          v38[5] = 0.0;
LABEL_39:
          v38[4] = 0.0;
LABEL_40:
          v38[3] = 0.0;
LABEL_41:
          v38[2] = 0.0;
LABEL_42:
          v38[1] = 0.0;
LABEL_43:
          *v38 = 0.0;
          break;
        default:
          break;
      }
      if ( a5 <= 0 )
        goto LABEL_10;
    }
    else if ( a5 <= 0 )
    {
      v22 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))a2 + 20);
      if ( !v22 )
        goto LABEL_62;
      v24 = *((_QWORD *)a2 + 15);
LABEL_11:
      v23 = (**v22)(v22, 0, 0, v46, 0, 2);
LABEL_12:
      if ( v17 > 0 )
      {
        v25 = 8LL * (unsigned int)(v17 - 1) + 8;
        v26 = 0;
        v42 = 0.0;
        do
        {
          while ( v18[v26 / 8] != 0.0 )
          {
            v18[v26 / 8] = 0.0;
            v26 += 8LL;
            if ( v25 == v26 )
              goto LABEL_17;
          }
          v18[v26 / 8] = *(double *)(v24 + v26);
          v27 = *(double *)(v23 + v26) * *(double *)(v24 + v26);
          v26 += 8LL;
          v42 = v27 + v42;
        }
        while ( v25 != v26 );
        goto LABEL_17;
      }
LABEL_62:
      v42 = 0.0;
LABEL_17:
      if ( (unsigned __int64)v45 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v28 = (double *)operator new[](8LL * v45);
      if ( v45 )
      {
        v39 = v45;
        if ( v45 / 8 <= 0 )
        {
          v41 = v28;
        }
        else
        {
          v40 = v28;
          do
          {
            *v40 = 0.0;
            v40[1] = 0.0;
            v40 += 8;
            *(v40 - 6) = 0.0;
            *(v40 - 5) = 0.0;
            *(v40 - 4) = 0.0;
            *(v40 - 3) = 0.0;
            *(v40 - 2) = 0.0;
            *(v40 - 1) = 0.0;
          }
          while ( &v28[8 * (unsigned int)(v45 / 8 - 1) + 8] != v40 );
          v39 = v45;
          v41 = &v28[8 * (v45 / 8 - 1) + 8];
        }
        switch ( v39 % 8 )
        {
          case 1:
            goto LABEL_57;
          case 2:
            goto LABEL_56;
          case 3:
            goto LABEL_55;
          case 4:
            goto LABEL_54;
          case 5:
            goto LABEL_53;
          case 6:
            goto LABEL_52;
          case 7:
            v41[6] = 0.0;
LABEL_52:
            v41[5] = 0.0;
LABEL_53:
            v41[4] = 0.0;
LABEL_54:
            v41[3] = 0.0;
LABEL_55:
            v41[2] = 0.0;
LABEL_56:
            v41[1] = 0.0;
LABEL_57:
            *v41 = 0.0;
            break;
          default:
            break;
        }
      }
      v29 = *((_QWORD *)a2 + 24);
      if ( v29 )
      {
        v30 = **(__int64 (***)(void))v29;
        if ( (char *)v30 == (char *)ClpPackedMatrix::getPackedMatrix )
          v31 = *(CoinPackedMatrix **)(v29 + 88);
        else
          v31 = (CoinPackedMatrix *)v30();
      }
      else
      {
        v31 = nullptr;
      }
      CoinPackedMatrix::times(v31, v18, v28);
      if ( a3 > 0 )
      {
        v32 = a4;
        v33 = 0;
        do
        {
          v34 = *v32;
          v35 = (double *)(v33 + *((_QWORD *)this + 18));
          if ( *v35 > -1.0e20 )
            *v35 = *v35 - v28[(int)v34];
          v36 = (double *)(v33 + *((_QWORD *)this + 19));
          if ( *v36 < 1.0e20 )
            *v36 = *v36 - v28[v34];
          ++v32;
          v33 += 8;
        }
        while ( &a4[a3 - 1 + 1] != v32 );
      }
      operator delete[](v28);
      ClpModel::setObjectiveOffset(this, *((double *)a2 + 5) - v42);
      *((double *)this + 9) = (*((double *)a2 + 9) * *(double *)a2 - *((double *)a2 + 5) + *((double *)this + 5))
                            / *(double *)this;
LABEL_30:
      operator delete[](v18);
      return;
    }
    v19 = a9;
    v20 = 0;
    do
    {
      v21 = &v18[a6[v20]];
      if ( *v21 != 0.0 )
        v19 = 0;
      ++v20;
      *v21 = 1.0;
    }
    while ( a5 > (int)v20 );
    if ( !v19 )
      goto LABEL_30;
LABEL_10:
    v22 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))a2 + 20);
    v23 = 0;
    v24 = *((_QWORD *)a2 + 15);
    if ( !v22 )
      goto LABEL_12;
    goto LABEL_11;
  }
}

