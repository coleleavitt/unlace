__int64 __fastcall ClpInterior::sanityCheck(ClpInterior *this, double a2)
{
  int v3; // ebp
  __int64 result; // rax
  _QWORD *v5; // rdi
  __int64 (__fastcall *v6)(ClpPackedMatrix *); // rax
  int v7; // eax
  int v8; // ecx
  int v9; // edi
  const CoinMessages *v10; // r12
  double v11; // xmm4_8
  int v12; // r15d
  double v13; // xmm9_8
  __int64 v14; // r10
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // r8
  int v18; // r14d
  int v19; // r13d
  double v20; // xmm11_8
  double v21; // xmm12_8
  double v22; // xmm8_8
  double v23; // xmm7_8
  int v24; // r11d
  double v25; // xmm3_8
  double v26; // xmm2_8
  double v27; // xmm13_8
  double v28; // xmm2_8
  __int64 v29; // r8
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rsi
  double v33; // xmm12_8
  double v34; // xmm11_8
  double v35; // xmm13_8
  int v36; // r9d
  double v37; // xmm2_8
  double v38; // xmm3_8
  double v39; // xmm0_8
  CoinMessageHandler *v40; // rdi
  CoinMessageHandler *v41; // rax
  CoinMessageHandler *v42; // rax
  __int64 v43; // rax
  CoinMessageHandler *v44; // rax
  CoinMessageHandler *v45; // rax
  CoinMessageHandler *v46; // rax
  __int64 v47; // rax
  double v48; // xmm4_8
  CoinMessageHandler *v49; // rax
  CoinMessageHandler *v50; // rax
  CoinMessageHandler *v51; // rax
  __int64 v52; // rax
  CoinMessageHandler *v53; // rax
  CoinMessageHandler *v54; // rax
  CoinMessageHandler *v55; // rax
  __int64 v56; // rax
  CoinMessageHandler *v57; // rax
  __int64 v58; // rax

  if ( !*((_DWORD *)this + 27) )
    goto LABEL_4;
  v3 = *((_DWORD *)this + 26);
  if ( !v3 )
  {
    if ( *(int *)(*((_QWORD *)this + 20) + 16LL) > 1 )
    {
      v12 = *((_DWORD *)this + 27);
      v10 = (ClpInterior *)((char *)this + 416);
      v13 = 1.1 * *((double *)this + 4);
      v18 = 0;
      v19 = -1;
      v22 = 1.0e100;
      v23 = 0.0;
      goto LABEL_42;
    }
    goto LABEL_4;
  }
  v5 = *((_QWORD **)this + 24);
  v6 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v5 + 16LL);
  v7 = v6 == ClpPackedMatrix::getNumElements ? *(_DWORD *)(v5[11] + 72LL) : ((__int64 (*)(void))v6)();
  if ( !v7 && *(int *)(*((_QWORD *)this + 20) + 16LL) <= 1 )
  {
LABEL_4:
    *((_DWORD *)this + 80) = ClpModel::emptyProblem(this, nullptr, nullptr, 1);
    return 0;
  }
  v8 = *((_DWORD *)this + 27);
  v9 = *((_DWORD *)this + 26);
  v10 = (ClpInterior *)((char *)this + 416);
  v11 = *((double *)this + 4);
  v12 = v8;
  v13 = 1.1 * v11;
  if ( v8 >= v8 + v9 )
  {
    v18 = 0;
    v19 = -1;
    v22 = 1.0e100;
    v3 = 0;
    v23 = 0.0;
    goto LABEL_42;
  }
  v14 = *((_QWORD *)this + 100);
  v15 = v8;
  v16 = *((_QWORD *)this + 97);
  v17 = *((_QWORD *)this + 94);
  v18 = 0;
  a2 = 1.0e100;
  v19 = -1;
  v3 = 0;
  v20 = 0.0;
  v21 = 1.0e100;
  v22 = 1.0e100;
  v23 = 0.0;
  while ( 1 )
  {
    v28 = *(double *)(v14 + 8 * v15);
    if ( v28 < 0.0 )
      v28 = -v28;
    if ( v28 > 1.0e50 )
    {
      v24 = v3 + 1;
      if ( v19 >= 0 )
      {
        v25 = *(double *)(v16 + 8 * v15);
        v3 += 2;
        v26 = *(double *)(v17 + 8 * v15);
        v27 = v25 - v26;
        if ( -v11 > v25 - v26 )
          goto LABEL_17;
        v3 = v24;
        goto LABEL_14;
      }
      v19 = v15;
      ++v3;
    }
    else if ( v28 != 0.0 )
    {
      v22 = fmin(v28, v22);
      v23 = fmax(v28, v23);
    }
    v25 = *(double *)(v16 + 8 * v15);
    v26 = *(double *)(v17 + 8 * v15);
    v27 = v25 - v26;
    if ( -v11 > v25 - v26 )
    {
      ++v3;
      if ( v19 < 0 )
        v19 = v15;
      goto LABEL_17;
    }
LABEL_14:
    if ( v13 < v27 )
    {
      v21 = fmin(v27, v21);
    }
    else if ( v27 != 0.0 )
    {
      *(double *)(v16 + 8 * v15) = v26;
      v9 = *((_DWORD *)this + 26);
      v8 = *((_DWORD *)this + 27);
      v25 = v26;
      ++v18;
      v26 = *(double *)(v17 + 8 * v15);
    }
LABEL_17:
    if ( v26 != 0.0 && v26 > -1.0e100 )
    {
      if ( v26 < 0.0 )
        v26 = -v26;
      a2 = fmin(v26, a2);
      v20 = fmax(v26, v20);
    }
    if ( v25 != 0.0 && v25 < 1.0e100 )
    {
      if ( v25 < 0.0 )
        v25 = -v25;
      a2 = fmin(v25, a2);
      v20 = fmax(v25, v20);
    }
    ++v15;
    v12 = v8;
    if ( v8 + v9 <= (int)v15 )
      break;
    v11 = *((double *)this + 4);
  }
  if ( v20 != 0.0 )
  {
    v53 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  24,
                                  (ClpInterior *)((char *)this + 416));
    v54 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v53);
    v55 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v54);
    a2 = v21;
    v56 = CoinMessageHandler::operator<<(v55);
    CoinMessageHandler::operator<<(v56, 0, v21);
    v12 = *((_DWORD *)this + 27);
  }
LABEL_42:
  if ( v12 > 0 )
  {
    v29 = *((_QWORD *)this + 100);
    v30 = *((_QWORD *)this + 97);
    v31 = 0;
    v32 = *((_QWORD *)this + 94);
    v33 = 1.0e100;
    v34 = 0.0;
    v35 = 1.0e100;
    while ( 1 )
    {
      v39 = *(double *)(v29 + 8 * v31);
      if ( v39 < 0.0 )
        v39 = -v39;
      if ( v39 > 1.0e50 )
      {
        v36 = v3 + 1;
        if ( v19 < 0 )
        {
          v37 = *(double *)(v30 + 8 * v31);
          a2 = *(double *)(v32 + 8 * v31);
          v38 = v37 - a2;
          if ( -*((double *)this + 4) <= v37 - a2 )
          {
            v19 = v31;
LABEL_46:
            v3 = v36;
LABEL_47:
            if ( v13 < v38 )
            {
              v35 = fmin(v38, v35);
            }
            else if ( v38 != 0.0 )
            {
              *(double *)(v30 + 8 * v31) = a2;
              v37 = a2;
              ++v18;
              a2 = *(double *)(v32 + 8 * v31);
            }
            goto LABEL_50;
          }
          v3 += 2;
          v19 = v31;
        }
        else
        {
          v37 = *(double *)(v30 + 8 * v31);
          v3 += 2;
          a2 = *(double *)(v32 + 8 * v31);
          v38 = v37 - a2;
          if ( -*((double *)this + 4) <= v37 - a2 )
            goto LABEL_46;
        }
      }
      else
      {
        if ( v39 != 0.0 )
        {
          v22 = fmin(v39, v22);
          v23 = fmax(v39, v23);
        }
        v37 = *(double *)(v30 + 8 * v31);
        a2 = *(double *)(v32 + 8 * v31);
        v38 = v37 - a2;
        if ( -*((double *)this + 4) <= v37 - a2 )
          goto LABEL_47;
        ++v3;
        if ( v19 < 0 )
          v19 = v31;
      }
LABEL_50:
      if ( a2 != 0.0 && a2 > -1.0e100 )
      {
        if ( a2 < 0.0 )
          a2 = -a2;
        v48 = a2;
        a2 = fmin(a2, v33);
        v33 = a2;
        v34 = fmax(v48, v34);
      }
      if ( v37 == 0.0 || v37 >= 1.0e100 )
      {
        if ( *((_DWORD *)this + 27) <= (int)++v31 )
          goto LABEL_67;
      }
      else
      {
        if ( v37 < 0.0 )
          v37 = -v37;
        ++v31;
        v33 = fmin(v37, v33);
        v34 = fmax(v37, v34);
        if ( *((_DWORD *)this + 27) <= (int)v31 )
          goto LABEL_67;
      }
    }
  }
  v34 = 0.0;
  v35 = 1.0e100;
LABEL_67:
  v40 = *((CoinMessageHandler **)this + 43);
  if ( v3 )
  {
    v49 = (CoinMessageHandler *)CoinMessageHandler::message(v40, 41, v10);
    v50 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v49);
    v51 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v50);
    v52 = CoinMessageHandler::operator<<(v51);
    CoinMessageHandler::operator<<(v52, 0, a2);
    *((_DWORD *)this + 80) = 4;
    return 0;
  }
  else
  {
    if ( v18 )
    {
      v57 = (CoinMessageHandler *)CoinMessageHandler::message(v40, 21, v10);
      v58 = CoinMessageHandler::operator<<(v57);
      CoinMessageHandler::operator<<(v58, 0, a2);
      v40 = *((CoinMessageHandler **)this + 43);
    }
    v41 = (CoinMessageHandler *)CoinMessageHandler::message(v40, 22, v10);
    v42 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v41);
    v43 = CoinMessageHandler::operator<<(v42);
    CoinMessageHandler::operator<<(v43, 0, v23);
    result = 1;
    if ( v34 != 0.0 )
    {
      v44 = (CoinMessageHandler *)CoinMessageHandler::message(*((CoinMessageHandler **)this + 43), 23, v10);
      v45 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v44);
      v46 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v45);
      v47 = CoinMessageHandler::operator<<(v46);
      CoinMessageHandler::operator<<(v47, 0, v35);
      return 1;
    }
  }
  return result;
}

