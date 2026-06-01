__int64 __fastcall sub_8F2110(__int64 a1, __int64 a2, const __m128i *a3, const __m128i *a4, const __m128i *a5)
{
  __int64 (__fastcall *v9)(__int64, unsigned __int8); // rax
  unsigned int v10; // eax
  __m128i *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void (__fastcall *v17)(__m128i *, const __m128i *, __int64); // rax
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __m128i v20; // xmm0
  void (__fastcall *v21)(__m128i *, const __m128i *, __int64); // rax
  __m128i v22; // xmm1
  __m128i v23; // xmm2
  __m128i v24; // xmm0
  void (__fastcall *v25)(__m128i *, const __m128i *, __int64); // rax
  __m128i v26; // xmm1
  __m128i v27; // xmm2
  __m128i v28; // xmm0
  __int64 v29; // rax
  int v30; // eax
  int v31; // ebx
  __m128i v34; // [rsp+0h] [rbp-58h] BYREF
  __m128i v35; // [rsp+10h] [rbp-48h]

  v9 = *(__int64 (__fastcall **)(__int64, unsigned __int8))(*(_QWORD *)a1 + 8LL);
  if ( v9 == sub_8E5130 )
  {
    if ( *(_BYTE *)(a1 + 176) || *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
    {
      v10 = *(_DWORD *)(a1 + 184);
      if ( v10 > *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL) )
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
      *(_DWORD *)(a1 + 184) = v10;
    }
    else
    {
      sub_8E5080(a1, 0);
    }
  }
  else
  {
    v9(a1, 0);
  }
  v11 = (__m128i *)a1;
  v12 = sub_186B270(0x230u);
  sub_B387B0(v12, a1);
  v17 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a3[1].m128i_i64[0];
  *(_QWORD *)(a1 + 7496) = v12;
  *(_QWORD *)(v12 + 64) = a2;
  v35 = 0u;
  v34 = 0;
  if ( v17 )
  {
    v11 = (__m128i *)a3;
    v17(&v34, a3, 2);
    v18 = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v18 = 0;
  }
  v19 = _mm_loadu_si128((const __m128i *)(v12 + 72));
  *(__m128i *)(v12 + 72) = _mm_load_si128(&v34);
  v20 = _mm_loadu_si128((const __m128i *)(v12 + 88));
  v34 = v19;
  v35 = v20;
  *(__m128i *)(v12 + 88) = v18;
  if ( v20.m128i_i64[0] )
  {
    v11 = &v34;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v20.m128i_i64[0])(&v34, &v34, 3);
  }
  v21 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a4[1].m128i_i64[0];
  v35 = 0u;
  v34 = 0;
  if ( v21 )
  {
    v11 = (__m128i *)a4;
    v21(&v34, a4, 2);
    v22 = _mm_loadu_si128(a4 + 1);
  }
  else
  {
    v22 = 0;
  }
  v23 = _mm_loadu_si128((const __m128i *)(v12 + 104));
  *(__m128i *)(v12 + 104) = _mm_load_si128(&v34);
  v24 = _mm_loadu_si128((const __m128i *)(v12 + 120));
  v34 = v23;
  v35 = v24;
  *(__m128i *)(v12 + 120) = v22;
  if ( v24.m128i_i64[0] )
  {
    v11 = &v34;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v24.m128i_i64[0])(&v34, &v34, 3);
  }
  v25 = (void (__fastcall *)(__m128i *, const __m128i *, __int64))a5[1].m128i_i64[0];
  v35 = 0u;
  v34 = 0;
  if ( v25 )
  {
    v11 = (__m128i *)a5;
    v25(&v34, a5, 2);
    v26 = _mm_loadu_si128(a5 + 1);
  }
  else
  {
    v26 = 0;
  }
  v27 = _mm_loadu_si128((const __m128i *)(v12 + 136));
  *(__m128i *)(v12 + 136) = _mm_load_si128(&v34);
  v28 = _mm_loadu_si128((const __m128i *)(v12 + 152));
  v34 = v27;
  v35 = v28;
  *(__m128i *)(v12 + 152) = v26;
  if ( v28.m128i_i64[0] )
  {
    v11 = &v34;
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v28.m128i_i64[0])(&v34, &v34, 3);
  }
  v29 = *(_QWORD *)(a1 + 9480);
  if ( v29 )
  {
    v30 = *(_DWORD *)(v29 - 4);
    v31 = v30 - 1;
    if ( v30 )
    {
      do
        (*(void (__fastcall **)(_QWORD, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(**(_QWORD **)(a1 + 7496) + 96LL))(
          *(_QWORD *)(a1 + 7496),
          v11,
          v13,
          v14,
          v15,
          v16,
          v34.m128i_i64[0],
          v34.m128i_i64[1],
          v35.m128i_i64[0],
          v35.m128i_i64[1]);
      while ( v31-- != 0 );
    }
  }
  return sub_8F1E10(a1, *(unsigned int **)(a1 + 7496));
}

