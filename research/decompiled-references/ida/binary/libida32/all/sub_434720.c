double __fastcall sub_434720(
        unsigned __int64 *a1,
        const __m128i **a2,
        char *a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  const __m128i *v16; // r15
  __m128i *v17; // rbp
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r13
  const __m128i *v20; // rax
  __m128i v21; // xmm0
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  const __m128i *v24; // r9
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  char *v27; // rdi
  const __m128i *v28; // rax
  char *v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rax
  void **v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __m128i *v36; // r13
  __m128i *v37; // r12
  _BYTE *v38; // r14
  char *v39; // r15
  void *v40; // r14
  const __m128i *v41; // r15
  unsigned __int64 v42; // rdi
  char *v43; // rdx
  const __m128i *v44; // rax
  __m128i v45; // xmm0
  const __m128i *v46; // r15
  __m128i v47; // xmm0
  unsigned __int64 v48; // rdi
  char *v49; // rdx
  const __m128i *v50; // rax
  void *v51; // r15
  __m128 v52; // xmm3
  __m128 v53; // xmm2
  void *v54; // rbx
  double v55; // [rsp+0h] [rbp-1E8h]
  char *v56; // [rsp+8h] [rbp-1E0h]
  void *v57; // [rsp+8h] [rbp-1E0h]
  double v58; // [rsp+10h] [rbp-1D8h]
  __int64 v60; // [rsp+20h] [rbp-1C8h]
  __int64 v61; // [rsp+28h] [rbp-1C0h]
  __int64 v62; // [rsp+30h] [rbp-1B8h]
  char *v63; // [rsp+50h] [rbp-198h]
  char *v64; // [rsp+58h] [rbp-190h]
  unsigned __int64 v65; // [rsp+60h] [rbp-188h]
  unsigned __int64 v66; // [rsp+68h] [rbp-180h]
  unsigned __int64 v67; // [rsp+70h] [rbp-178h]
  unsigned __int64 v68; // [rsp+78h] [rbp-170h]
  void *v69; // [rsp+80h] [rbp-168h] BYREF
  const __m128i *v70; // [rsp+88h] [rbp-160h]
  __int64 v71; // [rsp+90h] [rbp-158h]
  __int128 v72; // [rsp+A0h] [rbp-148h] BYREF
  char *v73; // [rsp+B0h] [rbp-138h]
  __int128 v74; // [rsp+C0h] [rbp-128h] BYREF
  char *v75; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v76[4]; // [rsp+E0h] [rbp-108h] BYREF
  void *v77; // [rsp+100h] [rbp-E8h] BYREF
  unsigned __int64 v78; // [rsp+108h] [rbp-E0h]
  char *v79; // [rsp+110h] [rbp-D8h]
  void *v80; // [rsp+130h] [rbp-B8h] BYREF
  unsigned __int64 v81; // [rsp+138h] [rbp-B0h]
  char *v82; // [rsp+140h] [rbp-A8h]
  void *v83; // [rsp+160h] [rbp-88h] BYREF
  __m128i *v84; // [rsp+168h] [rbp-80h]
  __int64 v85; // [rsp+170h] [rbp-78h]
  void *v86; // [rsp+178h] [rbp-70h]
  __m128i *v87; // [rsp+180h] [rbp-68h]
  __int64 v88; // [rsp+188h] [rbp-60h]
  void *v89; // [rsp+190h] [rbp-58h]
  void *v90; // [rsp+198h] [rbp-50h]
  __int64 v91; // [rsp+1A0h] [rbp-48h]
  unsigned __int64 v92; // [rsp+1A8h] [rbp-40h]

  v58 = *(double *)a7.m128_u64;
  v92 = __readfsqword(0x28u);
  v55 = 0.0;
  if ( *(double *)a7.m128_u64 <= 100.0 )
  {
    sub_42F860(&v69, a3, a4, (__int64)a4, a5, a6, a7, a8, a9);
    v16 = v70;
    v17 = (__m128i *)v69;
    v81 = 0;
    v18 = (char *)v70 - (_BYTE *)v69;
    v56 = (char *)((char *)v70 - (_BYTE *)v69);
    if ( v70 == v69 )
    {
      v19 = 0;
    }
    else
    {
      if ( v18 > 0x7FFFFFFFFFFFFFF8LL )
        sub_2E883E(v18, a3, v13, v14, v15);
      v18 = (char *)v70 - (_BYTE *)v69;
      v19 = operator new((unsigned __int64)v56);
    }
    if ( v16 == v17 )
    {
      v22 = v19;
    }
    else
    {
      v20 = v17;
      v13 = (_QWORD *)v19;
      do
      {
        v21 = _mm_loadu_si128(v20);
        v20 = (const __m128i *)((char *)v20 + 24);
        v13 += 3;
        *(__m128i *)(v13 - 3) = v21;
        *(v13 - 1) = v20[-1].m128i_i64[1];
      }
      while ( v16 != v20 );
      v22 = v19 + 8 * ((unsigned __int64)((char *)&v16[-2].m128i_u64[1] - (char *)v17) >> 3) + 24;
    }
    v23 = (unsigned __int64)a2[1];
    v24 = *a2;
    v81 = v22;
    v78 = 0;
    v25 = v23 - (_QWORD)v24;
    if ( (const __m128i *)v23 == v24 )
    {
      v27 = nullptr;
    }
    else
    {
      if ( v25 > 0x7FFFFFFFFFFFFFF8LL )
        sub_2E883E(v18, a3, v13, v23, v15);
      v26 = operator new(v23 - (_QWORD)v24);
      v23 = (unsigned __int64)a2[1];
      v24 = *a2;
      v27 = (char *)v26;
    }
    if ( v24 == (const __m128i *)v23 )
    {
      v31 = (__int64)v27;
    }
    else
    {
      v28 = v24;
      v29 = v27;
      do
      {
        v30 = _mm_loadu_si128(v28);
        v28 = (const __m128i *)((char *)v28 + 24);
        v29 += 24;
        *(__m128i *)(v29 - 24) = v30;
        *((_QWORD *)v29 - 1) = v28[-1].m128i_i64[1];
      }
      while ( (const __m128i *)v23 != v28 );
      v23 = (v23 - 24 - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF8LL;
      v31 = (__int64)&v27[v23 + 24];
    }
    v78 = v31;
    v77 = v27;
    v32 = &v77;
    v79 = &v27[v25];
    v80 = (void *)v19;
    v82 = &v56[v19];
    sub_42FE80((__int64 *)&v83, (__int64 *)&v77, (signed __int64)&v80, v23, (__int64)&v27[v25]);
    v36 = (__m128i *)v83;
    v37 = (__m128i *)v86;
    v60 = v85;
    v38 = v80;
    v39 = v82;
    v62 = v88;
    v61 = v91;
    if ( v77 )
    {
      v32 = (void **)(v79 - (_BYTE *)v77);
      operator delete(v77, v79 - (_BYTE *)v77);
    }
    if ( v38 )
    {
      v32 = (void **)(v39 - v38);
      operator delete(v38, v39 - v38);
    }
    v40 = v89;
    v55 = 100.0;
    if ( v89 == v90 )
    {
      v41 = v84;
      v73 = nullptr;
      v72 = 0;
      v42 = (char *)v84 - (char *)v36;
      v65 = (char *)v84 - (char *)v36;
      if ( v84 == v36 )
      {
        v63 = nullptr;
      }
      else
      {
        if ( v42 > 0x7FFFFFFFFFFFFFF8LL )
          sub_2E883E(v42, v32, v33, v34, v35);
        v63 = (char *)operator new(v65);
      }
      v43 = v63;
      *(_QWORD *)&v72 = v63;
      v73 = &v63[v65];
      if ( v36 == v41 )
      {
        v66 = (unsigned __int64)v63;
      }
      else
      {
        v44 = v36;
        do
        {
          v45 = _mm_loadu_si128(v44);
          v44 = (const __m128i *)((char *)v44 + 24);
          v43 += 24;
          *(__m128i *)(v43 - 24) = v45;
          v34 = v44[-1].m128i_i64[1];
          *((_QWORD *)v43 - 1) = v34;
        }
        while ( v41 != v44 );
        v66 = (unsigned __int64)&v63[8 * ((unsigned __int64)((char *)&v41[-2].m128i_u64[1] - (char *)v36) >> 3) + 24];
      }
      v46 = v87;
      v47.m128i_i64[0] = 0;
      v75 = nullptr;
      v74 = 0;
      *((_QWORD *)&v72 + 1) = v66;
      v48 = (char *)v87 - (char *)v37;
      v67 = (char *)v87 - (char *)v37;
      if ( v87 == v37 )
      {
        v64 = nullptr;
      }
      else
      {
        if ( v48 > 0x7FFFFFFFFFFFFFF8LL )
          sub_2E883E(v48, v32, v43, v34, v35);
        v64 = (char *)operator new(v67);
      }
      v49 = v64;
      *(_QWORD *)&v74 = v64;
      v75 = &v64[v67];
      if ( v46 == v37 )
      {
        v68 = (unsigned __int64)v64;
      }
      else
      {
        v50 = v37;
        do
        {
          v47 = _mm_loadu_si128(v50);
          v50 = (const __m128i *)((char *)v50 + 24);
          v49 += 24;
          *(__m128i *)(v49 - 24) = v47;
          *((_QWORD *)v49 - 1) = v50[-1].m128i_i64[1];
        }
        while ( v46 != v50 );
        v68 = (unsigned __int64)&v64[8 * ((unsigned __int64)((char *)&v46[-2].m128i_u64[1] - (char *)v37) >> 3) + 24];
      }
      *((_QWORD *)&v74 + 1) = v68;
      sub_42F620((__int64)&v80, (__int64 *)&v69, *(double *)v47.m128i_i64, *(double *)a8.m128_u64, a9, a10);
      v51 = v80;
      sub_4344D0((__int64)&v77, *a1, a1[1], (unsigned __int64)v80, v81, v58);
      v52 = (__m128)(unsigned __int64)v77;
      v55 = *(double *)&v77;
      if ( v51 )
        operator delete(v51, v82 - (_BYTE *)v51);
      if ( v66 - (_QWORD)v63 != (char *)a2[1] - (char *)*a2 || (char *)(v68 - (_QWORD)v64) != v56 )
      {
        v53 = (__m128)*(unsigned __int64 *)&v55;
        *(double *)v53.m128_u64 = fmax(v55, v58);
        sub_42F620((__int64)&v77, (__int64 *)&v74, v58, *(double *)a8.m128_u64, v53, v52);
        sub_42CD30((__int64)v76, (__int64 *)&v72);
        v54 = v77;
        v57 = (void *)v76[0];
        sub_4344D0((__int64)&v80, v76[0], v76[1], (unsigned __int64)v77, v78, *(double *)v53.m128_u64);
        v55 = fmax(*(double *)&v80, v55);
        if ( v57 )
          operator delete(v57, v76[2] - (_QWORD)v57);
        if ( v54 )
          operator delete(v54, v79 - (_BYTE *)v54);
      }
      if ( v64 )
        operator delete(v64, v67);
      if ( v63 )
        operator delete(v63, v65);
    }
    if ( v40 )
      operator delete(v40, v61 - (_QWORD)v40);
    if ( v37 )
      operator delete(v37, v62 - (_QWORD)v37);
    if ( v36 )
      operator delete(v36, v60 - (_QWORD)v36);
    if ( v17 )
      operator delete(v17, v71 - (_QWORD)v17);
  }
  return v55;
}

