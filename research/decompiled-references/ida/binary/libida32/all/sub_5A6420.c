unsigned __int64 __fastcall sub_5A6420(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 i; // rbp
  __int64 v10; // rbx
  __int64 v11; // rax
  const __m128i *v12; // r13
  __m128i *v13; // rbp
  void (__fastcall *v14)(__int128 *, __int64, __int64); // rax
  void (__fastcall *v15)(__int128 *, __int128 *, __int64); // r8
  __int64 v16; // r14
  const __m128i *v17; // rbp
  int v18; // eax
  __m128i *v19; // rbx
  __m128i v21; // xmm0
  __m128i *v22; // rax
  __int64 v23; // rdx
  __m128i *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-98h]
  __m128i v28; // [rsp+10h] [rbp-88h] BYREF
  __m128i v29; // [rsp+20h] [rbp-78h] BYREF
  __int128 v30; // [rsp+30h] [rbp-68h] BYREF
  __m128i v31; // [rsp+40h] [rbp-58h]
  unsigned __int64 v32; // [rsp+58h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  v26 = (a3 - 1) / 2;
  if ( a2 >= v26 )
  {
    v10 = a2;
  }
  else
  {
    for ( i = a2; ; i = v10 )
    {
      v10 = 2 * (i + 1);
      v11 = (i + 1) << 6;
      v12 = (const __m128i *)(a1 + v11);
      if ( !*(_QWORD *)(a4 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a4 + 24))(a4, a1 + v11, a1 + v11 - 32) < 0 )
      {
        --v10;
        v12 = (const __m128i *)(a1 + 32 * v10);
      }
      v13 = (__m128i *)(a1 + 32 * i);
      *v13 = _mm_loadu_si128(v12);
      v13[1] = _mm_loadu_si128(v12 + 1);
      if ( v10 >= v26 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v10 )
  {
    v23 = v10 + 1;
    v24 = (__m128i *)(a1 + 32 * v10);
    v25 = a1 + (v23 << 6);
    *v24 = _mm_loadu_si128((const __m128i *)(v25 - 32));
    v24[1] = _mm_loadu_si128((const __m128i *)(v25 - 16));
    v10 = 2 * v23 - 1;
  }
  v14 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a4 + 16);
  v31 = 0u;
  v30 = 0;
  if ( v14 )
  {
    v14(&v30, a4, 2);
    v15 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a4 + 16);
    v31 = _mm_loadu_si128((const __m128i *)(a4 + 16));
    v28 = _mm_loadu_si128((const __m128i *)&a7);
    v16 = (v10 - 1) / 2;
    v29 = _mm_loadu_si128((const __m128i *)&a8);
    if ( v10 <= a2 )
    {
      v19 = (__m128i *)(a1 + 32 * v10);
    }
    else
    {
      while ( 1 )
      {
        v17 = (const __m128i *)(a1 + 32 * v16);
        if ( !v15 )
          goto LABEL_27;
        v18 = ((__int64 (__fastcall *)(__int128 *, __int64, __m128i *))v31.m128i_i64[1])(&v30, a1 + 32 * v16, &v28);
        v15 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v31.m128i_i64[0];
        v19 = (__m128i *)(a1 + 32 * v10);
        if ( v18 >= 0 )
          goto LABEL_18;
        *v19 = _mm_loadu_si128(v17);
        v19[1] = _mm_loadu_si128(v17 + 1);
        v10 = v16;
        if ( a2 >= v16 )
          break;
        v16 = (v16 - 1) / 2;
      }
      v19 = (__m128i *)(a1 + 32 * v16);
    }
LABEL_18:
    *v19 = _mm_load_si128(&v28);
    v19[1] = _mm_load_si128(&v29);
    if ( v15 )
      v15(&v30, &v30, 3);
  }
  else
  {
    v21 = _mm_loadu_si128((const __m128i *)&a7);
    v28 = v21;
    v29 = _mm_loadu_si128((const __m128i *)&a8);
    if ( v10 > a2 )
LABEL_27:
      std::__throw_bad_function_call();
    v22 = (__m128i *)(a1 + 32 * v10);
    *v22 = v21;
    v22[1] = _mm_load_si128(&v29);
  }
  return v32 - __readfsqword(0x28u);
}

