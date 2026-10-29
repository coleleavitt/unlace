unsigned __int64 __fastcall sub_409210(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  __int64 v4; // r12
  __int64 v6; // rbp
  void (__fastcall *v7)(__int128 *, const __m128i *, __int64); // rax
  const __m128i *v8; // r15
  __m128i v9; // xmm0
  void (__fastcall *v10)(__m128i *, __int128 *, __int64); // rax
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // r15
  __m128i v18; // xmm3
  __m128i v19; // xmm4
  __m128i v20; // xmm5
  __int64 v21; // rax
  __m128i v22; // xmm2
  void *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __m128i v27; // xmm0
  void *v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm0
  void *v31; // rdi
  __int64 v32; // rax
  __m128i v33; // xmm0
  void *v34; // rdi
  __m128i v35; // xmm2
  void *v36; // rdi
  __m128i v37; // xmm3
  void *v38; // rdi
  __m128i v39; // xmm4
  void *v40; // rdi
  __m128i v41; // xmm5
  void *v42; // rax
  const __m128i *v43; // r15
  void (__fastcall *v44)(__m128i *, const __m128i *, __int64); // rax
  const __m128i *v45; // r15
  __m128i v46; // xmm0
  void (__fastcall *v47)(__m128i *, __int128 *, __int64); // rax
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  void *v51; // rax
  __m128i v52; // xmm2
  __m128i v53; // xmm3
  void *v54; // r13
  void *v55; // r15
  __m128i v56; // xmm7
  __m128i v57; // xmm4
  __int64 v58; // r14
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __m128i v62; // xmm0
  void *v63; // rdi
  __int64 v64; // rax
  __m128i v65; // xmm0
  void *v66; // rdi
  __int64 v67; // rax
  __m128i v68; // xmm0
  void *v69; // rdi
  __int64 v70; // rax
  __m128i v71; // xmm6
  __m128i v72; // xmm7
  __m128i v73; // xmm5
  __m128i v74; // xmm6
  void *v75; // r13
  void *v76; // r15
  __m128i v78; // [rsp+0h] [rbp-1E8h] BYREF
  __m128i v79; // [rsp+10h] [rbp-1D8h] BYREF
  __m128i v80; // [rsp+20h] [rbp-1C8h] BYREF
  __m128i v81; // [rsp+30h] [rbp-1B8h] BYREF
  __m128i v82; // [rsp+40h] [rbp-1A8h] BYREF
  __m128i v83; // [rsp+50h] [rbp-198h] BYREF
  __m128i v84; // [rsp+60h] [rbp-188h] BYREF
  __m128i v85; // [rsp+70h] [rbp-178h] BYREF
  void *v86; // [rsp+80h] [rbp-168h]
  __int128 *v87; // [rsp+88h] [rbp-160h]
  const __m128i *v88; // [rsp+90h] [rbp-158h]
  __int64 v89; // [rsp+98h] [rbp-150h]
  __m128i v90; // [rsp+A0h] [rbp-148h]
  void *v91; // [rsp+B0h] [rbp-138h]
  __m128i v92; // [rsp+B8h] [rbp-130h]
  void *v93; // [rsp+C8h] [rbp-120h]
  __m128i v94; // [rsp+D0h] [rbp-118h]
  void *v95; // [rsp+E0h] [rbp-108h]
  __m128i v96; // [rsp+E8h] [rbp-100h]
  __int64 v97; // [rsp+F8h] [rbp-F0h]
  __m128i v98; // [rsp+100h] [rbp-E8h] BYREF
  void *v99; // [rsp+110h] [rbp-D8h]
  __m128i v100; // [rsp+118h] [rbp-D0h]
  void *v101; // [rsp+128h] [rbp-C0h]
  __m128i v102; // [rsp+130h] [rbp-B8h]
  void *ptr; // [rsp+140h] [rbp-A8h]
  __m128i v104; // [rsp+148h] [rbp-A0h]
  __int64 v105; // [rsp+158h] [rbp-90h]
  __int128 v106; // [rsp+160h] [rbp-88h] BYREF
  __m128i v107; // [rsp+170h] [rbp-78h] BYREF
  __m128i v108; // [rsp+180h] [rbp-68h] BYREF
  __m128i i; // [rsp+190h] [rbp-58h]
  unsigned __int64 v110; // [rsp+1A8h] [rbp-40h]

  v4 = a2;
  v89 = a3;
  v88 = a4;
  v110 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( a2 - a1 > 1536 )
  {
    while ( 1 )
    {
      v7 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))v88[1].m128i_i64[0];
      if ( !v89 )
        break;
      v107 = 0u;
      v106 = 0;
      if ( v7 )
      {
        v8 = v88;
        v87 = &v106;
        v7(&v106, v88, 2);
        v9 = _mm_loadu_si128(v8 + 1);
        v10 = (void (__fastcall *)(__m128i *, __int128 *, __int64))v8[1].m128i_i64[0];
        v108 = 0;
        v107 = v9;
        i = 0u;
        v11 = a1
            + 32
            * (((0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) & 0xFFFFFFFFFFFFFFFELL)
             + ((__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) >> 1));
        if ( v10 )
        {
          v10(&v108, v87, 2);
          i = _mm_load_si128(&v107);
        }
      }
      else
      {
        i = 0u;
        v108 = 0;
        v11 = a1
            + 32
            * (((0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) & 0xFFFFFFFFFFFFFFFELL)
             + ((__int64)(0xAAAAAAAAAAAAAAABLL * (v6 >> 5)) >> 1));
      }
      v12 = a1 + 96;
      sub_409130(a1, a1 + 96, v11, v4 - 96, (__int64)&v108);
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v108, &v108, 3);
      i = 0u;
      v108 = 0;
      if ( !v107.m128i_i64[0] )
      {
LABEL_71:
        v87 = &v106;
        std::__throw_bad_function_call();
      }
      v87 = &v106;
      ((void (__fastcall *)(__m128i *, __int128 *, __int64))v107.m128i_i64[0])(&v108, &v106, 2);
      v13 = v107.m128i_i64[0];
      v14 = v4;
      for ( i = _mm_load_si128(&v107); ; v13 = i.m128i_i64[0] )
      {
        while ( 1 )
        {
          if ( !v13 )
            goto LABEL_71;
          v15 = ((__int64 (__fastcall *)(__m128i *, unsigned __int64, __int64))i.m128i_i64[1])(&v108, v12, a1);
          v13 = i.m128i_i64[0];
          if ( v15 >= 0 )
            break;
          v12 += 96LL;
        }
        v14 -= 96LL;
        if ( !i.m128i_i64[0] )
LABEL_70:
          std::__throw_bad_function_call();
        while ( ((int (__fastcall *)(__m128i *, __int64, unsigned __int64))i.m128i_i64[1])(&v108, a1, v14) < 0 )
        {
          v14 -= 96LL;
          if ( !i.m128i_i64[0] )
            goto LABEL_70;
        }
        if ( v12 >= v14 )
          break;
        v16 = *(_QWORD *)(v12 + 40);
        v17 = *(_QWORD *)(v12 + 16);
        *(_QWORD *)(v12 + 40) = 0;
        *(_QWORD *)(v12 + 16) = 0;
        v18 = _mm_loadu_si128((const __m128i *)(v12 + 24));
        v19 = _mm_loadu_si128((const __m128i *)(v12 + 48));
        *(_OWORD *)(v12 + 24) = 0;
        v20 = _mm_loadu_si128((const __m128i *)(v12 + 72));
        v78.m128i_i64[0] = v16;
        v21 = *(_QWORD *)(v12 + 64);
        *(_OWORD *)(v12 + 48) = 0;
        v22 = _mm_loadu_si128((const __m128i *)v12);
        v79.m128i_i64[0] = v21;
        v23 = *(void **)(v12 + 88);
        *(_QWORD *)(v12 + 64) = 0;
        *(_OWORD *)(v12 + 72) = 0;
        v86 = v23;
        v24 = *(_QWORD *)v14;
        v82 = v22;
        *(_QWORD *)v12 = v24;
        v25 = *(_QWORD *)(v14 + 8);
        v83 = v18;
        *(_QWORD *)(v12 + 8) = v25;
        v26 = *(_QWORD *)(v14 + 16);
        v27 = _mm_loadu_si128((const __m128i *)(v14 + 24));
        *(_QWORD *)(v14 + 16) = 0;
        *(_OWORD *)(v14 + 24) = 0;
        v28 = *(void **)(v12 + 16);
        v81 = v19;
        v80 = v20;
        if ( v28 )
        {
          *(_QWORD *)(v12 + 24) = 0;
          v84.m128i_i64[0] = v26;
          v85 = v27;
          qfree(v28);
          v27 = _mm_load_si128(&v85);
          v26 = v84.m128i_i64[0];
        }
        *(_QWORD *)(v12 + 16) = v26;
        *(__m128i *)(v12 + 24) = v27;
        v29 = *(_QWORD *)(v14 + 40);
        v30 = _mm_loadu_si128((const __m128i *)(v14 + 48));
        *(_QWORD *)(v14 + 40) = 0;
        *(_OWORD *)(v14 + 48) = 0;
        v31 = *(void **)(v12 + 40);
        if ( v31 )
        {
          *(_QWORD *)(v12 + 48) = 0;
          v85.m128i_i64[0] = v29;
          v84 = v30;
          qfree(v31);
          v29 = v85.m128i_i64[0];
          v30 = _mm_load_si128(&v84);
        }
        *(_QWORD *)(v12 + 40) = v29;
        *(__m128i *)(v12 + 48) = v30;
        v32 = *(_QWORD *)(v14 + 64);
        v33 = _mm_loadu_si128((const __m128i *)(v14 + 72));
        *(_QWORD *)(v14 + 64) = 0;
        *(_OWORD *)(v14 + 72) = 0;
        v34 = *(void **)(v12 + 64);
        if ( v34 )
        {
          *(_QWORD *)(v12 + 72) = 0;
          v84.m128i_i64[0] = v32;
          v85 = v33;
          qfree(v34);
          v33 = _mm_load_si128(&v85);
          v32 = v84.m128i_i64[0];
        }
        *(_QWORD *)(v12 + 64) = v32;
        v35 = _mm_load_si128(&v82);
        *(__m128i *)(v12 + 72) = v33;
        *(_QWORD *)(v12 + 88) = *(_QWORD *)(v14 + 88);
        v36 = *(void **)(v14 + 16);
        *(__m128i *)v14 = v35;
        if ( v36 )
        {
          *(_QWORD *)(v14 + 24) = 0;
          qfree(v36);
        }
        v37 = _mm_load_si128(&v83);
        v38 = *(void **)(v14 + 40);
        *(_QWORD *)(v14 + 16) = v17;
        *(__m128i *)(v14 + 24) = v37;
        if ( v38 )
        {
          *(_QWORD *)(v14 + 48) = 0;
          qfree(v38);
        }
        v39 = _mm_load_si128(&v81);
        v40 = *(void **)(v14 + 64);
        *(_QWORD *)(v14 + 40) = v78.m128i_i64[0];
        *(__m128i *)(v14 + 48) = v39;
        if ( v40 )
        {
          *(_QWORD *)(v14 + 72) = 0;
          qfree(v40);
        }
        v41 = _mm_load_si128(&v80);
        v12 += 96LL;
        *(_QWORD *)(v14 + 64) = v79.m128i_i64[0];
        v42 = v86;
        *(__m128i *)(v14 + 72) = v41;
        *(_QWORD *)(v14 + 88) = v42;
      }
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v108, &v108, 3);
      if ( v107.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v107.m128i_i64[0])(v87, v87, 3);
      v43 = v88;
      i = 0u;
      v44 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))v88[1].m128i_i64[0];
      v108 = 0;
      if ( v44 )
      {
        v44(&v108, v88, 2);
        i = _mm_loadu_si128(v43 + 1);
      }
      sub_409210(v12, v4, --v89, &v108);
      if ( i.m128i_i64[0] )
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v108, &v108, 3);
      v6 = v12 - a1;
      if ( (__int64)(v12 - a1) <= 1536 )
        return v110 - __readfsqword(0x28u);
      v4 = v12;
    }
    v107 = 0u;
    v106 = 0;
    if ( v7 )
    {
      v45 = v88;
      v87 = &v106;
      v7(&v106, v88, 2);
      v46 = _mm_loadu_si128(v45 + 1);
      v47 = (void (__fastcall *)(__m128i *, __int128 *, __int64))v45[1].m128i_i64[0];
      i = 0u;
      v107 = v46;
      v108 = 0;
      if ( v47 )
      {
        v47(&v108, v87, 2);
        i = _mm_load_si128(&v107);
      }
    }
    else
    {
      v108 = 0;
      i = 0u;
    }
    sub_408C30(a1, v4, &v108);
    if ( i.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v108, &v108, 3);
    if ( v4 - a1 > 96 )
    {
      v84.m128i_i64[0] = (__int64)&v106;
      do
      {
        v51 = *(void **)(v4 - 32);
        v52 = _mm_loadu_si128((const __m128i *)(v4 - 72));
        *(_QWORD *)(v4 - 32) = 0;
        *(_OWORD *)(v4 - 72) = 0;
        v53 = _mm_loadu_si128((const __m128i *)(v4 - 48));
        v54 = *(void **)(v4 - 80);
        v4 -= 96;
        *(_OWORD *)(v4 + 48) = 0;
        v55 = *(void **)(v4 + 40);
        v56 = _mm_loadu_si128((const __m128i *)v4);
        *(_QWORD *)(v4 + 40) = 0;
        v57 = _mm_loadu_si128((const __m128i *)(v4 + 72));
        *(_QWORD *)(v4 + 16) = 0;
        v58 = *(_QWORD *)(v4 + 88);
        *(_OWORD *)(v4 + 72) = 0;
        v86 = v51;
        v95 = v51;
        v59 = *(_QWORD *)a1;
        v91 = v54;
        *(_QWORD *)v4 = v59;
        v60 = *(_QWORD *)(a1 + 8);
        v93 = v55;
        *(_QWORD *)(v4 + 8) = v60;
        v61 = *(_QWORD *)(a1 + 16);
        v97 = v58;
        v78 = v56;
        v90 = v56;
        v79 = v52;
        v92 = v52;
        v80 = v53;
        v94 = v53;
        v81 = v57;
        v96 = v57;
        *(_QWORD *)(a1 + 16) = 0;
        v62 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_OWORD *)(a1 + 24) = 0;
        v63 = *(void **)(v4 + 16);
        if ( v63 )
        {
          *(_QWORD *)(v4 + 24) = 0;
          v82.m128i_i64[0] = v61;
          v83 = v62;
          qfree(v63);
          v62 = _mm_load_si128(&v83);
          v61 = v82.m128i_i64[0];
        }
        *(_QWORD *)(v4 + 16) = v61;
        *(__m128i *)(v4 + 24) = v62;
        v64 = *(_QWORD *)(a1 + 40);
        v65 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 48) = 0;
        v66 = *(void **)(v4 + 40);
        if ( v66 )
        {
          *(_QWORD *)(v4 + 48) = 0;
          v82.m128i_i64[0] = v64;
          v83 = v65;
          qfree(v66);
          v65 = _mm_load_si128(&v83);
          v64 = v82.m128i_i64[0];
        }
        *(_QWORD *)(v4 + 40) = v64;
        *(__m128i *)(v4 + 48) = v65;
        v67 = *(_QWORD *)(a1 + 64);
        v68 = _mm_loadu_si128((const __m128i *)(a1 + 72));
        *(_QWORD *)(a1 + 64) = 0;
        *(_OWORD *)(a1 + 72) = 0;
        v69 = *(void **)(v4 + 64);
        if ( v69 )
        {
          *(_QWORD *)(v4 + 72) = 0;
          v82.m128i_i64[0] = v67;
          v83 = v68;
          qfree(v69);
          v68 = _mm_load_si128(&v83);
          v67 = v82.m128i_i64[0];
        }
        *(_QWORD *)(v4 + 64) = v67;
        *(__m128i *)(v4 + 72) = v68;
        v70 = *(_QWORD *)(a1 + 88);
        i.m128i_i64[0] = 0;
        *(_QWORD *)(v4 + 88) = v70;
        i.m128i_i64[1] = 0;
        v108 = 0;
        if ( v107.m128i_i64[0] )
        {
          v87 = (__int128 *)v84.m128i_i64[0];
          ((void (__fastcall *)(__m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))v107.m128i_i64[0])(
            &v108,
            v84.m128i_i64[0],
            2,
            v48,
            v49,
            v50,
            v78.m128i_i64[0],
            v78.m128i_i64[1],
            v79.m128i_i64[0],
            v79.m128i_i64[1],
            v80.m128i_i64[0],
            v80.m128i_i64[1],
            v81.m128i_i64[0],
            v81.m128i_i64[1]);
          i = _mm_load_si128(&v107);
        }
        v71 = _mm_load_si128(&v78);
        v72 = _mm_load_si128(&v79);
        v105 = v58;
        v73 = _mm_load_si128(&v80);
        v99 = v54;
        v98 = v71;
        v74 = _mm_load_si128(&v81);
        ptr = v86;
        v100 = v72;
        v91 = nullptr;
        v93 = nullptr;
        v95 = nullptr;
        v101 = v55;
        v92 = 0;
        v102 = v73;
        v94 = 0;
        v104 = v74;
        v96 = 0;
        sub_4083E0(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((v4 - a1) >> 5), (__int64)&v98, (__int64)&v108);
        v75 = v99;
        v76 = v101;
        if ( ptr )
          qfree(ptr);
        if ( v76 )
          qfree(v76);
        if ( v75 )
          qfree(v75);
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v108, &v108, 3);
      }
      while ( v4 - a1 > 96 );
    }
    if ( v107.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v107.m128i_i64[0])(&v106, &v106, 3);
  }
  return v110 - __readfsqword(0x28u);
}
