void __fastcall sub_172E410(__int64 *a1, __int64 a2, _BYTE *a3, char a4, __int64 a5, __int64 a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  __int64 v14; // rdx
  char v15; // cl
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  char v20; // r9
  __int64 v21; // rsi
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned int v25; // r8d
  __m128i v26; // xmm1
  __m128i v27; // xmm1
  _QWORD *v28; // r15
  size_t v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __m128i v34; // xmm7
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __m128i v39; // xmm2
  __m128i v40; // xmm2
  __m128i v41; // xmm3
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm5
  __m128i v45; // xmm7
  __m128i si128; // [rsp+0h] [rbp-368h] BYREF
  __int128 *v47; // [rsp+10h] [rbp-358h]
  __int128 *v48; // [rsp+18h] [rbp-350h]
  __int128 v49; // [rsp+20h] [rbp-348h] BYREF
  __m128i v50; // [rsp+30h] [rbp-338h]
  int v51; // [rsp+40h] [rbp-328h]
  __int128 v52; // [rsp+48h] [rbp-320h] BYREF
  __int64 v53; // [rsp+58h] [rbp-310h]
  char v54; // [rsp+60h] [rbp-308h]
  __int64 v55; // [rsp+68h] [rbp-300h]
  __int64 v56; // [rsp+70h] [rbp-2F8h]
  __int64 v57; // [rsp+78h] [rbp-2F0h]
  __m128i v58; // [rsp+80h] [rbp-2E8h] BYREF
  __m128i v59; // [rsp+90h] [rbp-2D8h]
  __int64 v60; // [rsp+A0h] [rbp-2C8h]
  __int128 v61; // [rsp+A8h] [rbp-2C0h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-2B0h]
  char v63; // [rsp+C0h] [rbp-2A8h] BYREF
  __int64 v64; // [rsp+C8h] [rbp-2A0h]
  __int64 v65; // [rsp+D0h] [rbp-298h]
  __int64 v66; // [rsp+D8h] [rbp-290h]
  _QWORD *v67; // [rsp+E0h] [rbp-288h]
  __int64 v68; // [rsp+E8h] [rbp-280h]
  int v69; // [rsp+F0h] [rbp-278h]
  char v70; // [rsp+F4h] [rbp-274h]
  _QWORD v71[3]; // [rsp+F8h] [rbp-270h] BYREF
  __int64 v72; // [rsp+110h] [rbp-258h] BYREF
  __int64 v73; // [rsp+140h] [rbp-228h] BYREF
  __int64 v74; // [rsp+148h] [rbp-220h]
  __m128i v75; // [rsp+1F8h] [rbp-170h] BYREF
  __int64 (__fastcall *v76)(__int64, __int64); // [rsp+208h] [rbp-160h]
  __int64 v77; // [rsp+210h] [rbp-158h]
  __int64 v78[9]; // [rsp+228h] [rbp-140h] BYREF
  int v79[62]; // [rsp+270h] [rbp-F8h] BYREF

  v9 = (__int64 *)a1[1];
  v58.m128i_i32[0] = 18;
  v58.m128i_i8[4] = 0;
  v58.m128i_i64[1] = 0;
  v59 = 0u;
  v60 = 0;
  v67 = v71;
  v10 = *v9;
  LOBYTE(v66) = 0;
  v11 = *(__int64 (**)(void))(v10 + 48);
  v70 = 1;
  v68 = 8;
  v69 = 0;
  if ( (char *)v11 == (char *)sub_15A1860 )
  {
    v12 = (__int64)(v9 + 3);
  }
  else
  {
    v43 = v11();
    v9 = (__int64 *)a1[1];
    v12 = v43;
    v10 = *v9;
  }
  v13 = *(__int64 (**)(void))(v10 + 40);
  if ( (char *)v13 == (char *)sub_15A1850 )
  {
    v14 = v9[6];
  }
  else
  {
    si128.m128i_i64[0] = v12;
    v42 = v13();
    v12 = si128.m128i_i64[0];
    v14 = v42;
  }
  sub_16FF270((__int64)&v73, *a1, v14, v12, (unsigned int *)&v58, a6, 0);
  sub_17038E0((__int64)&v58);
  sub_16FF160((__int64)v78, (std::__detail::_List_node_base *)v78);
  v15 = 0;
  v16 = *a3 & 0x7F;
  if ( (*a3 & 3) == 0 )
  {
    v58.m128i_i64[1] = (__int64)"in";
    v61 = 0;
    v58.m128i_i64[0] = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v59 = si128;
    v63 = v63 & 0x80 | 0x40;
    LODWORD(v60) = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    sub_1706C30((__int64)&v73, (__int64)&v58);
    v47 = &v61;
    sub_1705410((__int64)&v61);
    v41 = _mm_load_si128(&si128);
    v58.m128i_i64[0] = 0;
    v58.m128i_i64[1] = (__int64)"inout";
    v59 = v41;
    v61 = 0;
    LODWORD(v60) = 0;
    v63 = v63 & 0x80 | 0x40;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    sub_1706C30((__int64)&v73, (__int64)&v58);
    sub_1705410((__int64)v47);
    v15 = 1;
    v16 = *a3 & 0x7F;
  }
  if ( (v16 & 6) == 0 )
  {
    LOBYTE(v47) = v15;
    v61 = 0;
    v58.m128i_i64[1] = (__int64)"out";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v59 = si128;
    v58.m128i_i64[0] = 0;
    v63 = v63 & 0x80 | 0x40;
    LODWORD(v60) = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    sub_1706C30((__int64)&v73, (__int64)&v58);
    v48 = &v61;
    sub_1705410((__int64)&v61);
    if ( !(_BYTE)v47 )
    {
      v45 = _mm_load_si128(&si128);
      v58.m128i_i64[1] = (__int64)"inout";
      v58.m128i_i64[0] = 0;
      v59 = v45;
      LODWORD(v60) = 0;
      v61 = 0;
      v62 = 0;
      v63 = v63 & 0x80 | 0x40;
      v64 = 0;
      v65 = 0;
      v66 = 0;
      sub_1706C30((__int64)&v73, (__int64)&v58);
      sub_1705410((__int64)v48);
    }
    v16 = *a3 & 0x7F;
  }
  if ( (v16 & 0x38) == 0 )
  {
    v58.m128i_i64[1] = (__int64)"bycopy";
    v61 = 0;
    v58.m128i_i64[0] = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v59 = si128;
    v63 = v63 & 0x80 | 0x40;
    LODWORD(v60) = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    sub_1706C30((__int64)&v73, (__int64)&v58);
    v47 = &v61;
    sub_1705410((__int64)&v61);
    v39 = _mm_load_si128(&si128);
    v61 = 0;
    v58.m128i_i64[1] = (__int64)"byref";
    v59 = v39;
    v58.m128i_i64[0] = 0;
    v63 = v63 & 0x80 | 0x40;
    LODWORD(v60) = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    sub_1706C30((__int64)&v73, (__int64)&v58);
    sub_1705410((__int64)v47);
    v40 = _mm_load_si128(&si128);
    v58.m128i_i64[0] = 0;
    v58.m128i_i64[1] = (__int64)"oneway";
    v59 = v40;
    v61 = 0;
    v63 = v63 & 0x80 | 0x40;
    LODWORD(v60) = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    sub_1706C30((__int64)&v73, (__int64)&v58);
    sub_1705410((__int64)v47);
    v16 = *a3 & 0x7F;
  }
  if ( (v16 & 0x40) != 0 )
    goto LABEL_11;
  v58.m128i_i64[1] = (__int64)"nonnull";
  v61 = 0;
  v58.m128i_i64[0] = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  v59 = si128;
  v63 = v63 & 0x80 | 0x40;
  LODWORD(v60) = 0;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  sub_1706C30((__int64)&v73, (__int64)&v58);
  v47 = &v61;
  sub_1705410((__int64)&v61);
  v26 = _mm_load_si128(&si128);
  v61 = 0;
  v58.m128i_i64[1] = (__int64)"nullable";
  v59 = v26;
  v58.m128i_i64[0] = 0;
  v63 = v63 & 0x80 | 0x40;
  LODWORD(v60) = 0;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  sub_1706C30((__int64)&v73, (__int64)&v58);
  sub_1705410((__int64)v47);
  v27 = _mm_load_si128(&si128);
  v58.m128i_i64[0] = 0;
  v58.m128i_i64[1] = (__int64)"null_unspecified";
  v59 = v27;
  LODWORD(v60) = 0;
  v61 = 0;
  v62 = 0;
  v63 = v63 & 0x80 | 0x40;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  sub_1706C30((__int64)&v73, (__int64)&v58);
  sub_1705410((__int64)v47);
  if ( (*a3 & 0x7F) != 0 )
  {
LABEL_11:
    if ( a4 )
    {
      v17 = *a1;
      goto LABEL_13;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
  }
  else
  {
    v17 = *a1;
    if ( a4 )
      goto LABEL_13;
    v28 = *(_QWORD **)(v17 + 240);
    v29 = j__strlen("IBAction");
    v30 = sub_6F3470((__int64)(v28 + 69), "IBAction", v29);
    if ( (*(_BYTE *)(v30 + 3) & 2) != 0 )
    {
      if ( (*(_BYTE *)(v28[7] + 21LL) & 2) == 0
        || (sub_1423DB0((__int64)&v58, v28, v30, v31, v32, v33),
            v59.m128i_i64[0] | v58.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v34 = _mm_loadu_si128(&v75);
        *((_QWORD *)&v61 + 1) = &v63;
        v62 = 0x400000000LL;
        v71[1] = &v72;
        v58 = v34;
        v71[2] = 0x200000000LL;
        v59 = (__m128i)0x28uLL;
        v60 = 0;
        *(_QWORD *)&v61 = 0;
        sub_15A2F70((__int64)&v58, (__int64)"IBAction");
        sub_15A3210((__int64)&v58, 8, (char *)&byte_22F0C30);
        sub_15A3090((__int64)&v58, (__int64)"selector");
        sub_15A3210((__int64)&v58, 16, (char *)&byte_22F0C30);
        sub_15A3210((__int64)&v58, 7, (char *)&byte_22F0C30);
        sub_15A2FD0((__int64)&v58, (__int64)"id");
        sub_15A3210((__int64)&v58, 8, (char *)&byte_22F0C30);
        sub_15A2FD0((__int64)&v58, (__int64)"sender");
        *((_QWORD *)&v49 + 1) = sub_15A5CA0((__int64)&v58, (__int64)"sender", v35, v36, v37, v38);
        v50 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
        v52 = 0;
        *(_QWORD *)&v49 = 0;
        v54 = v54 & 0x80 | 0x40;
        v51 = 0;
        v53 = 0;
        v55 = 0;
        v56 = 0;
        v57 = 0;
        sub_1706C30((__int64)&v73, (__int64)&v49);
        sub_1705410((__int64)&v52);
        sub_1704B40(&v58);
      }
    }
  }
  v44 = _mm_load_si128(&si128);
  v61 = 0;
  v58.m128i_i64[1] = (__int64)"instancetype";
  v59 = v44;
  v58.m128i_i64[0] = 0;
  LODWORD(v60) = 0;
  v63 = v63 & 0x80 | 0x40;
  v62 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  sub_1706C30((__int64)&v73, (__int64)&v58);
  sub_1705410((__int64)&v61);
  v17 = *a1;
LABEL_13:
  sub_17253B0(12, a2, v17, &v73);
  sub_16FF8C0((__int64)v78, v78[1]);
  v49 = 0;
  v76 = sub_16FFC60;
  v18 = *a1;
  v50.m128i_i64[0] = 0;
  v19 = *(_QWORD *)(v18 + 544);
  v77 = 0;
  sub_16FF1B0(&v58, (__int64)&v73, v19, 0, (__int64 *)&v49);
  sub_1705410((__int64)&v49);
  v20 = *(_DWORD *)(a1[1] + 8);
  sub_1A65F80(*a1, a2, 0, &v58, (v20 & 4) != 0, (v20 & 0x20) != 0);
  v21 = a1[1];
  v22 = *(_DWORD *)(v21 + 8);
  if ( (v22 & 1) == 0 )
  {
    v23 = v73;
    v24 = *a1;
    v25 = -1431655765 * ((v74 - v73) >> 5);
    if ( v74 == v73 )
      v23 = 0;
LABEL_16:
    sub_1700D50(v24, v21, v79, v23, v25);
    goto LABEL_17;
  }
  sub_1722040(*(_QWORD **)(*a1 + 240), &v73, (v22 & 0x20) != 0, 0, 0);
  v21 = a1[1];
  v24 = *a1;
  v23 = v73;
  v25 = -1431655765 * ((v74 - v73) >> 5);
  if ( v73 == v74 )
    v23 = 0;
  if ( v21 )
    goto LABEL_16;
LABEL_17:
  v58.m128i_i64[0] = (__int64)&off_2C4EFD0;
  sub_1705410((__int64)&v61);
  nullsub_1203(&v58);
  sub_1700A70((__int64)&v73);
}
