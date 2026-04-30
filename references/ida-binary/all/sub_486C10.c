_QWORD *__fastcall folder_data_t__::vfunc_2(__int64 a1)
{
  _QWORD *v1; // rax
  unsigned __int64 v2; // rdx
  _QWORD *v3; // rbx
  void *v4; // rcx
  __m128i si128; // xmm0
  __int64 v6; // rax
  size_t v8; // r12
  void *v9; // rax
  void *v10; // rax
  __m128i v11[2]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (_QWORD *)operator new(0x60u);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = v1;
  memset(v1, 0, 0x60u);
  v4 = nullptr;
  si128 = _mm_unpacklo_epi64((__m128i)v2, (__m128i)v2);
  v1[7] = -1;
  *v1 = &folder_data_t___vtable;
  v1[8] = -256;
  *((_WORD *)v1 + 36) = 255;
  if ( v2 )
  {
    v8 = 9 * v2;
    v11[0] = si128;
    v9 = (void *)qalloc_or_throw(9 * v2);
    v10 = memcpy(v9, *(const void **)(a1 + 8), v8);
    si128 = _mm_load_si128(v11);
    v4 = v10;
  }
  v6 = *(_QWORD *)(a1 + 80);
  v3[1] = v4;
  *((__m128i *)v3 + 1) = si128;
  v3[10] = v6;
  v3[7] = *(_QWORD *)(a1 + 56);
  *((_BYTE *)v3 + 64) = *(_BYTE *)(a1 + 64);
  *(_QWORD *)((char *)v3 + 65) = *(_QWORD *)(a1 + 65);
  *((_BYTE *)v3 + 73) = *(_BYTE *)(a1 + 73);
  return v3;
}
