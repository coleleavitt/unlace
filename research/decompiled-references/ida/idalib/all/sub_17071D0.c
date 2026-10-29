void __fastcall sub_17071D0(char a1, __int64 a2, __int64 a3)
{
  __int64 v4; // [rsp+0h] [rbp-88h] BYREF
  char *v5; // [rsp+8h] [rbp-80h]
  __m128i si128; // [rsp+10h] [rbp-78h]
  int v7; // [rsp+20h] [rbp-68h]
  __int128 v8; // [rsp+28h] [rbp-60h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h]
  char v10; // [rsp+40h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  __int64 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]

  if ( ((1LL << a1) & 0x2D) == 0 )
  {
    if ( ((1LL << a1) & 0x42) == 0 )
      return;
    if ( (*(_BYTE *)(a2 + 1) & 8) != 0 )
    {
      v5 = "explicit";
      v8 = 0;
      v4 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
      v10 = v10 & 0x80 | 0x40;
      v7 = 0;
      v9 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      sub_1706C30(a3, (__int64)&v4);
      sub_1705410((__int64)&v8);
      v8 = 0;
      v5 = "friend";
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
      v4 = 0;
      v7 = 0;
      v10 = v10 & 0x80 | 0x40;
      v9 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      sub_1706C30(a3, (__int64)&v4);
      sub_1705410((__int64)&v8);
      v8 = 0;
      v5 = "mutable";
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
      v4 = 0;
      v7 = 0;
      v10 = v10 & 0x80 | 0x40;
      v9 = 0;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      sub_1706C30(a3, (__int64)&v4);
      sub_1705410((__int64)&v8);
      v4 = 0;
      v5 = "virtual";
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
      v8 = 0;
      v7 = 0;
      v9 = 0;
      v10 = v10 & 0x80 | 0x40;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      sub_1706C30(a3, (__int64)&v4);
      sub_1705410((__int64)&v8);
    }
  }
  if ( (*(_WORD *)a2 & 0x801) != 0 )
  {
    v5 = "inline";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v4 = 0;
    v8 = 0;
    v7 = 0;
    v9 = 0;
    v10 = v10 & 0x80 | 0x40;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    sub_1706C30(a3, (__int64)&v4);
    sub_1705410((__int64)&v8);
  }
  if ( *(char *)(a2 + 1) < 0 )
  {
    v5 = "consteval";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v8 = 0;
    v4 = 0;
    v10 = v10 & 0x80 | 0x40;
    v7 = 0;
    v9 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    sub_1706C30(a3, (__int64)&v4);
    sub_1705410((__int64)&v8);
  }
}
