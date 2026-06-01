unsigned __int64 __fastcall sub_4987E0(__int64 *a1, __int64 *a2, __int64 a3, const __m128i *a4)
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
  __m128i v34; // xmm0
  __int64 v35; // rsi
  __int64 *v36; // rdx
  unsigned __int64 v37; // rcx
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rax
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  __m128i v53; // xmm1
  __m128i v54; // xmm1
  __int64 v55; // rax
  __m128i v56; // xmm1
  __m128i v57; // xmm1
  __m128i v58; // xmm1
  __m128i v59; // xmm1
  __m128i v60; // xmm1
  __m128i v61; // xmm1
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __m128i v64; // xmm1
  __int64 v66; // [rsp+10h] [rbp-3F8h]
  __int64 v68; // [rsp+20h] [rbp-3E8h] BYREF
  __m128i v69; // [rsp+28h] [rbp-3E0h] BYREF
  __int64 v70; // [rsp+38h] [rbp-3D0h]
  __m128i v71; // [rsp+40h] [rbp-3C8h] BYREF
  __int64 v72; // [rsp+50h] [rbp-3B8h]
  __m128i v73; // [rsp+58h] [rbp-3B0h] BYREF
  __int64 v74; // [rsp+68h] [rbp-3A0h]
  __m128i v75; // [rsp+70h] [rbp-398h] BYREF
  __int64 v76; // [rsp+80h] [rbp-388h]
  __m128i v77; // [rsp+88h] [rbp-380h] BYREF
  int v78; // [rsp+98h] [rbp-370h]
  __int64 v79; // [rsp+A0h] [rbp-368h]
  __m128i v80; // [rsp+A8h] [rbp-360h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-350h]
  __m128i v82; // [rsp+C0h] [rbp-348h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-338h]
  char v84; // [rsp+D8h] [rbp-330h]
  __int64 v85; // [rsp+E0h] [rbp-328h]
  __m128i v86; // [rsp+E8h] [rbp-320h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-310h]
  __m128i v88; // [rsp+100h] [rbp-308h] BYREF
  __int64 v89; // [rsp+110h] [rbp-2F8h]
  __m128i v90; // [rsp+118h] [rbp-2F0h] BYREF
  int v91; // [rsp+128h] [rbp-2E0h]
  __int16 v92; // [rsp+12Ch] [rbp-2DCh]
  char v93; // [rsp+12Eh] [rbp-2DAh]
  __int64 v94; // [rsp+130h] [rbp-2D8h]
  __m128i v95; // [rsp+138h] [rbp-2D0h] BYREF
  __int64 *v96; // [rsp+148h] [rbp-2C0h]
  unsigned __int64 v97; // [rsp+150h] [rbp-2B8h]
  __int64 v98; // [rsp+158h] [rbp-2B0h]
  __int64 v99; // [rsp+160h] [rbp-2A8h]
  __m128i v100; // [rsp+168h] [rbp-2A0h] BYREF
  __int128 v101; // [rsp+178h] [rbp-290h] BYREF
  __m128i v102; // [rsp+188h] [rbp-280h] BYREF
  __int64 v103; // [rsp+198h] [rbp-270h]
  __m128i v104; // [rsp+1A0h] [rbp-268h] BYREF
  __int64 v105; // [rsp+1B0h] [rbp-258h]
  __int16 v106; // [rsp+1B8h] [rbp-250h]
  __int64 v107; // [rsp+1C0h] [rbp-248h]
  __int64 v108; // [rsp+1D0h] [rbp-238h] BYREF
  __m128i v109; // [rsp+1D8h] [rbp-230h]
  __int64 v110; // [rsp+1E8h] [rbp-220h]
  __m128i v111; // [rsp+1F0h] [rbp-218h]
  __int64 v112; // [rsp+200h] [rbp-208h]
  __m128i v113; // [rsp+208h] [rbp-200h]
  __int64 v114; // [rsp+218h] [rbp-1F0h]
  __m128i v115; // [rsp+220h] [rbp-1E8h]
  __int64 v116; // [rsp+230h] [rbp-1D8h]
  __m128i v117; // [rsp+238h] [rbp-1D0h]
  int v118; // [rsp+248h] [rbp-1C0h]
  __int64 v119; // [rsp+250h] [rbp-1B8h]
  __m128i v120; // [rsp+258h] [rbp-1B0h]
  __int64 v121; // [rsp+268h] [rbp-1A0h]
  __m128i v122; // [rsp+270h] [rbp-198h]
  __int64 v123; // [rsp+280h] [rbp-188h]
  char v124; // [rsp+288h] [rbp-180h]
  __int64 v125; // [rsp+290h] [rbp-178h]
  __m128i v126; // [rsp+298h] [rbp-170h]
  __int64 v127; // [rsp+2A8h] [rbp-160h]
  __m128i v128; // [rsp+2B0h] [rbp-158h]
  __int64 v129; // [rsp+2C0h] [rbp-148h]
  __m128i v130; // [rsp+2C8h] [rbp-140h]
  int v131; // [rsp+2D8h] [rbp-130h]
  __int16 v132; // [rsp+2DCh] [rbp-12Ch]
  char v133; // [rsp+2DEh] [rbp-12Ah]
  __int64 v134; // [rsp+2E0h] [rbp-128h]
  __m128i v135; // [rsp+2E8h] [rbp-120h]
  __int64 *v136; // [rsp+2F8h] [rbp-110h]
  unsigned __int64 v137; // [rsp+300h] [rbp-108h]
  __int64 v138; // [rsp+308h] [rbp-100h] BYREF
  __int64 v139; // [rsp+310h] [rbp-F8h]
  __m128i v140; // [rsp+318h] [rbp-F0h]
  __int64 v141; // [rsp+328h] [rbp-E0h] BYREF
  __int64 v142; // [rsp+330h] [rbp-D8h]
  __m128i v143; // [rsp+338h] [rbp-D0h]
  __int64 v144; // [rsp+348h] [rbp-C0h]
  __m128i v145; // [rsp+350h] [rbp-B8h]
  __int64 v146; // [rsp+360h] [rbp-A8h]
  __int16 v147; // [rsp+368h] [rbp-A0h]
  __int64 v148; // [rsp+370h] [rbp-98h]
  __m128i v149; // [rsp+380h] [rbp-88h] BYREF
  __m128i v150; // [rsp+390h] [rbp-78h] BYREF
  __m128i v151; // [rsp+3A0h] [rbp-68h] BYREF
  __m128i i; // [rsp+3B0h] [rbp-58h]
  unsigned __int64 v153; // [rsp+3C8h] [rbp-40h]

  v4 = a2;
  v66 = a3;
  v153 = __readfsqword(0x28u);
  v6 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 > 6784 )
  {
    v7 = a4;
    if ( a3 )
    {
      while ( 1 )
      {
        sub_48B040((__int64)&v149, v7);
        i = 0u;
        v151 = 0;
        v8 = &a1[53 * ((0x21CFB2B78C13521DLL * (v6 >> 3)) >> 1)];
        if ( v150.m128i_i64[0] )
        {
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v150.m128i_i64[0])(&v151, &v149, 2);
          i = _mm_load_si128(&v150);
        }
        v9 = a1 + 53;
        sub_498700(a1, a1 + 53, v8, v4 - 53, (__int64)&v151);
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v151, &v151, 3);
        i = 0u;
        v151 = 0;
        if ( !v150.m128i_i64[0] )
LABEL_41:
          std::__throw_bad_function_call();
        ((void (__fastcall *)(__m128i *, __m128i *, __int64))v150.m128i_i64[0])(&v151, &v149, 2);
        v10 = v150.m128i_i64[0];
        v11 = v4;
        for ( i = _mm_load_si128(&v150); ; v10 = i.m128i_i64[0] )
        {
          while ( 1 )
          {
            if ( !v10 )
              goto LABEL_41;
            v12 = ((__int64 (__fastcall *)(__m128i *, __int64 *, __int64 *))i.m128i_i64[1])(&v151, v9, a1);
            v10 = i.m128i_i64[0];
            if ( v12 >= 0 )
              break;
            v9 += 53;
          }
          v11 -= 53;
          if ( !i.m128i_i64[0] )
LABEL_40:
            std::__throw_bad_function_call();
          while ( ((int (__fastcall *)(__m128i *, __int64 *, __int64 *))i.m128i_i64[1])(&v151, a1, v11) < 0 )
          {
            v11 -= 53;
            if ( !i.m128i_i64[0] )
              goto LABEL_40;
          }
          if ( v9 >= v11 )
            break;
          v13 = *v9;
          v14 = _mm_loadu_si128((const __m128i *)(v9 + 1));
          *v9 = 0;
          *(_OWORD *)(v9 + 1) = 0;
          v108 = v13;
          v15 = v9[3];
          v109 = v14;
          v16 = _mm_loadu_si128((const __m128i *)v9 + 2);
          v110 = v15;
          v17 = v9[6];
          v111 = v16;
          v18 = _mm_loadu_si128((const __m128i *)(v9 + 7));
          v112 = v17;
          v19 = v9[9];
          v113 = v18;
          v20 = _mm_loadu_si128((const __m128i *)v9 + 5);
          v114 = v19;
          v21 = v9[12];
          v115 = v20;
          v22 = _mm_loadu_si128((const __m128i *)(v9 + 13));
          v116 = v21;
          LODWORD(v21) = *((_DWORD *)v9 + 30);
          v117 = v22;
          v9[3] = 0;
          v9[6] = 0;
          v9[9] = 0;
          v9[12] = 0;
          v118 = v21;
          *((_OWORD *)v9 + 2) = 0;
          *(_OWORD *)(v9 + 7) = 0;
          *((_OWORD *)v9 + 5) = 0;
          *(_OWORD *)(v9 + 13) = 0;
          v23 = v9[16];
          v24 = _mm_loadu_si128((const __m128i *)(v9 + 17));
          v9[16] = 0;
          v119 = v23;
          v25 = v9[19];
          v120 = v24;
          v26 = _mm_loadu_si128((const __m128i *)v9 + 10);
          v121 = v25;
          v27 = v9[22];
          v122 = v26;
          v28 = _mm_loadu_si128((const __m128i *)(v9 + 25));
          v123 = v27;
          LOBYTE(v27) = *((_BYTE *)v9 + 184);
          v126 = v28;
          v29 = _mm_loadu_si128((const __m128i *)v9 + 14);
          v124 = v27;
          v30 = v9[24];
          v128 = v29;
          v31 = _mm_loadu_si128((const __m128i *)(v9 + 31));
          v125 = v30;
          v32 = v9[27];
          v9[19] = 0;
          v127 = v32;
          v33 = v9[30];
          v9[24] = 0;
          v129 = v33;
          v9[27] = 0;
          v9[30] = 0;
          *(_OWORD *)(v9 + 17) = 0;
          *((_OWORD *)v9 + 10) = 0;
          *(_OWORD *)(v9 + 25) = 0;
          *((_OWORD *)v9 + 14) = 0;
          v130 = v31;
          LODWORD(v33) = *((_DWORD *)v9 + 66);
          v34 = _mm_loadu_si128((const __m128i *)(v9 + 35));
          v35 = v9[40];
          v36 = (__int64 *)v9[37];
          v141 = 0;
          v131 = v33;
          LOWORD(v33) = *((_WORD *)v9 + 134);
          v37 = v9[38];
          v135 = v34;
          v38 = _mm_loadu_si128((const __m128i *)(v9 + 41));
          v132 = v33;
          LOBYTE(v33) = *((_BYTE *)v9 + 270);
          v139 = v35;
          v133 = v33;
          v39 = v9[34];
          v136 = v36;
          v134 = v39;
          v40 = v9[39];
          v9[34] = 0;
          v137 = v37;
          v138 = v40;
          *(_OWORD *)(v9 + 31) = 0;
          *(_OWORD *)(v9 + 35) = 0;
          v140 = v38;
          if ( v36 == v9 + 43 )
          {
            v136 = &v141;
            v141 = v9[43];
          }
          if ( v40 )
            v136[*(unsigned int *)(v40 + 8) % v37] = (__int64)&v138;
          v41 = v9[44];
          v42 = _mm_loadu_si128((const __m128i *)(v9 + 45));
          v9[37] = (__int64)(v9 + 43);
          v9[42] = 0;
          v43 = (__int64)v9;
          v44 = v9[50];
          v142 = v41;
          v45 = v9[47];
          v9 += 53;
          *(v9 - 15) = 1;
          v144 = v45;
          LOWORD(v45) = *((_WORD *)v9 - 8);
          *(v9 - 14) = 0;
          *(v9 - 13) = 0;
          *(v9 - 6) = 0;
          v147 = v45;
          v46 = *(v9 - 1);
          v143 = v42;
          v47 = _mm_loadu_si128((const __m128i *)(v9 - 5));
          *((_OWORD *)v9 - 5) = 0;
          *((_OWORD *)v9 - 4) = 0;
          *(_OWORD *)(v9 - 5) = 0;
          v146 = v44;
          v145 = v47;
          v148 = v46;
          sub_480260(v43, v11);
          *(v9 - 1) = v11[52];
          sub_480260((__int64)v11, &v108);
          v11[52] = v148;
          sub_481890((__int64)&v108);
        }
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v151, &v151, 3);
        --v66;
        sub_374250((__int64)&v149);
        sub_48B040((__int64)&v151, a4);
        sub_4987E0(v9, v4, v66, &v151);
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v151, &v151, 3);
        v6 = (char *)v9 - (char *)a1;
        if ( (char *)v9 - (char *)a1 <= 6784 )
          break;
        v7 = a4;
        v4 = v9;
        if ( !v66 )
          goto LABEL_28;
      }
    }
    else
    {
LABEL_28:
      sub_48B040((__int64)&v149, v7);
      sub_48B040((__int64)&v151, &v149);
      sub_497D40((__int64)a1, (__int64)v4, &v151);
      sub_374250((__int64)&v151);
      while ( (char *)v4 - (char *)a1 > 424 )
      {
        v4 -= 53;
        sub_486910((__int64)&v68, v4);
        v107 = v4[52];
        sub_480260((__int64)v4, a1);
        v48 = a1[52];
        i = 0u;
        v4[52] = v48;
        v151 = 0;
        if ( v150.m128i_i64[0] )
        {
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))v150.m128i_i64[0])(&v151, &v149, 2);
          i = _mm_load_si128(&v150);
        }
        v49 = v68;
        v50 = _mm_load_si128(&v71);
        v68 = 0;
        v51 = _mm_loadu_si128(&v69);
        v108 = v49;
        v111 = v50;
        v52 = _mm_loadu_si128(&v73);
        v110 = v70;
        v113 = v52;
        v53 = _mm_load_si128(&v75);
        v112 = v72;
        v115 = v53;
        v54 = _mm_loadu_si128(&v77);
        v114 = v74;
        v109 = v51;
        v116 = v76;
        v69 = 0;
        v71 = 0;
        v73 = 0;
        v75 = 0;
        v117 = v54;
        v77 = 0;
        v70 = 0;
        v72 = 0;
        v74 = 0;
        v76 = 0;
        v118 = v78;
        v55 = v79;
        v56 = _mm_loadu_si128(&v80);
        v79 = 0;
        v119 = v55;
        v120 = v56;
        v57 = _mm_load_si128(&v82);
        v121 = v81;
        v122 = v57;
        v58 = _mm_loadu_si128(&v86);
        v123 = v83;
        v126 = v58;
        v59 = _mm_load_si128(&v88);
        v124 = v84;
        v128 = v59;
        v60 = _mm_loadu_si128(&v90);
        v125 = v85;
        v80 = 0;
        v127 = v87;
        v82 = 0;
        v129 = v89;
        v86 = 0;
        v88 = 0;
        v81 = 0;
        v85 = 0;
        v87 = 0;
        v89 = 0;
        v130 = v60;
        v90 = 0;
        v61 = _mm_loadu_si128(&v95);
        v131 = v91;
        v95 = 0;
        v62 = _mm_loadu_si128(&v100);
        v139 = v99;
        v132 = v92;
        v136 = v96;
        v133 = v93;
        v137 = v97;
        v134 = v94;
        v94 = 0;
        v138 = v98;
        v141 = 0;
        v135 = v61;
        v140 = v62;
        if ( v96 == (__int64 *)&v101 )
        {
          v136 = &v141;
          v141 = v101;
        }
        if ( v98 )
          v136[*(unsigned int *)(v98 + 8) % v97] = (__int64)&v138;
        v63 = _mm_loadu_si128(&v102);
        v96 = (__int64 *)&v101;
        v142 = *((_QWORD *)&v101 + 1);
        v143 = v63;
        v64 = _mm_load_si128(&v104);
        v144 = v103;
        v100.m128i_i64[1] = 0;
        v146 = v105;
        v97 = 1;
        v147 = v106;
        v98 = 0;
        v148 = v107;
        v101 = 0;
        v99 = 0;
        v103 = 0;
        v102 = 0;
        v145 = v64;
        v104 = 0;
        sub_497A40((__int64)a1, 0, 0x21CFB2B78C13521DLL * (v4 - a1), &v108, (__int64)&v151);
        sub_481890((__int64)&v108);
        if ( i.m128i_i64[0] )
          ((void (__fastcall *)(__m128i *, __m128i *, __int64))i.m128i_i64[0])(&v151, &v151, 3);
        sub_481890((__int64)&v68);
      }
      sub_374250((__int64)&v149);
    }
  }
  return v153 - __readfsqword(0x28u);
}

