__int64 __fastcall sub_3F5DF0(__int64 *a1, __int64 a2)
{
  __m128i v3; // xmm2
  __int64 v4; // rax
  __m128i v5; // xmm3
  __m128i v6; // xmm4
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rdx
  __m128i si128; // xmm1
  void *v13; // rdi
  __int64 v14; // rdx
  __m128i v15; // xmm0
  void *v16; // rdi
  __int64 v17; // rdx
  __m128i v18; // xmm0
  void *v19; // rdi
  void *v20; // rdi
  __m128i v21; // xmm5
  void *v22; // rdi
  __m128i v23; // xmm6
  void *v24; // rdi
  __m128i v25; // xmm7
  __int64 result; // rax
  __m128i v27; // [rsp+0h] [rbp-88h] BYREF
  __m128i v28; // [rsp+10h] [rbp-78h] BYREF
  __m128i v29; // [rsp+20h] [rbp-68h] BYREF
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  __m128i v32[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)a1 + 1);
  v4 = a1[10];
  *((_OWORD *)a1 + 1) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 5));
  v6 = _mm_loadu_si128((const __m128i *)a1 + 4);
  *(_OWORD *)(a1 + 5) = 0;
  v7 = a1[1];
  v8 = a1[4];
  a1[1] = 0;
  v9 = a1[7];
  v10 = *a1;
  *((_OWORD *)a1 + 4) = 0;
  a1[4] = 0;
  a1[7] = 0;
  v30 = v4;
  v27 = v3;
  v28 = v5;
  v29 = v6;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *((_DWORD *)a1 + 1) = *(_DWORD *)(a2 + 4);
  v11 = *(_QWORD *)(a2 + 8);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 16));
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  v13 = (void *)a1[1];
  if ( v13 )
  {
    a1[2] = 0;
    v31 = v11;
    v32[0] = si128;
    qfree(v13);
    si128 = _mm_load_si128(v32);
    v11 = v31;
  }
  *((__m128i *)a1 + 1) = si128;
  a1[1] = v11;
  v14 = *(_QWORD *)(a2 + 32);
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0;
  v16 = (void *)a1[4];
  if ( v16 )
  {
    a1[5] = 0;
    v31 = v14;
    v32[0] = v15;
    qfree(v16);
    v15 = _mm_load_si128(v32);
    v14 = v31;
  }
  a1[4] = v14;
  *(__m128i *)(a1 + 5) = v15;
  v17 = *(_QWORD *)(a2 + 56);
  v18 = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_QWORD *)(a2 + 56) = 0;
  *(_OWORD *)(a2 + 64) = 0;
  v19 = (void *)a1[7];
  if ( v19 )
  {
    a1[8] = 0;
    v31 = v17;
    v32[0] = v18;
    qfree(v19);
    v18 = _mm_load_si128(v32);
    v17 = v31;
  }
  a1[7] = v17;
  *((__m128i *)a1 + 4) = v18;
  a1[10] = *(_QWORD *)(a2 + 80);
  v20 = *(void **)(a2 + 8);
  *(_QWORD *)a2 = v10;
  if ( v20 )
  {
    *(_QWORD *)(a2 + 16) = 0;
    qfree(v20);
  }
  v21 = _mm_load_si128(&v27);
  v22 = *(void **)(a2 + 32);
  *(_QWORD *)(a2 + 8) = v7;
  *(__m128i *)(a2 + 16) = v21;
  if ( v22 )
  {
    *(_QWORD *)(a2 + 40) = 0;
    qfree(v22);
  }
  v23 = _mm_load_si128(&v28);
  v24 = *(void **)(a2 + 56);
  *(_QWORD *)(a2 + 32) = v8;
  *(__m128i *)(a2 + 40) = v23;
  if ( v24 )
  {
    *(_QWORD *)(a2 + 64) = 0;
    qfree(v24);
  }
  v25 = _mm_load_si128(&v29);
  result = v30;
  *(_QWORD *)(a2 + 56) = v9;
  *(_QWORD *)(a2 + 80) = result;
  *(__m128i *)(a2 + 64) = v25;
  return result;
}

