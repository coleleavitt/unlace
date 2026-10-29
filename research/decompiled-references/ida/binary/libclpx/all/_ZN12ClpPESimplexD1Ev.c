// Alternative name is '_ZN12ClpPESimplexD2Ev'
void __fastcall ClpPESimplex::~ClpPESimplex(ClpPESimplex *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  __int64 v11; // rax
  double v12; // xmm0_8
  CoinMessageHandler *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  double v19; // xmm0_8
  int v20; // r12d
  double v21; // xmm0_8
  int v22; // eax
  double v23; // xmm0_8
  CoinMessageHandler *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  double v30; // xmm0_8
  CoinMessageHandler *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  CoinMessageHandler *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  double v43; // xmm2_8
  double v44; // xmm0_8
  CoinMessageHandler *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  double v51; // xmm0_8
  CoinMessageHandler *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rax
  double v58; // xmm2_8
  __int64 v59[29]; // [rsp+0h] [rbp-E8h] BYREF

  v2 = *((void **)this + 1);
  if ( v2 )
    free(v2);
  v3 = *((void **)this + 2);
  if ( v3 )
    free(v3);
  v4 = *((void **)this + 4);
  if ( v4 )
    free(v4);
  v5 = *((void **)this + 5);
  if ( v5 )
    free(v5);
  v6 = *((void **)this + 8);
  if ( v6 )
    free(v6);
  v7 = *((void **)this + 7);
  if ( v7 )
    free(v7);
  v8 = *((void **)this + 11);
  if ( v8 )
    free(v8);
  v9 = *((void **)this + 10);
  if ( v9 )
    free(v9);
  v10 = *((void **)this + 16);
  if ( v10 )
    free(v10);
  if ( *((_DWORD *)this + 44) )
  {
    v11 = *((_QWORD *)this + 12);
    if ( v11 )
    {
      if ( *(_DWORD *)(v11 + 308) )
      {
        v12 = *((double *)this + 25);
        sprintf((char *)v59, "Degenerate pivots   : %d, compatibility time %.2f", *((_DWORD *)this + 39), v12);
        v13 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *(CoinMessageHandler **)(*((_QWORD *)this + 12) + 344LL),
                                      92,
                                      (const CoinMessages *)(*((_QWORD *)this + 12) + 416LL));
        v18 = CoinMessageHandler::operator<<(v13, (__int64)v59, v14, v15, v16, v17, v59[0]);
        CoinMessageHandler::operator<<(v18, 0, v12);
        v19 = (double)*((int *)this + 35);
        v20 = *(_DWORD *)(*((_QWORD *)this + 12) + 308LL);
        if ( v19 == 0.0 )
        {
          v21 = (double)*((int *)this + 34);
          if ( v21 == 0.0 )
          {
LABEL_25:
            v22 = *((_DWORD *)this + 40);
            if ( v20 != v22 )
            {
              v23 = (double)(*((_DWORD *)this + 39) - *((_DWORD *)this + 41)) / (double)(v20 - v22);
              sprintf(
                (char *)v59,
                "(coDegeneratePivots()-coDegenerateCompatiblePivots())/( (numberPivots-coCompatiblePivots()) %g",
                v23);
              v24 = (CoinMessageHandler *)CoinMessageHandler::message(
                                            *(CoinMessageHandler **)(*((_QWORD *)this + 12) + 344LL),
                                            92,
                                            (const CoinMessages *)(*((_QWORD *)this + 12) + 416LL));
              v29 = CoinMessageHandler::operator<<(v24, (__int64)v59, v25, v26, v27, v28, v59[0]);
              CoinMessageHandler::operator<<(v29, 0, v23);
              v22 = *((_DWORD *)this + 40);
            }
            if ( v22 )
            {
              v51 = (double)*((int *)this + 41) / (double)v22;
              sprintf((char *)v59, "coDegenerateCompatiblePivots()/coCompatiblePivots() %g", v51);
              v52 = (CoinMessageHandler *)CoinMessageHandler::message(
                                            *(CoinMessageHandler **)(*((_QWORD *)this + 12) + 344LL),
                                            92,
                                            (const CoinMessages *)(*((_QWORD *)this + 12) + 416LL));
              v57 = CoinMessageHandler::operator<<(v52, (__int64)v59, v53, v54, v55, v56, v59[0]);
              CoinMessageHandler::operator<<(v57, 0, v51);
            }
            v30 = (double)*((int *)this + 39) / (double)v20;
            sprintf((char *)v59, "coDegeneratePivots()/ numberPivots %g", v30);
            v31 = (CoinMessageHandler *)CoinMessageHandler::message(
                                          *(CoinMessageHandler **)(*((_QWORD *)this + 12) + 344LL),
                                          92,
                                          (const CoinMessages *)(*((_QWORD *)this + 12) + 416LL));
            v36 = CoinMessageHandler::operator<<(v31, (__int64)v59, v32, v33, v34, v35, v59[0]);
            CoinMessageHandler::operator<<(v36, 0, v30);
            sprintf(
              (char *)v59,
              "coCompatiblePivots() %d coPriorityPivots() %d",
              *((_DWORD *)this + 40),
              *((_DWORD *)this + 43));
            v37 = (CoinMessageHandler *)CoinMessageHandler::message(
                                          *(CoinMessageHandler **)(*((_QWORD *)this + 12) + 344LL),
                                          92,
                                          (const CoinMessages *)(*((_QWORD *)this + 12) + 416LL));
            v42 = CoinMessageHandler::operator<<(v37, (__int64)v59, v38, v39, v40, v41, v59[0]);
            CoinMessageHandler::operator<<(v42, 0, v30);
            return;
          }
          v58 = (double)*((int *)this + 31);
          v44 = v21 / v58;
          sprintf((char *)v59, "coDegenAvg/columns %g coCompatAvg/columns %g", v44, (double)*((int *)this + 36) / v58);
        }
        else
        {
          v43 = (double)*((int *)this + 30);
          v44 = v19 / v43;
          sprintf((char *)v59, "coDegenAvg/rows %g coCompatAvg/rows %g", v44, (double)*((int *)this + 37) / v43);
        }
        v45 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *(CoinMessageHandler **)(*((_QWORD *)this + 12) + 344LL),
                                      92,
                                      (const CoinMessages *)(*((_QWORD *)this + 12) + 416LL));
        v50 = CoinMessageHandler::operator<<(v45, (__int64)v59, v46, v47, v48, v49, v59[0]);
        CoinMessageHandler::operator<<(v50, 0, v44);
        goto LABEL_25;
      }
    }
  }
}

