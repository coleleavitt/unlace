unsigned __int64 __fastcall sub_4083E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  _QWORD *v12; // r15
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
  __m128i v25; // xmm3
  void *v26; // r15
  __m128i v27; // xmm0
  void *v28; // rax
  __m128i v29; // xmm1
  __m128i v30; // xmm3
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbp
  __int64 v34; // r15
  __m128i v35; // xmm0
  void *v36; // rdi
  __int64 v37; // r15
  __m128i v38; // xmm0
  void *v39; // rdi
  __int64 v40; // r15
  __m128i v41; // xmm0
  void *v42; // rdi
  __int64 v43; // r13
  void *v44; // rdi
  void *v45; // rdi
  void *v46; // rbx
  __m128i v47; // xmm0
  void *v48; // rdi
  __m128i v49; // xmm1
  void *v50; // rbx
  __m128i v51; // xmm1
  __int64 v52; // rax
  void *v53; // rdi
  __int64 v55; // rax
  _QWORD *v56; // r15
  __int64 v57; // r12
  __int64 v58; // r14
  __m128i v59; // xmm0
  void *v60; // rdi
  __int64 v61; // r14
  __m128i v62; // xmm0
  void *v63; // rdi
  __int64 v64; // r14
  __m128i v65; // xmm0
  void *v66; // rdi
  __int64 v67; // r14
  unsigned __int64 v68; // xmm3_8
  _QWORD *v69; // r12
  unsigned __int64 v70; // xmm2_8
  __m128i v71; // [rsp+0h] [rbp-108h] BYREF
  __m128i v72; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v73; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v74; // [rsp+30h] [rbp-D8h]
  __int64 v75; // [rsp+38h] [rbp-D0h]
  __m128i v76; // [rsp+40h] [rbp-C8h] BYREF
  void *v77; // [rsp+50h] [rbp-B8h]
  __m128i v78; // [rsp+58h] [rbp-B0h]
  void *v79; // [rsp+68h] [rbp-A0h]
  __m128i v80; // [rsp+70h] [rbp-98h] BYREF
  void *ptr; // [rsp+80h] [rbp-88h]
  __m128i v82; // [rsp+88h] [rbp-80h] BYREF
  __int64 v83; // [rsp+98h] [rbp-70h]
  __int128 v84; // [rsp+A0h] [rbp-68h] BYREF
  __m128i v85; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v86; // [rsp+C8h] [rbp-40h]

  v71.m128i_i64[0] = a2;
  v75 = a3;
  v86 = __readfsqword(0x28u);
  v74 = (a3 - 1) / 2;
  if ( a2 >= v74 )
  {
    v9 = v71.m128i_i64[0];
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 192 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 96) < 0 )
      {
        --v9;
        v11 = a1 + 96 * v9;
      }
      v12 = (_QWORD *)(a1 + 96 * i);
      *v12 = *(_QWORD *)v11;
      v12[1] = *(_QWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      *(_QWORD *)(v11 + 16) = 0;
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 24));
      *(_OWORD *)(v11 + 24) = 0;
      v15 = (void *)v12[2];
      if ( v15 )
      {
        v12[3] = 0;
        v73.m128i_i64[0] = v13;
        v72 = v14;
        qfree(v15);
        v13 = v73.m128i_i64[0];
        v14 = _mm_load_si128(&v72);
      }
      v12[2] = v13;
      *(__m128i *)(v12 + 3) = v14;
      v16 = *(_QWORD *)(v11 + 40);
      v17 = _mm_loadu_si128((const __m128i *)(v11 + 48));
      *(_QWORD *)(v11 + 40) = 0;
      *(_OWORD *)(v11 + 48) = 0;
      v18 = (void *)v12[5];
      if ( v18 )
      {
        v12[6] = 0;
        v73.m128i_i64[0] = v16;
        v72 = v17;
        qfree(v18);
        v16 = v73.m128i_i64[0];
        v17 = _mm_load_si128(&v72);
      }
      v12[5] = v16;
      *((__m128i *)v12 + 3) = v17;
      v19 = *(_QWORD *)(v11 + 64);
      v20 = _mm_loadu_si128((const __m128i *)(v11 + 72));
      *(_QWORD *)(v11 + 64) = 0;
      *(_OWORD *)(v11 + 72) = 0;
      v21 = (void *)v12[8];
      if ( v21 )
      {
        v12[9] = 0;
        v72.m128i_i64[0] = v19;
        v73 = v20;
        qfree(v21);
        v20 = _mm_load_si128(&v73);
        v19 = v72.m128i_i64[0];
      }
      v12[8] = v19;
      v22 = v74;
      *(__m128i *)(v12 + 9) = v20;
      v12[11] = *(_QWORD *)(v11 + 88);
      if ( v9 >= v22 )
        break;
    }
  }
  if ( (v75 & 1) == 0 && (v75 - 2) / 2 == v9 )
  {
    v56 = (_QWORD *)(a1 + 96 * v9);
    v74 = 2 * (v9 + 1);
    v57 = a1 + 192 * (v9 + 1) - 96;
    *v56 = *(_QWORD *)v57;
    v56[1] = *(_QWORD *)(v57 + 8);
    v58 = *(_QWORD *)(v57 + 16);
    *(_QWORD *)(v57 + 16) = 0;
    v59 = _mm_loadu_si128((const __m128i *)(v57 + 24));
    *(_OWORD *)(v57 + 24) = 0;
    v60 = (void *)v56[2];
    if ( v60 )
    {
      v56[3] = 0;
      v72 = v59;
      qfree(v60);
      v59 = _mm_load_si128(&v72);
    }
    v56[2] = v58;
    *(__m128i *)(v56 + 3) = v59;
    v61 = *(_QWORD *)(v57 + 40);
    v62 = _mm_loadu_si128((const __m128i *)(v57 + 48));
    *(_QWORD *)(v57 + 40) = 0;
    *(_OWORD *)(v57 + 48) = 0;
    v63 = (void *)v56[5];
    if ( v63 )
    {
      v56[6] = 0;
      v72 = v62;
      qfree(v63);
      v62 = _mm_load_si128(&v72);
    }
    v56[5] = v61;
    *((__m128i *)v56 + 3) = v62;
    v64 = *(_QWORD *)(v57 + 64);
    v65 = _mm_loadu_si128((const __m128i *)(v57 + 72));
    *(_QWORD *)(v57 + 64) = 0;
    *(_OWORD *)(v57 + 72) = 0;
    v66 = (void *)v56[8];
    if ( v66 )
    {
      v56[9] = 0;
      v72 = v65;
      qfree(v66);
      v65 = _mm_load_si128(&v72);
    }
    v56[8] = v64;
    v67 = v74;
    *(__m128i *)(v56 + 9) = v65;
    v9 = v67 - 1;
    v56[11] = *(_QWORD *)(v57 + 88);
  }
  v23 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a5 + 16);
  v85 = 0u;
  v84 = 0;
  if ( v23 )
  {
    v23(&v84, a5, 2);
    v85 = _mm_loadu_si128((const __m128i *)(a5 + 16));
  }
  v24 = *(void **)(a4 + 40);
  v25 = _mm_loadu_si128((const __m128i *)(a4 + 48));
  *(_QWORD *)(a4 + 40) = 0;
  v26 = *(void **)(a4 + 16);
  v27 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  *(_QWORD *)(a4 + 16) = 0;
  v79 = v24;
  v28 = *(void **)(a4 + 64);
  v29 = _mm_loadu_si128((const __m128i *)a4);
  v80 = v25;
  v30 = _mm_loadu_si128((const __m128i *)(a4 + 72));
  ptr = v28;
  v31 = *(_QWORD *)(a4 + 88);
  v77 = v26;
  v83 = v31;
  *(_QWORD *)(a4 + 64) = 0;
  v76 = v29;
  v78 = v27;
  v74 = (__int64)&v76;
  v32 = v71.m128i_i64[0];
  v33 = (v9 - 1) / 2;
  *(_OWORD *)(a4 + 24) = 0;
  *(_OWORD *)(a4 + 48) = 0;
  v82 = v30;
  *(_OWORD *)(a4 + 72) = 0;
  if ( v9 > v32 )
  {
    while ( 1 )
    {
      v43 = a1 + 96 * v33;
      if ( !v85.m128i_i64[0] )
        std::__throw_bad_function_call();
      v69 = (_QWORD *)(a1 + 96 * v9);
      if ( ((int (__fastcall *)(__int128 *, __int64))v85.m128i_i64[1])(&v84, a1 + 96 * v33) >= 0 )
      {
        v68 = v76.m128i_u64[1];
        v29.m128i_i64[0] = v76.m128i_i64[0];
        v26 = v77;
        v70 = v78.m128i_u64[1];
        v27.m128i_i64[0] = v78.m128i_i64[0];
        goto LABEL_31;
      }
      *v69 = *(_QWORD *)v43;
      v69[1] = *(_QWORD *)(v43 + 8);
      v34 = *(_QWORD *)(v43 + 16);
      v35 = _mm_loadu_si128((const __m128i *)(v43 + 24));
      *(_QWORD *)(v43 + 16) = 0;
      *(_OWORD *)(v43 + 24) = 0;
      v36 = (void *)v69[2];
      if ( v36 )
      {
        v69[3] = 0;
        v72 = v35;
        qfree(v36);
        v35 = _mm_load_si128(&v72);
      }
      v69[2] = v34;
      *(__m128i *)(v69 + 3) = v35;
      v37 = *(_QWORD *)(v43 + 40);
      v38 = _mm_loadu_si128((const __m128i *)(v43 + 48));
      *(_QWORD *)(v43 + 40) = 0;
      *(_OWORD *)(v43 + 48) = 0;
      v39 = (void *)v69[5];
      if ( v39 )
      {
        v69[6] = 0;
        v72 = v38;
        qfree(v39);
        v38 = _mm_load_si128(&v72);
      }
      v69[5] = v37;
      *((__m128i *)v69 + 3) = v38;
      v40 = *(_QWORD *)(v43 + 64);
      v41 = _mm_loadu_si128((const __m128i *)(v43 + 72));
      *(_QWORD *)(v43 + 64) = 0;
      *(_OWORD *)(v43 + 72) = 0;
      v42 = (void *)v69[8];
      if ( v42 )
      {
        v69[9] = 0;
        v72 = v41;
        qfree(v42);
        v41 = _mm_load_si128(&v72);
      }
      v69[8] = v40;
      v9 = v33;
      *(__m128i *)(v69 + 9) = v41;
      v69[11] = *(_QWORD *)(v43 + 88);
      if ( v71.m128i_i64[0] >= v33 )
        break;
      v33 = (v33 - 1) / 2;
    }
    v68 = v76.m128i_u64[1];
    v29.m128i_i64[0] = v76.m128i_i64[0];
    v69 = (_QWORD *)(a1 + 96 * v33);
    v26 = v77;
    v70 = v78.m128i_u64[1];
    v27.m128i_i64[0] = v78.m128i_i64[0];
  }
  else
  {
    v68 = _mm_srli_si128(v29, 8).m128i_u64[0];
    v69 = (_QWORD *)(a1 + 96 * v9);
    v70 = _mm_srli_si128(v27, 8).m128i_u64[0];
  }
LABEL_31:
  v44 = (void *)v69[2];
  *v69 = v29.m128i_i64[0];
  v77 = nullptr;
  v69[1] = v68;
  v78 = 0;
  if ( v44 )
  {
    v69[3] = 0;
    v74 = v70;
    v71.m128i_i64[0] = v27.m128i_i64[0];
    qfree(v44);
    v70 = v74;
  }
  v45 = (void *)v69[5];
  v46 = v79;
  v69[3] = v27.m128i_i64[0];
  v69[2] = v26;
  v47 = _mm_load_si128(&v80);
  v79 = nullptr;
  v69[4] = v70;
  v80 = 0;
  if ( v45 )
  {
    v69[6] = 0;
    v71 = v47;
    qfree(v45);
    v47 = _mm_load_si128(&v71);
  }
  v48 = (void *)v69[8];
  *((__m128i *)v69 + 3) = v47;
  v49 = _mm_loadu_si128(&v82);
  v69[5] = v46;
  v50 = ptr;
  v82 = 0;
  ptr = nullptr;
  if ( v48 )
  {
    v69[9] = 0;
    v71 = v49;
    qfree(v48);
    v51 = _mm_load_si128(&v71);
    v69[8] = v50;
    v52 = v83;
    v53 = ptr;
    *(__m128i *)(v69 + 9) = v51;
    v69[11] = v52;
    if ( v53 )
    {
      v82.m128i_i64[0] = 0;
      qfree(v53);
    }
  }
  else
  {
    v55 = v83;
    v69[8] = v50;
    *(__m128i *)(v69 + 9) = v49;
    v69[11] = v55;
  }
  if ( v79 )
  {
    v80.m128i_i64[0] = 0;
    qfree(v79);
  }
  if ( v77 )
  {
    v78.m128i_i64[0] = 0;
    qfree(v77);
  }
  if ( v85.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v85.m128i_i64[0])(&v84, &v84, 3);
  return v86 - __readfsqword(0x28u);
}
