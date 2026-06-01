void __fastcall sub_1707E50(__int64 a1, char a2)
{
  char *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const char *v11; // rsi
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
  char *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char *v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  char *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // [rsp+0h] [rbp-138h] BYREF
  unsigned __int64 v42; // [rsp+8h] [rbp-130h]
  __m128i si128; // [rsp+10h] [rbp-128h]
  int v44; // [rsp+20h] [rbp-118h]
  __int128 v45; // [rsp+28h] [rbp-110h] BYREF
  __int64 v46; // [rsp+38h] [rbp-100h]
  char v47; // [rsp+40h] [rbp-F8h]
  __int64 v48; // [rsp+48h] [rbp-F0h]
  __int64 v49; // [rsp+50h] [rbp-E8h]
  __int64 v50; // [rsp+58h] [rbp-E0h]
  __m128i v51; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+70h] [rbp-C8h]
  __int64 v53; // [rsp+78h] [rbp-C0h]
  __int64 v54; // [rsp+80h] [rbp-B8h]
  __int64 v55; // [rsp+88h] [rbp-B0h]
  _QWORD *v56; // [rsp+90h] [rbp-A8h]
  __int64 v57; // [rsp+98h] [rbp-A0h]
  _QWORD v58[10]; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v59; // [rsp+F0h] [rbp-48h] BYREF

  v3 = "const char[]";
  v52 = 0;
  v51 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  v56 = v58;
  v57 = 0x400000000LL;
  v58[8] = &v59;
  v58[9] = 0x200000000LL;
  v4 = *(_QWORD *)(a1 + 176);
  v53 = 0;
  v5 = *(_QWORD *)(v4 + 232);
  v54 = 0;
  v55 = 0;
  if ( (*(_BYTE *)(v5 + 1) & 8) == 0 && *(char *)(v5 + 12) >= 0 )
    v3 = "char[]";
  sub_15A3150((__int64)&v51, (__int64)v3);
  v6 = "@encode";
  if ( !a2 )
    v6 = "encode";
  sub_15A2F70((__int64)&v51, (__int64)v6);
  sub_15A3210((__int64)&v51, 7, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v51, (__int64)"type-name");
  sub_15A3210((__int64)&v51, 8, (char *)&byte_22F0C30);
  v42 = sub_15A5CA0((__int64)&v51, 8, v7, v8, v9, v10);
  v45 = 0;
  v41 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v47 = v47 & 0x80 | 0x40;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_1706C30(a1, (__int64)&v41);
  sub_1705410((__int64)&v45);
  sub_15A3150((__int64)&v51, (__int64)"Protocol *");
  v11 = "@protocol";
  if ( !a2 )
    v11 = "protocol";
  sub_15A2F70((__int64)&v51, (__int64)v11);
  sub_15A3210((__int64)&v51, 7, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v51, (__int64)"protocol-name");
  sub_15A3210((__int64)&v51, 8, (char *)&byte_22F0C30);
  v42 = sub_15A5CA0((__int64)&v51, 8, v12, v13, v14, v15);
  v45 = 0;
  v41 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v47 = v47 & 0x80 | 0x40;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_1706C30(a1, (__int64)&v41);
  sub_1705410((__int64)&v45);
  sub_15A3150((__int64)&v51, (__int64)"SEL");
  v16 = "@selector";
  if ( !a2 )
    v16 = "selector";
  sub_15A2F70((__int64)&v51, (__int64)v16);
  sub_15A3210((__int64)&v51, 7, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v51, (__int64)"selector");
  sub_15A3210((__int64)&v51, 8, (char *)&byte_22F0C30);
  v42 = sub_15A5CA0((__int64)&v51, 8, v17, v18, v19, v20);
  v45 = 0;
  v41 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v47 = v47 & 0x80 | 0x40;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_1706C30(a1, (__int64)&v41);
  sub_1705410((__int64)&v45);
  sub_15A3150((__int64)&v51, (__int64)"NSString *");
  v21 = "@\"";
  if ( !a2 )
    v21 = "\"";
  sub_15A2F70((__int64)&v51, (__int64)v21);
  sub_15A3090((__int64)&v51, (__int64)"string");
  sub_15A2FD0((__int64)&v51, (__int64)"\"");
  v42 = sub_15A5CA0((__int64)&v51, (__int64)"\"", v22, v23, v24, v25);
  v45 = 0;
  v41 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v47 = v47 & 0x80 | 0x40;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_1706C30(a1, (__int64)&v41);
  sub_1705410((__int64)&v45);
  sub_15A3150((__int64)&v51, (__int64)"NSArray *");
  v26 = "@[";
  if ( !a2 )
    v26 = "[";
  sub_15A2F70((__int64)&v51, (__int64)v26);
  sub_15A3090((__int64)&v51, (__int64)"objects, ...");
  sub_15A3210((__int64)&v51, 10, (char *)&byte_22F0C30);
  v42 = sub_15A5CA0((__int64)&v51, 10, v27, v28, v29, v30);
  v45 = 0;
  v41 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v47 = v47 & 0x80 | 0x40;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_1706C30(a1, (__int64)&v41);
  sub_1705410((__int64)&v45);
  sub_15A3150((__int64)&v51, (__int64)"NSDictionary *");
  v31 = "@{";
  if ( !a2 )
    v31 = "{";
  sub_15A2F70((__int64)&v51, (__int64)v31);
  sub_15A3090((__int64)&v51, (__int64)"key");
  sub_15A3210((__int64)&v51, 16, (char *)&byte_22F0C30);
  sub_15A3210((__int64)&v51, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v51, (__int64)"object, ...");
  sub_15A3210((__int64)&v51, 12, (char *)&byte_22F0C30);
  v42 = sub_15A5CA0((__int64)&v51, 12, v32, v33, v34, v35);
  v45 = 0;
  v41 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v47 = v47 & 0x80 | 0x40;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_1706C30(a1, (__int64)&v41);
  sub_1705410((__int64)&v45);
  sub_15A3150((__int64)&v51, (__int64)"id");
  v36 = "@(";
  if ( !a2 )
    v36 = "(";
  sub_15A2F70((__int64)&v51, (__int64)v36);
  sub_15A3090((__int64)&v51, (__int64)"expression");
  sub_15A3210((__int64)&v51, 8, (char *)&byte_22F0C30);
  v42 = sub_15A5CA0((__int64)&v51, 8, v37, v38, v39, v40);
  v45 = 0;
  v41 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v47 = v47 & 0x80 | 0x40;
  v44 = 0;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_1706C30(a1, (__int64)&v41);
  sub_1705410((__int64)&v45);
  sub_1704B40(&v51);
}
