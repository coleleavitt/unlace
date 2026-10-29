/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40EA70
// Address: 0x000000000040EA70

//----- (000000000040EA70) ----------------------------------------------------
__m128i *__fastcall sub_40EA70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  bool v4; // cc
  void *v5; // rdi
  char *v6; // rax
  __int64 v7; // rcx
  __m128i *result; // rax
  __m128i v9; // xmm3
  __m128i v10; // xmm4
  __m128i si128; // [rsp+0h] [rbp-38h] BYREF
  __m128i v12[2]; // [rsp+10h] [rbp-28h] BYREF

  v3 = 16 * a3;
  v4 = *(_DWORD *)a2 < -1;
  si128 = _mm_load_si128((const __m128i *)(a1 + v3 + 992));
  v12[0] = _mm_load_si128((const __m128i *)(a1 + v3 + 1408));
  if ( !v4 )
  {
    v5 = *(void **)(a2 + 8);
    if ( v5 )
    {
      *(_QWORD *)(a2 + 16) = 0;
      j__free(v5);
    }
    *(_DWORD *)a2 = -2;
  }
  *(_QWORD *)(a2 + 8) = 0;
  *(_OWORD *)(a2 + 16) = 0;
  v6 = (char *)sub_481540(a2 + 8, nullptr, 0x20u, 1u);
  v7 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = v6;
  memset(&v6[v7], 0, 32 - v7);
  result = *(__m128i **)(a2 + 8);
  v9 = _mm_load_si128(&si128);
  *(_QWORD *)(a2 + 16) = 32;
  v10 = _mm_load_si128(v12);
  *result = v9;
  result[1] = v10;
  *(_DWORD *)a2 = 0;
  return result;
}
