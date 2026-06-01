void __fastcall sub_17115E0(__int64 a1, __int64 a2, char a3)
{
  char *v3; // rax
  char *v7; // rdi
  __m128i v8; // xmm2
  char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-130h]
  __m128i v21; // [rsp+10h] [rbp-128h]
  int v22; // [rsp+20h] [rbp-118h]
  __int128 v23; // [rsp+28h] [rbp-110h] BYREF
  __int64 v24; // [rsp+38h] [rbp-100h]
  char v25; // [rsp+40h] [rbp-F8h]
  __int64 v26; // [rsp+48h] [rbp-F0h]
  __int64 v27; // [rsp+50h] [rbp-E8h]
  __int64 v28; // [rsp+58h] [rbp-E0h]
  __m128i v29; // [rsp+60h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+70h] [rbp-C8h]
  __int64 v31; // [rsp+80h] [rbp-B8h]
  void *v32[2]; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+98h] [rbp-A0h]
  char v34; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-90h]
  __int64 v36; // [rsp+B0h] [rbp-88h]
  __int64 v37; // [rsp+B8h] [rbp-80h]
  void *ptr; // [rsp+E0h] [rbp-58h]
  __int64 v39; // [rsp+E8h] [rbp-50h]
  _BYTE v40[72]; // [rsp+F0h] [rbp-48h] BYREF

  v3 = "@end";
  v7 = *(char **)(a2 + 8);
  if ( !a3 )
    v3 = "end";
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v29.m128i_i64[1] = (__int64)v3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  *(_OWORD *)v32 = 0;
  v33 = 0;
  v34 = v34 & 0x80 | 0x40;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  if ( v7 == *(char **)(a2 + 16) )
  {
    sub_1706840(a2, v7, (__int64)&v29);
  }
  else
  {
    sub_17048E0((__int64)v7, (__int64)&v29);
    *(_QWORD *)(a2 + 8) += 96LL;
  }
  sub_1705410((__int64)v32);
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 184));
  si128 = 0u;
  v32[1] = &v34;
  v33 = 0x400000000LL;
  v29 = v8;
  v31 = 0;
  v32[0] = nullptr;
  ptr = v40;
  v39 = 0x200000000LL;
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    v9 = "@dynamic";
    if ( !a3 )
      v9 = "dynamic";
    sub_15A2F70((__int64)&v29, (__int64)v9);
    sub_15A3210((__int64)&v29, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v29, (__int64)"property");
    v20 = sub_15A5CA0((__int64)&v29, (__int64)"property", v10, v11, v12, v13);
    v23 = 0;
    v19 = 0;
    v21 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v25 = v25 & 0x80 | 0x40;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    sub_1706C30(a2, (__int64)&v19);
    sub_1705410((__int64)&v23);
    v14 = "@synthesize";
    if ( !a3 )
      v14 = "synthesize";
    sub_15A2F70((__int64)&v29, (__int64)v14);
    sub_15A3210((__int64)&v29, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v29, (__int64)"property");
    v20 = sub_15A5CA0((__int64)&v29, (__int64)"property", v15, v16, v17, v18);
    v23 = 0;
    v19 = 0;
    v21 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v25 = v25 & 0x80 | 0x40;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    sub_1706C30(a2, (__int64)&v19);
    sub_1705410((__int64)&v23);
    if ( ptr != v40 )
      free(ptr);
    if ( v32[1] != &v34 )
      free(v32[1]);
  }
}
