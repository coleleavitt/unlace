unsigned __int64 __fastcall sub_334B00(__int64 a1)
{
  size_t v1; // rbx
  __int64 v2; // rax
  const void *v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 i; // rdx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  __m128i si128; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  char **v29; // r13
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rbp
  int v35; // eax
  const char *v36; // r15
  size_t v37; // rbx
  void *v38; // rax
  __int64 v39; // rbx
  int v40; // eax
  const char *v41; // r9
  size_t v42; // r15
  void *v43; // rax
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // r9
  __int64 v46; // rax
  unsigned __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // rbp
  unsigned __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rax
  const char *v59; // rsi
  const __m128i *v60; // rdi
  __int64 v61; // rax
  __int64 v62; // rcx
  __m128i v63; // xmm0
  bool v64; // cf
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // r15
  const __m128i *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  __m128i v71; // xmm0
  __int64 v73; // rdx
  __int64 v74; // rax
  const char *v75; // rsi
  const __m128i *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rcx
  __m128i v79; // xmm0
  __int64 v80; // rdx
  __int64 v81; // rax
  const char *v82; // rsi
  const __m128i *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rcx
  __m128i v86; // xmm0
  void *v87; // rax
  __int64 v88; // rax
  void *v89; // rax
  const void *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // r15
  const __m128i *v94; // rdi
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  __m128i v97; // xmm0
  __int64 v98; // rax
  __int64 v99; // r13
  const __m128i *v100; // rdi
  __int64 v101; // rax
  unsigned __int64 v102; // rdx
  __m128i v103; // xmm0
  __int64 v104; // rax
  __int64 v105; // r15
  const __m128i *v106; // rdi
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  __m128i v109; // xmm1
  __int64 v110; // rax
  __int64 v111; // r13
  const __m128i *v112; // rdi
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  __m128i v115; // xmm1
  unsigned __int64 v117; // [rsp+10h] [rbp-A8h]
  __int64 v118; // [rsp+10h] [rbp-A8h]
  __int64 v119; // [rsp+10h] [rbp-A8h]
  __int64 v120; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v121; // [rsp+10h] [rbp-A8h]
  __int64 v122; // [rsp+10h] [rbp-A8h]
  const char *src; // [rsp+18h] [rbp-A0h]
  __int64 v124; // [rsp+20h] [rbp-98h]
  __int64 v125; // [rsp+28h] [rbp-90h]
  __m128i v126; // [rsp+30h] [rbp-88h] BYREF
  __m128i v127; // [rsp+40h] [rbp-78h] BYREF
  __m128i v128; // [rsp+50h] [rbp-68h] BYREF
  _BYTE n[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v130; // [rsp+78h] [rbp-40h]

  v130 = __readfsqword(0x28u);
  memset(n, 0, sizeof(n));
  *(_QWORD *)n = qvector_reserve(n, 0, 17, 1);
  *(_QWORD *)&n[8] = 17;
  **(__m128i **)n = _mm_load_si128((const __m128i *)&xmmword_5DD060);
  *(_BYTE *)(*(_QWORD *)n + 16LL) = 0;
  *(_QWORD *)(a1 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(a1 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)a1 = &forms::abstract_form_desc_t___vtable;
  *(_QWORD *)(a1 + 144) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 88) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  v1 = *(_QWORD *)&n[8];
  if ( *(_QWORD *)&n[8] )
  {
    v89 = (void *)qalloc_or_throw(*(_QWORD *)&n[8]);
    v90 = *(const void **)n;
    *(_QWORD *)(a1 + 144) = v89;
    *(_QWORD *)(a1 + 160) = v1;
    memcpy(v89, v90, v1);
    *(_QWORD *)(a1 + 152) = v1;
  }
  *(_QWORD *)a1 = &forms::dialog_desc_t___vtable;
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  sub_32F070(a1 + 176, 2, -1);
  sub_32F070(a1 + 176, 4, -1);
  if ( *(_QWORD *)n )
  {
    *(_QWORD *)&n[8] = 0;
    qfree(*(_QWORD *)n, &byte_4);
  }
  *(_QWORD *)n = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)a1 = &setup_data_dialog_t___vtable;
  *(_QWORD *)(a1 + 256) = -1;
  *(_DWORD *)(a1 + 271) = 0;
  *(_OWORD *)&n[8] = 0;
  v2 = qvector_reserve(n, 0, 44, 1);
  *(_QWORD *)n = v2;
  *(_QWORD *)&n[8] = 44;
  *(__m128i *)v2 = _mm_load_si128((const __m128i *)&xmmword_5DC4D0);
  *(__m128i *)(v2 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC4E0);
  *(__m128i *)(v2 + 27) = _mm_load_si128((const __m128i *)&xmmword_5DD070);
  v3 = *(const void **)n;
  *(_BYTE *)(*(_QWORD *)n + 43LL) = 0;
  if ( (_BYTE *)(a1 + 208) != n )
  {
    v4 = *(_QWORD *)&n[8];
    if ( *(_QWORD *)&n[8] > 1u )
    {
      v87 = *(void **)(a1 + 208);
      if ( *(_QWORD *)(a1 + 224) < *(_QWORD *)&n[8] )
      {
        v87 = (void *)qvector_reserve(a1 + 208, *(_QWORD *)(a1 + 208), *(_QWORD *)&n[8], 1);
        *(_QWORD *)(a1 + 208) = v87;
      }
      *(_QWORD *)(a1 + 216) = v4;
      memmove(v87, v3, v4 - 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 208) + v4 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 216) = 0;
    }
  }
  sub_32F070(a1 + 176, 5, -1);
  if ( *(_QWORD *)n )
  {
    *(_QWORD *)&n[8] = 0;
    qfree(*(_QWORD *)n, &byte_5);
  }
  v5 = getinf(55);
  for ( i = 0; i != 11; ++i )
  {
    if ( _bittest64(&v5, i) )
      *(_BYTE *)(a1 + i + 264) = 1;
  }
  v7 = operator new(0x50u);
  *(_QWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 32) = 3;
  *(_OWORD *)(v7 + 16) = 0;
  *(_QWORD *)v7 = &forms::glayout_t___vtable;
  *(_QWORD *)(v7 + 56) = 0;
  *(_QWORD *)(a1 + 104) = v7;
  *(_QWORD *)(v7 + 36) = 4;
  *(_QWORD *)(v7 + 44) = 0xFFFFFFFFLL;
  *(_OWORD *)(v7 + 64) = 0;
  v8 = operator new(0x88u);
  *(_QWORD *)(v8 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v8 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 80) = 0;
  *(_QWORD *)v8 = &forms::label_t___vtable;
  *(_QWORD *)(v8 + 104) = 0;
  *(_OWORD *)(v8 + 64) = 0;
  *(_OWORD *)(v8 + 88) = 0;
  *(_OWORD *)(v8 + 112) = 0;
  v9 = qvector_reserve(v8 + 104, 0, 37, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD080);
  *(_QWORD *)(v8 + 104) = v9;
  *(_QWORD *)(v8 + 112) = 37;
  *(__m128i *)v9 = si128;
  v11 = _mm_load_si128((const __m128i *)&xmmword_5DD090);
  *(_DWORD *)(v9 + 32) = 980382752;
  *(__m128i *)(v9 + 16) = v11;
  v12 = _mm_load_si128((const __m128i *)&xmmword_5DC670);
  *(_BYTE *)(*(_QWORD *)(v8 + 104) + 36LL) = 0;
  v13 = *(_QWORD *)(v7 + 56);
  v125 = v7 + 56;
  v14 = *(_QWORD *)(v7 + 64);
  *(_BYTE *)(v8 + 128) = 0;
  v15 = *(_QWORD *)(v7 + 72);
  *(_DWORD *)(v8 + 32) = 1;
  v16 = v14 + 1;
  v126 = v12;
  if ( (unsigned __int64)&v126 >= v13 && (unsigned __int64)&v126 < v13 + 16 * v15 )
  {
    if ( v15 < v16 )
    {
      v13 = qvector_reserve(v125, 0, v14 + 1, 16);
      v104 = *(_QWORD *)(v7 + 64);
      v105 = *(_QWORD *)(v7 + 72);
      *(_QWORD *)(v7 + 72) = v15;
      v106 = *(const __m128i **)(v7 + 56);
      v107 = v104 - 1;
      if ( v107 >= 0 )
      {
        v108 = v13;
        do
        {
          v109 = _mm_loadu_si128(v106);
          v108 += 16LL;
          ++v106;
          *(__m128i *)(v108 - 16) = v109;
          v64 = v107-- == 0;
        }
        while ( !v64 );
        v106 = *(const __m128i **)(v7 + 56);
      }
      qfree(v106, nullptr);
      v14 = *(_QWORD *)(v7 + 64);
      *(_QWORD *)(v7 + 56) = v13;
      *(_QWORD *)(v7 + 72) = v105;
      v12 = _mm_load_si128((const __m128i *)&xmmword_5DC670);
    }
    *(__m128i *)(v13 + 16 * v14) = v12;
  }
  else
  {
    if ( v15 < v16 )
    {
      v13 = qvector_reserve(v125, 0, v14 + 1, 16);
      v92 = *(_QWORD *)(v7 + 64);
      v93 = *(_QWORD *)(v7 + 72);
      *(_QWORD *)(v7 + 72) = v15;
      v94 = *(const __m128i **)(v7 + 56);
      v95 = v92 - 1;
      if ( v95 >= 0 )
      {
        v96 = v13;
        do
        {
          v97 = _mm_loadu_si128(v94);
          v96 += 16LL;
          ++v94;
          *(__m128i *)(v96 - 16) = v97;
          v64 = v95-- == 0;
        }
        while ( !v64 );
        v94 = *(const __m128i **)(v7 + 56);
      }
      qfree(v94, nullptr);
      *(_QWORD *)(v7 + 56) = v13;
      v14 = *(_QWORD *)(v7 + 64);
      *(_QWORD *)(v7 + 72) = v93;
    }
    *(__m128i *)(v13 + 16 * v14) = _mm_load_si128(&v126);
  }
  ++*(_QWORD *)(v7 + 64);
  v17 = *(_QWORD *)(v7 + 8);
  v124 = v7 + 8;
  v18 = *(_QWORD *)(v7 + 16);
  if ( *(_QWORD *)(v7 + 24) < (unsigned __int64)(v18 + 1) )
  {
    v88 = qvector_reserve(v124, v17, v18 + 1, 8);
    *(_QWORD *)(v7 + 8) = v88;
    v17 = v88;
    v18 = *(_QWORD *)(v7 + 16);
  }
  *(_QWORD *)(v17 + 8 * v18) = v8;
  ++*(_QWORD *)(v7 + 16);
  v19 = operator new(0x88u);
  *(_QWORD *)v19 = &forms::label_t___vtable;
  *(_QWORD *)(v19 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v19 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v19 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v19 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v19 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v19 + 48) = 0;
  *(_QWORD *)(v19 + 56) = 0;
  *(_QWORD *)(v19 + 80) = 0;
  *(_QWORD *)(v19 + 104) = 0;
  *(_OWORD *)(v19 + 64) = 0;
  *(_OWORD *)(v19 + 88) = 0;
  *(_OWORD *)(v19 + 112) = 0;
  v20 = qvector_reserve(v19 + 104, 0, 30, 1);
  v21 = _mm_load_si128((const __m128i *)&xmmword_5DD0A0);
  *(_QWORD *)(v19 + 104) = v20;
  *(_QWORD *)(v19 + 112) = 30;
  *(__m128i *)v20 = v21;
  *(__m128i *)(v20 + 13) = _mm_load_si128((const __m128i *)&xmmword_5DD0B0);
  v22 = _mm_load_si128((const __m128i *)&xmmword_5DC680);
  *(_BYTE *)(*(_QWORD *)(v19 + 104) + 29LL) = 0;
  v23 = *(_QWORD *)(v7 + 64);
  v24 = *(_QWORD *)(v7 + 56);
  v25 = *(_QWORD *)(v7 + 72);
  *(_BYTE *)(v19 + 128) = 0;
  *(_DWORD *)(v19 + 32) = 1;
  v26 = v23 + 1;
  v127 = v22;
  if ( (unsigned __int64)&v127 >= v24 && (unsigned __int64)&v127 < v24 + 16 * v25 )
  {
    if ( v25 < v26 )
    {
      v24 = qvector_reserve(v125, 0, v23 + 1, 16);
      v110 = *(_QWORD *)(v7 + 64);
      v111 = *(_QWORD *)(v7 + 72);
      *(_QWORD *)(v7 + 72) = v25;
      v112 = *(const __m128i **)(v7 + 56);
      v113 = v110 - 1;
      if ( v113 >= 0 )
      {
        v114 = v24;
        do
        {
          v115 = _mm_loadu_si128(v112);
          v114 += 16LL;
          ++v112;
          *(__m128i *)(v114 - 16) = v115;
          v64 = v113-- == 0;
        }
        while ( !v64 );
        v112 = *(const __m128i **)(v7 + 56);
      }
      qfree(v112, nullptr);
      v23 = *(_QWORD *)(v7 + 64);
      *(_QWORD *)(v7 + 56) = v24;
      *(_QWORD *)(v7 + 72) = v111;
      v22 = _mm_load_si128((const __m128i *)&xmmword_5DC680);
    }
    *(__m128i *)(v24 + 16 * v23) = v22;
  }
  else
  {
    if ( v25 < v26 )
    {
      v24 = qvector_reserve(v125, 0, v23 + 1, 16);
      v98 = *(_QWORD *)(v7 + 64);
      v99 = *(_QWORD *)(v7 + 72);
      *(_QWORD *)(v7 + 72) = v25;
      v100 = *(const __m128i **)(v7 + 56);
      v101 = v98 - 1;
      if ( v101 >= 0 )
      {
        v102 = v24;
        do
        {
          v103 = _mm_loadu_si128(v100);
          v102 += 16LL;
          ++v100;
          *(__m128i *)(v102 - 16) = v103;
          v64 = v101-- == 0;
        }
        while ( !v64 );
        v100 = *(const __m128i **)(v7 + 56);
      }
      qfree(v100, nullptr);
      *(_QWORD *)(v7 + 56) = v24;
      v23 = *(_QWORD *)(v7 + 64);
      *(_QWORD *)(v7 + 72) = v99;
    }
    *(__m128i *)(v24 + 16 * v23) = _mm_load_si128(&v127);
  }
  v27 = *(_QWORD *)(v7 + 16);
  ++*(_QWORD *)(v7 + 64);
  v28 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v7 + 24) < (unsigned __int64)(v27 + 1) )
  {
    v91 = qvector_reserve(v124, v28, v27 + 1, 8);
    *(_QWORD *)(v7 + 8) = v91;
    v28 = v91;
    v27 = *(_QWORD *)(v7 + 16);
  }
  *(_QWORD *)(v28 + 8 * v27) = v19;
  v29 = off_8664A0;
  v30 = 1;
  ++*(_QWORD *)(v7 + 16);
  do
  {
    v34 = operator new(0x88u);
    v35 = *((_DWORD *)v29 + 6);
    v36 = *v29;
    *(_DWORD *)(v34 + 8) = 10;
    *(_DWORD *)(v34 + 12) = v35;
    *(_QWORD *)v34 = &forms::push_button_t___vtable;
    *(_QWORD *)(v34 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v34 + 24) = 0xFFFFFFFFLL;
    *(_QWORD *)(v34 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v34 + 40) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v34 + 48) = 0;
    *(_QWORD *)(v34 + 56) = 0;
    *(_QWORD *)(v34 + 80) = 0;
    *(_QWORD *)(v34 + 104) = 0;
    *(_OWORD *)(v34 + 64) = 0;
    *(_OWORD *)(v34 + 88) = 0;
    *(_OWORD *)(v34 + 112) = 0;
    if ( v36 )
    {
      v37 = strlen(v36);
      v38 = (void *)qvector_reserve(v34 + 104, 0, v37 + 1, 1);
      *(_QWORD *)(v34 + 104) = v38;
      *(_QWORD *)(v34 + 112) = v37 + 1;
      memmove(v38, v36, v37);
      *(_BYTE *)(*(_QWORD *)(v34 + 104) + v37) = 0;
    }
    *(_DWORD *)(v34 + 128) = 0;
    v39 = operator new(0x88u);
    v40 = *((_DWORD *)v29 + 7);
    v41 = v29[1];
    *(_DWORD *)(v39 + 8) = 7;
    *(_DWORD *)(v39 + 12) = v40;
    *(_QWORD *)(v39 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v39 + 24) = 0xFFFFFFFFLL;
    *(_QWORD *)(v39 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v39 + 40) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)v39 = &forms::abstract_button_t___vtable;
    *(_QWORD *)(v39 + 48) = 0;
    *(_QWORD *)(v39 + 56) = 0;
    *(_QWORD *)(v39 + 80) = 0;
    *(_QWORD *)(v39 + 104) = a1 + v30 + 263;
    *(_QWORD *)(v39 + 112) = 0;
    *(_OWORD *)(v39 + 64) = 0;
    *(_OWORD *)(v39 + 88) = 0;
    *(_OWORD *)(v39 + 120) = 0;
    if ( v41 )
    {
      src = v41;
      v42 = strlen(v41);
      v43 = (void *)qvector_reserve(v39 + 112, 0, v42 + 1, 1);
      *(_QWORD *)(v39 + 112) = v43;
      *(_QWORD *)(v39 + 120) = v42 + 1;
      memmove(v43, src, v42);
      *(_BYTE *)(*(_QWORD *)(v39 + 112) + v42) = 0;
    }
    v44 = *(_QWORD *)(v7 + 56);
    v45 = *(_QWORD *)(v7 + 72);
    *(_DWORD *)(v39 + 32) = 3;
    *(_QWORD *)v39 = &forms::check_box_t___vtable;
    v46 = *(_QWORD *)(v7 + 64);
    v128 = (__m128i)(unsigned int)v30;
    v47 = v46 + 1;
    if ( (unsigned __int64)&v128 < v44 || (unsigned __int64)&v128 >= v44 + 16 * v45 )
    {
      if ( v45 < v47 )
      {
        v117 = v45;
        v57 = qvector_reserve(v125, 0, v46 + 1, 16);
        v58 = *(_QWORD *)(v7 + 64);
        v59 = *(const char **)(v7 + 72);
        v60 = *(const __m128i **)(v7 + 56);
        *(_QWORD *)(v7 + 72) = v117;
        v61 = v58 - 1;
        if ( v61 >= 0 )
        {
          v62 = v57;
          do
          {
            v63 = _mm_loadu_si128(v60);
            v62 += 16;
            ++v60;
            *(__m128i *)(v62 - 16) = v63;
            v64 = v61-- == 0;
          }
          while ( !v64 );
          v60 = *(const __m128i **)(v7 + 56);
        }
        v118 = v57;
        qfree(v60, v59);
        v44 = v118;
        v46 = *(_QWORD *)(v7 + 64);
        *(_QWORD *)(v7 + 56) = v118;
        *(_QWORD *)(v7 + 72) = v59;
      }
      *(__m128i *)(v44 + 16 * v46) = _mm_load_si128(&v128);
    }
    else
    {
      if ( v45 < v47 )
      {
        v121 = v45;
        v80 = qvector_reserve(v125, 0, v46 + 1, 16);
        v81 = *(_QWORD *)(v7 + 64);
        v82 = *(const char **)(v7 + 72);
        v83 = *(const __m128i **)(v7 + 56);
        *(_QWORD *)(v7 + 72) = v121;
        v84 = v81 - 1;
        if ( v84 >= 0 )
        {
          v85 = v80;
          do
          {
            v86 = _mm_loadu_si128(v83);
            v85 += 16;
            ++v83;
            *(__m128i *)(v85 - 16) = v86;
            v64 = v84-- == 0;
          }
          while ( !v64 );
          v83 = *(const __m128i **)(v7 + 56);
        }
        v122 = v80;
        qfree(v83, v82);
        v44 = v122;
        v46 = *(_QWORD *)(v7 + 64);
        *(_QWORD *)(v7 + 56) = v122;
        *(_QWORD *)(v7 + 72) = v82;
      }
      v48 = v44 + 16 * v46;
      *(_DWORD *)v48 = v30;
      *(_QWORD *)(v48 + 4) = 0x100000000LL;
      *(_DWORD *)(v48 + 12) = 1;
    }
    v49 = *(_QWORD *)(v7 + 16);
    ++*(_QWORD *)(v7 + 64);
    v50 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 24) < (unsigned __int64)(v49 + 1) )
    {
      v55 = qvector_reserve(v124, v50, v49 + 1, 8);
      *(_QWORD *)(v7 + 8) = v55;
      v50 = v55;
      v49 = *(_QWORD *)(v7 + 16);
    }
    *(_QWORD *)(v50 + 8 * v49) = v34;
    *(_QWORD *)&n[8] = 0x100000001LL;
    v51 = *(_QWORD *)(v7 + 56);
    v52 = *(_QWORD *)(v7 + 64);
    ++*(_QWORD *)(v7 + 16);
    *(_QWORD *)n = (unsigned int)v30 | 0x100000000LL;
    v53 = *(_QWORD *)(v7 + 72);
    v54 = v52 + 1;
    if ( (unsigned __int64)n < v51 || (unsigned __int64)n >= v51 + 16 * v53 )
    {
      if ( v53 < v54 )
      {
        v65 = qvector_reserve(v125, 0, v52 + 1, 16);
        v66 = *(_QWORD *)(v7 + 64);
        v67 = *(_QWORD *)(v7 + 72);
        *(_QWORD *)(v7 + 72) = v53;
        v68 = *(const __m128i **)(v7 + 56);
        v69 = v66 - 1;
        if ( v69 >= 0 )
        {
          v70 = v65;
          do
          {
            v71 = _mm_loadu_si128(v68);
            v70 += 16;
            ++v68;
            *(__m128i *)(v70 - 16) = v71;
            v64 = v69-- == 0;
          }
          while ( !v64 );
          v68 = *(const __m128i **)(v7 + 56);
        }
        v119 = v65;
        qfree(v68, nullptr);
        v51 = v119;
        v52 = *(_QWORD *)(v7 + 64);
        *(_QWORD *)(v7 + 72) = v67;
        *(_QWORD *)(v7 + 56) = v119;
      }
      *(__m128i *)(v51 + 16 * v52) = _mm_load_si128((const __m128i *)n);
    }
    else
    {
      if ( v53 < v54 )
      {
        v73 = qvector_reserve(v125, 0, v52 + 1, 16);
        v74 = *(_QWORD *)(v7 + 64);
        v75 = *(const char **)(v7 + 72);
        *(_QWORD *)(v7 + 72) = v53;
        v76 = *(const __m128i **)(v7 + 56);
        v77 = v74 - 1;
        if ( v77 >= 0 )
        {
          v78 = v73;
          do
          {
            v79 = _mm_loadu_si128(v76);
            v78 += 16;
            ++v76;
            *(__m128i *)(v78 - 16) = v79;
            v64 = v77-- == 0;
          }
          while ( !v64 );
          v76 = *(const __m128i **)(v7 + 56);
        }
        v120 = v73;
        qfree(v76, v75);
        v51 = v120;
        v52 = *(_QWORD *)(v7 + 64);
        *(_QWORD *)(v7 + 56) = v120;
        *(_QWORD *)(v7 + 72) = v75;
      }
      v31 = v51 + 16 * v52;
      *(_DWORD *)v31 = v30;
      *(_QWORD *)(v31 + 4) = 0x100000001LL;
      *(_DWORD *)(v31 + 12) = 1;
    }
    v32 = *(_QWORD *)(v7 + 16);
    ++*(_QWORD *)(v7 + 64);
    v33 = *(_QWORD *)(v7 + 8);
    if ( *(_QWORD *)(v7 + 24) < (unsigned __int64)(v32 + 1) )
    {
      v56 = qvector_reserve(v124, v33, v32 + 1, 8);
      *(_QWORD *)(v7 + 8) = v56;
      v33 = v56;
      v32 = *(_QWORD *)(v7 + 16);
    }
    ++v30;
    *(_QWORD *)(v33 + 8 * v32) = v39;
    v29 += 4;
    ++*(_QWORD *)(v7 + 16);
  }
  while ( v30 != 12 );
  return v130 - __readfsqword(0x28u);
}
