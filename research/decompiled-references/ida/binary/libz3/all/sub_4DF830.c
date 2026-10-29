void __fastcall sub_4DF830(__int64 a1, __int64 a2)
{
  __m128i *v3; // rax
  __m128i si128; // xmm0
  int v5; // esi
  __int64 *v6; // [rsp+0h] [rbp-38h]
  __int64 v7; // [rsp+10h] [rbp-28h] BYREF

  v3 = (__m128i *)operator new(0x11u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B65F0);
  v5 = *(_DWORD *)(a1 + 72);
  v3[1].m128i_i8[0] = 0;
  *v3 = si128;
  v6 = (__int64 *)v3;
  v7 = 16;
  sub_4DC570((unsigned int *)(a2 + 16), v5, v3, (char *)&word_10);
  if ( v6 != &v7 )
    operator delete(v6, v7 + 1);
}

