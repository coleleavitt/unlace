unsigned __int64 __fastcall sub_209380(__int64 a1)
{
  size_t v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rbp
  void *v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rax
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  __m128i si128; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __m128i v22; // xmm0
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r12
  __int64 v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // rax
  __m128i v40; // xmm0
  bool v41; // cc
  __int64 v42; // rsi
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  __int64 v45; // rax
  unsigned __int64 v46; // r15
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  void *v58; // rax
  const void *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  const __m128i *v64; // rdi
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __m128i v67; // xmm0
  bool v68; // cf
  __int64 v69; // rcx
  __int64 v70; // rax
  const char *v71; // rsi
  const __m128i *v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rdx
  __m128i v75; // xmm0
  __int64 v76; // rcx
  __int64 v77; // rax
  const char *v78; // rsi
  const __m128i *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rdx
  __m128i v82; // xmm0
  __int64 v83; // rax
  __int64 v84; // rcx
  const __m128i *v85; // rdi
  __int64 v86; // rax
  unsigned __int64 v87; // rdx
  __m128i v88; // xmm0
  __int64 v89; // rcx
  __int64 v90; // rax
  const char *v91; // rsi
  const __m128i *v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rdx
  __m128i v95; // xmm1
  __int64 v96; // rcx
  __int64 v97; // rax
  const char *v98; // rsi
  const __m128i *v99; // rdi
  __int64 v100; // rax
  __int64 v101; // rdx
  __m128i v102; // xmm1
  __int64 v103; // rax
  __int64 v104; // rcx
  const __m128i *v105; // rdi
  __int64 v106; // rax
  unsigned __int64 v107; // rdx
  __m128i v108; // xmm1
  __int64 v109; // rax
  __int64 v110; // rcx
  const __m128i *v111; // rdi
  __int64 v112; // rax
  unsigned __int64 v113; // rdx
  __m128i v114; // xmm1
  __int64 v115; // [rsp+0h] [rbp-B0h]
  __int64 v116; // [rsp+0h] [rbp-B0h]
  __int64 v117; // [rsp+0h] [rbp-B0h]
  __int64 v118; // [rsp+8h] [rbp-A8h]
  unsigned __int64 v119; // [rsp+8h] [rbp-A8h]
  __int64 v120; // [rsp+8h] [rbp-A8h]
  unsigned __int64 v121; // [rsp+8h] [rbp-A8h]
  __int64 v122; // [rsp+8h] [rbp-A8h]
  unsigned __int64 v123; // [rsp+10h] [rbp-A0h]
  unsigned __int64 v124; // [rsp+10h] [rbp-A0h]
  __int64 v125; // [rsp+18h] [rbp-98h]
  unsigned __int64 v126; // [rsp+18h] [rbp-98h]
  __int64 v127; // [rsp+18h] [rbp-98h]
  __int64 v128; // [rsp+18h] [rbp-98h]
  unsigned __int64 v129; // [rsp+18h] [rbp-98h]
  __int64 v130; // [rsp+18h] [rbp-98h]
  __m128i v131; // [rsp+28h] [rbp-88h] BYREF
  __m128i v132; // [rsp+38h] [rbp-78h] BYREF
  __m128i v133; // [rsp+48h] [rbp-68h] BYREF
  _BYTE n[24]; // [rsp+58h] [rbp-58h] BYREF
  unsigned __int64 v135; // [rsp+70h] [rbp-40h]

  v135 = __readfsqword(0x28u);
  memset(n, 0, sizeof(n));
  *(_QWORD *)n = qvector_reserve(n, 0, 15, 1);
  *(_QWORD *)&n[8] = 15;
  strcpy(*(char **)n, "Format options");
  v2 = *(_QWORD *)&n[8];
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
  if ( v2 )
  {
    v58 = (void *)qalloc_or_throw(v2);
    *(_QWORD *)(a1 + 144) = v58;
    v59 = *(const void **)n;
    *(_QWORD *)(a1 + 160) = v2;
    memcpy(v58, v59, v2);
    *(_QWORD *)(a1 + 152) = v2;
  }
  *(_DWORD *)(a1 + 168) = -1;
  *(_QWORD *)a1 = &forms::dialog_desc_t___vtable;
  *(_QWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 200) = -1;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  sub_207AB0(a1 + 176, 2, -1);
  sub_207AB0(a1 + 176, 4, -1);
  if ( *(_QWORD *)n )
  {
    *(_QWORD *)&n[8] = 0;
    qfree(*(_QWORD *)n, &byte_4);
  }
  *(_BYTE *)(a1 + 264) = 0;
  *(_QWORD *)a1 = &deref_options_dialog_t___vtable;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 256) = (int)reg_int_op("DerefMaxDepth", 0, 5, "Debugger");
  *(_BYTE *)(a1 + 264) = (unsigned int)reg_int_op("DerefHideDefaultSegments", 0, 1, "Debugger") != 0;
  v3 = operator new(0x28u);
  *(_QWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 32) = 2;
  *(_OWORD *)(v3 + 16) = 0;
  *(_QWORD *)v3 = &forms::vlayout_t___vtable;
  *(_QWORD *)(a1 + 104) = v3;
  v4 = operator new(0x90u);
  *(_QWORD *)(v4 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v4 + 8) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 104) = 0;
  *(_QWORD *)v4 = &forms::container_t___vtable;
  *(_DWORD *)(v4 + 112) = 1;
  *(_QWORD *)(v4 + 120) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 88) = 0;
  *(_OWORD *)(v4 + 128) = 0;
  v5 = (void *)qvector_reserve(v4 + 120, 0, 14, 1);
  *(_QWORD *)(v4 + 120) = v5;
  *(_QWORD *)(v4 + 128) = 14;
  qmemcpy(v5, "Dereferencing", 13);
  *(_BYTE *)(*(_QWORD *)(v4 + 120) + 13LL) = 0;
  v6 = operator new(0x50u);
  *(_QWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 32) = 3;
  *(_OWORD *)(v6 + 16) = 0;
  *(_QWORD *)v6 = &forms::glayout_t___vtable;
  *(_QWORD *)(v6 + 36) = 0xFFFFFFFFLL;
  *(_QWORD *)(v6 + 44) = 0xFFFFFFFFLL;
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v4 + 104) = v6;
  *(_OWORD *)(v6 + 64) = 0;
  v7 = (_QWORD *)operator new(0xB0u);
  v7[2] = 0xFFFFFFFFLL;
  v8 = v7;
  v7[1] = 4;
  v7[4] = 0xFFFFFFFF00000000LL;
  v7[5] = 0xFFFFFFFF00000000LL;
  v7[17] = a1 + 256;
  v9 = *(_QWORD *)(a1 + 256);
  v8[6] = 0;
  v8[20] = v9;
  v8[7] = 0;
  v8[10] = 0;
  v8[13] = 0;
  v8[16] = 0;
  *v8 = &forms::number_t___vtable;
  v8[18] = 0;
  *((_BYTE *)v8 + 152) = 1;
  *((_DWORD *)v8 + 42) = 0;
  *((_DWORD *)v8 + 6) = 3;
  *(_QWORD *)((char *)v8 + 28) = 0x200000000LL;
  *((_OWORD *)v8 + 4) = 0;
  *(_OWORD *)(v8 + 11) = 0;
  *((_OWORD *)v8 + 7) = 0;
  v10 = operator new(0x88u);
  *(_QWORD *)(v10 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v10 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v10 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 48) = 0;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 80) = 0;
  *(_QWORD *)v10 = &forms::label_t___vtable;
  *(_QWORD *)(v10 + 104) = 0;
  *(_OWORD *)(v10 + 64) = 0;
  *(_OWORD *)(v10 + 88) = 0;
  *(_OWORD *)(v10 + 112) = 0;
  v11 = qvector_reserve(v10 + 104, 0, 18, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC6B0);
  *(_QWORD *)(v10 + 104) = v11;
  *(_QWORD *)(v10 + 112) = 18;
  *(__m128i *)v11 = si128;
  v13 = _mm_load_si128((const __m128i *)&xmmword_5DC670);
  *(_BYTE *)(v11 + 16) = 111;
  v14 = *(_QWORD *)(v10 + 104);
  v131 = v13;
  *(_BYTE *)(v14 + 17) = 0;
  v15 = *(_QWORD *)(v6 + 56);
  v115 = v6 + 56;
  v16 = *(_QWORD *)(v6 + 64);
  *(_BYTE *)(v10 + 128) = 0;
  v17 = *(_QWORD *)(v6 + 72);
  *(_DWORD *)(v10 + 32) = 1;
  v18 = v16 + 1;
  if ( (unsigned __int64)&v131 >= v15 && (unsigned __int64)&v131 < v15 + 16 * v17 )
  {
    if ( v17 < v18 )
    {
      v121 = v17;
      v89 = qvector_reserve(v115, 0, v16 + 1, 16);
      v90 = *(_QWORD *)(v6 + 64);
      v91 = *(const char **)(v6 + 72);
      v92 = *(const __m128i **)(v6 + 56);
      *(_QWORD *)(v6 + 72) = v121;
      v93 = v90 - 1;
      if ( v93 >= 0 )
      {
        v94 = v89;
        do
        {
          v95 = _mm_loadu_si128(v92);
          v94 += 16;
          ++v92;
          *(__m128i *)(v94 - 16) = v95;
          v68 = v93-- == 0;
        }
        while ( !v68 );
        v92 = *(const __m128i **)(v6 + 56);
      }
      v122 = v89;
      qfree(v92, v91);
      v15 = v122;
      v16 = *(_QWORD *)(v6 + 64);
      v13 = _mm_load_si128((const __m128i *)&xmmword_5DC670);
      *(_QWORD *)(v6 + 56) = v122;
      *(_QWORD *)(v6 + 72) = v91;
    }
    *(__m128i *)(v15 + 16 * v16) = v13;
  }
  else
  {
    if ( v17 < v18 )
    {
      v119 = v17;
      v69 = qvector_reserve(v115, 0, v16 + 1, 16);
      v70 = *(_QWORD *)(v6 + 64);
      v71 = *(const char **)(v6 + 72);
      v72 = *(const __m128i **)(v6 + 56);
      *(_QWORD *)(v6 + 72) = v119;
      v73 = v70 - 1;
      if ( v73 >= 0 )
      {
        v74 = v69;
        do
        {
          v75 = _mm_loadu_si128(v72);
          v74 += 16;
          ++v72;
          *(__m128i *)(v74 - 16) = v75;
          v68 = v73-- == 0;
        }
        while ( !v68 );
        v72 = *(const __m128i **)(v6 + 56);
      }
      v120 = v69;
      qfree(v72, v71);
      v15 = v120;
      v16 = *(_QWORD *)(v6 + 64);
      *(_QWORD *)(v6 + 56) = v120;
      *(_QWORD *)(v6 + 72) = v71;
    }
    *(__m128i *)(v15 + 16 * v16) = _mm_load_si128(&v131);
  }
  ++*(_QWORD *)(v6 + 64);
  v19 = *(_QWORD *)(v6 + 8);
  v118 = v6 + 8;
  v20 = *(_QWORD *)(v6 + 16);
  if ( *(_QWORD *)(v6 + 24) < (unsigned __int64)(v20 + 1) )
  {
    v55 = qvector_reserve(v118, v19, v20 + 1, 8);
    *(_QWORD *)(v6 + 8) = v55;
    v19 = v55;
    v20 = *(_QWORD *)(v6 + 16);
  }
  *(_QWORD *)(v19 + 8 * v20) = v10;
  v21 = *(_QWORD *)(v6 + 64);
  v22 = _mm_load_si128((const __m128i *)&xmmword_5DC680);
  v23 = *(_QWORD *)(v6 + 56);
  ++*(_QWORD *)(v6 + 16);
  v24 = *(_QWORD *)(v6 + 72);
  v25 = v21 + 1;
  v132 = v22;
  if ( (unsigned __int64)&v132 >= v23 && (unsigned __int64)&v132 < v23 + 16 * v24 )
  {
    if ( v24 < v25 )
    {
      v96 = qvector_reserve(v115, 0, v21 + 1, 16);
      v97 = *(_QWORD *)(v6 + 64);
      v98 = *(const char **)(v6 + 72);
      *(_QWORD *)(v6 + 72) = v24;
      v99 = *(const __m128i **)(v6 + 56);
      v100 = v97 - 1;
      if ( v100 >= 0 )
      {
        v101 = v96;
        do
        {
          v102 = _mm_loadu_si128(v99);
          v101 += 16;
          ++v99;
          *(__m128i *)(v101 - 16) = v102;
          v68 = v100-- == 0;
        }
        while ( !v68 );
        v99 = *(const __m128i **)(v6 + 56);
      }
      v128 = v96;
      qfree(v99, v98);
      v23 = v128;
      v21 = *(_QWORD *)(v6 + 64);
      v22 = _mm_load_si128((const __m128i *)&xmmword_5DC680);
      *(_QWORD *)(v6 + 56) = v128;
      *(_QWORD *)(v6 + 72) = v98;
    }
    *(__m128i *)(v23 + 16 * v21) = v22;
  }
  else
  {
    if ( v24 < v25 )
    {
      v76 = qvector_reserve(v115, 0, v21 + 1, 16);
      v77 = *(_QWORD *)(v6 + 64);
      v78 = *(const char **)(v6 + 72);
      *(_QWORD *)(v6 + 72) = v24;
      v79 = *(const __m128i **)(v6 + 56);
      v80 = v77 - 1;
      if ( v80 >= 0 )
      {
        v81 = v76;
        do
        {
          v82 = _mm_loadu_si128(v79);
          v81 += 16;
          ++v79;
          *(__m128i *)(v81 - 16) = v82;
          v68 = v80-- == 0;
        }
        while ( !v68 );
        v79 = *(const __m128i **)(v6 + 56);
      }
      v125 = v76;
      qfree(v79, v78);
      v23 = v125;
      v21 = *(_QWORD *)(v6 + 64);
      *(_QWORD *)(v6 + 56) = v125;
      *(_QWORD *)(v6 + 72) = v78;
    }
    *(__m128i *)(v23 + 16 * v21) = _mm_load_si128(&v132);
  }
  v26 = *(_QWORD *)(v6 + 16);
  ++*(_QWORD *)(v6 + 64);
  v27 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 24) < (unsigned __int64)(v26 + 1) )
  {
    v54 = qvector_reserve(v118, v27, v26 + 1, 8);
    *(_QWORD *)(v6 + 8) = v54;
    v27 = v54;
    v26 = *(_QWORD *)(v6 + 16);
  }
  *(_QWORD *)(v27 + 8 * v26) = v8;
  ++*(_QWORD *)(v6 + 16);
  v28 = operator new(0x88u);
  *(_OWORD *)(v28 + 64) = 0;
  *(_QWORD *)(v28 + 8) = 0xFFFFFFFF00000002LL;
  *(_QWORD *)(v28 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v28 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v28 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v28 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v28 + 48) = 0;
  *(_QWORD *)(v28 + 56) = 0;
  *(_QWORD *)(v28 + 80) = 0;
  *(_QWORD *)v28 = &forms::label_t___vtable;
  *(_QWORD *)(v28 + 104) = 0;
  *(_OWORD *)(v28 + 88) = 0;
  *(_OWORD *)(v28 + 112) = 0;
  v29 = qvector_reserve(v28 + 104, 0, 7, 1);
  *(_QWORD *)(v28 + 104) = v29;
  v30 = _mm_load_si128((const __m128i *)&xmmword_5DC690);
  *(_QWORD *)(v28 + 112) = 7;
  *(_WORD *)(v29 + 4) = 29548;
  *(_DWORD *)v29 = 1702258028;
  v31 = *(_QWORD *)(v28 + 104);
  v133 = v30;
  *(_BYTE *)(v31 + 6) = 0;
  v32 = *(_QWORD *)(v6 + 64);
  v33 = *(_QWORD *)(v6 + 56);
  v34 = *(_QWORD *)(v6 + 72);
  *(_BYTE *)(v28 + 128) = 0;
  *(_DWORD *)(v28 + 32) = 1;
  v35 = v32 + 1;
  if ( (unsigned __int64)&v133 >= v33 && (unsigned __int64)&v133 < v33 + 16 * v34 )
  {
    if ( v34 < v35 )
    {
      v129 = v34;
      v33 = qvector_reserve(v115, 0, v32 + 1, 16);
      v103 = *(_QWORD *)(v6 + 64);
      v104 = *(_QWORD *)(v6 + 72);
      v105 = *(const __m128i **)(v6 + 56);
      *(_QWORD *)(v6 + 72) = v129;
      v106 = v103 - 1;
      if ( v106 >= 0 )
      {
        v107 = v33;
        do
        {
          v108 = _mm_loadu_si128(v105);
          v107 += 16LL;
          ++v105;
          *(__m128i *)(v107 - 16) = v108;
          v68 = v106-- == 0;
        }
        while ( !v68 );
        v105 = *(const __m128i **)(v6 + 56);
      }
      v130 = v104;
      qfree(v105, nullptr);
      v32 = *(_QWORD *)(v6 + 64);
      *(_QWORD *)(v6 + 56) = v33;
      v30 = _mm_load_si128((const __m128i *)&xmmword_5DC690);
      *(_QWORD *)(v6 + 72) = v130;
    }
    *(__m128i *)(v33 + 16 * v32) = v30;
  }
  else
  {
    if ( v34 < v35 )
    {
      v126 = v34;
      v33 = qvector_reserve(v115, 0, v32 + 1, 16);
      v83 = *(_QWORD *)(v6 + 64);
      v84 = *(_QWORD *)(v6 + 72);
      v85 = *(const __m128i **)(v6 + 56);
      *(_QWORD *)(v6 + 72) = v126;
      v86 = v83 - 1;
      if ( v86 >= 0 )
      {
        v87 = v33;
        do
        {
          v88 = _mm_loadu_si128(v85);
          v87 += 16LL;
          ++v85;
          *(__m128i *)(v87 - 16) = v88;
          v68 = v86-- == 0;
        }
        while ( !v68 );
        v85 = *(const __m128i **)(v6 + 56);
      }
      v127 = v84;
      qfree(v85, nullptr);
      v32 = *(_QWORD *)(v6 + 64);
      *(_QWORD *)(v6 + 56) = v33;
      *(_QWORD *)(v6 + 72) = v127;
    }
    *(__m128i *)(v33 + 16 * v32) = _mm_load_si128(&v133);
  }
  v36 = *(_QWORD *)(v6 + 16);
  ++*(_QWORD *)(v6 + 64);
  v37 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 24) < (unsigned __int64)(v36 + 1) )
  {
    v57 = qvector_reserve(v118, v37, v36 + 1, 8);
    *(_QWORD *)(v6 + 8) = v57;
    v37 = v57;
    v36 = *(_QWORD *)(v6 + 16);
  }
  *(_QWORD *)(v37 + 8 * v36) = v28;
  ++*(_QWORD *)(v6 + 16);
  v38 = operator new(0x88u);
  *(_OWORD *)(v38 + 64) = 0;
  *(_QWORD *)(v38 + 8) = 0x100000007LL;
  *(_QWORD *)(v38 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v38 + 24) = 0xFFFFFFFFLL;
  *(_QWORD *)(v38 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v38 + 40) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v38 = &forms::abstract_button_t___vtable;
  *(_QWORD *)(v38 + 48) = 0;
  *(_QWORD *)(v38 + 56) = 0;
  *(_QWORD *)(v38 + 80) = 0;
  *(_QWORD *)(v38 + 104) = a1 + 264;
  *(_QWORD *)(v38 + 112) = 0;
  *(_OWORD *)(v38 + 88) = 0;
  *(_OWORD *)(v38 + 120) = 0;
  v39 = qvector_reserve(v38 + 112, 0, 22, 1);
  v40 = _mm_load_si128((const __m128i *)&xmmword_5DC6C0);
  *(_QWORD *)(v38 + 112) = v39;
  *(_QWORD *)(v38 + 120) = 22;
  *(__m128i *)v39 = v40;
  *(_QWORD *)(v39 + 13) = 0x73656D616E20746ELL;
  *(_BYTE *)(*(_QWORD *)(v38 + 112) + 21LL) = 0;
  v41 = *(_QWORD *)(v38 + 72) <= 0x4Fu;
  *(_DWORD *)(v38 + 32) = 1;
  v42 = *(_QWORD *)(v38 + 56);
  *(_QWORD *)v38 = &forms::check_box_t___vtable;
  if ( v41 )
  {
    v56 = qvector_reserve(v38 + 56, v42, 80, 1);
    *(_QWORD *)(v38 + 56) = v56;
    v42 = v56;
  }
  v43 = _mm_load_si128((const __m128i *)&xmmword_5DC6D0);
  *(_QWORD *)(v38 + 64) = 80;
  *(__m128i *)v42 = v43;
  *(__m128i *)(v42 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DC6E0);
  *(__m128i *)(v42 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC6F0);
  *(__m128i *)(v42 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DC700);
  *(__m128i *)(v42 + 63) = _mm_load_si128((const __m128i *)&xmmword_5DC710);
  v44 = _mm_load_si128((const __m128i *)&xmmword_5DC6A0);
  *(_BYTE *)(*(_QWORD *)(v38 + 56) + 79LL) = 0;
  v45 = *(_QWORD *)(v6 + 64);
  v46 = *(_QWORD *)(v6 + 56);
  v47 = *(_QWORD *)(v6 + 72);
  *(__m128i *)n = v44;
  v48 = v45 + 1;
  if ( (unsigned __int64)n >= v46 && (unsigned __int64)n < v46 + 16 * v47 )
  {
    if ( v47 < v48 )
    {
      v124 = v47;
      v46 = qvector_reserve(v115, 0, v48, 16);
      v109 = *(_QWORD *)(v6 + 64);
      v110 = *(_QWORD *)(v6 + 72);
      v111 = *(const __m128i **)(v6 + 56);
      *(_QWORD *)(v6 + 72) = v124;
      v112 = v109 - 1;
      if ( v112 >= 0 )
      {
        v113 = v46;
        do
        {
          v114 = _mm_loadu_si128(v111);
          v113 += 16LL;
          ++v111;
          *(__m128i *)(v113 - 16) = v114;
          v68 = v112-- == 0;
        }
        while ( !v68 );
        v111 = *(const __m128i **)(v6 + 56);
      }
      v117 = v110;
      qfree(v111, nullptr);
      v45 = *(_QWORD *)(v6 + 64);
      *(_QWORD *)(v6 + 56) = v46;
      v44 = _mm_load_si128((const __m128i *)&xmmword_5DC6A0);
      *(_QWORD *)(v6 + 72) = v117;
    }
    *(__m128i *)(v46 + 16 * v45) = v44;
  }
  else
  {
    if ( v47 < v48 )
    {
      v123 = v47;
      v46 = qvector_reserve(v115, 0, v48, 16);
      v62 = *(_QWORD *)(v6 + 64);
      v63 = *(_QWORD *)(v6 + 72);
      v64 = *(const __m128i **)(v6 + 56);
      *(_QWORD *)(v6 + 72) = v123;
      v65 = v62 - 1;
      if ( v65 >= 0 )
      {
        v66 = v46;
        do
        {
          v67 = _mm_loadu_si128(v64);
          v66 += 16LL;
          ++v64;
          *(__m128i *)(v66 - 16) = v67;
          v68 = v65-- == 0;
        }
        while ( !v68 );
        v64 = *(const __m128i **)(v6 + 56);
      }
      v116 = v63;
      qfree(v64, nullptr);
      v45 = *(_QWORD *)(v6 + 64);
      *(_QWORD *)(v6 + 56) = v46;
      *(_QWORD *)(v6 + 72) = v116;
    }
    *(__m128i *)(v46 + 16 * v45) = _mm_load_si128((const __m128i *)n);
  }
  v49 = *(_QWORD *)(v6 + 16);
  ++*(_QWORD *)(v6 + 64);
  v50 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 24) < (unsigned __int64)(v49 + 1) )
  {
    v61 = qvector_reserve(v118, v50, v49 + 1, 8);
    *(_QWORD *)(v6 + 8) = v61;
    v50 = v61;
    v49 = *(_QWORD *)(v6 + 16);
  }
  *(_QWORD *)(v50 + 8 * v49) = v38;
  v51 = *(_QWORD *)(v3 + 16);
  ++*(_QWORD *)(v6 + 16);
  v52 = *(_QWORD *)(v3 + 8);
  if ( *(_QWORD *)(v3 + 24) < (unsigned __int64)(v51 + 1) )
  {
    v60 = qvector_reserve(v3 + 8, v52, v51 + 1, 8);
    *(_QWORD *)(v3 + 8) = v60;
    v52 = v60;
    v51 = *(_QWORD *)(v3 + 16);
  }
  *(_QWORD *)(v52 + 8 * v51) = v4;
  ++*(_QWORD *)(v3 + 16);
  *(_DWORD *)(a1 + 168) = 0;
  return v135 - __readfsqword(0x28u);
}
