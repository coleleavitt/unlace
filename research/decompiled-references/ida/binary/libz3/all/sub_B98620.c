void __fastcall sub_B98620(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v7; // rdi
  _DWORD *v8; // rbx
  __int64 v10; // rbx
  signed __int64 v11; // r13
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  __m128i v14; // xmm3
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  _BYTE *v17; // r14
  _QWORD *v18; // rax
  signed __int64 v19; // r14
  _BYTE *v20; // r15
  _QWORD *v21; // rax
  __m128i v22; // xmm7
  __int128 v23; // xmm0
  char v24; // al
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __m128i v30; // xmm6
  __m128i v31; // xmm3
  __m128i v32; // xmm2
  __m128i v33; // xmm1
  __m128i v34; // xmm0
  __m128i v35; // xmm8
  __m128i si128; // xmm0
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __int128 v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int128 v46; // xmm0
  __int64 v47; // rcx
  __int64 v48; // rdx
  __m128i v49; // xmm0
  _QWORD *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rdx
  void *v53; // rax
  _QWORD *v54; // rdi
  _QWORD *v55; // rdi
  __m128i v56[2]; // [rsp+0h] [rbp-448h] BYREF
  __m128i v57; // [rsp+20h] [rbp-428h]
  __m128i v58; // [rsp+30h] [rbp-418h]
  __m128i v59; // [rsp+40h] [rbp-408h]
  __m128i v60; // [rsp+50h] [rbp-3F8h]
  __m128i v61; // [rsp+60h] [rbp-3E8h]
  __m128i v62; // [rsp+70h] [rbp-3D8h]
  __m128i v63; // [rsp+80h] [rbp-3C8h]
  __m128i v64; // [rsp+90h] [rbp-3B8h]
  __m128i v65[2]; // [rsp+A0h] [rbp-3A8h] BYREF
  __m128i v66; // [rsp+C0h] [rbp-388h]
  __m128i v67; // [rsp+D0h] [rbp-378h]
  __m128i v68; // [rsp+E0h] [rbp-368h]
  __m128i v69[5]; // [rsp+F0h] [rbp-358h] BYREF
  _QWORD v70[7]; // [rsp+140h] [rbp-308h]
  void *v71; // [rsp+178h] [rbp-2D0h]
  signed __int64 v72; // [rsp+180h] [rbp-2C8h]
  _QWORD v73[2]; // [rsp+188h] [rbp-2C0h] BYREF
  void *v74; // [rsp+198h] [rbp-2B0h]
  signed __int64 v75; // [rsp+1A0h] [rbp-2A8h]
  _QWORD v76[2]; // [rsp+1A8h] [rbp-2A0h] BYREF
  __int128 v77; // [rsp+1B8h] [rbp-290h]
  __int64 v78; // [rsp+1C8h] [rbp-280h]
  char v79; // [rsp+1D0h] [rbp-278h]
  __int64 v80; // [rsp+1D4h] [rbp-274h]
  __int16 v81; // [rsp+1DCh] [rbp-26Ch]
  __int64 v82; // [rsp+1E0h] [rbp-268h]
  __int64 v83; // [rsp+1E8h] [rbp-260h]
  int v84; // [rsp+1F0h] [rbp-258h]
  char v85; // [rsp+1F4h] [rbp-254h]
  int v86; // [rsp+1F8h] [rbp-250h]
  __int64 v87; // [rsp+200h] [rbp-248h]
  __m128i v88; // [rsp+208h] [rbp-240h]
  __m128i v89; // [rsp+218h] [rbp-230h]
  __m128i v90; // [rsp+228h] [rbp-220h]
  __m128i v91; // [rsp+238h] [rbp-210h]
  __m128i v92; // [rsp+248h] [rbp-200h]
  __m128i v93; // [rsp+258h] [rbp-1F0h]
  __m128i v94; // [rsp+268h] [rbp-1E0h]
  __m128i v95; // [rsp+278h] [rbp-1D0h]
  _BYTE v96[19]; // [rsp+288h] [rbp-1C0h]
  _DWORD v97[12]; // [rsp+29Ch] [rbp-1ACh]
  __int64 v98; // [rsp+2CCh] [rbp-17Ch]
  int v99; // [rsp+2D4h] [rbp-174h]
  int v100; // [rsp+2D8h] [rbp-170h]
  char v101; // [rsp+2DCh] [rbp-16Ch]
  int v102; // [rsp+2E0h] [rbp-168h]
  int v103; // [rsp+2E4h] [rbp-164h]
  __int16 v104; // [rsp+2E8h] [rbp-160h]
  int v105; // [rsp+2ECh] [rbp-15Ch]
  char v106; // [rsp+2F0h] [rbp-158h]
  int v107; // [rsp+2F4h] [rbp-154h]
  __int128 v108; // [rsp+2F8h] [rbp-150h]
  __m128i v109; // [rsp+308h] [rbp-140h]
  int v110; // [rsp+318h] [rbp-130h]
  char v111; // [rsp+31Ch] [rbp-12Ch]
  __m128i v112; // [rsp+320h] [rbp-128h]
  __int64 v113; // [rsp+330h] [rbp-118h]
  char v114; // [rsp+338h] [rbp-110h]
  __int64 v115; // [rsp+33Ch] [rbp-10Ch]
  char v116; // [rsp+344h] [rbp-104h]
  __int64 v117; // [rsp+348h] [rbp-100h]
  __int16 v118; // [rsp+350h] [rbp-F8h]
  __int64 v119; // [rsp+354h] [rbp-F4h]
  __int64 v120; // [rsp+35Ch] [rbp-ECh]
  char v121; // [rsp+364h] [rbp-E4h]
  __int64 v122; // [rsp+368h] [rbp-E0h]
  __int64 v123; // [rsp+370h] [rbp-D8h]
  char v124; // [rsp+378h] [rbp-D0h]
  __int128 v125; // [rsp+380h] [rbp-C8h]
  int v126; // [rsp+390h] [rbp-B8h]
  char v127; // [rsp+394h] [rbp-B4h]
  __int64 v128; // [rsp+398h] [rbp-B0h]
  __int64 v129; // [rsp+3A0h] [rbp-A8h]
  __m128i v130; // [rsp+3A8h] [rbp-A0h]
  int v131; // [rsp+3B8h] [rbp-90h]
  __int64 v132; // [rsp+3C0h] [rbp-88h]
  int v133; // [rsp+3C8h] [rbp-80h]
  __int64 v134; // [rsp+3D0h] [rbp-78h]
  int v135; // [rsp+3D8h] [rbp-70h]
  __int16 v136; // [rsp+3DCh] [rbp-6Ch]
  int v137; // [rsp+3E0h] [rbp-68h]
  __int64 v138; // [rsp+3E4h] [rbp-64h]
  char v139; // [rsp+3ECh] [rbp-5Ch]
  __int64 v140; // [rsp+3F0h] [rbp-58h]
  char v141; // [rsp+3F8h] [rbp-50h]
  __int64 v142; // [rsp+400h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 80);
  if ( v7 )
  {
    sub_12638A0(
      v7,
      a1 + 72,
      a1 + 160,
      a4,
      a5,
      a6,
      v56[0].m128i_i32[0],
      v56[0].m128i_i32[2],
      v56[1].m128i_i32[0],
      v56[1].m128i_i64[1],
      v57.m128i_i64[0],
      v57.m128i_i64[1],
      (void *)v58.m128i_i64[0]);
    v8 = *(_DWORD **)(a1 + 72);
    if ( v8 )
    {
      if ( v8[4]-- == 1 )
      {
        (**(void (__fastcall ***)(_DWORD *))v8)(v8);
        sub_186B220(v8);
      }
    }
    *(_BYTE *)(a1 + 156) = 0;
    *(_OWORD *)(a1 + 72) = 0;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL);
  v11 = *(_QWORD *)(v10 + 112);
  v66 = _mm_loadu_si128((const __m128i *)v10);
  v12 = _mm_loadu_si128((const __m128i *)(v10 + 16));
  v69[2] = v66;
  v67 = v12;
  v13 = _mm_loadu_si128((const __m128i *)(v10 + 32));
  v69[3] = v12;
  v68 = v13;
  v14 = _mm_loadu_si128((const __m128i *)(v10 + 48));
  v69[4] = v13;
  v69[0] = v14;
  *(__int32 *)((char *)&v69[0].m128i_i32[3] + 3) = *(_DWORD *)(v10 + 63);
  *(__m128i *)v70 = _mm_load_si128(v69);
  v15 = _mm_loadu_si128((const __m128i *)(v10 + 72));
  *(_DWORD *)((char *)&v70[1] + 7) = *(__int32 *)((char *)&v69[0].m128i_i32[3] + 3);
  *(__m128i *)&v70[3] = v15;
  v16 = _mm_loadu_si128((const __m128i *)(v10 + 88));
  v71 = v73;
  v17 = *(_BYTE **)(v10 + 104);
  *(__m128i *)&v70[5] = v16;
  if ( (unsigned __int64)v11 > 0xF )
  {
    if ( v11 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v11 + 1 < 0 )
      std::__throw_bad_alloc();
    v53 = (void *)operator new(v11 + 1);
    v73[0] = v11;
    v71 = v53;
    v54 = v53;
  }
  else
  {
    if ( v11 == 1 )
    {
      LOBYTE(v73[0]) = *v17;
      goto LABEL_9;
    }
    if ( !v11 )
    {
LABEL_9:
      v18 = v73;
      goto LABEL_10;
    }
    v54 = v73;
  }
  memcpy(v54, v17, v11);
  v18 = v71;
LABEL_10:
  v72 = v11;
  *((_BYTE *)v18 + v11) = 0;
  v19 = *(_QWORD *)(v10 + 144);
  v74 = v76;
  v20 = *(_BYTE **)(v10 + 136);
  if ( (unsigned __int64)v19 > 0xF )
  {
    if ( v19 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    if ( v19 + 1 < 0 )
      std::__throw_bad_alloc();
    v74 = (void *)operator new(v19 + 1);
    v55 = v74;
    v76[0] = v19;
  }
  else
  {
    if ( v19 == 1 )
    {
      LOBYTE(v76[0]) = *v20;
      goto LABEL_13;
    }
    if ( !v19 )
    {
LABEL_13:
      v21 = v76;
      goto LABEL_14;
    }
    v55 = v76;
  }
  memcpy(v55, v20, v19);
  v21 = v74;
LABEL_14:
  v75 = v19;
  *((_BYTE *)v21 + v19) = 0;
  v22 = _mm_loadu_si128((const __m128i *)(v10 + 248));
  v23 = *(_OWORD *)(v10 + 168);
  v78 = *(_QWORD *)(v10 + 184);
  v24 = *(_BYTE *)(v10 + 192);
  v25 = *(_QWORD *)(v10 + 216);
  v26 = *(_DWORD *)(v10 + 224);
  v77 = v23;
  v79 = v24;
  v27 = *(_QWORD *)(v10 + 196);
  v28 = *(_QWORD *)(v10 + 208);
  v83 = v25;
  v80 = v27;
  LOWORD(v27) = *(_WORD *)(v10 + 204);
  v84 = v26;
  v81 = v27;
  LOBYTE(v27) = *(_BYTE *)(v10 + 228);
  v82 = v28;
  v85 = v27;
  v86 = *(_DWORD *)(v10 + 232);
  v29 = *(_QWORD *)(v10 + 240);
  v57 = v22;
  v30 = _mm_loadu_si128((const __m128i *)(v10 + 264));
  v87 = v29;
  v58 = v30;
  v59 = _mm_loadu_si128((const __m128i *)(v10 + 280));
  v60 = _mm_loadu_si128((const __m128i *)(v10 + 296));
  v31 = _mm_loadu_si128((const __m128i *)(v10 + 312));
  v88 = v22;
  v61 = v31;
  v32 = _mm_loadu_si128((const __m128i *)(v10 + 328));
  v89 = v30;
  v62 = v32;
  v33 = _mm_loadu_si128((const __m128i *)(v10 + 344));
  v90 = v59;
  v63 = v33;
  v34 = _mm_loadu_si128((const __m128i *)(v10 + 360));
  v94 = v33;
  v64 = v34;
  v35 = _mm_loadu_si128((const __m128i *)(v10 + 376));
  v95 = v34;
  v65[0] = v35;
  LODWORD(v29) = *(_DWORD *)(v10 + 391);
  v91 = v60;
  *(__int32 *)((char *)&v65[0].m128i_i32[3] + 3) = v29;
  si128 = _mm_load_si128(v65);
  v92 = v31;
  *(__m128i *)v96 = si128;
  v37 = _mm_loadu_si128((const __m128i *)(v10 + 396));
  *(_DWORD *)&v96[15] = v29;
  v56[0] = v37;
  v38 = _mm_loadu_si128((const __m128i *)(v10 + 405));
  v93 = v32;
  *(__m128i *)((char *)v56 + 9) = v38;
  *(__m128i *)v97 = _mm_load_si128(v56);
  *(__m128i *)((char *)&v97[2] + 1) = v38;
  *(__m128i *)&v97[7] = _mm_loadu_si128((const __m128i *)(v10 + 424));
  v39 = *(_OWORD *)(v10 + 488);
  v97[11] = *(_DWORD *)(v10 + 440);
  v98 = *(_QWORD *)(v10 + 444);
  v99 = *(_DWORD *)(v10 + 452);
  v40 = *(_QWORD *)(v10 + 456);
  v108 = v39;
  v41 = v40 << 24 >> 24;
  v109 = _mm_loadu_si128((const __m128i *)(v10 + 504));
  v42 = _mm_loadu_si128((const __m128i *)(v10 + 528));
  v100 = v41;
  v101 = BYTE4(v41);
  LODWORD(v41) = *(_DWORD *)(v10 + 464);
  v112 = v42;
  v102 = v41;
  v103 = *(_DWORD *)(v10 + 468);
  v104 = *(_WORD *)(v10 + 472);
  v105 = *(_DWORD *)(v10 + 476);
  v106 = *(_BYTE *)(v10 + 480);
  v107 = *(_DWORD *)(v10 + 484);
  v110 = *(_DWORD *)(v10 + 520);
  v111 = *(_BYTE *)(v10 + 524);
  v113 = *(_QWORD *)(v10 + 544);
  LOBYTE(v41) = *(_BYTE *)(v10 + 552);
  v42.m128i_i64[0] = *(_QWORD *)(v10 + 608);
  v115 = *(_QWORD *)(v10 + 556);
  LOBYTE(v26) = *(_BYTE *)(v10 + 596);
  v114 = v41;
  LOBYTE(v41) = *(_BYTE *)(v10 + 564);
  v121 = v26;
  v43 = *(_QWORD *)(v10 + 600);
  v44 = *(_QWORD *)(v10 + 580);
  v116 = v41;
  v122 = v43;
  LOBYTE(v43) = *(_BYTE *)(v10 + 616);
  v45 = *(_QWORD *)(v10 + 568);
  v119 = v44;
  v124 = v43;
  LODWORD(v43) = *(_DWORD *)(v10 + 640);
  v123 = v42.m128i_i64[0];
  v46 = *(_OWORD *)(v10 + 624);
  v47 = *(_QWORD *)(v10 + 588);
  v126 = v43;
  LOBYTE(v43) = *(_BYTE *)(v10 + 644);
  v117 = v45;
  LOWORD(v45) = *(_WORD *)(v10 + 576);
  v127 = v43;
  v48 = *(_QWORD *)(v10 + 648);
  v125 = v46;
  *(_QWORD *)&v46 = *(_QWORD *)(v10 + 656);
  v118 = v45;
  v128 = v48;
  v120 = v47;
  v129 = v46;
  v49 = _mm_loadu_si128((const __m128i *)(v10 + 664));
  v50 = v74;
  v131 = *(_DWORD *)(v10 + 680);
  LODWORD(v48) = *(_DWORD *)(v10 + 696);
  v130 = v49;
  v49.m128i_i64[0] = *(_QWORD *)(v10 + 688);
  v133 = v48;
  v51 = *(_QWORD *)(v10 + 704);
  v132 = v49.m128i_i64[0];
  v49.m128i_i64[0] = *(_QWORD *)(v10 + 736);
  v134 = v51;
  LODWORD(v51) = *(_DWORD *)(v10 + 712);
  v140 = v49.m128i_i64[0];
  v135 = v51;
  v136 = *(_WORD *)(v10 + 716);
  v137 = *(_DWORD *)(v10 + 720);
  v138 = *(_QWORD *)(v10 + 724);
  v139 = *(_BYTE *)(v10 + 732);
  v141 = *(_BYTE *)(v10 + 744);
  v52 = *(_QWORD *)(v10 + 752);
  *(_BYTE *)(a1 + 93) = BYTE1(v45) & 1;
  v142 = v52;
  *(_QWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 92) = 0;
  *(_BYTE *)(a1 + 156) = 0;
  if ( v50 != v76 )
    operator delete(v50, v76[0] + 1LL);
  if ( v71 != v73 )
    operator delete(v71, v73[0] + 1LL);
}

