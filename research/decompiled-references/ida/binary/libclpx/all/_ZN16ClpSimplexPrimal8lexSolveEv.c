__int64 __fastcall ClpSimplexPrimal::lexSolve(
        ClpSimplexPrimal *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  double *i; // rbx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rax
  ClpSimplexProgress *v12; // r15
  const void *v13; // r12
  int v14; // eax
  unsigned __int64 v15; // r14
  const void *v16; // r12
  unsigned __int64 v17; // r14
  const void *v18; // r12
  unsigned __int64 v19; // r14
  int v20; // r14d
  ClpSimplex *v21; // r13
  CoinIndexedVector **v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rdi
  int v26; // eax
  int v27; // r12d
  int v28; // edi
  int v29; // r14d
  __int64 v30; // rcx
  int v31; // r12d
  __int64 v32; // rsi
  __int64 v33; // rax
  int v34; // edx
  char v35; // dl
  int v36; // edx
  double v37; // xmm0_8
  void *v38; // r14
  ClpNonLinearCost *v39; // r14
  int v40; // eax
  unsigned int v41; // ebx
  __int64 v43; // rax
  int v44; // edx
  int *v45; // rdi
  CoinMessageHandler *v46; // rax
  CoinMessageHandler *v47; // rax
  CoinMessageHandler *v48; // rax
  CoinMessageHandler *v49; // rax
  CoinMessageHandler *v50; // rax
  double v51; // xmm0_8
  CoinMessageHandler *v52; // rax
  CoinMessageHandler *v53; // rax
  __int64 v54; // rax
  int v55; // ecx
  char *v56; // rsi
  __int64 *v57; // rdx
  char *v58; // rax
  __int64 v59; // xmm0_8
  __int64 v60; // rax
  char *v61; // rcx
  char *v62; // rsi
  __int64 *v63; // rdx
  char *v64; // rax
  __int64 v65; // xmm0_8
  __int64 v66; // rax
  char *v67; // rcx
  char *v68; // rcx
  char *v69; // rdx
  char *v70; // rax
  __int64 v71; // xmm0_8
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rax
  double *v75; // r14
  int v76; // eax
  __int64 v77; // r9
  __int64 v78; // r8
  __int64 v79; // rdi
  int v80; // r13d
  __int64 v81; // rax
  double v82; // xmm0_8
  CoinMessageHandler *v83; // rax
  CoinMessageHandler *v84; // rax
  CoinMessageHandler *v85; // rax
  CoinMessageHandler *v86; // rax
  CoinMessageHandler *v87; // rax
  __int64 v88; // rax
  double v89; // xmm4_8
  double v90; // xmm5_8
  int v91; // r12d
  __int64 v92; // rax
  unsigned __int64 v93; // rdx
  char *v94; // r9
  char *v95; // r8
  char *v96; // r13
  double *v97; // rcx
  int v98; // ebx
  int v99; // edx
  char *v100; // rax
  int v101; // esi
  int v102; // edx
  char *v103; // rax
  char *v104; // r10
  double *v105; // rcx
  char *v106; // rax
  int v107; // ebx
  int v108; // edx
  int v109; // [rsp+8h] [rbp-148h]
  double *v110; // [rsp+8h] [rbp-148h]
  int v111; // [rsp+10h] [rbp-140h]
  double *v112; // [rsp+10h] [rbp-140h]
  char *v113; // [rsp+10h] [rbp-140h]
  double v114; // [rsp+18h] [rbp-138h]
  double v115; // [rsp+18h] [rbp-138h]
  int v116; // [rsp+24h] [rbp-12Ch]
  char *v117; // [rsp+28h] [rbp-128h]
  char *v118; // [rsp+30h] [rbp-120h]
  int v119; // [rsp+38h] [rbp-118h]
  int v120; // [rsp+3Ch] [rbp-114h]
  double v121; // [rsp+40h] [rbp-110h]
  char *v122; // [rsp+40h] [rbp-110h]
  char *v123; // [rsp+40h] [rbp-110h]
  int v124; // [rsp+48h] [rbp-108h]
  char *v125; // [rsp+48h] [rbp-108h]
  char *v126; // [rsp+48h] [rbp-108h]
  char *v127; // [rsp+48h] [rbp-108h]
  char *v128; // [rsp+58h] [rbp-F8h]
  int v129; // [rsp+60h] [rbp-F0h]
  int v130; // [rsp+64h] [rbp-ECh]
  CoinIndexedVector **src; // [rsp+68h] [rbp-E8h]
  char *srca; // [rsp+68h] [rbp-E8h]
  int v133; // [rsp+7Ch] [rbp-D4h] BYREF
  _BYTE v134[80]; // [rsp+80h] [rbp-D0h] BYREF
  _DWORD v135[32]; // [rsp+D0h] [rbp-80h] BYREF

  i = (double *)this;
  *((_DWORD *)this + 325) = 1;
  ClpSimplex::saveData((ClpSimplex *)v134);
  (*(void (__fastcall **)(_QWORD, double *))(**((_QWORD **)i + 24) + 224LL))(*((_QWORD *)i + 24), i);
  v130 = *((_DWORD *)this + 80);
  v129 = *((_DWORD *)this + 77);
  v9 = ClpSimplex::startup(this, 0, 0);
  v10 = *((_DWORD *)this + 80);
  if ( !v9 )
  {
    v11 = *((_QWORD *)this + 165);
    v133 = 0;
    *(_QWORD *)(v11 + 40) = 0x408F400000000000LL;
    *((_DWORD *)this + 292) = -2;
    if ( v10 < 0 && *((int *)this + 327) <= 99 )
    {
      ClpSimplexPrimal::perturb(this, 0);
      ClpSimplex::gutsOfSolution(this, nullptr, nullptr, 0);
      v45 = *((int **)this + 43);
      if ( v45[26] > 2 )
      {
        v46 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      (CoinMessageHandler *)v45,
                                      6,
                                      (const CoinMessages *)(i + 52));
        v47 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v46);
        CoinMessageHandler::operator<<(v47);
        v48 = (CoinMessageHandler *)CoinMessageHandler::printing(*((CoinMessageHandler **)i + 43), i[112] > 0.0);
        v49 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v48);
        CoinMessageHandler::operator<<(v49);
        a8 = 0.0;
        v50 = (CoinMessageHandler *)CoinMessageHandler::printing(*((CoinMessageHandler **)i + 43), i[111] > 0.0);
        v51 = i[111];
        v52 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v50);
        CoinMessageHandler::operator<<(v52);
        v53 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                      *((CoinMessageHandler **)i + 43),
                                      *((_DWORD *)i + 307) < *((_DWORD *)i + 306));
        CoinMessageHandler::operator<<(v53);
        v54 = CoinMessageHandler::message(*((CoinMessageHandler **)i + 43), -1);
        CoinMessageHandler::operator<<(v54, 0, v51);
      }
    }
    v12 = (ClpSimplexProgress *)(i + 176);
    ClpSimplexProgress::fillFromModel((ClpSimplexProgress *)(i + 176), (ClpSimplex *)i);
    ClpSimplexProgress::startCheck((ClpSimplexProgress *)(i + 176));
    v13 = *((const void **)i + 129);
    v14 = *((_DWORD *)i + 26) + *((_DWORD *)i + 27);
    if ( v13 )
    {
      if ( (unsigned __int64)v14 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v15 = 8LL * v14;
      v128 = (char *)operator new[](v15);
      memcpy(v128, v13, v15);
      v14 = *((_DWORD *)i + 26) + *((_DWORD *)i + 27);
    }
    else
    {
      v128 = nullptr;
    }
    v16 = *((const void **)i + 123);
    if ( v16 )
    {
      if ( (unsigned __int64)v14 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v17 = 8LL * v14;
      v118 = (char *)operator new[](v17);
      memcpy(v118, v16, v17);
      v14 = *((_DWORD *)i + 27) + *((_DWORD *)i + 26);
    }
    else
    {
      v118 = nullptr;
    }
    v18 = *((const void **)i + 126);
    if ( v18 )
    {
      if ( (unsigned __int64)v14 > 0xFFFFFFFFFFFFFFFLL )
        __cxa_throw_bad_array_new_length();
      v19 = 8LL * v14;
      v117 = (char *)operator new[](v19);
      memcpy(v117, v18, v19);
    }
    else
    {
      v117 = nullptr;
    }
    v20 = 0;
    v116 = 0;
    v119 = 0;
    v21 = nullptr;
    v121 = 1.797693134862316e308;
    v124 = -1;
    v120 = -1;
    while ( 1 )
    {
      v10 = *((_DWORD *)i + 80);
      if ( v10 >= 0 )
        goto LABEL_50;
      v22 = (CoinIndexedVector **)(i + 132);
      src = (CoinIndexedVector **)(i + 132);
      do
      {
        CoinIndexedVector::clear(*v22);
        v22 = ++src;
      }
      while ( src != (CoinIndexedVector **)(i + 136) );
      CoinIndexedVector::clear(*((CoinIndexedVector **)i + 138));
      CoinIndexedVector::clear(*((CoinIndexedVector **)i + 139));
      (*(void (__fastcall **)(_QWORD, double *))(**((_QWORD **)i + 24) + 224LL))(*((_QWORD *)i + 24), i);
      v23 = *((_DWORD *)i + 77);
      if ( *((int *)i + 327) <= 100
        && 2 * (*((_DWORD *)i + 26) + *((_DWORD *)i + 27)) < v23
        && ((_BYTE)i[42] & 4) == 0
        && v130 != 10 )
      {
        ClpSimplexPrimal::perturb((ClpSimplexPrimal *)i, 1);
        (*(void (__fastcall **)(_QWORD, double *, __int64, _QWORD))(**((_QWORD **)i + 24) + 464LL))(
          *((_QWORD *)i + 24),
          i,
          1,
          0);
        v23 = *((_DWORD *)i + 77);
      }
      if ( *((_DWORD *)i + 293) == v23 && v20 )
        v20 = 3;
      if ( !v21 )
        goto LABEL_58;
      if ( *((int *)i + 288) < 0 || v124 <= v23 )
        break;
LABEL_28:
      ClpSimplexPrimal::statusOfProblemInPrimal((ClpSimplexPrimal *)i, &v133, v20, v12, 1, 0, v21);
      v24 = *((_DWORD *)i + 306);
      if ( v130 == 10 )
      {
        if ( *((_DWORD *)i + 77) == v129 )
        {
          v55 = v120;
          if ( !*((_DWORD *)i + 308) )
            v55 = *((_DWORD *)i + 306);
          v120 = v55;
          if ( i[113] == 1.0e10 )
            i[113] = 1.000001e10;
        }
        else if ( v24 > 10000 )
        {
          if ( 10 * v120 >= v24 || *((int *)i + 327) > 100 || ((_BYTE)i[42] & 4) != 0 )
            goto LABEL_31;
          ClpSimplexPrimal::perturb((ClpSimplexPrimal *)i, 1);
          (*(void (__fastcall **)(_QWORD, double *, __int64, _QWORD))(**((_QWORD **)i + 24) + 464LL))(
            *((_QWORD *)i + 24),
            i,
            1,
            0);
          ClpSimplexPrimal::statusOfProblemInPrimal((ClpSimplexPrimal *)i, &v133, v20, v12, 1, 0, v21);
          v24 = *((_DWORD *)i + 306);
        }
      }
      if ( v24 == -776 )
      {
        *((_DWORD *)i + 80) = -1;
        ClpSimplex::originalModel((ClpSimplex *)i, v21);
        ClpSimplexPrimal::statusOfProblemInPrimal((ClpSimplexPrimal *)i, &v133, v20, v12, 1, 0, nullptr);
        v21 = nullptr;
      }
LABEL_31:
      v25 = *((_QWORD *)i + 156);
      v135[0] = 0;
      v26 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v25 + 80LL))(v25, v135);
      v10 = *((_DWORD *)i + 80);
      v27 = v26;
      if ( v10 == 777 )
      {
        *((_DWORD *)i + 80) = -1;
        ClpSimplex::originalModel((ClpSimplex *)i, v21);
        ClpSimplexPrimal::statusOfProblemInPrimal((ClpSimplexPrimal *)i, &v133, v20, v12, 1, 0, nullptr);
        v10 = *((_DWORD *)i + 80);
        v21 = nullptr;
      }
      else
      {
        if ( v10 >= 0 )
        {
          *((_DWORD *)i + 292) = -2;
LABEL_34:
          if ( !v128 )
            goto LABEL_50;
          v28 = *((_DWORD *)i + 27);
          v29 = v28;
          if ( v28 > 0 )
          {
            a5 = 2.328306436538696e-10;
            v30 = *((_QWORD *)i + 129);
            a4 = 0.5;
            v31 = 0;
            v32 = (unsigned int)(v28 - 1) + 1LL;
            v33 = 0;
            a8 = 1.0e10;
            while ( 1 )
            {
              while ( 1 )
              {
                *(_QWORD *)(v30 + 8 * v33) = 0;
                v35 = *(_BYTE *)(*((_QWORD *)i + 33) + v33) & 7;
                if ( v35 == 3 )
                  break;
                if ( v35 == 2 )
                {
                  if ( *(double *)(*((_QWORD *)i + 147) + 8 * v33) >= -i[109] )
                  {
                    v44 = 1664525 * *((_DWORD *)i + 89) + 1013904223;
                    *((_DWORD *)i + 89) = v44;
                    v37 = (double)v44 * 2.328306436538696e-10 * 0.5;
                    goto LABEL_44;
                  }
                  *(_QWORD *)(v30 + 8 * v33) = 0xC202A05F20000000LL;
                }
                else if ( v35 == 1 )
                {
                  v34 = 1664525 * *((_DWORD *)i + 89) + 1013904223;
                  *((_DWORD *)i + 89) = v34;
                  *(double *)(v30 + 8 * v33) = (double)v34 * 2.328306436538696e-10 * 0.5 + (double)(v28 - (int)v33);
                }
LABEL_40:
                if ( v32 == ++v33 )
                  goto LABEL_45;
              }
              if ( i[109] < *(double *)(*((_QWORD *)i + 147) + 8 * v33) )
              {
                *(_QWORD *)(v30 + 8 * v33) = 0x4202A05F20000000LL;
                goto LABEL_40;
              }
              v36 = 1664525 * *((_DWORD *)i + 89) + 1013904223;
              *((_DWORD *)i + 89) = v36;
              v37 = (double)v36 * 2.328306436538696e-10 * 0.5;
LABEL_44:
              ++v31;
              *(double *)(v30 + 8 * v33) = v37 + (double)(v28 - (int)v33);
              if ( v32 == ++v33 )
              {
LABEL_45:
                *((_DWORD *)i + 80) = -1;
                v29 = v28;
                ClpSimplexProgress::fillFromModel(v12, (ClpSimplex *)i);
                ClpSimplexProgress::startCheck(v12);
                if ( v31 )
                  goto LABEL_46;
                goto LABEL_86;
              }
            }
          }
          *((_DWORD *)i + 80) = -1;
          ClpSimplexProgress::fillFromModel(v12, (ClpSimplex *)i);
          ClpSimplexProgress::startCheck(v12);
LABEL_86:
          v56 = *((char **)i + 129);
          if ( v56 != v128 && v29 )
          {
            if ( v29 >> 3 <= 0 )
            {
              v61 = v128;
            }
            else
            {
              v57 = (__int64 *)v128;
              v58 = *((char **)i + 129);
              do
              {
                v59 = *v57;
                v58 += 64;
                v57 += 8;
                *((_QWORD *)v58 - 8) = v59;
                *((_QWORD *)v58 - 7) = *(v57 - 7);
                *((_QWORD *)v58 - 6) = *(v57 - 6);
                *((_QWORD *)v58 - 5) = *(v57 - 5);
                *((_QWORD *)v58 - 4) = *(v57 - 4);
                *((_QWORD *)v58 - 3) = *(v57 - 3);
                *((_QWORD *)v58 - 2) = *(v57 - 2);
                *((_QWORD *)v58 - 1) = *(v57 - 1);
              }
              while ( &v56[64 * ((v29 >> 3) - 1) + 64] != v58 );
              v60 = ((v29 >> 3) - 1 + 1LL) << 6;
              v61 = &v128[v60];
              v56 += v60;
            }
            switch ( v29 % 8 )
            {
              case 1:
                goto LABEL_99;
              case 2:
                goto LABEL_98;
              case 3:
                goto LABEL_97;
              case 4:
                goto LABEL_96;
              case 5:
                goto LABEL_95;
              case 6:
                goto LABEL_94;
              case 7:
                *((_QWORD *)v56 + 6) = *((_QWORD *)v61 + 6);
LABEL_94:
                *((_QWORD *)v56 + 5) = *((_QWORD *)v61 + 5);
LABEL_95:
                *((_QWORD *)v56 + 4) = *((_QWORD *)v61 + 4);
LABEL_96:
                *((_QWORD *)v56 + 3) = *((_QWORD *)v61 + 3);
LABEL_97:
                *((_QWORD *)v56 + 2) = *((_QWORD *)v61 + 2);
LABEL_98:
                *((_QWORD *)v56 + 1) = *((_QWORD *)v61 + 1);
LABEL_99:
                *(_QWORD *)v56 = *(_QWORD *)v61;
                break;
              default:
                break;
            }
          }
          operator delete[](v128);
          v62 = *((char **)i + 123);
          v63 = (__int64 *)v118;
          if ( v62 != v118 && v29 )
          {
            if ( v29 >> 3 <= 0 )
            {
              v67 = v118;
            }
            else
            {
              v64 = *((char **)i + 123);
              do
              {
                v65 = *v63;
                v64 += 64;
                v63 += 8;
                *((_QWORD *)v64 - 8) = v65;
                *((_QWORD *)v64 - 7) = *(v63 - 7);
                *((_QWORD *)v64 - 6) = *(v63 - 6);
                *((_QWORD *)v64 - 5) = *(v63 - 5);
                *((_QWORD *)v64 - 4) = *(v63 - 4);
                *((_QWORD *)v64 - 3) = *(v63 - 3);
                *((_QWORD *)v64 - 2) = *(v63 - 2);
                *((_QWORD *)v64 - 1) = *(v63 - 1);
              }
              while ( &v62[64 * ((v29 >> 3) - 1) + 64] != v64 );
              v66 = ((v29 >> 3) - 1 + 1LL) << 6;
              v67 = &v118[v66];
              v62 += v66;
            }
            switch ( v29 % 8 )
            {
              case 1:
                goto LABEL_113;
              case 2:
                goto LABEL_112;
              case 3:
                goto LABEL_111;
              case 4:
                goto LABEL_110;
              case 5:
                goto LABEL_109;
              case 6:
                goto LABEL_108;
              case 7:
                *((_QWORD *)v62 + 6) = *((_QWORD *)v67 + 6);
LABEL_108:
                *((_QWORD *)v62 + 5) = *((_QWORD *)v67 + 5);
LABEL_109:
                *((_QWORD *)v62 + 4) = *((_QWORD *)v67 + 4);
LABEL_110:
                *((_QWORD *)v62 + 3) = *((_QWORD *)v67 + 3);
LABEL_111:
                *((_QWORD *)v62 + 2) = *((_QWORD *)v67 + 2);
LABEL_112:
                *((_QWORD *)v62 + 1) = *((_QWORD *)v67 + 1);
LABEL_113:
                *(_QWORD *)v62 = *(_QWORD *)v67;
                break;
              default:
                break;
            }
          }
          if ( v118 )
            operator delete[](v118);
          v68 = *((char **)i + 126);
          v69 = v117;
          if ( v68 != v117 && v29 )
          {
            if ( v29 >> 3 > 0 )
            {
              v70 = *((char **)i + 126);
              do
              {
                v71 = *(_QWORD *)v69;
                v70 += 64;
                v69 += 64;
                *((_QWORD *)v70 - 8) = v71;
                *((_QWORD *)v70 - 7) = *((_QWORD *)v69 - 7);
                *((_QWORD *)v70 - 6) = *((_QWORD *)v69 - 6);
                *((_QWORD *)v70 - 5) = *((_QWORD *)v69 - 5);
                *((_QWORD *)v70 - 4) = *((_QWORD *)v69 - 4);
                *((_QWORD *)v70 - 3) = *((_QWORD *)v69 - 3);
                *((_QWORD *)v70 - 2) = *((_QWORD *)v69 - 2);
                *((_QWORD *)v70 - 1) = *((_QWORD *)v69 - 1);
              }
              while ( &v68[64 * ((v29 >> 3) - 1) + 64] != v70 );
              v72 = ((v29 >> 3) - 1 + 1LL) << 6;
              v69 = &v117[v72];
              v68 += v72;
            }
            switch ( v29 % 8 )
            {
              case 1:
                goto LABEL_129;
              case 2:
                goto LABEL_128;
              case 3:
                goto LABEL_127;
              case 4:
                goto LABEL_126;
              case 5:
                goto LABEL_125;
              case 6:
                goto LABEL_124;
              case 7:
                *((_QWORD *)v68 + 6) = *((_QWORD *)v69 + 6);
LABEL_124:
                *((_QWORD *)v68 + 5) = *((_QWORD *)v69 + 5);
LABEL_125:
                *((_QWORD *)v68 + 4) = *((_QWORD *)v69 + 4);
LABEL_126:
                *((_QWORD *)v68 + 3) = *((_QWORD *)v69 + 3);
LABEL_127:
                *((_QWORD *)v68 + 2) = *((_QWORD *)v69 + 2);
LABEL_128:
                *((_QWORD *)v68 + 1) = *((_QWORD *)v69 + 1);
LABEL_129:
                *(_QWORD *)v68 = *(_QWORD *)v69;
                break;
              default:
                break;
            }
          }
          v128 = nullptr;
          if ( v117 )
            operator delete[](v117);
LABEL_46:
          v38 = *((void **)i + 165);
          if ( v38 )
          {
            ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)i + 165));
            operator delete(v38);
          }
          v39 = (ClpNonLinearCost *)operator new(0x98u);
          ClpNonLinearCost::ClpNonLinearCost(v39, (ClpSimplex *)i, 1);
          v40 = *((_DWORD *)i + 428);
          *((_QWORD *)i + 165) = v39;
          v40 >>= 31;
          *((_DWORD *)i + 428) ^= v40;
          *((_DWORD *)i + 428) -= v40;
          v121 = 1.797693134862316e308;
          goto LABEL_49;
        }
        if ( v21 || !v26 || *((int *)i + 337) >= 0 )
        {
          *((_DWORD *)i + 292) = -2;
          goto LABEL_72;
        }
        v116 = *((_DWORD *)i + 77) + 100;
        v73 = *((int *)i + 27);
        if ( v73 > 0x1FFFFFFFFFFFFFFELL )
          __cxa_throw_bad_array_new_length();
        srca = (char *)operator new[](4 * v73);
        v74 = *((int *)i + 27);
        if ( v74 > 0xFFFFFFFFFFFFFFFLL )
          __cxa_throw_bad_array_new_length();
        v75 = (double *)operator new[](8 * v74);
        v76 = *((_DWORD *)i + 27);
        if ( v76 > 0 )
        {
          a5 = -0.0;
          v77 = *((_QWORD *)i + 147);
          v78 = *((_QWORD *)i + 33);
          v114 = 0.0;
          v79 = (unsigned int)(v76 - 1) + 1LL;
          v80 = 0;
          a8 = NAN;
          v81 = 0;
          v111 = 0;
          v109 = 0;
          while ( 2 )
          {
            v82 = *(double *)(v77 + 8 * v81);
            a4 = -0.0;
            switch ( *(_BYTE *)(v78 + v81) & 7 )
            {
              case 0:
              case 4:
                a4 = -0.0;
                v82 = fabs(v82) * -100.0;
                goto LABEL_138;
              case 1:
                ++v111;
                v82 = -1.0e50;
                goto LABEL_141;
              case 2:
                a4 = -0.0;
                v82 = -v82;
                goto LABEL_138;
              case 3:
                a4 = -0.0;
                goto LABEL_138;
              case 5:
                ++v109;
                v82 = 1.0e50;
                if ( i[109] >= -1.0e50 )
                  goto LABEL_141;
                goto LABEL_140;
              default:
LABEL_138:
                if ( -i[109] > v82 && v82 > -1.0e50 )
                {
LABEL_140:
                  ++v80;
                  a4 = v114 - v82;
                  v114 = v114 - v82;
                }
LABEL_141:
                v75[v81] = v82;
                *(_DWORD *)&srca[4 * v81] = v81;
                if ( ++v81 == v79 )
                  goto LABEL_142;
                continue;
            }
          }
        }
        v111 = 0;
        v109 = 0;
        v114 = 0.0;
LABEL_142:
        v83 = (CoinMessageHandler *)CoinMessageHandler::message(
                                      *((CoinMessageHandler **)i + 43),
                                      56,
                                      (const CoinMessages *)(i + 52));
        v84 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v83);
        v85 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v84);
        v86 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v85);
        v87 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v86);
        v88 = CoinMessageHandler::operator<<(v87);
        CoinMessageHandler::operator<<(v88, 0, v114);
        ++v119;
        v115 = (i[9] * *i - i[5]) * *i;
        if ( v115 > v121 - 0.0000001 && v119 > 5 )
        {
          (*(void (__fastcall **)(_QWORD, double, double, double, double, double, double, double))(**((_QWORD **)i + 156)
                                                                                                 + 88LL))(
            *((_QWORD *)i + 156),
            v121 - 0.0000001,
            *i,
            a4,
            a5,
            v89,
            v90,
            a8);
          v10 = *((_DWORD *)i + 80);
          v21 = nullptr;
        }
        else
        {
          CoinSort_2<double,int>(v75, &v75[*((int *)i + 27)], srca);
          v91 = v111 + v27;
          if ( *((_DWORD *)i + 27) - v109 <= v91 )
            v91 = *((_DWORD *)i + 27) - v109;
          v92 = 4LL * v91;
          if ( &srca[v92] != srca )
          {
            v125 = &srca[v92];
            _BitScanReverse64(&v93, v92 >> 2);
            sub_16CA40(srca, &srca[v92], 2 * (63LL - (int)(v93 ^ 0x3F)));
            v94 = srca + 4;
            v95 = v125;
            v96 = srca + 4;
            if ( 4LL * v91 > 64 )
            {
              v104 = srca + 64;
              v105 = i;
              do
              {
                v106 = srca;
                v107 = *(_DWORD *)v96;
                if ( *(_DWORD *)v96 < *(_DWORD *)srca )
                {
                  if ( v96 != srca )
                  {
                    v110 = v105;
                    v113 = v104;
                    v123 = v95;
                    v127 = v94;
                    memmove(v94, srca, v96 - srca);
                    v105 = v110;
                    v104 = v113;
                    v95 = v123;
                    v94 = v127;
                    v106 = srca;
                  }
                }
                else
                {
                  v108 = *((_DWORD *)v96 - 1);
                  v106 = v96 - 4;
                  if ( v107 >= v108 )
                  {
                    v106 = v96;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      *((_DWORD *)v106 + 1) = v108;
                      v108 = *((_DWORD *)v106 - 1);
                      if ( v107 >= v108 )
                        break;
                      v106 -= 4;
                    }
                  }
                }
                v96 += 4;
                *(_DWORD *)v106 = v107;
              }
              while ( v104 != v96 );
              for ( i = v105; v95 != v96; *(_DWORD *)v103 = v101 )
              {
                v101 = *(_DWORD *)v96;
                v102 = *((_DWORD *)v96 - 1);
                v103 = v96 - 4;
                if ( *(_DWORD *)v96 < v102 )
                {
                  while ( 1 )
                  {
                    *((_DWORD *)v103 + 1) = v102;
                    v102 = *((_DWORD *)v103 - 1);
                    if ( v101 >= v102 )
                      break;
                    v103 -= 4;
                  }
                }
                else
                {
                  v103 = v96;
                }
                v96 += 4;
              }
            }
            else if ( v125 != v94 )
            {
              v97 = i;
              do
              {
                v98 = *(_DWORD *)v96;
                if ( *(_DWORD *)v96 < *(_DWORD *)srca )
                {
                  if ( v96 != srca )
                  {
                    v112 = v97;
                    v122 = v95;
                    v126 = v94;
                    memmove(v94, srca, v96 - srca);
                    v97 = v112;
                    v95 = v122;
                    v94 = v126;
                  }
                  *(_DWORD *)srca = v98;
                }
                else
                {
                  v99 = *((_DWORD *)v96 - 1);
                  v100 = v96 - 4;
                  if ( v98 < v99 )
                  {
                    while ( 1 )
                    {
                      *((_DWORD *)v100 + 1) = v99;
                      v99 = *((_DWORD *)v100 - 1);
                      if ( v98 >= v99 )
                        break;
                      v100 -= 4;
                    }
                    *(_DWORD *)v100 = v98;
                  }
                  else
                  {
                    *(_DWORD *)v96 = v98;
                  }
                }
                v96 += 4;
              }
              while ( v95 != v96 );
              i = v97;
            }
          }
          v21 = (ClpSimplex *)operator new(0x6F0u);
          ClpSimplex::ClpSimplex(v21, (ClpSimplex *)i, v91, (const int *)srca);
          operator delete[](srca);
          operator delete[](v75);
          v10 = *((_DWORD *)i + 80);
          v121 = v115;
          v124 = *((_DWORD *)i + 77) + v135[0];
        }
      }
      *((_DWORD *)i + 292) = -2;
      if ( v10 >= 0 )
        goto LABEL_34;
LABEL_72:
      if ( (unsigned __int8)ClpModel::hitMaximumIterations((ClpModel *)i) )
      {
        *((_DWORD *)i + 80) = 3;
        i[191] = 0.0;
        goto LABEL_53;
      }
      if ( (***((int (__fastcall ****)(_QWORD, __int64))i + 45))(*((_QWORD *)i + 45), 101) >= 0 )
      {
        i[191] = 0.0;
        *((_QWORD *)i + 40) = 0x6500000005LL;
        goto LABEL_53;
      }
      ClpSimplexPrimal::whileIterating((ClpSimplexPrimal *)i, 0);
LABEL_49:
      v20 = 1;
    }
    *((_DWORD *)i + 80) = -1;
    ClpSimplex::originalModel((ClpSimplex *)i, v21);
    if ( *((int *)i + 288) < 0 && *((_DWORD *)i + 77) < v116 && v119 > 100 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)i + 156) + 88LL))(*((_QWORD *)i + 156));
LABEL_58:
    v21 = nullptr;
    goto LABEL_28;
  }
LABEL_50:
  i[191] = 0.0;
  if ( v10 == 1 && *((_DWORD *)i + 81) != 6 )
  {
    i[113] = 0.0;
    ClpSimplex::createRim((ClpSimplex *)i, 5, 0, 0);
    ClpNonLinearCost::checkInfeasibilities(*((ClpNonLinearCost **)i + 165), 0.0);
    v43 = *((_QWORD *)i + 165);
    i[112] = *(double *)(v43 + 32);
    *((_DWORD *)i + 308) = *(_DWORD *)(v43 + 112);
    ClpSimplex::computeDuals((ClpSimplex *)i, nullptr);
  }
LABEL_53:
  *((_DWORD *)i + 84) &= ~0x20000u;
  ClpSimplexPrimal::unflag((ClpSimplexPrimal *)i);
  ClpSimplex::finish((ClpSimplex *)i, 0);
  ClpDataSave::ClpDataSave((ClpDataSave *)v135, (const ClpDataSave *)v134);
  ClpSimplex::restoreData();
  ClpDataSave::~ClpDataSave((ClpDataSave *)v135);
  v41 = *((_DWORD *)i + 80);
  ClpDataSave::~ClpDataSave((ClpDataSave *)v134);
  return v41;
}

