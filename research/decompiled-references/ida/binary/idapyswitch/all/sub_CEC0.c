unsigned __int64 __fastcall sub_CEC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  __m128i v12; // xmm0
  void *v13; // rdi
  __int64 v14; // r15
  __m128i v15; // xmm0
  void *v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm6
  char *v19; // r8
  __int64 v20; // r13
  __int64 i; // r15
  char *v22; // rsi
  void *v23; // rdi
  __m128i v24; // xmm2
  __int64 v25; // rax
  const __m128i *v26; // rcx
  void *v27; // rax
  __m128i v28; // xmm3
  void *v29; // rdx
  __m128i v30; // xmm1
  __m128i v31; // xmm2
  __int32 v32; // esi
  void *v33; // rax
  __m128i v34; // xmm3
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r13
  __int64 v38; // r15
  __int64 v39; // rbx
  __m128i v40; // xmm0
  void *v41; // rdi
  __int64 v42; // rbx
  __m128i v43; // xmm0
  void *v44; // rdi
  __int64 v45; // rax
  __m128i v46; // xmm1
  char *v47; // rsi
  __int64 v48; // r8
  __int64 k; // rbx
  char *v50; // rdx
  void *v51; // rdi
  __m128i v52; // xmm1
  __int64 v53; // r14
  __int64 v54; // rdx
  __int64 v55; // r12
  __int64 v56; // rbx
  __m128i v57; // xmm0
  void *v58; // rdi
  __int64 v59; // rbx
  __m128i v60; // xmm0
  void *v61; // rdi
  __m128i v62; // xmm3
  __int64 v63; // r13
  char *v64; // rsi
  __int64 v65; // rbx
  __int64 j; // r15
  char *v67; // rcx
  void *v68; // rdi
  __m128i v69; // xmm3
  int v70; // eax
  int v71; // edi
  unsigned __int64 v72; // xmm0_8
  void *v73; // rdi
  void *v74; // rdi
  void *v75; // rbx
  __m128i v76; // xmm0
  char *v77; // rdx
  __m128i v78; // xmm3
  void *v79; // r12
  __int64 v80; // rbp
  __int64 m; // rbx
  char *v82; // rax
  void *v83; // rdi
  __m128i v84; // xmm3
  char v85; // al
  char *v86; // rdx
  __int64 v87; // rbp
  __int64 v88; // rbx
  char *v89; // rax
  void *v90; // rdi
  char v92; // al
  __m128i v93; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v94; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v95; // [rsp+20h] [rbp-D8h] BYREF
  __int64 (__fastcall *v96)(__int64, __int64); // [rsp+30h] [rbp-C8h]
  __int64 v97; // [rsp+38h] [rbp-C0h]
  __int64 v98; // [rsp+40h] [rbp-B8h]
  const __m128i *v99; // [rsp+48h] [rbp-B0h]
  __int64 v100; // [rsp+50h] [rbp-A8h] BYREF
  __int32 v101; // [rsp+58h] [rbp-A0h]
  void *v102; // [rsp+60h] [rbp-98h]
  __m128i v103; // [rsp+68h] [rbp-90h]
  void *v104; // [rsp+78h] [rbp-80h]
  __m128i v105; // [rsp+80h] [rbp-78h] BYREF
  void *ptr; // [rsp+90h] [rbp-68h]
  __m128i v107; // [rsp+98h] [rbp-60h] BYREF
  char v108; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v109; // [rsp+B8h] [rbp-40h]

  v97 = a2;
  v98 = a3;
  v99 = a4;
  v96 = a5;
  v109 = __readfsqword(0x28u);
  v95.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 >= v95.m128i_i64[0] )
  {
    v6 = v97;
  }
  else
  {
    v6 = a2;
    do
    {
      v7 = v96(a1 + 192 * (v6 + 1), a1 + 192 * (v6 + 1) - 96);
      v8 = v6;
      v6 = 2 * (v6 + 1) - v7;
      v9 = a1 + 96 * v8;
      v10 = a1 + 96 * v6;
      *(_DWORD *)v9 = *(_DWORD *)v10;
      *(_DWORD *)(v9 + 4) = *(_DWORD *)(v10 + 4);
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v10 + 8);
      v11 = *(_QWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 16) = 0;
      v12 = _mm_loadu_si128((const __m128i *)(v10 + 24));
      *(_OWORD *)(v10 + 24) = 0;
      v13 = *(void **)(v9 + 16);
      if ( v13 )
      {
        *(_QWORD *)(v9 + 24) = 0;
        v93 = v12;
        j__free(v13);
        v12 = _mm_load_si128(&v93);
      }
      *(_QWORD *)(v9 + 16) = v11;
      *(__m128i *)(v9 + 24) = v12;
      v14 = *(_QWORD *)(v10 + 40);
      v15 = _mm_loadu_si128((const __m128i *)(v10 + 48));
      *(_QWORD *)(v10 + 40) = 0;
      *(_OWORD *)(v10 + 48) = 0;
      v16 = *(void **)(v9 + 40);
      if ( v16 )
      {
        *(_QWORD *)(v9 + 48) = 0;
        v93 = v15;
        j__free(v16);
        v15 = _mm_load_si128(&v93);
      }
      *(_QWORD *)(v9 + 40) = v14;
      *(__m128i *)(v9 + 48) = v15;
      v17 = *(_QWORD *)(v10 + 64);
      v18 = _mm_loadu_si128((const __m128i *)(v10 + 72));
      *(_QWORD *)(v10 + 64) = 0;
      *(_OWORD *)(v10 + 72) = 0;
      v19 = *(char **)(v9 + 64);
      v93.m128i_i64[0] = v17;
      v94 = v18;
      if ( v19 )
      {
        v20 = *(_QWORD *)(v9 + 72);
        if ( v20 )
        {
          for ( i = 0; i != v20; ++i )
          {
            v22 = &v19[24 * i];
            v23 = *(void **)v22;
            if ( *(_QWORD *)v22 )
            {
              *((_QWORD *)v22 + 1) = 0;
              j__free(v23);
              v19 = *(char **)(v9 + 64);
            }
          }
        }
        *(_QWORD *)(v9 + 72) = 0;
        j__free(v19);
      }
      v24 = _mm_load_si128(&v94);
      *(_QWORD *)(v9 + 64) = v93.m128i_i64[0];
      v25 = v95.m128i_i64[0];
      *(__m128i *)(v9 + 72) = v24;
      *(_BYTE *)(v9 + 88) = *(_BYTE *)(v10 + 88);
    }
    while ( v6 < v25 );
  }
  if ( (v98 & 1) == 0 && (v98 - 2) / 2 == v6 )
  {
    v53 = 2 * (v6 + 1);
    v54 = a1 + 192 * (v6 + 1) - 96;
    v55 = a1 + 96 * v6;
    *(_DWORD *)v55 = *(_DWORD *)v54;
    *(_DWORD *)(v55 + 4) = *(_DWORD *)(v54 + 4);
    *(_DWORD *)(v55 + 8) = *(_DWORD *)(v54 + 8);
    v56 = *(_QWORD *)(v54 + 16);
    v57 = _mm_loadu_si128((const __m128i *)(v54 + 24));
    *(_QWORD *)(v54 + 16) = 0;
    *(_OWORD *)(v54 + 24) = 0;
    v58 = *(void **)(v55 + 16);
    if ( v58 )
    {
      *(_QWORD *)(v55 + 24) = 0;
      v93.m128i_i64[0] = v54;
      v94 = v57;
      j__free(v58);
      v57 = _mm_load_si128(&v94);
      v54 = v93.m128i_i64[0];
    }
    *(_QWORD *)(v55 + 16) = v56;
    *(__m128i *)(v55 + 24) = v57;
    v59 = *(_QWORD *)(v54 + 40);
    v60 = _mm_loadu_si128((const __m128i *)(v54 + 48));
    *(_QWORD *)(v54 + 40) = 0;
    *(_OWORD *)(v54 + 48) = 0;
    v61 = *(void **)(v55 + 40);
    if ( v61 )
    {
      *(_QWORD *)(v55 + 48) = 0;
      v93.m128i_i64[0] = v54;
      v94 = v60;
      j__free(v61);
      v60 = _mm_load_si128(&v94);
      v54 = v93.m128i_i64[0];
    }
    *(__m128i *)(v55 + 48) = v60;
    *(_QWORD *)(v55 + 40) = v59;
    v62 = _mm_loadu_si128((const __m128i *)(v54 + 72));
    v63 = *(_QWORD *)(v54 + 64);
    *(_OWORD *)(v54 + 72) = 0;
    *(_QWORD *)(v54 + 64) = 0;
    v64 = *(char **)(v55 + 64);
    v94 = v62;
    if ( v64 )
    {
      v65 = *(_QWORD *)(v55 + 72);
      if ( v65 )
      {
        for ( j = 0; j != v65; ++j )
        {
          v67 = &v64[24 * j];
          v68 = *(void **)v67;
          if ( *(_QWORD *)v67 )
          {
            *((_QWORD *)v67 + 1) = 0;
            v93.m128i_i64[0] = v54;
            j__free(v68);
            v64 = *(char **)(v55 + 64);
            v54 = v93.m128i_i64[0];
          }
        }
      }
      *(_QWORD *)(v55 + 72) = 0;
      v93.m128i_i64[0] = v54;
      j__free(v64);
      v54 = v93.m128i_i64[0];
    }
    v69 = _mm_load_si128(&v94);
    *(_QWORD *)(v55 + 64) = v63;
    v6 = v53 - 1;
    *(__m128i *)(v55 + 72) = v69;
    *(_BYTE *)(v55 + 88) = *(_BYTE *)(v54 + 88);
  }
  v26 = v99;
  v27 = (void *)v99[2].m128i_i64[1];
  v28 = _mm_loadu_si128(v99 + 3);
  v99[3] = 0;
  v29 = (void *)v26[1].m128i_i64[0];
  v30 = _mm_loadu_si128((const __m128i *)((char *)v26 + 24));
  *(const __m128i *)((char *)&v26[1] + 8) = 0;
  v31 = _mm_loadl_epi64(v26);
  v32 = v26->m128i_i32[2];
  v104 = v27;
  v33 = (void *)v26[4].m128i_i64[0];
  v105 = v28;
  v34 = _mm_loadu_si128((const __m128i *)((char *)v26 + 72));
  v101 = v32;
  ptr = v33;
  LOBYTE(v33) = v26[5].m128i_i8[8];
  v102 = v29;
  v108 = (char)v33;
  v26[1].m128i_i64[0] = 0;
  v26[2].m128i_i64[1] = 0;
  v35 = v97;
  v103 = v30;
  v26[4].m128i_i64[0] = 0;
  v36 = (v6 - 1) / 2;
  v100 = v31.m128i_i64[0];
  v107 = v34;
  *(const __m128i *)((char *)&v26[4] + 8) = 0;
  if ( v6 <= v35 )
  {
    v71 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v31, 229));
    v70 = _mm_cvtsi128_si32(v31);
    v72 = _mm_srli_si128(v30, 8).m128i_u64[0];
    v38 = a1 + 96 * v6;
  }
  else
  {
    while ( 1 )
    {
      v37 = a1 + 96 * v36;
      v38 = a1 + 96 * v6;
      if ( !(unsigned __int8)v96(v37, (__int64)&v100) )
      {
        v70 = v100;
        v71 = HIDWORD(v100);
        v32 = v101;
        v29 = v102;
        v72 = v103.m128i_u64[1];
        v30.m128i_i64[0] = v103.m128i_i64[0];
        goto LABEL_46;
      }
      *(_DWORD *)v38 = *(_DWORD *)v37;
      *(_DWORD *)(v38 + 4) = *(_DWORD *)(v37 + 4);
      *(_DWORD *)(v38 + 8) = *(_DWORD *)(v37 + 8);
      v39 = *(_QWORD *)(v37 + 16);
      v40 = _mm_loadu_si128((const __m128i *)(v37 + 24));
      *(_QWORD *)(v37 + 16) = 0;
      *(_OWORD *)(v37 + 24) = 0;
      v41 = *(void **)(v38 + 16);
      if ( v41 )
      {
        *(_QWORD *)(v38 + 24) = 0;
        v93 = v40;
        j__free(v41);
        v40 = _mm_load_si128(&v93);
      }
      *(_QWORD *)(v38 + 16) = v39;
      *(__m128i *)(v38 + 24) = v40;
      v42 = *(_QWORD *)(v37 + 40);
      v43 = _mm_loadu_si128((const __m128i *)(v37 + 48));
      *(_QWORD *)(v37 + 40) = 0;
      *(_OWORD *)(v37 + 48) = 0;
      v44 = *(void **)(v38 + 40);
      if ( v44 )
      {
        *(_QWORD *)(v38 + 48) = 0;
        v93 = v43;
        j__free(v44);
        v43 = _mm_load_si128(&v93);
      }
      *(_QWORD *)(v38 + 40) = v42;
      *(__m128i *)(v38 + 48) = v43;
      v45 = *(_QWORD *)(v37 + 64);
      v46 = _mm_loadu_si128((const __m128i *)(v37 + 72));
      *(_QWORD *)(v37 + 64) = 0;
      *(_OWORD *)(v37 + 72) = 0;
      v47 = *(char **)(v38 + 64);
      v94.m128i_i64[0] = v45;
      v95 = v46;
      if ( v47 )
      {
        v48 = *(_QWORD *)(v38 + 72);
        if ( v48 )
        {
          for ( k = 0; k != v48; ++k )
          {
            v50 = &v47[24 * k];
            v51 = *(void **)v50;
            if ( *(_QWORD *)v50 )
            {
              *((_QWORD *)v50 + 1) = 0;
              v93.m128i_i64[0] = v48;
              j__free(v51);
              v47 = *(char **)(v38 + 64);
              v48 = v93.m128i_i64[0];
            }
          }
        }
        *(_QWORD *)(v38 + 72) = 0;
        j__free(v47);
      }
      v52 = _mm_load_si128(&v95);
      v6 = v36;
      *(_QWORD *)(v38 + 64) = v94.m128i_i64[0];
      *(__m128i *)(v38 + 72) = v52;
      *(_BYTE *)(v38 + 88) = *(_BYTE *)(v37 + 88);
      if ( v97 >= v36 )
        break;
      v36 = (v36 - 1) / 2;
    }
    v70 = v100;
    v71 = HIDWORD(v100);
    v38 = a1 + 96 * v36;
    v32 = v101;
    v29 = v102;
    v72 = v103.m128i_u64[1];
    v30.m128i_i64[0] = v103.m128i_i64[0];
  }
LABEL_46:
  *(_DWORD *)(v38 + 4) = v71;
  v73 = *(void **)(v38 + 16);
  *(_DWORD *)v38 = v70;
  *(_DWORD *)(v38 + 8) = v32;
  v102 = nullptr;
  v103 = 0;
  if ( v73 )
  {
    *(_QWORD *)(v38 + 24) = 0;
    v93.m128i_i64[0] = (__int64)v29;
    v96 = (__int64 (__fastcall *)(__int64, __int64))v72;
    v94.m128i_i64[0] = v30.m128i_i64[0];
    j__free(v73);
    v72 = (unsigned __int64)v96;
    v30.m128i_i64[0] = v94.m128i_i64[0];
    v29 = (void *)v93.m128i_i64[0];
  }
  v74 = *(void **)(v38 + 40);
  v75 = v104;
  *(_QWORD *)(v38 + 24) = v30.m128i_i64[0];
  *(_QWORD *)(v38 + 32) = v72;
  v76 = _mm_load_si128(&v105);
  *(_QWORD *)(v38 + 16) = v29;
  v104 = nullptr;
  v105 = 0;
  if ( v74 )
  {
    *(_QWORD *)(v38 + 48) = 0;
    v93 = v76;
    j__free(v74);
    v76 = _mm_load_si128(&v93);
  }
  v77 = *(char **)(v38 + 64);
  *(__m128i *)(v38 + 48) = v76;
  v78 = _mm_loadu_si128(&v107);
  v79 = ptr;
  *(_QWORD *)(v38 + 40) = v75;
  ptr = nullptr;
  v93 = v78;
  v107 = 0;
  if ( v77 )
  {
    v80 = *(_QWORD *)(v38 + 72);
    if ( v80 )
    {
      for ( m = 0; m != v80; ++m )
      {
        v82 = &v77[24 * m];
        v83 = *(void **)v82;
        if ( *(_QWORD *)v82 )
        {
          *((_QWORD *)v82 + 1) = 0;
          j__free(v83);
          v77 = *(char **)(v38 + 64);
        }
      }
    }
    *(_QWORD *)(v38 + 72) = 0;
    j__free(v77);
    v84 = _mm_load_si128(&v93);
    *(_QWORD *)(v38 + 64) = v79;
    v85 = v108;
    v86 = (char *)ptr;
    *(__m128i *)(v38 + 72) = v84;
    *(_BYTE *)(v38 + 88) = v85;
    if ( v86 )
    {
      v87 = v107.m128i_i64[0];
      v88 = 0;
      if ( v107.m128i_i64[0] )
      {
        do
        {
          v89 = &v86[24 * v88];
          v90 = *(void **)v89;
          if ( *(_QWORD *)v89 )
          {
            *((_QWORD *)v89 + 1) = 0;
            j__free(v90);
            v86 = (char *)ptr;
          }
          ++v88;
        }
        while ( v87 != v88 );
      }
      v107.m128i_i64[0] = 0;
      j__free(v86);
    }
  }
  else
  {
    v92 = v108;
    *(_QWORD *)(v38 + 64) = v79;
    *(__m128i *)(v38 + 72) = v78;
    *(_BYTE *)(v38 + 88) = v92;
  }
  if ( v104 )
  {
    v105.m128i_i64[0] = 0;
    j__free(v104);
  }
  if ( v102 )
  {
    v103.m128i_i64[0] = 0;
    j__free(v102);
  }
  return v109 - __readfsqword(0x28u);
}

