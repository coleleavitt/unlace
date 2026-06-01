void __fastcall sub_1706C60(__int64 a1, char a2)
{
  bool v3; // zf
  char *v4; // rsi
  __m128i v5; // xmm2
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  const char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v37; // [rsp+8h] [rbp-130h]
  __m128i si128; // [rsp+10h] [rbp-128h]
  int v39; // [rsp+20h] [rbp-118h]
  __int128 v40; // [rsp+28h] [rbp-110h] BYREF
  __int64 v41; // [rsp+38h] [rbp-100h]
  char v42; // [rsp+40h] [rbp-F8h]
  __int64 v43; // [rsp+48h] [rbp-F0h]
  __int64 v44; // [rsp+50h] [rbp-E8h]
  __int64 v45; // [rsp+58h] [rbp-E0h]
  __m128i v46; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+70h] [rbp-C8h]
  __int64 v48; // [rsp+78h] [rbp-C0h]
  __int64 v49; // [rsp+80h] [rbp-B8h]
  __int64 v50; // [rsp+88h] [rbp-B0h]
  _QWORD *v51; // [rsp+90h] [rbp-A8h]
  __int64 v52; // [rsp+98h] [rbp-A0h]
  _QWORD v53[10]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-48h] BYREF

  v3 = a2 == 0;
  v4 = "@class";
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  if ( v3 )
    v4 = "class";
  v47 = 0;
  v46 = v5;
  v51 = v53;
  v52 = 0x400000000LL;
  v53[8] = &v54;
  v53[9] = 0x200000000LL;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_15A2F70((__int64)&v46, (__int64)v4);
  sub_15A3210((__int64)&v46, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v46, (__int64)"name");
  v37 = sub_15A5CA0((__int64)&v46, (__int64)"name", v6, v7, v8, v9);
  v40 = 0;
  v36 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v42 = v42 & 0x80 | 0x40;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  sub_1706C30(a1, (__int64)&v36);
  sub_1705410((__int64)&v40);
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 656LL) + 8LL);
  if ( v10 && (*(_BYTE *)(v10 + 8) & 2) != 0 )
  {
    v21 = "@interface";
    if ( !a2 )
      v21 = "interface";
    sub_15A2F70((__int64)&v46, (__int64)v21);
    sub_15A3210((__int64)&v46, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v46, (__int64)"class");
    v37 = sub_15A5CA0((__int64)&v46, (__int64)"class", v22, v23, v24, v25);
    v40 = 0;
    v36 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v42 = v42 & 0x80 | 0x40;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    sub_1706C30(a1, (__int64)&v36);
    sub_1705410((__int64)&v40);
    v26 = "@protocol";
    if ( !a2 )
      v26 = "protocol";
    sub_15A2F70((__int64)&v46, (__int64)v26);
    sub_15A3210((__int64)&v46, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v46, (__int64)"protocol");
    v37 = sub_15A5CA0((__int64)&v46, (__int64)"protocol", v27, v28, v29, v30);
    v40 = 0;
    v36 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v42 = v42 & 0x80 | 0x40;
    v39 = 0;
    v41 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    sub_1706C30(a1, (__int64)&v36);
    sub_1705410((__int64)&v40);
    v31 = "@implementation";
    if ( !a2 )
      v31 = "implementation";
    sub_15A2F70((__int64)&v46, (__int64)v31);
    sub_15A3210((__int64)&v46, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v46, (__int64)"class");
    v37 = sub_15A5CA0((__int64)&v46, (__int64)"class", v32, v33, v34, v35);
    v36 = 0;
    v40 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v39 = 0;
    v41 = 0;
    v42 = v42 & 0x80 | 0x40;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    sub_1706C30(a1, (__int64)&v36);
    sub_1705410((__int64)&v40);
  }
  v11 = "@compatibility_alias";
  if ( !a2 )
    v11 = "compatibility_alias";
  sub_15A2F70((__int64)&v46, (__int64)v11);
  sub_15A3210((__int64)&v46, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v46, (__int64)"alias");
  sub_15A3210((__int64)&v46, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v46, (__int64)"class");
  v37 = sub_15A5CA0((__int64)&v46, (__int64)"class", v12, v13, v14, v15);
  v40 = 0;
  v36 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v42 = v42 & 0x80 | 0x40;
  v39 = 0;
  v41 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  sub_1706C30(a1, (__int64)&v36);
  sub_1705410((__int64)&v40);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 232LL) + 21LL) & 2) != 0 )
  {
    v16 = "@import";
    if ( !a2 )
      v16 = "import";
    sub_15A2F70((__int64)&v46, (__int64)v16);
    sub_15A3210((__int64)&v46, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v46, (__int64)"module");
    v37 = sub_15A5CA0((__int64)&v46, (__int64)"module", v17, v18, v19, v20);
    v36 = 0;
    v40 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v39 = 0;
    v41 = 0;
    v42 = v42 & 0x80 | 0x40;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    sub_1706C30(a1, (__int64)&v36);
    sub_1705410((__int64)&v40);
  }
  sub_1704B40(&v46);
}
