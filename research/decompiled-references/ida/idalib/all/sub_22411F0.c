void __fastcall sub_22411F0(void **a1)
{
  _QWORD *v2; // rdi
  __m128i *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i si128; // xmm0
  __m128i v7; // xmm0
  _QWORD *v8; // [rsp+0h] [rbp-10h] BYREF

  if ( a1 )
  {
    if ( byte_2D0ABAA )
    {
      sub_224DC50(&v8);
      v2 = v8;
      v3 = (__m128i *)v8[4];
      if ( v8[3] - (_QWORD)v3 > 0x19u )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_23ABB40);
        qmemcpy(&v3[1], "isabled.  ", 10);
        *v3 = si128;
        v5 = v2[4] + 26LL;
        v2[4] = v5;
      }
      else
      {
        v4 = sub_227BF10(v8, "Statistics are disabled.  ", 26);
        v5 = *(_QWORD *)(v4 + 32);
        v2 = (_QWORD *)v4;
      }
      if ( (unsigned __int64)(v2[3] - v5) > 0x34 )
      {
        v7 = _mm_load_si128((const __m128i *)&xmmword_23ABB50);
        *(_DWORD *)(v5 + 48) = 1398030676;
        *(_BYTE *)(v5 + 52) = 10;
        *(__m128i *)v5 = v7;
        *(__m128i *)(v5 + 16) = _mm_load_si128((const __m128i *)&xmmword_23ABB60);
        *(__m128i *)(v5 + 32) = _mm_load_si128((const __m128i *)&xmmword_23ABB70);
        v2[4] += 53LL;
      }
      else
      {
        sub_227BF10(v2, "Build with asserts or with -DLLVM_FORCE_ENABLE_STATS\n", 53);
      }
      if ( v8 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
    }
    if ( *a1 )
      operator delete(*a1);
    operator delete(a1, 0x18u);
  }
}
