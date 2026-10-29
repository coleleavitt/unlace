unsigned __int64 __fastcall sub_4AD180(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v3; // rsi
  __m128i v5; // xmm0
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
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
  __int64 v29; // rax
  __m128i *v30; // rdx
  __m128i v31; // xmm1
  unsigned __int64 v32; // rcx
  __int64 v33; // rsi
  __m128i v34; // xmm1
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __m128i v38; // xmm1
  __int64 v39; // rax
  __m128i v40; // xmm1
  __int64 v41; // rax
  void (__fastcall *v42)(__int128 *, const __m128i *, __int64); // rax
  __int64 v43; // rax
  __m128i v44; // xmm1
  __m128i v45; // xmm1
  __m128i v46; // xmm1
  __m128i v47; // xmm1
  __m128i v48; // xmm1
  __int64 v49; // rax
  __m128i v50; // xmm1
  __m128i v51; // xmm1
  __m128i v52; // xmm1
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  __m128i v55; // xmm1
  __m128i v56; // xmm1
  __m128i v57; // xmm1
  __m128i v58; // xmm1
  __int64 v60; // [rsp+8h] [rbp-3D0h]
  __int64 v61; // [rsp+10h] [rbp-3C8h] BYREF
  __m128i v62; // [rsp+18h] [rbp-3C0h] BYREF
  __int64 v63; // [rsp+28h] [rbp-3B0h]
  __m128i v64; // [rsp+30h] [rbp-3A8h] BYREF
  __int64 v65; // [rsp+40h] [rbp-398h]
  __m128i v66; // [rsp+48h] [rbp-390h] BYREF
  __int64 v67; // [rsp+58h] [rbp-380h]
  __m128i v68; // [rsp+60h] [rbp-378h] BYREF
  __int64 v69; // [rsp+70h] [rbp-368h]
  __m128i v70; // [rsp+78h] [rbp-360h] BYREF
  int v71; // [rsp+88h] [rbp-350h]
  __int64 v72; // [rsp+90h] [rbp-348h]
  __m128i v73; // [rsp+98h] [rbp-340h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-330h]
  __m128i v75; // [rsp+B0h] [rbp-328h] BYREF
  __int64 v76; // [rsp+C0h] [rbp-318h]
  char v77; // [rsp+C8h] [rbp-310h]
  __int64 v78; // [rsp+D0h] [rbp-308h]
  __m128i v79; // [rsp+D8h] [rbp-300h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-2F0h]
  __m128i v81; // [rsp+F0h] [rbp-2E8h] BYREF
  __int64 v82; // [rsp+100h] [rbp-2D8h]
  __m128i v83; // [rsp+108h] [rbp-2D0h] BYREF
  __int64 v84; // [rsp+118h] [rbp-2C0h]
  __int16 v85; // [rsp+120h] [rbp-2B8h]
  char v86; // [rsp+122h] [rbp-2B6h]
  __int64 v87; // [rsp+128h] [rbp-2B0h]
  __m128i v88; // [rsp+130h] [rbp-2A8h] BYREF
  __m128i *v89; // [rsp+140h] [rbp-298h]
  unsigned __int64 v90; // [rsp+148h] [rbp-290h]
  __int64 v91; // [rsp+150h] [rbp-288h] BYREF
  __int64 v92; // [rsp+158h] [rbp-280h]
  __m128i v93; // [rsp+160h] [rbp-278h] BYREF
  __m128i v94; // [rsp+170h] [rbp-268h] BYREF
  __m128i v95; // [rsp+180h] [rbp-258h] BYREF
  __int64 v96; // [rsp+190h] [rbp-248h]
  __m128i v97; // [rsp+198h] [rbp-240h] BYREF
  __int64 v98; // [rsp+1A8h] [rbp-230h]
  __int16 v99; // [rsp+1B0h] [rbp-228h]
  __int64 v100; // [rsp+1B8h] [rbp-220h]
  __int64 v101; // [rsp+1C0h] [rbp-218h] BYREF
  __m128i v102; // [rsp+1C8h] [rbp-210h]
  __int64 v103; // [rsp+1D8h] [rbp-200h]
  __m128i v104; // [rsp+1E0h] [rbp-1F8h]
  __int64 v105; // [rsp+1F0h] [rbp-1E8h]
  __m128i v106; // [rsp+1F8h] [rbp-1E0h]
  __int64 v107; // [rsp+208h] [rbp-1D0h]
  __m128i v108; // [rsp+210h] [rbp-1C8h]
  __int64 v109; // [rsp+220h] [rbp-1B8h]
  __m128i v110; // [rsp+228h] [rbp-1B0h]
  int v111; // [rsp+238h] [rbp-1A0h]
  __int64 v112; // [rsp+240h] [rbp-198h]
  __m128i v113; // [rsp+248h] [rbp-190h]
  __int64 v114; // [rsp+258h] [rbp-180h]
  __m128i v115; // [rsp+260h] [rbp-178h]
  __int64 v116; // [rsp+270h] [rbp-168h]
  char v117; // [rsp+278h] [rbp-160h]
  __int64 v118; // [rsp+280h] [rbp-158h]
  __m128i v119; // [rsp+288h] [rbp-150h]
  __int64 v120; // [rsp+298h] [rbp-140h]
  __m128i v121; // [rsp+2A0h] [rbp-138h]
  __int64 v122; // [rsp+2B0h] [rbp-128h]
  __m128i v123; // [rsp+2B8h] [rbp-120h]
  __int64 v124; // [rsp+2C8h] [rbp-110h]
  __int16 v125; // [rsp+2D0h] [rbp-108h]
  char v126; // [rsp+2D2h] [rbp-106h]
  __int64 v127; // [rsp+2D8h] [rbp-100h]
  __m128i v128; // [rsp+2E0h] [rbp-F8h]
  __int64 *v129; // [rsp+2F0h] [rbp-E8h]
  unsigned __int64 v130; // [rsp+2F8h] [rbp-E0h]
  _QWORD v131[2]; // [rsp+300h] [rbp-D8h] BYREF
  __m128i v132; // [rsp+310h] [rbp-C8h]
  _QWORD v133[2]; // [rsp+320h] [rbp-B8h] BYREF
  __m128i v134; // [rsp+330h] [rbp-A8h]
  __int64 v135; // [rsp+340h] [rbp-98h]
  __m128i v136; // [rsp+348h] [rbp-90h]
  __int64 v137; // [rsp+358h] [rbp-80h]
  __int16 v138; // [rsp+360h] [rbp-78h]
  __int64 v139; // [rsp+368h] [rbp-70h]
  __int128 v140; // [rsp+370h] [rbp-68h] BYREF
  __m128i v141; // [rsp+380h] [rbp-58h]
  unsigned __int64 v142; // [rsp+398h] [rbp-40h]

  v3 = a2 - a1;
  v142 = __readfsqword(0x28u);
  if ( v3 > 432 )
  {
    v5 = 0;
    v60 = 0x84BDA12F684BDA13LL * (v3 >> 4);
    v6 = (v60 - 2) / 2;
    v7 = a1 + 144 * (v6 + ((v60 - 2 + ((unsigned __int64)(v60 - 2) >> 63)) & 0xFFFFFFFFFFFFFFFELL)) + 352;
    while ( 1 )
    {
      v8 = _mm_loadu_si128((const __m128i *)(v7 - 344));
      v9 = *(_QWORD *)(v7 - 352);
      *(__m128i *)(v7 - 344) = v5;
      *(_QWORD *)(v7 - 352) = 0;
      v61 = v9;
      v10 = *(_QWORD *)(v7 - 328);
      v62 = v8;
      v11 = _mm_loadu_si128((const __m128i *)(v7 - 320));
      v63 = v10;
      v12 = *(_QWORD *)(v7 - 304);
      v64 = v11;
      v13 = _mm_loadu_si128((const __m128i *)(v7 - 296));
      v65 = v12;
      v14 = *(_QWORD *)(v7 - 280);
      v66 = v13;
      v15 = _mm_loadu_si128((const __m128i *)(v7 - 272));
      v67 = v14;
      v16 = *(_QWORD *)(v7 - 256);
      v68 = v15;
      v17 = _mm_loadu_si128((const __m128i *)(v7 - 248));
      v69 = v16;
      LODWORD(v16) = *(_DWORD *)(v7 - 232);
      v70 = v17;
      *(_QWORD *)(v7 - 328) = 0;
      *(_QWORD *)(v7 - 304) = 0;
      *(_QWORD *)(v7 - 280) = 0;
      *(_QWORD *)(v7 - 256) = 0;
      v71 = v16;
      *(__m128i *)(v7 - 320) = v5;
      *(__m128i *)(v7 - 296) = v5;
      *(__m128i *)(v7 - 272) = v5;
      *(__m128i *)(v7 - 248) = v5;
      v18 = *(_QWORD *)(v7 - 224);
      v19 = _mm_loadu_si128((const __m128i *)(v7 - 216));
      *(_QWORD *)(v7 - 224) = 0;
      v72 = v18;
      v20 = *(_QWORD *)(v7 - 200);
      v73 = v19;
      v21 = _mm_loadu_si128((const __m128i *)(v7 - 192));
      v74 = v20;
      v22 = *(_QWORD *)(v7 - 176);
      v75 = v21;
      v23 = _mm_loadu_si128((const __m128i *)(v7 - 152));
      v76 = v22;
      LOBYTE(v22) = *(_BYTE *)(v7 - 168);
      v79 = v23;
      v24 = _mm_loadu_si128((const __m128i *)(v7 - 128));
      v77 = v22;
      v25 = *(_QWORD *)(v7 - 160);
      v81 = v24;
      v26 = _mm_loadu_si128((const __m128i *)(v7 - 104));
      v78 = v25;
      v27 = *(_QWORD *)(v7 - 136);
      *(_QWORD *)(v7 - 200) = 0;
      v80 = v27;
      v28 = *(_QWORD *)(v7 - 112);
      *(_QWORD *)(v7 - 160) = 0;
      v82 = v28;
      *(_QWORD *)(v7 - 136) = 0;
      *(_QWORD *)(v7 - 112) = 0;
      *(__m128i *)(v7 - 216) = v5;
      *(__m128i *)(v7 - 192) = v5;
      *(__m128i *)(v7 - 152) = v5;
      *(__m128i *)(v7 - 128) = v5;
      v83 = v26;
      v29 = *(_QWORD *)(v7 - 88);
      v30 = *(__m128i **)(v7 - 48);
      v31 = _mm_loadu_si128((const __m128i *)(v7 - 64));
      v32 = *(_QWORD *)(v7 - 40);
      v94.m128i_i64[0] = 0;
      v84 = v29;
      LOWORD(v29) = *(_WORD *)(v7 - 80);
      v33 = *(_QWORD *)(v7 - 24);
      v88 = v31;
      v34 = _mm_loadu_si128((const __m128i *)(v7 - 16));
      v85 = v29;
      LOBYTE(v29) = *(_BYTE *)(v7 - 78);
      v89 = v30;
      v86 = v29;
      v35 = *(_QWORD *)(v7 - 72);
      v90 = v32;
      v87 = v35;
      v36 = *(_QWORD *)(v7 - 32);
      *(_QWORD *)(v7 - 72) = 0;
      v91 = v36;
      v92 = v33;
      *(__m128i *)(v7 - 104) = v5;
      *(__m128i *)(v7 - 64) = v5;
      v93 = v34;
      if ( v30 == (__m128i *)v7 )
      {
        v89 = &v94;
        v94.m128i_i64[0] = *(_QWORD *)v7;
      }
      if ( v36 )
        v89->m128i_i64[*(_QWORD *)(v36 + 8) % v32] = (__int64)&v91;
      v37 = *(_QWORD *)(v7 + 8);
      v38 = _mm_loadu_si128((const __m128i *)(v7 + 16));
      *(_QWORD *)(v7 - 48) = v7;
      *(_QWORD *)(v7 - 8) = 0;
      v94.m128i_i64[1] = v37;
      v39 = *(_QWORD *)(v7 + 32);
      v95 = v38;
      v40 = _mm_loadu_si128((const __m128i *)(v7 + 40));
      v96 = v39;
      LODWORD(v39) = *(_DWORD *)(v7 + 56);
      *(_QWORD *)(v7 - 40) = 1;
      LODWORD(v98) = v39;
      LODWORD(v39) = *(_DWORD *)(v7 + 60);
      *(_QWORD *)(v7 - 32) = 0;
      HIDWORD(v98) = v39;
      LOWORD(v39) = *(_WORD *)(v7 + 64);
      *(_QWORD *)(v7 - 24) = 0;
      v99 = v39;
      v41 = *(_QWORD *)(v7 + 72);
      *(_QWORD *)(v7 + 32) = 0;
      v100 = v41;
      *(__m128i *)v7 = v5;
      *(__m128i *)(v7 + 16) = v5;
      *(__m128i *)(v7 + 40) = v5;
      v42 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a3[1].m128i_i64[0];
      v97 = v40;
      v141 = 0u;
      v140 = 0;
      if ( v42 )
      {
        v42(&v140, a3, 2);
        v5 = 0;
        v141 = _mm_loadu_si128(a3 + 1);
      }
      v43 = v61;
      v44 = _mm_loadu_si128(&v62);
      v62 = v5;
      v61 = 0;
      v101 = v43;
      v102 = v44;
      v45 = _mm_load_si128(&v64);
      v103 = v63;
      v104 = v45;
      v46 = _mm_loadu_si128(&v66);
      v105 = v65;
      v106 = v46;
      v47 = _mm_load_si128(&v68);
      v107 = v67;
      v108 = v47;
      v48 = _mm_loadu_si128(&v70);
      v109 = v69;
      v110 = v48;
      v63 = 0;
      v65 = 0;
      v67 = 0;
      v69 = 0;
      v111 = v71;
      v64 = v5;
      v66 = v5;
      v68 = v5;
      v70 = v5;
      v49 = v72;
      v50 = _mm_loadu_si128(&v73);
      v72 = 0;
      v112 = v49;
      v113 = v50;
      v51 = _mm_load_si128(&v75);
      v114 = v74;
      v115 = v51;
      v52 = _mm_loadu_si128(&v79);
      v116 = v76;
      v119 = v52;
      v53 = _mm_load_si128(&v81);
      v117 = v77;
      v121 = v53;
      v54 = _mm_loadu_si128(&v83);
      v118 = v78;
      v74 = 0;
      v120 = v80;
      v78 = 0;
      v122 = v82;
      v80 = 0;
      v82 = 0;
      v73 = v5;
      v75 = v5;
      v79 = v5;
      v81 = v5;
      v123 = v54;
      v55 = _mm_load_si128(&v88);
      v133[0] = 0;
      v124 = v84;
      v128 = v55;
      v56 = _mm_load_si128(&v93);
      v125 = v85;
      v131[1] = v92;
      v126 = v86;
      v129 = (__int64 *)v89;
      v127 = v87;
      v87 = 0;
      v130 = v90;
      v131[0] = v91;
      v83 = v5;
      v88 = v5;
      v132 = v56;
      if ( v89 == &v94 )
      {
        v129 = v133;
        v133[0] = v94.m128i_i64[0];
      }
      if ( v91 )
        v129[*(_QWORD *)(v91 + 8) % v90] = (__int64)v131;
      v57 = _mm_load_si128(&v95);
      v89 = &v94;
      v133[1] = v94.m128i_i64[1];
      v134 = v57;
      v58 = _mm_loadu_si128(&v97);
      v135 = v96;
      v93.m128i_i64[1] = 0;
      v137 = v98;
      v90 = 1;
      v138 = v99;
      v91 = 0;
      v92 = 0;
      v96 = 0;
      v139 = v100;
      v94 = v5;
      v95 = v5;
      v136 = v58;
      v97 = v5;
      sub_4ACE30(a1, v6, v60, &v101, (__int64)&v140);
      sub_496580((__int64)&v101);
      if ( v141.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v141.m128i_i64[0])(&v140, &v140, 3);
      v7 -= 432LL;
      if ( !v6 )
        break;
      --v6;
      sub_496580((__int64)&v61);
      v5 = 0;
    }
    sub_496580((__int64)&v61);
  }
  return v142 - __readfsqword(0x28u);
}
