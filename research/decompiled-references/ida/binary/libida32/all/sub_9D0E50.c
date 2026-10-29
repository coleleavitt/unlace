void __fastcall sub_9D0E50(__int64 *a1, _WORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  size_t v4; // rax
  __int64 v5; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  void *v8; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __m128i v10; // [rsp+20h] [rbp-48h] BYREF
  __m128i v11; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-28h]

  if ( ((*a2 + 509) & 0x1FFu) <= 0x7E )
  {
    v2 = sub_BD7DA0(a2);
    if ( (*(_WORD *)v2 & 0x1FF) == 0x47 && (sub_9C57D0(v2) || sub_9C57F0(v2)) )
    {
      v3 = *(_QWORD *)(v2 + 16);
      if ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 28) & 0x7Fu) - 40 <= 6 )
        {
          v8 = nullptr;
          si128 = _mm_load_si128((const __m128i *)&xmmword_2384CD0);
          v10.m128i_i32[0] = sub_AD6A60(v2);
          v4 = j__strlen("StandalonePointer");
          v5 = sub_9D0C50((__int64)&v8, "StandalonePointer", v4);
          v10.m128i_i64[1] = v2;
          v6 = _mm_load_si128(&v10);
          v7 = _mm_load_si128(&v11);
          *(_QWORD *)(v5 + 32) = v12;
          *(__m128i *)v5 = v6;
          *(__m128i *)(v5 + 16) = v7;
          sub_9C8030(*a1, (__int64 *)&v8);
          sub_9C9380(&v8);
        }
      }
    }
  }
}

