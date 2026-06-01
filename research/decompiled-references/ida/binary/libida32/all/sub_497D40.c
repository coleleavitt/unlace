unsigned __int64 __fastcall sub_497D40(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __m128i v4; // xmm0
  __int64 v6; // rbx
  __int64 v7; // r15
  __m128i v8; // xmm1
  __int64 v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm1
  __int64 v12; // rax
  __m128i v13; // xmm1
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rax
  __m128i v19; // xmm1
  __int64 v20; // rax
  __m128i v21; // xmm1
  __int64 v22; // rax
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  __int64 v25; // rax
  __m128i v26; // xmm1
  __int64 v27; // rax
  __int64 v28; // rax
  __m128i *v29; // rdx
  __m128i v30; // xmm1
  unsigned __int64 v31; // rcx
  __int64 v32; // rsi
  __m128i v33; // xmm1
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __m128i v37; // xmm1
  __int64 v38; // rax
  __m128i v39; // xmm1
  __int64 v40; // rax
  void (__fastcall *v41)(__int128 *, const __m128i *, __int64); // rax
  __int64 v42; // rax
  __m128i v43; // xmm1
  __m128i v44; // xmm1
  __m128i v45; // xmm1
  __m128i v46; // xmm1
  __m128i v47; // xmm1
  __int64 v48; // rax
  __m128i v49; // xmm1
  __m128i v50; // xmm1
  __m128i v51; // xmm1
  __m128i v52; // xmm1
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  __m128i v55; // xmm1
  __m128i v56; // xmm1
  __m128i v57; // xmm1
  __int64 v59; // [rsp+8h] [rbp-3D0h]
  __int64 v60; // [rsp+10h] [rbp-3C8h] BYREF
  __m128i v61; // [rsp+18h] [rbp-3C0h] BYREF
  __int64 v62; // [rsp+28h] [rbp-3B0h]
  __m128i v63; // [rsp+30h] [rbp-3A8h] BYREF
  __int64 v64; // [rsp+40h] [rbp-398h]
  __m128i v65; // [rsp+48h] [rbp-390h] BYREF
  __int64 v66; // [rsp+58h] [rbp-380h]
  __m128i v67; // [rsp+60h] [rbp-378h] BYREF
  __int64 v68; // [rsp+70h] [rbp-368h]
  __m128i v69; // [rsp+78h] [rbp-360h] BYREF
  int v70; // [rsp+88h] [rbp-350h]
  __int64 v71; // [rsp+90h] [rbp-348h]
  __m128i v72; // [rsp+98h] [rbp-340h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-330h]
  __m128i v74; // [rsp+B0h] [rbp-328h] BYREF
  __int64 v75; // [rsp+C0h] [rbp-318h]
  char v76; // [rsp+C8h] [rbp-310h]
  __int64 v77; // [rsp+D0h] [rbp-308h]
  __m128i v78; // [rsp+D8h] [rbp-300h] BYREF
  __int64 v79; // [rsp+E8h] [rbp-2F0h]
  __m128i v80; // [rsp+F0h] [rbp-2E8h] BYREF
  __int64 v81; // [rsp+100h] [rbp-2D8h]
  __m128i v82; // [rsp+108h] [rbp-2D0h] BYREF
  int v83; // [rsp+118h] [rbp-2C0h]
  __int16 v84; // [rsp+11Ch] [rbp-2BCh]
  char v85; // [rsp+11Eh] [rbp-2BAh]
  __int64 v86; // [rsp+120h] [rbp-2B8h]
  __m128i v87; // [rsp+128h] [rbp-2B0h] BYREF
  __m128i *v88; // [rsp+138h] [rbp-2A0h]
  unsigned __int64 v89; // [rsp+140h] [rbp-298h]
  __int64 v90; // [rsp+148h] [rbp-290h] BYREF
  __int64 v91; // [rsp+150h] [rbp-288h]
  __m128i v92; // [rsp+158h] [rbp-280h] BYREF
  __m128i v93; // [rsp+168h] [rbp-270h] BYREF
  __m128i v94; // [rsp+178h] [rbp-260h] BYREF
  __int64 v95; // [rsp+188h] [rbp-250h]
  __m128i v96; // [rsp+190h] [rbp-248h] BYREF
  __int64 v97; // [rsp+1A0h] [rbp-238h]
  __int16 v98; // [rsp+1A8h] [rbp-230h]
  __int64 v99; // [rsp+1B0h] [rbp-228h]
  __int64 v100; // [rsp+1C0h] [rbp-218h] BYREF
  __m128i v101; // [rsp+1C8h] [rbp-210h]
  __int64 v102; // [rsp+1D8h] [rbp-200h]
  __m128i v103; // [rsp+1E0h] [rbp-1F8h]
  __int64 v104; // [rsp+1F0h] [rbp-1E8h]
  __m128i v105; // [rsp+1F8h] [rbp-1E0h]
  __int64 v106; // [rsp+208h] [rbp-1D0h]
  __m128i v107; // [rsp+210h] [rbp-1C8h]
  __int64 v108; // [rsp+220h] [rbp-1B8h]
  __m128i v109; // [rsp+228h] [rbp-1B0h]
  int v110; // [rsp+238h] [rbp-1A0h]
  __int64 v111; // [rsp+240h] [rbp-198h]
  __m128i v112; // [rsp+248h] [rbp-190h]
  __int64 v113; // [rsp+258h] [rbp-180h]
  __m128i v114; // [rsp+260h] [rbp-178h]
  __int64 v115; // [rsp+270h] [rbp-168h]
  char v116; // [rsp+278h] [rbp-160h]
  __int64 v117; // [rsp+280h] [rbp-158h]
  __m128i v118; // [rsp+288h] [rbp-150h]
  __int64 v119; // [rsp+298h] [rbp-140h]
  __m128i v120; // [rsp+2A0h] [rbp-138h]
  __int64 v121; // [rsp+2B0h] [rbp-128h]
  __m128i v122; // [rsp+2B8h] [rbp-120h]
  int v123; // [rsp+2C8h] [rbp-110h]
  __int16 v124; // [rsp+2CCh] [rbp-10Ch]
  char v125; // [rsp+2CEh] [rbp-10Ah]
  __int64 v126; // [rsp+2D0h] [rbp-108h]
  __m128i v127; // [rsp+2D8h] [rbp-100h]
  __int64 *v128; // [rsp+2E8h] [rbp-F0h]
  unsigned __int64 v129; // [rsp+2F0h] [rbp-E8h]
  _QWORD v130[2]; // [rsp+2F8h] [rbp-E0h] BYREF
  __m128i v131; // [rsp+308h] [rbp-D0h]
  _QWORD v132[2]; // [rsp+318h] [rbp-C0h] BYREF
  __m128i v133; // [rsp+328h] [rbp-B0h]
  __int64 v134; // [rsp+338h] [rbp-A0h]
  __m128i v135; // [rsp+340h] [rbp-98h]
  __int64 v136; // [rsp+350h] [rbp-88h]
  __int16 v137; // [rsp+358h] [rbp-80h]
  __int64 v138; // [rsp+360h] [rbp-78h]
  __int128 v139; // [rsp+370h] [rbp-68h] BYREF
  __m128i v140; // [rsp+380h] [rbp-58h]
  unsigned __int64 v141; // [rsp+398h] [rbp-40h]

  v3 = a2 - a1;
  v141 = __readfsqword(0x28u);
  if ( v3 > 424 )
  {
    v4 = 0;
    v59 = 0x21CFB2B78C13521DLL * (v3 >> 3);
    v6 = (v59 - 2) / 2;
    v7 = a1 + 424 * v6 + 344;
    while ( 1 )
    {
      v8 = _mm_loadu_si128((const __m128i *)(v7 - 336));
      v9 = *(_QWORD *)(v7 - 344);
      *(__m128i *)(v7 - 336) = v4;
      *(_QWORD *)(v7 - 344) = 0;
      v60 = v9;
      v10 = *(_QWORD *)(v7 - 320);
      v61 = v8;
      v11 = _mm_loadu_si128((const __m128i *)(v7 - 312));
      v62 = v10;
      v12 = *(_QWORD *)(v7 - 296);
      v63 = v11;
      v13 = _mm_loadu_si128((const __m128i *)(v7 - 288));
      v64 = v12;
      v14 = *(_QWORD *)(v7 - 272);
      v65 = v13;
      v15 = _mm_loadu_si128((const __m128i *)(v7 - 264));
      v66 = v14;
      v16 = *(_QWORD *)(v7 - 248);
      v67 = v15;
      v17 = _mm_loadu_si128((const __m128i *)(v7 - 240));
      v68 = v16;
      LODWORD(v16) = *(_DWORD *)(v7 - 224);
      v69 = v17;
      *(_QWORD *)(v7 - 320) = 0;
      *(_QWORD *)(v7 - 296) = 0;
      *(_QWORD *)(v7 - 272) = 0;
      *(_QWORD *)(v7 - 248) = 0;
      v70 = v16;
      *(__m128i *)(v7 - 312) = v4;
      *(__m128i *)(v7 - 288) = v4;
      *(__m128i *)(v7 - 264) = v4;
      *(__m128i *)(v7 - 240) = v4;
      v18 = *(_QWORD *)(v7 - 216);
      v19 = _mm_loadu_si128((const __m128i *)(v7 - 208));
      *(_QWORD *)(v7 - 216) = 0;
      v71 = v18;
      v20 = *(_QWORD *)(v7 - 192);
      v72 = v19;
      v21 = _mm_loadu_si128((const __m128i *)(v7 - 184));
      v73 = v20;
      v22 = *(_QWORD *)(v7 - 168);
      v74 = v21;
      v23 = _mm_loadu_si128((const __m128i *)(v7 - 144));
      v75 = v22;
      LOBYTE(v22) = *(_BYTE *)(v7 - 160);
      v78 = v23;
      v24 = _mm_loadu_si128((const __m128i *)(v7 - 120));
      v76 = v22;
      v25 = *(_QWORD *)(v7 - 152);
      v80 = v24;
      v26 = _mm_loadu_si128((const __m128i *)(v7 - 96));
      v77 = v25;
      v27 = *(_QWORD *)(v7 - 128);
      *(_QWORD *)(v7 - 192) = 0;
      v79 = v27;
      v28 = *(_QWORD *)(v7 - 104);
      *(_QWORD *)(v7 - 152) = 0;
      v81 = v28;
      *(_QWORD *)(v7 - 128) = 0;
      *(_QWORD *)(v7 - 104) = 0;
      *(__m128i *)(v7 - 208) = v4;
      *(__m128i *)(v7 - 184) = v4;
      *(__m128i *)(v7 - 144) = v4;
      *(__m128i *)(v7 - 120) = v4;
      v82 = v26;
      LODWORD(v28) = *(_DWORD *)(v7 - 80);
      v29 = *(__m128i **)(v7 - 48);
      v30 = _mm_loadu_si128((const __m128i *)(v7 - 64));
      v31 = *(_QWORD *)(v7 - 40);
      v93.m128i_i64[0] = 0;
      v83 = v28;
      LOWORD(v28) = *(_WORD *)(v7 - 76);
      v32 = *(_QWORD *)(v7 - 24);
      v87 = v30;
      v33 = _mm_loadu_si128((const __m128i *)(v7 - 16));
      v84 = v28;
      LOBYTE(v28) = *(_BYTE *)(v7 - 74);
      v88 = v29;
      v85 = v28;
      v34 = *(_QWORD *)(v7 - 72);
      v89 = v31;
      v86 = v34;
      v35 = *(_QWORD *)(v7 - 32);
      *(_QWORD *)(v7 - 72) = 0;
      v90 = v35;
      v91 = v32;
      *(__m128i *)(v7 - 96) = v4;
      *(__m128i *)(v7 - 64) = v4;
      v92 = v33;
      if ( v29 == (__m128i *)v7 )
      {
        v88 = &v93;
        v93.m128i_i64[0] = *(_QWORD *)v7;
      }
      if ( v35 )
        v88->m128i_i64[*(unsigned int *)(v35 + 8) % v31] = (__int64)&v90;
      v36 = *(_QWORD *)(v7 + 8);
      v37 = _mm_loadu_si128((const __m128i *)(v7 + 16));
      *(_QWORD *)(v7 - 48) = v7;
      *(_QWORD *)(v7 - 8) = 0;
      v93.m128i_i64[1] = v36;
      v38 = *(_QWORD *)(v7 + 32);
      v94 = v37;
      v39 = _mm_loadu_si128((const __m128i *)(v7 + 40));
      v95 = v38;
      LODWORD(v38) = *(_DWORD *)(v7 + 56);
      *(_QWORD *)(v7 - 40) = 1;
      LODWORD(v97) = v38;
      LODWORD(v38) = *(_DWORD *)(v7 + 60);
      *(_QWORD *)(v7 - 32) = 0;
      HIDWORD(v97) = v38;
      LOWORD(v38) = *(_WORD *)(v7 + 64);
      *(_QWORD *)(v7 - 24) = 0;
      v98 = v38;
      v40 = *(_QWORD *)(v7 + 72);
      *(_QWORD *)(v7 + 32) = 0;
      v99 = v40;
      *(__m128i *)v7 = v4;
      *(__m128i *)(v7 + 16) = v4;
      *(__m128i *)(v7 + 40) = v4;
      v41 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v96 = v39;
      v140 = 0u;
      v139 = 0;
      if ( v41 )
      {
        v41(&v139, a3, 2);
        v4 = 0;
        v140 = _mm_loadu_si128(a3 + 1);
      }
      v42 = v60;
      v43 = _mm_loadu_si128(&v61);
      v61 = v4;
      v60 = 0;
      v100 = v42;
      v101 = v43;
      v44 = _mm_load_si128(&v63);
      v102 = v62;
      v103 = v44;
      v45 = _mm_loadu_si128(&v65);
      v104 = v64;
      v105 = v45;
      v46 = _mm_load_si128(&v67);
      v106 = v66;
      v107 = v46;
      v47 = _mm_loadu_si128(&v69);
      v108 = v68;
      v109 = v47;
      v62 = 0;
      v64 = 0;
      v66 = 0;
      v68 = 0;
      v110 = v70;
      v63 = v4;
      v65 = v4;
      v67 = v4;
      v69 = v4;
      v48 = v71;
      v49 = _mm_loadu_si128(&v72);
      v71 = 0;
      v111 = v48;
      v112 = v49;
      v50 = _mm_load_si128(&v74);
      v113 = v73;
      v114 = v50;
      v51 = _mm_loadu_si128(&v78);
      v115 = v75;
      v118 = v51;
      v52 = _mm_load_si128(&v80);
      v116 = v76;
      v120 = v52;
      v53 = _mm_loadu_si128(&v82);
      v117 = v77;
      v73 = 0;
      v119 = v79;
      v77 = 0;
      v121 = v81;
      v79 = 0;
      v81 = 0;
      v72 = v4;
      v74 = v4;
      v78 = v4;
      v80 = v4;
      v122 = v53;
      v54 = _mm_loadu_si128(&v87);
      v132[0] = 0;
      v123 = v83;
      v127 = v54;
      v55 = _mm_loadu_si128(&v92);
      v124 = v84;
      v130[1] = v91;
      v125 = v85;
      v128 = (__int64 *)v88;
      v126 = v86;
      v86 = 0;
      v129 = v89;
      v130[0] = v90;
      v82 = v4;
      v87 = v4;
      v131 = v55;
      if ( v88 == &v93 )
      {
        v128 = v132;
        v132[0] = v93.m128i_i64[0];
      }
      if ( v90 )
        v128[*(unsigned int *)(v90 + 8) % v89] = (__int64)v130;
      v56 = _mm_loadu_si128(&v94);
      v88 = &v93;
      v132[1] = v93.m128i_i64[1];
      v133 = v56;
      v57 = _mm_load_si128(&v96);
      v134 = v95;
      v92.m128i_i64[1] = 0;
      v136 = v97;
      v89 = 1;
      v137 = v98;
      v90 = 0;
      v91 = 0;
      v95 = 0;
      v138 = v99;
      v93 = v4;
      v94 = v4;
      v135 = v57;
      v96 = v4;
      sub_497A40(a1, v6, v59, &v100, (__int64)&v139);
      sub_481890((__int64)&v100);
      if ( v140.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v140.m128i_i64[0])(&v139, &v139, 3);
      v7 -= 424;
      if ( !v6 )
        break;
      --v6;
      sub_481890((__int64)&v60);
      v4 = 0;
    }
    sub_481890((__int64)&v60);
  }
  return v141 - __readfsqword(0x28u);
}

