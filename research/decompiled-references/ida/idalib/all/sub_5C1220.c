unsigned __int64 __fastcall sub_5C1220(__int64 a1, __m128i *a2, __int64 a3, const __m128i *a4, __int64 a5)
{
  __m128i *v6; // r14
  __int64 v8; // r13
  void (__fastcall *v9)(__int128 *, const __m128i *, __int64); // rax
  __m128i v10; // xmm0
  void (__fastcall *v11)(__int128 *, __int128 *, __int64); // rax
  __m128i *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int8 v16; // dl
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // r8
  __m128i v20; // xmm0
  __int64 v21; // rax
  int v22; // edx
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int8 v27; // cl
  __int64 v28; // rdx
  void (__fastcall *v29)(__int128 *, const __m128i *, __int64); // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int8 v33; // dl
  __int64 v34; // rax
  __m128i v35; // xmm0
  void (__fastcall *v36)(__int128 *, __int128 *, __int64); // rax
  __int64 v37; // r8
  __int64 v38; // r9
  __m128i v39; // xmm0
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // rax
  int v44; // eax
  __int64 v45; // r8
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int8 v48; // cl
  __int64 v49; // rdx
  int v50; // r8d
  __m128i *v52; // [rsp+48h] [rbp-B8h]
  __m128i *v53; // [rsp+48h] [rbp-B8h]
  __m128i v54; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int128 v57; // [rsp+80h] [rbp-80h] BYREF
  __m128i v58; // [rsp+90h] [rbp-70h] BYREF
  __int128 v59; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v60; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v61; // [rsp+C8h] [rbp-38h]

  v61 = __readfsqword(0x28u);
  if ( (__int64)a2->m128i_i64 - a1 <= 640 )
    return v61 - __readfsqword(0x28u);
  v6 = a2;
  v8 = (__int64)a2->m128i_i64 - a1;
  while ( 1 )
  {
    v9 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a4[1].m128i_i64[0];
    v58 = 0u;
    v57 = 0;
    if ( !a3 )
      break;
    if ( !v9 )
    {
      v60 = 0u;
      v59 = 0;
LABEL_37:
      std::__throw_bad_function_call();
    }
    v9(&v57, a4, 2);
    v10 = _mm_loadu_si128(a4 + 1);
    v11 = (void (__fastcall *)(__int128 *, __int128 *, __int64))a4[1].m128i_i64[0];
    v60 = 0u;
    v58 = v10;
    v59 = 0;
    v52 = (__m128i *)(a1 + 40 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v8 >> 3)) >> 1));
    if ( !v11 )
      goto LABEL_37;
    v11(&v59, &v57, 2);
    v12 = (__m128i *)(a1 + 40);
    v60 = _mm_load_si128(&v58);
    if ( !v58.m128i_i64[0] )
      goto LABEL_37;
    if ( ((int (__fastcall *)(__int128 *, __int64, __m128i *))v60.m128i_i64[1])(&v59, a1 + 40, v52) < 0 )
    {
      if ( !v60.m128i_i64[0] )
        std::__throw_bad_function_call();
      if ( ((int (__fastcall *)(__int128 *, __m128i *))v60.m128i_i64[1])(&v59, v52) >= 0 )
      {
        if ( !v60.m128i_i64[0] )
          std::__throw_bad_function_call();
        v50 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64 *))v60.m128i_i64[1])(
                &v59,
                a1 + 40,
                &v6[-3].m128i_i64[1]);
        v13 = *(_QWORD *)a1;
        v14 = *(_QWORD *)(a1 + 8);
        v15 = *(_QWORD *)(a1 + 16);
        v16 = *(_BYTE *)(a1 + 24);
        v17 = *(_QWORD *)(a1 + 32);
        if ( v50 >= 0 )
          goto LABEL_11;
        *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v6 - 40));
        *(__m128i *)(a1 + 16) = _mm_loadu_si128((__m128i *)((char *)v6 - 24));
        *(_QWORD *)(a1 + 32) = v6[-1].m128i_i64[1];
        v6[-3].m128i_i64[1] = v13;
        v6[-2].m128i_i64[0] = v14;
        v6[-2].m128i_i64[1] = v15;
        v6[-1].m128i_i8[0] = v16;
        v6[-1].m128i_i64[1] = v17;
      }
      else
      {
        v30 = *(_QWORD *)a1;
        v31 = *(_QWORD *)(a1 + 8);
        v32 = *(_QWORD *)(a1 + 16);
        v33 = *(_BYTE *)(a1 + 24);
        v34 = *(_QWORD *)(a1 + 32);
        *(__m128i *)a1 = _mm_loadu_si128(v52);
        *(__m128i *)(a1 + 16) = _mm_loadu_si128(v52 + 1);
        *(_QWORD *)(a1 + 32) = v52[2].m128i_i64[0];
        v52->m128i_i64[0] = v30;
        v52->m128i_i64[1] = v31;
        v52[1].m128i_i64[0] = v32;
        v52[1].m128i_i8[8] = v33;
        v52[2].m128i_i64[0] = v34;
      }
    }
    else
    {
      if ( !v60.m128i_i64[0] )
        std::__throw_bad_function_call();
      if ( ((int (__fastcall *)(__int128 *, __int64))v60.m128i_i64[1])(&v59, a1 + 40) < 0 )
      {
        v13 = *(_QWORD *)a1;
        v14 = *(_QWORD *)(a1 + 8);
        v15 = *(_QWORD *)(a1 + 16);
        v16 = *(_BYTE *)(a1 + 24);
        v17 = *(_QWORD *)(a1 + 32);
LABEL_11:
        v18 = _mm_loadu_si128((const __m128i *)(a1 + 40));
        v19 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 40) = v13;
        *(_QWORD *)(a1 + 48) = v14;
        *(__m128i *)a1 = v18;
        v20 = _mm_loadu_si128((const __m128i *)(a1 + 56));
        *(_QWORD *)(a1 + 32) = v19;
        *(_QWORD *)(a1 + 56) = v15;
        *(_BYTE *)(a1 + 64) = v16;
        *(_QWORD *)(a1 + 72) = v17;
        *(__m128i *)(a1 + 16) = v20;
        goto LABEL_12;
      }
      if ( !v60.m128i_i64[0] )
        std::__throw_bad_function_call();
      v44 = ((__int64 (__fastcall *)(__int128 *, __m128i *, __int64 *))v60.m128i_i64[1])(
              &v59,
              v52,
              &v6[-3].m128i_i64[1]);
      v45 = *(_QWORD *)a1;
      v46 = *(_QWORD *)(a1 + 8);
      v47 = *(_QWORD *)(a1 + 16);
      v48 = *(_BYTE *)(a1 + 24);
      v49 = *(_QWORD *)(a1 + 32);
      if ( v44 < 0 )
      {
        *(__m128i *)a1 = _mm_loadu_si128((__m128i *)((char *)v6 - 40));
        *(__m128i *)(a1 + 16) = _mm_loadu_si128((__m128i *)((char *)v6 - 24));
        *(_QWORD *)(a1 + 32) = v6[-1].m128i_i64[1];
        v6[-3].m128i_i64[1] = v45;
        v6[-2].m128i_i64[0] = v46;
        v6[-2].m128i_i64[1] = v47;
        v6[-1].m128i_i8[0] = v48;
        v6[-1].m128i_i64[1] = v49;
      }
      else
      {
        *(__m128i *)a1 = _mm_loadu_si128(v52);
        *(__m128i *)(a1 + 16) = _mm_loadu_si128(v52 + 1);
        *(_QWORD *)(a1 + 32) = v52[2].m128i_i64[0];
        v52->m128i_i64[0] = v45;
        v52->m128i_i64[1] = v46;
        v52[1].m128i_i64[0] = v47;
        v52[1].m128i_i8[8] = v48;
        v52[2].m128i_i64[0] = v49;
      }
    }
LABEL_12:
    if ( v60.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v60.m128i_i64[0])(&v59, &v59, 3);
    v60 = 0u;
    v59 = 0;
    if ( !v58.m128i_i64[0] )
LABEL_64:
      std::__throw_bad_function_call();
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v58.m128i_i64[0])(&v59, &v57, 2);
    v21 = v58.m128i_i64[0];
    v53 = v6;
    v60 = _mm_load_si128(&v58);
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !v21 )
          goto LABEL_64;
        v22 = ((__int64 (__fastcall *)(__int128 *, __m128i *, __int64))v60.m128i_i64[1])(&v59, v12, a1);
        v21 = v60.m128i_i64[0];
        if ( v22 >= 0 )
          break;
        v12 = (__m128i *)((char *)v12 + 40);
      }
      do
      {
        v53 = (__m128i *)((char *)v53 - 40);
        if ( !v21 )
          std::__throw_bad_function_call();
        v23 = ((__int64 (__fastcall *)(__int128 *, __int64, __m128i *))v60.m128i_i64[1])(&v59, a1, v53);
        v21 = v60.m128i_i64[0];
      }
      while ( v23 < 0 );
      if ( v12 >= v53 )
        break;
      v24 = v12->m128i_i64[0];
      v12 = (__m128i *)((char *)v12 + 40);
      v25 = v12[-2].m128i_i64[0];
      v26 = v12[-2].m128i_i64[1];
      v27 = v12[-1].m128i_i8[0];
      v28 = v12[-1].m128i_i64[1];
      *(__m128i *)((char *)v12 - 40) = _mm_loadu_si128(v53);
      *(__m128i *)((char *)v12 - 24) = _mm_loadu_si128(v53 + 1);
      v12[-1].m128i_i64[1] = v53[2].m128i_i64[0];
      v53->m128i_i64[0] = v24;
      v53->m128i_i64[1] = v25;
      v53[1].m128i_i64[0] = v26;
      v53[1].m128i_i8[8] = v27;
      v53[2].m128i_i64[0] = v28;
    }
    if ( v60.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v60.m128i_i64[0])(&v59, &v59, 3);
    if ( v58.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v58.m128i_i64[0])(&v57, &v57, 3);
    v29 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a4[1].m128i_i64[0];
    v60 = 0u;
    v59 = 0;
    if ( v29 )
    {
      v29(&v59, a4, 2);
      v60 = _mm_loadu_si128(a4 + 1);
    }
    sub_5C1220(v12, v6, --a3, &v59);
    if ( v60.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v60.m128i_i64[0])(&v59, &v59, 3);
    v8 = (__int64)v12->m128i_i64 - a1;
    if ( (__int64)v12->m128i_i64 - a1 <= 640 )
      return v61 - __readfsqword(0x28u);
    v6 = v12;
  }
  if ( v9 )
  {
    v9(&v57, a4, 2);
    v35 = _mm_loadu_si128(a4 + 1);
    v36 = (void (__fastcall *)(__int128 *, __int128 *, __int64))a4[1].m128i_i64[0];
    v60 = 0u;
    v58 = v35;
    v59 = 0;
    if ( v36 )
    {
      v36(&v59, &v57, 2);
      v60 = _mm_load_si128(&v58);
    }
  }
  else
  {
    v60 = 0u;
    v59 = 0;
  }
  sub_5C0F20((const __m128i *)a1, v6, (unsigned __int64)v6, (__int64)&v59, a5);
  if ( v60.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v60.m128i_i64[0])(&v59, &v59, 3);
  while ( (__int64)v6->m128i_i64 - a1 > 40 )
  {
    v39 = _mm_loadu_si128((__m128i *)((char *)v6 - 40));
    v40 = v6[-1].m128i_i64[1];
    v6 = (__m128i *)((char *)v6 - 40);
    v60 = 0u;
    v54 = v39;
    v41 = _mm_loadu_si128(v6 + 1);
    v56 = v40;
    v55 = v41;
    *v6 = _mm_loadu_si128((const __m128i *)a1);
    v6[1] = _mm_loadu_si128((const __m128i *)(a1 + 16));
    v42 = *(_QWORD *)(a1 + 32);
    v59 = 0;
    v6[2].m128i_i64[0] = v42;
    if ( v58.m128i_i64[0] )
    {
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v58.m128i_i64[0])(&v59, &v57, 2);
      v60 = _mm_load_si128(&v58);
    }
    sub_5C0BE0(
      a1,
      0,
      0xCCCCCCCCCCCCCCCDLL * (((__int64)v6->m128i_i64 - a1) >> 3),
      (__int64)&v59,
      v37,
      v38,
      (__int128)_mm_load_si128(&v54),
      (__int128)_mm_load_si128(&v55),
      v56);
    if ( v60.m128i_i64[0] )
      ((void (__fastcall *)(__int128 *, __int128 *, __int64))v60.m128i_i64[0])(&v59, &v59, 3);
  }
  if ( v58.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v58.m128i_i64[0])(&v57, &v57, 3);
  return v61 - __readfsqword(0x28u);
}
