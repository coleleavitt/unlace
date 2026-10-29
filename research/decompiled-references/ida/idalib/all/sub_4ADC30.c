unsigned __int64 __fastcall sub_4ADC30(__int64 *a1, __int64 *a2, __int64 a3, const __m128i *a4)
{
  __int64 *v4; // r12
  __int64 v6; // r14
  const __m128i *v7; // rsi
  __int64 *v8; // r14
  __int64 *v9; // r15
  __int64 v10; // rax
  __int64 *v11; // r14
  int v12; // edx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i v31; // xmm0
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // rsi
  __int64 *v37; // rdx
  unsigned __int64 v38; // rcx
  __m128i v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  __m128i v48; // xmm0
  __int64 v49; // rax
  __int64 v50; // rax
  __m128i v51; // xmm1
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  __m128i v55; // xmm1
  __int64 v56; // rax
  __m128i v57; // xmm1
  __m128i v58; // xmm1
  __m128i v59; // xmm1
  __m128i v60; // xmm1
  __m128i v61; // xmm1
  __m128i v62; // xmm1
  __m128i v63; // xmm0
  __m128i v64; // xmm1
  __m128i v65; // xmm1
  __int64 v67; // [rsp+10h] [rbp-3F8h]
  __int64 v69; // [rsp+20h] [rbp-3E8h] BYREF
  __m128i v70; // [rsp+28h] [rbp-3E0h] BYREF
  __int64 v71; // [rsp+38h] [rbp-3D0h]
  __m128i v72; // [rsp+40h] [rbp-3C8h] BYREF
  __int64 v73; // [rsp+50h] [rbp-3B8h]
  __m128i v74; // [rsp+58h] [rbp-3B0h] BYREF
  __int64 v75; // [rsp+68h] [rbp-3A0h]
  __m128i v76; // [rsp+70h] [rbp-398h] BYREF
  __int64 v77; // [rsp+80h] [rbp-388h]
  __m128i v78; // [rsp+88h] [rbp-380h] BYREF
  int v79; // [rsp+98h] [rbp-370h]
  __int64 v80; // [rsp+A0h] [rbp-368h]
  __m128i v81; // [rsp+A8h] [rbp-360h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-350h]
  __m128i v83; // [rsp+C0h] [rbp-348h] BYREF
  __int64 v84; // [rsp+D0h] [rbp-338h]
  char v85; // [rsp+D8h] [rbp-330h]
  __int64 v86; // [rsp+E0h] [rbp-328h]
  __m128i v87; // [rsp+E8h] [rbp-320h] BYREF
  __int64 v88; // [rsp+F8h] [rbp-310h]
  __m128i v89; // [rsp+100h] [rbp-308h] BYREF
  __int64 v90; // [rsp+110h] [rbp-2F8h]
  __m128i v91; // [rsp+118h] [rbp-2F0h] BYREF
  __int64 v92; // [rsp+128h] [rbp-2E0h]
  __int16 v93; // [rsp+130h] [rbp-2D8h]
  char v94; // [rsp+132h] [rbp-2D6h]
  __int64 v95; // [rsp+138h] [rbp-2D0h]
  __m128i v96; // [rsp+140h] [rbp-2C8h] BYREF
  __int64 *v97; // [rsp+150h] [rbp-2B8h]
  unsigned __int64 v98; // [rsp+158h] [rbp-2B0h]
  __int64 v99; // [rsp+160h] [rbp-2A8h]
  __int64 v100; // [rsp+168h] [rbp-2A0h]
  __m128i v101; // [rsp+170h] [rbp-298h] BYREF
  __int128 v102; // [rsp+180h] [rbp-288h] BYREF
  __m128i v103; // [rsp+190h] [rbp-278h] BYREF
  __int64 v104; // [rsp+1A0h] [rbp-268h]
  __m128i v105; // [rsp+1A8h] [rbp-260h] BYREF
  __int64 v106; // [rsp+1B8h] [rbp-250h]
  __int16 v107; // [rsp+1C0h] [rbp-248h]
  __int64 v108; // [rsp+1C8h] [rbp-240h]
  __int64 v109; // [rsp+1D0h] [rbp-238h] BYREF
  __m128i v110; // [rsp+1D8h] [rbp-230h]
  __int64 v111; // [rsp+1E8h] [rbp-220h]
  __m128i v112; // [rsp+1F0h] [rbp-218h]
  __int64 v113; // [rsp+200h] [rbp-208h]
  __m128i v114; // [rsp+208h] [rbp-200h]
  __int64 v115; // [rsp+218h] [rbp-1F0h]
  __m128i v116; // [rsp+220h] [rbp-1E8h]
  __int64 v117; // [rsp+230h] [rbp-1D8h]
  __m128i v118; // [rsp+238h] [rbp-1D0h]
  int v119; // [rsp+248h] [rbp-1C0h]
  __int64 v120; // [rsp+250h] [rbp-1B8h]
  __m128i v121; // [rsp+258h] [rbp-1B0h]
  __int64 v122; // [rsp+268h] [rbp-1A0h]
  __m128i v123; // [rsp+270h] [rbp-198h]
  __int64 v124; // [rsp+280h] [rbp-188h]
  char v125; // [rsp+288h] [rbp-180h]
  __int64 v126; // [rsp+290h] [rbp-178h]
  __m128i v127; // [rsp+298h] [rbp-170h]
  __int64 v128; // [rsp+2A8h] [rbp-160h]
  __m128i v129; // [rsp+2B0h] [rbp-158h]
  __int64 v130; // [rsp+2C0h] [rbp-148h]
  __m128i v131; // [rsp+2C8h] [rbp-140h]
  __int64 v132; // [rsp+2D8h] [rbp-130h]
  __int16 v133; // [rsp+2E0h] [rbp-128h]
  char v134; // [rsp+2E2h] [rbp-126h]
  __int64 v135; // [rsp+2E8h] [rbp-120h]
  __m128i v136; // [rsp+2F0h] [rbp-118h]
  __int64 *v137; // [rsp+300h] [rbp-108h]
  unsigned __int64 v138; // [rsp+308h] [rbp-100h]
  __int64 v139; // [rsp+310h] [rbp-F8h] BYREF
  __int64 v140; // [rsp+318h] [rbp-F0h]
  __m128i v141; // [rsp+320h] [rbp-E8h]
  __int64 v142; // [rsp+330h] [rbp-D8h] BYREF
  __int64 v143; // [rsp+338h] [rbp-D0h]
  __m128i v144; // [rsp+340h] [rbp-C8h]
  __int64 v145; // [rsp+350h] [rbp-B8h]
  __m128i v146; // [rsp+358h] [rbp-B0h]
  __int64 v147; // [rsp+368h] [rbp-A0h]
  __int16 v148; // [rsp+370h] [rbp-98h]
  __int64 v149; // [rsp+378h] [rbp-90h]
  __m128i v150; // [rsp+380h] [rbp-88h] BYREF
  __m128i v151; // [rsp+390h] [rbp-78h] BYREF
  __m128i v152; // [rsp+3A0h] [rbp-68h] BYREF
  __m128i i; // [rsp+3B0h] [rbp-58h]
  unsigned __int64 v154; // [rsp+3C8h] [rbp-40h]

  v4 = a2;
  v67 = a3;
  v154 = __readfsqword(0x28u);
  v6 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 6912 )
  {
    v7 = a4;
    if ( a3 )
    {
      while ( 1 )
      {
        sub_49FE20((__int64)&v150, v7);
        i = 0u;
        v152 = 0;
        v8 = &a1[18 * ((0x84BDA12F684BDA13LL * (v6 >> 4)) & 0xFFFFFFFFFFFFFFFELL)
               + 18 * ((__int64)(0x84BDA12F684BDA13LL * (v6 >> 4)) >> 1)];
        if ( v151.m128i_i64[0] )
        {
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v151.m128i_i64[0])(&v152, &v150, 2);
          i = _mm_load_si128(&v151);
        }
        v9 = a1 + 54;
        sub_4ADB50(a1, a1 + 54, v8, v4 - 54, (__int64)&v152);
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v152, &v152, 3);
        i = 0u;
        v152 = 0;
        if ( !v151.m128i_i64[0] )
LABEL_41:
          std::__throw_bad_function_call();
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v151.m128i_i64[0])(&v152, &v150, 2);
        v10 = v151.m128i_i64[0];
        v11 = v4;
        for ( i = _mm_load_si128(&v151); ; v10 = i.m128i_i64[0] )
        {
          while ( 1 )
          {
            if ( !v10 )
              goto LABEL_41;
            v12 = ((__int64 (__fastcall *)(__m128i *, __int64 *, __int64 *))i.m128i_i64[1])(&v152, v9, a1);
            v10 = i.m128i_i64[0];
            if ( v12 >= 0 )
              break;
            v9 += 54;
          }
          v11 -= 54;
          if ( !i.m128i_i64[0] )
LABEL_40:
            std::__throw_bad_function_call();
          while ( ((int (__fastcall *)(__m128i *, __int64 *, __int64 *))i.m128i_i64[1])(&v152, a1, v11) < 0 )
          {
            v11 -= 54;
            if ( !i.m128i_i64[0] )
              goto LABEL_40;
          }
          if ( v9 >= v11 )
            break;
          v13 = *v9;
          v14 = _mm_loadu_si128((const __m128i *)(v9 + 1));
          *v9 = 0;
          *(_OWORD *)(v9 + 1) = 0;
          v109 = v13;
          v15 = v9[3];
          v110 = v14;
          v16 = _mm_loadu_si128((const __m128i *)v9 + 2);
          v111 = v15;
          v17 = v9[6];
          v112 = v16;
          v18 = _mm_loadu_si128((const __m128i *)(v9 + 7));
          v113 = v17;
          v19 = v9[9];
          v114 = v18;
          v20 = _mm_loadu_si128((const __m128i *)v9 + 5);
          v115 = v19;
          v21 = v9[12];
          v116 = v20;
          v22 = _mm_loadu_si128((const __m128i *)(v9 + 13));
          v117 = v21;
          LODWORD(v21) = *((_DWORD *)v9 + 30);
          v118 = v22;
          v9[3] = 0;
          v9[6] = 0;
          v9[9] = 0;
          v9[12] = 0;
          v119 = v21;
          *((_OWORD *)v9 + 2) = 0;
          *(_OWORD *)(v9 + 7) = 0;
          *((_OWORD *)v9 + 5) = 0;
          *(_OWORD *)(v9 + 13) = 0;
          v23 = v9[16];
          v24 = _mm_loadu_si128((const __m128i *)(v9 + 17));
          v9[16] = 0;
          v120 = v23;
          v25 = v9[19];
          v121 = v24;
          v26 = _mm_loadu_si128((const __m128i *)v9 + 10);
          v122 = v25;
          v27 = v9[22];
          v123 = v26;
          v28 = _mm_loadu_si128((const __m128i *)(v9 + 25));
          v124 = v27;
          LOBYTE(v27) = *((_BYTE *)v9 + 184);
          v127 = v28;
          v29 = _mm_loadu_si128((const __m128i *)v9 + 14);
          v125 = v27;
          v30 = v9[24];
          v129 = v29;
          v31 = _mm_loadu_si128((const __m128i *)(v9 + 31));
          v126 = v30;
          v32 = v9[27];
          v9[19] = 0;
          v128 = v32;
          v33 = v9[30];
          v9[24] = 0;
          v130 = v33;
          v9[27] = 0;
          v9[30] = 0;
          *(_OWORD *)(v9 + 17) = 0;
          *((_OWORD *)v9 + 10) = 0;
          *(_OWORD *)(v9 + 25) = 0;
          *((_OWORD *)v9 + 14) = 0;
          v131 = v31;
          v34 = v9[33];
          v35 = _mm_loadu_si128((const __m128i *)v9 + 18);
          v36 = v9[41];
          v37 = (__int64 *)v9[38];
          v142 = 0;
          v132 = v34;
          LOWORD(v34) = *((_WORD *)v9 + 136);
          v38 = v9[39];
          v136 = v35;
          v39 = _mm_loadu_si128((const __m128i *)v9 + 21);
          v133 = v34;
          LOBYTE(v34) = *((_BYTE *)v9 + 274);
          v140 = v36;
          v134 = v34;
          v40 = v9[35];
          v137 = v37;
          v135 = v40;
          v41 = v9[40];
          v9[35] = 0;
          v138 = v38;
          v139 = v41;
          *(_OWORD *)(v9 + 31) = 0;
          *((_OWORD *)v9 + 18) = 0;
          v141 = v39;
          if ( v37 == v9 + 44 )
          {
            v137 = &v142;
            v142 = v9[44];
          }
          if ( v41 )
            v137[*(_QWORD *)(v41 + 8) % v38] = (__int64)&v139;
          v42 = v9[45];
          v43 = _mm_loadu_si128((const __m128i *)v9 + 23);
          v9[38] = (__int64)(v9 + 44);
          v9[43] = 0;
          v44 = (__int64)v9;
          v45 = v9[51];
          v143 = v42;
          v46 = v9[48];
          v9 += 54;
          *(v9 - 15) = 1;
          v145 = v46;
          LOWORD(v46) = *((_WORD *)v9 - 8);
          *(v9 - 14) = 0;
          *(v9 - 13) = 0;
          *(v9 - 6) = 0;
          v148 = v46;
          v47 = *(v9 - 1);
          v144 = v43;
          v48 = _mm_loadu_si128((const __m128i *)(v9 - 5));
          *((_OWORD *)v9 - 5) = 0;
          *((_OWORD *)v9 - 4) = 0;
          *(_OWORD *)(v9 - 5) = 0;
          v147 = v45;
          v146 = v48;
          v149 = v47;
          sub_494DC0(v44, v11);
          *(v9 - 1) = v11[53];
          sub_494DC0((__int64)v11, &v109);
          v11[53] = v149;
          sub_496580((__int64)&v109);
        }
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v152, &v152, 3);
        --v67;
        sub_377BA0((__int64)&v150);
        sub_49FE20((__int64)&v152, a4);
        sub_4ADC30(v9, v4, v67, &v152);
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v152, &v152, 3);
        v6 = (char *)v9 - (char *)a1;
        if ( (char *)v9 - (char *)a1 <= 6912 )
          break;
        v7 = a4;
        v4 = v9;
        if ( !v67 )
          goto LABEL_28;
      }
    }
    else
    {
LABEL_28:
      sub_49FE20((__int64)&v150, v7);
      sub_49FE20((__int64)&v152, &v150);
      sub_4AD180((__int64)a1, (__int64)v4, &v152);
      sub_377BA0((__int64)&v152);
      while ( (char *)v4 - (char *)a1 > 432 )
      {
        v4 -= 54;
        sub_49B590((__int64)&v69, v4);
        v108 = v4[53];
        sub_494DC0((__int64)v4, a1);
        v49 = a1[53];
        i = 0u;
        v4[53] = v49;
        v152 = 0;
        if ( v151.m128i_i64[0] )
        {
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v151.m128i_i64[0])(&v152, &v150, 2);
          i = _mm_load_si128(&v151);
        }
        v50 = v69;
        v51 = _mm_load_si128(&v72);
        v69 = 0;
        v52 = _mm_loadu_si128(&v70);
        v109 = v50;
        v112 = v51;
        v53 = _mm_loadu_si128(&v74);
        v111 = v71;
        v114 = v53;
        v54 = _mm_load_si128(&v76);
        v113 = v73;
        v116 = v54;
        v55 = _mm_loadu_si128(&v78);
        v115 = v75;
        v110 = v52;
        v117 = v77;
        v70 = 0;
        v72 = 0;
        v74 = 0;
        v76 = 0;
        v118 = v55;
        v78 = 0;
        v71 = 0;
        v73 = 0;
        v75 = 0;
        v77 = 0;
        v119 = v79;
        v56 = v80;
        v57 = _mm_loadu_si128(&v81);
        v80 = 0;
        v120 = v56;
        v121 = v57;
        v58 = _mm_load_si128(&v83);
        v122 = v82;
        v123 = v58;
        v59 = _mm_loadu_si128(&v87);
        v124 = v84;
        v127 = v59;
        v60 = _mm_load_si128(&v89);
        v125 = v85;
        v129 = v60;
        v61 = _mm_loadu_si128(&v91);
        v126 = v86;
        v81 = 0;
        v128 = v88;
        v83 = 0;
        v130 = v90;
        v87 = 0;
        v89 = 0;
        v82 = 0;
        v86 = 0;
        v88 = 0;
        v90 = 0;
        v131 = v61;
        v91 = 0;
        v132 = v92;
        v62 = _mm_load_si128(&v96);
        v96 = 0;
        v63 = _mm_load_si128(&v101);
        v133 = v93;
        v140 = v100;
        v134 = v94;
        v137 = v97;
        v135 = v95;
        v95 = 0;
        v138 = v98;
        v139 = v99;
        v142 = 0;
        v136 = v62;
        v141 = v63;
        if ( v97 == (__int64 *)&v102 )
        {
          v137 = &v142;
          v142 = v102;
        }
        if ( v99 )
          v137[*(_QWORD *)(v99 + 8) % v98] = (__int64)&v139;
        v64 = _mm_load_si128(&v103);
        v97 = (__int64 *)&v102;
        v143 = *((_QWORD *)&v102 + 1);
        v144 = v64;
        v65 = _mm_loadu_si128(&v105);
        v145 = v104;
        v101.m128i_i64[1] = 0;
        v147 = v106;
        v98 = 1;
        v148 = v107;
        v99 = 0;
        v149 = v108;
        v102 = 0;
        v100 = 0;
        v104 = 0;
        v103 = 0;
        v146 = v65;
        v105 = 0;
        sub_4ACE30((__int64)a1, 0, 0x84BDA12F684BDA13LL * (((char *)v4 - (char *)a1) >> 4), &v109, (__int64)&v152);
        sub_496580((__int64)&v109);
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v152, &v152, 3);
        sub_496580((__int64)&v69);
      }
      sub_377BA0((__int64)&v150);
    }
  }
  return v154 - __readfsqword(0x28u);
}
