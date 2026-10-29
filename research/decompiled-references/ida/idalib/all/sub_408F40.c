void __fastcall sub_408F40(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm3
  __m128i v4; // xmm2
  __m128i v5; // xmm4
  __m128i v6; // xmm5
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  __m128i si128; // xmm1
  void *v13; // rdi
  __int64 v14; // rax
  __m128i v15; // xmm0
  void *v16; // rdi
  __int64 v17; // rax
  __m128i v18; // xmm0
  void *v19; // rdi
  __m128i v20; // xmm6
  void *v21; // rdi
  __m128i v22; // xmm7
  void *v23; // rdi
  __m128i v24; // xmm2
  void *v25; // rdi
  __m128i v26; // xmm3
  __m128i v27; // [rsp+0h] [rbp-98h] BYREF
  __m128i v28; // [rsp+10h] [rbp-88h] BYREF
  __m128i v29; // [rsp+20h] [rbp-78h] BYREF
  __m128i v30; // [rsp+30h] [rbp-68h] BYREF
  __int64 v31; // [rsp+48h] [rbp-50h]
  __m128i v32[4]; // [rsp+50h] [rbp-48h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v4 = _mm_loadu_si128((const __m128i *)a1);
  *(_OWORD *)(a1 + 24) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v6 = _mm_loadu_si128((const __m128i *)(a1 + 72));
  *(_OWORD *)(a1 + 48) = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v9 = *(_QWORD *)(a1 + 64);
  v10 = *(_QWORD *)(a1 + 88);
  *(_OWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  v30 = v4;
  v27 = v3;
  v28 = v5;
  v29 = v6;
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v11 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v13 = *(void **)(a1 + 16);
  if ( v13 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v31 = v11;
    v32[0] = si128;
    qfree(v13);
    si128 = _mm_load_si128(v32);
    v11 = v31;
  }
  *(__m128i *)(a1 + 24) = si128;
  *(_QWORD *)(a1 + 16) = v11;
  v14 = *(_QWORD *)(a2 + 40);
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(a2 + 40) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  v16 = *(void **)(a1 + 40);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v31 = v14;
    v32[0] = v15;
    qfree(v16);
    v15 = _mm_load_si128(v32);
    v14 = v31;
  }
  *(_QWORD *)(a1 + 40) = v14;
  *(__m128i *)(a1 + 48) = v15;
  v17 = *(_QWORD *)(a2 + 64);
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(_QWORD *)(a2 + 64) = 0;
  *(_OWORD *)(a2 + 72) = 0;
  v19 = *(void **)(a1 + 64);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 72) = 0;
    v31 = v17;
    v32[0] = v18;
    qfree(v19);
    v18 = _mm_load_si128(v32);
    v17 = v31;
  }
  *(_QWORD *)(a1 + 64) = v17;
  v20 = _mm_load_si128(&v30);
  *(__m128i *)(a1 + 72) = v18;
  *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 88);
  v21 = *(void **)(a2 + 16);
  *(__m128i *)a2 = v20;
  if ( v21 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    qfree(v21);
  }
  v22 = _mm_load_si128(&v27);
  v23 = *(void **)(a2 + 40);
  *(_QWORD *)(a2 + 16) = v7;
  *(__m128i *)(a2 + 24) = v22;
  if ( v23 )
  {
    *(_QWORD *)(a2 + 48) = 0;
    qfree(v23);
  }
  v24 = _mm_load_si128(&v28);
  v25 = *(void **)(a2 + 64);
  *(_QWORD *)(a2 + 40) = v8;
  *(__m128i *)(a2 + 48) = v24;
  if ( v25 )
  {
    *(_QWORD *)(a2 + 72) = 0;
    qfree(v25);
  }
  v26 = _mm_load_si128(&v29);
  *(_QWORD *)(a2 + 64) = v9;
  *(_QWORD *)(a2 + 88) = v10;
  *(__m128i *)(a2 + 72) = v26;
}
