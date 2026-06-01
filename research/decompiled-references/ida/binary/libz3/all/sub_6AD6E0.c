__int64 __fastcall sub_6AD6E0(__int64 a1, _QWORD *a2)
{
  char **exception; // r12
  _OWORD *v4; // rax
  _OWORD *v5; // rax
  __int64 v6; // rax
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 **v11; // rbx
  __int64 **v12; // r14
  __int64 *v13; // r15
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdi
  bool v20; // zf
  __int64 *v21; // rcx
  __int64 *v22; // r15
  __int64 v23; // rsi
  int v24; // eax
  __m128i **v25; // rsi
  __int64 v26; // r13
  __m128i *v27; // rax
  __m128i v28; // xmm0
  __m128i *v29; // rbx
  __int64 **v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // r8d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdi
  __m128i v37; // xmm0
  unsigned int v38; // ebx
  __int64 v39; // rdi
  char v40; // r14
  __int64 *v41; // rbx
  __int64 *v42; // r15
  __int64 v43; // rsi
  __int64 v44; // rdi
  _QWORD *v46; // rax
  __int64 *v48; // [rsp+0h] [rbp-400h]
  unsigned int v49; // [rsp+8h] [rbp-3F8h]
  __int64 v50; // [rsp+18h] [rbp-3E8h] BYREF
  __int64 v51; // [rsp+20h] [rbp-3E0h] BYREF
  __m128i v52; // [rsp+28h] [rbp-3D8h] BYREF
  __int64 *v53; // [rsp+38h] [rbp-3C8h]
  _OWORD v54[2]; // [rsp+48h] [rbp-3B8h] BYREF
  _OWORD *v55; // [rsp+68h] [rbp-398h]
  __int64 v56; // [rsp+70h] [rbp-390h]
  __m128i v57[2]; // [rsp+78h] [rbp-388h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-360h]
  __int64 v59; // [rsp+A8h] [rbp-358h]
  __m128i si128; // [rsp+B0h] [rbp-350h]
  __int16 v61; // [rsp+C0h] [rbp-340h]
  char v62; // [rsp+C2h] [rbp-33Eh]
  _QWORD v63[4]; // [rsp+C8h] [rbp-338h] BYREF
  __int64 v64[4]; // [rsp+E8h] [rbp-318h] BYREF
  __int64 v65[4]; // [rsp+108h] [rbp-2F8h] BYREF
  __int128 v66; // [rsp+128h] [rbp-2D8h]
  __int64 v67; // [rsp+138h] [rbp-2C8h]
  char v68; // [rsp+140h] [rbp-2C0h]
  __int64 v69; // [rsp+144h] [rbp-2BCh]
  __int16 v70; // [rsp+14Ch] [rbp-2B4h]
  __int64 v71; // [rsp+150h] [rbp-2B0h]
  __int64 v72; // [rsp+158h] [rbp-2A8h]
  int v73; // [rsp+160h] [rbp-2A0h]
  char v74; // [rsp+164h] [rbp-29Ch]
  int v75; // [rsp+168h] [rbp-298h]
  __int64 v76; // [rsp+170h] [rbp-290h]
  _QWORD v77[8]; // [rsp+178h] [rbp-288h] BYREF
  __int128 v78; // [rsp+1B8h] [rbp-248h]
  __int64 v79; // [rsp+1C8h] [rbp-238h]
  __int64 v80; // [rsp+1D0h] [rbp-230h]
  __int64 v81; // [rsp+1D8h] [rbp-228h]
  __int64 v82; // [rsp+1E0h] [rbp-220h]
  __int64 v83; // [rsp+1E8h] [rbp-218h]
  __int64 v84; // [rsp+1F0h] [rbp-210h]
  __int64 v85; // [rsp+1F8h] [rbp-208h]
  __int64 v86; // [rsp+200h] [rbp-200h]
  __int16 v87; // [rsp+208h] [rbp-1F8h]
  char v88; // [rsp+20Ah] [rbp-1F6h]
  __int16 v89; // [rsp+20Ch] [rbp-1F4h]
  int v90; // [rsp+210h] [rbp-1F0h]
  __int16 v91; // [rsp+214h] [rbp-1ECh]
  __int64 v92; // [rsp+218h] [rbp-1E8h]
  int v93; // [rsp+220h] [rbp-1E0h]
  char v94; // [rsp+224h] [rbp-1DCh]
  _QWORD v95[2]; // [rsp+228h] [rbp-1D8h] BYREF
  int v96; // [rsp+238h] [rbp-1C8h]
  int v97; // [rsp+23Ch] [rbp-1C4h] BYREF
  __int64 v98; // [rsp+240h] [rbp-1C0h]
  int v99; // [rsp+248h] [rbp-1B8h] BYREF
  char v100; // [rsp+24Ch] [rbp-1B4h]
  __int64 v101; // [rsp+250h] [rbp-1B0h]
  __int16 v102; // [rsp+258h] [rbp-1A8h]
  int v103; // [rsp+25Ch] [rbp-1A4h]
  char v104; // [rsp+260h] [rbp-1A0h]
  int v105; // [rsp+264h] [rbp-19Ch]
  __int128 v106; // [rsp+268h] [rbp-198h]
  __m128i v107; // [rsp+278h] [rbp-188h]
  int v108; // [rsp+288h] [rbp-178h]
  char v109; // [rsp+28Ch] [rbp-174h]
  int v110; // [rsp+290h] [rbp-170h]
  __m128i v111; // [rsp+298h] [rbp-168h]
  char v112; // [rsp+2A8h] [rbp-158h]
  __int64 v113; // [rsp+2ACh] [rbp-154h]
  char v114; // [rsp+2B4h] [rbp-14Ch]
  __int64 v115; // [rsp+2B8h] [rbp-148h]
  __int16 v116; // [rsp+2C0h] [rbp-140h]
  __int64 v117; // [rsp+2C4h] [rbp-13Ch]
  __int64 v118; // [rsp+2CCh] [rbp-134h]
  char v119; // [rsp+2D4h] [rbp-12Ch]
  __int64 v120; // [rsp+2D8h] [rbp-128h]
  __int64 v121; // [rsp+2E0h] [rbp-120h]
  char v122; // [rsp+2E8h] [rbp-118h]
  __int128 v123; // [rsp+2F0h] [rbp-110h]
  int v124; // [rsp+300h] [rbp-100h]
  char v125; // [rsp+304h] [rbp-FCh]
  __int64 v126; // [rsp+308h] [rbp-F8h]
  __int64 v127; // [rsp+310h] [rbp-F0h]
  __m128i v128; // [rsp+318h] [rbp-E8h]
  int v129; // [rsp+328h] [rbp-D8h]
  __int64 v130; // [rsp+330h] [rbp-D0h]
  int v131; // [rsp+338h] [rbp-C8h]
  __int64 v132; // [rsp+340h] [rbp-C0h]
  int v133; // [rsp+348h] [rbp-B8h]
  __int16 v134; // [rsp+34Ch] [rbp-B4h]
  int v135; // [rsp+350h] [rbp-B0h]
  __int64 v136; // [rsp+354h] [rbp-ACh]
  char v137[8]; // [rsp+370h] [rbp-90h] BYREF
  __int128 v138; // [rsp+378h] [rbp-88h]
  __int64 **v139; // [rsp+388h] [rbp-78h]
  _OWORD *v140; // [rsp+390h] [rbp-70h]
  __int64 v141; // [rsp+398h] [rbp-68h]
  int v142; // [rsp+3A0h] [rbp-60h]
  _OWORD *v143; // [rsp+3A8h] [rbp-58h]
  __int64 v144; // [rsp+3B0h] [rbp-50h]
  int v145; // [rsp+3B8h] [rbp-48h]

  v57[0].m128i_i64[0] = a2[1];
  v54[0] = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C53098), (__m128i)(unsigned __int64)off_1C52F08);
  v57[0].m128i_i64[1] = 0x100000001LL;
  v55 = v54;
  v56 = 0;
  v50 = 0;
  v51 = 0;
  v52.m128i_i64[0] = 0;
  v58 = 0x1FFFFFFFFLL;
  v54[1] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v54, (__m128i)(unsigned __int64)off_1C52F30);
  sub_15B6DB0(&v57[0].m128i_u64[1], &v52);
  sub_18572D0(&v52);
  HIWORD(v58) = 0;
  v59 = 0;
  v61 = 1;
  v62 = 1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B64A0);
  sub_15B7800(&v57[0].m128i_u64[1], &v51);
  sub_18572D0(&v51);
  v52.m128i_i64[0] = 0;
  v63[1] = 0x3FB999999999999ALL;
  v63[0] = 1;
  v63[2] = 0x7D00000000ALL;
  v63[3] = 0x3FE999999999999ALL;
  sub_15B81B0(v63, &v52);
  sub_18572D0(&v52);
  v52.m128i_i64[0] = 0;
  sub_6A99E0(v64, "(+ weight generation)");
  sub_6A99E0(v65, "cost");
  v68 = 0;
  v67 = 0x200000000LL;
  v70 = 257;
  v69 = 0xFFFFFFFFLL;
  v71 = 0x1000000FFFFFFFFLL;
  v73 = 1000;
  v72 = 0x100000001LL;
  v74 = 0;
  v75 = 10;
  v76 = 0;
  v66 = xmmword_18B64B0;
  sub_15AFF30(v64, &v52);
  sub_18572D0(&v52);
  v77[0] = 0x600000000LL;
  v77[1] = 0x3E800000000LL;
  v77[2] = 0x200000001LL;
  v79 = 0x200000001LL;
  v81 = 0xFFFFFFFFLL;
  v77[3] = 0x8000000101LL;
  v84 = 0x20000000101LL;
  v77[4] = 0x100000010LL;
  v85 = 0x600000100LL;
  v52.m128i_i64[0] = 0;
  v77[5] = 0;
  v77[6] = 0xFFFFFC1800000000LL;
  v77[7] = 1000;
  v80 = 0x10000;
  v82 = 0;
  v83 = 1;
  v86 = 0x40000000001LL;
  v87 = 257;
  v88 = 1;
  v78 = xmmword_18B64C0;
  sub_15B26B0(v77, &v52);
  sub_18572D0(&v52);
  v92 = 0x1000100000001LL;
  v95[0] = 0x10000000001LL;
  v89 = 256;
  v90 = 3;
  v91 = 256;
  v93 = 10;
  v94 = 0;
  v52.m128i_i64[0] = 0;
  v95[1] = 0x100017FFFFFFFLL;
  v96 = 0;
  sub_15B7350(v95, &v52);
  sub_18572D0(&v52);
  v52.m128i_i64[0] = 0;
  v97 = 0;
  v98 = 0x13FFFFFFFLL;
  sub_15B3AA0(&v97, &v52);
  sub_18572D0(&v52);
  v52.m128i_i64[0] = 0;
  v99 = 1000;
  v100 = 1;
  sub_15B6C70(&v99, &v52);
  sub_18572D0(&v52);
  v113 = 0x10100000003E8LL;
  v106 = xmmword_18B64D0;
  v118 = 0x2000000000LL;
  v107 = _mm_load_si128((const __m128i *)&xmmword_18B64E0);
  v120 = 0x6400000001LL;
  v111 = _mm_load_si128((const __m128i *)&xmmword_18B64F0);
  v116 = 256;
  v121 = 0x3FF199999999999ALL;
  v101 = 1;
  v102 = 257;
  v103 = 2;
  v104 = 0;
  v105 = 0;
  v108 = 100;
  v109 = 1;
  v110 = -1;
  v112 = 1;
  v114 = 0;
  v115 = 0;
  v117 = 1;
  v119 = 0;
  v122 = 1;
  v124 = 0;
  v125 = 0;
  v123 = xmmword_18B6500;
  v126 = 0x138800000064LL;
  v127 = 0x3FF199999999999ALL;
  v130 = 0x3FF0000000000000LL;
  v129 = 6;
  v131 = 0;
  v133 = 0x1000000;
  v132 = 0;
  v134 = 0;
  v135 = 0;
  v136 = 0x100000000000100LL;
  v128 = _mm_load_si128((const __m128i *)&xmmword_18B6510);
  sub_180C5A0(v137, "auto");
  sub_15B65B0(&v57[0].m128i_u64[1], &v50);
  sub_18572D0(&v50);
  v139 = nullptr;
  v138 = 0;
  v4 = (_OWORD *)sub_186B270(0x40u);
  v140 = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v141 = 8;
  v142 = 0;
  v5 = (_OWORD *)sub_186B270(0x40u);
  v143 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v144 = 8;
  v145 = 0;
  v6 = sub_70F5C0(v54);
  sub_6AB850((__int64)v54, v6);
  v10 = sub_6C0270((unsigned int)v54, 0, (unsigned int)&v57[0].m128i_u32[2], v7, v8, v9);
  sub_6AB850((__int64)v54, v10);
  v11 = v139;
  if ( v139 )
  {
    v12 = &v139[*((unsigned int *)v139 - 1)];
    if ( v139 == v12 )
      goto LABEL_19;
    do
    {
      v13 = *v11;
      if ( *v11 )
      {
        sub_2334C0(v13 + 19);
        v14 = (void *)v13[18];
        v13[12] = (__int64)&off_1C62200;
        if ( v14 )
          sub_186B220(v14);
        v15 = (void *)v13[15];
        if ( v15 )
          sub_186B220(v15);
        v16 = (void *)v13[11];
        v13[5] = (__int64)&off_1C62200;
        if ( v16 )
          sub_186B220(v16);
        v17 = (void *)v13[8];
        if ( v17 )
          sub_186B220(v17);
        v18 = *v13;
        if ( *v13 )
        {
          v19 = v13[1];
          v20 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v20 )
            sub_15D7BC0(v19, v18);
        }
        sub_186B220(v13);
      }
      ++v11;
    }
    while ( v12 != v11 );
    v12 = v139;
    if ( v139 )
LABEL_19:
      *((_DWORD *)v12 - 1) = 0;
  }
  *((_QWORD *)&v138 + 1) = a2;
  v21 = *(__int64 **)(a1 + 8);
  *(_QWORD *)&v138 = a1;
  if ( v21 )
  {
    v48 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 != v48 )
    {
      v22 = v21;
      do
      {
        v26 = *v22;
        v27 = (__m128i *)sub_186B270(0xB0u);
        v28 = _mm_loadl_epi64(v57);
        v29 = v27;
        *v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, v28);
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
        v30 = v139;
        v27[1].m128i_i64[0] = (__int64)&off_1C4E7B8;
        v27[2].m128i_i64[0] = (__int64)v27[1].m128i_i64;
        v27[1].m128i_i64[1] = v26;
        v27[3].m128i_i64[1] = 0;
        v27[2].m128i_i64[1] = (__int64)&off_1C62200;
        v27[4].m128i_i64[0] = 0;
        v27[5].m128i_i64[0] = 0;
        v27[5].m128i_i64[1] = 0;
        v27[6].m128i_i64[0] = (__int64)&off_1C62200;
        v27[7].m128i_i64[0] = 0;
        v27[7].m128i_i64[1] = 0;
        v27[8].m128i_i64[1] = 0;
        v27[9].m128i_i64[0] = 0;
        v27[10].m128i_i64[0] = 0;
        v27[10].m128i_i8[8] = 1;
        v27[9].m128i_i64[1] = v28.m128i_i64[0];
        if ( v30 )
        {
          v31 = *((_DWORD *)v30 - 1);
          if ( v31 == *((_DWORD *)v30 - 2) )
          {
            v32 = (3 * v31 + 1) >> 1;
            v33 = 8 * v32 + 8;
            if ( 8 * v31 + 8 >= (unsigned int)v33 || v31 >= v32 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_6A99E0(v52.m128i_i64, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v52);
              sub_233E40((__int64)&v52);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v49 = (3 * v31 + 1) >> 1;
            v34 = (unsigned int *)sub_186B300(v30 - 1, v33);
            v35 = v34[1];
            v30 = (__int64 **)(v34 + 2);
            v139 = (__int64 **)(v34 + 2);
            *v34 = v49;
            LODWORD(v34) = v35;
            v25 = (__m128i **)&v30[v35];
            v24 = (_DWORD)v34 + 1;
          }
          else
          {
            v23 = v31;
            v24 = v31 + 1;
            v25 = (__m128i **)&v30[v23];
          }
        }
        else
        {
          v46 = (_QWORD *)sub_186B270(0x18u);
          v30 = (__int64 **)(v46 + 1);
          *v46 = 2;
          v24 = 1;
          v139 = v30;
          v25 = (__m128i **)v30;
        }
        *v25 = v29;
        ++v22;
        *((_DWORD *)v30 - 1) = v24;
      }
      while ( v48 != v22 );
    }
  }
  do
  {
LABEL_32:
    v53 = nullptr;
    v36 = *a2;
    v37 = _mm_loadl_epi64(v57);
    v52 = _mm_unpacklo_epi64(v37, v37);
    sub_15EEF60(v36);
    v38 = 0;
LABEL_33:
    if ( v56 )
    {
      while ( v38 < *(_DWORD *)(v56 - 4) )
      {
        v39 = *(_QWORD *)(v56 + 8LL * v38);
        if ( v39 )
        {
          v40 = (*(__int64 (__fastcall **)(__int64, __m128i *, _QWORD))(*(_QWORD *)v39 + 40LL))(v39, &v52, *a2);
          ++v38;
          if ( !v40 )
            goto LABEL_33;
          v41 = v53;
          if ( !v53 )
            goto LABEL_32;
          goto LABEL_38;
        }
        ++v38;
      }
    }
    v41 = v53;
    if ( !v53 )
      break;
    v40 = 0;
LABEL_38:
    v42 = &v41[*((unsigned int *)v41 - 1)];
    if ( v41 >= v42 )
      goto LABEL_45;
    do
    {
      while ( 1 )
      {
        v43 = *v41;
        if ( *v41 )
        {
          v44 = v52.m128i_i64[1];
          v20 = (*(_DWORD *)(v43 + 8))-- == 1;
          if ( v20 )
            break;
        }
        if ( ++v41 >= v42 )
          goto LABEL_44;
      }
      sub_15D7BC0(v44, v43);
      ++v41;
    }
    while ( v41 < v42 );
LABEL_44:
    v41 = v53;
    if ( v53 )
LABEL_45:
      sub_186B220(v41 - 1);
  }
  while ( v40 );
  return sub_6B0440(v54);
}

