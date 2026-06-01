void __fastcall sub_5875C0(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  __m128i *v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rsi
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbp
  int v11; // eax
  __int64 v13; // rbx
  __int64 v14; // rdi
  std::ostream *v15; // rdi
  char **exception; // r15
  __int64 v17; // rdi
  std::ostream *v18; // rax
  __int64 v21; // [rsp+10h] [rbp-398h]
  __int64 v22; // [rsp+10h] [rbp-398h]
  __int64 v23; // [rsp+18h] [rbp-390h]
  __int64 v24; // [rsp+18h] [rbp-390h]
  __int64 v25; // [rsp+18h] [rbp-390h]
  __int64 v26; // [rsp+18h] [rbp-390h]
  __int64 v28; // [rsp+30h] [rbp-378h] BYREF
  __int64 v29; // [rsp+38h] [rbp-370h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-368h] BYREF
  _BYTE v31[32]; // [rsp+50h] [rbp-358h] BYREF
  _QWORD v32[4]; // [rsp+70h] [rbp-338h] BYREF
  __int64 v33; // [rsp+90h] [rbp-318h]
  __int64 v34; // [rsp+98h] [rbp-310h]
  __m128i si128; // [rsp+A0h] [rbp-308h]
  __int16 v36; // [rsp+B0h] [rbp-2F8h]
  char v37; // [rsp+B2h] [rbp-2F6h]
  _QWORD v38[4]; // [rsp+B8h] [rbp-2F0h] BYREF
  void *v39[2]; // [rsp+D8h] [rbp-2D0h] BYREF
  _QWORD v40[2]; // [rsp+E8h] [rbp-2C0h] BYREF
  void *v41; // [rsp+F8h] [rbp-2B0h]
  __int64 v42; // [rsp+100h] [rbp-2A8h]
  char v43[16]; // [rsp+108h] [rbp-2A0h] BYREF
  __int128 v44; // [rsp+118h] [rbp-290h]
  __int64 v45; // [rsp+128h] [rbp-280h]
  char v46; // [rsp+130h] [rbp-278h]
  __int64 v47; // [rsp+134h] [rbp-274h]
  __int16 v48; // [rsp+13Ch] [rbp-26Ch]
  __int64 v49; // [rsp+140h] [rbp-268h]
  __int64 v50; // [rsp+148h] [rbp-260h]
  int v51; // [rsp+150h] [rbp-258h]
  char v52; // [rsp+154h] [rbp-254h]
  int v53; // [rsp+158h] [rbp-250h]
  __int64 v54; // [rsp+160h] [rbp-248h]
  _QWORD v55[8]; // [rsp+168h] [rbp-240h] BYREF
  __int128 v56; // [rsp+1A8h] [rbp-200h]
  __int64 v57; // [rsp+1B8h] [rbp-1F0h]
  __int64 v58; // [rsp+1C0h] [rbp-1E8h]
  __int64 v59; // [rsp+1C8h] [rbp-1E0h]
  __int64 v60; // [rsp+1D0h] [rbp-1D8h]
  __int64 v61; // [rsp+1D8h] [rbp-1D0h]
  __int64 v62; // [rsp+1E0h] [rbp-1C8h]
  __int64 v63; // [rsp+1E8h] [rbp-1C0h]
  __int64 v64; // [rsp+1F0h] [rbp-1B8h]
  __int16 v65; // [rsp+1F8h] [rbp-1B0h]
  char v66; // [rsp+1FAh] [rbp-1AEh]
  __int16 v67; // [rsp+1FCh] [rbp-1ACh]
  int v68; // [rsp+200h] [rbp-1A8h]
  __int16 v69; // [rsp+204h] [rbp-1A4h]
  __int64 v70; // [rsp+208h] [rbp-1A0h]
  int v71; // [rsp+210h] [rbp-198h]
  char v72; // [rsp+214h] [rbp-194h]
  _QWORD v73[2]; // [rsp+218h] [rbp-190h] BYREF
  int v74; // [rsp+228h] [rbp-180h]
  int v75; // [rsp+22Ch] [rbp-17Ch] BYREF
  __int64 v76; // [rsp+230h] [rbp-178h]
  int v77; // [rsp+238h] [rbp-170h] BYREF
  char v78; // [rsp+23Ch] [rbp-16Ch]
  __int64 v79; // [rsp+240h] [rbp-168h]
  __int16 v80; // [rsp+248h] [rbp-160h]
  int v81; // [rsp+24Ch] [rbp-15Ch]
  char v82; // [rsp+250h] [rbp-158h]
  int v83; // [rsp+254h] [rbp-154h]
  __int128 v84; // [rsp+258h] [rbp-150h]
  __m128i v85; // [rsp+268h] [rbp-140h]
  int v86; // [rsp+278h] [rbp-130h]
  char v87; // [rsp+27Ch] [rbp-12Ch]
  int v88; // [rsp+280h] [rbp-128h]
  __m128i v89; // [rsp+288h] [rbp-120h]
  char v90; // [rsp+298h] [rbp-110h]
  __int64 v91; // [rsp+29Ch] [rbp-10Ch]
  char v92; // [rsp+2A4h] [rbp-104h]
  __int64 v93; // [rsp+2A8h] [rbp-100h]
  __int16 v94; // [rsp+2B0h] [rbp-F8h]
  __int64 v95; // [rsp+2B4h] [rbp-F4h]
  __int64 v96; // [rsp+2BCh] [rbp-ECh]
  char v97; // [rsp+2C4h] [rbp-E4h]
  __int64 v98; // [rsp+2C8h] [rbp-E0h]
  __int64 v99; // [rsp+2D0h] [rbp-D8h]
  char v100; // [rsp+2D8h] [rbp-D0h]
  __int128 v101; // [rsp+2E0h] [rbp-C8h]
  int v102; // [rsp+2F0h] [rbp-B8h]
  char v103; // [rsp+2F4h] [rbp-B4h]
  __int64 v104; // [rsp+2F8h] [rbp-B0h]
  __int64 v105; // [rsp+300h] [rbp-A8h]
  __m128i v106; // [rsp+308h] [rbp-A0h]
  int v107; // [rsp+318h] [rbp-90h]
  __int64 v108; // [rsp+320h] [rbp-88h]
  int v109; // [rsp+328h] [rbp-80h]
  __int64 v110; // [rsp+330h] [rbp-78h]
  int v111; // [rsp+338h] [rbp-70h]
  __int16 v112; // [rsp+33Ch] [rbp-6Ch]
  int v113; // [rsp+340h] [rbp-68h]
  __int64 v114; // [rsp+344h] [rbp-64h]
  _BYTE v115[72]; // [rsp+360h] [rbp-48h] BYREF

  v32[0] = 0x100000001LL;
  v28 = 0;
  v29 = 0;
  v30[0] = 0;
  v33 = 0x1FFFFFFFFLL;
  sub_15B6DB0(v32, v30);
  sub_18572D0(v30);
  HIWORD(v33) = 0;
  v34 = 0;
  v36 = 1;
  v37 = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B64A0);
  sub_15B7800(v32, &v29);
  sub_18572D0(&v29);
  v30[0] = 0;
  v38[1] = 0x3FB999999999999ALL;
  v38[0] = 1;
  v38[2] = 0x7D00000000ALL;
  v38[3] = 0x3FE999999999999ALL;
  sub_15B81B0(v38, v30);
  sub_18572D0(v30);
  v30[0] = 0;
  v39[0] = v40;
  v5 = (__m128i *)operator new(0x16u);
  v39[0] = v5;
  *v5 = _mm_load_si128((const __m128i *)&xmmword_18B6520);
  strcpy(&v5->m128i_i8[13], "eration)");
  v41 = v43;
  v40[0] = 21;
  v45 = 0x200000000LL;
  v39[1] = &dword_14 + 1;
  v47 = 0xFFFFFFFFLL;
  v49 = 0x1000000FFFFFFFFLL;
  strcpy(v43, "cost");
  v50 = 0x100000001LL;
  v42 = 4;
  v46 = 0;
  v48 = 257;
  v51 = 1000;
  v52 = 0;
  v53 = 10;
  v54 = 0;
  v44 = xmmword_18B64B0;
  sub_15AFF30(v39, v30);
  sub_18572D0(v30);
  v55[0] = 0x600000000LL;
  v55[1] = 0x3E800000000LL;
  v55[2] = 0x200000001LL;
  v57 = 0x200000001LL;
  v59 = 0xFFFFFFFFLL;
  v62 = 0x20000000101LL;
  v55[3] = 0x8000000101LL;
  v63 = 0x600000100LL;
  v30[0] = 0;
  v55[4] = 0x100000010LL;
  v55[5] = 0;
  v55[6] = 0xFFFFFC1800000000LL;
  v55[7] = 1000;
  v58 = 0x10000;
  v60 = 0;
  v61 = 1;
  v64 = 0x40000000001LL;
  v65 = 257;
  v66 = 1;
  v56 = xmmword_18B64C0;
  sub_15B26B0(v55, v30);
  sub_18572D0(v30);
  v70 = 0x1000100000001LL;
  v73[0] = 0x10000000001LL;
  v67 = 256;
  v68 = 3;
  v69 = 256;
  v71 = 10;
  v72 = 0;
  v30[0] = 0;
  v73[1] = 0x100017FFFFFFFLL;
  v74 = 0;
  sub_15B7350(v73, v30);
  sub_18572D0(v30);
  v30[0] = 0;
  v75 = 0;
  v76 = 0x13FFFFFFFLL;
  sub_15B3AA0(&v75, v30);
  sub_18572D0(v30);
  v30[0] = 0;
  v77 = 1000;
  v78 = 1;
  sub_15B6C70(&v77, v30);
  sub_18572D0(v30);
  v91 = 0x10100000003E8LL;
  v84 = xmmword_18B64D0;
  v96 = 0x2000000000LL;
  v85 = _mm_load_si128((const __m128i *)&xmmword_18B64E0);
  v98 = 0x6400000001LL;
  v89 = _mm_load_si128((const __m128i *)&xmmword_18B64F0);
  v94 = 256;
  v99 = 0x3FF199999999999ALL;
  v79 = 1;
  v80 = 257;
  v81 = 2;
  v82 = 0;
  v83 = 0;
  v86 = 100;
  v87 = 1;
  v88 = -1;
  v90 = 1;
  v92 = 0;
  v93 = 0;
  v95 = 1;
  v97 = 0;
  v100 = 1;
  v102 = 0;
  v103 = 0;
  v101 = xmmword_18B6500;
  v104 = 0x138800000064LL;
  v105 = 0x3FF199999999999ALL;
  v6 = _mm_load_si128((const __m128i *)&xmmword_18B6510);
  v108 = 0x3FF0000000000000LL;
  v107 = 6;
  v109 = 0;
  v111 = 0x1000000;
  v110 = 0;
  v112 = 0;
  v113 = 0;
  v114 = 0x100000000000100LL;
  v106 = v6;
  sub_180C5A0(v115, "auto");
  sub_15B65B0(v32, &v28);
  sub_18572D0(&v28);
  v7 = *(_QWORD *)(a1 + 40);
  v30[0] = 0;
  sub_8E4C30(&v29, v7, v32, v30);
  sub_18572D0(v30);
  v8 = *(_QWORD *)(a1 + 40);
  sub_15E1B70(v8);
  v9 = sub_15E1A70(v8);
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  sub_8E3610(&v29);
  v11 = sub_8E3730(&v29, 0, 0);
  if ( v11 == -1 )
  {
    if ( (unsigned int)sub_180B130(&v29) > 2 )
    {
      if ( (unsigned __int8)sub_186A530(*(double *)v6.m128i_i64) )
      {
        sub_186A4C0(*(double *)v6.m128i_i64);
        v13 = sub_180B150(&v29, 0);
        if ( a2 )
        {
          strlen(a2);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::ios::clear();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v13, " verified\n");
      }
      else
      {
        sub_180B150(&v29, 0);
        if ( a2 )
        {
          strlen(a2);
          std::__ostream_insert<char,std::char_traits<char>>();
        }
        else
        {
          std::ios::clear();
        }
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
  }
  else if ( v11 == 1 )
  {
    sub_180B130(&v29);
    if ( (unsigned __int8)sub_186A530(*(double *)v6.m128i_i64) )
    {
      sub_186A4C0(*(double *)v6.m128i_i64);
      v21 = sub_180B150(&v29, 0);
      std::__ostream_insert<char,std::char_traits<char>>();
      v14 = sub_17F35B0(v21, 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      v23 = sub_180B150(v14, "\n");
      sub_1606360(v30, a3, *(_QWORD *)(a1 + 40), 0, 0, 0);
      sub_160E8B0(v23, v30);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v31);
      v24 = sub_180B150(v31, "\n");
      sub_1606360(v30, a4, *(_QWORD *)(a1 + 40), 0, 0, 0);
      sub_160E8B0(v24, v30);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v31);
      v15 = (std::ostream *)sub_180B150(v31, "\n");
      std::ostream::flush(v15);
      sub_186A500(v15, "\n");
    }
    else
    {
      v22 = sub_180B150(&v29, 0);
      std::__ostream_insert<char,std::char_traits<char>>();
      v17 = sub_17F35B0(v22, 1);
      std::__ostream_insert<char,std::char_traits<char>>();
      v25 = sub_180B150(v17, "\n");
      sub_1606360(v30, a3, *(_QWORD *)(a1 + 40), 0, 0, 0);
      sub_160E8B0(v25, v30);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v31);
      v26 = sub_180B150(v31, "\n");
      sub_1606360(v30, a4, *(_QWORD *)(a1 + 40), 0, 0, 0);
      sub_160E8B0(v26, v30);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_18572D0(v31);
      v18 = (std::ostream *)sub_180B150(v31, "\n");
      std::ostream::flush(v18);
    }
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v30, "operation was not verified");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v30);
    sub_233E40((__int64)v30);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 8))-- == 1 )
      sub_15D7BC0(v8, v10);
  }
  sub_8E4B60(&v29);
  if ( v41 != v43 )
    operator delete(v41, *(_QWORD *)v43 + 1LL);
  if ( v39[0] != v40 )
    operator delete(v39[0], v40[0] + 1LL);
}

