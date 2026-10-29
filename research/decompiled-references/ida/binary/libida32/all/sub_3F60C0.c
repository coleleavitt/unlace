unsigned __int64 __fastcall sub_3F60C0(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r15
  __int64 v6; // rbp
  void (__fastcall *v7)(__int128 *, const __m128i *, __int64); // rax
  const __m128i *v8; // r14
  __m128i v9; // xmm0
  void (__fastcall *v10)(__m128i *, __int128 *, __int64); // rax
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r14
  __m128i v18; // xmm2
  __m128i v19; // xmm3
  __int64 v20; // rax
  __m128i v21; // xmm4
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __m128i v25; // xmm0
  void *v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm0
  void *v29; // rdi
  __int64 v30; // rax
  __m128i v31; // xmm0
  void *v32; // rdi
  void *v33; // rdi
  __m128i v34; // xmm7
  void *v35; // rdi
  __m128i v36; // xmm2
  void *v37; // rdi
  __m128i v38; // xmm3
  const __m128i *v39; // r14
  void (__fastcall *v40)(__m128i *, const __m128i *, __int64); // rax
  const __m128i *v41; // r14
  __m128i v42; // xmm0
  void (__fastcall *v43)(__m128i *, __int128 *, __int64); // rax
  __int64 v44; // rax
  void *v45; // r13
  void *v46; // r12
  __m128i v47; // xmm6
  __m128i v48; // xmm7
  __int64 v49; // r14
  void *v50; // rax
  __m128i v51; // xmm6
  __int64 v52; // rax
  __m128i v53; // xmm0
  void *v54; // rdi
  __int64 v55; // rax
  __m128i v56; // xmm0
  void *v57; // rdi
  __int64 v58; // rax
  __m128i v59; // xmm0
  void *v60; // rdi
  __int64 v61; // rax
  __m128i v62; // xmm5
  __m128i v63; // xmm7
  __m128i v64; // xmm6
  void *v65; // r12
  void *v66; // r13
  __int64 v68; // [rsp+8h] [rbp-1E0h]
  void *v69; // [rsp+8h] [rbp-1E0h]
  __m128i v70; // [rsp+10h] [rbp-1D8h] BYREF
  __m128i v71; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v72; // [rsp+30h] [rbp-1B8h] BYREF
  __m128i v73; // [rsp+40h] [rbp-1A8h] BYREF
  __m128i v74; // [rsp+50h] [rbp-198h] BYREF
  __m128i v75; // [rsp+60h] [rbp-188h] BYREF
  __m128i v76; // [rsp+70h] [rbp-178h] BYREF
  __int64 v77; // [rsp+80h] [rbp-168h]
  __int128 *v78; // [rsp+88h] [rbp-160h]
  const __m128i *v79; // [rsp+90h] [rbp-158h]
  __int64 v80; // [rsp+98h] [rbp-150h]
  __int64 v81; // [rsp+A0h] [rbp-148h]
  void *v82; // [rsp+A8h] [rbp-140h]
  __m128i v83; // [rsp+B0h] [rbp-138h]
  void *v84; // [rsp+C0h] [rbp-128h]
  __m128i v85; // [rsp+C8h] [rbp-120h]
  void *v86; // [rsp+D8h] [rbp-110h]
  __m128i v87; // [rsp+E0h] [rbp-108h]
  __int64 v88; // [rsp+F0h] [rbp-F8h]
  __int64 v89; // [rsp+100h] [rbp-E8h] BYREF
  void *v90; // [rsp+108h] [rbp-E0h]
  __m128i v91; // [rsp+110h] [rbp-D8h]
  void *v92; // [rsp+120h] [rbp-C8h]
  __m128i v93; // [rsp+128h] [rbp-C0h]
  void *ptr; // [rsp+138h] [rbp-B0h]
  __m128i v95; // [rsp+140h] [rbp-A8h]
  __int64 v96; // [rsp+150h] [rbp-98h]
  __int128 v97; // [rsp+160h] [rbp-88h] BYREF
  __m128i v98; // [rsp+170h] [rbp-78h] BYREF
  __m128i v99; // [rsp+180h] [rbp-68h] BYREF
  __m128i i; // [rsp+190h] [rbp-58h]
  unsigned __int64 v101; // [rsp+1A8h] [rbp-40h]

  v4 = a2;
  v80 = a3;
  v79 = a4;
  v101 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( a2 - a1 > 1408 )
  {
    while ( 1 )
    {
      v7 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))v79[1].m128i_i64[0];
      if ( !v80 )
        break;
      v98 = 0u;
      v97 = 0;
      if ( v7 )
      {
        v8 = v79;
        v78 = &v97;
        v7(&v97, v79, 2);
        v9 = _mm_loadu_si128(v8 + 1);
        v10 = (void (__fastcall *)(__m128i *, __int128 *, __int64))v8[1].m128i_i64[0];
        v99 = 0;
        v98 = v9;
        i = 0u;
        v11 = a1 + 88 * ((0x2E8BA2E8BA2E8BA3LL * (v6 >> 3)) >> 1);
        if ( v10 )
        {
          v10(&v99, v78, 2);
          i = _mm_load_si128(&v98);
        }
      }
      else
      {
        i = 0u;
        v99 = 0;
        v11 = a1 + 88 * ((0x2E8BA2E8BA2E8BA3LL * (v6 >> 3)) >> 1);
      }
      v12 = a1 + 88;
      sub_3F5FE0((__int64 *)a1, a1 + 88, v11, v4 - 88, (__int64)&v99);
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v99, &v99, 3);
      i = 0u;
      v99 = 0;
      if ( !v98.m128i_i64[0] )
      {
LABEL_71:
        v78 = &v97;
        std::__throw_bad_function_call();
      }
      v78 = &v97;
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v98.m128i_i64[0])(&v99, &v97, 2);
      v13 = v98.m128i_i64[0];
      v14 = v4;
      for ( i = _mm_load_si128(&v98); ; v13 = i.m128i_i64[0] )
      {
        while ( 1 )
        {
          if ( !v13 )
            goto LABEL_71;
          v15 = ((__int64 (__fastcall *)(__m128i *, unsigned __int64, __int64))i.m128i_i64[1])(&v99, v12, a1);
          v13 = i.m128i_i64[0];
          if ( v15 >= 0 )
            break;
          v12 += 88LL;
        }
        v14 -= 88LL;
        if ( !i.m128i_i64[0] )
LABEL_70:
          std::__throw_bad_function_call();
        while ( ((int (__fastcall *)(__m128i *, __int64, unsigned __int64))i.m128i_i64[1])(&v99, a1, v14) < 0 )
        {
          v14 -= 88LL;
          if ( !i.m128i_i64[0] )
            goto LABEL_70;
        }
        if ( v12 >= v14 )
          break;
        v16 = *(_QWORD *)(v12 + 8);
        v17 = *(_QWORD *)v12;
        *(_QWORD *)(v12 + 8) = 0;
        v18 = _mm_loadu_si128((const __m128i *)(v12 + 16));
        v19 = _mm_loadu_si128((const __m128i *)(v12 + 40));
        *(_OWORD *)(v12 + 16) = 0;
        v77 = v16;
        v20 = *(_QWORD *)(v12 + 32);
        *(_OWORD *)(v12 + 40) = 0;
        v21 = _mm_loadu_si128((const __m128i *)(v12 + 64));
        v70.m128i_i64[0] = v20;
        v22 = *(_QWORD *)(v12 + 56);
        *(_QWORD *)(v12 + 32) = 0;
        v71.m128i_i64[0] = v22;
        v23 = *(_QWORD *)(v12 + 80);
        *(_QWORD *)(v12 + 56) = 0;
        *(_OWORD *)(v12 + 64) = 0;
        v68 = v23;
        LODWORD(v23) = *(_DWORD *)v14;
        v74 = v18;
        *(_DWORD *)v12 = v23;
        LODWORD(v23) = *(_DWORD *)(v14 + 4);
        v73 = v19;
        *(_DWORD *)(v12 + 4) = v23;
        v24 = *(_QWORD *)(v14 + 8);
        v25 = _mm_loadu_si128((const __m128i *)(v14 + 16));
        *(_OWORD *)(v14 + 16) = 0;
        *(_QWORD *)(v14 + 8) = 0;
        v26 = *(void **)(v12 + 8);
        v72 = v21;
        if ( v26 )
        {
          *(_QWORD *)(v12 + 16) = 0;
          v75.m128i_i64[0] = v24;
          v76 = v25;
          qfree(v26);
          v25 = _mm_load_si128(&v76);
          v24 = v75.m128i_i64[0];
        }
        *(_QWORD *)(v12 + 8) = v24;
        *(__m128i *)(v12 + 16) = v25;
        v27 = *(_QWORD *)(v14 + 32);
        v28 = _mm_loadu_si128((const __m128i *)(v14 + 40));
        *(_QWORD *)(v14 + 32) = 0;
        *(_OWORD *)(v14 + 40) = 0;
        v29 = *(void **)(v12 + 32);
        if ( v29 )
        {
          *(_QWORD *)(v12 + 40) = 0;
          v76.m128i_i64[0] = v27;
          v75 = v28;
          qfree(v29);
          v27 = v76.m128i_i64[0];
          v28 = _mm_load_si128(&v75);
        }
        *(_QWORD *)(v12 + 32) = v27;
        *(__m128i *)(v12 + 40) = v28;
        v30 = *(_QWORD *)(v14 + 56);
        v31 = _mm_loadu_si128((const __m128i *)(v14 + 64));
        *(_QWORD *)(v14 + 56) = 0;
        *(_OWORD *)(v14 + 64) = 0;
        v32 = *(void **)(v12 + 56);
        if ( v32 )
        {
          *(_QWORD *)(v12 + 64) = 0;
          v75.m128i_i64[0] = v30;
          v76 = v31;
          qfree(v32);
          v31 = _mm_load_si128(&v76);
          v30 = v75.m128i_i64[0];
        }
        *(_QWORD *)(v12 + 56) = v30;
        *(__m128i *)(v12 + 64) = v31;
        *(_QWORD *)(v12 + 80) = *(_QWORD *)(v14 + 80);
        v33 = *(void **)(v14 + 8);
        *(_QWORD *)v14 = v17;
        if ( v33 )
        {
          *(_QWORD *)(v14 + 16) = 0;
          qfree(v33);
        }
        v34 = _mm_load_si128(&v74);
        v35 = *(void **)(v14 + 32);
        *(_QWORD *)(v14 + 8) = v77;
        *(__m128i *)(v14 + 16) = v34;
        if ( v35 )
        {
          *(_QWORD *)(v14 + 40) = 0;
          qfree(v35);
        }
        v36 = _mm_load_si128(&v73);
        v37 = *(void **)(v14 + 56);
        *(_QWORD *)(v14 + 32) = v70.m128i_i64[0];
        *(__m128i *)(v14 + 40) = v36;
        if ( v37 )
        {
          *(_QWORD *)(v14 + 64) = 0;
          qfree(v37);
        }
        v38 = _mm_load_si128(&v72);
        v12 += 88LL;
        *(_QWORD *)(v14 + 56) = v71.m128i_i64[0];
        *(__m128i *)(v14 + 64) = v38;
        *(_QWORD *)(v14 + 80) = v68;
      }
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v99, &v99, 3);
      if ( v98.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v98.m128i_i64[0])(v78, v78, 3);
      v39 = v79;
      i = 0u;
      v40 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))v79[1].m128i_i64[0];
      v99 = 0;
      if ( v40 )
      {
        v40(&v99, v79, 2);
        i = _mm_loadu_si128(v39 + 1);
      }
      sub_3F60C0(v12, v4, --v80, &v99);
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v99, &v99, 3);
      v6 = v12 - a1;
      if ( (__int64)(v12 - a1) <= 1408 )
        return v101 - __readfsqword(0x28u);
      v4 = v12;
    }
    v98 = 0u;
    v97 = 0;
    if ( v7 )
    {
      v41 = v79;
      v78 = &v97;
      v7(&v97, v79, 2);
      v42 = _mm_loadu_si128(v41 + 1);
      v43 = (void (__fastcall *)(__m128i *, __int128 *, __int64))v41[1].m128i_i64[0];
      i = 0u;
      v98 = v42;
      v99 = 0;
      if ( v43 )
      {
        v43(&v99, v78, 2);
        i = _mm_load_si128(&v98);
      }
    }
    else
    {
      v99 = 0;
      i = 0u;
    }
    sub_3F5AE0(a1, v4, &v99);
    if ( i.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v99, &v99, 3);
    if ( v4 - a1 > 88 )
    {
      v75.m128i_i64[0] = (__int64)&v97;
      do
      {
        v44 = *(_QWORD *)(v4 - 88);
        v45 = *(void **)(v4 - 80);
        v4 -= 88;
        v46 = *(void **)(v4 + 32);
        v47 = _mm_loadu_si128((const __m128i *)(v4 + 16));
        *(_QWORD *)(v4 + 32) = 0;
        *(_OWORD *)(v4 + 16) = 0;
        v48 = _mm_loadu_si128((const __m128i *)(v4 + 40));
        v49 = *(_QWORD *)(v4 + 80);
        v77 = v44;
        v81 = v44;
        v50 = *(void **)(v4 + 56);
        *(_OWORD *)(v4 + 40) = 0;
        *(_QWORD *)(v4 + 56) = 0;
        *(_QWORD *)(v4 + 8) = 0;
        v69 = v50;
        v86 = v50;
        v70 = v47;
        v83 = v47;
        v51 = _mm_loadu_si128((const __m128i *)(v4 + 64));
        *(_OWORD *)(v4 + 64) = 0;
        LODWORD(v50) = *(_DWORD *)a1;
        v82 = v45;
        *(_DWORD *)v4 = (_DWORD)v50;
        LODWORD(v50) = *(_DWORD *)(a1 + 4);
        v84 = v46;
        *(_DWORD *)(v4 + 4) = (_DWORD)v50;
        v52 = *(_QWORD *)(a1 + 8);
        v88 = v49;
        v71 = v48;
        v85 = v48;
        v72 = v51;
        v87 = v51;
        *(_QWORD *)(a1 + 8) = 0;
        v53 = _mm_loadu_si128((const __m128i *)(a1 + 16));
        *(_OWORD *)(a1 + 16) = 0;
        v54 = *(void **)(v4 + 8);
        if ( v54 )
        {
          *(_QWORD *)(v4 + 16) = 0;
          v73.m128i_i64[0] = v52;
          v74 = v53;
          qfree(v54);
          v53 = _mm_load_si128(&v74);
          v52 = v73.m128i_i64[0];
        }
        *(_QWORD *)(v4 + 8) = v52;
        *(__m128i *)(v4 + 16) = v53;
        v55 = *(_QWORD *)(a1 + 32);
        v56 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        *(_QWORD *)(a1 + 32) = 0;
        *(_OWORD *)(a1 + 40) = 0;
        v57 = *(void **)(v4 + 32);
        if ( v57 )
        {
          *(_QWORD *)(v4 + 40) = 0;
          v73.m128i_i64[0] = v55;
          v74 = v56;
          qfree(v57);
          v56 = _mm_load_si128(&v74);
          v55 = v73.m128i_i64[0];
        }
        *(_QWORD *)(v4 + 32) = v55;
        *(__m128i *)(v4 + 40) = v56;
        v58 = *(_QWORD *)(a1 + 56);
        v59 = _mm_loadu_si128((const __m128i *)(a1 + 64));
        *(_QWORD *)(a1 + 56) = 0;
        *(_OWORD *)(a1 + 64) = 0;
        v60 = *(void **)(v4 + 56);
        if ( v60 )
        {
          *(_QWORD *)(v4 + 64) = 0;
          v73.m128i_i64[0] = v58;
          v74 = v59;
          qfree(v60);
          v59 = _mm_load_si128(&v74);
          v58 = v73.m128i_i64[0];
        }
        *(_QWORD *)(v4 + 56) = v58;
        *(__m128i *)(v4 + 64) = v59;
        v61 = *(_QWORD *)(a1 + 80);
        i.m128i_i64[0] = 0;
        *(_QWORD *)(v4 + 80) = v61;
        i.m128i_i64[1] = 0;
        v99 = 0;
        if ( v98.m128i_i64[0] )
        {
          v78 = (__int128 *)v75.m128i_i64[0];
          ((void (__fastcall *)(__m128i *, __int64, __int64))v98.m128i_i64[0])(&v99, v75.m128i_i64[0], 2);
          i = _mm_load_si128(&v98);
        }
        v62 = _mm_load_si128(&v70);
        v96 = v49;
        v63 = _mm_load_si128(&v71);
        v89 = v77;
        v92 = v46;
        v64 = _mm_load_si128(&v72);
        ptr = v69;
        v91 = v62;
        v82 = nullptr;
        v84 = nullptr;
        v86 = nullptr;
        v90 = v45;
        v83 = 0;
        v93 = v63;
        v85 = 0;
        v95 = v64;
        v87 = 0;
        sub_3F52A0(a1, 0, 0x2E8BA2E8BA2E8BA3LL * ((v4 - a1) >> 3), (__int64)&v89, (__int64)&v99);
        v65 = v90;
        v66 = v92;
        if ( ptr )
          qfree(ptr);
        if ( v66 )
          qfree(v66);
        if ( v65 )
          qfree(v65);
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v99, &v99, 3);
      }
      while ( v4 - a1 > 88 );
    }
    if ( v98.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v98.m128i_i64[0])(&v97, &v97, 3);
  }
  return v101 - __readfsqword(0x28u);
}

