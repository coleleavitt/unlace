__int64 __fastcall ClpPEDualRowSteepest::pivotRow(ClpPEDualRowSteepest *this)
{
  __int64 v2; // rax
  double v3; // xmm0_8
  double v4; // xmm1_8
  bool v5; // r12
  __int64 v6; // rbx
  char v7; // dl
  double v8; // xmm5_8
  int v9; // eax
  int v10; // eax
  struct rusage *p_usage; // rsi
  int **v12; // rdi
  double v13; // xmm3_8
  __int64 ru_msgsnd; // r11
  int tv_sec; // r14d
  int *v16; // r12
  int *v17; // r15
  __int64 v18; // r13
  double v19; // xmm0_8
  double v20; // xmm0_8
  double v21; // xmm2_8
  int v22; // eax
  int v23; // ebx
  __int64 ru_msgrcv; // rdx
  __int64 v25; // rax
  int v26; // eax
  int ru_msgsnd_word_high; // ecx
  double v28; // xmm6_8
  double v29; // xmm2_8
  double v30; // xmm2_8
  __int64 v31; // rbx
  __int64 v32; // rax
  double *v33; // rdx
  double v34; // xmm7_8
  double v35; // xmm0_8
  double v36; // xmm2_8
  double v37; // xmm2_8
  double v38; // xmm0_8
  int v39; // edx
  int v40; // ecx
  double v41; // xmm0_8
  __int64 v42; // r8
  int v43; // eax
  double v44; // xmm2_8
  double v45; // xmm2_8
  double v46; // xmm8_8
  double v47; // xmm4_8
  __int64 i; // r9
  int v49; // edx
  int v50; // ecx
  int *v51; // rax
  unsigned __int64 v52; // rdi
  __int64 v53; // rdx
  double v54; // xmm1_8
  double v55; // xmm2_8
  double v56; // xmm0_8
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // xmm0_8
  __int64 v61; // r8
  int *v62; // rax
  int v63; // esi
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  double *v67; // rdx
  int v69; // edx
  bool v70; // al
  ClpModel *v71; // rbx
  _DWORD *v72; // rdi
  __int64 (*v73)(void); // rax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  CoinMessageHandler *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // [rsp+0h] [rbp-118h]
  double v84; // [rsp+8h] [rbp-110h]
  int v85; // [rsp+8h] [rbp-110h]
  double v86; // [rsp+8h] [rbp-110h]
  double v87; // [rsp+8h] [rbp-110h]
  double v88; // [rsp+8h] [rbp-110h]
  double v89; // [rsp+8h] [rbp-110h]
  __int64 v90; // [rsp+10h] [rbp-108h]
  __int64 v91; // [rsp+10h] [rbp-108h]
  double v92; // [rsp+18h] [rbp-100h]
  __int64 v93; // [rsp+18h] [rbp-100h]
  __int64 v94; // [rsp+18h] [rbp-100h]
  double v95; // [rsp+20h] [rbp-F8h]
  bool v96; // [rsp+28h] [rbp-F0h]
  int v97; // [rsp+38h] [rbp-E0h]
  char v98; // [rsp+3Fh] [rbp-D9h]
  int v99; // [rsp+40h] [rbp-D8h]
  _DWORD v100[3]; // [rsp+44h] [rbp-D4h]
  struct rusage usage; // [rsp+50h] [rbp-C8h] BYREF

  v2 = *((_QWORD *)this + 1);
  v3 = *(double *)(v2 + 24);
  v4 = *(double *)(v2 + 832);
  if ( *(int *)(v2 + 1156) <= 0 )
  {
    v3 = -v3;
    v5 = v4 > v3;
  }
  else
  {
    v5 = v3 > v4;
  }
  v6 = *((_QWORD *)this + 9);
  v7 = *(_BYTE *)(v6 + 192);
  if ( v5 )
  {
    ++*(_DWORD *)(v6 + 156);
    ++*(_DWORD *)(v6 + 168);
    if ( v7 )
    {
      ++*(_DWORD *)(v6 + 164);
      v39 = *((_DWORD *)this + 26) + 1;
      v40 = *((_DWORD *)this + 25) + 1;
      *((_DWORD *)this + 26) = v39;
      *((_DWORD *)this + 25) = v40;
      if ( v39 > 9 && *(_DWORD *)(v2 + 308) * 5 * v40 > *(_DWORD *)(v6 + 156) * v39 )
        *((_BYTE *)this + 96) = 1;
    }
LABEL_5:
    if ( !*(_DWORD *)(v6 + 176) )
      goto LABEL_6;
    goto LABEL_29;
  }
  *(_DWORD *)(v6 + 168) = 0;
  if ( !v7 )
    goto LABEL_5;
  ++*((_DWORD *)this + 26);
  if ( !*(_DWORD *)(v6 + 176) )
    goto LABEL_6;
LABEL_29:
  getrusage(RUSAGE_SELF, &usage);
  *(double *)(v6 + 224) = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  v31 = *((_QWORD *)this + 9);
  if ( *((double *)this + 10) >= 1.0 && *((int *)this + 22) > 99 )
  {
    ClpPESimplex::updateDualDegenerates(*((ClpPESimplex **)this + 9));
    ClpPESimplex::updateDualDegeneratesAvg(*((ClpPESimplex **)this + 9), 100);
    v71 = *((ClpModel **)this + 1);
    v86 = *(double *)(*((_QWORD *)this + 9) + 200LL) + 36000.0;
    getrusage(RUSAGE_SELF, &usage);
    ClpModel::setMaximumSeconds(
      v71,
      v86 - ((double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec)));
    *((_DWORD *)this + 22) = 0;
    v31 = *((_QWORD *)this + 9);
  }
  getrusage(RUSAGE_SELF, &usage);
  v3 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
     + (double)SLODWORD(usage.ru_utime.tv_sec)
     - *(double *)(v31 + 224)
     + *(double *)(v31 + 200);
  *(double *)(v31 + 200) = v3;
  v6 = *((_QWORD *)this + 9);
  if ( *(_DWORD *)(v6 + 176) )
  {
    getrusage(RUSAGE_SELF, &usage);
    v3 = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
    *(double *)(v6 + 224) = v3;
    v6 = *((_QWORD *)this + 9);
  }
LABEL_6:
  v8 = *((double *)this + 10);
  v9 = *((_DWORD *)this + 22);
  if ( v8 < 1.0 && (v69 = *((_DWORD *)this + 23), v69 <= v9) && (*((_BYTE *)this + 96) || v9 > 999) )
  {
    if ( v5 )
    {
      v87 = *((double *)this + 10);
      ClpPESimplex::updateDualDegenerates((ClpPESimplex *)v6);
      ClpPESimplex::identifyCompatibleRows(
        *((ClpPESimplex **)this + 9),
        *(CoinIndexedVector **)(*((_QWORD *)this + 1) + 1072LL),
        *(CoinIndexedVector **)(*((_QWORD *)this + 1) + 1064LL));
      v6 = *((_QWORD *)this + 9);
      v8 = v87;
      if ( *(int *)(v6 + 176) > 3 )
      {
        sprintf(
          (char *)&usage,
          "updating - iCurrent,iInterval %d,%d degenerate pivots %d ? %d codegen since last %d",
          *((_DWORD *)this + 22),
          *((_DWORD *)this + 23),
          *(_DWORD *)(v6 + 156),
          *(_DWORD *)(v6 + 24),
          *((_DWORD *)this + 25));
        v77 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *(CoinMessageHandler **)(*((_QWORD *)this + 1) + 344LL),
                                      92,
                                      (const CoinMessages *)(*((_QWORD *)this + 1) + 416LL));
        v82 = CoinMessageHandler::operator<<(v77, (__int64)&usage, v78, v79, v80, v81, v83);
        CoinMessageHandler::operator<<(v82, 0, v3);
        ClpPESimplex::updateDualDegeneratesAvg(*((ClpPESimplex **)this + 9), *((_DWORD *)this + 22));
        ClpPESimplex::updateCompatibleRowsAvg(*((ClpPESimplex **)this + 9), *((_DWORD *)this + 22));
        v6 = *((_QWORD *)this + 9);
        v8 = v87;
      }
      v74 = *((_DWORD *)this + 23);
      if ( *((_DWORD *)this + 22) == v74 )
      {
        v76 = v74 - 50;
        if ( v76 <= 49 )
          v76 = 50;
        *((_DWORD *)this + 23) = v76;
      }
      else
      {
        v75 = v74 + 50;
        if ( v75 >= 300 )
          v75 = 300;
        *((_DWORD *)this + 23) = v75;
      }
      *((_BYTE *)this + 96) = 0;
      *(_QWORD *)((char *)this + 100) = 0;
      v10 = 1;
    }
    else
    {
      v10 = v9 + 1;
      *((_DWORD *)this + 23) = v69 + 1;
    }
  }
  else
  {
    v10 = v9 + 1;
    if ( *(int *)(v6 + 168) > 9 )
    {
      *((_DWORD *)this + 22) = v10;
      v8 = v8 * 0.25;
      if ( !*(_DWORD *)(v6 + 176) )
        goto LABEL_9;
      goto LABEL_35;
    }
  }
  *((_DWORD *)this + 22) = v10;
  if ( !*(_DWORD *)(v6 + 176) )
    goto LABEL_9;
LABEL_35:
  v84 = v8;
  getrusage(RUSAGE_SELF, &usage);
  v8 = v84;
  *(double *)(v6 + 200) = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
                        + (double)SLODWORD(usage.ru_utime.tv_sec)
                        - *(double *)(v6 + 224)
                        + *(double *)(v6 + 200);
LABEL_9:
  p_usage = *((struct rusage **)this + 1);
  v12 = *((int ***)this + 5);
  v13 = 1000000.0;
  ru_msgsnd = p_usage[8].ru_msgsnd;
  tv_sec = p_usage[8].ru_stime.tv_sec;
  v16 = v12[1];
  v17 = *v12;
  v18 = *((int *)v12 + 4);
  v19 = fmin(0.01, *(double *)&p_usage[5].ru_ixrss) + *(double *)&p_usage[6].ru_stime.tv_sec;
  if ( v19 <= 1000.0 )
    v13 = v19 * v19;
  if ( tv_sec >= 0 && SLODWORD(p_usage->ru_msgsnd) > tv_sec )
  {
    v32 = *(int *)(ru_msgsnd + 4LL * tv_sec);
    v33 = (double *)&v16[2 * tv_sec];
    v34 = *v33;
    v35 = *(double *)(p_usage[8].ru_idrss + 8 * v32);
    if ( v35 > *(double *)(p_usage[7].ru_utime.tv_sec + 8 * v32) + v13 )
    {
      v36 = *(double *)(p_usage[7].ru_utime.tv_sec + 8 * v32);
      v38 = (v35 - v36) * (v35 - v36);
      if ( v34 == 0.0 )
      {
        if ( v38 <= 0.0 )
          v70 = v38 <= -1.0e-50;
        else
          v70 = v38 >= 1.0e-50;
        if ( v70 )
        {
          *((_DWORD *)v12 + 4) = v18 + 1;
          v17[v18] = tv_sec;
          *v33 = v38;
          LODWORD(v18) = *((_DWORD *)v12 + 4);
        }
        goto LABEL_13;
      }
    }
    else
    {
      if ( *(double *)(p_usage[6].ru_nsignals + 8 * v32) - v13 <= v35 )
      {
        if ( v34 != 0.0 )
          *v33 = 1.0e-100;
        goto LABEL_13;
      }
      v37 = *(double *)(p_usage[6].ru_nsignals + 8 * v32);
      v38 = (v35 - v37) * (v35 - v37);
      if ( v34 == 0.0 )
      {
        v93 = p_usage[8].ru_msgsnd;
        v88 = v8;
        CoinIndexedVector::add((CoinIndexedVector *)v12, tv_sec, v38);
        p_usage = *((struct rusage **)this + 1);
        v8 = v88;
        ru_msgsnd = v93;
        LODWORD(v18) = *(_DWORD *)(*((_QWORD *)this + 5) + 16LL);
        goto LABEL_13;
      }
    }
    *v33 = v38;
  }
LABEL_13:
  v98 = 0;
  if ( LODWORD(p_usage[9].ru_maxrss) + 199 >= SHIDWORD(p_usage[2].ru_stime.tv_sec)
    && (v20 = *(double *)&p_usage[5].ru_idrss, v21 = *(double *)&p_usage[5].ru_ixrss, v20 > v21) )
  {
    v22 = *((_DWORD *)this + 6);
    v98 = 1;
    v13 = v13 * fmin(v20 / v21, 1000.0);
    if ( v22 > 1 )
      goto LABEL_16;
  }
  else
  {
    v22 = *((_DWORD *)this + 6);
    if ( v22 > 1 )
    {
LABEL_16:
      v23 = (int)v18 / 8;
      if ( (int)v18 / 8 < 2000 )
        v23 = 2000;
      if ( v22 == 2 )
      {
        ru_msgsnd_word_high = p_usage->ru_msgsnd;
        v28 = (double)(int)v18;
      }
      else
      {
        ru_msgrcv = p_usage[8].ru_msgrcv;
        v25 = *(_QWORD *)(ru_msgrcv + 8);
        if ( v25 )
        {
          v26 = *(_DWORD *)(v25 + 72);
        }
        else
        {
          v72 = *(_DWORD **)(ru_msgrcv + 16);
          v73 = *(__int64 (**)(void))(*(_QWORD *)v72 + 136LL);
          if ( (char *)v73 == (char *)CoinDenseFactorization::numberElements )
          {
            v26 = v72[9] * (v72[10] + v72[13]);
          }
          else
          {
            v94 = ru_msgsnd;
            v89 = v8;
            v26 = v73();
            p_usage = *((struct rusage **)this + 1);
            ru_msgsnd = v94;
            v8 = v89;
          }
        }
        ru_msgsnd_word_high = p_usage->ru_msgsnd;
        v28 = (double)(int)v18;
        v29 = (double)v26 / (double)ru_msgsnd_word_high;
        if ( v29 < 1.0 )
        {
          v23 = (int)v18 / 20;
          if ( (int)v18 / 20 < 2000 )
            v23 = 2000;
        }
        else if ( v29 > 10.0 )
        {
          v23 = v18 + 1;
          v30 = v29 / 80.0 * v28;
          if ( v30 <= v28 )
          {
            v23 = (int)v30;
            if ( (int)v30 < 2000 )
              v23 = 2000;
          }
        }
      }
      goto LABEL_46;
    }
  }
  v23 = v18 + 1;
  ru_msgsnd_word_high = p_usage->ru_msgsnd;
  v28 = (double)(int)v18;
LABEL_46:
  v41 = *(double *)&p_usage[5].ru_ixrss;
  v42 = *((_QWORD *)this + 9);
  v100[0] = v18;
  v100[1] = 0;
  if ( v41 > 0.001 )
    v23 = v18 + 1;
  v43 = 1664525 * HIDWORD(p_usage[2].__ru_minflt_word) + 1013904223;
  if ( SHIDWORD(p_usage->__ru_msgsnd_word) <= ru_msgsnd_word_high )
    ru_msgsnd_word_high = HIDWORD(p_usage->__ru_msgsnd_word);
  HIDWORD(p_usage[2].__ru_minflt_word) = v43;
  v44 = (double)*(int *)(v42 + 72);
  v99 = (int)((double)v43 * 2.328306436538696e-10 * v28);
  v100[2] = v99;
  v45 = v44 / (double)ru_msgsnd_word_high;
  v96 = *((double *)this + 10) < 1.0 && v45 >= 0.01;
  v46 = 0.0;
  v97 = -1;
  v85 = -1;
  v47 = 0.0;
  for ( i = 0; i != 4; i += 2 )
  {
    v49 = v100[i];
    v50 = v100[i - 1];
    if ( v49 > v50 )
    {
      v51 = &v17[v50];
      v52 = (unsigned __int64)&v17[v50 + 1 + (unsigned __int64)(unsigned int)(v49 - 1 - v50)];
      while ( 1 )
      {
        while ( 1 )
        {
          v53 = *v51;
          v54 = *(double *)&v16[2 * v53];
          if ( v54 > v13 )
            break;
LABEL_57:
          if ( (int *)v52 == ++v51 )
            goto LABEL_70;
        }
        v55 = fmin(*(double *)(*((_QWORD *)this + 4) + 8 * v53), 1.0e50);
        v56 = fmax(v46, v8 * v47) * v55;
        if ( v54 <= v56 )
          goto LABEL_56;
        if ( (_DWORD)v53 != tv_sec )
          break;
        v54 = v54 * 1.0e-10;
        if ( v56 <= v54 )
          break;
        if ( (int *)v52 == ++v51 )
          goto LABEL_70;
      }
      if ( (*(_BYTE *)(p_usage[1].ru_nsignals + *(int *)(ru_msgsnd + 4 * v53)) & 0x40) != 0 )
      {
        ++v23;
      }
      else if ( v96 && *(_BYTE *)(*(_QWORD *)(v42 + 88) + v53) && v54 > v46 * v55 )
      {
        v97 = *v51;
        v46 = v54 / v55;
      }
      else if ( v54 > v47 * v55 )
      {
        v85 = *v51;
        v47 = v54 / v55;
      }
LABEL_56:
      if ( !--v23 )
        break;
      goto LABEL_57;
    }
LABEL_70:
    if ( !v23 )
      break;
  }
  v57 = *(_DWORD *)(v42 + 176);
  if ( !v57 )
  {
    if ( v97 >= 0 && v46 >= v47 * v8 )
    {
      v85 = v97;
      goto LABEL_76;
    }
LABEL_93:
    if ( v85 >= 0 && v8 < 1.0 )
      goto LABEL_95;
LABEL_77:
    *(_BYTE *)(v42 + 192) = 0;
    if ( !v57 )
      goto LABEL_78;
LABEL_97:
    p_usage = &usage;
    v91 = v42;
    getrusage(RUSAGE_SELF, &usage);
    *(double *)(v91 + 200) = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001
                           + (double)SLODWORD(usage.ru_utime.tv_sec)
                           - *(double *)(v91 + 224)
                           + *(double *)(v91 + 200);
    goto LABEL_78;
  }
  v92 = v8;
  v90 = v42;
  v95 = v47;
  getrusage(RUSAGE_SELF, &usage);
  p_usage = (struct rusage *)(unsigned int)v97;
  v8 = v92;
  *(double *)(v90 + 224) = (double)SLODWORD(usage.ru_utime.tv_usec) * 0.000001 + (double)SLODWORD(usage.ru_utime.tv_sec);
  v42 = *((_QWORD *)this + 9);
  v57 = *(_DWORD *)(v42 + 176);
  if ( v97 < 0 || v46 < v92 * v95 )
    goto LABEL_93;
  if ( v57 && v95 > v46 )
  {
    ++*(_DWORD *)(v42 + 172);
    v85 = v97;
  }
  else
  {
    v85 = v97;
  }
LABEL_76:
  if ( v8 >= 1.0 )
    goto LABEL_77;
LABEL_95:
  if ( !*(_BYTE *)(*(_QWORD *)(v42 + 88) + v85) )
    goto LABEL_77;
  ++*(_DWORD *)(v42 + 160);
  *(_BYTE *)(v42 + 192) = 1;
  if ( v57 )
    goto LABEL_97;
LABEL_78:
  v58 = (unsigned int)v85 >> 31;
  if ( v85 < 0 && v98 )
  {
    v59 = *((_QWORD *)this + 1);
    v60 = *(_QWORD *)(v59 + 768);
    *(_QWORD *)(v59 + 768) = 0;
    v85 = (**(__int64 (__fastcall ***)(ClpPEDualRowSteepest *, struct rusage *, __int64))this)(this, p_usage, v58);
    LODWORD(v58) = (unsigned int)v85 >> 31;
    *(_QWORD *)(*((_QWORD *)this + 1) + 768LL) = v60;
  }
  if ( tv_sec < 0 && (_BYTE)v58 )
  {
    v61 = *((_QWORD *)this + 5);
    if ( (int)v18 <= 0 )
    {
      *(_DWORD *)(v61 + 16) = 0;
    }
    else
    {
      v62 = v17;
      v63 = 0;
      v64 = (__int64)&v17[(unsigned int)(v18 - 1) + 1];
      do
      {
        while ( 1 )
        {
          v66 = *v62;
          v67 = (double *)&v16[2 * v66];
          if ( fabs(*v67) <= 1.0e-50 )
            break;
          ++v62;
          v65 = v63++;
          v17[v65] = v66;
          if ( v62 == (int *)v64 )
            goto LABEL_88;
        }
        ++v62;
        *v67 = 0.0;
      }
      while ( v62 != (int *)v64 );
LABEL_88:
      *(_DWORD *)(v61 + 16) = v63;
      if ( v63 )
      {
LABEL_89:
        *(_DWORD *)(*((_QWORD *)this + 1) + 1232LL) = v63;
        goto LABEL_90;
      }
    }
    *(_BYTE *)(v61 + 28) = 0;
    v63 = 0;
    goto LABEL_89;
  }
LABEL_90:
  *(double *)(*((_QWORD *)this + 9) + 184LL) = *(double *)(*(_QWORD *)(*((_QWORD *)this + 9) + 96LL) + 72LL)
                                             * **(double **)(*((_QWORD *)this + 9) + 96LL)
                                             - *(double *)(*(_QWORD *)(*((_QWORD *)this + 9) + 96LL) + 40LL);
  return (unsigned int)v85;
}

