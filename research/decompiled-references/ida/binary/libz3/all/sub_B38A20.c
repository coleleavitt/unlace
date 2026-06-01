__int64 __fastcall sub_B38A20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  bool v4; // zf
  void (__fastcall *v5)(__m128i *, __int64, __int64); // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm0
  void (__fastcall *v9)(__m128i *, __int64, __int64); // rax
  __m128i v10; // xmm1
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  void (__fastcall *v13)(__m128i *, __int64, __int64); // rax
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm0
  void (__fastcall *v17)(__m128i *, __int64, __int64); // rax
  __m128i v18; // xmm2
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  void (__fastcall *v21)(__m128i *, __int64, __int64); // rax
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  void (__fastcall *v25)(__m128i *, __int64, __int64); // rax
  __m128i v26; // xmm2
  __m128i v27; // xmm1
  __m128i v28; // xmm0
  void (__fastcall *v29)(__m128i *, __int64, __int64); // rax
  __m128i v30; // xmm2
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  void (__fastcall *v33)(__m128i *, __int64, __int64); // rax
  __m128i v34; // xmm2
  __m128i v35; // xmm1
  __m128i v36; // xmm0
  void (__fastcall *v37)(__m128i *, __int64, __int64); // rax
  __m128i v38; // xmm2
  __m128i v39; // xmm1
  __m128i v40; // xmm0
  __int64 v42; // [rsp+8h] [rbp-50h] BYREF
  __m128i v43; // [rsp+10h] [rbp-48h] BYREF
  __m128i v44; // [rsp+20h] [rbp-38h]

  v2 = sub_186B270(0x230u);
  sub_B387B0(v2, a2);
  v3 = *(_QWORD *)(a2 + 104);
  v4 = *(_QWORD *)(a1 + 152) == 0;
  v42 = *(_QWORD *)(a1 + 64);
  if ( v4 )
    std::__throw_bad_function_call();
  *(_QWORD *)(v2 + 64) = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(a1 + 160))(
                           a1 + 136,
                           &v42,
                           v3,
                           v2 + 360);
  v5 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 88);
  v44 = 0u;
  v43 = 0;
  if ( v5 )
  {
    v5(&v43, a1 + 72, 2);
    v6 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  }
  else
  {
    v6 = 0;
  }
  v7 = _mm_loadu_si128((const __m128i *)(v2 + 72));
  *(__m128i *)(v2 + 72) = _mm_load_si128(&v43);
  v8 = _mm_loadu_si128((const __m128i *)(v2 + 88));
  v43 = v7;
  v44 = v8;
  *(__m128i *)(v2 + 88) = v6;
  if ( v8.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v8.m128i_i64[0])(&v43, &v43, 3);
  v9 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 120);
  v44 = 0u;
  v43 = 0;
  if ( v9 )
  {
    v9(&v43, a1 + 104, 2);
    v10 = _mm_loadu_si128((const __m128i *)(a1 + 120));
  }
  else
  {
    v10 = 0;
  }
  v11 = _mm_loadu_si128((const __m128i *)(v2 + 104));
  *(__m128i *)(v2 + 104) = _mm_load_si128(&v43);
  v12 = _mm_loadu_si128((const __m128i *)(v2 + 120));
  v43 = v11;
  v44 = v12;
  *(__m128i *)(v2 + 120) = v10;
  if ( v12.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v12.m128i_i64[0])(&v43, &v43, 3);
  v13 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 152);
  v44 = 0u;
  v43 = 0;
  if ( v13 )
  {
    v13(&v43, a1 + 136, 2);
    v14 = _mm_loadu_si128((const __m128i *)(a1 + 152));
  }
  else
  {
    v14 = 0;
  }
  v15 = _mm_loadu_si128((const __m128i *)(v2 + 136));
  *(__m128i *)(v2 + 136) = _mm_load_si128(&v43);
  v16 = _mm_loadu_si128((const __m128i *)(v2 + 152));
  v43 = v15;
  v44 = v16;
  *(__m128i *)(v2 + 152) = v14;
  if ( v16.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v16.m128i_i64[0])(&v43, &v43, 3);
  v17 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 216);
  if ( v17 )
  {
    v44 = 0u;
    v43 = 0;
    v17(&v43, a1 + 200, 2);
    v18 = _mm_loadu_si128((const __m128i *)(v2 + 200));
    v19 = _mm_loadu_si128((const __m128i *)(a1 + 216));
    *(__m128i *)(v2 + 200) = _mm_load_si128(&v43);
    v20 = _mm_loadu_si128((const __m128i *)(v2 + 216));
    v43 = v18;
    v44 = v20;
    *(__m128i *)(v2 + 216) = v19;
    if ( v20.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v20.m128i_i64[0])(&v43, &v43, 3);
  }
  v21 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 184);
  if ( v21 )
  {
    v44 = 0u;
    v43 = 0;
    v21(&v43, a1 + 168, 2);
    v22 = _mm_loadu_si128((const __m128i *)(v2 + 168));
    v23 = _mm_loadu_si128((const __m128i *)(a1 + 184));
    *(__m128i *)(v2 + 168) = _mm_load_si128(&v43);
    v24 = _mm_loadu_si128((const __m128i *)(v2 + 184));
    v43 = v22;
    v44 = v24;
    *(__m128i *)(v2 + 184) = v23;
    if ( v24.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v24.m128i_i64[0])(&v43, &v43, 3);
  }
  v25 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 248);
  if ( v25 )
  {
    v44 = 0u;
    v43 = 0;
    v25(&v43, a1 + 232, 2);
    v26 = _mm_loadu_si128((const __m128i *)(v2 + 232));
    v27 = _mm_loadu_si128((const __m128i *)(a1 + 248));
    *(__m128i *)(v2 + 232) = _mm_load_si128(&v43);
    v28 = _mm_loadu_si128((const __m128i *)(v2 + 248));
    v43 = v26;
    v44 = v28;
    *(__m128i *)(v2 + 248) = v27;
    if ( v28.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v28.m128i_i64[0])(&v43, &v43, 3);
  }
  v29 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 280);
  if ( v29 )
  {
    v44 = 0u;
    v43 = 0;
    v29(&v43, a1 + 264, 2);
    v30 = _mm_loadu_si128((const __m128i *)(v2 + 264));
    v31 = _mm_loadu_si128((const __m128i *)(a1 + 280));
    *(__m128i *)(v2 + 264) = _mm_load_si128(&v43);
    v32 = _mm_loadu_si128((const __m128i *)(v2 + 280));
    v43 = v30;
    v44 = v32;
    *(__m128i *)(v2 + 280) = v31;
    if ( v32.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v32.m128i_i64[0])(&v43, &v43, 3);
  }
  v33 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 312);
  if ( v33 )
  {
    v44 = 0u;
    v43 = 0;
    v33(&v43, a1 + 296, 2);
    v34 = _mm_loadu_si128((const __m128i *)(v2 + 296));
    v35 = _mm_loadu_si128((const __m128i *)(a1 + 312));
    *(__m128i *)(v2 + 296) = _mm_load_si128(&v43);
    v36 = _mm_loadu_si128((const __m128i *)(v2 + 312));
    v43 = v34;
    v44 = v36;
    *(__m128i *)(v2 + 312) = v35;
    if ( v36.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v36.m128i_i64[0])(&v43, &v43, 3);
  }
  v37 = *(void (__fastcall **)(__m128i *, __int64, __int64))(a1 + 344);
  if ( v37 )
  {
    v44 = 0u;
    v43 = 0;
    v37(&v43, a1 + 328, 2);
    v38 = _mm_loadu_si128((const __m128i *)(v2 + 328));
    v39 = _mm_loadu_si128((const __m128i *)(a1 + 344));
    *(__m128i *)(v2 + 328) = _mm_load_si128(&v43);
    v40 = _mm_loadu_si128((const __m128i *)(v2 + 344));
    v43 = v38;
    v44 = v40;
    *(__m128i *)(v2 + 344) = v39;
    if ( v40.m128i_i64[0] )
      ((void (__fastcall *)(__m128i *, __m128i *, __int64))v40.m128i_i64[0])(&v43, &v43, 3);
  }
  return v2;
}

