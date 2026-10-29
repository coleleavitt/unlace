int sub_2E92B0()
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

  v0 = &off_2B00F80;
  v1 = &off_2B00F80;
  qword_2CA1E20 = 10;
  dword_2CA1E28 = 256;
  v68 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B014C0), (__m128i)(unsigned __int64)"Debugger/gdb");
  xmmword_2CA1E00 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B014C0),
                                (__m128i)(unsigned __int64)"Debugger/pin");
  v67 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B014C8), (__m128i)(unsigned __int64)&off_2B00F80);
  xmmword_2CA1E10 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B014D0),
                                (__m128i)(unsigned __int64)&off_2B01240);
  __cxa_atexit(nullsub_54, &xmmword_2CA1E00, &off_2AFC540);
  v2 = _mm_load_si128(&v67);
  v3 = _mm_load_si128(&v68);
  qword_2CA1DE0 = 11;
  xmmword_2CA1DD0 = (__int128)v2;
  dword_2CA1DE8 = 256;
  xmmword_2CA1DC0 = (__int128)v3;
  __cxa_atexit(nullsub_54, &xmmword_2CA1DC0, &off_2AFC540);
  v4 = nullptr;
  v5 = 0;
  qword_2CA1D70 = (__int64)"$ xnu options";
  qword_2CA1D78 = 0;
  v6 = 0;
  qword_2CA1D80 = 0;
  xmmword_2CA1D60 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2B014D8),
                                (__m128i)(unsigned __int64)"Debugger/xnu");
  dword_2CA1D88 = 256;
  qword_2CA1D90 = nullptr;
  xmmword_2CA1D98 = 0;
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
      qword_2CA1D90 = (void *)qvector_reserve(&qword_2CA1D90, v4, v6 + 1, 64);
      v4 = (char *)qword_2CA1D90;
      v17 = _mm_cvtsi32_si128(v73.m128i_u32[0]);
      v6 = xmmword_2CA1D98;
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
    v8 = (char *)qword_2CA1D90;
    *((_QWORD *)v7 + 7) = _mm_unpacklo_epi32(v16, v17).m128i_u64[0];
    v5 = *((_QWORD *)&xmmword_2CA1D98 + 1);
    v4 = v8;
    v6 = xmmword_2CA1D98 + 1;
    *(_QWORD *)&xmmword_2CA1D98 = xmmword_2CA1D98 + 1;
  }
  while ( &off_2B01240 != v1 );
  v18 = &off_2B00E40;
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
    if ( *((_QWORD *)&xmmword_2CA1D98 + 1) < (unsigned __int64)(v6 + 1) )
    {
      v67.m128i_i64[0] = (__int64)*v18;
      v70.m128i_i64[0] = v24;
      v74.m128i_i32[0] = _mm_cvtsi128_si32(v29);
      v73.m128i_i32[0] = _mm_cvtsi128_si32(v28);
      v72.m128i_i64[0] = v27.m128i_i64[0];
      v71.m128i_i64[0] = v26.m128i_i64[0];
      v69.m128i_i64[0] = v23.m128i_i64[0];
      v68.m128i_i64[0] = v21.m128i_i64[0];
      qword_2CA1D90 = (void *)qvector_reserve(&qword_2CA1D90, v8, v6 + 1, 64);
      v22 = (char *)qword_2CA1D90;
      v29 = _mm_cvtsi32_si128(v74.m128i_u32[0]);
      v6 = xmmword_2CA1D98;
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
    v6 = xmmword_2CA1D98 + 1;
    *(_QWORD *)&xmmword_2CA1D98 = xmmword_2CA1D98 + 1;
    if ( &off_2B00F80 == v18 )
      break;
    v8 = (char *)qword_2CA1D90;
  }
  qword_2CA1D80 = v6;
  qword_2CA1D78 = (__int64)qword_2CA1D90;
  __cxa_atexit(sub_4687D0, &xmmword_2CA1D60, &off_2AFC540);
  v30 = nullptr;
  v31 = 0;
  qword_2CA1D10 = (__int64)"$ ios options";
  qword_2CA1D18 = 0;
  v32 = 0;
  qword_2CA1D20 = 0;
  xmmword_2CA1D00 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B014E0),
                                (__m128i)(unsigned __int64)"Debugger/ios");
  dword_2CA1D28 = 256;
  qword_2CA1D30 = nullptr;
  xmmword_2CA1D38 = 0;
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
      qword_2CA1D30 = (void *)qvector_reserve(&qword_2CA1D30, v30, v32 + 1, 64);
      v30 = (char *)qword_2CA1D30;
      v43 = _mm_cvtsi32_si128(v72.m128i_u32[0]);
      v32 = xmmword_2CA1D38;
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
    v34 = (char *)qword_2CA1D30;
    *((_QWORD *)v33 + 7) = _mm_unpacklo_epi32(v42, v43).m128i_u64[0];
    v31 = *((_QWORD *)&xmmword_2CA1D38 + 1);
    v30 = v34;
    v32 = xmmword_2CA1D38 + 1;
    *(_QWORD *)&xmmword_2CA1D38 = xmmword_2CA1D38 + 1;
  }
  while ( &off_2B01240 != v0 );
  v44 = &off_2B00CC0;
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
    if ( *((_QWORD *)&xmmword_2CA1D38 + 1) < (unsigned __int64)(v32 + 1) )
    {
      v67.m128i_i64[0] = (__int64)*v44;
      v73.m128i_i32[0] = _mm_cvtsi128_si32(v55);
      v72.m128i_i32[0] = _mm_cvtsi128_si32(v54);
      v71.m128i_i64[0] = v53.m128i_i64[0];
      v70.m128i_i64[0] = v52.m128i_i64[0];
      v69.m128i_i64[0] = v49.m128i_i64[0];
      v68.m128i_i64[0] = v47.m128i_i64[0];
      qword_2CA1D30 = (void *)qvector_reserve(&qword_2CA1D30, v34, v32 + 1, 64);
      v48 = (char *)qword_2CA1D30;
      v55 = _mm_cvtsi32_si128(v73.m128i_u32[0]);
      v32 = xmmword_2CA1D38;
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
    v32 = xmmword_2CA1D38 + 1;
    *(_QWORD *)&xmmword_2CA1D38 = xmmword_2CA1D38 + 1;
    if ( &off_2B00E40 == v44 )
      break;
    v34 = (char *)qword_2CA1D30;
  }
  v74 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B014C0), (__m128i)(unsigned __int64)"Debugger/rmac");
  v72 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)&off_2B014C0),
          (__m128i)(unsigned __int64)"Debugger/lmac_arm");
  v76[0] = _mm_unpacklo_epi64(
             _mm_loadl_epi64((const __m128i *)&off_2B014C0),
             (__m128i)(unsigned __int64)"Debugger/lmac");
  v73 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B014F0), (__m128i)(unsigned __int64)&off_2B00980);
  v75 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B014E8), (__m128i)(unsigned __int64)&off_2B00980);
  qword_2CA1D18 = (__int64)qword_2CA1D30;
  v71 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B014F8), (__m128i)(unsigned __int64)&off_2B00980);
  v70 = _mm_unpacklo_epi64(
          _mm_loadl_epi64((const __m128i *)&off_2B014C0),
          (__m128i)(unsigned __int64)"Debugger/rmac_arm");
  v69 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B01500), (__m128i)(unsigned __int64)&off_2B00980);
  v68 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B014C0), (__m128i)(unsigned __int64)"Debugger/windbg");
  v67 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_2B014C0), (__m128i)(unsigned __int64)"Debugger/bochs");
  qword_2CA1D20 = v32;
  __cxa_atexit(sub_468790, &xmmword_2CA1D00, &off_2AFC540);
  v56 = _mm_load_si128(&v67);
  qword_2CA1CE0 = 8;
  xmmword_2CA1CC0 = (__int128)v56;
  dword_2CA1CE8 = 256;
  xmmword_2CA1CD0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2B01508),
                                (__m128i)(unsigned __int64)&off_2B00AC0);
  __cxa_atexit(nullsub_54, &xmmword_2CA1CC0, &off_2AFC540);
  v57 = _mm_load_si128(&v68);
  qword_2CA1CA0 = 4;
  xmmword_2CA1C80 = (__int128)v57;
  xmmword_2CA1C90 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B01510),
                                (__m128i)(unsigned __int64)&off_2B009C0);
  dword_2CA1CA8 = 256;
  __cxa_atexit(nullsub_54, &xmmword_2CA1C80, &off_2AFC540);
  v58 = _mm_load_si128(&v70);
  v59 = _mm_load_si128(&v69);
  qword_2CA1C60 = 1;
  xmmword_2CA1C40 = (__int128)v58;
  xmmword_2CA1C50 = (__int128)v59;
  dword_2CA1C68 = 256;
  __cxa_atexit(nullsub_54, &xmmword_2CA1C40, &off_2AFC540);
  v60 = _mm_load_si128(&v72);
  v61 = _mm_load_si128(&v71);
  qword_2CA1C20 = 1;
  xmmword_2CA1C00 = (__int128)v60;
  xmmword_2CA1C10 = (__int128)v61;
  dword_2CA1C28 = 256;
  __cxa_atexit(nullsub_54, &xmmword_2CA1C00, &off_2AFC540);
  v62 = _mm_load_si128(&v74);
  v63 = _mm_load_si128(&v73);
  qword_2CA1BE0 = 1;
  xmmword_2CA1BC0 = (__int128)v62;
  xmmword_2CA1BD0 = (__int128)v63;
  dword_2CA1BE8 = 256;
  __cxa_atexit(nullsub_54, &xmmword_2CA1BC0, &off_2AFC540);
  si128 = _mm_load_si128(v76);
  v65 = _mm_load_si128(&v75);
  qword_2CA1BA0 = 1;
  xmmword_2CA1B80 = (__int128)si128;
  xmmword_2CA1B90 = (__int128)v65;
  dword_2CA1BA8 = 256;
  __cxa_atexit(nullsub_54, &xmmword_2CA1B80, &off_2AFC540);
  qword_2CA1AF0 = (__int64)"$ debugger application";
  qword_2CA1B40 = (__int64)&dword_2CA1B30;
  qword_2CA1B48 = (__int64)&dword_2CA1B30;
  qword_2CA1B58 = (__int64)&off_2B00680;
  xmmword_2CA1B18 = 0;
  qword_2CA1AF8 = 0;
  xmmword_2CA1AE0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)off_2B01518),
                                (__m128i)(unsigned __int64)"Debugger/ProcessOptions");
  qword_2CA1B00 = 0;
  dword_2CA1B08 = 256;
  qword_2CA1B10 = 0;
  dword_2CA1B30 = 0;
  qword_2CA1B38 = 0;
  qword_2CA1B50 = 0;
  dword_2CA1B60 = 12;
  byte_2CA1B64 = 0;
  __cxa_atexit(sub_468B50, &xmmword_2CA1AE0, &off_2AFC540);
  qword_2CA1A50 = (__int64)"$ debugger configuration";
  qword_2CA1AA0 = (__int64)&dword_2CA1A90;
  qword_2CA1AA8 = (__int64)&dword_2CA1A90;
  qword_2CA1AB8 = (__int64)&off_2AFFD40;
  qword_2CA1A58 = 0;
  qword_2CA1A60 = 0;
  dword_2CA1A68 = 256;
  qword_2CA1A70 = 0;
  dword_2CA1A90 = 0;
  qword_2CA1A98 = 0;
  qword_2CA1AB0 = 0;
  dword_2CA1AC0 = 37;
  byte_2CA1AC4 = 0;
  qword_2CA1AC8 = 0;
  xmmword_2CA1A78 = 0;
  xmmword_2CA1A40 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_2B01520),
                                (__m128i)(unsigned __int64)"Debugger/DebuggerConfiguration");
  xmmword_2CA1AD0 = 0;
  return __cxa_atexit(sub_468D30, &xmmword_2CA1A40, &off_2AFC540);
}

