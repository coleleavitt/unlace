__int64 __fastcall sub_B08E60(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // [rsp+28h] [rbp-350h] BYREF
  __int64 v8; // [rsp+30h] [rbp-348h] BYREF
  __int64 v9; // [rsp+38h] [rbp-340h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-338h] BYREF
  __int64 v11; // [rsp+60h] [rbp-318h]
  __int64 v12; // [rsp+68h] [rbp-310h]
  __m128i si128; // [rsp+70h] [rbp-308h]
  __int16 v14; // [rsp+80h] [rbp-2F8h]
  char v15; // [rsp+82h] [rbp-2F6h]
  _QWORD v16[4]; // [rsp+88h] [rbp-2F0h] BYREF
  __int64 v17[4]; // [rsp+A8h] [rbp-2D0h] BYREF
  __int64 v18[4]; // [rsp+C8h] [rbp-2B0h] BYREF
  __int128 v19; // [rsp+E8h] [rbp-290h]
  __int64 v20; // [rsp+F8h] [rbp-280h]
  char v21; // [rsp+100h] [rbp-278h]
  __int64 v22; // [rsp+104h] [rbp-274h]
  __int16 v23; // [rsp+10Ch] [rbp-26Ch]
  __int64 v24; // [rsp+110h] [rbp-268h]
  __int64 v25; // [rsp+118h] [rbp-260h]
  int v26; // [rsp+120h] [rbp-258h]
  char v27; // [rsp+124h] [rbp-254h]
  int v28; // [rsp+128h] [rbp-250h]
  __int64 v29; // [rsp+130h] [rbp-248h]
  _QWORD v30[8]; // [rsp+138h] [rbp-240h] BYREF
  __int128 v31; // [rsp+178h] [rbp-200h]
  __int64 v32; // [rsp+188h] [rbp-1F0h]
  __int64 v33; // [rsp+190h] [rbp-1E8h]
  __int64 v34; // [rsp+198h] [rbp-1E0h]
  __int64 v35; // [rsp+1A0h] [rbp-1D8h]
  __int64 v36; // [rsp+1A8h] [rbp-1D0h]
  __int64 v37; // [rsp+1B0h] [rbp-1C8h]
  __int64 v38; // [rsp+1B8h] [rbp-1C0h]
  __int64 v39; // [rsp+1C0h] [rbp-1B8h]
  __int16 v40; // [rsp+1C8h] [rbp-1B0h]
  char v41; // [rsp+1CAh] [rbp-1AEh]
  __int16 v42; // [rsp+1CCh] [rbp-1ACh]
  int v43; // [rsp+1D0h] [rbp-1A8h]
  __int16 v44; // [rsp+1D4h] [rbp-1A4h]
  __int64 v45; // [rsp+1D8h] [rbp-1A0h]
  int v46; // [rsp+1E0h] [rbp-198h]
  char v47; // [rsp+1E4h] [rbp-194h]
  _QWORD v48[2]; // [rsp+1E8h] [rbp-190h] BYREF
  int v49; // [rsp+1F8h] [rbp-180h]
  int v50; // [rsp+1FCh] [rbp-17Ch] BYREF
  __int64 v51; // [rsp+200h] [rbp-178h]
  int v52; // [rsp+208h] [rbp-170h] BYREF
  char v53; // [rsp+20Ch] [rbp-16Ch]
  __int64 v54; // [rsp+210h] [rbp-168h]
  __int16 v55; // [rsp+218h] [rbp-160h]
  int v56; // [rsp+21Ch] [rbp-15Ch]
  char v57; // [rsp+220h] [rbp-158h]
  int v58; // [rsp+224h] [rbp-154h]
  __int128 v59; // [rsp+228h] [rbp-150h]
  __m128i v60; // [rsp+238h] [rbp-140h]
  int v61; // [rsp+248h] [rbp-130h]
  char v62; // [rsp+24Ch] [rbp-12Ch]
  int v63; // [rsp+250h] [rbp-128h]
  __m128i v64; // [rsp+258h] [rbp-120h]
  char v65; // [rsp+268h] [rbp-110h]
  __int64 v66; // [rsp+26Ch] [rbp-10Ch]
  char v67; // [rsp+274h] [rbp-104h]
  __int64 v68; // [rsp+278h] [rbp-100h]
  __int16 v69; // [rsp+280h] [rbp-F8h]
  __int64 v70; // [rsp+284h] [rbp-F4h]
  __int64 v71; // [rsp+28Ch] [rbp-ECh]
  char v72; // [rsp+294h] [rbp-E4h]
  __int64 v73; // [rsp+298h] [rbp-E0h]
  __int64 v74; // [rsp+2A0h] [rbp-D8h]
  char v75; // [rsp+2A8h] [rbp-D0h]
  __int128 v76; // [rsp+2B0h] [rbp-C8h]
  int v77; // [rsp+2C0h] [rbp-B8h]
  char v78; // [rsp+2C4h] [rbp-B4h]
  __int64 v79; // [rsp+2C8h] [rbp-B0h]
  __int64 v80; // [rsp+2D0h] [rbp-A8h]
  __m128i v81; // [rsp+2D8h] [rbp-A0h]
  int v82; // [rsp+2E8h] [rbp-90h]
  __int64 v83; // [rsp+2F0h] [rbp-88h]
  int v84; // [rsp+2F8h] [rbp-80h]
  __int64 v85; // [rsp+300h] [rbp-78h]
  int v86; // [rsp+308h] [rbp-70h]
  __int16 v87; // [rsp+30Ch] [rbp-6Ch]
  int v88; // [rsp+310h] [rbp-68h]
  __int64 v89; // [rsp+314h] [rbp-64h]
  _BYTE v90[72]; // [rsp+330h] [rbp-48h] BYREF

  if ( !byte_1C7DF98 )
  {
    v10[0] = 0x100000001LL;
    byte_1C7DF98 = 1;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v11 = 0x1FFFFFFFFLL;
    sub_15B6DB0(v10, &v9);
    sub_18572D0(&v9);
    HIWORD(v11) = 0;
    v12 = 0;
    v14 = 1;
    v15 = 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B64A0);
    sub_15B7800(v10, &v8);
    sub_18572D0(&v8);
    v9 = 0;
    v16[1] = 0x3FB999999999999ALL;
    v16[0] = 1;
    v16[2] = 0x7D00000000ALL;
    v16[3] = 0x3FE999999999999ALL;
    sub_15B81B0(v16, &v9);
    sub_18572D0(&v9);
    v9 = 0;
    sub_B035D0(v17, "(+ weight generation)");
    sub_B035D0(v18, "cost");
    v21 = 0;
    v20 = 0x200000000LL;
    v23 = 257;
    v22 = 0xFFFFFFFFLL;
    v24 = 0x1000000FFFFFFFFLL;
    v26 = 1000;
    v25 = 0x100000001LL;
    v27 = 0;
    v28 = 10;
    v29 = 0;
    v19 = xmmword_18B64B0;
    sub_15AFF30(v17, &v9);
    sub_18572D0(&v9);
    v30[0] = 0x600000000LL;
    v30[1] = 0x3E800000000LL;
    v30[2] = 0x200000001LL;
    v32 = 0x200000001LL;
    v34 = 0xFFFFFFFFLL;
    v30[3] = 0x8000000101LL;
    v37 = 0x20000000101LL;
    v30[4] = 0x100000010LL;
    v38 = 0x600000100LL;
    v9 = 0;
    v30[5] = 0;
    v30[6] = 0xFFFFFC1800000000LL;
    v30[7] = 1000;
    v33 = 0x10000;
    v35 = 0;
    v36 = 1;
    v39 = 0x40000000001LL;
    v40 = 257;
    v41 = 1;
    v31 = xmmword_18B64C0;
    sub_15B26B0(v30, &v9);
    sub_18572D0(&v9);
    v45 = 0x1000100000001LL;
    v48[0] = 0x10000000001LL;
    v42 = 256;
    v43 = 3;
    v44 = 256;
    v46 = 10;
    v47 = 0;
    v9 = 0;
    v48[1] = 0x100017FFFFFFFLL;
    v49 = 0;
    sub_15B7350(v48, &v9);
    sub_18572D0(&v9);
    v9 = 0;
    v50 = 0;
    v51 = 0x13FFFFFFFLL;
    sub_15B3AA0(&v50, &v9);
    sub_18572D0(&v9);
    v9 = 0;
    v52 = 1000;
    v53 = 1;
    sub_15B6C70(&v52, &v9);
    sub_18572D0(&v9);
    v66 = 0x10100000003E8LL;
    v59 = xmmword_18B64D0;
    v71 = 0x2000000000LL;
    v60 = _mm_load_si128((const __m128i *)&xmmword_18B64E0);
    v73 = 0x6400000001LL;
    v64 = _mm_load_si128((const __m128i *)&xmmword_18B64F0);
    v69 = 256;
    v74 = 0x3FF199999999999ALL;
    v54 = 1;
    v55 = 257;
    v56 = 2;
    v57 = 0;
    v58 = 0;
    v61 = 100;
    v62 = 1;
    v63 = -1;
    v65 = 1;
    v67 = 0;
    v68 = 0;
    v70 = 1;
    v72 = 0;
    v75 = 1;
    v77 = 0;
    v78 = 0;
    v76 = xmmword_18B6500;
    v79 = 0x138800000064LL;
    v80 = 0x3FF199999999999ALL;
    v83 = 0x3FF0000000000000LL;
    v82 = 6;
    v84 = 0;
    v86 = 0x1000000;
    v85 = 0;
    v87 = 0;
    v88 = 0;
    v89 = 0x100000000000100LL;
    v81 = _mm_load_si128((const __m128i *)&xmmword_18B6510);
    sub_180C5A0(v90, "auto");
    sub_15B65B0(v10, &v7);
    sub_18572D0(&v7);
    v2 = *(_QWORD *)(a1 + 24);
    v9 = 0;
    sub_8E4C30(&v8, v2, v10, &v9);
    sub_18572D0(&v9);
    v3 = *(_QWORD *)(a1 + 24);
    v4 = sub_15E1A70(v3);
    v5 = v4;
    if ( v4 )
      ++*(_DWORD *)(v4 + 8);
    sub_8E3610(&v8);
    sub_8E3610(&v8);
    v6 = sub_8E3730(&v8);
    byte_1C7DF98 = 0;
    if ( v6 == 1 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1607);
    }
    sub_B035B0(v5, v3);
    sub_8E4B60(&v8);
    sub_233E40((__int64)v18);
    sub_233E40((__int64)v17);
  }
  return 1;
}

