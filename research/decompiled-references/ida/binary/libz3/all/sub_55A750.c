__int64 __fastcall sub_55A750(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __m128i *v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  __int64 v10; // [rsp+30h] [rbp-358h] BYREF
  __int64 v11; // [rsp+38h] [rbp-350h] BYREF
  __int64 v12[2]; // [rsp+40h] [rbp-348h] BYREF
  _QWORD v13[4]; // [rsp+50h] [rbp-338h] BYREF
  __int64 v14; // [rsp+70h] [rbp-318h]
  __int64 v15; // [rsp+78h] [rbp-310h]
  __m128i si128; // [rsp+80h] [rbp-308h]
  __int16 v17; // [rsp+90h] [rbp-2F8h]
  char v18; // [rsp+92h] [rbp-2F6h]
  _QWORD v19[4]; // [rsp+98h] [rbp-2F0h] BYREF
  void *v20[2]; // [rsp+B8h] [rbp-2D0h] BYREF
  _QWORD v21[2]; // [rsp+C8h] [rbp-2C0h] BYREF
  void *v22; // [rsp+D8h] [rbp-2B0h]
  __int64 v23; // [rsp+E0h] [rbp-2A8h]
  char v24[16]; // [rsp+E8h] [rbp-2A0h] BYREF
  __int128 v25; // [rsp+F8h] [rbp-290h]
  __int64 v26; // [rsp+108h] [rbp-280h]
  char v27; // [rsp+110h] [rbp-278h]
  __int64 v28; // [rsp+114h] [rbp-274h]
  __int16 v29; // [rsp+11Ch] [rbp-26Ch]
  __int64 v30; // [rsp+120h] [rbp-268h]
  __int64 v31; // [rsp+128h] [rbp-260h]
  int v32; // [rsp+130h] [rbp-258h]
  char v33; // [rsp+134h] [rbp-254h]
  int v34; // [rsp+138h] [rbp-250h]
  __int64 v35; // [rsp+140h] [rbp-248h]
  _QWORD v36[8]; // [rsp+148h] [rbp-240h] BYREF
  __int128 v37; // [rsp+188h] [rbp-200h]
  __int64 v38; // [rsp+198h] [rbp-1F0h]
  __int64 v39; // [rsp+1A0h] [rbp-1E8h]
  __int64 v40; // [rsp+1A8h] [rbp-1E0h]
  __int64 v41; // [rsp+1B0h] [rbp-1D8h]
  __int64 v42; // [rsp+1B8h] [rbp-1D0h]
  __int64 v43; // [rsp+1C0h] [rbp-1C8h]
  __int64 v44; // [rsp+1C8h] [rbp-1C0h]
  __int64 v45; // [rsp+1D0h] [rbp-1B8h]
  __int16 v46; // [rsp+1D8h] [rbp-1B0h]
  char v47; // [rsp+1DAh] [rbp-1AEh]
  __int16 v48; // [rsp+1DCh] [rbp-1ACh]
  int v49; // [rsp+1E0h] [rbp-1A8h]
  __int16 v50; // [rsp+1E4h] [rbp-1A4h]
  __int64 v51; // [rsp+1E8h] [rbp-1A0h]
  int v52; // [rsp+1F0h] [rbp-198h]
  char v53; // [rsp+1F4h] [rbp-194h]
  _QWORD v54[2]; // [rsp+1F8h] [rbp-190h] BYREF
  int v55; // [rsp+208h] [rbp-180h]
  int v56; // [rsp+20Ch] [rbp-17Ch] BYREF
  __int64 v57; // [rsp+210h] [rbp-178h]
  int v58; // [rsp+218h] [rbp-170h] BYREF
  char v59; // [rsp+21Ch] [rbp-16Ch]
  __int64 v60; // [rsp+220h] [rbp-168h]
  __int16 v61; // [rsp+228h] [rbp-160h]
  int v62; // [rsp+22Ch] [rbp-15Ch]
  char v63; // [rsp+230h] [rbp-158h]
  int v64; // [rsp+234h] [rbp-154h]
  __int128 v65; // [rsp+238h] [rbp-150h]
  __m128i v66; // [rsp+248h] [rbp-140h]
  int v67; // [rsp+258h] [rbp-130h]
  char v68; // [rsp+25Ch] [rbp-12Ch]
  int v69; // [rsp+260h] [rbp-128h]
  __m128i v70; // [rsp+268h] [rbp-120h]
  char v71; // [rsp+278h] [rbp-110h]
  __int64 v72; // [rsp+27Ch] [rbp-10Ch]
  char v73; // [rsp+284h] [rbp-104h]
  __int64 v74; // [rsp+288h] [rbp-100h]
  __int16 v75; // [rsp+290h] [rbp-F8h]
  __int64 v76; // [rsp+294h] [rbp-F4h]
  __int64 v77; // [rsp+29Ch] [rbp-ECh]
  char v78; // [rsp+2A4h] [rbp-E4h]
  __int64 v79; // [rsp+2A8h] [rbp-E0h]
  __int64 v80; // [rsp+2B0h] [rbp-D8h]
  char v81; // [rsp+2B8h] [rbp-D0h]
  __int128 v82; // [rsp+2C0h] [rbp-C8h]
  int v83; // [rsp+2D0h] [rbp-B8h]
  char v84; // [rsp+2D4h] [rbp-B4h]
  __int64 v85; // [rsp+2D8h] [rbp-B0h]
  __int64 v86; // [rsp+2E0h] [rbp-A8h]
  __m128i v87; // [rsp+2E8h] [rbp-A0h]
  int v88; // [rsp+2F8h] [rbp-90h]
  __int64 v89; // [rsp+300h] [rbp-88h]
  int v90; // [rsp+308h] [rbp-80h]
  __int64 v91; // [rsp+310h] [rbp-78h]
  int v92; // [rsp+318h] [rbp-70h]
  __int16 v93; // [rsp+31Ch] [rbp-6Ch]
  int v94; // [rsp+320h] [rbp-68h]
  __int64 v95; // [rsp+324h] [rbp-64h]
  _BYTE v96[72]; // [rsp+340h] [rbp-48h] BYREF

  LODWORD(v3) = 0;
  if ( *(_DWORD *)(a3 + 16) )
  {
    v3 = v12;
    v13[0] = 0x100000001LL;
    v10 = 0;
    v11 = 0;
    v12[0] = 0;
    v14 = 0x1FFFFFFFFLL;
    sub_15B6DB0(v13, v12);
    sub_18572D0(v12);
    HIWORD(v14) = 0;
    v15 = 0;
    v17 = 1;
    v18 = 1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B64A0);
    sub_15B7800(v13, &v11);
    sub_18572D0(&v11);
    v12[0] = 0;
    v19[1] = 0x3FB999999999999ALL;
    v19[0] = 1;
    v19[2] = 0x7D00000000ALL;
    v19[3] = 0x3FE999999999999ALL;
    sub_15B81B0(v19, v12);
    sub_18572D0(v12);
    v12[0] = 0;
    v20[0] = v21;
    v6 = (__m128i *)operator new(0x16u);
    v20[0] = v6;
    *v6 = _mm_load_si128((const __m128i *)&xmmword_18B6520);
    strcpy(&v6->m128i_i8[13], "eration)");
    v22 = v24;
    v21[0] = 21;
    v26 = 0x200000000LL;
    v20[1] = &dword_14 + 1;
    v28 = 0xFFFFFFFFLL;
    v30 = 0x1000000FFFFFFFFLL;
    strcpy(v24, "cost");
    v31 = 0x100000001LL;
    v23 = 4;
    v27 = 0;
    v29 = 257;
    v32 = 1000;
    v33 = 0;
    v34 = 10;
    v35 = 0;
    v25 = xmmword_18B64B0;
    sub_15AFF30(v20, v12);
    sub_18572D0(v12);
    v36[0] = 0x600000000LL;
    v36[1] = 0x3E800000000LL;
    v36[2] = 0x200000001LL;
    v38 = 0x200000001LL;
    v40 = 0xFFFFFFFFLL;
    v36[3] = 0x8000000101LL;
    v43 = 0x20000000101LL;
    v36[4] = 0x100000010LL;
    v44 = 0x600000100LL;
    v12[0] = 0;
    v36[5] = 0;
    v36[6] = 0xFFFFFC1800000000LL;
    v36[7] = 1000;
    v39 = 0x10000;
    v41 = 0;
    v42 = 1;
    v45 = 0x40000000001LL;
    v46 = 257;
    v47 = 1;
    v37 = xmmword_18B64C0;
    sub_15B26B0(v36, v12);
    sub_18572D0(v12);
    v51 = 0x1000100000001LL;
    v54[0] = 0x10000000001LL;
    v48 = 256;
    v49 = 3;
    v50 = 256;
    v52 = 10;
    v53 = 0;
    v12[0] = 0;
    v54[1] = 0x100017FFFFFFFLL;
    v55 = 0;
    sub_15B7350(v54, v12);
    sub_18572D0(v12);
    v12[0] = 0;
    v56 = 0;
    v57 = 0x13FFFFFFFLL;
    sub_15B3AA0(&v56, v12);
    sub_18572D0(v12);
    v12[0] = 0;
    v58 = 1000;
    v59 = 1;
    sub_15B6C70(&v58, v12);
    sub_18572D0(v12);
    v72 = 0x10100000003E8LL;
    v65 = xmmword_18B64D0;
    v77 = 0x2000000000LL;
    v66 = _mm_load_si128((const __m128i *)&xmmword_18B64E0);
    v79 = 0x6400000001LL;
    v70 = _mm_load_si128((const __m128i *)&xmmword_18B64F0);
    v75 = 256;
    v80 = 0x3FF199999999999ALL;
    v60 = 1;
    v61 = 257;
    v62 = 2;
    v63 = 0;
    v64 = 0;
    v67 = 100;
    v68 = 1;
    v69 = -1;
    v71 = 1;
    v73 = 0;
    v74 = 0;
    v76 = 1;
    v78 = 0;
    v81 = 1;
    v83 = 0;
    v84 = 0;
    v82 = xmmword_18B6500;
    v85 = 0x138800000064LL;
    v86 = 0x3FF199999999999ALL;
    v89 = 0x3FF0000000000000LL;
    v88 = 6;
    v90 = 0;
    v92 = 0x1000000;
    v91 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0x100000000000100LL;
    v87 = _mm_load_si128((const __m128i *)&xmmword_18B6510);
    sub_180C5A0(v96, "auto");
    sub_15B65B0(v13, &v10);
    sub_18572D0(&v10);
    v12[0] = 0;
    sub_8E4C30(&v11, a2, v13, v12);
    sub_18572D0(v12);
    sub_55A4F0(v12, a1, a2, a3);
    v7 = v12[0];
    v8 = v12[1];
    sub_8E3610(&v11);
    LOBYTE(v3) = (unsigned int)sub_8E3730(&v11, 0, 0) != 1;
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 8))-- == 1 )
        sub_15D7BC0(v8, v7);
    }
    sub_8E4B60(&v11);
    if ( v22 != v24 )
      operator delete(v22, *(_QWORD *)v24 + 1LL);
    if ( v20[0] != v21 )
      operator delete(v20[0], v21[0] + 1LL);
  }
  return (unsigned int)v3;
}

