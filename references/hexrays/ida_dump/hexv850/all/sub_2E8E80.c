__int64 __fastcall sub_2E8E80(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm2
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // rdx
  int v8; // r13d
  __int64 v9; // r12
  __int64 v10; // rdx
  __m128i si128; // xmm1
  __int64 v12; // rdi
  __int64 v13; // rdi
  __m128i v14; // xmm3
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __m128i v18[4]; // [rsp+20h] [rbp-48h] BYREF

  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v4 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  result = *(_QWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = 0;
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_DWORD *)(a1 + 48);
  v15 = v3;
  v9 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 8) = v7;
  v10 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v12 = *(_QWORD *)(a1 + 16);
  if ( v12 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v17 = v10;
    v16 = result;
    v18[0] = si128;
    qfree(v12);
    si128 = _mm_load_si128(v18);
    v10 = v17;
    result = v16;
  }
  *(_QWORD *)(a1 + 16) = v10;
  *(__m128i *)(a1 + 24) = si128;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  v13 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = result;
  if ( v13 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    result = qfree(v13);
  }
  v14 = _mm_load_si128(&v15);
  *(_QWORD *)(a2 + 16) = v4;
  *(_QWORD *)(a2 + 40) = v6;
  *(_DWORD *)(a2 + 48) = v8;
  *(_QWORD *)(a2 + 56) = v9;
  *(__m128i *)(a2 + 24) = v14;
  return result;
}
