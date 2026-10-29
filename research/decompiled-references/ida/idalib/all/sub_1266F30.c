void __fastcall sub_1266F30(__int64 a1, __int64 a2, __int64 a3, __m128i a4, __m128i a5)
{
  const char *v5; // rcx
  __int64 v6; // r8
  _BYTE *v8; // r13
  __int64 v9; // r15
  _BYTE *v10; // r14
  size_t v11; // rsi
  __m128i *v12; // rax
  size_t v13; // rbp
  unsigned __int64 v14; // rdx
  __m128i *v15; // rdi
  size_t v16; // rsi
  unsigned __int64 v17; // rax
  bool v18; // zf
  size_t v19; // r8
  size_t v20; // rbp
  unsigned __int64 v21; // rax
  __m128i *v22; // rax
  size_t v23; // rcx
  size_t v24; // rbp
  unsigned __int64 v25; // rdx
  __m128i *v26; // rdi
  size_t v27; // rsi
  unsigned __int64 v28; // rax
  size_t v29; // r8
  size_t v30; // r12
  __int8 *v31; // rcx
  size_t v32; // rsi
  size_t v33; // r9
  __m128i *v34; // rdx
  unsigned __int64 v35; // rcx
  size_t v36; // rsi
  __m128i *v37; // rax
  size_t v38; // r14
  unsigned __int64 v39; // rdx
  __m128i *v40; // r14
  void **v41; // rbx
  __int8 *v42; // rdi
  __int8 *v43; // rdi
  __m128i v44; // xmm2
  size_t v47; // [rsp+18h] [rbp-198h]
  __int64 v48; // [rsp+28h] [rbp-188h]
  void *v49; // [rsp+38h] [rbp-178h] BYREF
  size_t v50; // [rsp+40h] [rbp-170h]
  __m128i v51; // [rsp+48h] [rbp-168h] BYREF
  void *v52; // [rsp+58h] [rbp-158h] BYREF
  size_t v53; // [rsp+60h] [rbp-150h]
  __m128i v54; // [rsp+68h] [rbp-148h] BYREF
  void *src; // [rsp+78h] [rbp-138h] BYREF
  size_t n; // [rsp+80h] [rbp-130h]
  _QWORD v57[2]; // [rsp+88h] [rbp-128h] BYREF
  void *v58; // [rsp+98h] [rbp-118h] BYREF
  size_t v59; // [rsp+A0h] [rbp-110h]
  __m128i v60; // [rsp+A8h] [rbp-108h] BYREF
  __m128i *v61; // [rsp+B8h] [rbp-F8h] BYREF
  size_t v62; // [rsp+C0h] [rbp-F0h]
  __m128i v63; // [rsp+C8h] [rbp-E8h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-D8h]
  __m128i *v65; // [rsp+E8h] [rbp-C8h] BYREF
  size_t v66; // [rsp+F0h] [rbp-C0h]
  __m128i v67; // [rsp+F8h] [rbp-B8h] BYREF
  __int64 v68; // [rsp+108h] [rbp-A8h]
  _QWORD v69[2]; // [rsp+118h] [rbp-98h] BYREF
  __m128i v70; // [rsp+128h] [rbp-88h] BYREF
  __m128i *v71; // [rsp+138h] [rbp-78h]
  size_t v72; // [rsp+140h] [rbp-70h]
  __m128i v73; // [rsp+148h] [rbp-68h] BYREF
  __m128i *v74; // [rsp+158h] [rbp-58h]
  size_t v75; // [rsp+160h] [rbp-50h]
  __m128i v76; // [rsp+168h] [rbp-48h] BYREF
  _BYTE v77[56]; // [rsp+178h] [rbp-38h] BYREF

  if ( !*(_BYTE *)(a1 + 2384) )
    return;
  v5 = "i386-linux-gnu";
  v6 = 14;
  v8 = *(_BYTE **)(a1 + 2392);
  v9 = *(_QWORD *)(a1 + 2400);
  if ( *(_DWORD *)(a1 + 2424) != 37 )
  {
    v5 = *(const char **)(a1 + 2392);
    v6 = *(_QWORD *)(a1 + 2400);
  }
  if ( (unsigned __int8)sub_1218340((_QWORD *)a1, a2, a3, (__int64)v5, v6, a4, a5) )
    return;
  v10 = *(_BYTE **)(a1 + 2488);
  v48 = *(_QWORD *)(a1 + 2496);
  if ( v8 )
  {
    src = v57;
    sub_12648D0(&src, v8, (__int64)&v8[v9]);
  }
  else
  {
    LOBYTE(v57[0]) = 0;
    src = v57;
    n = 0;
  }
  if ( v10 )
  {
    v49 = &v51;
    sub_12648D0(&v49, v10, (__int64)&v10[v48]);
    v11 = v50;
    if ( 0x7FFFFFFFFFFFFFFFLL - v50 <= 3 )
      goto LABEL_98;
    v12 = (__m128i *)v49;
    v13 = v50 + 4;
    if ( v49 == &v51 )
      v14 = 15;
    else
      v14 = v51.m128i_i64[0];
    if ( v13 > v14 )
    {
      sub_998B30((__int64)&v49, v50, 0, "/../", 4u);
      goto LABEL_13;
    }
  }
  else
  {
    v51.m128i_i8[0] = 0;
    v13 = 4;
    v11 = 0;
    v12 = &v51;
    v49 = &v51;
  }
  *(__int32 *)((char *)v12->m128i_i32 + v11) = 791555631;
LABEL_13:
  v50 = v13;
  *((_BYTE *)v49 + v13) = 0;
  v15 = (__m128i *)v49;
  v52 = &v54;
  if ( v49 == &v51 )
  {
    v16 = v50;
    a4 = _mm_load_si128(&v51);
    v15 = &v54;
    v51.m128i_i8[0] = 0;
    v19 = n;
    v17 = 15;
    v50 = 0;
    v54 = a4;
    v53 = v16;
    v20 = v16 + n;
  }
  else
  {
    v16 = v50;
    v17 = v51.m128i_i64[0];
    v18 = v49 == &v54;
    v52 = v49;
    v19 = n;
    v49 = &v51;
    v53 = v50;
    v50 = 0;
    v20 = n + v53;
    v51.m128i_i8[0] = 0;
    v54.m128i_i64[0] = v17;
    if ( v18 )
      v17 = 15;
  }
  if ( v17 >= v20 )
  {
    if ( v19 )
    {
      v42 = &v15->m128i_i8[v16];
      if ( v19 == 1 )
        *v42 = *(_BYTE *)src;
      else
        memcpy(v42, src, v19);
      v15 = (__m128i *)v52;
    }
    goto LABEL_21;
  }
  if ( src == v57 )
    v21 = 15;
  else
    v21 = v57[0];
  if ( v21 < v20 )
  {
    sub_998B30((__int64)&v52, v16, 0, src, v19);
    v15 = (__m128i *)v52;
LABEL_21:
    v53 = v20;
    v22 = (__m128i *)&v52;
    v15->m128i_i8[v20] = 0;
    goto LABEL_22;
  }
  v22 = (__m128i *)sub_99BDC0(&src, 0, 0, v15, v16);
LABEL_22:
  v58 = &v60;
  if ( (__m128i *)v22->m128i_i64[0] == &v22[1] )
  {
    a5 = _mm_loadu_si128(v22 + 1);
    v60 = a5;
  }
  else
  {
    v58 = (void *)v22->m128i_i64[0];
    v60.m128i_i64[0] = v22[1].m128i_i64[0];
  }
  v23 = v22->m128i_u64[1];
  v22[1].m128i_i8[0] = 0;
  v59 = v23;
  v22->m128i_i64[0] = (__int64)v22[1].m128i_i64;
  v22->m128i_i64[1] = 0;
  v24 = v59;
  if ( 0x7FFFFFFFFFFFFFFFLL - v59 <= 0xC )
    goto LABEL_98;
  if ( v58 == &v60 )
    v25 = 15;
  else
    v25 = v60.m128i_i64[0];
  if ( v59 + 13 > v25 )
    sub_998B30((__int64)&v58, v59, 0, "/include/c++/", 0xDu);
  else
    qmemcpy((char *)v58 + v59, "/include/c++/", 13);
  v59 = v24 + 13;
  *((_BYTE *)v58 + v24 + 13) = 0;
  v26 = (__m128i *)v58;
  v65 = &v67;
  if ( v58 == &v60 )
  {
    v27 = v59;
    v26 = &v67;
    v44 = _mm_load_si128(&v60);
    v59 = 0;
    v29 = *(_QWORD *)(a1 + 2920);
    v60.m128i_i8[0] = 0;
    v28 = 15;
    v67 = v44;
    v31 = *(__int8 **)(a1 + 2912);
    v66 = v27;
    v30 = v27 + v29;
  }
  else
  {
    v27 = v59;
    v28 = v60.m128i_i64[0];
    v65 = (__m128i *)v58;
    v29 = *(_QWORD *)(a1 + 2920);
    v59 = 0;
    v66 = v27;
    v60.m128i_i8[0] = 0;
    v30 = v29 + v27;
    v67.m128i_i64[0] = v28;
    if ( v58 == &v67 )
      v28 = 15;
    v58 = &v60;
    v31 = *(__int8 **)(a1 + 2912);
  }
  if ( v28 < v30 )
  {
    sub_998B30((__int64)&v65, v27, 0, v31, v29);
    v26 = v65;
  }
  else if ( v29 )
  {
    v43 = &v26->m128i_i8[v27];
    if ( v29 == 1 )
      *v43 = *v31;
    else
      memcpy(v43, v31, v29);
    v26 = v65;
  }
  v66 = v30;
  v26->m128i_i8[v30] = 0;
  v69[0] = &v70;
  if ( v65 == &v67 )
  {
    v70 = _mm_load_si128(&v67);
  }
  else
  {
    v69[0] = v65;
    v70.m128i_i64[0] = v67.m128i_i64[0];
  }
  v69[1] = v66;
  if ( v58 != &v60 )
    operator delete(v58);
  if ( v52 != &v54 )
    operator delete(v52);
  if ( v49 != &v51 )
    operator delete(v49);
  if ( src != v57 )
    operator delete(src);
  if ( v10 )
  {
    v61 = &v63;
    sub_12648D0(&v61, v10, (__int64)&v10[v48]);
    v32 = v62;
    if ( 0x7FFFFFFFFFFFFFFFLL - v62 <= 0xE )
      goto LABEL_98;
    v33 = v62 + 15;
    v34 = v61;
    if ( v61 == &v63 )
      v35 = 15;
    else
      v35 = v63.m128i_i64[0];
    if ( v33 > v35 )
    {
      v47 = v62 + 15;
      sub_998B30((__int64)&v61, v62, 0, "/../include/c++", 0xFu);
      v33 = v47;
      goto LABEL_51;
    }
  }
  else
  {
    v34 = &v63;
    v63.m128i_i8[0] = 0;
    v32 = 0;
    v33 = 15;
    v61 = &v63;
  }
  qmemcpy(&v34->m128i_i8[v32], "/../include/c++", 15);
LABEL_51:
  v62 = v33;
  v61->m128i_i8[v33] = 0;
  v71 = &v73;
  if ( v61 == &v63 )
  {
    v73 = _mm_load_si128(&v63);
  }
  else
  {
    v71 = v61;
    v73.m128i_i64[0] = v63.m128i_i64[0];
  }
  v72 = v62;
  if ( !v10 )
  {
    v37 = &v67;
    v67.m128i_i8[0] = 0;
    v36 = 0;
    v38 = 15;
    v65 = &v67;
    goto LABEL_79;
  }
  v65 = &v67;
  sub_12648D0(&v65, v10, (__int64)&v10[v48]);
  v36 = v66;
  if ( 0x7FFFFFFFFFFFFFFFLL - v66 <= 0xE )
LABEL_98:
    std::__throw_length_error("basic_string::append");
  v37 = v65;
  v38 = v66 + 15;
  if ( v65 == &v67 )
    v39 = 15;
  else
    v39 = v67.m128i_i64[0];
  if ( v38 > v39 )
  {
    sub_998B30((__int64)&v65, v66, 0, "/../include/g++", 0xFu);
    goto LABEL_59;
  }
LABEL_79:
  qmemcpy(&v37->m128i_i8[v36], "/../include/g++", 15);
LABEL_59:
  v66 = v38;
  v65->m128i_i8[v38] = 0;
  v74 = &v76;
  if ( v65 == &v67 )
  {
    v76 = _mm_load_si128(&v67);
  }
  else
  {
    v74 = v65;
    v76.m128i_i64[0] = v67.m128i_i64[0];
  }
  v40 = (__m128i *)v69;
  v75 = v66;
  do
  {
    LOWORD(v64) = 260;
    LOWORD(v68) = 260;
    v65 = (__m128i *)(a1 + 2584);
    v61 = v40;
    if ( (unsigned __int8)sub_1214670(a1, (__int64)v8, v9, a2, a3, 0, a4, (int)v40, v62, v63.m128i_i32[0], a5) )
      break;
    v40 += 2;
  }
  while ( v77 != (_BYTE *)v40 );
  v41 = (void **)v77;
  do
  {
    while ( 1 )
    {
      v41 -= 4;
      if ( *v41 == v41 + 2 )
        break;
      operator delete(*v41);
      if ( v41 == v69 )
        return;
    }
  }
  while ( v41 != v69 );
}
