void __fastcall sub_5598F0(__int64 a1, __int64 a2)
{
  __m128i *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // [rsp+38h] [rbp-350h] BYREF
  __int64 v7; // [rsp+40h] [rbp-348h] BYREF
  __int64 v8; // [rsp+48h] [rbp-340h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-338h] BYREF
  __int64 v10; // [rsp+70h] [rbp-318h]
  __int64 v11; // [rsp+78h] [rbp-310h]
  __m128i si128; // [rsp+80h] [rbp-308h]
  __int16 v13; // [rsp+90h] [rbp-2F8h]
  char v14; // [rsp+92h] [rbp-2F6h]
  _QWORD v15[4]; // [rsp+98h] [rbp-2F0h] BYREF
  void *v16[2]; // [rsp+B8h] [rbp-2D0h] BYREF
  _QWORD v17[2]; // [rsp+C8h] [rbp-2C0h] BYREF
  void *v18; // [rsp+D8h] [rbp-2B0h]
  __int64 v19; // [rsp+E0h] [rbp-2A8h]
  char v20[16]; // [rsp+E8h] [rbp-2A0h] BYREF
  __int128 v21; // [rsp+F8h] [rbp-290h]
  __int64 v22; // [rsp+108h] [rbp-280h]
  char v23; // [rsp+110h] [rbp-278h]
  __int64 v24; // [rsp+114h] [rbp-274h]
  __int16 v25; // [rsp+11Ch] [rbp-26Ch]
  __int64 v26; // [rsp+120h] [rbp-268h]
  __int64 v27; // [rsp+128h] [rbp-260h]
  int v28; // [rsp+130h] [rbp-258h]
  char v29; // [rsp+134h] [rbp-254h]
  int v30; // [rsp+138h] [rbp-250h]
  __int64 v31; // [rsp+140h] [rbp-248h]
  _QWORD v32[8]; // [rsp+148h] [rbp-240h] BYREF
  __int128 v33; // [rsp+188h] [rbp-200h]
  __int64 v34; // [rsp+198h] [rbp-1F0h]
  __int64 v35; // [rsp+1A0h] [rbp-1E8h]
  __int64 v36; // [rsp+1A8h] [rbp-1E0h]
  __int64 v37; // [rsp+1B0h] [rbp-1D8h]
  __int64 v38; // [rsp+1B8h] [rbp-1D0h]
  __int64 v39; // [rsp+1C0h] [rbp-1C8h]
  __int64 v40; // [rsp+1C8h] [rbp-1C0h]
  __int64 v41; // [rsp+1D0h] [rbp-1B8h]
  __int16 v42; // [rsp+1D8h] [rbp-1B0h]
  char v43; // [rsp+1DAh] [rbp-1AEh]
  __int16 v44; // [rsp+1DCh] [rbp-1ACh]
  int v45; // [rsp+1E0h] [rbp-1A8h]
  __int16 v46; // [rsp+1E4h] [rbp-1A4h]
  __int64 v47; // [rsp+1E8h] [rbp-1A0h]
  int v48; // [rsp+1F0h] [rbp-198h]
  char v49; // [rsp+1F4h] [rbp-194h]
  _QWORD v50[2]; // [rsp+1F8h] [rbp-190h] BYREF
  int v51; // [rsp+208h] [rbp-180h]
  int v52; // [rsp+20Ch] [rbp-17Ch] BYREF
  __int64 v53; // [rsp+210h] [rbp-178h]
  int v54; // [rsp+218h] [rbp-170h] BYREF
  char v55; // [rsp+21Ch] [rbp-16Ch]
  __int64 v56; // [rsp+220h] [rbp-168h]
  __int16 v57; // [rsp+228h] [rbp-160h]
  int v58; // [rsp+22Ch] [rbp-15Ch]
  char v59; // [rsp+230h] [rbp-158h]
  int v60; // [rsp+234h] [rbp-154h]
  __int128 v61; // [rsp+238h] [rbp-150h]
  __m128i v62; // [rsp+248h] [rbp-140h]
  int v63; // [rsp+258h] [rbp-130h]
  char v64; // [rsp+25Ch] [rbp-12Ch]
  int v65; // [rsp+260h] [rbp-128h]
  __m128i v66; // [rsp+268h] [rbp-120h]
  char v67; // [rsp+278h] [rbp-110h]
  __int64 v68; // [rsp+27Ch] [rbp-10Ch]
  char v69; // [rsp+284h] [rbp-104h]
  __int64 v70; // [rsp+288h] [rbp-100h]
  __int16 v71; // [rsp+290h] [rbp-F8h]
  __int64 v72; // [rsp+294h] [rbp-F4h]
  __int64 v73; // [rsp+29Ch] [rbp-ECh]
  char v74; // [rsp+2A4h] [rbp-E4h]
  __int64 v75; // [rsp+2A8h] [rbp-E0h]
  __int64 v76; // [rsp+2B0h] [rbp-D8h]
  char v77; // [rsp+2B8h] [rbp-D0h]
  __int128 v78; // [rsp+2C0h] [rbp-C8h]
  int v79; // [rsp+2D0h] [rbp-B8h]
  char v80; // [rsp+2D4h] [rbp-B4h]
  __int64 v81; // [rsp+2D8h] [rbp-B0h]
  __int64 v82; // [rsp+2E0h] [rbp-A8h]
  __m128i v83; // [rsp+2E8h] [rbp-A0h]
  int v84; // [rsp+2F8h] [rbp-90h]
  __int64 v85; // [rsp+300h] [rbp-88h]
  int v86; // [rsp+308h] [rbp-80h]
  __int64 v87; // [rsp+310h] [rbp-78h]
  int v88; // [rsp+318h] [rbp-70h]
  __int16 v89; // [rsp+31Ch] [rbp-6Ch]
  int v90; // [rsp+320h] [rbp-68h]
  __int64 v91; // [rsp+324h] [rbp-64h]
  _BYTE v92[72]; // [rsp+340h] [rbp-48h] BYREF

  v9[0] = 0x100000001LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v10 = 0x1FFFFFFFFLL;
  sub_15B6DB0(v9, &v8);
  sub_18572D0(&v8);
  HIWORD(v10) = 0;
  v13 = 1;
  v11 = 0;
  v14 = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B64A0);
  sub_15B7800(v9, &v7);
  sub_18572D0(&v7);
  v8 = 0;
  v15[1] = 0x3FB999999999999ALL;
  v15[0] = 1;
  v15[2] = 0x7D00000000ALL;
  v15[3] = 0x3FE999999999999ALL;
  sub_15B81B0(v15, &v8);
  sub_18572D0(&v8);
  v8 = 0;
  v16[0] = v17;
  v2 = (__m128i *)operator new(0x16u);
  v16[0] = v2;
  *v2 = _mm_load_si128((const __m128i *)&xmmword_18B6520);
  strcpy(&v2->m128i_i8[13], "eration)");
  v18 = v20;
  v17[0] = 21;
  v22 = 0x200000000LL;
  v16[1] = &dword_14 + 1;
  v24 = 0xFFFFFFFFLL;
  v26 = 0x1000000FFFFFFFFLL;
  strcpy(v20, "cost");
  v27 = 0x100000001LL;
  v19 = 4;
  v23 = 0;
  v25 = 257;
  v28 = 1000;
  v29 = 0;
  v30 = 10;
  v31 = 0;
  v21 = xmmword_18B64B0;
  sub_15AFF30(v16, &v8);
  sub_18572D0(&v8);
  v32[0] = 0x600000000LL;
  v32[1] = 0x3E800000000LL;
  v32[2] = 0x200000001LL;
  v34 = 0x200000001LL;
  v36 = 0xFFFFFFFFLL;
  v39 = 0x20000000101LL;
  v32[3] = 0x8000000101LL;
  v40 = 0x600000100LL;
  v8 = 0;
  v32[4] = 0x100000010LL;
  v32[5] = 0;
  v32[6] = 0xFFFFFC1800000000LL;
  v32[7] = 1000;
  v35 = 0x10000;
  v37 = 0;
  v38 = 1;
  v41 = 0x40000000001LL;
  v42 = 257;
  v43 = 1;
  v33 = xmmword_18B64C0;
  sub_15B26B0(v32, &v8);
  sub_18572D0(&v8);
  v47 = 0x1000100000001LL;
  v50[0] = 0x10000000001LL;
  v44 = 256;
  v45 = 3;
  v46 = 256;
  v48 = 10;
  v49 = 0;
  v8 = 0;
  v50[1] = 0x100017FFFFFFFLL;
  v51 = 0;
  sub_15B7350(v50, &v8);
  sub_18572D0(&v8);
  v8 = 0;
  v52 = 0;
  v53 = 0x13FFFFFFFLL;
  sub_15B3AA0(&v52, &v8);
  sub_18572D0(&v8);
  v8 = 0;
  v54 = 1000;
  v55 = 1;
  sub_15B6C70(&v54, &v8);
  sub_18572D0(&v8);
  v68 = 0x10100000003E8LL;
  v61 = xmmword_18B64D0;
  v73 = 0x2000000000LL;
  v62 = _mm_load_si128((const __m128i *)&xmmword_18B64E0);
  v75 = 0x6400000001LL;
  v66 = _mm_load_si128((const __m128i *)&xmmword_18B64F0);
  v71 = 256;
  v76 = 0x3FF199999999999ALL;
  v56 = 1;
  v57 = 257;
  v58 = 2;
  v59 = 0;
  v60 = 0;
  v63 = 100;
  v64 = 1;
  v65 = -1;
  v67 = 1;
  v69 = 0;
  v70 = 0;
  v72 = 1;
  v74 = 0;
  v77 = 1;
  v79 = 0;
  v80 = 0;
  v78 = xmmword_18B6500;
  v81 = 0x138800000064LL;
  v82 = 0x3FF199999999999ALL;
  v85 = 0x3FF0000000000000LL;
  v84 = 6;
  v89 = 0;
  v86 = 0;
  v87 = 0;
  v88 = 0x1000000;
  v90 = 0;
  v91 = 0x100000000000100LL;
  v83 = _mm_load_si128((const __m128i *)&xmmword_18B6510);
  sub_180C5A0(v92, "auto");
  sub_15B65B0(v9, &v6);
  sub_18572D0(&v6);
  v8 = 0;
  sub_8E4C30(&v7, a2, v9, &v8);
  sub_18572D0(&v8);
  sub_15E1B70(a2);
  v3 = sub_15E1A70(a2);
  v4 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  sub_8E3610(&v7);
  if ( (unsigned int)sub_8E3730(&v7, 0, 0) != -1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 692);
  }
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 8))-- == 1 )
      sub_15D7BC0(a2, v4);
  }
  sub_8E4B60(&v7);
  if ( v18 != v20 )
    operator delete(v18, *(_QWORD *)v20 + 1LL);
  if ( v16[0] != v17 )
    operator delete(v16[0], v17[0] + 1LL);
}

