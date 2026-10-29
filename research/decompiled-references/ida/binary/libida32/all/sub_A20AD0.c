void __fastcall sub_A20AD0(__int64 a1, unsigned int a2, char a3, __int64 *a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 v7; // rbp
  char v8; // si
  char v9; // dl
  char v10; // cl
  _BYTE *v11; // rsi
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  char v18; // dl
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rax
  char v32; // cl
  char v33; // dl
  int v34; // eax
  __int64 v35; // r9
  __int64 v36; // r14
  __int64 v37; // r8
  const void *v38; // rcx
  char v39; // dl
  _BYTE *v40; // rsi
  __int64 v41; // rdx
  _BYTE *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r9
  __int64 v45; // r13
  __int64 v46; // r8
  __int64 v47; // rcx
  char v48; // dl
  _BYTE *v49; // rsi
  __int64 v50; // rdx
  _BYTE *v51; // rsi
  __int64 v52; // rdx
  _BYTE *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // r9
  char v56; // al
  _QWORD *v57; // r15
  _QWORD *v58; // r12
  char *v59; // rdi
  char *v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rbp
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int128 v90; // [rsp+10h] [rbp-4C8h]
  int v91; // [rsp+24h] [rbp-4B4h]
  __int64 *v92; // [rsp+28h] [rbp-4B0h]
  __int64 i; // [rsp+40h] [rbp-498h]
  __int64 v94; // [rsp+60h] [rbp-478h]
  __int64 *v95; // [rsp+68h] [rbp-470h]
  __m128i v98[2]; // [rsp+80h] [rbp-458h] BYREF
  __int16 v99; // [rsp+A0h] [rbp-438h]
  __m128i v100; // [rsp+B0h] [rbp-428h] BYREF
  __int64 v101; // [rsp+C0h] [rbp-418h] BYREF
  __int64 v102; // [rsp+D0h] [rbp-408h]
  __m128i v103[8]; // [rsp+E0h] [rbp-3F8h] BYREF
  __m128i v104; // [rsp+160h] [rbp-378h] BYREF
  __m128i v105; // [rsp+170h] [rbp-368h] BYREF
  __int64 v106; // [rsp+180h] [rbp-358h]
  void *v107; // [rsp+188h] [rbp-350h]
  __int64 v108; // [rsp+190h] [rbp-348h]
  _BYTE v109[16]; // [rsp+198h] [rbp-340h] BYREF
  void *v110; // [rsp+1A8h] [rbp-330h]
  __int64 v111; // [rsp+1B8h] [rbp-320h] BYREF
  char v112; // [rsp+1C8h] [rbp-310h]
  void *v113; // [rsp+1D0h] [rbp-308h]
  __int64 v114; // [rsp+1E0h] [rbp-2F8h] BYREF
  char v115; // [rsp+1F0h] [rbp-2E8h]
  char v116; // [rsp+1F8h] [rbp-2E0h]
  __m128i v117; // [rsp+200h] [rbp-2D8h] BYREF
  __m128i v118; // [rsp+210h] [rbp-2C8h] BYREF
  __int64 v119; // [rsp+220h] [rbp-2B8h]
  void *v120; // [rsp+228h] [rbp-2B0h] BYREF
  __int64 v121; // [rsp+230h] [rbp-2A8h]
  _BYTE v122[16]; // [rsp+238h] [rbp-2A0h] BYREF
  __int16 v123; // [rsp+248h] [rbp-290h]
  void *v124; // [rsp+250h] [rbp-288h] BYREF
  void *v125; // [rsp+258h] [rbp-280h] BYREF
  __int64 v126; // [rsp+260h] [rbp-278h] BYREF
  _BYTE v127[16]; // [rsp+268h] [rbp-270h] BYREF
  void *v128[2]; // [rsp+278h] [rbp-260h] BYREF
  _BYTE v129[16]; // [rsp+288h] [rbp-250h] BYREF
  void *v130; // [rsp+298h] [rbp-240h]
  _QWORD *v131; // [rsp+2A0h] [rbp-238h]
  __int64 v132; // [rsp+2A8h] [rbp-230h]
  void *v133[2]; // [rsp+2B0h] [rbp-228h] BYREF
  _BYTE v134[16]; // [rsp+2C0h] [rbp-218h] BYREF
  char v135; // [rsp+2D0h] [rbp-208h]
  void *v136[2]; // [rsp+2D8h] [rbp-200h] BYREF
  _BYTE v137[16]; // [rsp+2E8h] [rbp-1F0h] BYREF
  char v138; // [rsp+2F8h] [rbp-1E0h]
  void *v139[2]; // [rsp+300h] [rbp-1D8h] BYREF
  _BYTE v140[16]; // [rsp+310h] [rbp-1C8h] BYREF
  char v141; // [rsp+320h] [rbp-1B8h]
  char v142; // [rsp+328h] [rbp-1B0h]
  __m128i v143; // [rsp+330h] [rbp-1A8h] BYREF
  char v144; // [rsp+340h] [rbp-198h] BYREF
  char v145; // [rsp+350h] [rbp-188h]
  _QWORD v146[2]; // [rsp+358h] [rbp-180h] BYREF
  char v147; // [rsp+368h] [rbp-170h] BYREF
  _BYTE v148[80]; // [rsp+378h] [rbp-160h] BYREF
  char v149; // [rsp+3C8h] [rbp-110h]
  _BYTE v150[40]; // [rsp+3D0h] [rbp-108h] BYREF
  _BYTE v151[40]; // [rsp+3F8h] [rbp-E0h] BYREF
  _BYTE v152[40]; // [rsp+420h] [rbp-B8h] BYREF
  _BYTE v153[40]; // [rsp+448h] [rbp-90h] BYREF
  _BYTE v154[40]; // [rsp+470h] [rbp-68h] BYREF
  __int64 v155; // [rsp+498h] [rbp-40h]

  v6 = a4;
  v7 = 0;
  v143.m128i_i64[0] = (__int64)&v144;
  *(_QWORD *)&v90 = a5;
  *((_QWORD *)&v90 + 1) = a6;
  v143.m128i_i64[1] = 0;
  v144 = 0;
  v145 &= 0xF0u;
  v146[0] = &v147;
  v146[1] = 0;
  v147 = 0;
  v148[32] = 0;
  v148[72] = 0;
  v149 &= 0xC0u;
  v150[32] = 0;
  v151[32] = 0;
  v152[32] = 0;
  v153[32] = 0;
  v154[32] = 0;
  BYTE4(v155) = 0;
  if ( a3 )
    v7 = a2 | 0x100000000LL;
  sub_A1E860(a1, (__int64)(a4 + 2), (__int64)&v143, *a4, a4[1], a6);
  v8 = *((_BYTE *)v6 + 57);
  v9 = *((_BYTE *)v6 + 56);
  v117.m128i_i64[0] = (__int64)&v118;
  v10 = 4 * (v8 & 1);
  if ( !v8 )
    v9 = 0;
  v11 = (_BYTE *)v6[5];
  v12 = (8 * (v9 & 1)) | v10 | v145 & 0xF3;
  v13 = v6[6];
  v145 = v12;
  sub_A1D0B0(&v117, v11, (__int64)&v11[v13]);
  sub_9E6D90((__int64)v146, &v117);
  if ( (__m128i *)v117.m128i_i64[0] != &v118 )
    operator delete((void *)v117.m128i_i64[0]);
  if ( *((_BYTE *)v6 + 80) )
  {
    v29 = (_BYTE *)v6[8];
    v30 = v6[9];
    v104.m128i_i64[0] = (__int64)&v105;
    sub_A1D0B0(&v104, v29, (__int64)&v29[v30]);
    v117.m128i_i64[0] = (__int64)&v118;
    if ( (__m128i *)v104.m128i_i64[0] == &v105 )
    {
      v118 = _mm_load_si128(&v105);
    }
    else
    {
      v117.m128i_i64[0] = v104.m128i_i64[0];
      v118.m128i_i64[0] = v105.m128i_i64[0];
    }
    v31 = v104.m128i_i64[1];
    v104.m128i_i64[1] = 0;
    v105.m128i_i8[0] = 0;
    v117.m128i_i64[1] = v31;
    LOBYTE(v119) = 1;
    v104.m128i_i64[0] = (__int64)&v105;
    sub_9FDD90((__int64)v148, (__int64)&v117);
    if ( (_BYTE)v119 && (__m128i *)v117.m128i_i64[0] != &v118 )
      operator delete((void *)v117.m128i_i64[0]);
    if ( (__m128i *)v104.m128i_i64[0] != &v105 )
      operator delete((void *)v104.m128i_i64[0]);
  }
  sub_A1E6E0(&v143, (__int64)(v6 + 11));
  v17 = *((_BYTE *)v6 + 184);
  v18 = *((_BYTE *)v6 + 144);
  if ( v17 || *((_BYTE *)v6 + 224) )
  {
    if ( !v18 )
    {
      v117.m128i_i64[0] = (__int64)")";
      LOWORD(v119) = 259;
      v103[2].m128i_i16[0] = 261;
      v103[0] = *(__m128i *)v6;
      v98[0].m128i_i64[0] = (__int64)"should declare SwiftImportAs to use SwiftRetainOp and SwiftReleaseOp (for ";
      v99 = 259;
      sub_A1D840(&v104, v98, v103, v14, v15, v16);
      sub_A1D840(&v100, &v104, &v117, v64, v65, v66);
      sub_A1D5F0(a1, (__int64)&v104, v67, v68, v69, v70, v100.m128i_i8[0]);
      goto LABEL_35;
    }
    if ( *((_BYTE *)v6 + 224) != v17 )
    {
      v117.m128i_i64[0] = (__int64)")";
      v20 = *v6;
      v99 = 259;
      v100.m128i_i64[0] = v20;
      v21 = v6[1];
      LOWORD(v119) = 259;
      v100.m128i_i64[1] = v21;
      v98[0].m128i_i64[0] = (__int64)"should declare both SwiftReleaseOp and SwiftRetainOp (for ";
      LOWORD(v102) = 261;
      sub_A1D840(&v104, v98, &v100, v14, v15, v16);
      sub_A1D840(v103, &v104, &v117, v22, v23, v24);
      sub_A1D5F0(a1, (__int64)&v104, v25, v26, v27, v28, v103[0].m128i_i8[0]);
      goto LABEL_35;
    }
  }
  else if ( !v18 )
  {
    goto LABEL_11;
  }
  sub_9FDD90((__int64)v150, (__int64)(v6 + 14));
  if ( !*((_BYTE *)v6 + 184) )
  {
LABEL_11:
    if ( !*((_BYTE *)v6 + 224) )
      goto LABEL_12;
    goto LABEL_31;
  }
  sub_9FDD90((__int64)v151, (__int64)(v6 + 19));
  if ( !*((_BYTE *)v6 + 224) )
  {
LABEL_12:
    if ( !*((_BYTE *)v6 + 304) )
      goto LABEL_13;
LABEL_32:
    sub_9FDD90((__int64)v154, (__int64)(v6 + 34));
    if ( !*((_BYTE *)v6 + 264) )
      goto LABEL_14;
    goto LABEL_33;
  }
LABEL_31:
  sub_9FDD90((__int64)v152, (__int64)(v6 + 24));
  if ( *((_BYTE *)v6 + 304) )
    goto LABEL_32;
LABEL_13:
  if ( !*((_BYTE *)v6 + 264) )
    goto LABEL_14;
LABEL_33:
  sub_9FDD90((__int64)v153, (__int64)(v6 + 29));
LABEL_14:
  if ( *((_BYTE *)v6 + 333) )
  {
    v14 = 4 * (*((_BYTE *)v6 + 333) & 1u);
    v149 = (8 * (*((_BYTE *)v6 + 332) & 1)) | (4 * (*((_BYTE *)v6 + 333) & 1)) | v149 & 0xF3;
  }
  if ( *((_BYTE *)v6 + 335) )
  {
    v14 = 16 * (*((_BYTE *)v6 + 335) & 1u);
    v149 = (32 * (*((_BYTE *)v6 + 334) & 1)) | (16 * (*((_BYTE *)v6 + 335) & 1)) | v149 & 0xCF;
  }
  if ( !*((_BYTE *)v6 + 328) )
  {
    v32 = *((_BYTE *)v6 + 321);
    v33 = *((_BYTE *)v6 + 320);
    v155 = v6[39];
    if ( !v32 )
      v33 = 0;
    v149 = (2 * (v33 & 1)) | v32 & 1 | v149 & 0xFC;
    goto LABEL_46;
  }
  if ( *((_BYTE *)v6 + 316) )
  {
    v117.m128i_i64[0] = (__int64)")";
    v71 = *v6;
    v99 = 259;
    v100.m128i_i64[0] = v71;
    v72 = v6[1];
    LOWORD(v119) = 259;
    v100.m128i_i64[1] = v72;
    LOWORD(v102) = 261;
    v98[0].m128i_i64[0] = (__int64)"cannot mix EnumKind and EnumExtensibility (for ";
    sub_A1D840(v103, v98, &v100, v14, v15, v16);
    sub_A1D840(&v104, v103, &v117, v73, v74, v75);
    sub_A1D5F0(a1, (__int64)v103, v76, v77, v78, v79, v104.m128i_i8[0]);
    goto LABEL_35;
  }
  if ( *((_BYTE *)v6 + 321) )
  {
    v104.m128i_i64[0] = (__int64)")";
    v80 = *v6;
    LOWORD(v106) = 259;
    v100.m128i_i64[0] = v80;
    v81 = v6[1];
    LOWORD(v102) = 261;
    v100.m128i_i64[1] = v81;
    v98[0].m128i_i64[0] = (__int64)"cannot mix EnumKind and FlagEnum (for ";
    v99 = 259;
    sub_A1D840(v103, v98, &v100, v14, 261, 259);
    sub_A1D840(&v117, v103, &v104, v82, v83, v84);
    sub_A1D5F0(a1, (__int64)v103, v85, v86, v87, v88, v117.m128i_i8[0]);
    goto LABEL_35;
  }
  v19 = *((_DWORD *)v6 + 81);
  if ( v19 == 1 )
  {
    LODWORD(v155) = 1;
    goto LABEL_26;
  }
  if ( v19 <= 1 )
  {
    if ( v19 )
      goto LABEL_46;
    LODWORD(v155) = 0;
    goto LABEL_26;
  }
  if ( v19 == 2 )
  {
    LODWORD(v155) = 1;
    BYTE4(v155) = 1;
    v149 |= 3u;
    goto LABEL_46;
  }
  if ( v19 == 3 )
  {
    LODWORD(v155) = 2;
LABEL_26:
    BYTE4(v155) = 1;
    v149 = v149 & 0xFC | 1;
  }
LABEL_46:
  v92 = (__int64 *)(a1 + 8);
  sub_A0B450((__int64 *)(a1 + 8), a2, a3, (const void *)*v6, v6[1], (__int64)&v143, v90);
  v105.m128i_i8[0] = 0;
  v104.m128i_i64[1] = 0;
  v104.m128i_i64[0] = (__int64)&v105;
  LOBYTE(v106) = v106 & 0xF0;
  v107 = v109;
  v108 = 0;
  v109[0] = 0;
  v112 = 0;
  v115 = 0;
  v116 = 0;
  v34 = sub_A05C90((__int64 *)(a1 + 8), v7, (const void *)*v6, v6[1], 3, &v104, (void *)v90, *((__int64 *)&v90 + 1));
  v36 = v6[45];
  v91 = v34;
  for ( i = v6[46]; i != v36; v36 += 88 )
  {
    while ( 1 )
    {
      v117.m128i_i64[1] = 0;
      v118.m128i_i8[0] = 0;
      v121 = 0;
      v122[0] = 0;
      v125 = nullptr;
      LOBYTE(v126) = 0;
      v37 = *(_QWORD *)(v36 + 8);
      v120 = v122;
      v38 = *(const void **)v36;
      LOBYTE(v119) = v119 & 0xF0;
      LOBYTE(v123) = v123 & 0xF8;
      v124 = &v126;
      v117.m128i_i64[0] = (__int64)&v118;
      sub_A1E860(a1, v36 + 24, (__int64)&v117, (__int64)v38, v37, v35);
      v39 = *(_BYTE *)(v36 + 48);
      if ( !*(_BYTE *)(v36 + 49) )
        v39 = 0;
      LOBYTE(v119) = (8 * (v39 & 1)) | (4 * (*(_BYTE *)(v36 + 49) & 1)) | v119 & 0xF3;
      v40 = *(_BYTE **)(v36 + 56);
      v41 = *(_QWORD *)(v36 + 64);
      v103[0].m128i_i64[0] = (__int64)v103[1].m128i_i64;
      sub_A1D0B0(v103, v40, (__int64)&v40[v41]);
      sub_9E6D90((__int64)&v120, v103);
      if ( (__m128i *)v103[0].m128i_i64[0] != &v103[1] )
        operator delete((void *)v103[0].m128i_i64[0]);
      if ( *(_BYTE *)(v36 + 17) )
        LOBYTE(v123) = (2 * (*(_BYTE *)(v36 + 16) & 3)) | v123 & 0xF8 | 1;
      v42 = *(_BYTE **)(v36 + 72);
      v43 = *(_QWORD *)(v36 + 80);
      v103[0].m128i_i64[0] = (__int64)v103[1].m128i_i64;
      sub_A1D0B0(v103, v42, (__int64)&v42[v43]);
      sub_9CAB60((__int64)&v124, (__int64)v103);
      if ( (__m128i *)v103[0].m128i_i64[0] != &v103[1] )
        operator delete((void *)v103[0].m128i_i64[0]);
      sub_A07E30(v92, v91, *(const void **)v36, *(_QWORD *)(v36 + 8), (__int64)&v117, v44, v90);
      if ( v124 != &v126 )
        operator delete(v124);
      if ( v120 != v122 )
        operator delete(v120);
      if ( (__m128i *)v117.m128i_i64[0] == &v118 )
        break;
      operator delete((void *)v117.m128i_i64[0]);
      v36 += 88;
      if ( v36 == i )
        goto LABEL_61;
    }
  }
LABEL_61:
  v45 = v6[42];
  v94 = v6[43];
  if ( v45 != v94 )
  {
    v95 = v6;
    do
    {
      while ( 1 )
      {
        v117.m128i_i64[1] = 0;
        v118.m128i_i8[0] = 0;
        v117.m128i_i64[0] = (__int64)&v118;
        v121 = 0;
        v120 = v122;
        v122[0] = 0;
        v126 = 0;
        v127[0] = 0;
        v128[1] = nullptr;
        v129[0] = 0;
        v46 = *(_QWORD *)(v45 + 8);
        v125 = v127;
        v47 = *(_QWORD *)v45;
        LOBYTE(v119) = v119 & 0xF0;
        v123 &= 0xF000u;
        v128[0] = v129;
        v124 = nullptr;
        v130 = nullptr;
        v131 = nullptr;
        v132 = 0;
        v142 = 0;
        sub_A1E860(a1, v45 + 80, (__int64)&v117, v47, v46, v35);
        v48 = *(_BYTE *)(v45 + 104);
        if ( !*(_BYTE *)(v45 + 105) )
          v48 = 0;
        LOBYTE(v119) = (8 * (v48 & 1)) | (4 * (*(_BYTE *)(v45 + 105) & 1)) | v119 & 0xF3;
        v49 = *(_BYTE **)(v45 + 112);
        v50 = *(_QWORD *)(v45 + 120);
        v103[0].m128i_i64[0] = (__int64)v103[1].m128i_i64;
        sub_A1D0B0(v103, v49, (__int64)&v49[v50]);
        sub_9E6D90((__int64)&v120, v103);
        if ( (__m128i *)v103[0].m128i_i64[0] != &v103[1] )
          operator delete((void *)v103[0].m128i_i64[0]);
        memset(v103, 0, sizeof(v103));
        sub_A202F0(a1, (__int64 *)(v45 + 16), (__int64)&v117, (__int64)v103);
        if ( v142 )
        {
          if ( v103[7].m128i_i8[8] )
          {
            sub_9CAB60((__int64)v133, (__int64)v103);
            v135 = v103[2].m128i_i8[0] & 0xF | v135 & 0xF0;
            sub_9CAB60((__int64)v136, (__int64)&v103[2].m128i_i64[1]);
            v138 = v103[4].m128i_i8[8] & 7 | v138 & 0xF8;
            sub_9CAB60((__int64)v139, (__int64)v103[5].m128i_i64);
            v141 = v103[7].m128i_i8[0] & 0x7F | v141 & 0x80;
          }
          else
          {
            v142 = 0;
            if ( v139[0] != v140 )
              operator delete(v139[0]);
            if ( v136[0] != v137 )
              operator delete(v136[0]);
            if ( v133[0] != v134 )
              operator delete(v133[0]);
          }
        }
        else if ( v103[7].m128i_i8[8] )
        {
          v133[0] = v134;
          sub_A1CFF0(v133, v103[0].m128i_i64[0], v103[0].m128i_i64[0] + v103[0].m128i_i64[1]);
          v135 = v103[2].m128i_i8[0] & 0xF | v135 & 0xF0;
          v136[0] = v137;
          sub_A1CFF0(v136, (_BYTE *)v103[2].m128i_i64[1], v103[2].m128i_i64[1] + v103[3].m128i_i64[0]);
          v138 = v103[4].m128i_i8[8] & 7 | v138 & 0xF8;
          v139[0] = v140;
          sub_A1CFF0(v139, (_BYTE *)v103[5].m128i_i64[0], v103[5].m128i_i64[0] + v103[5].m128i_i64[1]);
          v142 = 1;
          v141 = v103[7].m128i_i8[0] & 0x7F | v141 & 0x80;
        }
        sub_A1D900(a1, (_QWORD *)(v45 + 40), *(_WORD *)(v45 + 64), (__int64)&v117, *(_QWORD *)v45, *(_QWORD *)(v45 + 8));
        v51 = *(_BYTE **)(v45 + 144);
        v52 = *(_QWORD *)(v45 + 152);
        v100.m128i_i64[0] = (__int64)&v101;
        sub_A1D0B0(&v100, v51, (__int64)&v51[v52]);
        sub_9E6D90((__int64)&v125, &v100);
        if ( (__int64 *)v100.m128i_i64[0] != &v101 )
          operator delete((void *)v100.m128i_i64[0]);
        v53 = *(_BYTE **)(v45 + 160);
        v54 = *(_QWORD *)(v45 + 168);
        v100.m128i_i64[0] = (__int64)&v101;
        sub_A1D0B0(&v100, v53, (__int64)&v53[v54]);
        sub_9E6D90((__int64)v128, &v100);
        if ( (__int64 *)v100.m128i_i64[0] != &v101 )
          operator delete((void *)v100.m128i_i64[0]);
        v56 = 0;
        if ( *(_BYTE *)(v45 + 72) )
          v56 = (*(_DWORD *)(v45 + 68) + 1) & 7;
        HIBYTE(v123) = HIBYTE(v123) & 0xF1 | (2 * (v56 & 7));
        if ( v103[7].m128i_i8[8] )
        {
          if ( (__m128i *)v103[5].m128i_i64[0] != &v103[6] )
            operator delete((void *)v103[5].m128i_i64[0]);
          if ( (unsigned __int64 *)v103[2].m128i_i64[1] != &v103[3].m128i_u64[1] )
            operator delete((void *)v103[2].m128i_i64[1]);
          if ( (__m128i *)v103[0].m128i_i64[0] != &v103[1] )
            operator delete((void *)v103[0].m128i_i64[0]);
        }
        sub_A0D770(v92, v91, *(const void **)v45, *(_QWORD *)(v45 + 8), (__int64)&v117, v55, v90);
        if ( v142 )
        {
          if ( v139[0] != v140 )
            operator delete(v139[0]);
          if ( v136[0] != v137 )
            operator delete(v136[0]);
          if ( v133[0] != v134 )
            operator delete(v133[0]);
        }
        v57 = v131;
        v58 = v130;
        if ( v131 != v130 )
        {
          do
          {
            while ( 1 )
            {
              v59 = (char *)v58[10];
              if ( v59 != (char *)(v58 + 12) )
                operator delete(v59);
              v60 = (char *)v58[5];
              if ( v60 != (char *)(v58 + 7) )
                operator delete(v60);
              if ( (_QWORD *)*v58 == v58 + 2 )
                break;
              operator delete((void *)*v58);
              v58 += 15;
              if ( v57 == v58 )
                goto LABEL_90;
            }
            v58 += 15;
          }
          while ( v57 != v58 );
LABEL_90:
          v58 = v130;
        }
        if ( v58 )
          operator delete(v58);
        if ( v128[0] != v129 )
          operator delete(v128[0]);
        if ( v125 != v127 )
          operator delete(v125);
        if ( v120 != v122 )
          operator delete(v120);
        if ( (__m128i *)v117.m128i_i64[0] == &v118 )
          break;
        operator delete((void *)v117.m128i_i64[0]);
        v45 += 176;
        if ( v94 == v45 )
          goto LABEL_101;
      }
      v45 += 176;
    }
    while ( v94 != v45 );
LABEL_101:
    v6 = v95;
  }
  v61 = v6[49];
  v62 = v6[48];
  while ( v61 != v62 )
  {
    v63 = v62;
    v117.m128i_i32[0] = v91;
    v62 += 408;
    v117.m128i_i8[4] = 3;
    v117.m128i_i8[8] = 1;
    sub_A20AD0(a1, v117.m128i_i64[0], v117.m128i_u32[2], v63, v90, *((_QWORD *)&v90 + 1));
  }
  if ( v115 && v113 != &v114 )
    operator delete(v113);
  if ( v112 && v110 != &v111 )
    operator delete(v110);
  if ( v107 != v109 )
    operator delete(v107);
  if ( (__m128i *)v104.m128i_i64[0] != &v105 )
    operator delete((void *)v104.m128i_i64[0]);
LABEL_35:
  sub_9E66A0((__int64)&v143);
}

