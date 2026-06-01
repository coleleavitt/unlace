__int64 __fastcall chooser_folder_data_t__::vfunc_2(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx
  void *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __m128i si128; // xmm0
  unsigned __int64 v7; // rdx
  void *v8; // rcx
  __m128i v9; // xmm0
  __int64 v10; // rax
  size_t v12; // r12
  void *v13; // rax
  void *v14; // rax
  size_t v15; // r12
  void *v16; // rax
  void *v17; // rax
  __m128i v18[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = operator new(0x68u);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = nullptr;
  v4 = v1;
  v5 = *(_QWORD *)(a1 + 96);
  *(_OWORD *)(v4 + 16) = 0;
  *(_OWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 8) = 0;
  si128 = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
  *(_QWORD *)(v4 + 32) = 0;
  *(_QWORD *)(v4 + 56) = -1;
  *(_QWORD *)(v4 + 64) = -256;
  *(_QWORD *)(v4 + 72) = 255;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  *(_QWORD *)v4 = &chooser_folder_data_t___vtable;
  *(_QWORD *)(v4 + 96) = v5;
  if ( v2 )
  {
    v12 = 9 * v2;
    v18[0] = si128;
    v13 = (void *)qalloc_or_throw(9 * v2);
    v14 = memcpy(v13, *(const void **)(a1 + 8), v12);
    si128 = _mm_load_si128(v18);
    v3 = v14;
  }
  v7 = *(_QWORD *)(a1 + 40);
  *(__m128i *)(v4 + 16) = si128;
  *(_QWORD *)(v4 + 8) = v3;
  v8 = nullptr;
  v9 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v7);
  if ( v7 )
  {
    v15 = 8 * v7;
    v18[0] = v9;
    v16 = (void *)qalloc_or_throw(8 * v7);
    v17 = memcpy(v16, *(const void **)(a1 + 32), v15);
    v9 = _mm_load_si128(v18);
    v8 = v17;
  }
  v10 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(v4 + 32) = v8;
  *(__m128i *)(v4 + 40) = v9;
  *(_QWORD *)(v4 + 56) = v10;
  *(_BYTE *)(v4 + 64) = *(_BYTE *)(a1 + 64);
  *(_QWORD *)(v4 + 65) = *(_QWORD *)(a1 + 65);
  *(_BYTE *)(v4 + 73) = *(_BYTE *)(a1 + 73);
  *(_QWORD *)(v4 + 80) = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(v4 + 88) = *(_QWORD *)(a1 + 88);
  return v4;
}
