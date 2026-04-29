__int64 __fastcall sub_3B9210(__int64 a1, __int64 *a2)
{
  __m128i v3; // xmm3
  __int64 v4; // r13
  __m128i si128; // xmm1
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // r14
  __m128i v9; // xmm2
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rdi
  __m128i v13; // xmm4
  __m128i v14; // [rsp+0h] [rbp-58h] BYREF
  __m128i v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  si128 = _mm_loadu_si128((const __m128i *)a1);
  v6 = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v7 = *a2;
  v14 = v3;
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = a2[1];
  v8 = a2[2];
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  a2[2] = 0;
  *(_OWORD *)(a2 + 3) = 0;
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v16[0] = si128;
    v15 = v9;
    qfree(v10);
    si128 = _mm_load_si128(v16);
    v9 = _mm_load_si128(&v15);
  }
  *(_QWORD *)(a1 + 16) = v8;
  *(__m128i *)(a1 + 24) = v9;
  result = *((unsigned int *)a2 + 10);
  *(_DWORD *)(a1 + 40) = result;
  v12 = a2[2];
  *(__m128i *)a2 = si128;
  if ( v12 )
  {
    a2[3] = 0;
    result = qfree(v12);
  }
  v13 = _mm_load_si128(&v14);
  a2[2] = v4;
  *((_DWORD *)a2 + 10) = v6;
  *(__m128i *)(a2 + 3) = v13;
  return result;
}
