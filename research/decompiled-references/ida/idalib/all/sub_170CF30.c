void __fastcall sub_170CF30(__int64 *a1, __int64 a2, unsigned int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64); // rcx
  __int64 (__fastcall *v11)(__int64); // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rcx
  __m128i v16; // xmm2
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i v21; // xmm3
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // [rsp+0h] [rbp-350h]
  __int64 v28; // [rsp+8h] [rbp-348h] BYREF
  unsigned __int64 v29; // [rsp+10h] [rbp-340h]
  __m128i v30; // [rsp+18h] [rbp-338h]
  int v31; // [rsp+28h] [rbp-328h]
  __int128 v32; // [rsp+30h] [rbp-320h] BYREF
  __int64 v33; // [rsp+40h] [rbp-310h]
  char v34; // [rsp+48h] [rbp-308h]
  __int64 v35; // [rsp+50h] [rbp-300h]
  __int64 v36; // [rsp+58h] [rbp-2F8h]
  __int64 v37; // [rsp+60h] [rbp-2F0h]
  __m128i v38; // [rsp+68h] [rbp-2E8h] BYREF
  __m128i si128; // [rsp+78h] [rbp-2D8h]
  __int64 v40; // [rsp+88h] [rbp-2C8h]
  __int128 v41; // [rsp+90h] [rbp-2C0h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-2B0h]
  char v43; // [rsp+A8h] [rbp-2A8h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-2A0h]
  __int64 v45; // [rsp+B8h] [rbp-298h]
  __int64 v46; // [rsp+C0h] [rbp-290h]
  __int64 *v47; // [rsp+C8h] [rbp-288h]
  __int64 v48; // [rsp+D0h] [rbp-280h]
  int v49; // [rsp+D8h] [rbp-278h]
  char v50; // [rsp+DCh] [rbp-274h]
  __int64 v51; // [rsp+E0h] [rbp-270h] BYREF
  _BYTE *v52; // [rsp+E8h] [rbp-268h]
  __int64 v53; // [rsp+F0h] [rbp-260h]
  _BYTE v54[48]; // [rsp+F8h] [rbp-258h] BYREF
  __int64 v55; // [rsp+128h] [rbp-228h] BYREF
  __int64 v56; // [rsp+130h] [rbp-220h]
  __m128i v57[3]; // [rsp+1E0h] [rbp-170h] BYREF
  __int64 v58[9]; // [rsp+210h] [rbp-140h] BYREF
  int v59[62]; // [rsp+258h] [rbp-F8h] BYREF

  v6 = (_QWORD *)a1[1];
  if ( !v6 )
    return;
  v7 = *a3;
  v38.m128i_i8[4] = 0;
  v8 = v7 >> 7;
  v38.m128i_i32[0] = 0;
  v38.m128i_i64[1] = 0;
  si128 = 0u;
  v40 = 0;
  v47 = &v51;
  v9 = *v6;
  LOBYTE(v46) = 0;
  v10 = *(__int64 (__fastcall **)(__int64))(v9 + 48);
  v50 = 1;
  v48 = 8;
  v49 = 0;
  if ( v10 == sub_15A1860 )
  {
    v11 = *(__int64 (__fastcall **)(__int64))(v9 + 40);
    v12 = (__int64)(v6 + 3);
    if ( v11 == sub_15A1850 )
    {
LABEL_4:
      v13 = v6[6];
      goto LABEL_5;
    }
  }
  else
  {
    v12 = v10((__int64)v6);
    v6 = (_QWORD *)a1[1];
    v11 = *(__int64 (__fastcall **)(__int64))(*v6 + 40LL);
    if ( v11 == sub_15A1850 )
      goto LABEL_4;
  }
  v27 = v12;
  v26 = v11((__int64)v6);
  v12 = v27;
  v13 = v26;
LABEL_5:
  sub_16FF270((__int64)&v55, *a1, v13, v12, (unsigned int *)&v38, a6, 0);
  sub_17038E0((__int64)&v38);
  sub_16FF160((__int64)v58, (std::__detail::_List_node_base *)v58);
  if ( (v8 & 1) == 0 && !sub_16FEC20(v8, 1) )
  {
    v38.m128i_i64[1] = (__int64)"readonly";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( (v8 & 4) == 0 && !sub_16FEC20(v8, 4) )
  {
    v38.m128i_i64[1] = (__int64)"assign";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( (v8 & 0x800) == 0 && !sub_16FEC20(v8, 2048) )
  {
    v38.m128i_i64[1] = (__int64)"unsafe_unretained";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( (v8 & 8) == 0 && !sub_16FEC20(v8, 8) )
  {
    v38.m128i_i64[1] = (__int64)"readwrite";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( (v8 & 0x10) == 0 && !sub_16FEC20(v8, 16) )
  {
    v38.m128i_i64[1] = (__int64)"retain";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( (v8 & 0x400) == 0 && !sub_16FEC20(v8, 1024) )
  {
    v38.m128i_i64[1] = (__int64)"strong";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( (v8 & 0x20) == 0 && !sub_16FEC20(v8, 32) )
  {
    v38.m128i_i64[1] = (__int64)"copy";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( (v8 & 0x40) == 0 && !sub_16FEC20(v8, 64) )
  {
    v38.m128i_i64[1] = (__int64)"nonatomic";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( (v8 & 0x100) == 0 && !sub_16FEC20(v8, 256) )
  {
    v38.m128i_i64[1] = (__int64)"atomic";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( ((*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 0x10) != 0 || *(_BYTE *)(sub_168B6E0((__int64)a1) + 208) >> 6)
    && (v8 & 0x200) == 0
    && !sub_16FEC20(v8, 512) )
  {
    v38.m128i_i64[1] = (__int64)"weak";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v41 = 0;
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  if ( (v8 & 0x80u) == 0 && !sub_16FEC20(v8, 128) )
  {
    v16 = _mm_loadu_si128(v57);
    *((_QWORD *)&v41 + 1) = &v43;
    v42 = 0x400000000LL;
    v52 = v54;
    v38 = v16;
    v53 = 0x200000000LL;
    si128 = 0u;
    v40 = 0;
    *(_QWORD *)&v41 = 0;
    sub_15A2F70((__int64)&v38, (__int64)"setter");
    sub_15A2FD0((__int64)&v38, (__int64)"=");
    sub_15A3090((__int64)&v38, (__int64)"method");
    v29 = sub_15A5CA0((__int64)&v38, (__int64)"method", v17, v18, v19, v20);
    v30 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v32 = 0;
    v28 = 0;
    v34 = v34 & 0x80 | 0x40;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v28);
    sub_1705410((__int64)&v32);
    sub_1704B40(&v38);
  }
  if ( (v8 & 2) == 0 && !sub_16FEC20(v8, 2) )
  {
    v21 = _mm_loadu_si128(v57);
    *((_QWORD *)&v41 + 1) = &v43;
    v42 = 0x400000000LL;
    v52 = v54;
    v38 = v21;
    v53 = 0x200000000LL;
    si128 = 0u;
    v40 = 0;
    *(_QWORD *)&v41 = 0;
    sub_15A2F70((__int64)&v38, (__int64)"getter");
    sub_15A2FD0((__int64)&v38, (__int64)"=");
    sub_15A3090((__int64)&v38, (__int64)"method");
    v29 = sub_15A5CA0((__int64)&v38, (__int64)"method", v22, v23, v24, v25);
    v30 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
    v32 = 0;
    v28 = 0;
    v34 = v34 & 0x80 | 0x40;
    v31 = 0;
    v33 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v28);
    sub_1705410((__int64)&v32);
    sub_1704B40(&v38);
  }
  if ( (v8 & 0x1000) == 0 && !sub_16FEC20(v8, 4096) )
  {
    v41 = 0;
    v38.m128i_i64[1] = (__int64)"nonnull";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v43 = v43 & 0x80 | 0x40;
    v42 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
    v41 = 0;
    v38.m128i_i64[1] = (__int64)"nullable";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v43 = v43 & 0x80 | 0x40;
    v42 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
    v41 = 0;
    v38.m128i_i64[1] = (__int64)"null_unspecified";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v38.m128i_i64[0] = 0;
    LODWORD(v40) = 0;
    v43 = v43 & 0x80 | 0x40;
    v42 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
    v38.m128i_i64[0] = 0;
    v38.m128i_i64[1] = (__int64)"null_resettable";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    LODWORD(v40) = 0;
    v41 = 0;
    v42 = 0;
    v43 = v43 & 0x80 | 0x40;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    sub_1706C30((__int64)&v55, (__int64)&v38);
    sub_1705410((__int64)&v41);
  }
  sub_16FF8C0((__int64)v58, v58[1]);
  v14 = a1[1];
  v15 = 0;
  if ( v55 != v56 )
    v15 = v55;
  if ( v14 )
    sub_1700D50(*a1, v14, v59, v15, -1431655765 * ((v56 - v55) >> 5));
  sub_1700A70((__int64)&v55);
}
