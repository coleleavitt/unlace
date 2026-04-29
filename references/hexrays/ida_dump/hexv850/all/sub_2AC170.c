__int64 __fastcall sub_2AC170(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  __m128i v4; // xmm2
  __int64 v5; // r13
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // r12
  __int64 v9; // r15
  __m128i si128; // xmm1
  __int64 v11; // rdi
  __int64 v12; // rdi
  __m128i v13; // xmm3
  int v14; // edx
  __int64 result; // rax
  __m128i v16; // [rsp+0h] [rbp-68h] BYREF
  __m128i v17[5]; // [rsp+10h] [rbp-58h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  v17[1] = v3;
  *(_QWORD *)(a2 + 8) = v3.m128i_i64[0];
  *(_DWORD *)(a2 + 16) = v3.m128i_i32[2];
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  v5 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)(a1 + 40) = 0;
  v6 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 32) = 0;
  v7 = *(_DWORD *)(a2 + 24);
  v8 = *(_QWORD *)(a1 + 56);
  v16 = v4;
  *(_DWORD *)(a1 + 24) = v7;
  *(_BYTE *)(a1 + 28) = *(_BYTE *)(a2 + 28);
  *(_BYTE *)(a1 + 29) = *(_BYTE *)(a2 + 29);
  *(_BYTE *)(a1 + 30) = *(_BYTE *)(a2 + 30);
  *(_BYTE *)(a1 + 31) = *(_BYTE *)(a2 + 31);
  v9 = *(_QWORD *)(a2 + 32);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 40));
  *(_QWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = 0;
  v11 = *(_QWORD *)(a1 + 32);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    v17[0] = si128;
    qfree(v11);
    si128 = _mm_load_si128(v17);
  }
  *(_QWORD *)(a1 + 32) = v9;
  *(__m128i *)(a1 + 40) = si128;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  v12 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v6;
  if ( v12 )
  {
    *(_QWORD *)(a2 + 40) = 0;
    qfree(v12);
  }
  v13 = _mm_load_si128(&v16);
  v14 = *(_DWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 32) = v5;
  *(_QWORD *)(a2 + 56) = v8;
  *(__m128i *)(a2 + 40) = v13;
  result = *(unsigned int *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = v14;
  *(_DWORD *)(a2 + 80) = result;
  return result;
}
