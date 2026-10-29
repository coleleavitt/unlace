__int64 __fastcall sub_60BFD0(__int64 a1, int a2, int a3, int a4, int a5, int a6, __int128 a7, __int64 a8)
{
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  int v13; // r8d
  int v14; // r9d
  unsigned int *v15; // rsi
  size_t **v16; // rdi
  __m128i v17; // xmm0
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  size_t *v22; // rax
  size_t v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 MappedSourcePath_0; // r12
  __int64 v27; // rbp
  size_t *v28; // rax
  size_t v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rax
  __m128i v34; // xmm6
  __int64 v35; // rax
  __m128i v36; // xmm1
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  __int64 v40; // rdx
  __m128i v41; // [rsp+0h] [rbp-128h]
  __m128i v42; // [rsp+0h] [rbp-128h]
  __m128i v43; // [rsp+0h] [rbp-128h]
  __m128i v44; // [rsp+20h] [rbp-108h] BYREF
  __m128i v45; // [rsp+30h] [rbp-F8h] BYREF
  unsigned int v46; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v47; // [rsp+44h] [rbp-E4h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v49; // [rsp+4Ch] [rbp-DCh] BYREF
  size_t *v50; // [rsp+50h] [rbp-D8h] BYREF
  size_t *v51; // [rsp+58h] [rbp-D0h] BYREF
  __m128i v52; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v53; // [rsp+70h] [rbp-B8h]
  __m128i v54; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+90h] [rbp-98h]
  __m128i v56; // [rsp+A0h] [rbp-88h] BYREF
  unsigned __int64 v57; // [rsp+B0h] [rbp-78h]
  __int64 v58; // [rsp+B8h] [rbp-70h]
  __m128i v59; // [rsp+C0h] [rbp-68h] BYREF
  __m128i v60; // [rsp+D0h] [rbp-58h]
  __int64 CString; // [rsp+E0h] [rbp-48h]

  v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F48F8, (__m128i)(unsigned __int64)"%s:%d:%d]");
  v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_49F48F8, (__m128i)(unsigned __int64)"[%s:%d:%d - ");
  v41 = _mm_loadu_si128((const __m128i *)&a7);
  clang_getRangeStart((int)&v52, a2, a3, a4, a5, a6, v41.m128i_i64[0], v41.m128i_i64[1], a8);
  v42 = _mm_loadu_si128((const __m128i *)&a7);
  clang_getRangeEnd((int)&v54, a2, v9, v10, v11, v12, v42.m128i_i64[0], v42.m128i_i64[1], a8);
  v43 = _mm_load_si128(&v52);
  clang_getFileLocation((int)&v50, (int)&v46, (int)&v47, 0, v13, v14, v43.m128i_i64[0], v43.m128i_i32[2], v53);
  v15 = &v48;
  v16 = &v51;
  v17 = _mm_load_si128(&v54);
  clang_getFileLocation((int)&v51, (int)&v48, (int)&v49, 0, v18, v19, v17.m128i_i64[0], v17.m128i_i32[2], v55);
  v22 = v50;
  if ( !v50 )
  {
    MappedSourcePath_0 = clang_CompileCommand_getMappedSourcePath_0(&v51, &v48, v20, v21);
    v27 = v24;
    v28 = v51;
    if ( v50 != v51 )
      goto LABEL_5;
LABEL_16:
    CString = clang_getCString(MappedSourcePath_0, v27);
    v59 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_49F4918, (__m128i)(unsigned __int64)"[%s %d:%d-%d:%d]");
    v60 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), _mm_cvtsi32_si128(v48)),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), _mm_cvtsi32_si128(v46)));
    sub_26248B0(a1 + 136, &v59);
    goto LABEL_10;
  }
  while ( 1 )
  {
    v23 = v22[1];
    if ( !v23 )
      break;
    if ( (v23 & 4) == 0 )
      break;
    v38 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v38 )
      break;
    v22 = (size_t *)v38;
  }
  v16 = (size_t **)(v22 + 4);
  v15 = (unsigned int *)*v22;
  MappedSourcePath_0 = sub_690520(v22 + 4, *v22);
  v27 = v24;
  v28 = v51;
  if ( v50 == v51 )
    goto LABEL_16;
LABEL_5:
  if ( v28 )
  {
    while ( 1 )
    {
      v29 = v28[1];
      if ( !v29 )
        break;
      if ( (v29 & 4) == 0 )
        break;
      v39 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v39 )
        break;
      v28 = (size_t *)v39;
    }
    v30 = sub_690520(v28 + 4, *v28);
    v32 = v31;
  }
  else
  {
    v30 = clang_CompileCommand_getMappedSourcePath_0(v16, v15, v24, v25);
    v32 = v40;
  }
  v33 = clang_getCString(MappedSourcePath_0, v27);
  v34 = _mm_load_si128(&v44);
  v58 = v33;
  v56 = v34;
  v57 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v47), _mm_cvtsi32_si128(v46)).m128i_u64[0];
  sub_26248B0(a1 + 136, &v56);
  v35 = clang_getCString(v30, v32);
  v36 = _mm_load_si128(&v45);
  v60.m128i_i64[1] = v35;
  v59 = v36;
  v60.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), _mm_cvtsi32_si128(v48)).m128i_u64[0];
  sub_26248B0(a1 + 136, &v59);
  clang_disposeString(v30, v32);
LABEL_10:
  clang_disposeString(MappedSourcePath_0, v27);
  return a1;
}

