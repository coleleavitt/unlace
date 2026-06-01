__int64 __fastcall sub_2BC920(
        __int64 a1,
        __int64 a2,
        __m128i a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  QT::QEventPoint *v13; // rdi
  __m128 v14; // xmm2
  __m128d v15; // xmm1
  __m128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  double *v23; // rax
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  __int64 v26; // r8
  int v27; // r14d
  unsigned int v28; // ebp
  char v29; // al
  __m128i v30; // xmm0
  __int64 v31; // rax
  __m128i v32; // xmm0
  unsigned int v33; // eax
  double v34; // xmm0_8
  __int64 v35; // rdx
  __int64 v36; // rsi
  int v37; // r8d
  int v38; // ecx
  __int64 v39; // r11
  char *v40; // rdi
  char *v41; // rax
  __int64 v42; // rdx
  char *v43; // r15
  __int64 *v44; // r15
  __int64 v45; // rcx
  const __m128i *v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rax
  __m128 si128; // xmm0
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __m128 v55; // xmm4
  __m128 v56; // xmm5
  double *v57; // rax
  __m128 v58; // xmm4
  __m128 v59; // xmm5
  __int64 v60; // r8
  char v61; // al
  double v62; // xmm4_8
  double v63; // xmm5_8
  __int64 v64; // rdi
  int v65; // eax
  __int64 v67; // rax
  __int64 (*v68)(); // rax
  __int64 v69; // rax
  __int64 v70; // r15
  _QWORD *v71; // rdi
  __int64 v72; // rax
  int v73; // r12d
  __int64 v74; // rbp
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rdi
  int v78; // r8d
  __int64 v79; // rax
  __int64 v80; // rdi
  _QWORD *v81; // rdi
  __int64 v82; // r14
  int v83; // r12d
  __int64 v84; // rdx
  __int64 v85; // rax
  int v86; // r13d
  int v87; // ebp
  __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  unsigned int v90; // eax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rdx
  const char *v94; // rsi
  const __m128i *v95; // rdi
  __int64 v96; // rcx
  __int64 v97; // rdx
  __m128i v98; // xmm0
  __int64 v100; // rax
  __int64 v101; // rax
  int v102; // ecx
  __int64 v103; // [rsp-8h] [rbp-130h]
  __int64 v104; // [rsp+0h] [rbp-128h]
  __int64 v105; // [rsp+0h] [rbp-128h]
  int v106; // [rsp+8h] [rbp-120h]
  int *v107; // [rsp+8h] [rbp-120h]
  int v108; // [rsp+8h] [rbp-120h]
  int v109; // [rsp+10h] [rbp-118h]
  __int64 v110; // [rsp+10h] [rbp-118h]
  int v111; // [rsp+10h] [rbp-118h]
  __int64 v112; // [rsp+10h] [rbp-118h]
  int v113; // [rsp+18h] [rbp-110h]
  int v114; // [rsp+18h] [rbp-110h]
  __int64 v115; // [rsp+20h] [rbp-108h]
  __int64 v116; // [rsp+20h] [rbp-108h]
  __int64 v117; // [rsp+28h] [rbp-100h]
  __m128i *v118; // [rsp+28h] [rbp-100h]
  __m128i v119; // [rsp+30h] [rbp-F8h] BYREF
  int v120; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v121; // [rsp+44h] [rbp-E4h]
  int v122; // [rsp+58h] [rbp-D0h]
  _OWORD v123[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v124; // [rsp+80h] [rbp-A8h]
  __m128i v125; // [rsp+90h] [rbp-98h] BYREF
  __m128i v126; // [rsp+A0h] [rbp-88h]
  __int64 v127; // [rsp+B0h] [rbp-78h]
  char v128[4]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v129; // [rsp+C4h] [rbp-64h]
  __m128 v130; // [rsp+D4h] [rbp-54h]
  int v131; // [rsp+E4h] [rbp-44h]
  unsigned __int64 v132; // [rsp+E8h] [rbp-40h]

  v10 = a1 + 88;
  v11 = a1;
  v12 = *(_DWORD *)(a2 + 64);
  v13 = *(QT::QEventPoint **)(a2 + 48);
  v132 = __readfsqword(0x28u);
  LODWORD(v115) = v12;
  QT::QEventPoint::position(v13);
  v14 = (__m128)_mm_unpacklo_epi64(a3, a4);
  v15 = _mm_and_pd(_mm_unpacklo_pd((__m128d)0x8000000000000000LL, (__m128d)0x8000000000000000LL), (__m128d)v14);
  v16 = (__m128)_mm_cvttpd_epi32(
                  _mm_add_pd(
                    _mm_or_pd(_mm_unpacklo_pd((__m128d)0x3FE0000000000000uLL, (__m128d)0x3FE0000000000000uLL), v15),
                    (__m128d)v14));
  v23 = (double *)sub_1EA6C0(
                    *(_QWORD *)(v11 + 16) + 384LL,
                    a2,
                    v17,
                    v18,
                    v19,
                    v20,
                    v16,
                    (__m128)v15,
                    v14,
                    a6,
                    v21,
                    v22,
                    a9,
                    a10,
                    v104,
                    v106,
                    v109,
                    v113,
                    v115,
                    v117,
                    v16.m128_i64[0],
                    v119.m128i_i32[2],
                    v120,
                    SDWORD1(v121),
                    SHIDWORD(v121),
                    v122,
                    *(__int64 *)&v123[0]);
  v26 = *(_QWORD *)(v11 + 440);
  if ( v26 )
    v26 = *(_QWORD *)(v26 + 8);
  v27 = 1;
  v28 = sub_2BC760(
          (_QWORD *)v11,
          v10,
          0,
          0,
          v26,
          v23,
          *(double *)v16.m128_u64,
          (__m128)v15,
          v14,
          a6,
          v24,
          v25,
          a9,
          a10,
          &v119,
          1u);
  v29 = sub_47B6A0(QT::QCoreApplication::self, a2);
  if ( (v29 & 4) == 0 )
    v27 = v29 & 2;
  v30 = _mm_loadu_si128((const __m128i *)(v11 + 88));
  v31 = *(_QWORD *)(v11 + 120);
  LOBYTE(v120) = 0;
  v123[0] = v30;
  v32 = _mm_loadu_si128((const __m128i *)(v11 + 104));
  v124 = v31;
  v33 = *(_DWORD *)(v11 + 88);
  v123[1] = v32;
  v34 = NAN;
  v121 = -1;
  if ( v33 > 4 )
  {
    if ( v33 == 5 )
    {
      *(_QWORD *)((char *)&v121 + 4) = *(_QWORD *)(v11 + 116);
      HIDWORD(v121) = *(_DWORD *)(v11 + 124);
    }
    else
    {
      LOBYTE(v120) = 1;
    }
    goto LABEL_8;
  }
  if ( v33 <= 1 )
  {
    LOBYTE(v120) = 1;
    if ( v33 == 1 )
    {
      v69 = *(_QWORD *)(v11 + 92);
      LOBYTE(v120) = 0;
      *((_QWORD *)&v121 + 1) = v69;
    }
LABEL_8:
    v35 = *(_QWORD *)(v11 + 16);
    if ( (_BYTE)v28 )
      goto LABEL_9;
    goto LABEL_36;
  }
  v65 = *(_DWORD *)(v11 + 100);
  v35 = *(_QWORD *)(v11 + 16);
  LOBYTE(v120) = 1;
  LODWORD(v121) = v65;
  if ( (_BYTE)v28 )
  {
LABEL_9:
    v36 = 4;
    v107 = &v120;
    v37 = sub_2BB510(v11, 4, v35, &v120, v123);
    if ( !v37 )
    {
      v38 = *(_DWORD *)(v11 + 88);
      if ( v27 )
      {
        v39 = *(_QWORD *)(v11 + 200);
        v40 = *(char **)(v11 + 192);
        *(_BYTE *)(v11 + 288) = 0;
        LOBYTE(v28) = v38 != 4;
        v41 = &v40[20 * v39];
        if ( v40 != v41 )
          goto LABEL_12;
LABEL_20:
        if ( v27 == 2 )
          return v28;
        v44 = (__int64 *)(v11 + 192);
LABEL_22:
        if ( v38 == 1 )
        {
          v81 = *(_QWORD **)(v11 + 440);
          if ( v81 )
            v81 = (_QWORD *)v81[1];
          LODWORD(v110) = v37;
          v82 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v81 + 160LL))(v81, *(_QWORD *)(v10 + 4));
          if ( *(_QWORD *)(v82 + 24) )
          {
            HIBYTE(v116) = v28;
            v83 = v110;
            v118 = &v119;
            do
            {
              v84 = *(_QWORD *)(v11 + 200);
              v85 = *(_QWORD *)(v11 + 192);
              v86 = *(_DWORD *)(v11 + 92);
              v87 = *(_DWORD *)(v11 + 96);
              v88 = v85 + 20 * v84;
              if ( v85 == v88 )
                goto LABEL_105;
              while ( *(_BYTE *)v85
                   || *(_DWORD *)(v85 + 12) != v86
                   || *(_DWORD *)(v85 + 16) > v87
                   || *(_DWORD *)(v85 + 16) < v87
                   || *(_DWORD *)(v85 + 8) != v83 )
              {
                v85 += 20;
                if ( v88 == v85 )
                  goto LABEL_105;
              }
              if ( v88 == v85 )
              {
LABEL_105:
                v89 = v84 + 1;
                if ( *(_QWORD *)(v11 + 208) < v89 )
                {
                  v112 = *(_QWORD *)(v11 + 208);
                  v92 = qvector_reserve(v44, 0, v89, 20);
                  v93 = *(_QWORD *)(v11 + 200);
                  v94 = *(const char **)(v11 + 208);
                  v95 = *(const __m128i **)(v11 + 192);
                  v96 = v92;
                  *(_QWORD *)(v11 + 208) = v112;
                  v97 = v93 - 1;
                  if ( v97 >= 0 )
                  {
                    do
                    {
                      v98 = _mm_loadu_si128(v95);
                      v92 += 20;
                      v95 = (const __m128i *)((char *)v95 + 20);
                      *(__m128i *)(v92 - 20) = v98;
                      *(_DWORD *)(v92 - 4) = v95[-1].m128i_i32[3];
                    }
                    while ( v97-- != 0 );
                    v95 = *(const __m128i **)(v11 + 192);
                  }
                  v114 = (int)v94;
                  v110 = v96;
                  v34 = qfree(v95, v94);
                  v100 = *(_QWORD *)(v11 + 200);
                  *(_QWORD *)(v11 + 192) = v110;
                  *(_QWORD *)(v11 + 208) = v94;
                  v88 = v110 + 20 * v100;
                }
                *(_BYTE *)v88 = 0;
                *(_DWORD *)(v88 + 4) = -1;
                *(_DWORD *)(v88 + 8) = v83;
                *(_DWORD *)(v88 + 12) = v86;
                *(_DWORD *)(v88 + 16) = v87;
                ++*(_QWORD *)(v11 + 200);
              }
              ++v83;
              sub_2B38C0((__int64)v44);
            }
            while ( (unsigned __int64)v83 < *(_QWORD *)(v82 + 24) );
            v28 = HIBYTE(v116);
          }
        }
        v36 = (__int64)&v120;
        sub_2B2D00(v44, (char *)&v120);
        sub_2B38C0((__int64)v44);
        v38 = *(_DWORD *)(v11 + 88);
        goto LABEL_24;
      }
      if ( v38 == 5 || (unsigned int)(v38 - 1) <= 1 )
        goto LABEL_51;
      if ( v38 == 4 )
      {
        if ( !*(_DWORD *)(v11 + 432) )
        {
LABEL_51:
          v67 = *(_QWORD *)v11;
          *(_BYTE *)(v11 + 288) = 1;
          v68 = *(__int64 (**)())(v67 + 784);
          if ( v68 == sub_2B2370 )
          {
            v28 = (unsigned __int8)byte_8CCA98;
          }
          else
          {
            LODWORD(v110) = v37;
            v90 = ((__int64 (__fastcall *)(__int64))v68)(v11);
            v37 = v110;
            v28 = v90;
          }
          if ( (_BYTE)v28 && (v36 = *(unsigned int *)(v11 + 432), *(_BYTE *)(v11 + 288) = 0, (int)v36 > 0) )
          {
            *(_DWORD *)(v11 + 88) = 0;
            v38 = 0;
          }
          else
          {
            v38 = *(_DWORD *)(v11 + 88);
            LOBYTE(v28) = v38 != 4;
          }
          goto LABEL_57;
        }
        *(_BYTE *)(v11 + 288) = 0;
        v28 = 0;
      }
      else
      {
        *(_BYTE *)(v11 + 288) = 0;
      }
LABEL_57:
      v39 = *(_QWORD *)(v11 + 200);
      v40 = *(char **)(v11 + 192);
      v41 = &v40[20 * v39];
      if ( v40 != v41 )
      {
LABEL_12:
        v42 = (unsigned __int8)v120;
        v43 = v40;
        v36 = (unsigned int)v121;
LABEL_13:
        while ( (_BYTE)v120 != *v43 )
        {
LABEL_18:
          v43 += 20;
          if ( v43 == v41 )
            goto LABEL_19;
        }
        if ( (_BYTE)v120 )
        {
          while ( (_DWORD)v121 != *((_DWORD *)v43 + 1) )
          {
            v43 += 20;
            if ( v43 == v41 )
              goto LABEL_19;
            if ( !*v43 )
              goto LABEL_18;
          }
        }
        else
        {
          while ( DWORD2(v121) != *((_DWORD *)v43 + 3)
               || *((_DWORD *)v43 + 4) > SHIDWORD(v121)
               || *((_DWORD *)v43 + 4) < SHIDWORD(v121)
               || DWORD1(v121) != *((_DWORD *)v43 + 2) )
          {
            v43 += 20;
            if ( v43 == v41 )
              goto LABEL_19;
            if ( *v43 )
            {
              v43 += 20;
              if ( v43 != v41 )
                goto LABEL_13;
              goto LABEL_19;
            }
          }
        }
        if ( v43 == v41 )
        {
LABEL_19:
          if ( !v27 )
            goto LABEL_58;
          goto LABEL_20;
        }
        if ( (unsigned int)(v27 - 1) > 1 )
          goto LABEL_24;
        v70 = v11 + 192;
        while ( (_BYTE)v120 != *v40 )
        {
LABEL_74:
          v40 += 20;
          if ( v40 == v41 )
            goto LABEL_75;
        }
        if ( !(_BYTE)v120 )
        {
          while ( 1 )
          {
            if ( DWORD2(v121) == *((_DWORD *)v40 + 3)
              && (v102 = *((_DWORD *)v40 + 4), SHIDWORD(v121) >= v102)
              && SHIDWORD(v121) <= v102 )
            {
              if ( DWORD1(v121) == *((_DWORD *)v40 + 2) )
                goto LABEL_115;
              v40 += 20;
              if ( v41 == v40 )
                goto LABEL_75;
            }
            else
            {
              v40 += 20;
              if ( v40 == v41 )
                goto LABEL_75;
            }
            if ( *v40 )
              goto LABEL_74;
          }
        }
        while ( (_DWORD)v121 != *((_DWORD *)v40 + 1) )
        {
          v40 += 20;
          if ( v40 == v41 )
            goto LABEL_75;
          if ( !*v40 )
            goto LABEL_74;
        }
LABEL_115:
        if ( v41 != v40 )
        {
          v91 = v41 - v40;
          v36 = (__int64)(v40 + 20);
          if ( (__int64)(0xCCCCCCCCCCCCCCCDLL * (v91 >> 2) - 2) >= 0 )
          {
            v108 = v37;
            memmove(v40, (const void *)v36, v91 - 20);
            v39 = *(_QWORD *)(v11 + 200);
            v37 = v108;
          }
          *(_QWORD *)(v11 + 200) = v39 - 1;
        }
LABEL_75:
        LODWORD(v107) = v37;
        sub_2B38C0(v11 + 192);
        if ( *(_DWORD *)(v11 + 88) == 1 )
        {
          v71 = *(_QWORD **)(v11 + 440);
          if ( v71 )
            v71 = (_QWORD *)v71[1];
          v36 = *(_QWORD *)(v10 + 4);
          v72 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v71 + 160LL))(v71, v36);
          if ( *(_QWORD *)(v72 + 24) )
          {
            v73 = (int)v107;
            LOBYTE(v110) = v28;
            v74 = v11;
            v75 = v72;
            do
            {
              v76 = *(_QWORD *)(v74 + 200);
              v77 = *(_QWORD *)(v74 + 192);
              v36 = *(unsigned int *)(v74 + 92);
              v78 = *(_DWORD *)(v74 + 96);
              v79 = v77 + 20 * v76;
              if ( v77 != v79 )
              {
                while ( *(_BYTE *)v77
                     || (_DWORD)v36 != *(_DWORD *)(v77 + 12)
                     || *(_DWORD *)(v77 + 16) > v78
                     || *(_DWORD *)(v77 + 16) < v78
                     || *(_DWORD *)(v77 + 8) != v73 )
                {
                  v77 += 20;
                  if ( v79 == v77 )
                    goto LABEL_84;
                }
                if ( v79 != v77 )
                {
                  v101 = v79 - v77;
                  v36 = 0xCCCCCCCCCCCCCCCDLL * (v101 >> 2) - 2;
                  if ( v36 >= 0 )
                  {
                    v36 = v77 + 20;
                    memmove((void *)v77, (const void *)(v77 + 20), v101 - 20);
                    v76 = *(_QWORD *)(v74 + 200);
                  }
                  *(_QWORD *)(v74 + 200) = v76 - 1;
                }
              }
LABEL_84:
              ++v73;
              sub_2B38C0(v70);
            }
            while ( (unsigned __int64)v73 < *(_QWORD *)(v75 + 24) );
            v11 = v74;
            v28 = (unsigned __int8)v110;
          }
        }
        goto LABEL_39;
      }
LABEL_58:
      v44 = (__int64 *)(v11 + 192);
      if ( v40 )
      {
        *(_QWORD *)(v11 + 200) = 0;
        v111 = v37;
        v34 = qfree(v40, (const char *)v36);
        v37 = v111;
        *(_QWORD *)(v11 + 192) = 0;
        *(_QWORD *)(v11 + 208) = 0;
      }
      LODWORD(v110) = v37;
      sub_2B38C0(v11 + 192);
      v38 = *(_DWORD *)(v11 + 88);
      v37 = v110;
      goto LABEL_22;
    }
    return 1;
  }
LABEL_36:
  v36 = 4;
  if ( (unsigned int)sub_2BB510(v11, 4, v35, 0, v123) )
    return 1;
  if ( v27 )
  {
    v28 = 1;
LABEL_39:
    if ( v27 == 2 )
      return v28;
    v38 = *(_DWORD *)(v11 + 88);
    goto LABEL_24;
  }
  if ( (_DWORD)v116 != 1 )
    return 1;
  v80 = *(_QWORD *)(v11 + 192);
  if ( v80 )
  {
    *(_QWORD *)(v11 + 200) = 0;
    v34 = qfree(v80, &byte_4);
    *(_QWORD *)(v11 + 192) = 0;
    *(_QWORD *)(v11 + 208) = 0;
  }
  v28 = 1;
  sub_2B38C0(v11 + 192);
  v38 = *(_DWORD *)(v11 + 88);
LABEL_24:
  v45 = v38 & 0xFFFFFFFB;
  if ( (_DWORD)v45 != 1 && (_DWORD)v116 == 1 )
  {
    v46 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(v11 + 16) + 384LL, v36, v42, v45, v34);
    v119.m128i_i64[1] = -1;
    v47 = _mm_loadu_si128(v46);
    v129 = 0;
    v125 = v47;
    v126 = _mm_loadu_si128(v46 + 1);
    v48 = v46[2].m128i_i64[0];
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
    v131 = -1;
    v127 = v48;
    v50 = *(_QWORD *)(v11 + 16);
    v130 = si128;
    v57 = (double *)sub_1EA6C0(
                      v50 + 384,
                      v36,
                      v51,
                      v52,
                      v53,
                      v54,
                      si128,
                      (__m128)v15,
                      v14,
                      a6,
                      v55,
                      v56,
                      a9,
                      a10,
                      v105,
                      (int)v107,
                      v110,
                      v114,
                      v116,
                      (__int64)v118,
                      v119.m128i_i64[0],
                      -1,
                      v120,
                      SDWORD1(v121),
                      SHIDWORD(v121),
                      v122,
                      *(__int64 *)&v123[0]);
    v60 = *(_QWORD *)(v11 + 440);
    if ( v60 )
      v60 = *(_QWORD *)(v60 + 8);
    v61 = sub_2BC760(
            (_QWORD *)v11,
            (__int64)v128,
            (__int64)&v119.m128i_i64[1],
            0,
            v60,
            v57,
            *(double *)si128.m128_u64,
            (__m128)v15,
            v14,
            a6,
            v58,
            v59,
            a9,
            a10,
            &v119,
            0);
    v64 = *(_QWORD *)(v11 + 16);
    if ( v61 )
    {
      v126.m128i_i32[2] = v119.m128i_i32[2];
      if ( v119.m128i_i16[6] >= 0 )
        v126.m128i_i16[6] = v119.m128i_i16[6];
      if ( v119.m128i_i16[7] >= 0 )
        v126.m128i_i16[7] = v119.m128i_i16[7];
    }
    else
    {
      v126.m128i_i64[1] = -1;
    }
    sub_2004D0(v64, v125.m128i_i8, 0, v103, *(double *)si128.m128_u64, (__m128)v15, v14, a6, v62, v63, a9, a10);
  }
  return v28;
}
