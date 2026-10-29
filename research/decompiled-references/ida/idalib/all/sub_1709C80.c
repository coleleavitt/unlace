void __fastcall sub_1709C80(__int64 a1, __int64 a2, char *a3)
{
  char v4; // al
  char v5; // al
  __int64 v6; // [rsp+0h] [rbp-88h] BYREF
  const char *v7; // [rsp+8h] [rbp-80h]
  __m128i si128; // [rsp+10h] [rbp-78h]
  int v9; // [rsp+20h] [rbp-68h]
  __int128 v10; // [rsp+28h] [rbp-60h] BYREF
  __int64 v11; // [rsp+38h] [rbp-50h]
  char v12; // [rsp+40h] [rbp-48h]
  __int64 v13; // [rsp+48h] [rbp-40h]
  __int64 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+58h] [rbp-30h]

  v4 = (*(_BYTE *)(a1 + 3) >> 2) & 0x1F;
  if ( (*(_BYTE *)(a1 + 3) & 4) == 0 )
  {
    v7 = "const";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v10 = 0;
    v6 = 0;
    v12 = v12 & 0x80 | 0x40;
    v9 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    sub_1706C30(a2, (__int64)&v6);
    sub_1705410((__int64)&v10);
    v4 = (*(_BYTE *)(a1 + 3) >> 2) & 0x1F;
  }
  if ( (v4 & 4) == 0 )
  {
    v7 = "volatile";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v6 = 0;
    v10 = 0;
    v9 = 0;
    v11 = 0;
    v12 = v12 & 0x80 | 0x40;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    sub_1706C30(a2, (__int64)&v6);
    sub_1705410((__int64)&v10);
  }
  v5 = *a3;
  if ( (*a3 & 1) != 0 && (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v7 = "restrict";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v10 = 0;
    v6 = 0;
    v12 = v12 & 0x80 | 0x40;
    v9 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    sub_1706C30(a2, (__int64)&v6);
    sub_1705410((__int64)&v10);
    v5 = *a3;
  }
  if ( (v5 & 2) != 0 && (*(_BYTE *)(a1 + 3) & 0x40) == 0 )
  {
    v7 = "_Atomic";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v10 = 0;
    v6 = 0;
    v12 = v12 & 0x80 | 0x40;
    v9 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    sub_1706C30(a2, (__int64)&v6);
    sub_1705410((__int64)&v10);
    v5 = *a3;
  }
  if ( (v5 & 0x20) != 0 && (*(_BYTE *)(a1 + 3) & 0x20) == 0 )
  {
    v7 = "__unaligned";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v10 = 0;
    v6 = 0;
    v12 = v12 & 0x80 | 0x40;
    v9 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    sub_1706C30(a2, (__int64)&v6);
    sub_1705410((__int64)&v10);
  }
}
