__int64 __fastcall ClpPredictorCorrector::checkGoodMove(
        ClpPredictorCorrector *this,
        unsigned __int8 a2,
        double *a3,
        bool a4,
        double a5)
{
  void *v8; // r13
  const void *v9; // rdi
  double v10; // xmm2_8
  double v11; // xmm1_8
  __int64 v12; // r8
  double v13; // xmm1_8
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  int v16; // edi
  _QWORD *v17; // r9
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // r11
  __int64 v22; // xmm0_8
  __int64 v23; // r11
  double v24; // xmm6_8
  unsigned __int8 v25; // al
  int v26; // r15d
  double i; // xmm1_8
  double v28; // xmm0_8
  double v29; // xmm2_8
  double v30; // xmm1_8
  double v31; // xmm1_8
  __int64 v33; // rax
  double v34; // xmm1_8
  double v35; // xmm0_8
  double v36; // xmm2_8
  double v37; // xmm2_8
  double v38; // xmm2_8
  double v39; // xmm0_8
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  CoinMessageHandler *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  CoinMessageHandler *v47; // rax
  CoinMessageHandler *v48; // rax
  __int64 v49; // rax
  double v50; // xmm2_8
  CoinMessageHandler *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  CoinMessageHandler *v56; // rax
  CoinMessageHandler *v57; // rax
  __int64 v58; // rax
  __int64 v59; // [rsp+0h] [rbp-78h]
  double v60; // [rsp+8h] [rbp-70h]
  char v61; // [rsp+27h] [rbp-51h]
  int v62; // [rsp+28h] [rbp-50h]
  int v63; // [rsp+2Ch] [rbp-4Ch]
  int v64; // [rsp+30h] [rbp-48h] BYREF
  int v65; // [rsp+34h] [rbp-44h] BYREF
  double v66[8]; // [rsp+38h] [rbp-40h] BYREF

  v8 = nullptr;
  v62 = *((_DWORD *)this + 26);
  v63 = *((_DWORD *)this + 27);
  ClpPredictorCorrector::complementarityGap(this, &v64, &v65, 2);
  v9 = *((const void **)this + 20);
  v60 = a5;
  if ( v9 )
    v8 = __dynamic_cast(
           v9,
           (const struct __class_type_info *)&`typeinfo for'ClpObjective,
           (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
           0);
  v10 = *((double *)this + 134);
  if ( a5 > *a3 && a5 > 0.9 * v10 && (a2 & (v8 == nullptr)) != 0 && !a4 )
    return 0;
  v11 = fmax(*((double *)this + 127), *((double *)this + 126));
  if ( (1.0 - 0.00002999999999997449 * v11) * v10 <= a5 && a2 )
  {
    v66[0] = *a3;
    v61 = ClpPredictorCorrector::checkGoodMove2(this, v11, v66, a4);
    if ( !v61 )
      goto LABEL_8;
    v60 = v66[0];
  }
  v61 = ClpPredictorCorrector::checkGoodMove2(this, v11, a3, a4);
LABEL_8:
  v13 = *((double *)this + 126);
  if ( fmax(*((double *)this + 127), v13) < 0.000001 || v61 )
    goto LABEL_9;
  v24 = fmin(1.0, fmin(*((double *)this + 127), v13));
  *((double *)this + 126) = v24;
  *((double *)this + 127) = v24;
  v25 = ClpPredictorCorrector::checkGoodMove2(this, v24, a3, a4);
  if ( v25 )
  {
    if ( !a2 )
      goto LABEL_9;
  }
  else
  {
    v26 = 0;
    for ( i = v24; ; *((double *)this + 127) = i )
    {
      ++v26;
      v66[0] = *a3;
      v25 = ClpPredictorCorrector::checkGoodMove2(this, i, v66, a4);
      if ( v25 | (v26 > 3) )
      {
        v60 = v66[0];
        if ( a2 )
          goto LABEL_64;
        goto LABEL_24;
      }
      if ( i < 0.0001 )
        break;
      i = i * 0.5;
      *((double *)this + 126) = i;
    }
    if ( !a2 )
      goto LABEL_25;
    v25 = 0;
  }
LABEL_64:
  v39 = *((double *)this + 126);
  if ( (*((_BYTE *)this + 308) & 1) != 0 )
  {
    if ( v39 >= 0.01 || *((double *)this + 127) >= 0.01 )
      goto LABEL_24;
LABEL_25:
    v28 = *((double *)this + 121);
    if ( *((double *)this + 110) * 10.0 * *((double *)this + 4) <= v28 )
      return 0;
    v29 = *((double *)this + 137);
    if ( v29 <= *((double *)this + 110) * 1.0e-16 )
      return 0;
    goto LABEL_27;
  }
  v50 = *((double *)this + 127);
  if ( v39 < 0.00001 && v50 < 0.00001 || v39 * v50 < 9.999999999999999e-21 )
    goto LABEL_25;
LABEL_24:
  if ( !v25 )
    goto LABEL_25;
LABEL_9:
  v14 = (_QWORD *)*((int *)this + 27);
  v15 = *((_QWORD *)this + 144);
  if ( (_DWORD)v14 )
  {
    if ( (int)v14 / 8 <= 0 )
    {
      v41 = *((_QWORD **)this + 144);
    }
    else
    {
      v40 = *((_QWORD **)this + 144);
      do
      {
        *v40 = 0;
        v40[1] = 0;
        v40 += 8;
        *(v40 - 6) = 0;
        *(v40 - 5) = 0;
        *(v40 - 4) = 0;
        *(v40 - 3) = 0;
        *(v40 - 2) = 0;
        *(v40 - 1) = 0;
      }
      while ( v40 != (_QWORD *)(v15 + (((unsigned int)((int)v14 / 8 - 1) + 1LL) << 6)) );
      v41 = (_QWORD *)(v15 + (((int)v14 / 8 - 1 + 1LL) << 6));
    }
    switch ( (int)v14 % 8 )
    {
      case 1:
        goto LABEL_80;
      case 2:
        goto LABEL_79;
      case 3:
        goto LABEL_78;
      case 4:
        goto LABEL_77;
      case 5:
        goto LABEL_76;
      case 6:
        goto LABEL_75;
      case 7:
        v41[6] = 0;
LABEL_75:
        v41[5] = 0;
LABEL_76:
        v41[4] = 0;
LABEL_77:
        v41[3] = 0;
LABEL_78:
        v41[2] = 0;
LABEL_79:
        v41[1] = 0;
LABEL_80:
        *v41 = 0;
        break;
      default:
        break;
    }
    v14 = (_QWORD *)*((int *)this + 27);
  }
  v16 = *((_DWORD *)this + 26);
  v17 = (_QWORD *)(v15 + 8LL * (_QWORD)v14);
  v18 = *((_QWORD **)this + 146);
  if ( v16 && v17 != v18 )
  {
    if ( v16 >> 3 <= 0 )
    {
      v14 = *((_QWORD **)this + 146);
    }
    else
    {
      v19 = (_QWORD *)(v15 + 8LL * (_QWORD)v14);
      v20 = *((__int64 **)this + 146);
      v21 = (unsigned int)((v16 >> 3) - 1);
      do
      {
        v22 = *v20;
        v19 += 8;
        v20 += 8;
        *(v19 - 8) = v22;
        *(v19 - 7) = *(v20 - 7);
        *(v19 - 6) = *(v20 - 6);
        *(v19 - 5) = *(v20 - 5);
        *(v19 - 4) = *(v20 - 4);
        *(v19 - 3) = *(v20 - 3);
        *(v19 - 2) = *(v20 - 2);
        *(v19 - 1) = *(v20 - 1);
      }
      while ( v19 != &v17[8 * v21 + 8] );
      v23 = ((int)v21 + 1LL) << 6;
      v14 = (_QWORD *)((char *)v18 + v23);
      v17 = (_QWORD *)((char *)v17 + v23);
    }
    switch ( v16 % 8 )
    {
      case 1:
        goto LABEL_44;
      case 2:
        goto LABEL_43;
      case 3:
        goto LABEL_42;
      case 4:
        goto LABEL_41;
      case 5:
        goto LABEL_40;
      case 6:
        goto LABEL_39;
      case 7:
        v17[6] = v14[6];
LABEL_39:
        v17[5] = v14[5];
LABEL_40:
        v17[4] = v14[4];
LABEL_41:
        v17[3] = v14[3];
LABEL_42:
        v17[2] = v14[2];
LABEL_43:
        v17[1] = v14[1];
LABEL_44:
        *v17 = *v14;
        break;
      default:
        break;
    }
  }
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, _QWORD *, __int64, _QWORD *, double))(**((_QWORD **)this + 24)
                                                                                         + 376LL))(
    *((_QWORD *)this + 24),
    v18,
    v15,
    v14,
    v12,
    v17,
    -1.0);
  if ( v63 + v62 <= 0 )
    goto LABEL_68;
  v33 = 0;
  v34 = 0.0;
  do
  {
    if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v33) & 2) == 0 )
    {
      v35 = *(double *)(*((_QWORD *)this + 144) + 8 * v33)
          - *(double *)(*((_QWORD *)this + 147) + 8 * v33)
          + *(double *)(*((_QWORD *)this + 148) + 8 * v33);
      if ( v35 < 0.0 )
        v35 = -v35;
      v34 = fmax(v35, v34);
    }
    ++v33;
  }
  while ( (unsigned int)(v63 + v62 - 1) + 1LL != v33 );
  if ( v34 <= 0.0 )
  {
LABEL_68:
    v38 = 10.0;
  }
  else
  {
    v36 = *((double *)this + 123);
    if ( v36 > 1.0e-12 )
      v37 = v36 * 10.0;
    else
      v37 = 9.999999999999999e-12;
    v38 = v37 / v34;
  }
  if ( *((double *)this + 127) > v38 && !v8 )
  {
    v51 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  72,
                                  (ClpPredictorCorrector *)((char *)this + 416));
    v56 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v51, (__int64)"dual", v52, v53, v54, v55, v59);
    v57 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v56);
    v58 = CoinMessageHandler::operator<<(v57);
    CoinMessageHandler::operator<<(v58, 0, v38);
    *((double *)this + 127) = v38;
  }
  v28 = *((double *)this + 121);
  if ( *((double *)this + 110) * 10.0 * *((double *)this + 4) <= v28 )
    goto LABEL_60;
  v29 = *((double *)this + 137);
  if ( v29 <= *((double *)this + 110) * 1.0e-16 )
    goto LABEL_60;
  v61 = 1;
LABEL_27:
  v30 = 9.999999999999999e-12;
  if ( v28 > 1.0e-12 )
    v30 = v28 * 10.0;
  v31 = v30 / v29;
  if ( *((double *)this + 126) > v31 )
  {
    v42 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  72,
                                  (ClpPredictorCorrector *)((char *)this + 416));
    v47 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v42, (__int64)"primal", v43, v44, v45, v46, v59);
    v48 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v47);
    v49 = CoinMessageHandler::operator<<(v48);
    CoinMessageHandler::operator<<(v49, 0, v31);
    *((double *)this + 126) = v31;
  }
  if ( !v61 )
    return 0;
LABEL_60:
  *a3 = v60;
  return 1;
}

