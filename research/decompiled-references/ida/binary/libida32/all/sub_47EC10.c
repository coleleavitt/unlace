__int64 __fastcall sub_47EC10(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  __m128i si128; // xmm0
  void *v5; // rdi
  __int64 v6; // r12
  __m128i v7; // xmm0
  void *v8; // rdi
  __int64 result; // rax
  __m128i v10[2]; // [rsp+0h] [rbp-28h] BYREF

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  si128 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v5 = *(void **)(a1 + 16);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v10[0] = si128;
    qfree(v5);
    si128 = _mm_load_si128(v10);
  }
  *(_QWORD *)(a1 + 16) = v3;
  *(__m128i *)(a1 + 24) = si128;
  v6 = *(_QWORD *)(a2 + 40);
  v7 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(a2 + 40) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  v8 = *(void **)(a1 + 40);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v10[0] = v7;
    qfree(v8);
    v7 = _mm_load_si128(v10);
  }
  *(_QWORD *)(a1 + 40) = v6;
  *(__m128i *)(a1 + 48) = v7;
  copy_tinfo_t(a1 + 64);
  *(__m128i *)(a1 + 72) = _mm_loadu_si128((const __m128i *)(a2 + 72));
  *(__m128i *)(a1 + 88) = _mm_loadu_si128((const __m128i *)(a2 + 88));
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a1 + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 116);
  result = *(unsigned __int8 *)(a2 + 120);
  *(_BYTE *)(a1 + 120) = result;
  return result;
}

