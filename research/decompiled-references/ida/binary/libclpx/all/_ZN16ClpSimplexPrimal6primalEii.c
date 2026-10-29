__int64 __fastcall ClpSimplexPrimal::primal(ClpSimplexPrimal *this, int a2, int a3)
{
  const ClpDataSave *i; // r15
  int v4; // r12d
  ClpSimplexPrimal *v5; // rbx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // r9
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  _BYTE *v14; // r8
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned int v18; // edi
  int v19; // edi
  int v20; // eax
  __m128i v21; // xmm2
  int v22; // r11d
  __m128i si128; // xmm7
  const __m128i *v24; // rdx
  unsigned int v25; // r10d
  unsigned int v26; // ecx
  __m128i v27; // xmm5
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm3
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  __m128i v33; // xmm8
  __m128i v34; // xmm2
  __m128i v35; // xmm1
  __m128i v36; // xmm2
  int v37; // edi
  __int64 v38; // rax
  bool v39; // dl
  int v40; // r11d
  ClpSimplex *v41; // r14
  CoinIndexedVector **v42; // rax
  int v43; // eax
  int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // r8
  __int64 v49; // rdi
  int v50; // r13d
  int v51; // eax
  bool v52; // zf
  int (__fastcall ***v53)(_QWORD, __int64); // rdi
  int (__fastcall *v54)(_QWORD, __int64); // rax
  int v55; // eax
  int v56; // eax
  __int64 v57; // xmm6_8
  void *v58; // r14
  ClpNonLinearCost *v59; // r14
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  int v63; // eax
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // rdi
  int v67; // r14d
  __int64 v68; // rax
  double v69; // xmm0_8
  int *v70; // rdi
  CoinMessageHandler *v71; // rax
  CoinMessageHandler *v72; // rax
  CoinMessageHandler *v73; // rax
  CoinMessageHandler *v74; // rax
  CoinMessageHandler *v75; // rax
  double v76; // xmm0_8
  CoinMessageHandler *v77; // rax
  CoinMessageHandler *v78; // rax
  __int64 v79; // rax
  CoinMessageHandler *v80; // rax
  CoinMessageHandler *v81; // rax
  CoinMessageHandler *v82; // rax
  CoinMessageHandler *v83; // rax
  CoinMessageHandler *v84; // rax
  __int64 v85; // rax
  int v86; // r13d
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  char *v89; // r9
  char *v90; // r8
  char *v91; // r14
  const ClpDataSave *v92; // rcx
  int v93; // r15d
  ClpSimplexPrimal *v94; // r12
  int v95; // ebx
  int v96; // edx
  char *v97; // rax
  int v98; // esi
  int v99; // edx
  char *v100; // rax
  const ClpDataSave *v101; // rcx
  char *v102; // r10
  int v103; // r15d
  ClpSimplexPrimal *v104; // r12
  char *v105; // rax
  int v106; // ebx
  int v107; // edx
  __int64 v108; // [rsp-10h] [rbp-150h]
  __int64 v109; // [rsp-8h] [rbp-148h]
  int v110; // [rsp+0h] [rbp-140h]
  const ClpDataSave *v111; // [rsp+0h] [rbp-140h]
  int v112; // [rsp+8h] [rbp-138h]
  const ClpDataSave *v113; // [rsp+8h] [rbp-138h]
  char *v114; // [rsp+8h] [rbp-138h]
  double *v115; // [rsp+10h] [rbp-130h]
  double v116; // [rsp+18h] [rbp-128h]
  char *v117; // [rsp+18h] [rbp-128h]
  char *v118; // [rsp+18h] [rbp-128h]
  int v119; // [rsp+28h] [rbp-118h]
  int v120; // [rsp+2Ch] [rbp-114h]
  int v121; // [rsp+30h] [rbp-110h]
  char *v122; // [rsp+30h] [rbp-110h]
  char *v123; // [rsp+30h] [rbp-110h]
  char *v124; // [rsp+30h] [rbp-110h]
  unsigned int v125; // [rsp+38h] [rbp-108h]
  unsigned int v126; // [rsp+3Ch] [rbp-104h]
  ClpSimplexProgress *v127; // [rsp+40h] [rbp-100h]
  int v128; // [rsp+48h] [rbp-F8h]
  double v129; // [rsp+48h] [rbp-F8h]
  double v130; // [rsp+48h] [rbp-F8h]
  int v131; // [rsp+50h] [rbp-F0h]
  CoinIndexedVector **src; // [rsp+58h] [rbp-E8h]
  char *srca; // [rsp+58h] [rbp-E8h]
  int v135; // [rsp+6Ch] [rbp-D4h] BYREF
  _BYTE v136[80]; // [rsp+70h] [rbp-D0h] BYREF
  int v137[32]; // [rsp+C0h] [rbp-80h] BYREF

  i = (const ClpDataSave *)v136;
  v4 = a2;
  v5 = this;
  *((_DWORD *)this + 182) &= ~0x10u;
  *((_DWORD *)this + 325) = 1;
  ClpSimplex::saveData((ClpSimplex *)v136);
  if ( *((_DWORD *)this + 80) == 10 && *((double *)this + 112) == -123456789.0 )
    *((double *)this + 113) = fmax(*((double *)this + 113), 1.0e13);
  (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *))(**((_QWORD **)this + 24) + 224LL))(*((_QWORD *)this + 24), this);
  v6 = *((_DWORD *)this + 80);
  *((_DWORD *)this + 84) |= 0x20000u;
  v131 = v6;
  v126 = *((_DWORD *)this + 77);
  if ( !(unsigned int)ClpSimplex::startup(this, a2, a3) )
  {
    v10 = *((_QWORD *)this + 165);
    if ( *(double *)(v10 + 32) <= 1.0e15 || (v11 = *((_DWORD *)this + 26), v11 <= 0) )
    {
LABEL_35:
      v135 = 0;
      *(_QWORD *)(v10 + 40) = 0x408F400000000000LL;
      v40 = *((_DWORD *)v5 + 80);
      *((_DWORD *)v5 + 292) = -2;
      if ( v40 < 0 && *((int *)v5 + 327) <= 99 && !v4 )
      {
        ClpSimplexPrimal::perturb(v5, 0);
        ClpSimplex::gutsOfSolution(v5, nullptr, nullptr, 0);
        v70 = *((int **)v5 + 43);
        if ( v70[26] > 2 )
        {
          v71 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        (CoinMessageHandler *)v70,
                                        6,
                                        (ClpSimplexPrimal *)((char *)v5 + 416));
          v72 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v71);
          CoinMessageHandler::operator<<(v72);
          v73 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                        *((CoinMessageHandler **)v5 + 43),
                                        *((double *)v5 + 112) > 0.0);
          v74 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v73);
          CoinMessageHandler::operator<<(v74);
          v75 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                        *((CoinMessageHandler **)v5 + 43),
                                        *((double *)v5 + 111) > 0.0);
          v76 = *((double *)v5 + 111);
          v77 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v75);
          CoinMessageHandler::operator<<(v77);
          v78 = (CoinMessageHandler *)CoinMessageHandler::printing(
                                        *((CoinMessageHandler **)v5 + 43),
                                        *((_DWORD *)v5 + 307) < *((_DWORD *)v5 + 306));
          CoinMessageHandler::operator<<(v78);
          v79 = CoinMessageHandler::message(*((CoinMessageHandler **)v5 + 43), -1);
          CoinMessageHandler::operator<<(v79, 0, v76);
        }
      }
      v127 = (ClpSimplexPrimal *)((char *)v5 + 1408);
      ClpSimplexProgress::fillFromModel((ClpSimplexPrimal *)((char *)v5 + 1408), v5);
      ClpSimplexProgress::startCheck((ClpSimplexPrimal *)((char *)v5 + 1408));
      v7 = *((_DWORD *)v5 + 80);
      v119 = 0;
      v116 = 1.797693134862316e308;
      v120 = 0;
      v128 = 0;
      v121 = -1;
      v41 = nullptr;
      v125 = -1;
      while ( 1 )
      {
        if ( v7 >= 0 )
          goto LABEL_4;
        v42 = (CoinIndexedVector **)((char *)v5 + 1056);
        src = (CoinIndexedVector **)((char *)v5 + 1056);
        do
        {
          CoinIndexedVector::clear(*v42);
          v42 = ++src;
        }
        while ( src != (CoinIndexedVector **)((char *)v5 + 1088) );
        CoinIndexedVector::clear(*((CoinIndexedVector **)v5 + 138));
        CoinIndexedVector::clear(*((CoinIndexedVector **)v5 + 139));
        (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *))(**((_QWORD **)v5 + 24) + 224LL))(*((_QWORD *)v5 + 24), v5);
        v43 = *((_DWORD *)v5 + 77);
        if ( *((int *)v5 + 327) <= 100
          && 2 * (*((_DWORD *)v5 + 26) + *((_DWORD *)v5 + 27)) < v43
          && (*((_BYTE *)v5 + 336) & 4) == 0
          && v131 != 10 )
        {
          ClpSimplexPrimal::perturb(v5, 1);
          (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, _QWORD))(**((_QWORD **)v5 + 24) + 464LL))(
            *((_QWORD *)v5 + 24),
            v5,
            1,
            0);
          v43 = *((_DWORD *)v5 + 77);
        }
        if ( *((_DWORD *)v5 + 293) == v43 )
        {
          v44 = 3;
          if ( !v128 )
            v44 = 0;
          v128 = v44;
        }
        if ( !v41 )
          goto LABEL_55;
        if ( *((int *)v5 + 288) < 0 || v121 <= v43 )
          break;
LABEL_56:
        ClpSimplexPrimal::statusOfProblemInPrimal(v5, &v135, v128, v127, 1, v4, v41);
        v47 = *((_DWORD *)v5 + 306);
        v48 = v109;
        if ( v131 == 10 )
        {
          v46 = v126;
          if ( *((_DWORD *)v5 + 77) == v126 )
          {
            v45 = *((unsigned int *)v5 + 308);
            v46 = v125;
            if ( !(_DWORD)v45 )
              v46 = (unsigned int)v47;
            v125 = v46;
            if ( *((double *)v5 + 113) == 1.0e10 )
            {
              v46 = 0x4202A06058800000LL;
              *((_QWORD *)v5 + 113) = 0x4202A06058800000LL;
            }
          }
          else if ( v47 > 10000 )
          {
            v46 = v125;
            v45 = 10 * v125;
            if ( v47 <= (int)v45 || *((int *)v5 + 327) > 100 || (*((_BYTE *)v5 + 336) & 4) != 0 )
              goto LABEL_59;
            ClpSimplexPrimal::perturb(v5, 1);
            (*(void (__fastcall **)(_QWORD, ClpSimplexPrimal *, __int64, _QWORD))(**((_QWORD **)v5 + 24) + 464LL))(
              *((_QWORD *)v5 + 24),
              v5,
              1,
              0);
            ClpSimplexPrimal::statusOfProblemInPrimal(v5, &v135, v128, v127, 1, v4, v41);
            v46 = v108;
            v47 = *((_DWORD *)v5 + 306);
          }
        }
        if ( v47 == -776 )
        {
          *((_DWORD *)v5 + 80) = -1;
          ClpSimplex::originalModel(v5, v41);
          ClpSimplexPrimal::statusOfProblemInPrimal(v5, &v135, v128, v127, 1, v4, nullptr);
          v41 = nullptr;
        }
LABEL_59:
        v49 = *((_QWORD *)v5 + 156);
        v137[0] = 0;
        v50 = (*(__int64 (__fastcall **)(__int64, int *, __int64, __int64, __int64))(*(_QWORD *)v49 + 80LL))(
                v49,
                v137,
                v45,
                v46,
                v48);
        v51 = *((_DWORD *)v5 + 80);
        if ( v51 == 777 )
        {
          *((_DWORD *)v5 + 80) = -1;
          ClpSimplex::originalModel(v5, v41);
          ClpSimplexPrimal::statusOfProblemInPrimal(v5, &v135, v128, v127, 1, v4, nullptr);
          v41 = nullptr;
        }
        else if ( v51 < 0 && !v41 && v50 && *((int *)v5 + 337) < 0 )
        {
          v119 = *((_DWORD *)v5 + 77) + 100;
          v61 = *((int *)v5 + 27);
          if ( v61 > 0x1FFFFFFFFFFFFFFELL )
            __cxa_throw_bad_array_new_length();
          srca = (char *)operator new[](4 * v61);
          v62 = *((int *)v5 + 27);
          if ( v62 > 0xFFFFFFFFFFFFFFFLL )
            __cxa_throw_bad_array_new_length();
          v115 = (double *)operator new[](8 * v62);
          v63 = *((_DWORD *)v5 + 27);
          if ( v63 > 0 )
          {
            v64 = *((_QWORD *)v5 + 147);
            v65 = *((_QWORD *)v5 + 33);
            v129 = 0.0;
            v66 = (unsigned int)(v63 - 1) + 1LL;
            v67 = 0;
            v110 = 0;
            v112 = 0;
            v68 = 0;
            while ( 2 )
            {
              v69 = *(double *)(v64 + 8 * v68);
              switch ( *(_BYTE *)(v65 + v68) & 7 )
              {
                case 0:
                case 4:
                  v69 = fabs(v69) * -100.0;
                  goto LABEL_123;
                case 1:
                  ++v110;
                  v69 = -1.0e50;
                  goto LABEL_126;
                case 2:
                  v69 = -v69;
                  goto LABEL_123;
                case 5:
                  ++v112;
                  v69 = 1.0e50;
                  if ( *((double *)v5 + 109) >= -1.0e50 )
                    goto LABEL_126;
                  goto LABEL_125;
                default:
LABEL_123:
                  if ( -*((double *)v5 + 109) > v69 && v69 > -1.0e50 )
                  {
LABEL_125:
                    ++v67;
                    v129 = v129 - v69;
                  }
LABEL_126:
                  v115[v68] = v69;
                  *(_DWORD *)&srca[4 * v68] = v68;
                  if ( ++v68 == v66 )
                    goto LABEL_127;
                  continue;
              }
            }
          }
          v110 = 0;
          v112 = 0;
          v129 = 0.0;
LABEL_127:
          v80 = (CoinMessageHandler *)CoinMessageHandler::message(
                                        *((CoinMessageHandler **)v5 + 43),
                                        56,
                                        (ClpSimplexPrimal *)((char *)v5 + 416));
          v81 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v80);
          v82 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v81);
          v83 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v82);
          v84 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v83);
          v85 = CoinMessageHandler::operator<<(v84);
          CoinMessageHandler::operator<<(v85, 0, v129);
          ++v120;
          v130 = (*((double *)v5 + 9) * *(double *)v5 - *((double *)v5 + 5)) * *(double *)v5;
          if ( v130 > v116 - 0.0000001 && v120 > 5 )
          {
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 156) + 88LL))(*((_QWORD *)v5 + 156));
            v41 = nullptr;
          }
          else
          {
            CoinSort_2<double,int>(v115, &v115[*((int *)v5 + 27)], srca);
            v86 = v110 + v50;
            if ( *((_DWORD *)v5 + 27) - v112 <= v86 )
              v86 = *((_DWORD *)v5 + 27) - v112;
            v87 = 4LL * v86;
            if ( &srca[v87] != srca )
            {
              v122 = &srca[v87];
              _BitScanReverse64(&v88, v87 >> 2);
              sub_16CA40(srca, &srca[v87], 2 * (63LL - (int)(v88 ^ 0x3F)));
              v89 = srca + 4;
              v90 = v122;
              v91 = srca + 4;
              if ( 4LL * v86 > 64 )
              {
                v101 = i;
                v102 = srca + 64;
                v103 = v4;
                v104 = v5;
                do
                {
                  v105 = srca;
                  v106 = *(_DWORD *)v91;
                  if ( *(_DWORD *)v91 < *(_DWORD *)srca )
                  {
                    if ( v91 != srca )
                    {
                      v111 = v101;
                      v114 = v102;
                      v118 = v90;
                      v124 = v89;
                      memmove(v89, srca, v91 - srca);
                      v101 = v111;
                      v102 = v114;
                      v90 = v118;
                      v89 = v124;
                      v105 = srca;
                    }
                  }
                  else
                  {
                    v107 = *((_DWORD *)v91 - 1);
                    v105 = v91 - 4;
                    if ( v106 >= v107 )
                    {
                      v105 = v91;
                    }
                    else
                    {
                      while ( 1 )
                      {
                        *((_DWORD *)v105 + 1) = v107;
                        v107 = *((_DWORD *)v105 - 1);
                        if ( v106 >= v107 )
                          break;
                        v105 -= 4;
                      }
                    }
                  }
                  v91 += 4;
                  *(_DWORD *)v105 = v106;
                }
                while ( v102 != v91 );
                v5 = v104;
                v4 = v103;
                for ( i = v101; v90 != v91; *(_DWORD *)v100 = v98 )
                {
                  v98 = *(_DWORD *)v91;
                  v99 = *((_DWORD *)v91 - 1);
                  v100 = v91 - 4;
                  if ( v99 > *(_DWORD *)v91 )
                  {
                    while ( 1 )
                    {
                      *((_DWORD *)v100 + 1) = v99;
                      v99 = *((_DWORD *)v100 - 1);
                      if ( v98 >= v99 )
                        break;
                      v100 -= 4;
                    }
                  }
                  else
                  {
                    v100 = v91;
                  }
                  v91 += 4;
                }
              }
              else if ( v122 != v89 )
              {
                v92 = i;
                v93 = v4;
                v94 = v5;
                do
                {
                  v95 = *(_DWORD *)v91;
                  if ( *(_DWORD *)v91 < *(_DWORD *)srca )
                  {
                    if ( v91 != srca )
                    {
                      v113 = v92;
                      v117 = v90;
                      v123 = v89;
                      memmove(v89, srca, v91 - srca);
                      v92 = v113;
                      v90 = v117;
                      v89 = v123;
                    }
                    *(_DWORD *)srca = v95;
                  }
                  else
                  {
                    v96 = *((_DWORD *)v91 - 1);
                    v97 = v91 - 4;
                    if ( v95 < v96 )
                    {
                      while ( 1 )
                      {
                        *((_DWORD *)v97 + 1) = v96;
                        v96 = *((_DWORD *)v97 - 1);
                        if ( v95 >= v96 )
                          break;
                        v97 -= 4;
                      }
                      *(_DWORD *)v97 = v95;
                    }
                    else
                    {
                      *(_DWORD *)v91 = v95;
                    }
                  }
                  v91 += 4;
                }
                while ( v90 != v91 );
                v5 = v94;
                v4 = v93;
                i = v92;
              }
            }
            v41 = (ClpSimplex *)operator new(0x6F0u);
            ClpSimplex::ClpSimplex(v41, v5, v86, (const int *)srca);
            operator delete[](srca);
            operator delete[](v115);
            v116 = v130;
            v121 = *((_DWORD *)v5 + 77) + v137[0];
          }
        }
        v52 = (*((_BYTE *)v5 + 730) & 0x10) == 0;
        *((_DWORD *)v5 + 292) = -2;
        if ( !v52 )
        {
          v56 = *((_DWORD *)v5 + 74);
          if ( (unsigned int)(v56 - 1000001) <= 0x30D3E
            && !*(_DWORD *)(*((_QWORD *)v5 + 165) + 112LL)
            && *((_DWORD *)v5 + 77) >= v56 - 1000000 )
          {
LABEL_76:
            *((_QWORD *)v5 + 191) = 0;
            *((_QWORD *)v5 + 40) = 0xA00000003LL;
            goto LABEL_6;
          }
        }
        v7 = *((_DWORD *)v5 + 80);
        if ( v7 >= 0 )
          goto LABEL_4;
        if ( (unsigned __int8)ClpModel::hitMaximumIterations(v5) )
        {
LABEL_153:
          *((_DWORD *)v5 + 80) = 3;
          *((_QWORD *)v5 + 191) = 0;
          goto LABEL_6;
        }
        if ( v4 == 2 )
        {
          if ( *((int *)v5 + 337) < 0 )
            goto LABEL_153;
          if ( (*((_BYTE *)v5 + 730) & 8) == 0 || *(_DWORD *)(*((_QWORD *)v5 + 165) + 112LL) )
          {
            v55 = (***((__int64 (__fastcall ****)(_QWORD, __int64))v5 + 45))(*((_QWORD *)v5 + 45), 101);
            goto LABEL_70;
          }
        }
        else if ( (*((_BYTE *)v5 + 730) & 8) == 0 || *(_DWORD *)(*((_QWORD *)v5 + 165) + 112LL) )
        {
          goto LABEL_67;
        }
        if ( fabs(*((double *)v5 + 1)) > 1.0e30 )
          goto LABEL_76;
LABEL_67:
        v53 = *((int (__fastcall ****)(_QWORD, __int64))v5 + 45);
        v54 = **v53;
        if ( *((int *)v5 + 337) < 0 && v4 )
        {
          if ( v54(v53, 102) >= 0 )
          {
            *((_QWORD *)v5 + 191) = 0;
            *((_QWORD *)v5 + 40) = 0x6600000005LL;
            goto LABEL_6;
          }
          if ( *((int *)v5 + 327) <= 99 )
            ClpSimplexPrimal::perturb(v5, 0);
          v4 = 0;
          v55 = (***((__int64 (__fastcall ****)(_QWORD, __int64))v5 + 45))(*((_QWORD *)v5 + 45), 101);
        }
        else
        {
          v55 = v54(v53, 101);
        }
LABEL_70:
        if ( v55 >= 0 )
        {
          if ( v55 != 101 )
          {
            *((_QWORD *)v5 + 191) = 0;
            *((_QWORD *)v5 + 40) = 0x6500000005LL;
            goto LABEL_6;
          }
          ClpSimplexPrimal::unPerturb(v5);
LABEL_79:
          v7 = *((_DWORD *)v5 + 80);
          goto LABEL_80;
        }
        ClpSimplexPrimal::whileIterating(v5, v4 != 0);
        if ( *((int *)v5 + 288) >= 0 || v4 != 2 )
          goto LABEL_79;
        *((_DWORD *)v5 + 80) = 3;
        v7 = 3;
LABEL_80:
        v128 = 1;
      }
      *((_DWORD *)v5 + 80) = -1;
      ClpSimplex::originalModel(v5, v41);
      if ( *((int *)v5 + 288) < 0 && *((_DWORD *)v5 + 77) < v119 && v120 > 100 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v5 + 156) + 88LL))(*((_QWORD *)v5 + 156));
LABEL_55:
      v41 = nullptr;
      goto LABEL_56;
    }
    v12 = *((int *)this + 27);
    v13 = *((_QWORD *)this + 33);
    v14 = (_BYTE *)(v13 + v12);
    v15 = *((_DWORD *)this + 27);
    v16 = v12;
    v17 = -((_DWORD)v13 + (_DWORD)v12) & 0xF;
    v18 = v17 + 15;
    if ( (unsigned int)(v17 + 15) < 0x11 )
      v18 = 17;
    if ( v11 - 1 < v18 )
    {
      LODWORD(v38) = 0;
      v37 = 0;
    }
    else
    {
      if ( (_DWORD)v17 )
      {
        v19 = (*v14 & 7) == 1;
        if ( (_DWORD)v17 == 1 )
        {
          v20 = 1;
        }
        else
        {
          v19 += (*(_BYTE *)(v13 + v15 + 1) & 7) == 1;
          if ( (_DWORD)v17 == 2 )
          {
            v20 = 2;
          }
          else
          {
            v19 += (*(_BYTE *)(v13 + v15 + 2) & 7) == 1;
            if ( (_DWORD)v17 == 3 )
            {
              v20 = 3;
            }
            else
            {
              v19 += (*(_BYTE *)(v13 + v15 + 3) & 7) == 1;
              if ( (_DWORD)v17 == 4 )
              {
                v20 = 4;
              }
              else
              {
                v19 += (*(_BYTE *)(v13 + v15 + 4) & 7) == 1;
                if ( (_DWORD)v17 == 5 )
                {
                  v20 = 5;
                }
                else
                {
                  v19 += (*(_BYTE *)(v13 + v15 + 5) & 7) == 1;
                  if ( (_DWORD)v17 == 6 )
                  {
                    v20 = 6;
                  }
                  else
                  {
                    v19 += (*(_BYTE *)(v13 + v15 + 6) & 7) == 1;
                    if ( (_DWORD)v17 == 7 )
                    {
                      v20 = 7;
                    }
                    else
                    {
                      v19 += (*(_BYTE *)(v13 + v15 + 7) & 7) == 1;
                      if ( (_DWORD)v17 == 8 )
                      {
                        v20 = 8;
                      }
                      else
                      {
                        v19 += (*(_BYTE *)(v13 + v15 + 8) & 7) == 1;
                        if ( (_DWORD)v17 == 9 )
                        {
                          v20 = 9;
                        }
                        else
                        {
                          v19 += (*(_BYTE *)(v13 + v15 + 9) & 7) == 1;
                          if ( (_DWORD)v17 == 10 )
                          {
                            v20 = 10;
                          }
                          else
                          {
                            v19 += (*(_BYTE *)(v13 + v15 + 10) & 7) == 1;
                            if ( (_DWORD)v17 == 11 )
                            {
                              v20 = 11;
                            }
                            else
                            {
                              v19 += (*(_BYTE *)(v13 + v15 + 11) & 7) == 1;
                              if ( (_DWORD)v17 == 12 )
                              {
                                v20 = 12;
                              }
                              else
                              {
                                v19 += (*(_BYTE *)(v13 + v15 + 12) & 7) == 1;
                                if ( (_DWORD)v17 == 13 )
                                {
                                  v20 = 13;
                                }
                                else
                                {
                                  v19 += (*(_BYTE *)(v13 + v15 + 13) & 7) == 1;
                                  if ( (_DWORD)v17 == 14 )
                                  {
                                    v20 = 14;
                                  }
                                  else
                                  {
                                    v19 += (*(_BYTE *)(v13 + v15 + 14) & 7) == 1;
                                    v20 = 15;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v20 = 0;
        v19 = 0;
      }
      v21 = 0;
      v22 = v11 - v17;
      si128 = _mm_load_si128((const __m128i *)&xmmword_290800);
      v24 = (const __m128i *)(v16 + v17 + v13);
      v25 = (unsigned int)(v11 - v17) >> 4;
      v26 = 0;
      v27 = _mm_load_si128((const __m128i *)&xmmword_28D010);
      do
      {
        v28 = _mm_load_si128(v24);
        ++v26;
        ++v24;
        v29 = _mm_and_si128(_mm_cmpeq_epi8(_mm_and_si128(v28, si128), v27), v27);
        v30 = _mm_cmpgt_epi8((__m128i)0LL, v29);
        v31 = _mm_unpacklo_epi8(v29, v30);
        v32 = _mm_unpackhi_epi8(v29, v30);
        v33 = _mm_cmpgt_epi16((__m128i)0LL, v31);
        v34 = _mm_add_epi32(_mm_add_epi32(v21, _mm_unpacklo_epi16(v31, v33)), _mm_unpackhi_epi16(v31, v33));
        v35 = _mm_cmpgt_epi16((__m128i)0LL, v32);
        v21 = _mm_add_epi32(_mm_add_epi32(v34, _mm_unpacklo_epi16(v32, v35)), _mm_unpackhi_epi16(v32, v35));
      }
      while ( v25 > v26 );
      v36 = _mm_add_epi32(v21, _mm_srli_si128(v21, 8));
      v37 = _mm_cvtsi128_si32(_mm_add_epi32(v36, _mm_srli_si128(v36, 4))) + v19;
      LODWORD(v38) = (v22 & 0xFFFFFFF0) + v20;
      if ( v22 == (v22 & 0xFFFFFFF0) )
      {
LABEL_33:
        if ( v37 < v11 )
        {
          ClpSimplex::allSlackBasis(v5, 1);
          v137[0] = -10000;
          ClpSimplexPrimal::statusOfProblemInPrimal(
            v5,
            v137,
            1,
            (ClpSimplexPrimal *)((char *)v5 + 1408),
            1,
            v4,
            nullptr);
          v10 = *((_QWORD *)v5 + 165);
        }
        goto LABEL_35;
      }
    }
    v38 = (int)v38;
    do
    {
      v39 = (v14[v38++] & 7) == 1;
      v37 += v39;
    }
    while ( v11 > (int)v38 );
    goto LABEL_33;
  }
  v7 = *((_DWORD *)this + 80);
LABEL_4:
  *((_QWORD *)v5 + 191) = 0;
  if ( v7 == 1 && *((_DWORD *)v5 + 81) != 6 )
  {
    v57 = *((_QWORD *)v5 + 113);
    *((_QWORD *)v5 + 113) = 0;
    ClpSimplex::createRim(v5, 5, 0, 0);
    v58 = *((void **)v5 + 165);
    if ( v58 )
    {
      ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)v5 + 165));
      operator delete(v58);
    }
    v59 = (ClpNonLinearCost *)operator new(0x98u);
    ClpNonLinearCost::ClpNonLinearCost(v59, v5, 1);
    *((_QWORD *)v5 + 165) = v59;
    ClpNonLinearCost::checkInfeasibilities(v59, 0.0);
    v60 = *((_QWORD *)v5 + 165);
    *((_QWORD *)v5 + 112) = *(_QWORD *)(v60 + 32);
    *((_DWORD *)v5 + 308) = *(_DWORD *)(v60 + 112);
    ClpSimplex::computeDuals(v5, nullptr);
    *((_QWORD *)v5 + 113) = v57;
  }
LABEL_6:
  *((_DWORD *)v5 + 84) &= ~0x20000u;
  ClpSimplexPrimal::unflag(v5);
  ClpSimplex::finish(v5, a3);
  ClpDataSave::ClpDataSave((ClpDataSave *)v137, i);
  ClpSimplex::restoreData();
  ClpDataSave::~ClpDataSave((ClpDataSave *)v137);
  v8 = *((_DWORD *)v5 + 80);
  ClpDataSave::~ClpDataSave(i);
  return v8;
}

