__int64 __fastcall sub_101DD90(__int64 a1)
{
  __int64 v3; // rax
  __m128i si128; // xmm0
  __int64 v5; // rbp
  __int64 v6; // rdx
  __m128i v7; // xmm0
  void *v8; // rdi

  if ( *(_QWORD *)(a1 + 488) )
    return *(_QWORD *)(a1 + 488);
  v3 = operator new(0xC0u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
  v5 = *(_QWORD *)(a1 + 488);
  v6 = v3;
  *(_QWORD *)(a1 + 488) = v3;
  memset((void *)v3, 0, 0xC0u);
  *(__m128i *)(v3 + 8) = si128;
  v7 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  *(_QWORD *)(v3 + 40) = v3 + 56;
  *(_QWORD *)(v3 + 48) = 0x400000000LL;
  *(_QWORD *)(v3 + 88) = v3 + 104;
  *(__m128i *)(v3 + 104) = v7;
  *(_QWORD *)(v3 + 168) = v3 + 152;
  *(_QWORD *)(v3 + 176) = v3 + 152;
  if ( v5 )
  {
    sub_101DD30(v5 + 144, *(_QWORD **)(v5 + 160));
    v8 = *(void **)(v5 + 120);
    if ( v8 )
      operator delete(v8);
    sub_9B7090(v5 + 24);
    free(*(void **)v5);
    operator delete((void *)v5, 0xC0u);
    return *(_QWORD *)(a1 + 488);
  }
  return v6;
}
