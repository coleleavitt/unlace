void __fastcall ClpSimplex::checkUnscaledSolution(ClpSimplex *this)
{
  _QWORD *v2; // rdi
  __int64 (__fastcall *v3)(ClpPackedMatrix *); // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rax
  __int64 (*v7)(void); // rdx
  __int64 v8; // r12
  __int64 (*v9)(void); // rdx
  __int64 v10; // rbx
  __int64 (*v11)(void); // rdx
  __int64 v12; // rbp
  __int64 (*v13)(void); // rax
  __int64 v14; // r13
  unsigned __int64 v15; // rdi
  char *v16; // r15
  double v17; // xmm0_8
  int v18; // ecx
  __int64 v19; // rcx
  double v20; // xmm2_8
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rdi
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  double v29; // xmm1_8
  double v30; // xmm1_8
  double v31; // xmm5_8
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // edx
  __int64 v35; // rcx
  __int64 v36; // rax
  double v37; // xmm2_8
  double v38; // xmm1_8
  double v39; // xmm2_8
  double v40; // xmm3_8
  double v41; // xmm3_8
  double v42; // xmm7_8
  double v43; // xmm3_8
  double v44; // xmm2_8
  int v45; // edx
  double v46; // xmm0_8
  CoinMessageHandler *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  CoinMessageHandler *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp-Ch] [rbp-438h]
  int v63; // [rsp+0h] [rbp-42Ch]
  char s[1064]; // [rsp+4h] [rbp-428h] BYREF

  if ( *((_DWORD *)this + 80) == 1 )
  {
    v2 = *((_QWORD **)this + 24);
    v3 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v2 + 16LL);
    if ( v3 == ClpPackedMatrix::getNumElements ? *(_DWORD *)(v2[11] + 72LL) : ((__int64 (*)(void))v3)() )
    {
      v5 = *((_QWORD **)this + 24);
      v6 = (_QWORD *)*v5;
      v7 = *(__int64 (**)(void))(*v5 + 40LL);
      if ( (char *)v7 == (char *)ClpPackedMatrix::getElements )
      {
        v8 = *(_QWORD *)(v5[11] + 32LL);
      }
      else
      {
        v61 = v7();
        v5 = *((_QWORD **)this + 24);
        v8 = v61;
        v6 = (_QWORD *)*v5;
      }
      v9 = (__int64 (*)(void))v6[7];
      if ( (char *)v9 == (char *)ClpPackedMatrix::getVectorStarts )
      {
        v10 = *(_QWORD *)(v5[11] + 48LL);
      }
      else
      {
        v60 = v9();
        v5 = *((_QWORD **)this + 24);
        v10 = v60;
        v6 = (_QWORD *)*v5;
      }
      v11 = (__int64 (*)(void))v6[8];
      if ( (char *)v11 == (char *)ClpPackedMatrix::getVectorLengths )
      {
        v12 = *(_QWORD *)(v5[11] + 56LL);
      }
      else
      {
        v59 = v11();
        v5 = *((_QWORD **)this + 24);
        v12 = v59;
        v6 = (_QWORD *)*v5;
      }
      v13 = (__int64 (*)(void))v6[6];
      if ( (char *)v13 == (char *)ClpPackedMatrix::getIndices )
        v14 = *(_QWORD *)(v5[11] + 40LL);
      else
        v14 = v13();
      memset(*((void **)this + 14), 0, 8LL * *((int *)this + 26));
      v15 = (int)&stru_186A0 + *((_DWORD *)this + 26);
      if ( v15 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v16 = (char *)operator new[](8 * v15);
      v63 = *((_DWORD *)this + 26);
      memset(v16, 0, 8LL * v63);
      v17 = 0.0;
      v18 = v63;
      if ( *((int *)this + 27) > 0 )
      {
        v19 = 0;
        v17 = 0.0;
        do
        {
          while ( 1 )
          {
            v20 = fmin(
                    fmax(*(double *)(*((_QWORD *)this + 15) + 8 * v19), *(double *)(*((_QWORD *)this + 22) + 8 * v19)),
                    *(double *)(*((_QWORD *)this + 23) + 8 * v19));
            if ( v20 != 0.0 )
            {
              v21 = *(int *)(v10 + 4 * v19);
              v22 = *(_DWORD *)(v12 + 4 * v19);
              if ( (int)v21 < (int)v21 + v22 )
                break;
            }
            if ( *((_DWORD *)this + 27) <= (int)++v19 )
              goto LABEL_22;
          }
          v23 = (unsigned int)(v22 - 1);
          v24 = v8 + 8 * v21;
          v25 = v14 + 4 * v21;
          v26 = 0;
          v27 = v23 + 1;
          do
          {
            v28 = *(int *)(v25 + 4 * v26);
            v29 = *(double *)(v24 + 8 * v26++);
            v30 = v29 * v20;
            v28 *= 8;
            *(double *)(v28 + *((_QWORD *)this + 14)) = *(double *)(v28 + *((_QWORD *)this + 14)) + v30;
            *(double *)&v16[v28] = fabs(v30) + *(double *)&v16[v28];
          }
          while ( v27 != v26 );
          ++v19;
        }
        while ( *((_DWORD *)this + 27) > (int)v19 );
LABEL_22:
        v18 = *((_DWORD *)this + 26);
      }
      *((_QWORD *)this + 112) = 0;
      *((_DWORD *)this + 308) = 0;
      v31 = *((double *)this + 110);
      if ( v18 <= 0 )
        goto LABEL_39;
      v32 = *((_QWORD *)this + 14);
      v33 = *((_QWORD *)this + 19);
      v34 = 0;
      v35 = 8LL * (unsigned int)(v18 - 1) + 8;
      v36 = 0;
      do
      {
        v38 = *(double *)(v32 + v36);
        v39 = fmax(fmax(v31, *(double *)&v16[v36] * 1.0e-12), fabs(v38) * 1.0e-12);
        v40 = *(double *)(v33 + v36);
        if ( v38 > v40 )
        {
          v37 = v39 + v40;
          ++v34;
          v17 = v17 + v38 - v40;
          if ( v38 > v37 )
          {
            ++*((_DWORD *)this + 308);
            *((double *)this + 112) = v38 - v37 + *((double *)this + 112);
          }
        }
        else
        {
          v41 = *(double *)(*((_QWORD *)this + 18) + v36);
          if ( v41 > v38 )
          {
            ++v34;
            v42 = v38 - v41;
            v43 = v41 - v39;
            v17 = v17 - v42;
            if ( v43 > v38 )
            {
              v44 = *((double *)this + 112);
              ++*((_DWORD *)this + 308);
              *((double *)this + 112) = v44 - (v38 - v43);
            }
          }
        }
        v36 += 8;
      }
      while ( v35 != v36 );
      if ( !v34 )
      {
LABEL_39:
        sprintf(s, "%d unscaled row infeasibilities - summing to %g", 0, v17);
        v53 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 43),
                                      92,
                                      (ClpSimplex *)((char *)this + 416));
        v58 = CoinMessageHandler::operator<<(v53, (__int64)s, v54, v55, v56, v57, v62);
        CoinMessageHandler::operator<<(v58, 0, v17);
      }
      v45 = *((_DWORD *)this + 308);
      if ( v45 )
      {
        v46 = *((double *)this + 112);
        sprintf(s, "%d relaxed row infeasibilities - summing to %g", v45, v46);
        v47 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)this + 43),
                                      92,
                                      (ClpSimplex *)((char *)this + 416));
        v52 = CoinMessageHandler::operator<<(v47, (__int64)s, v48, v49, v50, v51, v62);
        CoinMessageHandler::operator<<(v52, 0, v46);
      }
      else if ( !*((_DWORD *)this + 306) )
      {
        *((_DWORD *)this + 80) = 0;
      }
      operator delete[](v16);
    }
  }
}

