// Alternative name is '_ZN10ClpSimplexC2EPKS_iPKiiS3_bbb'
void __fastcall ClpSimplex::ClpSimplex(
        ClpSimplex *this,
        const ClpSimplex *a2,
        int a3,
        const int *a4,
        int a5,
        const int *a6,
        bool a7,
        bool a8,
        bool a9)
{
  bool v13; // r14
  __int64 v14; // xmm0_8
  ClpEventHandler *v15; // rdi
  ClpFactorization *v16; // r13
  const void *v17; // r13
  double *v18; // rax
  ClpDualRowDantzig *v19; // r13
  const void *v20; // rdi
  double *v21; // rax
  ClpPEPrimalColumnSteepest *v22; // r13
  unsigned __int64 v23; // rdi
  double *v24; // r13
  __int64 v25; // rax
  double *v26; // rdx
  __int64 (__fastcall ***v27)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  double v32; // xmm1_8
  double *v33; // r14
  __int64 v34; // rdi
  __int64 (*v35)(void); // rax
  CoinPackedMatrix *v36; // rdi
  const int *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  double *v40; // rsi
  double *v41; // rsi
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  const int *v44; // rcx
  __int64 v45; // rsi
  int v46; // edi
  double *v47; // rax
  int v48; // esi
  double *v49; // rax
  double *v50; // rax
  int v51; // esi
  double *v52; // rax
  int v53; // [rsp+8h] [rbp-70h]
  double v54; // [rsp+8h] [rbp-70h]
  double v55; // [rsp+10h] [rbp-68h]
  double v56; // [rsp+10h] [rbp-68h]
  int v57; // [rsp+10h] [rbp-68h]
  _BYTE v60[64]; // [rsp+38h] [rbp-40h] BYREF

  v13 = a9;
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
  *((_QWORD *)this + 98) = 0x4202A05F20000000LL;
  *((_QWORD *)this + 106) = 0xBFF0000000000000LL;
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 107) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 95) = 0;
  *((_QWORD *)this + 108) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 103) = 0xFFEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 96) = 0;
  *((_QWORD *)this + 99) = 0;
  *((_QWORD *)this + 100) = 0;
  *((_QWORD *)this + 101) = 0;
  *((_QWORD *)this + 102) = 0;
  *((_QWORD *)this + 104) = 0;
  *((_QWORD *)this + 109) = *((_QWORD *)a2 + 109);
  v14 = *((_QWORD *)a2 + 110);
  *((_QWORD *)this + 111) = 0;
  *((_QWORD *)this + 112) = 0;
  *((_QWORD *)this + 110) = v14;
  *((_QWORD *)this + 113) = 0x4202A05F20000000LL;
  *((_QWORD *)this + 114) = 0;
  *((_QWORD *)this + 115) = 0;
  *((_QWORD *)this + 123) = 0;
  *((_QWORD *)this + 116) = 0x3E45798EE2308C3ALL;
  *((_QWORD *)this + 124) = 0;
  *((_QWORD *)this + 144) = -1;
  *((_QWORD *)this + 145) = -1;
  *((_QWORD *)this + 146) = 0xFFFFFF9CFFFFFFFFLL;
  *((_QWORD *)this + 125) = 0;
  *((_QWORD *)this + 163) = 0x64FFFFFFFFLL;
  *((_QWORD *)this + 126) = 0;
  *((_QWORD *)this + 127) = 0;
  *((_QWORD *)this + 128) = 0;
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
  *((_QWORD *)this + 166) = 0xFFF0BDC1FFF0BDC1LL;
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
  v15 = *((ClpEventHandler **)this + 45);
  *((_OWORD *)this + 109) = 0;
  *((_QWORD *)this + 164) = 0;
  *((_OWORD *)this + 110) = 0;
  ClpEventHandler::setSimplex(v15, this);
  v16 = (ClpFactorization *)operator new(0x50u);
  ClpFactorization::ClpFactorization(v16, *((const ClpFactorization **)a2 + 158), -*((_DWORD *)this + 26));
  *((_QWORD *)this + 158) = v16;
  v17 = *((const void **)a2 + 155);
  if ( !v17 )
    goto LABEL_46;
  v18 = (double *)__dynamic_cast(
                    *((const void **)a2 + 155),
                    (const struct __class_type_info *)&`typeinfo for'ClpDualRowPivot,
                    (const struct __class_type_info *)&`typeinfo for'ClpPEDualRowSteepest,
                    0);
  if ( !v18 )
  {
    if ( __dynamic_cast(
           v17,
           (const struct __class_type_info *)&`typeinfo for'ClpDualRowPivot,
           (const struct __class_type_info *)&`typeinfo for'ClpDualRowDantzig,
           0) )
    {
      v19 = (ClpDualRowDantzig *)operator new(0x18u);
      ClpDualRowDantzig::ClpDualRowDantzig(v19);
      goto LABEL_4;
    }
LABEL_46:
    v19 = (ClpDualRowDantzig *)operator new(0x48u);
    ClpDualRowSteepest::ClpDualRowSteepest(v19, 3);
    goto LABEL_4;
  }
  v55 = v18[10];
  v19 = (ClpDualRowDantzig *)operator new(0x70u);
  ClpPEDualRowSteepest::ClpPEDualRowSteepest(v19, v55, 3);
LABEL_4:
  *((_QWORD *)this + 155) = v19;
  v20 = *((const void **)a2 + 156);
  if ( v20
    && (v21 = (double *)__dynamic_cast(
                          v20,
                          (const struct __class_type_info *)&`typeinfo for'ClpPrimalColumnPivot,
                          (const struct __class_type_info *)&`typeinfo for'ClpPEPrimalColumnSteepest,
                          0)) != nullptr )
  {
    v56 = v21[15];
    v22 = (ClpPEPrimalColumnSteepest *)operator new(0x98u);
    ClpPEPrimalColumnSteepest::ClpPEPrimalColumnSteepest(v22, v56, 3);
  }
  else
  {
    v22 = (ClpPEPrimalColumnSteepest *)operator new(0x70u);
    ClpPrimalColumnSteepest::ClpPrimalColumnSteepest(v22, 3);
  }
  *((_QWORD *)this + 156) = v22;
  *((_DWORD *)this + 78) = 1;
  if ( a9 )
  {
    v23 = *((int *)a2 + 27);
    v57 = *((_DWORD *)a2 + 26);
    v53 = *((_DWORD *)a2 + 27);
    if ( v23 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v24 = (double *)operator new[](8 * v23);
    if ( v53 )
    {
      if ( v53 / 8 <= 0 )
      {
        v49 = v24;
        v48 = v53;
      }
      else
      {
        v47 = v24;
        do
        {
          *v47 = 0.0;
          v47[1] = 0.0;
          v47 += 8;
          *(v47 - 6) = 0.0;
          *(v47 - 5) = 0.0;
          *(v47 - 4) = 0.0;
          *(v47 - 3) = 0.0;
          *(v47 - 2) = 0.0;
          *(v47 - 1) = 0.0;
        }
        while ( &v24[8 * (unsigned int)(v53 / 8 - 1) + 8] != v47 );
        v48 = v53;
        v49 = &v24[8 * (v53 / 8 - 1) + 8];
      }
      switch ( v48 % 8 )
      {
        case 1:
          goto LABEL_59;
        case 2:
          goto LABEL_58;
        case 3:
          goto LABEL_57;
        case 4:
          goto LABEL_56;
        case 5:
          goto LABEL_55;
        case 6:
          goto LABEL_54;
        case 7:
          v49[6] = 0.0;
LABEL_54:
          v49[5] = 0.0;
LABEL_55:
          v49[4] = 0.0;
LABEL_56:
          v49[3] = 0.0;
LABEL_57:
          v49[2] = 0.0;
LABEL_58:
          v49[1] = 0.0;
LABEL_59:
          *v49 = 0.0;
          break;
        default:
          break;
      }
      if ( a5 <= 0 )
        goto LABEL_16;
    }
    else if ( a5 <= 0 )
    {
      v27 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))a2 + 20);
      if ( !v27 )
        goto LABEL_78;
      v29 = *((_QWORD *)a2 + 15);
LABEL_17:
      v28 = (**v27)(v27, 0, 0, v60, 0, 2);
LABEL_18:
      if ( v53 > 0 )
      {
        v30 = 8LL * (unsigned int)(v53 - 1) + 8;
        v31 = 0;
        v54 = 0.0;
        do
        {
          while ( v24[v31 / 8] != 0.0 )
          {
            v24[v31 / 8] = 0.0;
            v31 += 8LL;
            if ( v30 == v31 )
              goto LABEL_23;
          }
          v24[v31 / 8] = *(double *)(v29 + v31);
          v32 = *(double *)(v28 + v31) * *(double *)(v29 + v31);
          v31 += 8LL;
          v54 = v32 + v54;
        }
        while ( v30 != v31 );
        goto LABEL_23;
      }
LABEL_78:
      v54 = 0.0;
LABEL_23:
      if ( (unsigned __int64)v57 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v33 = (double *)operator new[](8LL * v57);
      if ( v57 )
      {
        if ( v57 / 8 <= 0 )
        {
          v52 = v33;
          v51 = v57;
        }
        else
        {
          v50 = v33;
          do
          {
            *v50 = 0.0;
            v50[1] = 0.0;
            v50 += 8;
            *(v50 - 6) = 0.0;
            *(v50 - 5) = 0.0;
            *(v50 - 4) = 0.0;
            *(v50 - 3) = 0.0;
            *(v50 - 2) = 0.0;
            *(v50 - 1) = 0.0;
          }
          while ( v50 != &v33[8 * (unsigned int)(v57 / 8 - 1) + 8] );
          v51 = v57;
          v52 = &v33[8 * (v57 / 8 - 1) + 8];
        }
        switch ( v51 % 8 )
        {
          case 1:
            goto LABEL_73;
          case 2:
            goto LABEL_72;
          case 3:
            goto LABEL_71;
          case 4:
            goto LABEL_70;
          case 5:
            goto LABEL_69;
          case 6:
            goto LABEL_68;
          case 7:
            v52[6] = 0.0;
LABEL_68:
            v52[5] = 0.0;
LABEL_69:
            v52[4] = 0.0;
LABEL_70:
            v52[3] = 0.0;
LABEL_71:
            v52[2] = 0.0;
LABEL_72:
            v52[1] = 0.0;
LABEL_73:
            *v52 = 0.0;
            break;
          default:
            break;
        }
      }
      v34 = *((_QWORD *)a2 + 24);
      if ( v34 )
      {
        v35 = **(__int64 (***)(void))v34;
        if ( (char *)v35 == (char *)ClpPackedMatrix::getPackedMatrix )
          v36 = *(CoinPackedMatrix **)(v34 + 88);
        else
          v36 = (CoinPackedMatrix *)v35();
      }
      else
      {
        v36 = nullptr;
      }
      CoinPackedMatrix::times(v36, v24, v33);
      if ( a3 > 0 )
      {
        v37 = a4;
        v38 = 0;
        do
        {
          v39 = *v37;
          v40 = (double *)(v38 + *((_QWORD *)this + 18));
          if ( *v40 > -1.0e20 )
            *v40 = *v40 - v33[(int)v39];
          v41 = (double *)(v38 + *((_QWORD *)this + 19));
          if ( *v41 < 1.0e20 )
            *v41 = *v41 - v33[v39];
          ++v37;
          v38 += 8;
        }
        while ( &a4[a3 - 1 + 1] != v37 );
      }
      operator delete[](v33);
      ClpModel::setObjectiveOffset(this, *((double *)a2 + 5) - v54);
      *((double *)this + 9) = (*((double *)a2 + 9) * *(double *)a2 - *((double *)a2 + 5) + *((double *)this + 5))
                            / *(double *)this;
LABEL_36:
      operator delete[](v24);
      goto LABEL_37;
    }
    v25 = 0;
    do
    {
      v26 = &v24[a6[v25]];
      if ( *v26 != 0.0 )
        v13 = 0;
      ++v25;
      *v26 = 1.0;
    }
    while ( a5 > (int)v25 );
    if ( !v13 )
      goto LABEL_36;
LABEL_16:
    v27 = *((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))a2 + 20);
    v28 = 0;
    v29 = *((_QWORD *)a2 + 15);
    if ( !v27 )
      goto LABEL_18;
    goto LABEL_17;
  }
LABEL_37:
  if ( *((_DWORD *)a2 + 347) )
  {
    *((_DWORD *)this + 347) = 2 * a5;
    v42 = 2 * a5;
    if ( v42 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v43 = operator new[](8 * v42);
    *((_QWORD *)this + 174) = v43;
    if ( a5 > 0 )
    {
      v44 = a6;
      v45 = 8;
      while ( 1 )
      {
        v46 = *v44++;
        *(_QWORD *)(v43 + v45 - 8) = *(_QWORD *)(*((_QWORD *)a2 + 174) + 16LL * v46);
        *(_QWORD *)(*((_QWORD *)this + 174) + v45) = *(_QWORD *)(*((_QWORD *)a2 + 174) + 16LL * v46 + 8);
        v45 += 16;
        if ( &a6[a5 - 1 + 1] == v44 )
          break;
        v43 = *((_QWORD *)this + 174);
      }
    }
  }
}

