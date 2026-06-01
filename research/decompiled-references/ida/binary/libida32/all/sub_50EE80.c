unsigned __int64 __fastcall sub_50EE80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  const __m128i *v10; // r14
  __int64 v11; // rax
  void (__fastcall *v12)(__int128 *, __int64, __int64); // rax
  __m128i v13; // xmm1
  void (__fastcall *v14)(__int128 *, __int128 *, __int64); // rcx
  __int64 v15; // r15
  int v16; // eax
  __m128i *v17; // rbx
  __m128i v19; // [rsp+0h] [rbp-98h] BYREF
  __int64 v20; // [rsp+10h] [rbp-88h]
  __int64 v21; // [rsp+18h] [rbp-80h]
  __m128i v22; // [rsp+20h] [rbp-78h] BYREF
  __int128 v23; // [rsp+30h] [rbp-68h] BYREF
  __m128i v24; // [rsp+40h] [rbp-58h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v21 = a3;
  v19.m128i_i64[0] = a4;
  v19.m128i_i64[1] = a5;
  v25 = __readfsqword(0x28u);
  v20 = (a3 - 1) / 2;
  if ( a2 >= v20 )
  {
    v8 = a2;
  }
  else
  {
    for ( i = a2; ; i = v8 )
    {
      v8 = 2 * (i + 1);
      v9 = 32 * (i + 1);
      v10 = (const __m128i *)(a1 + v9);
      if ( !*(_QWORD *)(a6 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a6 + 24))(a6, a1 + v9, a1 + v9 - 16) < 0 )
      {
        --v8;
        v10 = (const __m128i *)(a1 + 16 * v8);
      }
      v11 = v20;
      *(__m128i *)(a1 + 16 * i) = _mm_loadu_si128(v10);
      if ( v8 >= v11 )
        break;
    }
  }
  if ( (v21 & 1) == 0 && (v21 - 2) / 2 == v8 )
  {
    *(__m128i *)(a1 + 16 * v8) = _mm_loadu_si128((const __m128i *)(a1 + 32 * (v8 + 1) - 16));
    v8 = 2 * (v8 + 1) - 1;
  }
  v12 = *(void (__fastcall **)(__int128 *, __int64, __int64))(a6 + 16);
  v24 = 0u;
  v23 = 0;
  if ( v12 )
  {
    v12(&v23, a6, 2);
    v13 = _mm_load_si128(&v19);
    v14 = *(void (__fastcall **)(__int128 *, __int128 *, __int64))(a6 + 16);
    v24 = _mm_loadu_si128((const __m128i *)(a6 + 16));
    v22 = v13;
    v15 = (v8 - 1) / 2;
    if ( v8 <= a2 )
    {
      v17 = (__m128i *)(a1 + 16 * v8);
    }
    else
    {
      v20 = (__int64)&v22;
      while ( 1 )
      {
        if ( !v14 )
          goto LABEL_27;
        v16 = ((__int64 (__fastcall *)(__int128 *, __int64, __int64))v24.m128i_i64[1])(&v23, a1 + 16 * v15, v20);
        v14 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v24.m128i_i64[0];
        v17 = (__m128i *)(a1 + 16 * v8);
        if ( v16 >= 0 )
          goto LABEL_18;
        *v17 = _mm_loadu_si128((const __m128i *)(a1 + 16 * v15));
        v8 = v15;
        if ( a2 >= v15 )
          break;
        v15 = (v15 - 1) / 2;
      }
      v17 = (__m128i *)(a1 + 16 * v15);
    }
LABEL_18:
    *v17 = _mm_load_si128(&v22);
    if ( v14 )
      v14(&v23, &v23, 3);
  }
  else
  {
    v22 = _mm_load_si128(&v19);
    if ( v8 > a2 )
LABEL_27:
      std::__throw_bad_function_call();
    *(__m128i *)(a1 + 16 * v8) = _mm_load_si128(&v19);
  }
  return v25 - __readfsqword(0x28u);
}

