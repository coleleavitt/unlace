unsigned __int64 __fastcall sub_5C0BE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int64 a9)
{
  __int64 i; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  const __m128i *v15; // r12
  __m128i *v16; // rax
  void (__fastcall *v17)(__int128 *, __int64, __int64); // r8
  __int64 v18; // r15
  const __m128i *v19; // r13
  int v20; // edx
  __m128i *v21; // rax
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __m128i *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdi
  __int64 v28; // [rsp+0h] [rbp-A8h]
  __m128i v30; // [rsp+10h] [rbp-98h] BYREF
  __m128i v31; // [rsp+20h] [rbp-88h] BYREF
  __int64 v32; // [rsp+30h] [rbp-78h]
  __int128 v33; // [rsp+40h] [rbp-68h] BYREF
  __m128i v34; // [rsp+50h] [rbp-58h]
  unsigned __int64 v35; // [rsp+68h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v28 = (a3 - 1) / 2;
  if ( a2 >= v28 )
  {
    v13 = a2;
  }
  else
  {
    for ( i = a2; ; i = v13 )
    {
      v13 = 2 * (i + 1);
      v14 = 80 * (i + 1);
      v15 = (const __m128i *)(a1 + v14);
      if ( !*(_QWORD *)(a4 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a4 + 24))(a4, a1 + v14, a1 + v14 - 40) < 0 )
      {
        --v13;
        v15 = (const __m128i *)(a1 + 40 * v13);
      }
      v16 = (__m128i *)(a1 + 40 * i);
      *v16 = _mm_loadu_si128(v15);
      v16[1] = _mm_loadu_si128(v15 + 1);
      v16[2].m128i_i64[0] = v15[2].m128i_i64[0];
      if ( v13 >= v28 )
        break;
    }
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v13 )
  {
    v25 = (__m128i *)(a1 + 40 * v13);
    v26 = 10 * (v13 + 1);
    v13 = 2 * (v13 + 1) - 1;
    v27 = a1 + 8 * v26;
    *v25 = _mm_loadu_si128((const __m128i *)(v27 - 40));
    v25[1] = _mm_loadu_si128((const __m128i *)(v27 - 24));
    v25[2].m128i_i64[0] = *(_QWORD *)(v27 - 8);
  }
  v17 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a4 + 16);
  v34 = 0u;
  v33 = 0;
  if ( !v17 )
  {
    v30 = _mm_loadu_si128((const __m128i *)&a7);
    v32 = a9;
    v31 = _mm_loadu_si128((const __m128i *)&a8);
    if ( v13 > a2 )
LABEL_26:
      std::__throw_bad_function_call();
    goto LABEL_23;
  }
  v17(&v33, a4, 2);
  v17 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a4 + 16);
  v32 = a9;
  v34 = _mm_loadu_si128((const __m128i *)(a4 + 16));
  v30 = _mm_loadu_si128((const __m128i *)&a7);
  v18 = (v13 - 1) / 2;
  v31 = _mm_loadu_si128((const __m128i *)&a8);
  if ( v13 <= a2 )
  {
LABEL_23:
    v21 = (__m128i *)(a1 + 40 * v13);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v19 = (const __m128i *)(a1 + 40 * v18);
    if ( !v17 )
      goto LABEL_26;
    v20 = ((__int64 (__fastcall *)(__int128 *, __int64, __m128i *))v34.m128i_i64[1])(&v33, a1 + 40 * v18, &v30);
    v17 = (void (__fastcall *)(__int128 *, __int64, __int64))v34.m128i_i64[0];
    v21 = (__m128i *)(a1 + 40 * v13);
    if ( v20 >= 0 )
      goto LABEL_18;
    v13 = v18;
    *v21 = _mm_loadu_si128(v19);
    v21[1] = _mm_loadu_si128(v19 + 1);
    v21[2].m128i_i64[0] = v19[2].m128i_i64[0];
    if ( a2 >= v18 )
      break;
    v18 = (v18 - 1) / 2;
  }
  v21 = (__m128i *)(a1 + 40 * v18);
LABEL_18:
  v22 = v32;
  *v21 = _mm_load_si128(&v30);
  v23 = _mm_load_si128(&v31);
  v21[2].m128i_i64[0] = v22;
  v21[1] = v23;
  if ( v17 )
    v17(&v33, (__int64)&v33, 3);
  return v35 - __readfsqword(0x28u);
}
