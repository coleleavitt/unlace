void __fastcall sub_491650(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm2
  __m128i v4; // xmm3
  __m128i v5; // xmm4
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  __int16 v9; // r12
  __int64 v10; // rax
  __m128i si128; // xmm1
  void *v12; // rdi
  __int64 v13; // rax
  __m128i v14; // xmm0
  void *v15; // rdi
  __m128i v16; // xmm5
  void *v17; // rdi
  __m128i v18; // xmm6
  void *v19; // rdi
  __m128i v20; // xmm7
  __m128i v21; // [rsp+0h] [rbp-88h] BYREF
  __m128i v22; // [rsp+10h] [rbp-78h] BYREF
  __m128i v23; // [rsp+20h] [rbp-68h] BYREF
  __m128i v24; // [rsp+30h] [rbp-58h] BYREF
  __m128i v25[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)a1);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_OWORD *)(a1 + 24) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v6 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 48) = 0;
  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 64);
  v22 = v3;
  *(_QWORD *)(a1 + 16) = 0;
  v9 = *(_WORD *)(a1 + 72);
  *(_QWORD *)(a1 + 40) = 0;
  v21 = v4;
  *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)a2);
  v10 = *(_QWORD *)(a2 + 16);
  v23 = v5;
  *(_QWORD *)(a2 + 16) = 0;
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_OWORD *)(a2 + 24) = 0;
  v12 = *(void **)(a1 + 16);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v24.m128i_i64[0] = v10;
    v25[0] = si128;
    qfree(v12);
    si128 = _mm_load_si128(v25);
    v10 = v24.m128i_i64[0];
  }
  *(__m128i *)(a1 + 24) = si128;
  *(_QWORD *)(a1 + 16) = v10;
  v13 = *(_QWORD *)(a2 + 40);
  v14 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(a2 + 40) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  v15 = *(void **)(a1 + 40);
  if ( v15 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v25[0].m128i_i64[0] = v13;
    v24 = v14;
    qfree(v15);
    v13 = v25[0].m128i_i64[0];
    v14 = _mm_load_si128(&v24);
  }
  *(_QWORD *)(a1 + 40) = v13;
  v16 = _mm_load_si128(&v22);
  *(__m128i *)(a1 + 48) = v14;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_BYTE *)(a1 + 72) = *(_BYTE *)(a2 + 72);
  *(_BYTE *)(a1 + 73) = *(_BYTE *)(a2 + 73);
  v17 = *(void **)(a2 + 16);
  *(__m128i *)a2 = v16;
  if ( v17 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    qfree(v17);
  }
  v18 = _mm_load_si128(&v21);
  v19 = *(void **)(a2 + 40);
  *(_QWORD *)(a2 + 16) = v6;
  *(__m128i *)(a2 + 24) = v18;
  if ( v19 )
  {
    *(_QWORD *)(a2 + 48) = 0;
    qfree(v19);
  }
  v20 = _mm_load_si128(&v23);
  *(_QWORD *)(a2 + 40) = v7;
  *(_QWORD *)(a2 + 64) = v8;
  *(_WORD *)(a2 + 72) = v9;
  *(__m128i *)(a2 + 48) = v20;
}
