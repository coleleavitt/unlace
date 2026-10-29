__int64 __fastcall ClpSimplex::startup(ClpSimplex *this, int a2, int a3)
{
  int v6; // r12d
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(ClpPackedMatrix *); // rax
  int v9; // eax
  bool v10; // zf
  __int128 v11; // xmm0
  char Rim; // r14
  __int64 v13; // rax
  CoinFactorization *v14; // rdi
  __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rcx
  __m128i *v18; // rax
  __int128 v19; // xmm0
  int v20; // eax
  __int64 result; // rax
  int v22; // edi
  unsigned int v23; // r8d
  int v24; // edi
  int v25; // ebp
  int v26; // r11d
  __m128i *v27; // rdx
  unsigned int v28; // esi
  __m128i si128; // xmm14
  __m128i v30; // xmm13
  __m128i v31; // xmm12
  __m128i v32; // xmm0
  __m128i v33; // xmm11
  __m128i v34; // xmm10
  __m128i v35; // xmm9
  __m128i v36; // xmm2
  __m128i v37; // xmm4
  __m128i v38; // xmm2
  __m128i v39; // xmm5
  __m128i v40; // xmm7
  __m128i v41; // xmm3
  __m128i v42; // xmm1
  __m128i v43; // xmm5
  __m128i v44; // xmm15
  __m128i v45; // xmm7
  __m128i v46; // xmm3
  __m128i v47; // xmm15
  __m128i v48; // xmm8
  __m128i v49; // xmm6
  __m128i v50; // xmm15
  __m128i v51; // xmm8
  __m128i v52; // xmm4
  __m128i v53; // xmm8
  __m128i v54; // xmm7
  __m128i v55; // xmm2
  __m128i v56; // xmm7
  __m128i v57; // xmm3
  __m128i v58; // xmm5
  __m128i v59; // xmm3
  __m128i v60; // xmm15
  __m128i v61; // xmm1
  __m128i v62; // xmm15
  unsigned int v63; // esi
  unsigned int *v64; // rdx
  ClpNonLinearCost *v65; // rbp
  __int64 v66; // rax
  __int64 v67; // rax
  void (__fastcall ***v68)(_QWORD); // rdi
  int v69; // eax
  bool v70; // dl
  unsigned __int64 v71; // rdi
  _QWORD *v72; // r15
  int v73; // r10d
  int v74; // edi
  int v75; // edx
  int v76; // r9d
  unsigned __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // r10
  int v80; // esi
  int v81; // eax
  void *v82; // rcx
  __int64 v83; // rsi
  __int64 v84; // rdi
  double *v85; // rdx
  _QWORD *v86; // rdx
  __int64 v87; // rdi
  CoinMessageHandler *v88; // rax
  __int64 v89; // rax
  int *v90; // [rsp+0h] [rbp-68h]
  int v91; // [rsp+0h] [rbp-68h]
  int v92; // [rsp+8h] [rbp-60h]
  int v93; // [rsp+Ch] [rbp-5Ch]
  int v94[2]; // [rsp+18h] [rbp-50h] BYREF
  double v95[9]; // [rsp+20h] [rbp-48h] BYREF

  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
    v6 = (*((_DWORD *)this + 79) & 0x202) == 514;
  v7 = *((_QWORD **)this + 24);
  if ( !v7
    || ((v8 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*v7 + 16LL), v8 != ClpPackedMatrix::getNumElements)
      ? (v9 = ((__int64 (*)(void))v8)())
      : (v9 = *(_DWORD *)(v7[11] + 72LL)),
        !v9 && *(int *)(*((_QWORD *)this + 20) + 16LL) <= 1) )
  {
    *((_DWORD *)this + 80) = ClpModel::emptyProblem(this, v94, v95, ((*((_DWORD *)this + 84) >> 15) ^ 1) & 1);
    if ( (a3 & 1) == 0 )
      goto LABEL_32;
    v17 = *((int *)this + 26);
    if ( !(_DWORD)v17 )
      goto LABEL_32;
    v18 = *((__m128i **)this + 157);
    if ( !v18 )
    {
      if ( v17 > 0x1FFFFFFFFFFFFFFELL )
LABEL_131:
        __cxa_throw_bad_array_new_length();
      v18 = (__m128i *)operator new[](4 * v17);
      LODWORD(v17) = *((_DWORD *)this + 26);
      *((_QWORD *)this + 157) = v18;
      if ( !(_DWORD)v17 )
        goto LABEL_32;
    }
    v22 = v17 + 7;
    v23 = *((_DWORD *)this + 27);
    if ( (v17 & 0x80000000) == 0LL )
      v22 = v17;
    v24 = v22 >> 3;
    v25 = v24;
    if ( v24 <= 0 )
    {
LABEL_48:
      switch ( (int)v17 % 8 )
      {
        case 1:
          goto LABEL_60;
        case 2:
          goto LABEL_59;
        case 3:
          goto LABEL_58;
        case 4:
          goto LABEL_57;
        case 5:
          goto LABEL_56;
        case 6:
          goto LABEL_55;
        case 7:
          v18[1].m128i_i32[2] = v23 + 6;
LABEL_55:
          v18[1].m128i_i32[1] = v23 + 5;
LABEL_56:
          v18[1].m128i_i32[0] = v23 + 4;
LABEL_57:
          v18->m128i_i32[3] = v23 + 3;
LABEL_58:
          v18->m128i_i32[2] = v23 + 2;
LABEL_59:
          v18->m128i_i32[1] = v23 + 1;
LABEL_60:
          v18->m128i_i32[0] = v23;
          break;
        default:
          break;
      }
LABEL_32:
      v19 = *(_OWORD *)v95;
      *((_DWORD *)this + 306) = v94[0];
      v20 = v94[1];
      *(_OWORD *)((char *)this + 888) = v19;
      *((_DWORD *)this + 308) = v20;
      return 2;
    }
    v26 = v24 - 1;
    if ( v24 - 1 <= 2 )
    {
      v64 = (unsigned int *)v18;
      v63 = *((_DWORD *)this + 27);
    }
    else
    {
      v27 = v18;
      v28 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_290830);
      v30 = _mm_load_si128((const __m128i *)&xmmword_289C00);
      v31 = _mm_load_si128((const __m128i *)&xmmword_28CCB0);
      v32 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v23), 0), (__m128i)xmmword_290820);
      v33 = _mm_load_si128((const __m128i *)&xmmword_290840);
      v34 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
      v35 = _mm_load_si128((const __m128i *)&xmmword_290850);
      do
      {
        ++v28;
        v36 = _mm_add_epi32(v32, v34);
        v27 += 8;
        v37 = _mm_unpacklo_epi32(v32, v36);
        v38 = _mm_unpackhi_epi32(v32, v36);
        v39 = _mm_add_epi32(v32, v30);
        v40 = _mm_add_epi32(v32, v35);
        v41 = _mm_add_epi32(v32, v31);
        v42 = _mm_unpackhi_epi32(v39, v40);
        v43 = _mm_unpacklo_epi32(v39, v40);
        v44 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290860), v32);
        v45 = _mm_unpacklo_epi32(v41, v44);
        v46 = _mm_unpackhi_epi32(v41, v44);
        v47 = _mm_add_epi32(v32, v33);
        v48 = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_290870), v32);
        v49 = _mm_unpackhi_epi32(v47, v48);
        v32 = _mm_add_epi32(v32, si128);
        v50 = _mm_unpacklo_epi32(v47, v48);
        v51 = v37;
        v52 = _mm_unpackhi_epi32(v37, v45);
        v53 = _mm_unpacklo_epi32(v51, v45);
        v54 = v38;
        v55 = _mm_unpackhi_epi32(v38, v46);
        v56 = _mm_unpacklo_epi32(v54, v46);
        v57 = v43;
        v58 = _mm_unpackhi_epi32(v43, v50);
        v59 = _mm_unpacklo_epi32(v57, v50);
        v60 = v42;
        v61 = _mm_unpackhi_epi32(v42, v49);
        v62 = _mm_unpacklo_epi32(v60, v49);
        v27[-8] = _mm_unpacklo_epi32(v53, v59);
        v27[-6] = _mm_unpacklo_epi32(v52, v58);
        v27[-7] = _mm_unpackhi_epi32(v53, v59);
        v27[-4] = _mm_unpacklo_epi32(v56, v62);
        v27[-5] = _mm_unpackhi_epi32(v52, v58);
        v27[-3] = _mm_unpackhi_epi32(v56, v62);
        v27[-2] = _mm_unpacklo_epi32(v55, v61);
        v27[-1] = _mm_unpackhi_epi32(v55, v61);
      }
      while ( v28 < (unsigned int)v24 >> 2 );
      v25 = v24 - (v24 & 0xFFFFFFFC);
      v63 = v23 + 8 * (v24 & 0xFFFFFFFC);
      v64 = (unsigned int *)&v18[2 * (v24 & 0xFFFFFFFC)];
      if ( (v24 & 0xFFFFFFFC) == v24 )
      {
LABEL_47:
        v23 += 8 * v26 + 8;
        v18 += 2 * v26 + 2;
        goto LABEL_48;
      }
    }
    *v64 = v63;
    v64[1] = v63 + 1;
    v64[2] = v63 + 2;
    v64[3] = v63 + 3;
    v64[4] = v63 + 4;
    v64[5] = v63 + 5;
    v64[6] = v63 + 6;
    v64[7] = v63 + 7;
    if ( v25 != 1 )
    {
      v64[8] = v63 + 8;
      v64[9] = v63 + 9;
      v64[10] = v63 + 10;
      v64[11] = v63 + 11;
      v64[12] = v63 + 12;
      v64[13] = v63 + 13;
      v64[14] = v63 + 14;
      v64[15] = v63 + 15;
      if ( v25 != 2 )
      {
        v64[16] = v63 + 16;
        v64[17] = v63 + 17;
        v64[18] = v63 + 18;
        v64[19] = v63 + 19;
        v64[20] = v63 + 20;
        v64[21] = v63 + 21;
        v64[23] = v63 + 23;
        v64[22] = v63 + 22;
      }
    }
    goto LABEL_47;
  }
  v10 = *((_DWORD *)this + 80) == 10;
  *((_DWORD *)this + 292) = -1;
  v11 = *(_OWORD *)((char *)this + 24);
  *((_DWORD *)this + 288) = -1;
  *((_DWORD *)this + 290) = -1;
  *((_DWORD *)this + 81) = 0;
  *(_OWORD *)((char *)this + 872) = v11;
  if ( !v10 )
    *((_DWORD *)this + 77) = 0;
  Rim = ClpSimplex::createRim(this, 63, 1, a3);
  if ( !Rim )
    return 2;
  v13 = *((_QWORD *)this + 158);
  v14 = *(CoinFactorization **)(v13 + 8);
  if ( **((int **)this + 157) < 0 )
  {
    if ( !v14 )
    {
      v92 = 0;
      v6 = 0;
      goto LABEL_18;
    }
    v92 = *((_DWORD *)v14 + 217);
LABEL_15:
    *(_QWORD *)&v11 = 0x3D3C25C268497682LL;
    v6 = 0;
    CoinFactorization::zeroTolerance(v14, 1.0e-13);
    if ( (*((_BYTE *)this + 336) & 8) == 0 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
      if ( v15 )
        *(_DWORD *)(v15 + 868) = -v92;
    }
    goto LABEL_18;
  }
  if ( v14 )
  {
    v92 = *((_DWORD *)v14 + 217);
    if ( v6 && *((_DWORD *)v14 + 8) == *((_DWORD *)this + 26) )
      goto LABEL_18;
    goto LABEL_15;
  }
  if ( v6 )
  {
    v92 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(v13 + 16) + 36LL) != *((_DWORD *)this + 26) )
      v6 = 0;
  }
  else
  {
    v92 = 0;
  }
LABEL_18:
  if ( a2 && *((int *)this + 327) <= 99 )
  {
    if ( *((int *)this + 325) > 0 )
    {
      if ( *((_QWORD *)this + 165) )
        goto LABEL_22;
      goto LABEL_53;
    }
    if ( !*((_DWORD *)this + 325) )
      goto LABEL_22;
    ClpSimplexDual::perturb(this);
  }
  if ( !*((_QWORD *)this + 165) && *((int *)this + 325) > 0 )
  {
LABEL_53:
    v65 = (ClpNonLinearCost *)operator new(0x98u);
    ClpNonLinearCost::ClpNonLinearCost(v65, this, 1);
    *((_QWORD *)this + 165) = v65;
  }
LABEL_22:
  *((_DWORD *)this + 80) = -1;
  if ( v6 )
  {
    if ( (*((_BYTE *)this + 731) & 1) == 0 )
    {
      *((_DWORD *)this + 308) = 1;
      *((_DWORD *)this + 306) = 1;
    }
    (*(void (__fastcall **)(_QWORD, ClpSimplex *, __int64, _QWORD))(**((_QWORD **)this + 24) + 464LL))(
      *((_QWORD *)this + 24),
      this,
      1,
      0);
    goto LABEL_66;
  }
  while ( 1 )
  {
    v16 = ClpSimplex::internalFactorize(this, a2 != 0 ? 0xA : 0);
    if ( v16 < 0 )
      return 1;
    if ( !v16 )
      break;
    if ( *((_DWORD *)this + 26) + 1 == v16 )
    {
LABEL_75:
      v69 = ClpSimplex::gutsOfSolution(this, nullptr, nullptr, a2 != 0);
      *(_QWORD *)&v11 = *((_QWORD *)this + 95);
      v70 = *(double *)&v11 > 10.0;
      if ( *((int *)this + 325) > 0 )
      {
        *(double *)&v11 = 10.0 * *((double *)this + 113);
        if ( *((double *)this + 96) > *(double *)&v11 )
          v70 = Rim;
      }
      if ( v69 || !v70 )
      {
        v6 += v69;
LABEL_93:
        if ( !v69 )
          goto LABEL_64;
      }
      else
      {
        v71 = *((int *)this + 26);
        if ( v71 > 0x1FFFFFFFFFFFFFFELL )
          goto LABEL_131;
        v90 = (int *)operator new[](4 * v71);
        v72 = *(_QWORD **)(*((_QWORD *)this + 132) + 8LL);
        memset(v72, 0, 8LL * *((int *)this + 26));
        *(_QWORD *)&v11 = 0xBFF0000000000000LL;
        ClpModel::times(this, -1.0, *((const double **)this + 152), (double *)v72);
        v73 = *((_DWORD *)this + 26);
        if ( v73 > 0 )
        {
          v74 = 0;
          v75 = 0;
          v76 = 0;
          v77 = 0;
          do
          {
            v78 = *(int *)(*((_QWORD *)this + 157) + v77);
            if ( *((_DWORD *)this + 27) > (int)v78 )
            {
              *(_QWORD *)&v11 = fabs(*(double *)(*((_QWORD *)this + 151) + 2 * v77) + *(double *)&v72[v77 / 4]);
              if ( *(double *)&v11 > 0.0001 )
              {
                v79 = v76++;
                v90[v79] = v78;
                v72[v79] = v11;
                if ( (*(_BYTE *)(*((_QWORD *)this + 33) + v78) & 7) == 1 )
                  ++v74;
                v73 = *((_DWORD *)this + 26);
              }
            }
            ++v75;
            v77 += 4LL;
          }
          while ( v75 < v73 );
          if ( v74 )
          {
            v93 = v76;
            CoinSort_2<double,int>(v72, &v72[v76], v90);
            v81 = 1000;
            v82 = v90;
            if ( v93 <= 1000 )
              v81 = v93;
            if ( v93 )
            {
              v83 = 0;
              do
              {
                v84 = v90[v83];
                *(_BYTE *)(v84 + *((_QWORD *)this + 33)) = *(_BYTE *)(v84 + *((_QWORD *)this + 33)) & 0xF8 | 4;
                v85 = (double *)(*((_QWORD *)this + 150) + 8 * v84);
                *(_QWORD *)&v11 = fabs(*v85);
                if ( *(double *)&v11 > 1.0e10 )
                {
                  *(_QWORD *)&v11 = *(_QWORD *)(*((_QWORD *)this + 126) + 8 * v84);
                  if ( *(double *)&v11 >= 0.0
                    && (*(_QWORD *)&v11 = *(_QWORD *)(*((_QWORD *)this + 123) + 8 * v84), *(double *)&v11 <= 0.0) )
                  {
                    *v85 = 0.0;
                  }
                  else
                  {
                    *(_QWORD *)v85 = v11;
                  }
                }
                ++v83;
              }
              while ( v81 > (int)v83 );
            }
            v80 = *((_DWORD *)this + 26);
            v6 += v81;
            if ( v80 )
            {
LABEL_113:
              if ( v80 / 8 > 0 )
              {
                v86 = v72;
                v87 = (unsigned int)(v80 / 8 - 1);
                do
                {
                  *v86 = 0;
                  v86[1] = 0;
                  v86 += 8;
                  *(v86 - 6) = 0;
                  *(v86 - 5) = 0;
                  *(v86 - 4) = 0;
                  *(v86 - 3) = 0;
                  *(v86 - 2) = 0;
                  *(v86 - 1) = 0;
                }
                while ( v86 != &v72[8 * v87 + 8] );
                v72 += 8 * (int)v87 + 8;
              }
              switch ( v80 % 8 )
              {
                case 1:
                  goto LABEL_124;
                case 2:
                  goto LABEL_123;
                case 3:
                  goto LABEL_122;
                case 4:
                  goto LABEL_121;
                case 5:
                  goto LABEL_120;
                case 6:
                  goto LABEL_119;
                case 7:
                  v72[6] = 0;
LABEL_119:
                  v72[5] = 0;
LABEL_120:
                  v72[4] = 0;
LABEL_121:
                  v72[3] = 0;
LABEL_122:
                  v72[2] = 0;
LABEL_123:
                  v72[1] = 0;
LABEL_124:
                  *v72 = 0;
                  break;
                default:
                  break;
              }
            }
            v91 = v81;
            operator delete[](v82);
            v69 = v91;
            goto LABEL_93;
          }
        }
        ++v6;
        ClpSimplex::allSlackBasis(this, a2 == 0);
        v80 = *((_DWORD *)this + 26);
        v81 = 1;
        v82 = v90;
        if ( v80 )
          goto LABEL_113;
        operator delete[](v90);
      }
    }
    else
    {
      v6 += v16;
      (*(void (__fastcall **)(_QWORD, ClpSimplex *, __int64, _QWORD))(**((_QWORD **)this + 24) + 464LL))(
        *((_QWORD *)this + 24),
        this,
        1,
        0);
    }
  }
  if ( (*((_BYTE *)this + 337) & 2) == 0 || *((_DWORD *)this + 26) == -1 )
    goto LABEL_75;
  *((_DWORD *)this + 308) = 1;
LABEL_64:
  if ( v6 )
  {
    v88 = (CoinMessageHandler *)CoinMessageHandler::message(
                                  *((CoinMessageHandler **)this + 43),
                                  20,
                                  (ClpSimplex *)((char *)this + 416));
    v89 = CoinMessageHandler::operator<<(v88);
    CoinMessageHandler::operator<<(v89, 0, *(double *)&v11);
  }
LABEL_66:
  v66 = *(_QWORD *)(*((_QWORD *)this + 158) + 8LL);
  if ( v66 )
    *(_DWORD *)(v66 + 868) = v92;
  if ( !*((_DWORD *)this + 308) && !(*((_DWORD *)this + 306) | a2) )
  {
    v67 = *((_QWORD *)this + 165);
    if ( !v67 || !*(_DWORD *)(v67 + 112) )
      *((_DWORD *)this + 80) = 0;
  }
  v68 = *((void (__fastcall ****)(_QWORD))this + 161);
  result = 0;
  *((_DWORD *)this + 320) = 0;
  if ( v68 )
  {
    (**v68)(v68);
    return 0;
  }
  return result;
}

