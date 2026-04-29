__int64 __fastcall sub_1D6480(_QWORD *a1, unsigned __int8 a2, int a3, int a4, int a5, int a6, char a7, int a8)
{
  __int64 v8; // r12
  unsigned int v10; // r13d
  __m128i *v11; // rax
  __m128i si128; // xmm2
  int *v13; // rax
  __m128i v14; // xmm0
  unsigned __int8 *v15; // r13
  __int64 v16; // r13
  __m128i v17; // xmm0
  int *v18; // r13
  unsigned __int8 *v19; // r13
  __int64 v20; // rax
  __m128i v21; // xmm0
  _BYTE *v22; // rsi
  _BYTE *v23; // rsi
  _WORD *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned __int8 *v27; // r13
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned __int8 *v34; // r8
  __int64 v35; // r15
  __int64 v36; // r13
  __int64 v37; // rdi
  __int64 v39; // [rsp-8h] [rbp-238h]
  __int64 v40; // [rsp-8h] [rbp-238h]
  int v41; // [rsp+0h] [rbp-230h]
  int v42; // [rsp+0h] [rbp-230h]
  int v43; // [rsp+8h] [rbp-228h]
  __m128i v44; // [rsp+10h] [rbp-220h] BYREF
  __m128i v45; // [rsp+20h] [rbp-210h] BYREF
  __m128i v46; // [rsp+30h] [rbp-200h] BYREF
  _BYTE *v47; // [rsp+40h] [rbp-1F0h]
  char *v48; // [rsp+48h] [rbp-1E8h]
  _BYTE *v49; // [rsp+50h] [rbp-1E0h]
  int v50; // [rsp+5Ch] [rbp-1D4h]
  int v51; // [rsp+60h] [rbp-1D0h]
  int v52; // [rsp+64h] [rbp-1CCh]
  int v53; // [rsp+68h] [rbp-1C8h]
  int v54; // [rsp+6Ch] [rbp-1C4h]
  _BYTE *v55; // [rsp+70h] [rbp-1C0h]
  int *v56; // [rsp+78h] [rbp-1B8h]
  int v57; // [rsp+80h] [rbp-1B0h]
  unsigned int dtype_size; // [rsp+84h] [rbp-1ACh]
  __int64 *v59; // [rsp+88h] [rbp-1A8h]
  _BYTE v60[8]; // [rsp+90h] [rbp-1A0h] BYREF
  __int64 v61; // [rsp+98h] [rbp-198h] BYREF
  unsigned __int64 v62; // [rsp+A0h] [rbp-190h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-188h]
  __int64 v64; // [rsp+B0h] [rbp-180h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-178h]
  __m128i v66; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-160h]
  __m128i v68; // [rsp+D8h] [rbp-158h] BYREF
  int v69; // [rsp+E8h] [rbp-148h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-140h]
  int v71; // [rsp+F8h] [rbp-138h]
  _BYTE v72[16]; // [rsp+100h] [rbp-130h] BYREF
  __int64 v73; // [rsp+110h] [rbp-120h]
  _BYTE v74[8]; // [rsp+118h] [rbp-118h] BYREF
  __int64 v75; // [rsp+120h] [rbp-110h] BYREF
  __m128i v76; // [rsp+128h] [rbp-108h]
  _BYTE v77[16]; // [rsp+138h] [rbp-F8h] BYREF
  int v78; // [rsp+148h] [rbp-E8h]
  _BYTE v79[16]; // [rsp+150h] [rbp-E0h] BYREF
  __int64 v80; // [rsp+160h] [rbp-D0h]
  _BYTE v81[8]; // [rsp+168h] [rbp-C8h] BYREF
  __int64 v82; // [rsp+170h] [rbp-C0h] BYREF
  __m128i v83; // [rsp+178h] [rbp-B8h]
  _BYTE v84[16]; // [rsp+188h] [rbp-A8h] BYREF
  int v85; // [rsp+198h] [rbp-98h]
  _BYTE v86[16]; // [rsp+1A0h] [rbp-90h] BYREF
  __int64 v87; // [rsp+1B0h] [rbp-80h]
  _BYTE v88[8]; // [rsp+1B8h] [rbp-78h] BYREF
  __int64 v89; // [rsp+1C0h] [rbp-70h] BYREF
  __m128i v90; // [rsp+1C8h] [rbp-68h]
  _BYTE v91[16]; // [rsp+1D8h] [rbp-58h] BYREF
  int v92; // [rsp+1E8h] [rbp-48h]
  char v93; // [rsp+1F0h] [rbp-40h] BYREF
  unsigned __int64 v94; // [rsp+1F8h] [rbp-38h]

  v8 = a6;
  v54 = a3;
  v57 = a4;
  v50 = a5;
  v52 = a6;
  v51 = a8;
  v94 = __readfsqword(0x28u);
  v53 = a2;
  dtype_size = get_dtype_size(a2);
  v10 = dtype_size;
  sub_1D5D50((__int64)a1, 4u, 1, 0, 0x3BEA45E214ADDC55LL, v8, 0);
  if ( a7 )
  {
    v11 = (__m128i *)v72;
    v55 = v72;
    v48 = &v93;
    do
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
      v11->m128i_i32[1] = -1;
      v11->m128i_i16[0] = 0;
      v11 += 5;
      v11[-5].m128i_i16[1] = 0;
      v11[-5].m128i_i64[1] = 0;
      v11[-4] = si128;
      v11[-3].m128i_i64[0] = 0;
      *(__m128i *)((char *)&v11[-3] + 8) = 0;
      v11[-2].m128i_i32[2] = 0;
      v11[-1].m128i_i64[0] = 0;
      v11[-1].m128i_i32[2] = 0;
    }
    while ( &v93 != (char *)v11 );
    LODWORD(v62) = 1;
    HIDWORD(v62) = v10;
    LODWORD(v63) = v54;
    v59 = &v64;
    sub_123480((__int64)&v64, (unsigned __int8 *)&v62);
    v67 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v66 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v68 = 0;
    sub_124BC0((__int64)v55, (unsigned __int8 *)&v64);
    v73 = v66.m128i_i64[0];
    v49 = v74;
    copy_tinfo_t(v74, &v66.m128i_u64[1]);
    v13 = (int *)v67;
    v67 = 0;
    v14 = _mm_loadu_si128(&v68);
    v68 = 0;
    if ( v75 )
    {
      v56 = v13;
      v46 = v14;
      v76.m128i_i64[0] = 0;
      qfree(v75);
      v14 = _mm_load_si128(&v46);
      v13 = v56;
    }
    v75 = (__int64)v13;
    v56 = &v69;
    v76 = v14;
    copy_argloc(v77, &v69);
    v78 = v71;
    cleanup_argloc(v56);
    if ( v67 )
    {
      v68.m128i_i64[0] = 0;
      qfree(v67);
    }
    clear_tinfo_t(&v66.m128i_u64[1]);
    sub_11C7E0((__int64)v59);
    sub_11C7E0((__int64)&v62);
    LODWORD(v62) = 1;
    HIDWORD(v62) = v10;
    v15 = (unsigned __int8 *)v59;
    LODWORD(v63) = v57;
    sub_123480((__int64)v59, (unsigned __int8 *)&v62);
    v67 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v66 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v68 = 0;
    sub_124BC0((__int64)v79, v15);
    v80 = v66.m128i_i64[0];
    v46.m128i_i64[0] = (__int64)v81;
    copy_tinfo_t(v81, &v66.m128i_u64[1]);
    v16 = v67;
    v67 = 0;
    v17 = _mm_loadu_si128(&v68);
    v68 = 0;
    if ( v82 )
    {
      v45 = v17;
      v83.m128i_i64[0] = 0;
      qfree(v82);
      v17 = _mm_load_si128(&v45);
    }
    v82 = v16;
    v18 = v56;
    v83 = v17;
    copy_argloc(v84, v56);
    v85 = v71;
    cleanup_argloc(v18);
    if ( v67 )
    {
      v68.m128i_i64[0] = 0;
      qfree(v67);
    }
    clear_tinfo_t(&v66.m128i_u64[1]);
    v19 = (unsigned __int8 *)v59;
    sub_11C7E0((__int64)v59);
    sub_11C7E0((__int64)&v62);
    v62 = 0x100000001LL;
    v63 = 0;
    sub_123480((__int64)v19, (unsigned __int8 *)&v62);
    v67 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v47 = v86;
    v66 = _mm_load_si128((const __m128i *)&xmmword_41F8F0);
    v68 = 0;
    sub_124BC0((__int64)v86, v19);
    v87 = v66.m128i_i64[0];
    copy_tinfo_t(v88, &v66.m128i_u64[1]);
    v20 = v67;
    v67 = 0;
    v21 = _mm_loadu_si128(&v68);
    v68 = 0;
    if ( v89 )
    {
      v45.m128i_i64[0] = v20;
      v44 = v21;
      v90.m128i_i64[0] = 0;
      qfree(v89);
      v21 = _mm_load_si128(&v44);
      v20 = v45.m128i_i64[0];
    }
    v89 = v20;
    v90 = v21;
    copy_argloc(v91, v56);
    v92 = v71;
    cleanup_argloc(v56);
    if ( v67 )
    {
      v68.m128i_i64[0] = 0;
      qfree(v67);
    }
    clear_tinfo_t(&v66.m128i_u64[1]);
    sub_11C7E0((__int64)v59);
    sub_11C7E0((__int64)&v62);
    sub_32C760(v60, *(_QWORD *)(a1[100] + 112LL), dtype_size, 0);
    copy_tinfo_t(v49, v60);
    copy_tinfo_t(v46.m128i_i64[0], v60);
    v64 = 24;
    copy_tinfo_t(v88, v59);
    clear_tinfo_t(v59);
    v22 = (_BYTE *)v75;
    if ( v76.m128i_i64[1] <= 1uLL )
    {
      v75 = qvector_reserve(&v75, v75, 2, 1);
      v22 = (_BYTE *)v75;
    }
    v76.m128i_i64[0] = 2;
    *v22 = 120;
    *(_BYTE *)(v75 + 1) = 0;
    v23 = (_BYTE *)v82;
    if ( v83.m128i_i64[1] <= 1uLL )
    {
      v82 = qvector_reserve(&v82, v82, 2, 1);
      v23 = (_BYTE *)v82;
    }
    v83.m128i_i64[0] = 2;
    *v23 = 121;
    *(_BYTE *)(v82 + 1) = 0;
    v24 = (_WORD *)v89;
    if ( v90.m128i_i64[1] <= 2uLL )
    {
      v89 = qvector_reserve(&v89, v89, 3, 1);
      v24 = (_WORD *)v89;
    }
    v90.m128i_i64[0] = 3;
    *v24 = 17987;
    *(_BYTE *)(v89 + 2) = 0;
    v25 = a1[1];
    v62 = 0xFFFFFFFF00000004LL;
    v26 = a1[5];
    v63 = 0;
    v64 = 24;
    v27 = (unsigned __int8 *)v59;
    v63 = sub_335C70(
            v25,
            v26,
            (unsigned int)"__OFSUB__",
            (_DWORD)v59,
            3,
            (_DWORD)v55,
            1,
            v39,
            v41,
            (unsigned int)v79,
            v44.m128i_i32[0],
            v44.m128i_i32[2]);
    clear_tinfo_t(v27);
    v28 = v63;
    *(_DWORD *)(*(_QWORD *)(v63 + 72) + 284LL) = 30;
    *(_DWORD *)(*(_QWORD *)(v28 + 72) + 280LL) |= 0x10u;
    HIDWORD(v62) = 1;
    v64 = 0x100000001LL;
    v65 = 3;
    sub_1D5E90((__int64)a1, 4, (unsigned __int8 *)&v62, nullptr, v27);
    v29 = v63;
    if ( v63 )
    {
      sub_11C7E0(v63 + 64);
      sub_11C7E0(v29 + 48);
      sub_11C7E0(v29 + 32);
      j__qfree(v29);
    }
    v30 = a1[1];
    v31 = a1[5];
    v61 = 24;
    v63 = sub_335C70(
            v30,
            v31,
            (unsigned int)"__CFSUB__",
            (unsigned int)&v61,
            3,
            (_DWORD)v55,
            1,
            v40,
            v42,
            v43,
            v44.m128i_i32[0],
            v44.m128i_i32[2]);
    clear_tinfo_t(&v61);
    v32 = v63;
    v33 = (__int64)v59;
    v34 = (unsigned __int8 *)v59;
    *(_DWORD *)(*(_QWORD *)(v63 + 72) + 284LL) = 29;
    *(_DWORD *)(*(_QWORD *)(v32 + 72) + 280LL) |= 0x10u;
    LODWORD(v65) = 0;
    sub_1D5E90((__int64)a1, 4, (unsigned __int8 *)&v62, nullptr, v34);
    sub_11C7E0(v33);
    sub_11C7E0((__int64)&v62);
    clear_tinfo_t(v60);
    v35 = (__int64)v48;
    v36 = (__int64)v55;
    do
    {
      v35 -= 80;
      cleanup_argloc(v35 + 56);
      v37 = *(_QWORD *)(v35 + 32);
      if ( v37 )
      {
        *(_QWORD *)(v35 + 40) = 0;
        qfree(v37);
      }
      clear_tinfo_t(v35 + 24);
      sub_11C7E0(v35);
    }
    while ( v35 != v36 );
  }
  if ( (_BYTE)v51 )
    sub_1D5D50((__int64)a1, 6u, 1, v8, 0x3BEA45E214ADDC55LL, v8, 0);
  sub_1D6180((__int64)a1, 0, v53, v52, v52, 0);
  sub_1D5D50((__int64)a1, 0xCu, dtype_size, v57, v8, v8, 0);
  return sub_1D5D50((__int64)a1, 0xDu, dtype_size, v54, v8, v50, 0);
}
