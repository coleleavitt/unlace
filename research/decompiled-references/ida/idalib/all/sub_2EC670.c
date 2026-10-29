int sub_2EC670()
{
  char **v0; // rbx
  char **v1; // r15
  __m128i v2; // xmm0
  __m128i v3; // xmm2
  char *v4; // rsi
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  char *v7; // rax
  char *v8; // rdi
  char *v9; // r10
  __m128i v10; // xmm2
  __m128i v11; // xmm5
  char *v12; // r14
  char v13; // r13
  __m128i v14; // xmm1
  __m128i v15; // xmm4
  __m128i v16; // xmm0
  __m128i v17; // xmm3
  char **v18; // r14
  char *v19; // rax
  char *v20; // r10
  __m128i v21; // xmm2
  char *v22; // rdx
  __m128i v23; // xmm5
  __int64 v24; // r9
  char v25; // r15
  __m128i v26; // xmm1
  __m128i v27; // xmm4
  __m128i v28; // xmm0
  __m128i v29; // xmm3
  char *v30; // rsi
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  char *v33; // rax
  char *v34; // rdi
  char *v35; // r13
  __m128i v36; // xmm2
  __m128i v37; // xmm5
  char *v38; // r14
  char v39; // r15
  __m128i v40; // xmm1
  __m128i v41; // xmm4
  __m128i v42; // xmm0
  __m128i v43; // xmm3
  char **v44; // rbx
  char *v45; // rax
  char *v46; // r8
  __m128i v47; // xmm2
  char *v48; // rdx
  __m128i v49; // xmm5
  char *v50; // r15
  char v51; // r14
  __m128i v52; // xmm1
  __m128i v53; // xmm4
  __m128i v54; // xmm0
  __m128i v55; // xmm3
  __m128i v56; // xmm0
  __m128i v57; // xmm9
  __m128i v58; // xmm8
  __m128i v59; // xmm4
  __m128i v60; // xmm7
  __m128i v61; // xmm3
  __m128i v62; // xmm6
  __m128i v63; // xmm2
  __m128i si128; // xmm5
  __m128i v65; // xmm1
  __m128i v67; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v68; // [rsp+10h] [rbp-C8h] BYREF
  __m128i v69; // [rsp+20h] [rbp-B8h] BYREF
  __m128i v70; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v71; // [rsp+40h] [rbp-98h] BYREF
  __m128i v72; // [rsp+50h] [rbp-88h] BYREF
  __m128i v73; // [rsp+60h] [rbp-78h] BYREF
  __m128i v74; // [rsp+70h] [rbp-68h] BYREF
  __m128i v75; // [rsp+80h] [rbp-58h] BYREF
  __m128i v76[4]; // [rsp+90h] [rbp-48h] BYREF

  v0 = &off_2B2AF40;
  v1 = &off_2B2AF40;
  qword_2CCBD20 = 10;
  dword_2CCBD28 = 256;
  v68 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2B480), (__m128i)(unsigned __int64)"Debugger/gdb");
  xmmword_2CCBD00 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B2B480),
                                (__m128i)(unsigned __int64)"Debugger/pin");
  v67 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B2B488), (__m128i)(unsigned __int64)&off_2B2AF40);
  xmmword_2CCBD10 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B2B490),
                                (__m128i)(unsigned __int64)&off_2B2B200);
  __cxa_atexit(nullsub_75, &xmmword_2CCBD00, &off_2B25620);
  v2 = _mm_load_si128(&v67);
  v3 = _mm_load_si128(&v68);
  qword_2CCBCE0 = 11;
  xmmword_2CCBCD0 = (__int128)v2;
  dword_2CCBCE8 = 256;
  xmmword_2CCBCC0 = (__int128)v3;
  __cxa_atexit(nullsub_75, &xmmword_2CCBCC0, &off_2B25620);
  v4 = nullptr;
  v5 = 0;
  qword_2CCBC70 = (__int64)"$ xnu options";
  qword_2CCBC78 = 0;
  v6 = 0;
  qword_2CCBC80 = 0;
  xmmword_2CCBC60 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2B2B498),
                                (__m128i)(unsigned __int64)"Debugger/xnu");
  dword_2CCBC88 = 256;
  qword_2CCBC90 = nullptr;
  xmmword_2CCBC98 = 0;
  do
  {
    v9 = *v1;
    v10 = _mm_loadl_epi64((const __m128i *)(v1 + 1));
    v11 = _mm_loadl_epi64((const __m128i *)v1 + 1);
    v12 = v1[3];
    v13 = *((_BYTE *)v1 + 32);
    v14 = _mm_loadl_epi64((const __m128i *)(v1 + 5));
    v15 = _mm_loadl_epi64((const __m128i *)v1 + 3);
    v16 = _mm_cvtsi32_si128(*((_DWORD *)v1 + 14));
    v17 = _mm_cvtsi32_si128(*((_DWORD *)v1 + 15));
    if ( v5 < v6 + 1 )
    {
      v67.m128i_i64[0] = (__int64)*v1;
      v73.m128i_i32[0] = _mm_cvtsi128_si32(v17);
      v72.m128i_i32[0] = _mm_cvtsi128_si32(v16);
      v71.m128i_i64[0] = v15.m128i_i64[0];
      v70.m128i_i64[0] = v14.m128i_i64[0];
      v69.m128i_i64[0] = v11.m128i_i64[0];
      v68.m128i_i64[0] = v10.m128i_i64[0];
      qword_2CCBC90 = (void *)qvector_reserve(&qword_2CCBC90, v4, v6 + 1, 64);
      v4 = (char *)qword_2CCBC90;
      v17 = _mm_cvtsi32_si128(v73.m128i_u32[0]);
      v6 = xmmword_2CCBC98;
      v16 = _mm_cvtsi32_si128(v72.m128i_u32[0]);
      v15 = _mm_loadl_epi64(&v71);
      v14 = _mm_loadl_epi64(&v70);
      v11 = _mm_loadl_epi64(&v69);
      v10 = _mm_loadl_epi64(&v68);
      v9 = (char *)v67.m128i_i64[0];
    }
    v1 += 8;
    v7 = &v4[64 * v6];
    *(_QWORD *)v7 = v9;
    *((_QWORD *)v7 + 3) = v12;
    v7[32] = v13;
    *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v10, v11);
    *(__m128i *)(v7 + 40) = _mm_unpacklo_epi64(v14, v15);
    v8 = (char *)qword_2CCBC90;
    *((_QWORD *)v7 + 7) = _mm_unpacklo_epi32(v16, v17).m128i_u64[0];
    v5 = *((_QWORD *)&xmmword_2CCBC98 + 1);
    v4 = v8;
    v6 = xmmword_2CCBC98 + 1;
    *(_QWORD *)&xmmword_2CCBC98 = xmmword_2CCBC98 + 1;
  }
  while ( &off_2B2B200 != v1 );
  v18 = &off_2B2AE00;
  while ( 1 )
  {
    v20 = *v18;
    v21 = _mm_loadl_epi64((const __m128i *)(v18 + 1));
    v22 = v8;
    v23 = _mm_loadl_epi64((const __m128i *)v18 + 1);
    v24 = (__int64)v18[3];
    v25 = *((_BYTE *)v18 + 32);
    v26 = _mm_loadl_epi64((const __m128i *)(v18 + 5));
    v27 = _mm_loadl_epi64((const __m128i *)v18 + 3);
    v28 = _mm_cvtsi32_si128(*((_DWORD *)v18 + 14));
    v29 = _mm_cvtsi32_si128(*((_DWORD *)v18 + 15));
    if ( *((_QWORD *)&xmmword_2CCBC98 + 1) < (unsigned __int64)(v6 + 1) )
    {
      v67.m128i_i64[0] = (__int64)*v18;
      v70.m128i_i64[0] = v24;
      v74.m128i_i32[0] = _mm_cvtsi128_si32(v29);
      v73.m128i_i32[0] = _mm_cvtsi128_si32(v28);
      v72.m128i_i64[0] = v27.m128i_i64[0];
      v71.m128i_i64[0] = v26.m128i_i64[0];
      v69.m128i_i64[0] = v23.m128i_i64[0];
      v68.m128i_i64[0] = v21.m128i_i64[0];
      qword_2CCBC90 = (void *)qvector_reserve(&qword_2CCBC90, v8, v6 + 1, 64);
      v22 = (char *)qword_2CCBC90;
      v29 = _mm_cvtsi32_si128(v74.m128i_u32[0]);
      v6 = xmmword_2CCBC98;
      v28 = _mm_cvtsi32_si128(v73.m128i_u32[0]);
      v27 = _mm_loadl_epi64(&v72);
      v26 = _mm_loadl_epi64(&v71);
      v24 = v70.m128i_i64[0];
      v23 = _mm_loadl_epi64(&v69);
      v21 = _mm_loadl_epi64(&v68);
      v20 = (char *)v67.m128i_i64[0];
    }
    v18 += 8;
    v19 = &v22[64 * v6];
    *(_QWORD *)v19 = v20;
    *((_QWORD *)v19 + 3) = v24;
    v19[32] = v25;
    *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v21, v23);
    *(__m128i *)(v19 + 40) = _mm_unpacklo_epi64(v26, v27);
    *((_QWORD *)v19 + 7) = _mm_unpacklo_epi32(v28, v29).m128i_u64[0];
    v6 = xmmword_2CCBC98 + 1;
    *(_QWORD *)&xmmword_2CCBC98 = xmmword_2CCBC98 + 1;
    if ( &off_2B2AF40 == v18 )
      break;
    v8 = (char *)qword_2CCBC90;
  }
  qword_2CCBC80 = v6;
  qword_2CCBC78 = (__int64)qword_2CCBC90;
  __cxa_atexit(sub_47CD10, &xmmword_2CCBC60, &off_2B25620);
  v30 = nullptr;
  v31 = 0;
  qword_2CCBC10 = (__int64)"$ ios options";
  qword_2CCBC18 = 0;
  v32 = 0;
  qword_2CCBC20 = 0;
  xmmword_2CCBC00 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B2B4A0),
                                (__m128i)(unsigned __int64)"Debugger/ios");
  dword_2CCBC28 = 256;
  qword_2CCBC30 = nullptr;
  xmmword_2CCBC38 = 0;
  do
  {
    v35 = *v0;
    v36 = _mm_loadl_epi64((const __m128i *)(v0 + 1));
    v37 = _mm_loadl_epi64((const __m128i *)v0 + 1);
    v38 = v0[3];
    v39 = *((_BYTE *)v0 + 32);
    v40 = _mm_loadl_epi64((const __m128i *)(v0 + 5));
    v41 = _mm_loadl_epi64((const __m128i *)v0 + 3);
    v42 = _mm_cvtsi32_si128(*((_DWORD *)v0 + 14));
    v43 = _mm_cvtsi32_si128(*((_DWORD *)v0 + 15));
    if ( v31 < v32 + 1 )
    {
      v72.m128i_i32[0] = _mm_cvtsi128_si32(v43);
      v71.m128i_i32[0] = _mm_cvtsi128_si32(v42);
      v70.m128i_i64[0] = v41.m128i_i64[0];
      v69.m128i_i64[0] = v40.m128i_i64[0];
      v68.m128i_i64[0] = v37.m128i_i64[0];
      v67.m128i_i64[0] = v36.m128i_i64[0];
      qword_2CCBC30 = (void *)qvector_reserve(&qword_2CCBC30, v30, v32 + 1, 64);
      v30 = (char *)qword_2CCBC30;
      v43 = _mm_cvtsi32_si128(v72.m128i_u32[0]);
      v32 = xmmword_2CCBC38;
      v42 = _mm_cvtsi32_si128(v71.m128i_u32[0]);
      v41 = _mm_loadl_epi64(&v70);
      v40 = _mm_loadl_epi64(&v69);
      v37 = _mm_loadl_epi64(&v68);
      v36 = _mm_loadl_epi64(&v67);
    }
    v0 += 8;
    v33 = &v30[64 * v32];
    *(_QWORD *)v33 = v35;
    *((_QWORD *)v33 + 3) = v38;
    v33[32] = v39;
    *(__m128i *)(v33 + 8) = _mm_unpacklo_epi64(v36, v37);
    *(__m128i *)(v33 + 40) = _mm_unpacklo_epi64(v40, v41);
    v34 = (char *)qword_2CCBC30;
    *((_QWORD *)v33 + 7) = _mm_unpacklo_epi32(v42, v43).m128i_u64[0];
    v31 = *((_QWORD *)&xmmword_2CCBC38 + 1);
    v30 = v34;
    v32 = xmmword_2CCBC38 + 1;
    *(_QWORD *)&xmmword_2CCBC38 = xmmword_2CCBC38 + 1;
  }
  while ( &off_2B2B200 != v0 );
  v44 = &off_2B2AC80;
  while ( 1 )
  {
    v46 = *v44;
    v47 = _mm_loadl_epi64((const __m128i *)(v44 + 1));
    v48 = v34;
    v49 = _mm_loadl_epi64((const __m128i *)v44 + 1);
    v50 = v44[3];
    v51 = *((_BYTE *)v44 + 32);
    v52 = _mm_loadl_epi64((const __m128i *)(v44 + 5));
    v53 = _mm_loadl_epi64((const __m128i *)v44 + 3);
    v54 = _mm_cvtsi32_si128(*((_DWORD *)v44 + 14));
    v55 = _mm_cvtsi32_si128(*((_DWORD *)v44 + 15));
    if ( *((_QWORD *)&xmmword_2CCBC38 + 1) < (unsigned __int64)(v32 + 1) )
    {
      v67.m128i_i64[0] = (__int64)*v44;
      v73.m128i_i32[0] = _mm_cvtsi128_si32(v55);
      v72.m128i_i32[0] = _mm_cvtsi128_si32(v54);
      v71.m128i_i64[0] = v53.m128i_i64[0];
      v70.m128i_i64[0] = v52.m128i_i64[0];
      v69.m128i_i64[0] = v49.m128i_i64[0];
      v68.m128i_i64[0] = v47.m128i_i64[0];
      qword_2CCBC30 = (void *)qvector_reserve(&qword_2CCBC30, v34, v32 + 1, 64);
      v48 = (char *)qword_2CCBC30;
      v55 = _mm_cvtsi32_si128(v73.m128i_u32[0]);
      v32 = xmmword_2CCBC38;
      v54 = _mm_cvtsi32_si128(v72.m128i_u32[0]);
      v53 = _mm_loadl_epi64(&v71);
      v52 = _mm_loadl_epi64(&v70);
      v49 = _mm_loadl_epi64(&v69);
      v47 = _mm_loadl_epi64(&v68);
      v46 = (char *)v67.m128i_i64[0];
    }
    v44 += 8;
    v45 = &v48[64 * v32];
    *(_QWORD *)v45 = v46;
    *((_QWORD *)v45 + 3) = v50;
    v45[32] = v51;
    *(__m128i *)(v45 + 8) = _mm_unpacklo_epi64(v47, v49);
    *(__m128i *)(v45 + 40) = _mm_unpacklo_epi64(v52, v53);
    *((_QWORD *)v45 + 7) = _mm_unpacklo_epi32(v54, v55).m128i_u64[0];
    v32 = xmmword_2CCBC38 + 1;
    *(_QWORD *)&xmmword_2CCBC38 = xmmword_2CCBC38 + 1;
    if ( &off_2B2AE00 == v44 )
      break;
    v34 = (char *)qword_2CCBC30;
  }
  v74 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2B480), (__m128i)(unsigned __int64)"Debugger/rmac");
  v72 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)&off_2B2B480),
          (__m128i)(unsigned __int64)"Debugger/lmac_arm");
  v76[0] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)&off_2B2B480),
             (__m128i)(unsigned __int64)"Debugger/lmac");
  v73 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B2B4B0), (__m128i)(unsigned __int64)&off_2B2A940);
  v75 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B2B4A8), (__m128i)(unsigned __int64)&off_2B2A940);
  qword_2CCBC18 = (__int64)qword_2CCBC30;
  v71 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B2B4B8), (__m128i)(unsigned __int64)&off_2B2A940);
  v70 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)&off_2B2B480),
          (__m128i)(unsigned __int64)"Debugger/rmac_arm");
  v69 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B2B4C0), (__m128i)(unsigned __int64)&off_2B2A940);
  v68 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2B480), (__m128i)(unsigned __int64)"Debugger/windbg");
  v67 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B2B480), (__m128i)(unsigned __int64)"Debugger/bochs");
  qword_2CCBC20 = v32;
  __cxa_atexit(sub_47CCD0, &xmmword_2CCBC00, &off_2B25620);
  v56 = _mm_load_si128(&v67);
  qword_2CCBBE0 = 8;
  xmmword_2CCBBC0 = (__int128)v56;
  dword_2CCBBE8 = 256;
  xmmword_2CCBBD0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2B2B4C8),
                                (__m128i)(unsigned __int64)&off_2B2AA80);
  __cxa_atexit(nullsub_75, &xmmword_2CCBBC0, &off_2B25620);
  v57 = _mm_load_si128(&v68);
  qword_2CCBBA0 = 4;
  xmmword_2CCBB80 = (__int128)v57;
  xmmword_2CCBB90 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B2B4D0),
                                (__m128i)(unsigned __int64)&off_2B2A980);
  dword_2CCBBA8 = 256;
  __cxa_atexit(nullsub_75, &xmmword_2CCBB80, &off_2B25620);
  v58 = _mm_load_si128(&v70);
  v59 = _mm_load_si128(&v69);
  qword_2CCBB60 = 1;
  xmmword_2CCBB40 = (__int128)v58;
  xmmword_2CCBB50 = (__int128)v59;
  dword_2CCBB68 = 256;
  __cxa_atexit(nullsub_75, &xmmword_2CCBB40, &off_2B25620);
  v60 = _mm_load_si128(&v72);
  v61 = _mm_load_si128(&v71);
  qword_2CCBB20 = 1;
  xmmword_2CCBB00 = (__int128)v60;
  xmmword_2CCBB10 = (__int128)v61;
  dword_2CCBB28 = 256;
  __cxa_atexit(nullsub_75, &xmmword_2CCBB00, &off_2B25620);
  v62 = _mm_load_si128(&v74);
  v63 = _mm_load_si128(&v73);
  qword_2CCBAE0 = 1;
  xmmword_2CCBAC0 = (__int128)v62;
  xmmword_2CCBAD0 = (__int128)v63;
  dword_2CCBAE8 = 256;
  __cxa_atexit(nullsub_75, &xmmword_2CCBAC0, &off_2B25620);
  si128 = _mm_load_si128(v76);
  v65 = _mm_load_si128(&v75);
  qword_2CCBAA0 = 1;
  xmmword_2CCBA80 = (__int128)si128;
  xmmword_2CCBA90 = (__int128)v65;
  dword_2CCBAA8 = 256;
  __cxa_atexit(nullsub_75, &xmmword_2CCBA80, &off_2B25620);
  qword_2CCB9F0 = (__int64)"$ debugger application";
  qword_2CCBA40 = (__int64)&dword_2CCBA30;
  qword_2CCBA48 = (__int64)&dword_2CCBA30;
  qword_2CCBA58 = (__int64)&off_2B2A640;
  xmmword_2CCBA18 = 0;
  qword_2CCB9F8 = 0;
  xmmword_2CCB9E0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2B2B4D8),
                                (__m128i)(unsigned __int64)"Debugger/ProcessOptions");
  qword_2CCBA00 = 0;
  dword_2CCBA08 = 256;
  qword_2CCBA10 = 0;
  dword_2CCBA30 = 0;
  qword_2CCBA38 = 0;
  qword_2CCBA50 = 0;
  dword_2CCBA60 = 12;
  byte_2CCBA64 = 0;
  __cxa_atexit(sub_47D090, &xmmword_2CCB9E0, &off_2B25620);
  qword_2CCB950 = (__int64)"$ debugger configuration";
  qword_2CCB9A0 = (__int64)&dword_2CCB990;
  qword_2CCB9A8 = (__int64)&dword_2CCB990;
  qword_2CCB9B8 = (__int64)&off_2B29D00;
  qword_2CCB958 = 0;
  qword_2CCB960 = 0;
  dword_2CCB968 = 256;
  qword_2CCB970 = 0;
  dword_2CCB990 = 0;
  qword_2CCB998 = 0;
  qword_2CCB9B0 = 0;
  dword_2CCB9C0 = 37;
  byte_2CCB9C4 = 0;
  qword_2CCB9C8 = 0;
  xmmword_2CCB978 = 0;
  xmmword_2CCB940 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B2B4E0),
                                (__m128i)(unsigned __int64)"Debugger/DebuggerConfiguration");
  xmmword_2CCB9D0 = 0;
  return __cxa_atexit(sub_47D270, &xmmword_2CCB940, &off_2B25620);
}
