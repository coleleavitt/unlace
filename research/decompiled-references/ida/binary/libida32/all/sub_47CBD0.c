__int64 __fastcall sub_47CBD0(__int64 *a1, __int64 *a2)
{
  __m128i v3; // xmm2
  __int64 v4; // r14
  __m128i v5; // xmm3
  __int64 v6; // r13
  unsigned __int16 v7; // ax
  __int64 v8; // r15
  __int64 v9; // rdx
  int v10; // r12d
  __int64 v11; // rdx
  __m128i si128; // xmm1
  void *v13; // rdi
  __int64 v14; // rdx
  __m128i v15; // xmm0
  void *v16; // rdi
  void *v17; // rdi
  __m128i v18; // xmm4
  void *v19; // rdi
  __m128i v20; // xmm5
  __int64 result; // rax
  __m128i v22; // [rsp+0h] [rbp-88h] BYREF
  __m128i v23; // [rsp+10h] [rbp-78h] BYREF
  unsigned __int16 v24; // [rsp+2Eh] [rbp-5Ah]
  __m128i v25; // [rsp+30h] [rbp-58h] BYREF
  __m128i v26[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)a1 + 1);
  v4 = a1[1];
  *((_OWORD *)a1 + 1) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 5));
  v6 = a1[4];
  a1[1] = 0;
  *(_OWORD *)(a1 + 5) = 0;
  v7 = *((_WORD *)a1 + 30);
  v8 = *a1;
  a1[4] = 0;
  v9 = *a2;
  v10 = *((_DWORD *)a1 + 14);
  v24 = v7;
  *a1 = v9;
  v11 = a2[1];
  v23 = v3;
  a2[1] = 0;
  v22 = v5;
  si128 = _mm_loadu_si128((const __m128i *)a2 + 1);
  *((_OWORD *)a2 + 1) = 0;
  v13 = (void *)a1[1];
  if ( v13 )
  {
    a1[2] = 0;
    v25.m128i_i64[0] = v11;
    v26[0] = si128;
    qfree(v13);
    si128 = _mm_load_si128(v26);
    v11 = v25.m128i_i64[0];
  }
  *((__m128i *)a1 + 1) = si128;
  a1[1] = v11;
  v14 = a2[4];
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 5));
  a2[4] = 0;
  *(_OWORD *)(a2 + 5) = 0;
  v16 = (void *)a1[4];
  if ( v16 )
  {
    a1[5] = 0;
    v26[0].m128i_i64[0] = v14;
    v25 = v15;
    qfree(v16);
    v14 = v26[0].m128i_i64[0];
    v15 = _mm_load_si128(&v25);
  }
  a1[4] = v14;
  *(__m128i *)(a1 + 5) = v15;
  *((_DWORD *)a1 + 14) = *((_DWORD *)a2 + 14);
  *((_BYTE *)a1 + 60) = *((_BYTE *)a2 + 60);
  *((_BYTE *)a1 + 61) = *((_BYTE *)a2 + 61);
  v17 = (void *)a2[1];
  *a2 = v8;
  if ( v17 )
  {
    a2[2] = 0;
    qfree(v17);
  }
  v18 = _mm_load_si128(&v23);
  v19 = (void *)a2[4];
  a2[1] = v4;
  *((__m128i *)a2 + 1) = v18;
  if ( v19 )
  {
    a2[5] = 0;
    qfree(v19);
  }
  v20 = _mm_load_si128(&v22);
  result = v24;
  a2[4] = v6;
  *((_DWORD *)a2 + 14) = v10;
  *((_WORD *)a2 + 30) = result;
  *(__m128i *)(a2 + 5) = v20;
  return result;
}

