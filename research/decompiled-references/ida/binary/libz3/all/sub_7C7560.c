__int64 __fastcall sub_7C7560(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned __int8 a5, __m128i a6)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdi
  bool v15; // cc
  const __m128i *v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rcx
  unsigned int v21; // r14d
  _QWORD *v22; // rdi
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rdi
  __int64 (__fastcall *v27)(__int64, unsigned __int8); // rax
  int v28; // eax
  unsigned int v29; // r13d
  unsigned int v30; // ebx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r9
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // r8
  const __m128i *v37; // rax
  __m128i v38; // xmm1
  __int64 v39; // rsi
  __m128i v40; // xmm0
  __int64 v42; // [rsp+8h] [rbp-50h]
  __int64 v43[8]; // [rsp+18h] [rbp-40h] BYREF

  v43[0] = 0;
  sub_7C7230(a1, a2, v43);
  v10 = v43[0];
  if ( v43[0] )
  {
    v11 = *(unsigned int *)(v43[0] - 4);
    v12 = v43[0] + 4 * v11;
    if ( v43[0] == v12 )
      goto LABEL_12;
    v13 = 4 * v11 - 4;
    v14 = (v13 >> 2) + 1;
    v15 = v13 <= 8;
    v16 = (const __m128i *)v43[0];
    if ( !v15 )
    {
      v17 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      v18 = v43[0] + 16 * (v14 >> 2);
      do
      {
        v19 = _mm_loadu_si128(v16++);
        a6 = _mm_xor_si128(v19, v17);
        v16[-1] = a6;
      }
      while ( v16 != (const __m128i *)v18 );
      if ( (v14 & 3) == 0 )
      {
LABEL_11:
        LODWORD(v11) = *(_DWORD *)(v10 - 4);
        goto LABEL_12;
      }
      v16 = (const __m128i *)(v10 + 4 * (v14 & 0xFFFFFFFFFFFFFFFCLL));
    }
    v16->m128i_i32[0] ^= 1u;
    if ( (const __m128i *)v12 != (const __m128i *)((char *)v16->m128i_i64 + 4) )
    {
      v16->m128i_i32[1] ^= 1u;
      if ( (unsigned __int64 *)v12 != &v16->m128i_u64[1] )
        v16->m128i_i32[2] ^= 1u;
    }
    goto LABEL_11;
  }
  LODWORD(v11) = 0;
LABEL_12:
  v20 = sub_182D020(qword_1C7F2C0, a3);
  v21 = v11 - v20;
  if ( !a4 )
  {
LABEL_17:
    v26 = *(_QWORD *)(a1 + 24);
    v27 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)v26 + 24LL);
    if ( v27 == sub_788600 )
      v28 = sub_11CA540(v26, 1, 1);
    else
      v28 = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(__int64, unsigned __int8), __int64))v27)(
              v26,
              1,
              sub_788600,
              v20);
    v29 = 2 * v28;
    sub_7B8DA0(a1, v28, v43, v21, a6);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 64LL))(*(_QWORD *)(a1 + 88), a2, v29);
    v30 = v29 ^ a5;
    goto LABEL_20;
  }
  v22 = *(_QWORD **)(a1 + 24);
  v23 = *(__int64 (**)(void))(*v22 + 72LL);
  if ( v23 == sub_7C9C70 )
  {
    v24 = v22[525];
    if ( !v24 )
      goto LABEL_23;
    v25 = *(_DWORD *)(v24 - 4);
  }
  else
  {
    v42 = v20;
    v25 = v23();
    v20 = v42;
  }
  if ( v25 )
    goto LABEL_17;
LABEL_23:
  if ( a5 )
  {
    v32 = v43[0];
    if ( v43[0] )
    {
      v33 = *(unsigned int *)(v43[0] - 4);
      v34 = v43[0] + 4 * v33;
      if ( v43[0] != v34 )
      {
        v35 = 4 * v33 - 4;
        v36 = (v35 >> 2) + 1;
        v15 = v35 <= 8;
        v37 = (const __m128i *)v43[0];
        if ( v15 )
          goto LABEL_42;
        v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
        v39 = v43[0] + 16 * (v36 >> 2);
        do
        {
          v40 = _mm_loadu_si128(v37++);
          a6 = _mm_xor_si128(v40, v38);
          v37[-1] = a6;
        }
        while ( (const __m128i *)v39 != v37 );
        v37 = (const __m128i *)(v32 + 4 * (v36 & 0xFFFFFFFFFFFFFFFCLL));
        if ( (v36 & 3) != 0 )
        {
LABEL_42:
          v37->m128i_i32[0] ^= 1u;
          if ( (const __m128i *)v34 != (const __m128i *)((char *)v37->m128i_i64 + 4) )
          {
            v37->m128i_i32[1] ^= 1u;
            if ( (unsigned __int64 *)v34 != &v37->m128i_u64[1] )
              v37->m128i_i32[2] ^= 1u;
          }
        }
        LODWORD(v33) = *(_DWORD *)(v32 - 4);
      }
    }
    else
    {
      LODWORD(v33) = 0;
    }
    v21 = v33 + v20 - v11 + 1;
  }
  sub_7B8DA0(a1, 0x7FFFFFFF, v43, v21, a6);
  v30 = -2;
LABEL_20:
  if ( v43[0] )
    sub_186B220((void *)(v43[0] - 8));
  return v30;
}

