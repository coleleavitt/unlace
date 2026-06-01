void __fastcall sub_1708900(_BYTE *a1, __int64 a2)
{
  __m128i v2; // xmm3
  char v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp+0h] [rbp-128h] BYREF
  char *v21; // [rsp+8h] [rbp-120h]
  _BYTE v22[20]; // [rsp+10h] [rbp-118h]
  __int128 v23; // [rsp+28h] [rbp-100h] BYREF
  __int64 v24; // [rsp+38h] [rbp-F0h]
  char v25; // [rsp+40h] [rbp-E8h]
  __int64 v26; // [rsp+48h] [rbp-E0h]
  __int64 v27; // [rsp+50h] [rbp-D8h]
  __int64 v28; // [rsp+58h] [rbp-D0h]
  __m128i v29; // [rsp+60h] [rbp-C8h] BYREF
  __m128i si128; // [rsp+70h] [rbp-B8h]
  __int64 v31; // [rsp+80h] [rbp-A8h]
  __int128 v32; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+98h] [rbp-90h]
  char v34; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-80h]
  __int64 v36; // [rsp+B0h] [rbp-78h]
  __int64 v37; // [rsp+B8h] [rbp-70h]
  __int64 *v38; // [rsp+E0h] [rbp-48h]
  __int64 v39; // [rsp+E8h] [rbp-40h]
  __int64 v40; // [rsp+F0h] [rbp-38h] BYREF

  v29.m128i_i64[1] = (__int64)"short";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v32 = 0;
  v29.m128i_i64[0] = 0;
  v34 = v34 & 0x80 | 0x40;
  LODWORD(v31) = 0;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"long";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"signed";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"unsigned";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"void";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"char";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"int";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"float";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"double";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"enum";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"struct";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"union";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v32 = 0;
  v29.m128i_i64[1] = (__int64)"const";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v29.m128i_i64[0] = 0;
  LODWORD(v31) = 0;
  v34 = v34 & 0x80 | 0x40;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  v29.m128i_i64[0] = 0;
  v29.m128i_i64[1] = (__int64)"volatile";
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  LODWORD(v31) = 0;
  v32 = 0;
  v33 = 0;
  v34 = v34 & 0x80 | 0x40;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a2, (__int64)&v29);
  sub_1705410((__int64)&v32);
  if ( (*a1 & 1) != 0 )
  {
    v29.m128i_i64[1] = (__int64)"_Complex";
    v32 = 0;
    v29.m128i_i64[0] = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
    LODWORD(v31) = 0;
    v33 = 0;
    v34 = v34 & 0x80 | 0x40;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_1706C30(a2, (__int64)&v29);
    sub_1705410((__int64)&v32);
    if ( (*a1 & 0x10) == 0 )
    {
      v29.m128i_i64[1] = (__int64)"_Imaginary";
      v32 = 0;
      v29.m128i_i64[0] = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
      LODWORD(v31) = 0;
      v33 = 0;
      v34 = v34 & 0x80 | 0x40;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      sub_1706C30(a2, (__int64)&v29);
      sub_1705410((__int64)&v32);
    }
    v32 = 0;
    v29.m128i_i64[1] = (__int64)"_Bool";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
    v29.m128i_i64[0] = 0;
    LODWORD(v31) = 0;
    v34 = v34 & 0x80 | 0x40;
    v33 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_1706C30(a2, (__int64)&v29);
    sub_1705410((__int64)&v32);
    v29.m128i_i64[0] = 0;
    v29.m128i_i64[1] = (__int64)"restrict";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
    LODWORD(v31) = 0;
    v32 = 0;
    v33 = 0;
    v34 = v34 & 0x80 | 0x40;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_1706C30(a2, (__int64)&v29);
    sub_1705410((__int64)&v32);
  }
  v2 = _mm_loadu_si128((const __m128i *)(a2 + 184));
  si128 = 0u;
  *((_QWORD *)&v32 + 1) = &v34;
  v33 = 0x400000000LL;
  v38 = &v40;
  v29 = v2;
  v31 = 0;
  *(_QWORD *)&v32 = 0;
  v39 = 0x200000000LL;
  if ( (a1[1] & 8) == 0 )
  {
    v21 = "__auto_type";
    v20 = 0;
    *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
    v23 = 0;
    *(_DWORD *)&v22[16] = 0;
    v24 = 0;
    v25 = v25 & 0x80 | 0x40;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    goto LABEL_8;
  }
  v3 = a1[2];
  v23 = 0;
  v21 = "bool";
  v20 = 0;
  *(_QWORD *)&v22[12] = 72;
  *(_DWORD *)v22 = ((v3 & 4) != 0) + 50;
  *(_QWORD *)&v22[4] = 0x100000000LL;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v25 = v25 & 0x80 | 0x40;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  v23 = 0;
  v21 = "class";
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v20 = 0;
  *(_DWORD *)&v22[16] = 0;
  v25 = v25 & 0x80 | 0x40;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  v23 = 0;
  v21 = "wchar_t";
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v20 = 0;
  *(_DWORD *)&v22[16] = 0;
  v25 = v25 & 0x80 | 0x40;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  sub_15A2F70((__int64)&v29, (__int64)"typename");
  sub_15A3210((__int64)&v29, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v29, (__int64)"name");
  v21 = (char *)sub_15A5CA0((__int64)&v29, (__int64)"name", v4, v5, v6, v7);
  v20 = 0;
  v23 = 0;
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  *(_DWORD *)&v22[16] = 0;
  v24 = 0;
  v25 = v25 & 0x80 | 0x40;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  if ( (a1[1] & 0x10) == 0 )
  {
    if ( (*(_DWORD *)a1 & 0x20008000) == 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
  v21 = "auto";
  v23 = 0;
  v20 = 0;
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v25 = v25 & 0x80 | 0x40;
  *(_DWORD *)&v22[16] = 0;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  v23 = 0;
  v21 = (char *)"char16_t";
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v20 = 0;
  *(_DWORD *)&v22[16] = 0;
  v25 = v25 & 0x80 | 0x40;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  v23 = 0;
  v21 = (char *)"char32_t";
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v20 = 0;
  *(_DWORD *)&v22[16] = 0;
  v25 = v25 & 0x80 | 0x40;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  sub_15A2F70((__int64)&v29, (__int64)"decltype");
  sub_15A3210((__int64)&v29, 7, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v29, (__int64)"expression");
  sub_15A3210((__int64)&v29, 8, (char *)&byte_22F0C30);
  v21 = (char *)sub_15A5CA0((__int64)&v29, 8, v16, v17, v18, v19);
  v20 = 0;
  v23 = 0;
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  *(_DWORD *)&v22[16] = 0;
  v24 = 0;
  v25 = v25 & 0x80 | 0x40;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  if ( (*(_DWORD *)a1 & 0x20008000) != 0 )
  {
LABEL_14:
    v20 = 0;
    v21 = "char8_t";
    *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
    v23 = 0;
    *(_DWORD *)&v22[16] = 0;
    v24 = 0;
    v25 = v25 & 0x80 | 0x40;
    v26 = 0;
    v27 = 0;
    v28 = 0;
LABEL_8:
    sub_1706C30(a2, (__int64)&v20);
    sub_1705410((__int64)&v23);
    if ( (a1[4] & 8) == 0 )
      goto LABEL_6;
LABEL_9:
    sub_15A2F70((__int64)&v29, (__int64)"typeof");
    sub_15A3210((__int64)&v29, 19, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v29, (__int64)"expression");
    v21 = (char *)sub_15A5CA0((__int64)&v29, (__int64)"expression", v8, v9, v10, v11);
    v23 = 0;
    v20 = 0;
    *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v25 = v25 & 0x80 | 0x40;
    *(_DWORD *)&v22[16] = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    sub_1706C30(a2, (__int64)&v20);
    sub_1705410((__int64)&v23);
    sub_15A2F70((__int64)&v29, (__int64)"typeof");
    sub_15A3210((__int64)&v29, 7, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v29, (__int64)"type");
    sub_15A3210((__int64)&v29, 8, (char *)&byte_22F0C30);
    v21 = (char *)sub_15A5CA0((__int64)&v29, 8, v12, v13, v14, v15);
    v20 = 0;
    v23 = 0;
    *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    *(_DWORD *)&v22[16] = 0;
    v24 = 0;
    v25 = v25 & 0x80 | 0x40;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    sub_1706C30(a2, (__int64)&v20);
    sub_1705410((__int64)&v23);
    goto LABEL_6;
  }
LABEL_5:
  if ( (a1[4] & 8) != 0 )
    goto LABEL_9;
LABEL_6:
  v23 = 0;
  v21 = "_Nonnull";
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v20 = 0;
  *(_DWORD *)&v22[16] = 0;
  v25 = v25 & 0x80 | 0x40;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  v23 = 0;
  v21 = "_Null_unspecified";
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v20 = 0;
  *(_DWORD *)&v22[16] = 0;
  v25 = v25 & 0x80 | 0x40;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  v23 = 0;
  v21 = "_Nullable";
  *(__m128i *)v22 = _mm_load_si128((const __m128i *)&xmmword_23AA980);
  v20 = 0;
  *(_DWORD *)&v22[16] = 0;
  v25 = v25 & 0x80 | 0x40;
  v24 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  sub_1706C30(a2, (__int64)&v20);
  sub_1705410((__int64)&v23);
  sub_1704B40(&v29);
}
