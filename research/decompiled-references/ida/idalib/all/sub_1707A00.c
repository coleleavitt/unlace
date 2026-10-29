void __fastcall sub_1707A00(__int64 a1, __int64 a2)
{
  char v2; // al
  __m128i v3; // xmm5
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+0h] [rbp-128h] BYREF
  char *v9; // [rsp+8h] [rbp-120h]
  __m128i v10; // [rsp+10h] [rbp-118h]
  int v11; // [rsp+20h] [rbp-108h]
  __int128 v12; // [rsp+28h] [rbp-100h] BYREF
  __int64 v13; // [rsp+38h] [rbp-F0h]
  char v14; // [rsp+40h] [rbp-E8h]
  __int64 v15; // [rsp+48h] [rbp-E0h]
  __int64 v16; // [rsp+50h] [rbp-D8h]
  __int64 v17; // [rsp+58h] [rbp-D0h]
  __m128i v18; // [rsp+60h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+70h] [rbp-B8h]
  __int64 v20; // [rsp+80h] [rbp-A8h]
  __int128 v21; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+98h] [rbp-90h]
  char v23; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v24; // [rsp+A8h] [rbp-80h]
  __int64 v25; // [rsp+B0h] [rbp-78h]
  __int64 v26; // [rsp+B8h] [rbp-70h]
  __int64 *v27; // [rsp+E0h] [rbp-48h]
  __int64 v28; // [rsp+E8h] [rbp-40h]
  __int64 v29; // [rsp+F0h] [rbp-38h] BYREF

  v18.m128i_i64[1] = (__int64)"extern";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v21 = 0;
  v18.m128i_i64[0] = 0;
  v23 = v23 & 0x80 | 0x40;
  LODWORD(v20) = 0;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  sub_1706C30(a2, (__int64)&v18);
  sub_1705410((__int64)&v21);
  v21 = 0;
  v18.m128i_i64[1] = (__int64)"static";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v18.m128i_i64[0] = 0;
  LODWORD(v20) = 0;
  v23 = v23 & 0x80 | 0x40;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  sub_1706C30(a2, (__int64)&v18);
  sub_1705410((__int64)&v21);
  v2 = *(_BYTE *)(a1 + 1);
  if ( (v2 & 0x10) == 0 )
  {
    if ( v2 >= 0 )
      return;
LABEL_5:
    v18.m128i_i64[1] = (__int64)"constinit";
    v21 = 0;
    v18.m128i_i64[0] = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v23 = v23 & 0x80 | 0x40;
    LODWORD(v20) = 0;
    v22 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    sub_1706C30(a2, (__int64)&v18);
    sub_1705410((__int64)&v21);
    return;
  }
  *((_QWORD *)&v21 + 1) = &v23;
  v3 = _mm_loadu_si128((const __m128i *)(a2 + 184));
  v22 = 0x400000000LL;
  v27 = &v29;
  v18 = v3;
  v28 = 0x200000000LL;
  si128 = 0u;
  v20 = 0;
  *(_QWORD *)&v21 = 0;
  sub_15A2F70((__int64)&v18, (__int64)"alignas");
  sub_15A3210((__int64)&v18, 7, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v18, (__int64)"expression");
  sub_15A3210((__int64)&v18, 8, (char *)&byte_22F0C30);
  v9 = (char *)sub_15A5CA0((__int64)&v18, 8, v4, v5, v6, v7);
  v12 = 0;
  v8 = 0;
  v10 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v14 = v14 & 0x80 | 0x40;
  v11 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  sub_1706C30(a2, (__int64)&v8);
  sub_1705410((__int64)&v12);
  v12 = 0;
  v9 = "constexpr";
  v10 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v8 = 0;
  v11 = 0;
  v14 = v14 & 0x80 | 0x40;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  sub_1706C30(a2, (__int64)&v8);
  sub_1705410((__int64)&v12);
  v12 = 0;
  v9 = "thread_local";
  v10 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v8 = 0;
  v11 = 0;
  v14 = v14 & 0x80 | 0x40;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  sub_1706C30(a2, (__int64)&v8);
  sub_1705410((__int64)&v12);
  sub_1704B40(&v18);
  if ( *(char *)(a1 + 1) < 0 )
    goto LABEL_5;
}
