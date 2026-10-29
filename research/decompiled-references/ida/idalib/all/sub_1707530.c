void __fastcall sub_1707530(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __m128i v12; // xmm1
  __int64 v13; // rax
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rax
  __m128i v20; // xmm1
  bool v21; // zf
  char *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i si128; // [rsp+0h] [rbp-138h] BYREF
  __int64 v28; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v29; // [rsp+18h] [rbp-120h]
  __m128i v30; // [rsp+20h] [rbp-118h]
  int v31; // [rsp+30h] [rbp-108h]
  __int128 v32; // [rsp+38h] [rbp-100h] BYREF
  __int64 v33; // [rsp+48h] [rbp-F0h]
  char v34; // [rsp+50h] [rbp-E8h]
  __int64 v35; // [rsp+58h] [rbp-E0h]
  __int64 v36; // [rsp+60h] [rbp-D8h]
  __int64 v37; // [rsp+68h] [rbp-D0h]
  __m128i v38; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+80h] [rbp-B8h]
  __int64 v40; // [rsp+88h] [rbp-B0h]
  __int64 v41; // [rsp+90h] [rbp-A8h]
  __int64 v42; // [rsp+98h] [rbp-A0h]
  void *v43; // [rsp+A0h] [rbp-98h]
  __int64 v44; // [rsp+A8h] [rbp-90h]
  _BYTE v45[64]; // [rsp+B0h] [rbp-88h] BYREF
  void *ptr; // [rsp+F0h] [rbp-48h]
  __int64 v47; // [rsp+F8h] [rbp-40h]
  _BYTE v48[56]; // [rsp+100h] [rbp-38h] BYREF

  v39 = 0;
  v38 = _mm_loadu_si128((const __m128i *)(a1 + 184));
  v43 = v45;
  v44 = 0x400000000LL;
  ptr = v48;
  v47 = 0x200000000LL;
  v3 = *(_QWORD *)(a1 + 176);
  v42 = 0;
  v4 = *(_QWORD *)(v3 + 656);
  v40 = 0;
  v41 = 0;
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 && (*(_BYTE *)(v5 + 8) & 2) != 0 )
  {
    v21 = a2 == 0;
    v22 = "@try";
    if ( v21 )
      v22 = "try";
    sub_15A2F70((__int64)&v38, (__int64)v22);
    sub_15A3210((__int64)&v38, 11, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v38, (__int64)"statements");
    sub_15A3210((__int64)&v38, 12, (char *)&byte_22F0C30);
    sub_15A2FD0((__int64)&v38, (__int64)"@catch");
    sub_15A3210((__int64)&v38, 7, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v38, (__int64)"parameter");
    sub_15A3210((__int64)&v38, 8, (char *)&byte_22F0C30);
    sub_15A3210((__int64)&v38, 11, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v38, (__int64)"statements");
    sub_15A3210((__int64)&v38, 12, (char *)&byte_22F0C30);
    sub_15A2FD0((__int64)&v38, (__int64)"@finally");
    sub_15A3210((__int64)&v38, 11, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v38, (__int64)"statements");
    sub_15A3210((__int64)&v38, 12, (char *)&byte_22F0C30);
    v29 = sub_15A5CA0((__int64)&v38, 12, v23, v24, v25, v26);
    v31 = 0;
    v32 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v28 = 0;
    v30 = si128;
    v33 = 0;
    v34 = v34 & 0x80 | 0x40;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_1706C30(a1, (__int64)&v28);
    sub_1705410((__int64)&v32);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  }
  v6 = "@throw";
  if ( !a2 )
    v6 = "throw";
  sub_15A2F70((__int64)&v38, (__int64)v6);
  sub_15A3210((__int64)&v38, 19, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v38, (__int64)"expression");
  v11 = sub_15A5CA0((__int64)&v38, (__int64)"expression", v7, v8, v9, v10);
  v12 = _mm_load_si128(&si128);
  v29 = v11;
  v30 = v12;
  v32 = 0;
  v28 = 0;
  v34 = v34 & 0x80 | 0x40;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  sub_1706C30(a1, (__int64)&v28);
  sub_1705410((__int64)&v32);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 656LL) + 8LL);
  if ( v13 && (*(_BYTE *)(v13 + 8) & 2) != 0 )
  {
    v14 = "@synchronized";
    if ( !a2 )
      v14 = "synchronized";
    sub_15A2F70((__int64)&v38, (__int64)v14);
    sub_15A3210((__int64)&v38, 19, (char *)&byte_22F0C30);
    sub_15A3210((__int64)&v38, 7, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v38, (__int64)"expression");
    sub_15A3210((__int64)&v38, 8, (char *)&byte_22F0C30);
    sub_15A3210((__int64)&v38, 11, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v38, (__int64)"statements");
    sub_15A3210((__int64)&v38, 12, (char *)&byte_22F0C30);
    v19 = sub_15A5CA0((__int64)&v38, 12, v15, v16, v17, v18);
    v20 = _mm_load_si128(&si128);
    v29 = v19;
    v28 = 0;
    v30 = v20;
    v32 = 0;
    v31 = 0;
    v33 = 0;
    v34 = v34 & 0x80 | 0x40;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_1706C30(a1, (__int64)&v28);
    sub_1705410((__int64)&v32);
  }
  if ( ptr != v48 )
    free(ptr);
  if ( v43 != v45 )
    free(v43);
}
