__int64 __fastcall sub_2DE130(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __m128i v5; // xmm2
  __int64 v6; // r15
  int v7; // r13d
  __int64 v8; // r12
  char v9; // r14
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // rdi
  __m128i v13; // xmm0
  __int64 result; // rax
  __int64 v15; // rdi
  __m128i v16; // xmm3
  __m128i v17; // xmm0
  __m128i v18; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v19; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+28h] [rbp-A0h]
  __m128i v21[3]; // [rsp+38h] [rbp-90h] BYREF
  __m128i v22[6]; // [rsp+68h] [rbp-60h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 56));
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 32));
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0;
  v21[0] = v3;
  v7 = *(_DWORD *)(a1 + 72);
  v8 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 32) = 0;
  v9 = *(_BYTE *)(a1 + 48);
  v22[0] = v4;
  v18 = v5;
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v10 = *(_QWORD *)(a2 + 24);
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 32));
  *(_QWORD *)(a2 + 24) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  v12 = *(_QWORD *)(a1 + 24);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    v20 = v10;
    v19 = v11;
    qfree(v12);
    v10 = v20;
    v11 = _mm_load_si128(&v19);
  }
  *(_QWORD *)(a1 + 24) = v10;
  *(__m128i *)(a1 + 32) = v11;
  *(_BYTE *)(a1 + 48) = *(_BYTE *)(a2 + 48);
  *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)(a2 + 56));
  v13 = _mm_loadu_si128(v21);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  result = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a1 + 80) = result;
  v15 = *(_QWORD *)(a2 + 24);
  *(__m128i *)(a2 + 8) = v13;
  if ( v15 )
  {
    *(_QWORD *)(a2 + 32) = 0;
    result = qfree(v15);
  }
  v16 = _mm_load_si128(&v18);
  v17 = _mm_loadu_si128(v22);
  *(_QWORD *)(a2 + 24) = v6;
  *(_BYTE *)(a2 + 48) = v9;
  *(_DWORD *)(a2 + 72) = v7;
  *(_QWORD *)(a2 + 80) = v8;
  *(__m128i *)(a2 + 32) = v16;
  *(__m128i *)(a2 + 56) = v17;
  return result;
}
