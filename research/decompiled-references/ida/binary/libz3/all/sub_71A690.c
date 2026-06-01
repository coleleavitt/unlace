__int64 __fastcall sub_71A690(__int64 a1, double a2)
{
  __m128i *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  __int32 v6; // edx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int8 v9; // cl
  char v10; // bl
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // cl
  char v14; // bl
  __int64 v15; // rdx
  char v16; // cl
  char v17; // bl
  char v18; // cl
  __int64 v19; // rax
  __int64 v20; // rdx
  char v21; // bl
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // cl
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // rdx
  void *v28; // r12
  void *v29; // r12
  void *v30; // r12
  __int64 v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rbx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rdx
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rsi
  __int64 v42; // rdi
  bool v43; // zf
  __int64 v44; // rsi
  _DWORD *v45; // rax
  __int64 result; // rax
  __int64 v47; // rsi
  __int64 v48; // rdi
  __int64 v49; // [rsp+8h] [rbp-E8h]
  __int64 v50; // [rsp+18h] [rbp-D8h]
  __int64 v51; // [rsp+18h] [rbp-D8h]
  int v52[2]; // [rsp+28h] [rbp-C8h] BYREF
  int v53[2]; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+38h] [rbp-B8h]
  int v55[2]; // [rsp+40h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+48h] [rbp-A8h]
  int v57[2]; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v58; // [rsp+58h] [rbp-98h]
  __m128i v59; // [rsp+60h] [rbp-90h] BYREF
  __int64 v60; // [rsp+70h] [rbp-80h] BYREF
  __int64 v61; // [rsp+78h] [rbp-78h]
  int v62; // [rsp+80h] [rbp-70h] BYREF
  char v63; // [rsp+84h] [rbp-6Ch]
  __int64 v64; // [rsp+88h] [rbp-68h]
  int v65; // [rsp+90h] [rbp-60h] BYREF
  char v66; // [rsp+94h] [rbp-5Ch]
  __int64 v67; // [rsp+98h] [rbp-58h]
  int v68; // [rsp+A0h] [rbp-50h] BYREF
  char v69; // [rsp+A4h] [rbp-4Ch]
  __int64 v70; // [rsp+A8h] [rbp-48h]
  int v71; // [rsp+B0h] [rbp-40h] BYREF
  char v72; // [rsp+B4h] [rbp-3Ch]
  __int64 v73; // [rsp+B8h] [rbp-38h]

  v3 = (__m128i *)(a1 + 144);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 408);
  *(_QWORD *)v53 = 0;
  v50 = v4;
  v54 = v4;
  *(_QWORD *)v55 = v4;
  v56 = 0;
  sub_712B50((_QWORD *)(a1 + 144), v5, (__int64)v55);
  sub_714A10((__int64 *)(a1 + 144), (__int64 *)v55, a1 + 184);
  sub_6F0ED0(
    (__int64)&v59,
    (__int64 **)(a1 + 56),
    (__int64 *)v55,
    *(_QWORD *)(a1 + 408),
    *(_QWORD *)(a1 + 456),
    (int)v53,
    a1 + 488);
  v6 = v59.m128i_i32[0];
  v59.m128i_i32[0] = *(_DWORD *)(a1 + 504);
  v7 = *(_QWORD *)(a1 + 512);
  *(_DWORD *)(a1 + 504) = v6;
  v8 = v59.m128i_i64[1];
  v59.m128i_i64[1] = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 508);
  v9 = v59.m128i_i8[4];
  *(_QWORD *)(a1 + 512) = v8;
  v10 = v7;
  LOBYTE(v8) = v9;
  v9 &= ~2u;
  v59.m128i_i8[4] = v7 & 1 | v9 & 0xFE | v7 & 2;
  LODWORD(v7) = *(_DWORD *)(a1 + 520);
  *(_BYTE *)(a1 + 508) = v9 & 1 | v10 & 0xFC | v8 & 2;
  LODWORD(v8) = v60;
  LODWORD(v60) = v7;
  v11 = *(_QWORD *)(a1 + 528);
  *(_DWORD *)(a1 + 520) = v8;
  v12 = v61;
  v61 = v11;
  LOBYTE(v11) = *(_BYTE *)(a1 + 524);
  v13 = BYTE4(v60);
  *(_QWORD *)(a1 + 528) = v12;
  v14 = v11;
  LOBYTE(v12) = v13;
  v13 &= ~2u;
  BYTE4(v60) = v11 & 1 | v13 & 0xFE | v11 & 2;
  LODWORD(v11) = *(_DWORD *)(a1 + 536);
  *(_BYTE *)(a1 + 524) = v13 & 1 | v14 & 0xFC | v12 & 2;
  LODWORD(v12) = v62;
  v62 = v11;
  *(_DWORD *)(a1 + 536) = v12;
  v15 = v64;
  v16 = v63;
  v64 = *(_QWORD *)(a1 + 544);
  LOBYTE(v11) = *(_BYTE *)(a1 + 540);
  *(_QWORD *)(a1 + 544) = v15;
  LOBYTE(v15) = v16;
  v16 &= ~2u;
  v17 = v11;
  LOBYTE(v11) = v16 | v11 & 2;
  LOBYTE(v15) = v16 & 1 | v17 & 0xFC | v15 & 2;
  v18 = v66;
  v63 = v17 & 1 | v11 & 0xFE;
  LODWORD(v11) = *(_DWORD *)(a1 + 552);
  *(_BYTE *)(a1 + 540) = v15;
  LODWORD(v15) = v65;
  v65 = v11;
  v19 = *(_QWORD *)(a1 + 560);
  *(_DWORD *)(a1 + 552) = v15;
  v20 = v67;
  v67 = v19;
  LOBYTE(v19) = *(_BYTE *)(a1 + 556);
  *(_QWORD *)(a1 + 560) = v20;
  LOBYTE(v20) = v18;
  v18 &= ~2u;
  v21 = v19;
  v66 = v19 & 1 | v18 & 0xFE | v19 & 2;
  LODWORD(v19) = *(_DWORD *)(a1 + 568);
  *(_BYTE *)(a1 + 556) = v18 & 1 | v21 & 0xFC | v20 & 2;
  LODWORD(v20) = v68;
  v68 = v19;
  v22 = *(_QWORD *)(a1 + 576);
  *(_DWORD *)(a1 + 568) = v20;
  v23 = v70;
  v70 = v22;
  LOBYTE(v22) = *(_BYTE *)(a1 + 572);
  v24 = v69;
  *(_QWORD *)(a1 + 576) = v23;
  LOBYTE(v23) = v24;
  v24 &= ~2u;
  v69 = v22 & 1 | v24 & 0xFE | v22 & 2;
  *(_BYTE *)(a1 + 572) = v24 & 1 | v22 & 0xFC | v23 & 2;
  LODWORD(v23) = v71;
  v25 = v72;
  v71 = *(_DWORD *)(a1 + 584);
  v26 = *(_QWORD *)(a1 + 592);
  *(_DWORD *)(a1 + 584) = v23;
  v27 = v73;
  v73 = v26;
  LOBYTE(v26) = *(_BYTE *)(a1 + 588);
  *(_QWORD *)(a1 + 592) = v27;
  LOBYTE(v27) = v26 & 0xFD | v25 & 2;
  v25 &= ~2u;
  v28 = qword_1C7F2C0;
  *(_BYTE *)(a1 + 588) = v25 & 1 | v27 & 0xFE;
  v72 = v26 & 1 | v25 & 0xFE | v26 & 2;
  sub_182CBA0(v28, &v68);
  sub_182CBA0(v28, &v71);
  v29 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v62);
  sub_182CBA0(v29, &v65);
  v30 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v59);
  sub_182CBA0(v30, &v60);
  if ( (unsigned int)sub_180B130(v30) > 2 )
  {
    if ( (unsigned __int8)sub_186A530(a2) )
    {
      sub_186A4C0(a2);
      v49 = sub_180B150(v30, &v60);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_2FE070((char **)&v59, (int *)(a1 + 504));
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (__int64 *)v59.m128i_i64[0] != &v60 )
        operator delete((void *)v59.m128i_i64[0], v60 + 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v49, ")\n");
    }
    else
    {
      sub_180B150(v30, &v60);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_2FE070((char **)&v59, (int *)(a1 + 504));
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( (__int64 *)v59.m128i_i64[0] != &v60 )
        operator delete((void *)v59.m128i_i64[0], v60 + 1);
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  *(_QWORD *)v52 = -1;
  *(_QWORD *)v57 = v50;
  v58 = 0;
  sub_715950(v3, *(__int64 *)v53, (unsigned int *)v52, (__int64)v57);
  v31 = v58;
  v51 = *(_QWORD *)v57;
  if ( v58 )
    v32 = *(unsigned int *)(v58 - 4);
  else
    v32 = 0;
  v33 = sub_15EC1C0(*(_QWORD *)v57, v32);
  v34 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL);
  if ( v33 )
  {
    v35 = *(_DWORD *)(v33 + 8);
    *(_DWORD *)(v33 + 8) = v35 + 1;
    if ( v34 != v33 )
    {
      sub_E5EBF0(*(_QWORD *)(a1 + 120), v33);
      v35 = *(_DWORD *)(v33 + 8) - 1;
    }
    *(_DWORD *)(v33 + 8) = v35;
    if ( !v35 )
    {
      sub_15D7BC0(v51, v33);
      if ( v31 )
        goto LABEL_13;
      goto LABEL_34;
    }
  }
  else if ( v34 )
  {
    sub_E5EBF0(*(_QWORD *)(a1 + 120), 0);
  }
  if ( v31 )
  {
LABEL_13:
    v36 = *(unsigned int *)(v31 - 4);
    goto LABEL_14;
  }
LABEL_34:
  v36 = 0;
LABEL_14:
  v37 = sub_15EC1C0(v51, v36);
  v38 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 856LL);
  if ( v37 )
  {
    v39 = *(_DWORD *)(v37 + 8);
    *(_DWORD *)(v37 + 8) = v39 + 1;
    if ( v38 != v37 )
    {
      sub_E5EBF0(*(_QWORD *)(a1 + 80), v37);
      v39 = *(_DWORD *)(v37 + 8) - 1;
    }
    *(_DWORD *)(v37 + 8) = v39;
    if ( !v39 )
      sub_15D7BC0(v51, v37);
  }
  else if ( v38 )
  {
    sub_E5EBF0(*(_QWORD *)(a1 + 80), 0);
  }
  sub_714210(&v59, v3, *(__int64 *)v53);
  v40 = v59.m128i_i64[0];
  v41 = *(_QWORD *)v53;
  *(_QWORD *)v53 = v59.m128i_i64[0];
  if ( v41 )
  {
    v42 = v59.m128i_i64[1];
    v43 = (*(_DWORD *)(v41 + 8))-- == 1;
    if ( v43 )
    {
      sub_15D7BC0(v42, v41);
      v40 = *(_QWORD *)v53;
    }
  }
  if ( !*(_WORD *)(v40 + 4) && !*(_DWORD *)(v40 + 24) )
  {
    v44 = *(_QWORD *)(v40 + 16);
    v45 = *(_DWORD **)(v44 + 24);
    if ( !v45 || *v45 == -1 )
      sub_135F9B0(*(_QWORD *)(a1 + 408), v44, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 856LL));
  }
  sub_2334C0((__int64 *)v57);
  result = sub_2334C0((__int64 *)v55);
  v47 = *(_QWORD *)v53;
  if ( *(_QWORD *)v53 )
  {
    v48 = v54;
    v43 = (*(_DWORD *)(*(_QWORD *)v53 + 8LL))-- == 1;
    if ( v43 )
      return sub_15D7BC0(v48, v47);
  }
  return result;
}

