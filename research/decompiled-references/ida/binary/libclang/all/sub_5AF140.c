__int64 __fastcall sub_5AF140(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __m128i si128; // xmm4
  __m128i *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i *v19; // rcx
  __int64 v20; // rdi
  __int32 v21; // r10d
  char v22; // si
  __int64 v23; // rbp
  __int64 v24; // r9
  int v25; // edx
  __m128i *v26; // rax
  __int64 v27; // rdi
  __m128i v28; // xmm0
  pthread_rwlock_t *v29; // rdi
  pthread_rwlock_t *v30; // rdi
  pthread_rwlock_t *v31; // rdi
  pthread_rwlock_t *v32; // rax
  __int64 v34; // rax
  __int64 *v35; // r8
  char *v36; // rcx
  const __m128i *v37; // rdx
  const __m128i *v38; // rdi
  __m128i v39; // xmm0
  __int32 v40; // esi
  __m128i v41; // xmm0
  int v42; // eax
  __m128 v43; // [rsp+0h] [rbp-178h] BYREF
  __int32 v44; // [rsp+10h] [rbp-168h]
  char v45; // [rsp+17h] [rbp-161h]
  unsigned __int64 v46; // [rsp+18h] [rbp-160h]
  char *v47; // [rsp+20h] [rbp-158h]
  __int64 v48; // [rsp+28h] [rbp-150h]
  __int64 v49; // [rsp+38h] [rbp-140h] BYREF
  __m128i v50; // [rsp+40h] [rbp-138h] BYREF
  __m128i v51; // [rsp+50h] [rbp-128h] BYREF
  __m128i v52; // [rsp+60h] [rbp-118h] BYREF
  __m128i v53; // [rsp+70h] [rbp-108h] BYREF
  __m128i v54; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v55[2]; // [rsp+90h] [rbp-E8h] BYREF
  _OWORD v56[4]; // [rsp+A0h] [rbp-D8h] BYREF
  __m128i v57; // [rsp+E0h] [rbp-98h] BYREF

  qword_4B06B20 = (__int64)&qword_4B06B30;
  qword_4B06AF0 = 0;
  qword_4B06AF8 = 0;
  qword_4B06AE0 = (__int64)&off_4A6E058;
  qword_4B06AE8 = (unsigned int)qword_4B06AE8 & 0x80000000;
  qword_4B06B38 = (__int64)&qword_4B06B50;
  v43 = _mm_loadh_ps((const double *)&off_49EBAF8);
  qword_4B06B00 = 0;
  qword_4B06B08 = 0;
  qword_4B06B10 = 0;
  qword_4B06B18 = 0;
  qword_4B06B28 = 0x100000000LL;
  qword_4B06B40 = 1;
  dword_4B06B48 = 0;
  byte_4B06B4C = 1;
  v1 = sub_259AC30(a1, &qword_4B06B30);
  v2 = (unsigned int)qword_4B06B28;
  v3 = (unsigned int)qword_4B06B28 + 1LL;
  if ( HIDWORD(qword_4B06B28) < v3 )
  {
    sub_25D6060(&qword_4B06B30 - 2, &qword_4B06B30, v3, 8);
    v2 = (unsigned int)qword_4B06B28;
  }
  *(_QWORD *)(qword_4B06B20 + 8 * v2) = v1;
  xmmword_4B06B78 = 0;
  word_4B06B68 = 0;
  qword_4B06B60 = (__int64)&off_4A64730;
  LODWORD(qword_4B06B28) = qword_4B06B28 + 1;
  byte_4B06B58 = 0;
  qword_4B06AE0 = (__int64)off_4A6DFF0;
  qword_4B06B70 = (__int64)off_49D9168;
  xmmword_4B06B88 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBB00),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B06AE0, "debugify-quiet", 14);
  qword_4B06B08 = 32;
  qword_4B06B00 = (__int64)"Suppress verbose debugify output";
  sub_259EC40(&qword_4B06AE0);
  __cxa_atexit(sub_1F6C9D0, &qword_4B06AE0, &off_47CFE00);
  qword_4B06A30 = 0;
  qword_4B06A20 = (__int64)&off_4A6E058;
  qword_4B06A28 = (unsigned int)qword_4B06A28 & 0x80000000;
  qword_4B06A60 = (__int64)&qword_4B06A70;
  qword_4B06A38 = 0;
  qword_4B06A40 = 0;
  qword_4B06A48 = 0;
  qword_4B06A50 = 0;
  qword_4B06A58 = 0;
  qword_4B06A68 = 0x100000000LL;
  qword_4B06A78 = (__int64)&qword_4B06A90;
  qword_4B06A80 = 1;
  dword_4B06A88 = 0;
  byte_4B06A8C = 1;
  v4 = sub_259AC30(sub_1F6C9D0, &qword_4B06A70);
  v5 = (unsigned int)qword_4B06A68;
  v6 = (unsigned int)qword_4B06A68 + 1LL;
  if ( HIDWORD(qword_4B06A68) < v6 )
  {
    sub_25D6060(&qword_4B06A70 - 2, &qword_4B06A70, v6, 8);
    v5 = (unsigned int)qword_4B06A68;
  }
  *(_QWORD *)(qword_4B06A60 + 8 * v5) = v4;
  xmmword_4B06AC0 = 0;
  LODWORD(qword_4B06A68) = qword_4B06A68 + 1;
  qword_4B06AA0 = (__int64)off_4A6E4B8;
  qword_4B06A98 = 0;
  byte_4B06AB0 = 0;
  qword_4B06A20 = (__int64)off_4A6E4D8;
  qword_4B06AA8 = 0;
  qword_4B06AB8 = (__int64)off_49D9258;
  xmmword_4B06AD0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBB08),
                                (__m128i)(unsigned __int64)nullsub_374);
  sub_259F400(&qword_4B06A20, "debugify-func-limit", 19);
  qword_4B06A48 = 47;
  qword_4B06A40 = (__int64)"Set max number of processed functions per pass.";
  qword_4B06A98 = 0xFFFFFFFFLL;
  qword_4B06AA8 = 0xFFFFFFFFLL;
  byte_4B06AB0 = 1;
  sub_259EC40(&qword_4B06A20);
  __cxa_atexit(sub_25D0820, &qword_4B06A20, &off_47CFE00);
  v50.m128i_i64[1] = 9;
  v50.m128i_i64[0] = (__int64)"locations";
  v7 = _mm_load_si128(&v50);
  v51.m128i_i64[1] = (__int64)"Locations only";
  v51.m128i_i32[0] = 0;
  v56[0] = v7;
  v8 = _mm_load_si128(&v51);
  v52.m128i_i64[1] = (__int64)"location+variables";
  v52.m128i_i64[0] = 14;
  v56[1] = v8;
  v9 = _mm_load_si128(&v52);
  v54.m128i_i64[0] = (__int64)"Locations and Variables";
  v53.m128i_i64[0] = 18;
  v53.m128i_i32[2] = 1;
  v56[2] = v9;
  v10 = _mm_load_si128(&v53);
  v55[0] = v56;
  v54.m128i_i64[1] = 23;
  v55[1] = 0x400000002LL;
  v56[3] = v10;
  v11 = _mm_load_si128(&v54);
  qword_4B067C0 = (__int64)&off_4A6E058;
  qword_4B067C8 = (unsigned int)qword_4B067C8 & 0x80000000;
  qword_4B06800 = (__int64)&qword_4B06810;
  v57 = v11;
  qword_4B067D0 = 0;
  qword_4B067D8 = 0;
  qword_4B067E0 = 0;
  qword_4B067E8 = 0;
  qword_4B067F0 = 0;
  qword_4B067F8 = 0;
  qword_4B06808 = 0x100000000LL;
  qword_4B06820 = 1;
  qword_4B06818 = (__int64)&qword_4B06830;
  dword_4B06828 = 0;
  byte_4B0682C = 1;
  v12 = sub_259AC30(sub_25D0820, &qword_4B06810);
  v13 = (unsigned int)qword_4B06808;
  v14 = (unsigned int)qword_4B06808 + 1LL;
  if ( HIDWORD(qword_4B06808) < v14 )
  {
    sub_25D6060(&qword_4B06810 - 2, &qword_4B06810, v14, 8);
    v13 = (unsigned int)qword_4B06808;
  }
  si128 = _mm_load_si128((const __m128i *)&v43);
  *(_QWORD *)(qword_4B06800 + 8 * v13) = v12;
  qword_4B067C0 = (__int64)&off_4A837B8;
  v16 = (__m128i *)v55;
  xmmword_4B069F0 = 0;
  qword_4B06868 = 0x800000000LL;
  LODWORD(qword_4B06808) = qword_4B06808 + 1;
  byte_4B0684C = 0;
  dword_4B06838 = 0;
  dword_4B06848 = 0;
  qword_4B06840 = (__int64)&off_4A83748;
  qword_4B06860 = qword_4B06870;
  xmmword_4B06850 = (__int128)si128;
  xmmword_4B06A00 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EBB10),
                                (__m128i)(unsigned __int64)nullsub_603);
  sub_259F400(&qword_4B06870[-22], "debugify-level", 14);
  qword_4B067E8 = 25;
  qword_4B067E0 = (__int64)"Kind of debug info to add";
  do
  {
    v17 = v16[3].m128i_i64[0];
    v18 = v16[2].m128i_i64[1];
    v52.m128i_i64[0] = (__int64)&off_4A83748;
    v19 = &v50;
    v20 = (unsigned int)qword_4B06868;
    v21 = v16[2].m128i_i32[0];
    v52.m128i_i8[12] = 1;
    v22 = 1;
    v23 = v16[1].m128i_i64[0];
    v24 = v16[1].m128i_i64[1];
    v51.m128i_i64[1] = v17;
    v51.m128i_i64[0] = v18;
    v25 = qword_4B06868;
    v50.m128i_i64[0] = v23;
    v50.m128i_i64[1] = v24;
    v52.m128i_i32[2] = v21;
    if ( HIDWORD(qword_4B06868) < (unsigned __int64)(unsigned int)qword_4B06868 + 1 )
    {
      if ( &v50 < qword_4B06860 || &v50 >= (__m128i *)((char *)qword_4B06860 + 48 * (unsigned int)qword_4B06868) )
      {
        v46 = -1;
        v45 = 0;
      }
      else
      {
        v45 = 1;
        v46 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v50 - (_BYTE *)qword_4B06860) >> 4);
      }
      v44 = v21;
      v43.m128_u64[0] = v24;
      v34 = sub_25D5F70(&qword_4B06870[-2], qword_4B06870, (unsigned int)qword_4B06868 + 1LL, 48, &v49);
      v35 = (__int64 *)qword_4B06860;
      v24 = v43.m128_u64[0];
      v36 = (char *)v34;
      v21 = v44;
      v37 = (const __m128i *)qword_4B06860;
      v38 = (const __m128i *)((char *)qword_4B06860 + 48 * (unsigned int)qword_4B06868);
      if ( qword_4B06860 != v38 )
      {
        do
        {
          v39 = _mm_loadu_si128(v37);
          v40 = v37[2].m128i_i32[2];
          v37 += 3;
          v34 += 48;
          *(__m128i *)(v34 - 48) = v39;
          v41 = _mm_loadu_si128(v37 - 2);
          *(_DWORD *)(v34 - 8) = v40;
          LOBYTE(v40) = v37[-1].m128i_i8[12];
          *(__m128i *)(v34 - 32) = v41;
          *(_BYTE *)(v34 - 4) = v40;
          *(_QWORD *)(v34 - 16) = &off_4A83748;
        }
        while ( v38 != v37 );
      }
      v42 = v49;
      if ( v35 != qword_4B06870 )
      {
        v48 = v49;
        v47 = v36;
        v44 = v21;
        v43.m128_u64[0] = v24;
        free(v35);
        v42 = v48;
        v36 = v47;
        v21 = v44;
        v24 = v43.m128_u64[0];
      }
      v20 = (unsigned int)qword_4B06868;
      qword_4B06860 = v36;
      HIDWORD(qword_4B06868) = v42;
      v25 = qword_4B06868;
      if ( v45 )
      {
        v19 = (__m128i *)&v36[48 * v46];
        v21 = v19[2].m128i_i32[2];
        v22 = v19[2].m128i_i8[12];
      }
      else
      {
        v22 = 1;
        v19 = &v50;
      }
    }
    v16 = (__m128i *)((char *)v16 + 40);
    v26 = (__m128i *)((char *)qword_4B06860 + 48 * v20);
    v27 = *((_QWORD *)&xmmword_4B06850 + 1);
    *v26 = _mm_loadu_si128(v19);
    v28 = _mm_loadu_si128(v19 + 1);
    v26[2].m128i_i8[12] = v22;
    v26[2].m128i_i32[2] = v21;
    v26[2].m128i_i64[0] = (__int64)&off_4A83748;
    v26[1] = v28;
    LODWORD(qword_4B06868) = v25 + 1;
    sub_259ED10(v27, v23, v24);
  }
  while ( v16 != &v57 );
  dword_4B06838 = 1;
  byte_4B0684C = 1;
  dword_4B06848 = 1;
  sub_259EC40(&qword_4B067C0);
  __cxa_atexit(sub_36161C0, &qword_4B067C0, &off_47CFE00);
  qword_4B06788 = 31;
  qword_4B06780 = (__int64)"Attach debug info to everything";
  qword_4B06790 = (__int64)"debugify";
  qword_4B067A0 = (__int64)&qword_4B067B8;
  word_4B067A8 = 0;
  qword_4B06798 = 8;
  qword_4B067B0 = (__int64)sub_36157B0;
  v29 = (pthread_rwlock_t *)((__int64 (*)(void))sub_24E0D50)();
  sub_24E0FC0(v29);
  qword_4B06748 = 31;
  qword_4B06740 = (__int64)"Check debug info from -debugify";
  qword_4B06750 = (__int64)"check-debugify";
  qword_4B06760 = (__int64)&qword_4B06778;
  word_4B06768 = 0;
  qword_4B06758 = 14;
  qword_4B06770 = (__int64)sub_3615810;
  v30 = (pthread_rwlock_t *)sub_24E0D50(v29, &qword_4B06780);
  sub_24E0FC0(v30);
  qword_4B06708 = 31;
  qword_4B06700 = (__int64)"Attach debug info to a function";
  qword_4B06710 = (__int64)"debugify-function";
  qword_4B06720 = (__int64)&qword_4B06738;
  word_4B06728 = 0;
  qword_4B06718 = 17;
  qword_4B06730 = (__int64)sub_3615880;
  v31 = (pthread_rwlock_t *)sub_24E0D50(v30, &qword_4B06740);
  sub_24E0FC0(v31);
  qword_4B066C8 = 40;
  qword_4B066C0 = (__int64)"Check debug info from -debugify-function";
  qword_4B066D0 = (__int64)"check-debugify-function";
  qword_4B066E0 = (__int64)&qword_4B066F8;
  word_4B066E8 = 0;
  qword_4B066D8 = 23;
  qword_4B066F0 = (__int64)sub_36158E0;
  v32 = (pthread_rwlock_t *)sub_24E0D50(v31, 0);
  return sub_24E0FC0(v32);
}

