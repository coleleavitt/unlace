void __fastcall sub_AB4B80(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int64 a10)
{
  __m128i v11; // xmm4
  __m128i v12; // xmm5
  __m128i v13; // xmm6
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm7
  __m128i v17; // xmm4
  __m128i v18; // xmm5
  __int64 v19; // rdx
  __m128i *v20; // rdx
  __int64 v21; // rdx
  __m128i *v22; // rdi
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm7
  __m128i v28; // xmm1
  __m128i *v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // xmm2
  __m128i v33; // xmm3
  __m128i v34; // xmm4
  __int64 v35; // rdx
  __m128i *v36; // rdx
  __m128i v37; // xmm0
  void (__fastcall *v38)(__m128i *, __m128i *, __int64); // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rdi
  void (__fastcall *v45)(__int64, __int64, __int64); // rax
  __int64 v46; // rax
  _BYTE *v47; // rax
  __m128i v48; // [rsp+0h] [rbp-108h] BYREF
  __m128 v49; // [rsp+10h] [rbp-F8h]
  __int64 v50; // [rsp+20h] [rbp-E8h]
  __m128i v51; // [rsp+28h] [rbp-E0h] BYREF
  __m128i v52; // [rsp+38h] [rbp-D0h] BYREF
  __m128i v53; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h]
  void *v55; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+68h] [rbp-A0h]
  __m128i v57; // [rsp+70h] [rbp-98h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h] BYREF
  __m128i v59; // [rsp+88h] [rbp-80h] BYREF
  __m128i v60; // [rsp+98h] [rbp-70h] BYREF
  __m128i v61; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-50h]
  void *v63; // [rsp+C0h] [rbp-48h]
  __int64 v64; // [rsp+C8h] [rbp-40h]
  __m128i v65[3]; // [rsp+D0h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 1056) )
  {
    *(_BYTE *)(a1 + 1056) = 0;
    sub_AB4AB0((__int64)&a7);
    v39 = *(unsigned int *)(a1 + 24);
    if ( (_DWORD)v39 )
    {
      v40 = *(_QWORD *)(a1 + 16);
      v48.m128i_i8[0] = 1;
      v41 = v40 + 32 * v39 - 32;
      if ( !*(_QWORD *)(v41 + 16) )
        goto LABEL_35;
      while ( 1 )
      {
        (*(void (__fastcall **)(__int64, __m128i *))(v41 + 24))(v41, &v48);
        v43 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
        *(_DWORD *)(a1 + 24) = v43;
        v44 = *(_QWORD *)(a1 + 16) + 32 * v43;
        v45 = *(void (__fastcall **)(__int64, __int64, __int64))(v44 + 16);
        if ( v45 )
          v45(v44, v44, 3);
        v46 = *(unsigned int *)(a1 + 24);
        if ( !(_DWORD)v46 )
          break;
        v42 = *(_QWORD *)(a1 + 16);
        v48.m128i_i8[0] = 1;
        v41 = v42 + 32 * v46 - 32;
        if ( !*(_QWORD *)(v41 + 16) )
          goto LABEL_35;
      }
    }
    v47 = *(_BYTE **)(a1 + 1064);
    *(_QWORD *)(a1 + 1072) = 0;
    *v47 = 0;
    sub_971800(*(_QWORD *)a1, "\n");
    *(_BYTE *)(a1 + 1056) = 1;
    return;
  }
  v50 = a1;
  v54 = a10;
  v51 = _mm_loadu_si128((const __m128i *)&a7);
  v52 = _mm_loadu_si128((const __m128i *)&a8);
  v53 = _mm_loadu_si128((const __m128i *)&a9);
  v55 = &v57;
  if ( a2 )
  {
    sub_AA6CE0(&v55, a2, (__int64)&a2[a3]);
    if ( *(_BYTE *)(a1 + 1057) )
      goto LABEL_4;
    goto LABEL_16;
  }
  v23 = *(_BYTE *)(a1 + 1057) == 0;
  v57.m128i_i8[0] = 0;
  v56 = 0;
  if ( v23 )
  {
LABEL_16:
    v24 = *(unsigned int *)(a1 + 24);
    v25 = *(_QWORD *)(a1 + 16);
    LOBYTE(v58) = 0;
    v26 = v25 + 32 * v24 - 32;
    if ( *(_QWORD *)(v26 + 16) )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(v26 + 24))(v26, &v58);
      v27 = _mm_loadu_si128(&v52);
      v28 = _mm_loadu_si128(&v53);
      v29 = (__m128i *)(*(_QWORD *)(a1 + 16) + 32LL * *(unsigned int *)(a1 + 24) - 32);
      v59 = _mm_loadu_si128(&v51);
      v60 = v27;
      v58 = v50;
      v61 = v28;
      v62 = v54;
      v63 = v65;
      if ( v55 == &v57 )
      {
        v65[0] = _mm_load_si128(&v57);
      }
      else
      {
        v63 = v55;
        v65[0].m128i_i64[0] = v57.m128i_i64[0];
      }
      v30 = v56;
      v56 = 0;
      v57.m128i_i8[0] = 0;
      v64 = v30;
      v55 = &v57;
      v49.m128_u64[0] = 0;
      v31 = operator new(0x60u);
      v32 = _mm_loadu_si128(&v59);
      v33 = _mm_loadu_si128(&v60);
      v34 = _mm_loadu_si128(&v61);
      *(_QWORD *)v31 = v58;
      v35 = v62;
      *(__m128i *)(v31 + 8) = v32;
      *(_QWORD *)(v31 + 56) = v35;
      *(_QWORD *)(v31 + 64) = v31 + 80;
      v36 = (__m128i *)v63;
      *(__m128i *)(v31 + 24) = v33;
      *(__m128i *)(v31 + 40) = v34;
      if ( v36 == v65 )
      {
        *(__m128i *)(v31 + 80) = _mm_load_si128(v65);
      }
      else
      {
        *(_QWORD *)(v31 + 64) = v36;
        *(_QWORD *)(v31 + 80) = v65[0].m128i_i64[0];
      }
      v48.m128i_i64[0] = v31;
      v65[0].m128i_i8[0] = 0;
      v37 = _mm_load_si128(&v48);
      *(_QWORD *)(v31 + 72) = v64;
      v63 = v65;
      v64 = 0;
      v48 = _mm_loadu_si128(v29);
      v38 = (void (__fastcall *)(__m128i *, __m128i *, __int64))v29[1].m128i_i64[0];
      *v29 = v37;
      v49.m128_u64[0] = (unsigned __int64)v38;
      v29[1].m128i_i64[0] = (__int64)sub_AA8360;
      v49.m128_u64[1] = v29[1].m128i_u64[1];
      v29[1].m128i_i64[1] = (__int64)sub_AB66A0;
      if ( v38 )
        v38(&v48, &v48, 3);
      goto LABEL_10;
    }
LABEL_35:
    std::__throw_bad_function_call();
  }
LABEL_4:
  v11 = _mm_loadu_si128(&v51);
  v12 = _mm_loadu_si128(&v52);
  v13 = _mm_loadu_si128(&v53);
  v58 = v50;
  v59 = v11;
  v62 = v54;
  v63 = v65;
  v60 = v12;
  v61 = v13;
  if ( v55 == &v57 )
  {
    v65[0] = _mm_load_si128(&v57);
  }
  else
  {
    v63 = v55;
    v65[0].m128i_i64[0] = v57.m128i_i64[0];
  }
  v14 = v56;
  v56 = 0;
  v57.m128i_i8[0] = 0;
  v64 = v14;
  v55 = &v57;
  v49.m128_u64[0] = 0;
  v15 = operator new(0x60u);
  v16 = _mm_loadu_si128(&v59);
  v17 = _mm_loadu_si128(&v60);
  v18 = _mm_loadu_si128(&v61);
  *(_QWORD *)v15 = v58;
  v19 = v62;
  *(__m128i *)(v15 + 8) = v16;
  *(_QWORD *)(v15 + 56) = v19;
  *(_QWORD *)(v15 + 64) = v15 + 80;
  v20 = (__m128i *)v63;
  *(__m128i *)(v15 + 24) = v17;
  *(__m128i *)(v15 + 40) = v18;
  if ( v20 == v65 )
  {
    *(__m128i *)(v15 + 80) = _mm_load_si128(v65);
  }
  else
  {
    *(_QWORD *)(v15 + 64) = v20;
    *(_QWORD *)(v15 + 80) = v65[0].m128i_i64[0];
  }
  v21 = v64;
  v48.m128i_i64[0] = v15;
  v64 = 0;
  *(_QWORD *)(v15 + 72) = v21;
  v63 = v65;
  v65[0].m128i_i8[0] = 0;
  v49 = _mm_loadh_ps((const double *)off_2C4EF40);
  sub_AA95F0(a1 + 16, &v48);
  if ( v49.m128_u64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v49.m128_u64[0])(&v48, &v48, 3);
LABEL_10:
  if ( v63 != v65 )
    operator delete(v63);
  v22 = (__m128i *)v55;
  *(_BYTE *)(a1 + 1057) = 0;
  if ( v22 != &v57 )
    operator delete(v22);
}

