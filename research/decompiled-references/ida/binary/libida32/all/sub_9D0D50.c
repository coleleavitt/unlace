void __fastcall sub_9D0D50(__int64 *a1, _WORD *a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rax
  size_t v5; // rax
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  void *v9; // [rsp+0h] [rbp-68h] BYREF
  __m128i si128; // [rsp+8h] [rbp-60h]
  __m128i v11; // [rsp+20h] [rbp-48h] BYREF
  __m128i v12; // [rsp+30h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-28h]

  if ( ((*a2 + 509) & 0x1FFu) <= 0x7E )
  {
    v2 = sub_BD7B00(a2);
    if ( (*(_WORD *)v2 & 0x1FF) == 4 && *(_BYTE *)(v2 + 2) >> 3 == 2 )
    {
      v3 = *(_QWORD *)(v2 + 16);
      if ( (*(_WORD *)v3 & 0x1FF) == 0x47 )
      {
        v4 = *(_QWORD *)(v3 + 16);
        if ( v4 )
        {
          if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 40 <= 6 )
          {
            v9 = nullptr;
            si128 = _mm_load_si128((const __m128i *)&xmmword_2384CD0);
            v11.m128i_i32[0] = sub_AD6A60(v2);
            v5 = j__strlen("PointerPreIncrementUnderUPC");
            v6 = sub_9D0C50((__int64)&v9, "PointerPreIncrementUnderUPC", v5);
            v11.m128i_i64[1] = v2;
            v7 = _mm_load_si128(&v11);
            v8 = _mm_load_si128(&v12);
            *(_QWORD *)(v6 + 32) = v13;
            *(__m128i *)v6 = v7;
            *(__m128i *)(v6 + 16) = v8;
            sub_9C8030(*a1, (__int64 *)&v9);
            sub_9C9380(&v9);
          }
        }
      }
    }
  }
}

