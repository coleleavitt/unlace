void __fastcall sub_20029E0(__m128i **a1, __m128i **a2)
{
  const __m128i **v2; // r13
  const __m128i **v3; // r12
  __m128i *v5; // rax
  __m128i *v6; // r14
  __m128i *v7; // r15
  __m128i si128; // xmm0
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __m128i *v11; // rbp
  __m128i *v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __m128i *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128i *v19; // rax
  unsigned __int64 i; // r12
  __int64 v21; // r15
  __int64 v22; // rdx
  __m128i *v23; // rdx
  __m128 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  int v28; // eax
  int v29; // edx
  __int64 v30; // rax
  __m128i *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r10
  __int64 v35; // r9
  __m128i *v36; // rdx
  __int64 *v37; // rdx
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  const __m128i *v41; // rax
  __int64 v42; // rdx
  int v43; // r14d
  __int64 v44; // rsi
  unsigned __int64 v45; // rdx
  __m128i *v46; // r12
  __m128i *v47; // rbp
  unsigned __int64 v48; // rax
  __m128i *v49; // r12
  __m128i *v50; // rbp
  unsigned __int64 v51; // rax
  __m128i *v52; // rbp
  __m128i *v53; // rbx
  unsigned __int64 v54; // rax
  __m128i v55; // xmm4
  __m128i *v56; // r8
  void *v57; // rcx
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // r15
  __int64 v60; // rax
  unsigned __int64 v61; // r15
  __m128i v62; // xmm5
  const __m128i *v63; // rcx
  __m128i v64; // xmm1
  __m128i *v65; // r8
  signed __int64 v66; // rcx
  __int64 v67; // rsi
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // r14
  char *v70; // rax
  char *v71; // r14
  __int64 *v72; // rcx
  const __m128i *v73; // rcx
  char *v74; // rsi
  __m128i v75; // xmm3
  __m128i *v76; // rcx
  signed __int64 v77; // r8
  __int64 v78; // r9
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // rsi
  char *v81; // rax
  __int64 v82; // rsi
  char *v83; // rsi
  char *v84; // r8
  const __m128i *v85; // rdi
  char *v86; // r8
  __m128i v87; // xmm2
  __m128i *v88; // rdx
  __int64 v89; // r13
  size_t v90; // rbp
  char *v91; // rax
  __m128i *v92; // rcx
  __m128i *v93; // r15
  __int64 v94; // rsi
  __int64 v95; // [rsp+0h] [rbp-E0h] BYREF
  __int64 v96; // [rsp+8h] [rbp-D8h] BYREF
  __int64 *v97; // [rsp+10h] [rbp-D0h]
  void *v98; // [rsp+18h] [rbp-C8h] BYREF
  void *v99; // [rsp+20h] [rbp-C0h]
  __int64 *v100; // [rsp+28h] [rbp-B8h]
  signed __int64 v101; // [rsp+30h] [rbp-B0h]
  __int64 v102; // [rsp+38h] [rbp-A8h]
  __int64 v103; // [rsp+40h] [rbp-A0h]
  __m128i v104; // [rsp+48h] [rbp-98h] BYREF
  __m128i v105[2]; // [rsp+58h] [rbp-88h] BYREF
  void *v106[2]; // [rsp+78h] [rbp-68h] BYREF
  __int64 v107; // [rsp+88h] [rbp-58h] BYREF

  v2 = (const __m128i **)(a1 + 16);
  v3 = (const __m128i **)(a1 + 22);
  v5 = a2[2];
  v6 = a2[1];
  a2[2] = nullptr;
  v7 = *a2;
  *(_OWORD *)a2 = 0;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  a1[2] = v5;
  a1[5] = (__m128i *)(a1 + 7);
  a1[6] = (__m128i *)0x400000000LL;
  a1[11] = (__m128i *)(a1 + 13);
  v97 = (__int64 *)(a1 + 15);
  a1[15] = (__m128i *)(a1 + 3);
  v100 = (__int64 *)(a1 + 19);
  *a1 = v7;
  a1[1] = v6;
  v9 = ((char *)v6 - (char *)v7) >> 5;
  a1[3] = nullptr;
  a1[4] = nullptr;
  a1[12] = nullptr;
  *(__m128i *)(a1 + 13) = si128;
  a1[16] = nullptr;
  a1[17] = nullptr;
  a1[18] = nullptr;
  a1[19] = nullptr;
  a1[20] = nullptr;
  a1[21] = nullptr;
  a1[22] = nullptr;
  a1[23] = nullptr;
  a1[24] = nullptr;
  a1[25] = nullptr;
  a1[26] = nullptr;
  a1[27] = nullptr;
  if ( v7 == v6 )
    goto LABEL_6;
  _BitScanReverse64(&v10, ((char *)v6 - (char *)v7) >> 5);
  sub_2002370(v7, v6, 2LL * (int)(63 - (v10 ^ 0x3F)));
  if ( (char *)v6 - (char *)v7 <= 512 )
  {
    sub_1FFC630((__int64)v7, (__int64)v6);
    goto LABEL_75;
  }
  v11 = v7 + 32;
  sub_1FFC630((__int64)v7, (__int64)v7[32].m128i_i64);
  if ( v6 == &v7[32] )
  {
LABEL_75:
    v9 = ((char *)a1[1] - (char *)*a1) >> 5;
    goto LABEL_6;
  }
  do
  {
    v12 = v11;
    v11 += 2;
    sub_1FFC380(v12);
  }
  while ( v6 != v11 );
  v9 = ((char *)a1[1] - (char *)*a1) >> 5;
LABEL_6:
  sub_1FFCFE0(v2, v9);
  v13 = ((char *)a1[1] - (char *)*a1) >> 5;
  v14 = v13;
  if ( v13 > 0x3FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("vector::reserve");
  v15 = a1[19];
  if ( v13 > ((char *)a1[21] - (char *)v15) >> 2 )
  {
    v88 = a1[20];
    v89 = 4 * v13;
    v90 = (char *)v88 - (char *)v15;
    if ( v13 )
    {
      v95 = (__int64)a1[20];
      v91 = (char *)operator new(4 * v13);
      v92 = a1[19];
      v88 = (__m128i *)v95;
      v93 = (__m128i *)v91;
    }
    else
    {
      v92 = a1[19];
      v93 = nullptr;
    }
    if ( v15 != v88 )
    {
      v95 = (__int64)v92;
      memmove(v93, v15, v90);
      v92 = (__m128i *)v95;
    }
    if ( v92 )
      operator delete(v92);
    v94 = (char *)a1[1] - (char *)*a1;
    a1[19] = v93;
    v14 = v94 >> 5;
    a1[20] = (__m128i *)((char *)v93 + v90);
    a1[21] = (__m128i *)((char *)v93 + v89);
  }
  sub_1FFCFE0(v3, v14);
  v19 = *a1;
  if ( a1[1] != *a1 )
  {
    for ( i = 0; i < ((char *)a1[1] - (char *)*a1) >> 5; ++i )
    {
      v104 = v19[2 * i];
      sub_2246450(v106, &v104);
      v21 = sub_2245280(v97, v106[0], v106[1]);
      v95 = v22;
      if ( v106[0] != &v107 )
        operator delete(v106[0]);
      v23 = a1[17];
      if ( v23 != a1[18] )
      {
        v96 = i;
        v24 = (__m128 *)&v23[1].m128i_u64[1];
        v24[-2].m128_u64[1] = v21;
        v24[-1] = _mm_loadh_ps((const double *)&v96);
        a1[17] = (__m128i *)v24;
        goto LABEL_14;
      }
      v76 = a1[16];
      v77 = (char *)v23 - (char *)v76;
      v78 = ((char *)v23 - (char *)v76) >> 3;
      if ( 0xAAAAAAAAAAAAAAABLL * v78 )
      {
        v79 = 0x5555555555555556LL * v78;
        v80 = -16;
        if ( 0xAAAAAAAAAAAAAAABLL * v78 <= 0x5555555555555556LL * v78 )
        {
          if ( v79 > 0xAAAAAAAAAAAAAAALL )
          {
            v80 = -16;
          }
          else
          {
            if ( !v79 )
            {
              v96 = 24;
              v83 = nullptr;
              v81 = nullptr;
              goto LABEL_61;
            }
            v80 = 16 * v78;
          }
        }
      }
      else
      {
        v80 = 24;
      }
      v101 = (char *)v23 - (char *)v76;
      v99 = v76;
      v98 = v23;
      v96 = v80;
      v81 = (char *)operator new(v80);
      v82 = v96;
      v23 = (__m128i *)v98;
      v77 = v101;
      v96 = (__int64)(v81 + 24);
      v76 = (__m128i *)v99;
      v83 = &v81[v82];
LABEL_61:
      v98 = (void *)i;
      v84 = &v81[v77];
      *(_QWORD *)v84 = v21;
      *(__m128 *)(v84 + 8) = _mm_loadh_ps((const double *)&v98);
      if ( v23 != v76 )
      {
        v85 = v76;
        v86 = v81;
        do
        {
          v87 = _mm_loadu_si128(v85);
          v85 = (const __m128i *)((char *)v85 + 24);
          v86 += 24;
          *(__m128i *)(v86 - 24) = v87;
          *((_QWORD *)v86 - 1) = v85[-1].m128i_i64[1];
        }
        while ( v23 != v85 );
        v96 = (__int64)&v81[24
                          * ((0xAAAAAAAAAAAAAABLL
                            * ((unsigned __int64)((char *)&v23[-2].m128i_u64[1] - (char *)v76) >> 3))
                           & 0x1FFFFFFFFFFFFFFFLL)
                          + 48];
      }
      if ( v76 )
      {
        v99 = v83;
        v98 = v81;
        operator delete(v76);
        v83 = (char *)v99;
        v81 = (char *)v98;
      }
      v98 = v81;
      a1[18] = (__m128i *)v83;
      *((__m128 *)a1 + 8) = _mm_loadh_ps((const double *)&v96);
LABEL_14:
      v25 = sub_228AB90((*a1)[2 * i].m128i_i64[0], (*a1)[2 * i].m128i_i64[1], 0);
      v27 = 0;
      if ( v26 )
      {
        --v26;
        v27 = 1;
      }
      v28 = sub_12CCD10((unsigned __int8 *)(v25 + v27), v26);
      v29 = 0;
      v30 = (unsigned int)(v28 - 2);
      if ( (unsigned int)v30 <= 0x20 )
        v29 = byte_2671FA0[v30];
      LODWORD(v106[0]) = v29;
      v31 = a1[20];
      if ( v31 == a1[21] )
      {
        sub_1FFF290((__int64)v100, v31, (int *)v106);
      }
      else
      {
        v31->m128i_i32[0] = v29;
        a1[20] = (__m128i *)((char *)v31->m128i_i64 + 4);
      }
      v32 = sub_228AAA0(v21, v95, 0);
      v34 = v33;
      v35 = v32;
      v36 = a1[23];
      if ( v36 == a1[24] )
      {
        v65 = a1[22];
        v66 = (char *)v36 - (char *)v65;
        v67 = ((char *)v36 - (char *)v65) >> 3;
        if ( 0xAAAAAAAAAAAAAAABLL * v67 )
        {
          v68 = 0x5555555555555556LL * v67;
          if ( 0xAAAAAAAAAAAAAAABLL * v67 > 0x5555555555555556LL * v67 )
          {
            v69 = -16;
          }
          else
          {
            v69 = -16;
            if ( v68 > 0xAAAAAAAAAAAAAAALL )
              goto LABEL_50;
            if ( !v68 )
            {
              v96 = 24;
              v71 = nullptr;
              v70 = nullptr;
              goto LABEL_51;
            }
            v69 = 16 * v67;
          }
        }
        else
        {
          v69 = 24;
        }
LABEL_50:
        v102 = v32;
        v103 = v34;
        v101 = (char *)v36 - (char *)v65;
        v99 = v65;
        v98 = v36;
        v70 = (char *)operator new(v69);
        v36 = (__m128i *)v98;
        v65 = (__m128i *)v99;
        v35 = v102;
        v34 = v103;
        v71 = &v70[v69];
        v96 = (__int64)(v70 + 24);
        v66 = v101;
LABEL_51:
        v72 = (__int64 *)&v70[v66];
        *v72 = v35;
        v72[1] = v34;
        v72[2] = i;
        if ( v36 != v65 )
        {
          v73 = v65;
          v74 = v70;
          do
          {
            v75 = _mm_loadu_si128(v73);
            v73 = (const __m128i *)((char *)v73 + 24);
            v74 += 24;
            *(__m128i *)(v74 - 24) = v75;
            *((_QWORD *)v74 - 1) = v73[-1].m128i_i64[1];
          }
          while ( v36 != v73 );
          v96 = (__int64)&v70[24
                            * ((0xAAAAAAAAAAAAAABLL
                              * ((unsigned __int64)((char *)&v36[-2].m128i_u64[1] - (char *)v65) >> 3))
                             & 0x1FFFFFFFFFFFFFFFLL)
                            + 48];
        }
        if ( v65 )
        {
          v98 = v70;
          operator delete(v65);
          v70 = (char *)v98;
        }
        v98 = v70;
        a1[24] = (__m128i *)v71;
        *((__m128 *)a1 + 11) = _mm_loadh_ps((const double *)&v96);
        goto LABEL_22;
      }
      v36->m128i_i64[0] = v32;
      v37 = &v36[1].m128i_i64[1];
      *(v37 - 2) = v34;
      *(v37 - 1) = i;
      a1[23] = (__m128i *)v37;
LABEL_22:
      v38 = v95;
      sub_2289790(v106, v21, v95, 0);
      v41 = (const __m128i *)sub_2289610(v106, v21, v39, v40);
      v42 = v38;
      v43 = 4;
      v104 = _mm_loadu_si128(v41);
      v105[0] = _mm_loadu_si128(v41 + 1);
      v105[1] = _mm_loadu_si128(v41 + 2);
      sub_22895F0(v106, v21, v42);
      do
      {
        v44 = (__int64)v106;
        if ( (unsigned __int8)sub_22897C0(&v104, v106) )
          break;
        if ( v105[0].m128i_i64[1] > 1uLL )
        {
          v45 = (unsigned __int64)a1[26];
          if ( (__m128i *)v45 == a1[27] )
          {
            v56 = a1[25];
            v57 = (void *)(v45 - (_QWORD)v56);
            v44 = (__int64)(v45 - (_QWORD)v56) >> 3;
            if ( 0xAAAAAAAAAAAAAAABLL * v44 )
            {
              v58 = 0x5555555555555556LL * v44;
              if ( 0xAAAAAAAAAAAAAAABLL * v44 > 0x5555555555555556LL * v44 )
              {
                v59 = -16;
              }
              else
              {
                v59 = -16;
                if ( v58 > 0xAAAAAAAAAAAAAAALL )
                  goto LABEL_39;
                if ( !v58 )
                {
                  v95 = 24;
                  v61 = 0;
                  v60 = 0;
                  goto LABEL_40;
                }
                v44 *= 16;
                v59 = v44;
              }
            }
            else
            {
              v59 = 24;
            }
LABEL_39:
            v99 = (void *)(v45 - (_QWORD)v56);
            v98 = v56;
            v96 = v45;
            v60 = operator new(v59);
            v45 = v96;
            v56 = (__m128i *)v98;
            v61 = v60 + v59;
            v95 = v60 + 24;
            v57 = v99;
LABEL_40:
            v62 = _mm_load_si128(v105);
            v16 = (__int64)v57 + v60;
            *(_QWORD *)(v16 + 16) = i;
            *(__m128i *)v16 = v62;
            if ( (__m128i *)v45 != v56 )
            {
              v63 = v56;
              v44 = v60;
              do
              {
                v64 = _mm_loadu_si128(v63);
                v63 = (const __m128i *)((char *)v63 + 24);
                v44 += 24;
                *(__m128i *)(v44 - 24) = v64;
                *(_QWORD *)(v44 - 8) = v63[-1].m128i_i64[1];
              }
              while ( (const __m128i *)v45 != v63 );
              v45 = 3 * ((0xAAAAAAAAAAAAAABLL * ((v45 - 24 - (unsigned __int64)v56) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 6;
              v16 = v60 + 8 * v45;
              v95 = v16;
            }
            if ( v56 )
            {
              v96 = v60;
              operator delete(v56);
              v60 = v96;
            }
            v96 = v60;
            a1[27] = (__m128i *)v61;
            *(__m128 *)(a1 + 25) = _mm_loadh_ps((const double *)&v95);
            goto LABEL_25;
          }
          v55 = _mm_load_si128(v105);
          v45 += 24LL;
          *(_QWORD *)(v45 - 8) = i;
          *(__m128i *)(v45 - 24) = v55;
          a1[26] = (__m128i *)v45;
        }
LABEL_25:
        sub_2289610(&v104, v44, v45, v16);
        --v43;
      }
      while ( v43 );
      v19 = *a1;
    }
  }
  v46 = a1[17];
  v47 = a1[16];
  if ( v46 != v47 )
  {
    _BitScanReverse64(&v48, 0xAAAAAAAAAAAAAAABLL * (((char *)v46 - (char *)v47) >> 3));
    sub_1FFB930(a1[16], (unsigned __int64)a1[17], 2LL * (int)(63 - (v48 ^ 0x3F)), v16, v17, v18);
    sub_1FFABF0(v47, v46);
  }
  v49 = a1[23];
  v50 = a1[22];
  if ( v49 != v50 )
  {
    _BitScanReverse64(&v51, 0xAAAAAAAAAAAAAAABLL * (((char *)v49 - (char *)v50) >> 3));
    sub_1FFB930(a1[22], (unsigned __int64)a1[23], 2LL * (int)(63 - (v51 ^ 0x3F)), v16, v17, v18);
    sub_1FFABF0(v50, v49);
  }
  v52 = a1[26];
  v53 = a1[25];
  if ( v52 != v53 )
  {
    _BitScanReverse64(&v54, 0xAAAAAAAAAAAAAAABLL * (((char *)v52 - (char *)v53) >> 3));
    sub_1FFB930(v53, (unsigned __int64)v52, 2LL * (int)(63 - (v54 ^ 0x3F)), v16, v17, v18);
    sub_1FFABF0(v53, v52);
  }
}
