unsigned __int64 __fastcall sub_3F52A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  __m128i v14; // xmm0
  void *v15; // rdi
  __int64 v16; // rdx
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 v19; // rdx
  __m128i v20; // xmm0
  void *v21; // rdi
  __int64 v22; // rax
  void (__fastcall *v23)(__int128 *, __int64, __int64); // rax
  void *v24; // rax
  void *v25; // r14
  __m128i v26; // xmm3
  __m128i v27; // xmm0
  void *v28; // rax
  __m128i v29; // xmm1
  __m128i v30; // xmm3
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // r14
  __m128i v35; // xmm0
  void *v36; // rdi
  __int64 v37; // r14
  __m128i v38; // xmm0
  void *v39; // rdi
  __int64 v40; // r14
  __m128i v41; // xmm0
  void *v42; // rdi
  __int64 v43; // rbx
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rbx
  __m128i v47; // xmm0
  void *v48; // rdi
  __m128i v49; // xmm1
  void *v50; // rbx
  __m128i v51; // xmm1
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // r13
  __m128i v60; // xmm0
  void *v61; // rdi
  __int64 v62; // r13
  __m128i v63; // xmm0
  void *v64; // rdi
  __int64 v65; // r13
  __m128i v66; // xmm0
  void *v67; // rdi
  int v68; // edx
  int v69; // eax
  __int64 v70; // r12
  unsigned __int64 v71; // xmm1_8
  __m128i v72; // [rsp+0h] [rbp-108h] BYREF
  __m128i v73; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v74; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v75; // [rsp+30h] [rbp-D8h]
  __int64 v76; // [rsp+38h] [rbp-D0h]
  __int64 v77; // [rsp+40h] [rbp-C8h] BYREF
  void *v78; // [rsp+48h] [rbp-C0h]
  __m128i v79; // [rsp+50h] [rbp-B8h]
  void *v80; // [rsp+60h] [rbp-A8h]
  __m128i v81; // [rsp+68h] [rbp-A0h] BYREF
  void *ptr; // [rsp+78h] [rbp-90h]
  __m128i v83; // [rsp+80h] [rbp-88h] BYREF
  __int64 v84; // [rsp+90h] [rbp-78h]
  __int128 v85; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v86; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v87; // [rsp+C8h] [rbp-40h]

  v72.m128i_i64[0] = a2;
  v76 = a3;
  v87 = __readfsqword(0x28u);
  v75 = (a3 - 1) / 2;
  if ( a2 >= v75 )
  {
    v9 = v72.m128i_i64[0];
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 176 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 88) < 0 )
      {
        --v9;
        v11 = a1 + 88 * v9;
      }
      v12 = a1 + 88 * i;
      *(_DWORD *)v12 = *(_DWORD *)v11;
      *(_DWORD *)(v12 + 4) = *(_DWORD *)(v11 + 4);
      v13 = *(_QWORD *)(v11 + 8);
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 16));
      *(_QWORD *)(v11 + 8) = 0;
      *(_OWORD *)(v11 + 16) = 0;
      v15 = *(void **)(v12 + 8);
      if ( v15 )
      {
        *(_QWORD *)(v12 + 16) = 0;
        v74.m128i_i64[0] = v13;
        v73 = v14;
        qfree(v15);
        v13 = v74.m128i_i64[0];
        v14 = _mm_load_si128(&v73);
      }
      *(_QWORD *)(v12 + 8) = v13;
      *(__m128i *)(v12 + 16) = v14;
      v16 = *(_QWORD *)(v11 + 32);
      v17 = _mm_loadu_si128((const __m128i *)(v11 + 40));
      *(_QWORD *)(v11 + 32) = 0;
      *(_OWORD *)(v11 + 40) = 0;
      v18 = *(void **)(v12 + 32);
      if ( v18 )
      {
        *(_QWORD *)(v12 + 40) = 0;
        v74.m128i_i64[0] = v16;
        v73 = v17;
        qfree(v18);
        v16 = v74.m128i_i64[0];
        v17 = _mm_load_si128(&v73);
      }
      *(_QWORD *)(v12 + 32) = v16;
      *(__m128i *)(v12 + 40) = v17;
      v19 = *(_QWORD *)(v11 + 56);
      v20 = _mm_loadu_si128((const __m128i *)(v11 + 64));
      *(_QWORD *)(v11 + 56) = 0;
      *(_OWORD *)(v11 + 64) = 0;
      v21 = *(void **)(v12 + 56);
      if ( v21 )
      {
        *(_QWORD *)(v12 + 64) = 0;
        v73.m128i_i64[0] = v19;
        v74 = v20;
        qfree(v21);
        v20 = _mm_load_si128(&v74);
        v19 = v73.m128i_i64[0];
      }
      *(_QWORD *)(v12 + 56) = v19;
      v22 = v75;
      *(__m128i *)(v12 + 64) = v20;
      *(_QWORD *)(v12 + 80) = *(_QWORD *)(v11 + 80);
      if ( v9 >= v22 )
        break;
    }
  }
  if ( (v76 & 1) == 0 && (v76 - 2) / 2 == v9 )
  {
    v56 = 2 * (v9 + 1);
    v57 = a1 + 176 * (v9 + 1) - 88;
    v58 = a1 + 88 * v9;
    *(_DWORD *)v58 = *(_DWORD *)v57;
    *(_DWORD *)(v58 + 4) = *(_DWORD *)(v57 + 4);
    v59 = *(_QWORD *)(v57 + 8);
    v60 = _mm_loadu_si128((const __m128i *)(v57 + 16));
    *(_QWORD *)(v57 + 8) = 0;
    *(_OWORD *)(v57 + 16) = 0;
    v61 = *(void **)(v58 + 8);
    if ( v61 )
    {
      *(_QWORD *)(v58 + 16) = 0;
      v75 = v56;
      v73 = v60;
      qfree(v61);
      v60 = _mm_load_si128(&v73);
      v56 = v75;
    }
    *(_QWORD *)(v58 + 8) = v59;
    *(__m128i *)(v58 + 16) = v60;
    v62 = *(_QWORD *)(v57 + 32);
    v63 = _mm_loadu_si128((const __m128i *)(v57 + 40));
    *(_QWORD *)(v57 + 32) = 0;
    *(_OWORD *)(v57 + 40) = 0;
    v64 = *(void **)(v58 + 32);
    if ( v64 )
    {
      *(_QWORD *)(v58 + 40) = 0;
      v75 = v56;
      v73 = v63;
      qfree(v64);
      v63 = _mm_load_si128(&v73);
      v56 = v75;
    }
    *(_QWORD *)(v58 + 32) = v62;
    *(__m128i *)(v58 + 40) = v63;
    v65 = *(_QWORD *)(v57 + 56);
    v66 = _mm_loadu_si128((const __m128i *)(v57 + 64));
    *(_QWORD *)(v57 + 56) = 0;
    *(_OWORD *)(v57 + 64) = 0;
    v67 = *(void **)(v58 + 56);
    if ( v67 )
    {
      *(_QWORD *)(v58 + 64) = 0;
      v75 = v56;
      v73 = v66;
      qfree(v67);
      v66 = _mm_load_si128(&v73);
      v56 = v75;
    }
    *(_QWORD *)(v58 + 56) = v65;
    v9 = v56 - 1;
    *(__m128i *)(v58 + 64) = v66;
    *(_QWORD *)(v58 + 80) = *(_QWORD *)(v57 + 80);
  }
  v23 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a5 + 16);
  v86 = 0u;
  v85 = 0;
  if ( v23 )
  {
    v23(&v85, a5, 2);
    v86 = _mm_loadu_si128((const __m128i *)(a5 + 16));
  }
  v24 = *(void **)(a4 + 32);
  v25 = *(void **)(a4 + 8);
  *(_QWORD *)(a4 + 8) = 0;
  v26 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  v27 = _mm_loadu_si128((const __m128i *)(a4 + 16));
  *(_QWORD *)(a4 + 32) = 0;
  v80 = v24;
  v28 = *(void **)(a4 + 56);
  v29 = _mm_loadl_epi64((const __m128i *)a4);
  v81 = v26;
  v30 = _mm_loadu_si128((const __m128i *)(a4 + 64));
  ptr = v28;
  v31 = *(_QWORD *)(a4 + 80);
  v78 = v25;
  v84 = v31;
  v77 = v29.m128i_i64[0];
  v79 = v27;
  *(_QWORD *)(a4 + 56) = 0;
  v75 = (__int64)&v77;
  v32 = v72.m128i_i64[0];
  *(_OWORD *)(a4 + 16) = 0;
  v33 = (v9 - 1) / 2;
  *(_OWORD *)(a4 + 40) = 0;
  v83 = v30;
  *(_OWORD *)(a4 + 64) = 0;
  if ( v9 > v32 )
  {
    while ( 1 )
    {
      v43 = a1 + 88 * v33;
      if ( !v86.m128i_i64[0] )
        std::__throw_bad_function_call();
      v70 = a1 + 88 * v9;
      if ( ((int (__fastcall *)(__int128 *, __int64))v86.m128i_i64[1])(&v85, a1 + 88 * v33) >= 0 )
      {
        v69 = v77;
        v68 = HIDWORD(v77);
        v25 = v78;
        v71 = v79.m128i_u64[1];
        v27.m128i_i64[0] = v79.m128i_i64[0];
        goto LABEL_31;
      }
      *(_DWORD *)v70 = *(_DWORD *)v43;
      *(_DWORD *)(v70 + 4) = *(_DWORD *)(v43 + 4);
      v34 = *(_QWORD *)(v43 + 8);
      v35 = _mm_loadu_si128((const __m128i *)(v43 + 16));
      *(_QWORD *)(v43 + 8) = 0;
      *(_OWORD *)(v43 + 16) = 0;
      v36 = *(void **)(v70 + 8);
      if ( v36 )
      {
        *(_QWORD *)(v70 + 16) = 0;
        v73 = v35;
        qfree(v36);
        v35 = _mm_load_si128(&v73);
      }
      *(_QWORD *)(v70 + 8) = v34;
      *(__m128i *)(v70 + 16) = v35;
      v37 = *(_QWORD *)(v43 + 32);
      v38 = _mm_loadu_si128((const __m128i *)(v43 + 40));
      *(_QWORD *)(v43 + 32) = 0;
      *(_OWORD *)(v43 + 40) = 0;
      v39 = *(void **)(v70 + 32);
      if ( v39 )
      {
        *(_QWORD *)(v70 + 40) = 0;
        v73 = v38;
        qfree(v39);
        v38 = _mm_load_si128(&v73);
      }
      *(_QWORD *)(v70 + 32) = v37;
      *(__m128i *)(v70 + 40) = v38;
      v40 = *(_QWORD *)(v43 + 56);
      v41 = _mm_loadu_si128((const __m128i *)(v43 + 64));
      *(_QWORD *)(v43 + 56) = 0;
      *(_OWORD *)(v43 + 64) = 0;
      v42 = *(void **)(v70 + 56);
      if ( v42 )
      {
        *(_QWORD *)(v70 + 64) = 0;
        v73 = v41;
        qfree(v42);
        v41 = _mm_load_si128(&v73);
      }
      *(_QWORD *)(v70 + 56) = v40;
      v9 = v33;
      *(__m128i *)(v70 + 64) = v41;
      *(_QWORD *)(v70 + 80) = *(_QWORD *)(v43 + 80);
      if ( v72.m128i_i64[0] >= v33 )
        break;
      v33 = (v33 - 1) / 2;
    }
    v69 = v77;
    v68 = HIDWORD(v77);
    v70 = a1 + 88 * v33;
    v25 = v78;
    v71 = v79.m128i_u64[1];
    v27.m128i_i64[0] = v79.m128i_i64[0];
  }
  else
  {
    v68 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v29, 229));
    v69 = _mm_cvtsi128_si32(v29);
    v70 = a1 + 88 * v9;
    v71 = _mm_srli_si128(v27, 8).m128i_u64[0];
  }
LABEL_31:
  v44 = *(void **)(v70 + 8);
  *(_DWORD *)v70 = v69;
  *(_DWORD *)(v70 + 4) = v68;
  v78 = nullptr;
  v79 = 0;
  if ( v44 )
  {
    *(_QWORD *)(v70 + 16) = 0;
    v75 = v71;
    v72.m128i_i64[0] = v27.m128i_i64[0];
    qfree(v44);
    v71 = v75;
  }
  v45 = *(void **)(v70 + 32);
  *(_QWORD *)(v70 + 24) = v71;
  v46 = v80;
  *(_QWORD *)(v70 + 16) = v27.m128i_i64[0];
  v47 = _mm_loadu_si128(&v81);
  *(_QWORD *)(v70 + 8) = v25;
  v80 = nullptr;
  v81 = 0;
  if ( v45 )
  {
    *(_QWORD *)(v70 + 40) = 0;
    v72 = v47;
    qfree(v45);
    v47 = _mm_load_si128(&v72);
  }
  v48 = *(void **)(v70 + 56);
  *(__m128i *)(v70 + 40) = v47;
  v49 = _mm_load_si128(&v83);
  *(_QWORD *)(v70 + 32) = v46;
  v50 = ptr;
  v83 = 0;
  ptr = nullptr;
  if ( v48 )
  {
    *(_QWORD *)(v70 + 64) = 0;
    v72 = v49;
    qfree(v48);
    v51 = _mm_load_si128(&v72);
    v52 = ptr;
    *(_QWORD *)(v70 + 56) = v50;
    v53 = v84;
    *(__m128i *)(v70 + 64) = v51;
    *(_QWORD *)(v70 + 80) = v53;
    if ( v52 )
    {
      v83.m128i_i64[0] = 0;
      qfree(v52);
    }
  }
  else
  {
    v55 = v84;
    *(_QWORD *)(v70 + 56) = v50;
    *(__m128i *)(v70 + 64) = v49;
    *(_QWORD *)(v70 + 80) = v55;
  }
  if ( v80 )
  {
    v81.m128i_i64[0] = 0;
    qfree(v80);
  }
  if ( v78 )
  {
    v79.m128i_i64[0] = 0;
    qfree(v78);
  }
  if ( v86.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v86.m128i_i64[0])(&v85, &v85, 3);
  return v87 - __readfsqword(0x28u);
}

