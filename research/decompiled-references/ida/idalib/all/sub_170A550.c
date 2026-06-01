void __fastcall sub_170A550(__int64 *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __m128i v13; // xmm1
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __m128i si128; // xmm0
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rax
  __int64 v32; // [rsp+8h] [rbp-340h]
  __int64 v33; // [rsp+10h] [rbp-338h] BYREF
  char *v34; // [rsp+18h] [rbp-330h]
  __m128i v35; // [rsp+20h] [rbp-328h]
  int v36; // [rsp+30h] [rbp-318h]
  __int128 v37; // [rsp+38h] [rbp-310h] BYREF
  __int64 v38; // [rsp+48h] [rbp-300h]
  char v39; // [rsp+50h] [rbp-2F8h]
  __int64 v40; // [rsp+58h] [rbp-2F0h]
  __int64 v41; // [rsp+60h] [rbp-2E8h]
  __int64 v42; // [rsp+68h] [rbp-2E0h]
  __m128i v43; // [rsp+70h] [rbp-2D8h] BYREF
  __int64 v44; // [rsp+80h] [rbp-2C8h]
  __int64 v45; // [rsp+88h] [rbp-2C0h]
  __int64 v46; // [rsp+90h] [rbp-2B8h]
  __int64 v47; // [rsp+98h] [rbp-2B0h]
  _BYTE *v48; // [rsp+A0h] [rbp-2A8h]
  __int64 v49; // [rsp+A8h] [rbp-2A0h]
  _BYTE v50[32]; // [rsp+B0h] [rbp-298h] BYREF
  _QWORD *v51; // [rsp+D0h] [rbp-278h]
  __int64 v52; // [rsp+D8h] [rbp-270h]
  int v53; // [rsp+E0h] [rbp-268h]
  char v54; // [rsp+E4h] [rbp-264h]
  _QWORD v55[3]; // [rsp+E8h] [rbp-260h] BYREF
  __int64 v56; // [rsp+100h] [rbp-248h] BYREF
  __int64 v57; // [rsp+130h] [rbp-218h] BYREF
  __int64 v58; // [rsp+138h] [rbp-210h]
  __int64 v59; // [rsp+1E0h] [rbp-168h]
  __m128i v60[7]; // [rsp+1E8h] [rbp-160h] BYREF
  int v61[58]; // [rsp+260h] [rbp-E8h] BYREF

  v7 = (__int64 *)a1[1];
  v43.m128i_i8[4] = 0;
  v43.m128i_i32[0] = 0;
  v43.m128i_i64[1] = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v51 = v55;
  v8 = *v7;
  v50[24] = 0;
  v9 = *(__int64 (**)(void))(v8 + 48);
  v54 = 1;
  v52 = 8;
  v53 = 0;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = (__int64)(v7 + 3);
  }
  else
  {
    v26 = v9();
    v7 = (__int64 *)a1[1];
    v10 = v26;
    v8 = *v7;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v7[6];
  }
  else
  {
    v32 = v10;
    v25 = v11();
    v10 = v32;
    v12 = v25;
  }
  sub_16FF270((__int64)&v57, *a1, v12, v10, (unsigned int *)&v43, a6, 0);
  sub_17038E0((__int64)&v43);
  v13 = _mm_loadu_si128(v60);
  v48 = v50;
  v49 = 0x400000000LL;
  v55[1] = &v56;
  v43 = v13;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v55[2] = 0x200000000LL;
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 0x40) == 0 || a2 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 2) & 1) == 0 )
      goto LABEL_8;
    goto LABEL_13;
  }
  v18 = *(_QWORD *)(*(_QWORD *)(v59 + 656) + 8LL);
  if ( v18 && (*(_BYTE *)(v18 + 8) & 2) != 0 )
  {
    sub_15A2F70((__int64)&v43, (__int64)"constexpr");
    sub_15A3210((__int64)&v43, 19, (char *)&byte_22F0C30);
    sub_15A3210((__int64)&v43, 7, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v43, (__int64)"condition");
    sub_15A3210((__int64)&v43, 8, (char *)&byte_22F0C30);
    sub_15A3210((__int64)&v43, 19, (char *)&byte_22F0C30);
    sub_15A3210((__int64)&v43, 11, (char *)&byte_22F0C30);
    sub_15A3210((__int64)&v43, 20, (char *)&byte_22F0C30);
    sub_15A3090((__int64)&v43, (__int64)"statements");
    sub_15A3210((__int64)&v43, 20, (char *)&byte_22F0C30);
    sub_15A3210((__int64)&v43, 12, (char *)&byte_22F0C30);
    v23 = sub_15A5CA0((__int64)&v43, 12, v19, v20, v21, v22);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v33 = 0;
    v34 = (char *)v23;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v33 = 0;
    v34 = "constexpr";
  }
  v35 = si128;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = v39 & 0x80 | 0x40;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  sub_1706C30((__int64)&v57, (__int64)&v33);
  sub_1705410((__int64)&v37);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 2) & 1) != 0 )
  {
LABEL_13:
    v16 = *(_QWORD *)(*(_QWORD *)(v59 + 656) + 8LL);
    if ( v16 && (*(_BYTE *)(v16 + 8) & 2) != 0 )
    {
      sub_15A2F70((__int64)&v43, (__int64)"consteval");
      sub_15A3210((__int64)&v43, 19, (char *)&byte_22F0C30);
      sub_15A3210((__int64)&v43, 11, (char *)&byte_22F0C30);
      sub_15A3210((__int64)&v43, 20, (char *)&byte_22F0C30);
      sub_15A3090((__int64)&v43, (__int64)"statements");
      sub_15A3210((__int64)&v43, 20, (char *)&byte_22F0C30);
      sub_15A3210((__int64)&v43, 12, (char *)&byte_22F0C30);
      v31 = sub_15A5CA0((__int64)&v43, 12, v27, v28, v29, v30);
      v17 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
      v33 = 0;
      v34 = (char *)v31;
    }
    else
    {
      v17 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
      v33 = 0;
      v34 = "consteval";
    }
    v35 = v17;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = v39 & 0x80 | 0x40;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    sub_1706C30((__int64)&v57, (__int64)&v33);
    sub_1705410((__int64)&v37);
  }
LABEL_8:
  v14 = a1[1];
  v15 = 0;
  if ( v57 != v58 )
    v15 = v57;
  if ( v14 )
    sub_1700D50(*a1, v14, v61, v15, -1431655765 * ((v58 - v57) >> 5));
  sub_1704B40(&v43);
  sub_1700A70((__int64)&v57);
}
