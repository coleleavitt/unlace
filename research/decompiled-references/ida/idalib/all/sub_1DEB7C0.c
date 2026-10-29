__int64 __fastcall sub_1DEB7C0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rdx
  int v13; // edx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rbp
  unsigned __int64 v23; // rax
  void *v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  int v27; // r13d
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i v30; // xmm5
  __int64 v31; // rbp
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i *v38; // rsi
  __int64 v39; // rax
  __m128i *v40; // r15
  __int64 v41; // rdx
  __m128i *v42; // rbp
  unsigned __int64 v43; // rdx
  const __m128i *v44; // r13
  __m128i *v45; // rax
  _BYTE *v46; // r12
  __m128i *v47; // r13
  unsigned __int64 v48; // rdx
  __m128i *v49; // rax
  __m128i v50; // xmm7
  __int64 v51; // rdx
  __int64 v52; // r13
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  int v63; // ecx
  int v64; // r12d
  __m128i si128; // xmm6
  __m128i *v66; // rcx
  unsigned __int64 v67; // rdx
  __m128i *v68; // rax
  __m128i v69; // xmm2
  int v70; // eax
  __int64 v71; // r13
  int v72; // r14d
  __int32 v73; // eax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rsi
  __int64 *v77; // rax
  __int64 v78; // r12
  int v79; // r13d
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __m128i v86; // xmm7
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 *v92; // [rsp+18h] [rbp-330h]
  __int64 v93; // [rsp+20h] [rbp-328h]
  __int64 v94; // [rsp+28h] [rbp-320h]
  __int64 v96; // [rsp+38h] [rbp-310h]
  __int64 v97; // [rsp+40h] [rbp-308h]
  __int64 v98; // [rsp+68h] [rbp-2E0h]
  unsigned __int64 v99; // [rsp+70h] [rbp-2D8h]
  __int64 *v100; // [rsp+70h] [rbp-2D8h]
  void *v101; // [rsp+70h] [rbp-2D8h]
  unsigned __int64 v102; // [rsp+78h] [rbp-2D0h]
  unsigned int v103; // [rsp+84h] [rbp-2C4h]
  int v104; // [rsp+88h] [rbp-2C0h]
  unsigned int v105; // [rsp+8Ch] [rbp-2BCh]
  __m128i v106; // [rsp+A0h] [rbp-2A8h] BYREF
  __m128i v107; // [rsp+B0h] [rbp-298h] BYREF
  char v108; // [rsp+C2h] [rbp-286h] BYREF
  char v109; // [rsp+C3h] [rbp-285h] BYREF
  unsigned int v110; // [rsp+C4h] [rbp-284h] BYREF
  int v111; // [rsp+C8h] [rbp-280h] BYREF
  int v112; // [rsp+CCh] [rbp-27Ch] BYREF
  __m128i v113; // [rsp+D0h] [rbp-278h] BYREF
  __int64 v114; // [rsp+E0h] [rbp-268h]
  __m128i v115; // [rsp+F0h] [rbp-258h] BYREF
  __m128i v116; // [rsp+100h] [rbp-248h]
  __m128i v117; // [rsp+110h] [rbp-238h] BYREF
  __m128i v118; // [rsp+120h] [rbp-228h]
  __m128i v119; // [rsp+130h] [rbp-218h] BYREF
  __int64 v120; // [rsp+140h] [rbp-208h]
  __int64 v121; // [rsp+148h] [rbp-200h]
  void *ptr; // [rsp+150h] [rbp-1F8h] BYREF
  __int64 v123; // [rsp+158h] [rbp-1F0h]
  _BYTE v124[32]; // [rsp+160h] [rbp-1E8h] BYREF
  _BYTE v125[24]; // [rsp+180h] [rbp-1C8h] BYREF
  unsigned __int64 v126; // [rsp+198h] [rbp-1B0h] BYREF
  void *v127; // [rsp+1F0h] [rbp-158h] BYREF
  __int64 v128; // [rsp+1F8h] [rbp-150h]
  _BYTE v129[256]; // [rsp+200h] [rbp-148h] BYREF
  __int64 v130; // [rsp+300h] [rbp-48h]

  v8 = a3;
  v94 = *(_QWORD *)(a3 + 24);
  v93 = v94 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v94 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v31 = 0;
    v93 = (__int64)sub_1DD1AB0((__int64)a1, v94, a7, a8);
    if ( (v93 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return v31;
  }
  v130 = 0;
  v127 = v129;
  v128 = 0x800000000LL;
  v96 = 0;
  v92 = *(__int64 **)(v8 + 32);
  if ( !v92 )
    goto LABEL_49;
  v9 = 0;
  v10 = *(_QWORD *)(a4 + 8);
  if ( v10 )
    v9 = *(_DWORD *)(v10 + 32);
  v92 = (__int64 *)sub_1DD8310((__int64)a1, v9, (__int64)v92, a4, a5, a6, a7, a8);
  v11 = *(_QWORD *)(a4 + 8);
  if ( v11 )
  {
    v12 = *(__int64 **)(v11 + 64);
    if ( v12 )
    {
      v130 = *v12;
      v13 = *(_DWORD *)(v8 + 20);
      if ( !v13 )
      {
LABEL_27:
        v33 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 )
        {
          v31 = 0;
          v34 = sub_1DD3CF0((__int64)a1, *(_QWORD *)v11, *(void **)(v11 + 8), 0, 0);
          v96 = v35;
          v33 = v34;
          if ( !v34 )
            goto LABEL_19;
        }
LABEL_29:
        if ( *(_DWORD *)(*a1 + 12632LL)
          || v93 != v94
          || (*(_BYTE *)(v8 + 17) & 4) != 0
          || (v31 = v8, *(_QWORD *)(v8 + 32)) )
        {
          v36 = (unsigned int)v128;
          v37 = 0;
          v38 = (__m128i *)&v125[16];
          *(_QWORD *)&v125[8] = 0x400000000LL;
          v39 = 0;
          *(_QWORD *)v125 = &v125[16];
          if ( (unsigned int)v128 > 4uLL )
          {
            sub_2237220(v125, &v125[16], (unsigned int)v128, 24);
            v37 = *(unsigned int *)&v125[8];
            v36 = (unsigned int)v128;
            v38 = *(__m128i **)v125;
            v39 = *(unsigned int *)&v125[8];
          }
          v40 = (__m128i *)v127;
          v41 = 32 * v36;
          if ( (char *)v127 + v41 != v127 )
          {
            v42 = (__m128i *)((char *)v127 + v41);
            while ( 1 )
            {
              v43 = v39 + 1;
              v44 = v40;
              v45 = (__m128i *)((char *)v38 + 24 * v39);
              if ( v43 > *(unsigned int *)&v125[12] )
              {
                if ( v38 > v40 || v45 <= v40 )
                {
                  sub_2237220(v125, &v125[16], v43, 24);
                  v45 = (__m128i *)(*(_QWORD *)v125 + 24LL * *(unsigned int *)&v125[8]);
                }
                else
                {
                  sub_2237220(v125, &v125[16], v43, 24);
                  v44 = (const __m128i *)(*(_QWORD *)v125 + (char *)v40 - (char *)v38);
                  v45 = (__m128i *)(*(_QWORD *)v125 + 24LL * *(unsigned int *)&v125[8]);
                }
              }
              v40 += 2;
              *v45 = _mm_loadu_si128(v44);
              v45[1].m128i_i64[0] = v44[1].m128i_i64[0];
              v39 = (unsigned int)++*(_DWORD *)&v125[8];
              if ( v42 == v40 )
                break;
              v38 = *(__m128i **)v125;
            }
            v38 = *(__m128i **)v125;
            v37 = (unsigned int)v39;
          }
          v31 = sub_AB5840(*(_QWORD *)(*a1 + 248LL), v93, (*(_BYTE *)(v8 + 18) >> 3) & 3, 0, 0, v92, (__int64)v38, v37);
          if ( (v31 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          {
            v31 = 0;
            if ( *(_BYTE **)v125 != &v125[16] )
              free(*(void **)v125);
            goto LABEL_19;
          }
          if ( *(_BYTE **)v125 != &v125[16] )
            free(*(void **)v125);
        }
        sub_1EA6140(a2, v31, 16, 8);
        v52 = v51;
        *(_DWORD *)v51 = *(_DWORD *)a4;
        v53 = *(_DWORD *)(a4 + 4);
        *(_QWORD *)(v51 + 8) = 0;
        *(_DWORD *)(v51 + 4) = v53;
        if ( *(_QWORD *)(v8 + 32) )
        {
          sub_B85890(&ptr, *(_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL));
          v57 = *(_QWORD *)(a4 + 8);
          v58 = 0;
          if ( v57 )
            v58 = *(_DWORD *)(v57 + 32);
          v59 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL);
          *(_DWORD *)&v125[8] = v58;
          *(_QWORD *)v125 = v59;
          *(_QWORD *)&v125[16] = ptr;
          v60 = sub_F1ED40(*(_QWORD **)(*a1 + 248LL), (__int64 *)&v127, v59, v54, v55, v56);
          v61 = *(_QWORD *)(a4 + 8);
          if ( v61 )
          {
            v62 = *(_QWORD *)(v61 + 48);
            v63 = *(_DWORD *)(v61 + 16);
          }
          else
          {
            v62 = 0;
            v63 = 0;
          }
          *(_QWORD *)(v52 + 8) = sub_A55700(
                                   *(_QWORD **)(*a1 + 248LL),
                                   v33,
                                   v96,
                                   v63,
                                   v62,
                                   *(_QWORD *)(v8 + 32),
                                   *(__int128 *)v125,
                                   *(__int64 *)&v125[16],
                                   v60);
        }
        goto LABEL_19;
      }
    }
    else
    {
      v130 = 0;
      v13 = *(_DWORD *)(v8 + 20);
      if ( !v13 )
        goto LABEL_27;
    }
  }
  else
  {
    v130 = 0;
    v13 = *(_DWORD *)(v8 + 20);
    if ( !v13 )
      goto LABEL_49;
  }
  v98 = v8;
  v14 = 16;
  v97 = 32LL * (unsigned int)(v13 - 1) + 48;
  while ( 1 )
  {
    v116.m128i_i64[1] = 0;
    v15 = *(_QWORD *)(v11 + 64);
    v115.m128i_i64[1] = 0;
    v115.m128i_i64[0] &= 0xFFFFFFFE00000000LL;
    v117 = _mm_loadu_si128((const __m128i *)(v15 + v14));
    v118 = _mm_loadu_si128((const __m128i *)(v15 + v14 + 16));
    if ( (v117.m128i_i32[0] & 0x7FFFFFFF) == 9 )
    {
      if ( (unsigned __int8)sub_1DE1C70(
                              a1,
                              (__int64)a1,
                              (const __m128i *)v117.m128i_i64[1],
                              a7,
                              a8,
                              (__int64)a1,
                              (const __m128i *)(v117.m128i_i64[1] + 24LL * v117.m128i_u32[1]),
                              (__int64)&v127,
                              0) )
      {
        v31 = 0;
        goto LABEL_19;
      }
      goto LABEL_25;
    }
    if ( !sub_F1D570((__int64)&v117) )
    {
      if ( sub_1DD6360((unsigned int *)a1, &v117, &v115, 0, v16, v17, *(double *)a7.m128_u64, a8) )
        goto LABEL_18;
      v46 = v127;
      v47 = &v115;
      v48 = (unsigned int)v128 + 1LL;
      v49 = (__m128i *)((char *)v127 + 32 * (unsigned int)v128);
      if ( v48 > HIDWORD(v128) )
      {
        if ( v127 > &v115 || v49 <= &v115 )
        {
          sub_2237220(&v127, v129, v48, 32);
          v47 = &v115;
          v49 = (__m128i *)((char *)v127 + 32 * (unsigned int)v128);
        }
        else
        {
          sub_2237220(&v127, v129, v48, 32);
          v47 = (__m128i *)((char *)v127 + (char *)&v115 - v46);
          v49 = (__m128i *)((char *)v127 + 32 * (unsigned int)v128);
        }
      }
      *v49 = _mm_loadu_si128(v47);
      v50 = _mm_loadu_si128(v47 + 1);
      LODWORD(v128) = v128 + 1;
      v49[1] = v50;
      goto LABEL_25;
    }
    v110 = 0;
    v111 = 0;
    sub_1E4CF80(
      (unsigned int)&v119,
      *a1,
      (unsigned int)&v110,
      (unsigned int)&v111,
      v16,
      v17,
      v117.m128i_i64[0],
      v117.m128i_i64[1],
      v118.m128i_i32[0],
      v118.m128i_i64[1]);
    ptr = v124;
    v123 = 0x200000000LL;
    *(double *)a7.m128_u64 = sub_1E4C910(
                               *a1,
                               (unsigned int)&ptr,
                               v18,
                               v19,
                               v20,
                               v21,
                               v119.m128i_i64[0],
                               v119.m128i_i64[1],
                               v120,
                               v121);
    v22 = (unsigned int)v123;
    v108 = 1;
    v109 = 0;
    v112 = v111;
    v23 = sub_F1E510((__int64)&v119, (__int64)&ptr, *(double *)a7.m128_u64);
    if ( sub_1DDBB60(a1, v110, v23, (__int64)ptr, v22, (__int64)&v108, a7, a8, (__int64)&v109, (__int64)&v112) )
      goto LABEL_16;
    if ( v108 )
    {
      if ( v112 == 1 )
      {
LABEL_89:
        if ( v109 )
        {
          v78 = *a1;
          v79 = *(_DWORD *)(*a1 + 12632LL);
          *(_DWORD *)(*a1 + 12632LL) = 0;
          sub_1DB8420((__m128i *)&v125[8], a1);
          if ( sub_1DD6360((unsigned int *)a1, &v119, &v115, 0, v80, v81, *(double *)a7.m128_u64, a8)
            || (sub_1DB7E30(
                  (__int64)&v106,
                  a1,
                  v110,
                  v111,
                  v84,
                  v85,
                  v115.m128i_i32[0],
                  v115.m128i_i64[1],
                  v116.m128i_i32[0],
                  v116.m128i_i64[1]),
                v86 = _mm_loadu_si128(&v107),
                v115 = _mm_loadu_si128(&v106),
                v116 = v86,
                (v106.m128i_i32[0] & 0x7FFFFFFF) == 0) )
          {
            sub_1DB8040((__int64)a1, a1 + 4, v82, v83, v84, v85, *(__int128 *)&v125[8], v126);
            *(_DWORD *)(v78 + 12632) = v79;
            goto LABEL_16;
          }
          sub_17429A0((__int64)&v127, &v115);
          sub_1DB8040((__int64)a1, a1 + 4, v87, v88, v89, v90, *(__int128 *)&v125[8], v126);
          *(_DWORD *)(v78 + 12632) = v79;
        }
        goto LABEL_23;
      }
      v64 = 0;
      while ( 1 )
      {
        v71 = *a1;
        ++v64;
        v72 = *(_DWORD *)(*a1 + 12632LL);
        *(_DWORD *)(*a1 + 12632LL) = v64;
        if ( sub_1DD6360((unsigned int *)a1, &v119, &v115, 0, (__int64)v24, v25, *(double *)a7.m128_u64, a8) )
        {
LABEL_85:
          *(_DWORD *)(v71 + 12632) = v72;
          goto LABEL_16;
        }
        if ( (unsigned __int8)sub_F1D5E0((__int64)&v115) )
          break;
LABEL_68:
        v24 = v127;
        v66 = &v115;
        v67 = (unsigned int)v128 + 1LL;
        v68 = (__m128i *)((char *)v127 + 32 * (unsigned int)v128);
        if ( v67 > HIDWORD(v128) )
        {
          if ( v127 > &v115 || v68 <= &v115 )
          {
            sub_2237220(&v127, v129, v67, 32);
            v66 = &v115;
            v68 = (__m128i *)((char *)v127 + 32 * (unsigned int)v128);
          }
          else
          {
            v101 = v127;
            sub_2237220(&v127, v129, v67, 32);
            v24 = v101;
            v66 = (__m128i *)((char *)v127 + (char *)&v115 - (_BYTE *)v101);
            v68 = (__m128i *)((char *)v127 + 32 * (unsigned int)v128);
          }
        }
        a8 = (__m128)_mm_loadu_si128(v66);
        *v68 = (__m128i)a8;
        v69 = _mm_loadu_si128(v66 + 1);
        LODWORD(v128) = v128 + 1;
        v68[1] = v69;
        v70 = v112;
        *(_DWORD *)(v71 + 12632) = v72;
        if ( v70 - 1 == v64 )
          goto LABEL_89;
      }
      v73 = v115.m128i_i32[0] & 0x7FFFFFFF;
      if ( (v115.m128i_i32[0] & 0x7FFFFFFF) == 6 )
      {
        v104 = v111;
        v105 = v110;
        v103 = *(_DWORD *)((v116.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 16);
        v99 = *(_QWORD *)((v116.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) + 8);
        v102 = *(_QWORD *)(v116.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
        sub_F22A90(v125, v115.m128i_i64[1]);
        v75 = *(_QWORD *)v125;
        v76 = *(_QWORD **)(*a1 + 248LL);
        *(_DWORD *)&v125[4] = v104;
        *(_DWORD *)v125 = 7;
        *(_QWORD *)&v125[8] = v75;
        sub_F1ECA0(&v126, v76, v102, v99, v103, v105);
      }
      else
      {
        if ( v73 == 8 )
        {
          v74 = sub_1E53EF0(*a1, v116.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
          if ( v74 != 1 )
          {
            *(_QWORD *)v125 = *(_QWORD *)v125 & 0xFFFFFFFE00000000LL | 8;
            *(_QWORD *)&v125[8] = v74 & 0xFFFFFFFFFFFFFFFELL;
            v126 = v74 & 0xFFFFFFFFFFFFFFFCLL | 1;
            goto LABEL_67;
          }
LABEL_66:
          *(_QWORD *)v125 &= 0xFFFFFFFE00000000LL;
          *(_QWORD *)&v125[8] = 0;
          v126 = 0;
          goto LABEL_67;
        }
        if ( v73 != 1 )
          goto LABEL_66;
        v77 = (__int64 *)sub_1E509C0(*a1, v116.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL);
        if ( !v77 )
          goto LABEL_66;
        v100 = v77;
        sub_F1D250((__int64)&v113, *v77, 0, 0);
        *(__m128i *)v125 = _mm_load_si128(&v113);
        *(_QWORD *)&v125[16] = v114;
        v126 = (unsigned __int64)v100 & 0xFFFFFFFFFFFFFFFCLL | 2;
      }
LABEL_67:
      si128 = _mm_load_si128((const __m128i *)&v125[16]);
      v115 = _mm_load_si128((const __m128i *)v125);
      v116 = si128;
      if ( (*(_DWORD *)v125 & 0x7FFFFFFF) == 0 )
        goto LABEL_85;
      goto LABEL_68;
    }
    v26 = *a1;
    *(_QWORD *)&v125[8] = 0;
    v126 = 0;
    *(_QWORD *)v125 &= 0xFFFFFFFE00000000LL;
    v27 = *(_DWORD *)(v26 + 12632);
    *(_DWORD *)(v26 + 12632) = 0;
    if ( sub_1DD6360((unsigned int *)a1, &v119, (__m128i *)v125, 0, (__int64)v24, v25, *(double *)a7.m128_u64, a8) )
      break;
    sub_1DB7E30((__int64)&v106, a1, v110, v112, v28, v29, *(int *)v125, *(__int64 *)&v125[8], *(int *)&v125[16], v126);
    v30 = _mm_loadu_si128(&v107);
    v115 = _mm_loadu_si128(&v106);
    v116 = v30;
    if ( (v106.m128i_i32[0] & 0x7FFFFFFF) == 0 )
      break;
    sub_17429A0((__int64)&v127, &v115);
    *(_DWORD *)(v26 + 12632) = v27;
LABEL_23:
    if ( ptr != v124 )
      free(ptr);
LABEL_25:
    v14 += 32;
    v11 = *(_QWORD *)(a4 + 8);
    if ( v14 == v97 )
    {
      v8 = v98;
      if ( v11 )
        goto LABEL_27;
LABEL_49:
      v33 = 0;
      goto LABEL_29;
    }
  }
  *(_DWORD *)(v26 + 12632) = v27;
LABEL_16:
  if ( ptr != v124 )
    free(ptr);
LABEL_18:
  v31 = 0;
LABEL_19:
  if ( v127 != v129 )
    free(v127);
  return v31;
}
