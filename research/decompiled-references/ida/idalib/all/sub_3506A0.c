__int64 sub_3506A0()
{
  size_t v0; // rax
  size_t v1; // r14
  __m128i si128; // xmm0
  size_t v3; // rax
  size_t v4; // rbx
  size_t v5; // rax
  void **p_ptr; // rbx
  size_t v7; // r13
  __m128i v8; // xmm1
  __m128 v9; // xmm0
  size_t v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  const __m128i *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r11
  __int64 v17; // r15
  int v18; // edi
  unsigned __int64 v19; // rdx
  __m128i *v20; // rcx
  __int32 v21; // eax
  __m128i v22; // xmm5
  size_t v23; // rbx
  size_t v24; // rax
  pthread_rwlock_t *v25; // rax
  size_t v26; // rbx
  size_t v27; // rax
  pthread_rwlock_t *v28; // rax
  size_t v29; // rbx
  size_t v30; // rax
  pthread_rwlock_t *v31; // rax
  size_t v32; // rbx
  size_t v33; // rax
  pthread_rwlock_t *v34; // rax
  unsigned __int64 v36; // r13
  __m128i *v37; // rax
  void *v38; // rdi
  __m128i *v39; // rdx
  const __m128i *v40; // rcx
  const __m128i *v41; // rsi
  __m128i v42; // xmm2
  __int32 v43; // r8d
  __m128i v44; // xmm3
  int v45; // edx
  __int128 v46; // [rsp+0h] [rbp-178h] BYREF
  __m128i v47; // [rsp+10h] [rbp-168h] BYREF
  __int64 *v48; // [rsp+28h] [rbp-150h]
  void **v49; // [rsp+30h] [rbp-148h]
  __int64 v50; // [rsp+38h] [rbp-140h]
  char *v51; // [rsp+40h] [rbp-138h]
  __int64 v52; // [rsp+48h] [rbp-130h]
  __int64 v53; // [rsp+58h] [rbp-120h] BYREF
  _QWORD v54[5]; // [rsp+60h] [rbp-118h] BYREF
  int v55; // [rsp+88h] [rbp-F0h]
  char v56; // [rsp+8Ch] [rbp-ECh]
  void *ptr; // [rsp+90h] [rbp-E8h] BYREF
  __int64 v58; // [rsp+98h] [rbp-E0h]
  _QWORD v59[2]; // [rsp+A0h] [rbp-D8h] BYREF
  int v60; // [rsp+B0h] [rbp-C8h]
  const char *v61; // [rsp+B8h] [rbp-C0h]
  __int64 v62; // [rsp+C0h] [rbp-B8h]
  const char *v63; // [rsp+C8h] [rbp-B0h]
  __int64 v64; // [rsp+D0h] [rbp-A8h]
  int v65; // [rsp+D8h] [rbp-A0h]
  const char *v66; // [rsp+E0h] [rbp-98h]
  __int64 v67; // [rsp+E8h] [rbp-90h]

  *(_QWORD *)&v46 = &qword_2D0CC00;
  v47 = (__m128i)_mm_loadh_ps((const double *)&v46);
  sub_200F820(&qword_2D0CFE0, 0, 0);
  word_2D0D068 = 0;
  byte_2D0D058 = 0;
  xmmword_2D0D088 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  v46 = xmmword_2D0D088;
  qword_2D0D060 = (__int64)off_2C714E8;
  qword_2D0CFE0 = (__int64)off_2C75848;
  qword_2D0D070 = (__int64)off_2BEAB08;
  v0 = j__strlen("debugify-atoms");
  sub_2217250(&qword_2D0CFE0, "debugify-atoms", v0);
  byte_2D0D058 = 0;
  word_2D0D068 = 256;
  sub_2218140(&qword_2D0CFE0);
  __cxa_atexit(sub_200E190, &qword_2D0CFE0, &off_2B25620);
  v1 = j__strlen("Suppress verbose debugify output");
  sub_200F820(&qword_2D0CF20, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v46);
  word_2D0CFA8 = 0;
  xmmword_2D0CFC8 = (__int128)si128;
  qword_2D0CFA0 = (__int64)off_2C714E8;
  qword_2D0CF20 = (__int64)off_2C75848;
  qword_2D0CFB0 = (__int64)off_2BEAB08;
  byte_2D0CF98 = 0;
  v3 = j__strlen("debugify-quiet");
  sub_2217250(&qword_2D0CF20, "debugify-quiet", v3);
  qword_2D0CF48 = v1;
  qword_2D0CF40 = (__int64)"Suppress verbose debugify output";
  sub_2218140(&qword_2D0CF20);
  __cxa_atexit(sub_200E190, &qword_2D0CF20, &off_2B25620);
  v4 = j__strlen("Set max number of processed functions per pass.");
  sub_200F820(&qword_2D0CE60, 0, 0);
  qword_2D0CED8 = 0;
  qword_2D0CEE8 = 0;
  qword_2D0CEE0 = (__int64)off_2C71B28;
  xmmword_2D0CF10 = (__int128)_mm_loadh_ps((const double *)off_2C78C90);
  byte_2D0CEF0 = 0;
  qword_2D0CE60 = (__int64)off_2C71B48;
  qword_2D0CEF8 = (__int64)off_2BEABC8;
  v5 = j__strlen("debugify-func-limit");
  sub_2217250(&qword_2D0CE60, "debugify-func-limit", v5);
  qword_2D0CE88 = v4;
  qword_2D0CE80 = (__int64)"Set max number of processed functions per pass.";
  p_ptr = &ptr;
  qword_2D0CED8 = 0xFFFFFFFFLL;
  qword_2D0CEE8 = 0xFFFFFFFFLL;
  byte_2D0CEF0 = 1;
  sub_2218140(&qword_2D0CE60);
  __cxa_atexit(sub_2014000, &qword_2D0CE60, &off_2B25620);
  v59[1] = 9;
  ptr = v59;
  v59[0] = "locations";
  v61 = "Locations only";
  v63 = "location+variables";
  v66 = "Locations and Variables";
  v60 = 0;
  v62 = 14;
  v64 = 18;
  v65 = 1;
  v67 = 23;
  v58 = 0x400000002LL;
  v7 = j__strlen("Kind of debug info to add");
  sub_200F820(&qword_2D0CC00, 0, 0);
  v8 = _mm_load_si128(&v47);
  qword_2D0CC00 = (__int64)&off_2C77250;
  qword_2D0CCA8 = 0x800000000LL;
  *(_QWORD *)&v46 = nullsub_1528;
  xmmword_2D0CC90 = (__int128)v8;
  dword_2D0CC78 = 0;
  v9 = _mm_loadh_ps((const double *)&v46);
  byte_2D0CC8C = 0;
  xmmword_2D0CE40 = (__int128)v9;
  dword_2D0CC88 = 0;
  qword_2D0CC80 = (__int64)&off_2C771E0;
  qword_2D0CCA0 = &unk_2D0CCB0;
  v10 = j__strlen("debugify-level");
  sub_2217250(&qword_2D0CC00, "debugify-level", v10);
  qword_2D0CC20 = (__int64)"Kind of debug info to add";
  qword_2D0CC28 = v7;
  v48 = &v53;
  *(_QWORD *)&v46 = (char *)ptr + 40 * (unsigned int)v58;
  if ( ptr != (void *)v46 )
  {
    v49 = &ptr;
    v11 = ptr;
    do
    {
      v12 = v11[3];
      v13 = *((_DWORD *)v11 + 4);
      v54[4] = &off_2C771E0;
      v14 = (const __m128i *)v54;
      v15 = v11[4];
      v16 = *v11;
      v56 = 1;
      v17 = v11[1];
      v54[2] = v12;
      v54[3] = v15;
      v55 = v13;
      v18 = qword_2D0CCA8;
      v19 = (unsigned int)qword_2D0CCA8 + 1LL;
      v54[0] = v16;
      v54[1] = v17;
      v20 = (__m128i *)((char *)qword_2D0CCA0 + 48 * (unsigned int)qword_2D0CCA8);
      if ( v19 > HIDWORD(qword_2D0CCA8) )
      {
        v36 = -1;
        v47.m128i_i8[0] = 0;
        if ( qword_2D0CCA0 <= v54 && v20 > (__m128i *)v54 )
        {
          v47.m128i_i8[0] = 1;
          v36 = 0xAAAAAAAAAAAAAAABLL * (((char *)v54 - (_BYTE *)qword_2D0CCA0) >> 4);
        }
        v50 = v16;
        v37 = (__m128i *)sub_2237400((char *)&unk_2D0CCB0 - 16, &unk_2D0CCB0, v19, 48, v48);
        v16 = v50;
        v38 = qword_2D0CCA0;
        v39 = v37;
        v40 = (const __m128i *)qword_2D0CCA0;
        v41 = (const __m128i *)((char *)qword_2D0CCA0 + 48 * (unsigned int)qword_2D0CCA8);
        if ( qword_2D0CCA0 != v41 )
        {
          do
          {
            v42 = _mm_loadu_si128(v40);
            v43 = v40[2].m128i_i32[2];
            v40 += 3;
            v39 += 3;
            v39[-3] = v42;
            v44 = _mm_loadu_si128(v40 - 2);
            v39[-1].m128i_i32[2] = v43;
            LOBYTE(v43) = v40[-1].m128i_i8[12];
            v39[-2] = v44;
            v39[-1].m128i_i8[12] = v43;
            v39[-1].m128i_i64[0] = (__int64)&off_2C771E0;
          }
          while ( v41 != v40 );
        }
        v45 = v53;
        if ( v38 != &unk_2D0CCB0 )
        {
          v52 = v53;
          v51 = (char *)v37;
          v50 = v16;
          free(v38);
          v45 = v52;
          v37 = (__m128i *)v51;
          v16 = v50;
        }
        HIDWORD(qword_2D0CCA8) = v45;
        v14 = (const __m128i *)v54;
        qword_2D0CCA0 = v37;
        v18 = qword_2D0CCA8;
        v20 = &v37[3 * (unsigned int)qword_2D0CCA8];
        if ( v47.m128i_i8[0] )
          v14 = &v37[3 * v36];
      }
      v21 = v14[2].m128i_i32[2];
      v11 += 5;
      *v20 = _mm_loadu_si128(v14);
      v22 = _mm_loadu_si128(v14 + 1);
      v20[2].m128i_i32[2] = v21;
      LOBYTE(v21) = v14[2].m128i_i8[12];
      v20[2].m128i_i64[0] = (__int64)&off_2C771E0;
      v20[2].m128i_i8[12] = v21;
      v20[1] = v22;
      LODWORD(qword_2D0CCA8) = v18 + 1;
      sub_2216D40(*((_QWORD *)&xmmword_2D0CC90 + 1), v16, v17);
    }
    while ( (_QWORD *)v46 != v11 );
    p_ptr = v49;
  }
  dword_2D0CC78 = 1;
  byte_2D0CC8C = 1;
  dword_2D0CC88 = 1;
  sub_2218140(&qword_2D0CC00);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  __cxa_atexit(sub_22BFD50, &qword_2D0CC00, &off_2B25620);
  v23 = j__strlen("Attach debug info to everything");
  v24 = j__strlen("debugify");
  qword_2D0CBC8 = v23;
  qword_2D0CBD8 = v24;
  qword_2D0CBE0 = (__int64)&unk_2D0CBF8;
  word_2D0CBE8 = 0;
  qword_2D0CBC0 = (__int64)"Attach debug info to everything";
  qword_2D0CBD0 = (__int64)"debugify";
  qword_2D0CBF0 = (__int64)sub_22BFF70;
  v25 = (pthread_rwlock_t *)((__int64 (*)(void))sub_20BFB80)();
  sub_20C00B0(v25);
  v26 = j__strlen("Check debug info from -debugify");
  v27 = j__strlen("check-debugify");
  qword_2D0CB88 = v26;
  qword_2D0CB98 = v27;
  qword_2D0CBA0 = (__int64)&unk_2D0CBB8;
  qword_2D0CB80 = (__int64)"Check debug info from -debugify";
  qword_2D0CB90 = (__int64)"check-debugify";
  word_2D0CBA8 = 0;
  qword_2D0CBB0 = (__int64)sub_22BFFD0;
  v28 = (pthread_rwlock_t *)sub_20BFB80("check-debugify", &qword_2D0CBC0);
  sub_20C00B0(v28);
  v29 = j__strlen("Attach debug info to a function");
  v30 = j__strlen("debugify-function");
  qword_2D0CB48 = v29;
  qword_2D0CB58 = v30;
  qword_2D0CB50 = (__int64)"debugify-function";
  qword_2D0CB60 = (__int64)&unk_2D0CB78;
  word_2D0CB68 = 0;
  qword_2D0CB40 = (__int64)"Attach debug info to a function";
  qword_2D0CB70 = (__int64)sub_22C0040;
  v31 = (pthread_rwlock_t *)sub_20BFB80("debugify-function", "Attach debug info to a function");
  sub_20C00B0(v31);
  v32 = j__strlen("Check debug info from -debugify-function");
  v33 = j__strlen("check-debugify-function");
  qword_2D0CB08 = v32;
  qword_2D0CB18 = v33;
  qword_2D0CB00 = (__int64)"Check debug info from -debugify-function";
  qword_2D0CB20 = (__int64)&unk_2D0CB38;
  qword_2D0CB10 = (__int64)"check-debugify-function";
  word_2D0CB28 = 0;
  qword_2D0CB30 = (__int64)sub_22C00A0;
  v34 = (pthread_rwlock_t *)sub_20BFB80("check-debugify-function", 0);
  return sub_20C00B0(v34);
}
