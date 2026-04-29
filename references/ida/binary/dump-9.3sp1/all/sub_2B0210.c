__int64 __fastcall sub_2B0210(__int64 a1, __int64 a2)
{
  int v3; // eax
  __m128i v4; // xmm2
  __int64 v5; // r12
  __int64 v6; // r13
  __m128i si128; // xmm1
  __int64 v8; // rdi
  __int64 v9; // rdi
  __m128i v10; // xmm3
  int v11; // edx
  __int64 result; // rax
  __m128i v13; // [rsp+0h] [rbp-48h] BYREF
  __m128i v14[3]; // [rsp+10h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v3;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  v6 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v8 = *(_QWORD *)(a1 + 16);
  v13 = v4;
  if ( v8 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v14[0] = si128;
    qfree(v8);
    si128 = _mm_load_si128(v14);
  }
  *(_QWORD *)(a1 + 16) = v6;
  *(__m128i *)(a1 + 24) = si128;
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    qfree(v9);
  }
  v10 = _mm_load_si128(&v13);
  v11 = *(_DWORD *)(a2 + 44);
  *(_QWORD *)(a2 + 16) = v5;
  *(__m128i *)(a2 + 24) = v10;
  result = *(unsigned int *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v11;
  *(_DWORD *)(a2 + 44) = result;
  return result;
}
