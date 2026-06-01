CoinPresolveMatrix *__fastcall slack_doubleton_action::presolve(
        slack_doubleton_action *this,
        CoinPresolveMatrix *a2,
        const CoinPresolveAction *a3,
        bool *a4)
{
  __int64 v4; // rax
  int v5; // ebp
  int *v6; // r14
  __m128d v8; // xmm2
  __int64 v9; // rax
  int v10; // ebp
  double v11; // xmm15_8
  __int64 v12; // rsi
  _DWORD *v13; // r10
  int v14; // edx
  __int64 v15; // rax
  double v16; // xmm3_8
  __int64 v17; // xmm4_8
  __int64 v18; // r12
  __int64 v19; // r9
  double *v20; // rbx
  double v21; // xmm5_8
  double *v22; // r8
  __m128i *v23; // rcx
  double v24; // xmm1_8
  double *v25; // rdi
  double v26; // xmm0_8
  double v27; // xmm5_8
  double v28; // xmm5_8
  double v29; // xmm3_8
  double v30; // xmm1_8
  double v31; // xmm0_8
  double v32; // xmm3_8
  __m128d v33; // xmm14
  double v34; // xmm4_8
  double v35; // xmm4_8
  __m128d v36; // xmm14
  double v37; // xmm5_8
  __m128d v38; // xmm14
  __m128d v39; // xmm3
  __m128d v40; // xmm5
  __m128d v41; // xmm6
  __m128d v42; // xmm4
  double v43; // xmm1_8
  __int64 v44; // xmm0_8
  __int64 v45; // r10
  int *v46; // rax
  int v47; // r11d
  __int64 v48; // rcx
  _DWORD *v49; // r10
  __int64 v50; // r8
  int v51; // ebp
  _DWORD *v52; // rcx
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v57; // rcx
  int v58; // edi
  __int64 v59; // rax
  char *v60; // rdx
  char v61; // al
  bool v62; // r8
  int v63; // edi
  double *v64; // r9
  double v65; // xmm3_8
  double v66; // xmm0_8
  double v67; // xmm1_8
  __m128i *v68; // rax
  const __m128i *v69; // rdx
  __m128i *v70; // r12
  __m128i v71; // xmm0
  __int64 v72; // rax
  CoinPresolveMatrix *v73; // rbx
  const CoinPresolveAction *v74; // r8
  _BYTE *v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  double v79; // xmm3_8
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdi
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rdx
  double v86; // xmm0_8
  CoinMessageHandler *v87; // rbp
  CoinMessageHandler *v88; // rax
  CoinMessageHandler *v89; // rax
  CoinMessageHandler *v90; // rax
  __int64 v91; // rax
  __m128d v92; // xmm6
  __m128d v93; // xmm5
  double v94; // [rsp+0h] [rbp-118h]
  double *v95; // [rsp+0h] [rbp-118h]
  __int64 v96; // [rsp+8h] [rbp-110h]
  int *v97; // [rsp+10h] [rbp-108h]
  __int64 v98; // [rsp+18h] [rbp-100h]
  __int64 v99; // [rsp+20h] [rbp-F8h]
  __int64 v100; // [rsp+28h] [rbp-F0h]
  int v101; // [rsp+30h] [rbp-E8h]
  int v102; // [rsp+34h] [rbp-E4h]
  __m128i *v103; // [rsp+38h] [rbp-E0h]
  __int64 v104; // [rsp+40h] [rbp-D8h]
  __int64 v105; // [rsp+48h] [rbp-D0h]
  __int64 v106; // [rsp+50h] [rbp-C8h]
  __int64 v107; // [rsp+58h] [rbp-C0h]
  __int64 v108; // [rsp+60h] [rbp-B8h]
  __int64 v109; // [rsp+68h] [rbp-B0h]
  __int64 v110; // [rsp+70h] [rbp-A8h]
  __int64 v111; // [rsp+78h] [rbp-A0h]
  __int64 v112; // [rsp+80h] [rbp-98h]
  __int64 v113; // [rsp+90h] [rbp-88h]
  CoinPresolveMatrix *v114; // [rsp+98h] [rbp-80h]
  __int64 v115; // [rsp+A0h] [rbp-78h]
  unsigned int v117; // [rsp+B0h] [rbp-68h]
  int v118; // [rsp+B4h] [rbp-64h]
  __int64 v119; // [rsp+B8h] [rbp-60h]
  _BYTE v120[88]; // [rsp+C0h] [rbp-58h] BYREF

  v4 = *((_QWORD *)this + 8);
  *(_BYTE *)a3 = 0;
  v107 = v4;
  v100 = *((_QWORD *)this + 7);
  v110 = *((_QWORD *)this + 5);
  v111 = *((_QWORD *)this + 6);
  v104 = *((_QWORD *)this + 11);
  v105 = *((_QWORD *)this + 12);
  v98 = *((_QWORD *)this + 37);
  v106 = *((_QWORD *)this + 38);
  v99 = *((_QWORD *)this + 35);
  v96 = *((_QWORD *)this + 36);
  v108 = *((_QWORD *)this + 13);
  v109 = *((_QWORD *)this + 14);
  v5 = *((_DWORD *)this + 104);
  v6 = *((int **)this + 51);
  v112 = *((_QWORD *)this + 25);
  v94 = *((double *)this + 17);
  v119 = *((_QWORD *)this + 22);
  v113 = *((_QWORD *)this + 20);
  v115 = *((_QWORD *)this + 39);
  v118 = *((_DWORD *)this + 109) & 0x4000;
  if ( (unsigned __int64)v5 > 0x2AAAAAAAAAAAAAALL )
    __cxa_throw_bad_array_new_length();
  v103 = (__m128i *)operator new[](48LL * v5);
  v114 = *((CoinPresolveMatrix **)this + 58);
  if ( v5 <= 0 )
  {
LABEL_103:
    v73 = a2;
    goto LABEL_79;
  }
  v8 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289DB0);
  v117 = 0;
  v9 = (__int64)&v6[v5 - 1 + 1];
  v10 = 0;
  v97 = (int *)v9;
  v11 = v94;
  do
  {
    v12 = *v6;
    v13 = (_DWORD *)(v96 + 4 * v12);
    v14 = *v6;
    if ( *v13 != 1 )
      goto LABEL_63;
    v15 = *(int *)(v99 + 4 * v12);
    v16 = *(double *)(v98 + 8 * v15);
    v17 = *(_QWORD *)&v16 & *(_QWORD *)&v8.m128d_f64[0];
    if ( COERCE_DOUBLE(*(_QWORD *)&v16 & *(_QWORD *)&v8.m128d_f64[0]) < 1.0e-10 )
      goto LABEL_63;
    v18 = *(int *)(v106 + 4 * v15);
    v19 = 8 * v18;
    v102 = *(_DWORD *)(v106 + 4 * v15);
    v20 = (double *)(v105 + 8 * v18);
    v21 = *(double *)(8 * v18 + v104);
    v95 = (double *)(8 * v18 + v104);
    if ( v11 > COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v20 - v21) & *(_QWORD *)&v8.m128d_f64[0]) )
      goto LABEL_63;
    v22 = (double *)(v108 + 8 * v12);
    v23 = &v103[3 * v10];
    v101 = v10 + 1;
    v24 = *v22;
    v25 = (double *)(8 * v12 + v109);
    v26 = *v25;
    *(double *)v23->m128i_i64 = v21;
    v23[2].m128i_i32[2] = v18;
    v27 = *v20;
    v23[2].m128i_i32[3] = v12;
    *(double *)&v23->m128i_i64[1] = v27;
    v23[1].m128i_i64[0] = *(__int64 *)v22;
    v28 = *v25;
    *(double *)v23[2].m128i_i64 = v16;
    *(double *)&v23[1].m128i_i64[1] = v28;
    if ( v16 < 0.0 )
    {
      v29 = -v26;
      v26 = -v24;
      v24 = v29;
    }
    if ( v24 <= -1.797693134862316e298 || (v30 = v24 / *(double *)&v17, v30 <= -1.797693134862316e298) )
    {
      v30 = -1.797693134862316e308;
      if ( v26 > 1.797693134862316e298 )
        goto LABEL_81;
    }
    else
    {
      if ( v30 != 0.0
        && *((double *)this + 42) >= COERCE_DOUBLE(*(_QWORD *)&v30 & *(_QWORD *)&v8.m128d_f64[0])
        && *(double *)&v17 > 1.0 )
      {
        goto LABEL_63;
      }
      if ( v26 > 1.797693134862316e298 )
      {
LABEL_81:
        v31 = 1.797693134862316e308;
        goto LABEL_15;
      }
    }
    v31 = v26 / *(double *)&v17;
    if ( v31 > 1.797693134862316e298 )
      goto LABEL_81;
    if ( v31 != 0.0
      && *((double *)this + 42) >= COERCE_DOUBLE(*(_QWORD *)&v31 & *(_QWORD *)&v8.m128d_f64[0])
      && *(double *)&v17 > 1.0 )
    {
      goto LABEL_63;
    }
LABEL_15:
    v32 = *v95;
    if ( v30 > *v95 && v30 > -1.0e100 )
    {
      if ( !*(_BYTE *)(v115 + v18) )
        goto LABEL_99;
      v33.m128d_f64[0] = v30 + 0.5;
      v34 = v30 + 0.5;
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30 + 0.5) & *(_QWORD *)&v8.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v93 = 0;
        v93.m128d_f64[0] = (double)(int)v33.m128d_f64[0];
        *(_QWORD *)&v34 = COERCE_UNSIGNED_INT64(
                            v93.m128d_f64[0]
                          - COERCE_DOUBLE(
                              COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v93, v33).m128d_f64[0]))
                            & 0x3FF0000000000000LL))
                        | ~*(_QWORD *)&v8.m128d_f64[0] & *(_QWORD *)&v33.m128d_f64[0];
      }
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30 - v34) & *(_QWORD *)&v8.m128d_f64[0]) >= 0.000001
        || (v30 = v34, v34 > v32) )
      {
LABEL_99:
        v32 = v30;
        *v95 = v30;
      }
    }
    v35 = *v20;
    if ( *v20 > v31 && v31 < 1.0e100 )
    {
      if ( !*(_BYTE *)(v115 + v18) )
        goto LABEL_100;
      v36.m128d_f64[0] = v31 + 0.5;
      v37 = v31 + 0.5;
      if ( fabs(v31 + 0.5) < 4.503599627370496e15 )
      {
        v92 = 0;
        v92.m128d_f64[0] = (double)(int)v36.m128d_f64[0];
        *(_QWORD *)&v37 = COERCE_UNSIGNED_INT64(
                            v92.m128d_f64[0]
                          - COERCE_DOUBLE(
                              COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v92, v36).m128d_f64[0]))
                            & 0x3FF0000000000000LL))
                        | *(_QWORD *)&v36.m128d_f64[0] & 0x8000000000000000LL;
      }
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31 - v37) & *(_QWORD *)&v8.m128d_f64[0]) >= 0.000001
        || (v31 = v37, v35 > v37) )
      {
LABEL_100:
        *v20 = v31;
        v35 = v31;
        v32 = *v95;
      }
    }
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35 - v32) & *(_QWORD *)&v8.m128d_f64[0]) < 1.0e-12 )
      *((_DWORD *)v114 + (int)v117++) = v102;
    if ( v30 > v31 )
    {
      if ( *((double *)this + 42) + v31 < v30 && !v118 )
      {
        *((_DWORD *)this + 86) |= 1u;
        v87 = *((CoinMessageHandler **)this + 26);
        CoinMessages::CoinMessages((CoinMessages *)v120, (slack_doubleton_action *)((char *)this + 224));
        v88 = (CoinMessageHandler *)CoinMessageHandler::message(v87, 15, (const CoinMessages *)v120);
        v89 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v88);
        v90 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v89);
        v91 = CoinMessageHandler::operator<<(v90);
        CoinMessageHandler::operator<<(v91, 0, v31);
        CoinMessages::~CoinMessages((CoinMessages *)v120);
        goto LABEL_103;
      }
      v38 = (__m128d)0x3FE0000000000000uLL;
      v38.m128d_f64[0] = v30 + 0.5;
      v39 = v38;
      if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30 + 0.5) & *(_QWORD *)&v8.m128d_f64[0]) < 4.503599627370496e15 )
      {
        v40 = 0;
        v40.m128d_f64[0] = (double)(int)v38.m128d_f64[0];
        v40.m128d_f64[0] = v40.m128d_f64[0]
                         - COERCE_DOUBLE(
                             COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v40, v38).m128d_f64[0]))
                           & 0x3FF0000000000000LL);
        v39 = _mm_or_pd(v40, _mm_andn_pd(v8, v38));
      }
      v41.m128d_f64[1] = v39.m128d_f64[1];
      v42.m128d_f64[0] = *((double *)this + 42) + *((double *)this + 42);
      v41.m128d_f64[0] = v39.m128d_f64[0] - v30;
      v43 = _mm_cmpge_sd(_mm_and_pd(v41, v8), v42).m128d_f64[0];
      v44 = *(_QWORD *)&v31 & *(_QWORD *)&v43 | ~*(_QWORD *)&v43 & *(_QWORD *)&v39.m128d_f64[0];
      *(_QWORD *)v95 = v44;
      *(_QWORD *)v20 = v44;
    }
    *v13 = 0;
    v45 = *((_QWORD *)this + 33);
    v46 = (int *)(v45 + 8 * v12);
    v47 = *v46;
    v48 = v46[1];
    if ( *v46 >= 0 )
      *(_DWORD *)(v45 + 8LL * v47 + 4) = v48;
    if ( (int)v48 >= 0 )
      *(_DWORD *)(v45 + 8 * v48) = v47;
    *(_QWORD *)v46 = 0xFC06BF56FC06BF56LL;
    *v22 = 0.0;
    *v25 = 0.0;
    v49 = (_DWORD *)(v111 + 4 * v18);
    v50 = *(int *)(4 * v18 + v110);
    v51 = v50 + *v49;
    v52 = (_DWORD *)(4 * v50 + v100);
    if ( (int)v50 >= v51 || v14 == *v52 )
    {
      v53 = *(int *)(4 * v18 + v110);
      v55 = v100;
    }
    else
    {
      v53 = v50 + 1;
      v54 = v100 + 4 * v50 + 4;
      while ( 1 )
      {
        v52 = (_DWORD *)v54;
        if ( v100 + 4 * ((unsigned int)(*v49 - 1) + v50) + 4 == v54 )
          break;
        v54 += 4;
        if ( v14 == *v52 )
          break;
        ++v53;
      }
      v55 = v100;
    }
    *v52 = *(_DWORD *)(v55 + 4LL * v51 - 4);
    *(_QWORD *)(v107 + 8 * v53) = *(_QWORD *)(v107 + 8LL * v51 - 8);
    if ( (*v49)-- == 1 )
    {
      v57 = *((_QWORD *)this + 32);
      v58 = *(_DWORD *)(v57 + 8 * v18);
      v59 = *(int *)(v57 + v19 + 4);
      if ( v58 >= 0 )
        *(_DWORD *)(v57 + 8LL * v58 + 4) = v59;
      if ( (int)v59 >= 0 )
        *(_DWORD *)(v57 + 8 * v59) = v58;
      *(_QWORD *)(v57 + 8 * v18) = 0xFC06BF56FC06BF56LL;
    }
    else
    {
      v76 = (_BYTE *)(v18 + *((_QWORD *)this + 45));
      if ( (*v76 & 1) == 0 )
      {
        *v76 |= 1u;
        v77 = *((int *)this + 98);
        v78 = *((_QWORD *)this + 48);
        *((_DWORD *)this + 98) = v77 + 1;
        *(_DWORD *)(v78 + 4 * v77) = v102;
      }
    }
    v10 = v101;
    if ( v112 )
    {
      v60 = (char *)(v18 + *((_QWORD *)this + 24));
      v61 = *v60;
      v62 = (*v60 & 7) == 1;
      v63 = 2 * v62;
      if ( (*(_BYTE *)(*((_QWORD *)this + 25) + v12) & 7) != 1 )
        v62 = 0;
      v64 = (double *)(v113 + v19);
      v65 = *v95;
      v66 = *v64;
      if ( *v95 + v11 < *v64 )
      {
        v79 = *v20;
        if ( v66 < *v20 - v11 )
        {
          v67 = 0.0;
        }
        else
        {
          *v64 = v79;
          v67 = v79 - v66;
          *v60 = *v60 & 0xF8 | 2;
          if ( !v62 )
            goto LABEL_86;
LABEL_59:
          v60 = (char *)(v18 + *((_QWORD *)this + 24));
          v61 = *v60;
        }
        *v60 = v61 & 0xF8 | 1;
      }
      else
      {
        *v64 = v65;
        v67 = v65 - v66;
        *v60 = *v60 & 0xF8 | 3;
        if ( v62 )
          goto LABEL_59;
LABEL_86:
        if ( v63 == 2 )
          *(_BYTE *)(*((_QWORD *)this + 25) + v12) = *(_BYTE *)(*((_QWORD *)this + 25) + v12) & 0xF8 | 1;
      }
      if ( v67 != 0.0 )
      {
        v80 = *(int *)(4 * v18 + v110);
        if ( (int)v80 < (int)v80 + *v49 )
        {
          v81 = (unsigned int)(*v49 - 1) + 1LL;
          v82 = v100 + 4 * v80;
          v83 = v107 + 8 * v80;
          v84 = 0;
          do
          {
            v85 = *(int *)(v82 + 4 * v84);
            v86 = *(double *)(v83 + 8 * v84++);
            *(double *)(v119 + 8 * v85) = v86 * v67 + *(double *)(v119 + 8 * v85);
          }
          while ( v81 != v84 );
        }
      }
      v10 = v101;
    }
LABEL_63:
    ++v6;
  }
  while ( v97 != v6 );
  if ( !v10 )
    goto LABEL_103;
  v68 = (__m128i *)operator new[](48LL * v10);
  v69 = v103;
  v70 = v68;
  if ( v103 != v68 )
  {
    if ( v10 >> 3 > 0 )
    {
      do
      {
        v71 = _mm_loadu_si128(v69);
        v68 += 24;
        v69 += 24;
        v68[-24] = v71;
        v68[-23] = _mm_loadu_si128(v69 - 23);
        v68[-22] = _mm_loadu_si128(v69 - 22);
        v68[-21] = _mm_loadu_si128(v69 - 21);
        v68[-20] = _mm_loadu_si128(v69 - 20);
        v68[-19] = _mm_loadu_si128(v69 - 19);
        v68[-18] = _mm_loadu_si128(v69 - 18);
        v68[-17] = _mm_loadu_si128(v69 - 17);
        v68[-16] = _mm_loadu_si128(v69 - 16);
        v68[-15] = _mm_loadu_si128(v69 - 15);
        v68[-14] = _mm_loadu_si128(v69 - 14);
        v68[-13] = _mm_loadu_si128(v69 - 13);
        v68[-12] = _mm_loadu_si128(v69 - 12);
        v68[-11] = _mm_loadu_si128(v69 - 11);
        v68[-10] = _mm_loadu_si128(v69 - 10);
        v68[-9] = _mm_loadu_si128(v69 - 9);
        v68[-8] = _mm_loadu_si128(v69 - 8);
        v68[-7] = _mm_loadu_si128(v69 - 7);
        v68[-6] = _mm_loadu_si128(v69 - 6);
        v68[-5] = _mm_loadu_si128(v69 - 5);
        v68[-4] = _mm_loadu_si128(v69 - 4);
        v68[-3] = _mm_loadu_si128(v69 - 3);
        v68[-2] = _mm_loadu_si128(v69 - 2);
        v68[-1] = _mm_loadu_si128(v69 - 1);
      }
      while ( v68 != &v70[24 * (unsigned int)((v10 >> 3) - 1) + 24] );
      v72 = (3LL * ((v10 >> 3) - 1) + 3) << 7;
      v69 = (__m128i *)((char *)v103 + v72);
      v68 = (__m128i *)((char *)v70 + v72);
    }
    switch ( v10 & 7 )
    {
      case 0:
        break;
      case 1:
        goto LABEL_76;
      case 2:
        goto LABEL_75;
      case 3:
        goto LABEL_74;
      case 4:
        goto LABEL_73;
      case 5:
        goto LABEL_72;
      case 6:
        goto LABEL_71;
      case 7:
        v68[18] = _mm_loadu_si128(v69 + 18);
        v68[19] = _mm_loadu_si128(v69 + 19);
        v68[20] = _mm_loadu_si128(v69 + 20);
LABEL_71:
        v68[15] = _mm_loadu_si128(v69 + 15);
        v68[16] = _mm_loadu_si128(v69 + 16);
        v68[17] = _mm_loadu_si128(v69 + 17);
LABEL_72:
        v68[12] = _mm_loadu_si128(v69 + 12);
        v68[13] = _mm_loadu_si128(v69 + 13);
        v68[14] = _mm_loadu_si128(v69 + 14);
LABEL_73:
        v68[9] = _mm_loadu_si128(v69 + 9);
        v68[10] = _mm_loadu_si128(v69 + 10);
        v68[11] = _mm_loadu_si128(v69 + 11);
LABEL_74:
        v68[6] = _mm_loadu_si128(v69 + 6);
        v68[7] = _mm_loadu_si128(v69 + 7);
        v68[8] = _mm_loadu_si128(v69 + 8);
LABEL_75:
        v68[3] = _mm_loadu_si128(v69 + 3);
        v68[4] = _mm_loadu_si128(v69 + 4);
        v68[5] = _mm_loadu_si128(v69 + 5);
LABEL_76:
        *v68 = _mm_loadu_si128(v69);
        v68[1] = _mm_loadu_si128(v69 + 1);
        v68[2] = _mm_loadu_si128(v69 + 2);
        break;
    }
  }
  v73 = (CoinPresolveMatrix *)operator new(0x20u);
  *((_DWORD *)v73 + 4) = v10;
  *((_QWORD *)v73 + 3) = v70;
  *((_QWORD *)v73 + 1) = a2;
  *(_QWORD *)v73 = &off_4D1F80;
  if ( v117 )
    v73 = (CoinPresolveMatrix *)remove_fixed_action::presolve(this, v114, (int *)v117, (int)v73, v74);
LABEL_79:
  operator delete[](v103);
  return v73;
}

