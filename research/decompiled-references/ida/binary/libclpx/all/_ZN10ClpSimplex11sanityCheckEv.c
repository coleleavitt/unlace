__int64 __fastcall ClpSimplex::sanityCheck(ClpSimplex *this)
{
  double v2; // xmm4_8
  double v3; // xmm0_8
  double v4; // xmm10_8
  int v5; // esi
  int v6; // r8d
  int v7; // ecx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // r14d
  int v12; // r13d
  int v13; // ebp
  double v14; // xmm12_8
  double v15; // xmm13_8
  double v16; // xmm9_8
  double v17; // xmm8_8
  int v18; // r11d
  double *v19; // rdx
  double v20; // xmm2_8
  double v21; // xmm3_8
  double v22; // xmm7_8
  int v23; // r11d
  double v24; // xmm2_8
  double v25; // xmm3_8
  _QWORD *v26; // rdi
  __int64 (*v27)(void); // rax
  int v28; // eax
  __int128 v29; // xmm0
  int v30; // eax
  __int64 result; // rax
  __int64 v32; // r8
  __int64 v33; // rdi
  __int64 v34; // rax
  double v35; // xmm7_8
  double v36; // xmm4_8
  double v37; // xmm12_8
  int v38; // r10d
  double *v39; // rsi
  double v40; // xmm2_8
  double v41; // xmm13_8
  double v42; // xmm3_8
  __int64 v43; // rdx
  double v44; // xmm0_8
  double v45; // xmm2_8
  CoinMessageHandler *v46; // rdi
  CoinMessageHandler *v47; // rax
  CoinMessageHandler *v48; // rax
  __int64 v49; // rax
  CoinMessageHandler *v50; // rax
  CoinMessageHandler *v51; // rax
  CoinMessageHandler *v52; // rax
  __int64 v53; // rax
  CoinMessageHandler *v54; // rax
  CoinMessageHandler *v55; // rax
  CoinMessageHandler *v56; // rax
  __int64 v57; // rax
  CoinMessageHandler *v58; // rax
  CoinMessageHandler *v59; // rax
  CoinMessageHandler *v60; // rax
  __int64 v61; // rax
  CoinMessageHandler *v62; // rax
  __int64 v63; // rax
  double v64; // [rsp+10h] [rbp-78h]
  double v65; // [rsp+10h] [rbp-78h]
  int v66[2]; // [rsp+48h] [rbp-40h] BYREF
  double v67[7]; // [rsp+50h] [rbp-38h] BYREF

  if ( !*((_DWORD *)this + 27) )
    goto LABEL_33;
  if ( *((_DWORD *)this + 26) )
  {
    v26 = *((_QWORD **)this + 24);
    v27 = *(__int64 (**)(void))(*v26 + 16LL);
    if ( (char *)v27 == (char *)ClpPackedMatrix::getNumElements )
      v28 = *(_DWORD *)(v26[11] + 72LL);
    else
      v28 = v27();
    if ( v28 || *(int *)(*((_QWORD *)this + 20) + 16LL) > 1 )
      goto LABEL_4;
LABEL_33:
    *((_DWORD *)this + 80) = ClpModel::emptyProblem(this, v66, v67, 0);
    v29 = *(_OWORD *)v67;
    *((_DWORD *)this + 306) = v66[0];
    v30 = v66[1];
    *(_OWORD *)((char *)this + 888) = v29;
    *((_DWORD *)this + 308) = v30;
    return 0;
  }
  if ( *(int *)(*((_QWORD *)this + 20) + 16LL) <= 1 )
    goto LABEL_33;
LABEL_4:
  v2 = *((double *)this + 110);
  v3 = 0.00000002;
  v4 = v2;
  if ( v2 < 0.00000002 )
    v4 = v2 * 1.1;
  v5 = *((_DWORD *)this + 27);
  v6 = *((_DWORD *)this + 26);
  v7 = v5;
  if ( v5 >= v5 + v6 )
  {
    v23 = *((_DWORD *)this + 27);
    v11 = 0;
    v12 = -1;
    v13 = 0;
    v16 = 1.0e100;
    v17 = 0.0;
    goto LABEL_39;
  }
  v8 = *((_QWORD *)this + 126);
  v9 = *((_QWORD *)this + 123);
  v10 = 8LL * v5;
  v11 = 0;
  v3 = 1.0e100;
  v12 = -1;
  v13 = 0;
  v14 = 0.0;
  v15 = 1.0e100;
  v16 = 1.0e100;
  v17 = 0.0;
  while ( 1 )
  {
    v24 = *(double *)(*((_QWORD *)this + 129) + v10);
    v25 = fabs(v24);
    if ( v25 > 1.0e100 )
    {
      v18 = v13 + 1;
      if ( v12 >= 0 )
      {
        v19 = (double *)(v8 + v10);
        v20 = *(double *)(v9 + v10);
        v13 += 2;
        v21 = *(double *)(v8 + v10);
        v22 = v21 - v20;
        if ( -v2 > v21 - v20 )
          goto LABEL_14;
        v13 = v18;
        goto LABEL_11;
      }
      v12 = v7;
      ++v13;
    }
    else if ( v24 != 0.0 )
    {
      v16 = fmin(v25, v16);
      v17 = fmax(v25, v17);
    }
    v19 = (double *)(v8 + v10);
    v20 = *(double *)(v9 + v10);
    v21 = *(double *)(v8 + v10);
    v22 = v21 - v20;
    if ( -v2 > v21 - v20 )
    {
      ++v13;
      if ( v12 < 0 )
        v12 = v7;
      goto LABEL_14;
    }
LABEL_11:
    if ( v4 < v22 )
    {
      v15 = fmin(v22, v15);
    }
    else if ( v22 != 0.0 )
    {
      *v19 = v20;
      v9 = *((_QWORD *)this + 123);
      v8 = *((_QWORD *)this + 126);
      v5 = *((_DWORD *)this + 27);
      v6 = *((_DWORD *)this + 26);
      ++v11;
      v20 = *(double *)(v9 + v10);
      v21 = *(double *)(v8 + v10);
    }
LABEL_14:
    if ( v20 != 0.0 && v20 > -1.0e100 )
    {
      v3 = fmin(fabs(v20), v3);
      v14 = fmax(fabs(v20), v14);
    }
    if ( v21 != 0.0 && v21 < 1.0e100 )
    {
      v3 = fmin(fabs(v21), v3);
      v14 = fmax(fabs(v21), v14);
    }
    ++v7;
    v10 += 8;
    v23 = v5;
    if ( v5 + v6 <= v7 )
      break;
    v2 = *((double *)this + 110);
  }
  if ( v14 != 0.0 )
  {
    v58 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  24,
                                  (ClpSimplex *)((char *)this + 416));
    v59 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v58);
    v60 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v59);
    v3 = v15;
    v61 = CoinMessageHandler::operator<<(v60);
    CoinMessageHandler::operator<<(v61, 0, v15);
    v23 = *((_DWORD *)this + 27);
  }
LABEL_39:
  if ( v23 > 0 )
  {
    v32 = *((_QWORD *)this + 126);
    v33 = *((_QWORD *)this + 123);
    v34 = 0;
    v35 = 1.0e100;
    v36 = 0.0;
    v37 = 1.0e100;
    while ( 1 )
    {
      v43 = 8 * v34;
      v44 = *(double *)(*((_QWORD *)this + 129) + 8 * v34);
      v45 = fabs(v44);
      if ( v45 <= 1.0e100 )
        break;
      v38 = v13 + 1;
      if ( v12 < 0 )
      {
        v12 = v34;
        ++v13;
LABEL_57:
        v39 = (double *)(v32 + v43);
        v3 = *(double *)(v33 + 8 * v34);
        v40 = *(double *)(v32 + 8 * v34);
        v41 = v40 - v3;
        if ( -*((double *)this + 110) <= v40 - v3 )
          goto LABEL_44;
        ++v13;
        if ( v12 < 0 )
          v12 = v34;
        goto LABEL_47;
      }
      v39 = (double *)(v32 + v43);
      v3 = *(double *)(v33 + 8 * v34);
      v13 += 2;
      v40 = *(double *)(v32 + 8 * v34);
      v41 = v40 - v3;
      if ( -*((double *)this + 110) <= v40 - v3 )
      {
        v13 = v38;
LABEL_44:
        if ( v4 < v41 )
        {
          v37 = fmin(v41, v37);
        }
        else if ( v41 != 0.0 )
        {
          *v39 = v3;
          v33 = *((_QWORD *)this + 123);
          v32 = *((_QWORD *)this + 126);
          ++v11;
          v3 = *(double *)(v33 + 8 * v34);
          v40 = *(double *)(v32 + 8 * v34);
        }
      }
LABEL_47:
      if ( v3 != 0.0 && v3 > -1.0e100 )
      {
        v42 = fabs(v3);
        v3 = fmin(v42, v35);
        v35 = v3;
        v36 = fmax(v42, v36);
      }
      if ( v40 != 0.0 && v40 < 1.0e100 )
      {
        v3 = fmax(fabs(v40), v36);
        v35 = fmin(fabs(v40), v35);
        v36 = v3;
      }
      if ( *((_DWORD *)this + 27) <= (int)++v34 )
        goto LABEL_64;
    }
    if ( v44 != 0.0 )
    {
      v16 = fmin(v45, v16);
      v17 = fmax(v45, v17);
    }
    goto LABEL_57;
  }
  v36 = 0.0;
  v37 = 1.0e100;
LABEL_64:
  v46 = *((CoinMessageHandler **)this + 43);
  LOWORD(v67[0]) = 17234;
  if ( v13 )
  {
    v54 = (CoinMessageHandler *)CoinMessageHandler::message(v46, 41, (ClpSimplex *)((char *)this + 416));
    v55 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v54);
    v56 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v55);
    v57 = CoinMessageHandler::operator<<(v56);
    CoinMessageHandler::operator<<(v57, 0, v3);
    *((_QWORD *)this + 40) = 0x600000001LL;
    return 0;
  }
  else
  {
    if ( v11 )
    {
      v65 = v36;
      v62 = (CoinMessageHandler *)CoinMessageHandler::message(v46, 21, (ClpSimplex *)((char *)this + 416));
      v63 = CoinMessageHandler::operator<<(v62);
      CoinMessageHandler::operator<<(v63, 0, v3);
      v46 = *((CoinMessageHandler **)this + 43);
      v36 = v65;
    }
    v64 = v36;
    v47 = (CoinMessageHandler *)CoinMessageHandler::message(v46, 22, (ClpSimplex *)((char *)this + 416));
    v48 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v47);
    v49 = CoinMessageHandler::operator<<(v48);
    CoinMessageHandler::operator<<(v49, 0, v17);
    result = 1;
    if ( v64 != 0.0 )
    {
      v50 = (CoinMessageHandler *)CoinMessageHandler::message(
                                    *((CoinMessageHandler **)this + 43),
                                    23,
                                    (ClpSimplex *)((char *)this + 416));
      v51 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v50);
      v52 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v51);
      v53 = CoinMessageHandler::operator<<(v52);
      CoinMessageHandler::operator<<(v53, 0, v37);
      return 1;
    }
  }
  return result;
}

