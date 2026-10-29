void __fastcall sub_6630A0(__int64 *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v8; // r12
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // r12
  __int64 v12; // rdi
  int v13; // esi
  __m128i v14; // rax
  __m128i v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  _QWORD *v18; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rdx
  _BYTE *v25; // rax
  __m128i v26; // xmm7
  __m128i v27; // xmm0
  __int64 v28; // rsi
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 *v32; // rax
  void (__fastcall ***v33)(_QWORD); // rdi
  _QWORD *v34; // r14
  __int64 v35; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  _QWORD *v39; // rax
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __m128i v43; // xmm0
  __int64 v44; // rdx
  __int64 v45; // rdx
  _BYTE *v46; // rax
  __m128i v47; // xmm6
  __m128i v48; // xmm0
  __m128i v49; // xmm0
  __m128i v50; // xmm0
  __m128i v51; // xmm0
  int v52; // eax
  _DWORD *v53; // rdi
  _DWORD *v54; // rcx
  __int64 v55; // rsi
  int v56; // eax
  _DWORD *v57; // rdi
  _DWORD *v58; // rcx
  __int64 v59; // rsi
  __int64 v60; // rcx
  __int64 v61; // rsi
  _QWORD *v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rsi
  _QWORD *v65; // r10
  __m128i v66; // [rsp+0h] [rbp-648h]
  __m128i v67; // [rsp+0h] [rbp-648h]
  __m128i v68; // [rsp+10h] [rbp-638h]
  __m128i v69; // [rsp+10h] [rbp-638h]
  __m128i v70; // [rsp+38h] [rbp-610h]
  __m128i v71; // [rsp+38h] [rbp-610h]
  __m128i v72; // [rsp+A0h] [rbp-5A8h] BYREF
  __int64 *v73; // [rsp+B0h] [rbp-598h]
  __int64 *v74; // [rsp+B8h] [rbp-590h]
  __int64 *v75; // [rsp+C0h] [rbp-588h]
  __int64 *v76; // [rsp+C8h] [rbp-580h]
  __int64 *v77; // [rsp+D0h] [rbp-578h]
  __int64 v78; // [rsp+D8h] [rbp-570h]
  __int64 *v79; // [rsp+E0h] [rbp-568h]
  __int64 *v80; // [rsp+E8h] [rbp-560h]
  _QWORD *v81; // [rsp+F0h] [rbp-558h]
  _QWORD *v82; // [rsp+F8h] [rbp-550h]
  __int64 v83; // [rsp+100h] [rbp-548h]
  __int64 *v84; // [rsp+108h] [rbp-540h]
  __m128i v85; // [rsp+110h] [rbp-538h] BYREF
  _BYTE *v86; // [rsp+120h] [rbp-528h]
  __int64 *v87; // [rsp+128h] [rbp-520h]
  unsigned __int8 **v88; // [rsp+130h] [rbp-518h]
  int v89; // [rsp+13Ch] [rbp-50Ch]
  _QWORD *v90; // [rsp+140h] [rbp-508h]
  __int64 v91; // [rsp+148h] [rbp-500h]
  __m128i v92; // [rsp+150h] [rbp-4F8h] BYREF
  __int64 v93; // [rsp+160h] [rbp-4E8h]
  __m128 v94; // [rsp+170h] [rbp-4D8h] BYREF
  __int64 v95; // [rsp+180h] [rbp-4C8h]
  __int64 v96[4]; // [rsp+190h] [rbp-4B8h] BYREF
  __int64 v97[4]; // [rsp+1B0h] [rbp-498h] BYREF
  _QWORD v98[2]; // [rsp+1D0h] [rbp-478h] BYREF
  char v99; // [rsp+1E0h] [rbp-468h]
  _BYTE v100[32]; // [rsp+1F0h] [rbp-458h] BYREF
  _BYTE v101[32]; // [rsp+210h] [rbp-438h] BYREF
  __m128i v102; // [rsp+230h] [rbp-418h] BYREF
  __int64 v103; // [rsp+240h] [rbp-408h]
  __int64 v104[4]; // [rsp+250h] [rbp-3F8h] BYREF
  _BYTE v105[32]; // [rsp+270h] [rbp-3D8h] BYREF
  void *v106; // [rsp+290h] [rbp-3B8h] BYREF
  __int64 v107; // [rsp+298h] [rbp-3B0h]
  __int64 v108; // [rsp+2A0h] [rbp-3A8h] BYREF
  void *v109; // [rsp+2B0h] [rbp-398h] BYREF
  __int64 v110; // [rsp+2B8h] [rbp-390h]
  __int64 v111; // [rsp+2C0h] [rbp-388h] BYREF
  _QWORD *v112; // [rsp+2D0h] [rbp-378h] BYREF
  __int64 v113; // [rsp+2D8h] [rbp-370h]
  _QWORD v114[2]; // [rsp+2E0h] [rbp-368h] BYREF
  void *v115; // [rsp+2F0h] [rbp-358h] BYREF
  __int64 v116; // [rsp+2F8h] [rbp-350h]
  _QWORD v117[2]; // [rsp+300h] [rbp-348h] BYREF
  _BYTE v118[24]; // [rsp+310h] [rbp-338h] BYREF
  __int64 v119[3]; // [rsp+328h] [rbp-320h] BYREF
  _QWORD v120[3]; // [rsp+340h] [rbp-308h] BYREF
  _BYTE v121[24]; // [rsp+358h] [rbp-2F0h] BYREF
  _QWORD v122[3]; // [rsp+370h] [rbp-2D8h] BYREF
  _BYTE v123[24]; // [rsp+388h] [rbp-2C0h] BYREF
  __m128i v124; // [rsp+3A0h] [rbp-2A8h] BYREF
  __m128i v125; // [rsp+3B0h] [rbp-298h] BYREF
  __m128i v126; // [rsp+3C0h] [rbp-288h] BYREF
  __int64 v127; // [rsp+3D0h] [rbp-278h]
  __m128i v128; // [rsp+3E0h] [rbp-268h] BYREF
  __m128i v129; // [rsp+3F0h] [rbp-258h] BYREF
  __m128i v130; // [rsp+400h] [rbp-248h] BYREF
  __int64 v131; // [rsp+410h] [rbp-238h]
  void *ptr; // [rsp+420h] [rbp-228h] BYREF
  __int64 v133; // [rsp+428h] [rbp-220h]
  char v134; // [rsp+438h] [rbp-210h] BYREF
  __m128i v135; // [rsp+458h] [rbp-1F0h] BYREF
  __m128i v136; // [rsp+468h] [rbp-1E0h] BYREF
  __m128i v137; // [rsp+478h] [rbp-1D0h] BYREF
  __int16 v138; // [rsp+488h] [rbp-1C0h]
  char v139; // [rsp+48Ah] [rbp-1BEh]
  _BYTE v140[24]; // [rsp+490h] [rbp-1B8h] BYREF
  _BYTE v141[32]; // [rsp+4A8h] [rbp-1A0h] BYREF
  __m128i v142; // [rsp+4C8h] [rbp-180h] BYREF
  __m128i v143; // [rsp+4D8h] [rbp-170h] BYREF
  __m128i v144; // [rsp+4E8h] [rbp-160h] BYREF
  __int16 v145; // [rsp+4F8h] [rbp-150h]
  char v146; // [rsp+4FAh] [rbp-14Eh]
  _BYTE v147[24]; // [rsp+500h] [rbp-148h] BYREF
  _BYTE v148[32]; // [rsp+518h] [rbp-130h] BYREF
  __m128i v149; // [rsp+538h] [rbp-110h]
  __m128i v150; // [rsp+548h] [rbp-100h]
  __m128i v151; // [rsp+558h] [rbp-F0h]
  __int16 v152; // [rsp+568h] [rbp-E0h]
  char v153; // [rsp+56Ah] [rbp-DEh]
  void *v154; // [rsp+570h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+578h] [rbp-D0h]
  _BYTE v156[192]; // [rsp+588h] [rbp-C0h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 2) != 0 )
    return;
  sub_791DD0(&v106, a2 + 40);
  v154 = v156;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  sub_11240B0(a2, &v154);
  sub_CAE550(&v92, *(_QWORD *)(*a1 + 2152), *(unsigned int *)(a2 + 24), 1);
  v95 = 0;
  v94 = 0;
  v8 = sub_63DC30(a1, a2);
  if ( v8 )
  {
    v9 = sub_6BB140(*a1, a2);
    sub_AA92F0(v140, v8, *(_QWORD *)(*a1 + 2152), v9);
    a4 = _mm_load_si128((const __m128i *)v140);
    memset(v147, 0, sizeof(v147));
    v95 = *(_QWORD *)&v140[16];
    v94 = (__m128)a4;
    memset(v140, 0, sizeof(v140));
    sub_646A80((__int64 *)v147);
    sub_646A80((__int64 *)v140);
  }
  sub_FD9980(v96, a2);
  sub_FCD270(v97, a2);
  v73 = (__int64 *)v118;
  sub_64C880((__int64)v118, a2, 0.0, *(double *)a4.m128i_i64, a5, a6);
  sub_643500((__int64 *)&v109, a2);
  v10 = sub_7A4F00(a2);
  v11 = a1[1];
  v12 = *a1;
  v13 = *(_DWORD *)(a2 + 24);
  if ( v10 )
  {
    LOBYTE(v76) = sub_63DE20(v12, v13);
    sub_766420(&ptr, a2);
    sub_63E5A0((__int64)&v124, (__int64)a1, a2);
    v77 = (__int64 *)v106;
    v78 = v107;
    v14.m128i_i64[0] = sub_FC8E80(v11, v154, si128.m128i_i64[0]);
    *(_QWORD *)&v147[16] = 0;
    v72 = v14;
    *(__m128i *)v147 = _mm_load_si128(&v72);
    sub_64F120((__int64)v98, v11 + 160, (__m128i *)v147, (__int64 *)&v147[16]);
    v83 = v98[0];
    if ( *(_QWORD *)&v147[16] )
      (***(void (__fastcall ****)(_QWORD))&v147[16])(*(_QWORD *)&v147[16]);
    if ( !v99 )
      goto LABEL_8;
    v81 = (_QWORD *)sub_63DDF0(v11, 416, 4);
    v87 = (__int64 *)&v112;
    v112 = v114;
    sub_63E170((__int64 *)&v112, v109, (__int64)v109 + v110);
    v74 = v120;
    sub_646AF0(v120, v73);
    v75 = (__int64 *)v121;
    sub_644390((__int64)v121, v119);
    v79 = (__int64 *)v100;
    sub_644390((__int64)v100, v97);
    v80 = (__int64 *)v101;
    sub_644390((__int64)v101, v96);
    v88 = (unsigned __int8 **)v140;
    v86 = v141;
    *(_QWORD *)v140 = v141;
    v85 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    *(__m128i *)&v140[8] = v85;
    if ( v133 )
      sub_63DE60((__int64)v88, (unsigned __int8 **)&ptr);
    v37 = _mm_loadu_si128(&v135);
    v145 = v138;
    v142 = v37;
    v38 = _mm_loadu_si128(&v136);
    v146 = v139;
    v143 = v38;
    v144 = _mm_loadu_si128(&v137);
    v39 = (_QWORD *)sub_FC8E80(v11, v77, v78);
    v40 = _mm_load_si128(&v124);
    v90 = v39;
    v128 = v40;
    v41 = _mm_load_si128(&v125);
    v131 = v127;
    v129 = v41;
    v42 = _mm_load_si128(&v126);
    v103 = v93;
    v130 = v42;
    v43 = _mm_load_si128(&v92);
    v89 = (unsigned __int8)v76;
    v82 = v117;
    v115 = v117;
    v91 = v44;
    v45 = v113;
    v102 = v43;
    if ( v112 == v114 )
    {
      v56 = v113 + 1;
      v57 = v82;
      v58 = v114;
      if ( (unsigned int)(v113 + 1) >= 8 )
      {
        LODWORD(v60) = 0;
        do
        {
          v61 = (unsigned int)v60;
          v62 = v82;
          v60 = (unsigned int)(v60 + 8);
          *(_QWORD *)((char *)v82 + v61) = *(_QWORD *)((char *)v114 + v61);
        }
        while ( (unsigned int)v60 < (v56 & 0xFFFFFFF8) );
        v57 = (_DWORD *)((char *)v62 + v60);
        v58 = (_DWORD *)((char *)v114 + v60);
      }
      v59 = 0;
      if ( (v56 & 4) != 0 )
      {
        *v57 = *v58;
        v59 = 4;
      }
      if ( (v56 & 2) != 0 )
      {
        *(_WORD *)((char *)v57 + v59) = *(_WORD *)((char *)v58 + v59);
        v59 += 2;
      }
      if ( (v56 & 1) != 0 )
        *((_BYTE *)v57 + v59) = *((_BYTE *)v58 + v59);
    }
    else
    {
      v115 = v112;
      v117[0] = v114[0];
    }
    v116 = v45;
    v76 = v122;
    v112 = v114;
    v113 = 0;
    LOBYTE(v114[0]) = 0;
    sub_646AF0(v122, v74);
    v84 = (__int64 *)v123;
    sub_644390((__int64)v123, v75);
    v77 = (__int64 *)v105;
    sub_644390((__int64)v105, v79);
    sub_644390((__int64)v104, v80);
    v46 = v148;
    v47 = _mm_load_si128(&v85);
    *(_QWORD *)v147 = v148;
    *(__m128i *)&v147[8] = v47;
    if ( *(_QWORD *)&v140[8] )
    {
      v85.m128i_i64[0] = (__int64)v148;
      sub_63DE60((__int64)v147, v88);
      v46 = (_BYTE *)v85.m128i_i64[0];
    }
    v48 = _mm_loadu_si128(&v142);
    v85.m128i_i64[0] = (__int64)v46;
    v28 = 28;
    v149 = v48;
    v49 = _mm_loadu_si128(&v143);
    v152 = v145;
    v150 = v49;
    v50 = _mm_loadu_si128(&v144);
    v153 = v146;
    v151 = v50;
    v71 = _mm_load_si128(&v102);
    v67 = _mm_load_si128(&v128);
    v69 = _mm_load_si128(&v129);
    v51 = _mm_load_si128(&v130);
    sub_6474F0(
      (__int64)v81,
      0x1Cu,
      v72.m128i_i64[0],
      (_QWORD *)v72.m128i_i64[1],
      v90,
      v91,
      v67.m128i_i64[0],
      v67.m128i_i64[1],
      v69.m128i_i64[0],
      v69.m128i_i64[1],
      v51.m128i_i64[0],
      v51.m128i_i64[1],
      v131,
      v71.m128i_i64[0],
      v71.m128i_i64[1],
      v103,
      (__int64)v147,
      (__int64 *)&v94,
      v104,
      v77,
      (__int64)v76,
      (__int64)&v115,
      v89);
    if ( *(_QWORD *)v147 != v85.m128i_i64[0] )
      free(*(void **)v147);
    sub_6441A0(v104);
    sub_6441A0(v77);
    sub_6441A0(v84);
    sub_647CF0(v76);
    if ( v115 != v82 )
    {
      v28 = v117[0] + 1LL;
      operator delete(v115, v117[0] + 1LL);
    }
    v32 = qword_49931C0;
  }
  else
  {
    LOBYTE(v76) = sub_63DE20(v12, v13);
    sub_766420(&ptr, a2);
    sub_63E5A0((__int64)&v124, (__int64)a1, a2);
    v77 = (__int64 *)v106;
    v78 = v107;
    v15.m128i_i64[0] = sub_FC8E80(v11, v154, si128.m128i_i64[0]);
    *(_QWORD *)&v147[16] = 0;
    v72 = v15;
    *(__m128i *)v147 = _mm_load_si128(&v72);
    sub_64F120((__int64)v98, v11 + 160, (__m128i *)v147, (__int64 *)&v147[16]);
    v83 = v98[0];
    if ( *(_QWORD *)&v147[16] )
      (***(void (__fastcall ****)(_QWORD))&v147[16])(*(_QWORD *)&v147[16]);
    if ( !v99 )
      goto LABEL_8;
    v81 = (_QWORD *)sub_63DDF0(v11, 416, 4);
    v87 = (__int64 *)&v112;
    v112 = v114;
    sub_63E170((__int64 *)&v112, v109, (__int64)v109 + v110);
    v74 = v120;
    sub_646AF0(v120, v73);
    v75 = (__int64 *)v121;
    sub_644390((__int64)v121, v119);
    v79 = (__int64 *)v100;
    sub_644390((__int64)v100, v97);
    v80 = (__int64 *)v101;
    sub_644390((__int64)v101, v96);
    v88 = (unsigned __int8 **)v140;
    v86 = v141;
    *(_QWORD *)v140 = v141;
    v85 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
    *(__m128i *)&v140[8] = v85;
    if ( v133 )
      sub_63DE60((__int64)v88, (unsigned __int8 **)&ptr);
    v16 = _mm_loadu_si128(&v135);
    v145 = v138;
    v142 = v16;
    v17 = _mm_loadu_si128(&v136);
    v146 = v139;
    v143 = v17;
    v144 = _mm_loadu_si128(&v137);
    v18 = (_QWORD *)sub_FC8E80(v11, v77, v78);
    v19 = _mm_load_si128(&v124);
    v90 = v18;
    v128 = v19;
    v20 = _mm_load_si128(&v125);
    v131 = v127;
    v129 = v20;
    v21 = _mm_load_si128(&v126);
    v103 = v93;
    v130 = v21;
    v22 = _mm_load_si128(&v92);
    v89 = (unsigned __int8)v76;
    v82 = v117;
    v115 = v117;
    v91 = v23;
    v24 = v113;
    v102 = v22;
    if ( v112 == v114 )
    {
      v52 = v113 + 1;
      v53 = v82;
      v54 = v114;
      if ( (unsigned int)(v113 + 1) >= 8 )
      {
        LODWORD(v63) = 0;
        do
        {
          v64 = (unsigned int)v63;
          v65 = v82;
          v63 = (unsigned int)(v63 + 8);
          *(_QWORD *)((char *)v82 + v64) = *(_QWORD *)((char *)v114 + v64);
        }
        while ( (unsigned int)v63 < (v52 & 0xFFFFFFF8) );
        v53 = (_DWORD *)((char *)v65 + v63);
        v54 = (_DWORD *)((char *)v114 + v63);
      }
      v55 = 0;
      if ( (v52 & 4) != 0 )
      {
        *v53 = *v54;
        v55 = 4;
      }
      if ( (v52 & 2) != 0 )
      {
        *(_WORD *)((char *)v53 + v55) = *(_WORD *)((char *)v54 + v55);
        v55 += 2;
      }
      if ( (v52 & 1) != 0 )
        *((_BYTE *)v53 + v55) = *((_BYTE *)v54 + v55);
    }
    else
    {
      v115 = v112;
      v117[0] = v114[0];
    }
    v116 = v24;
    v76 = v122;
    v112 = v114;
    v113 = 0;
    LOBYTE(v114[0]) = 0;
    sub_646AF0(v122, v74);
    v84 = (__int64 *)v123;
    sub_644390((__int64)v123, v75);
    v77 = (__int64 *)v105;
    sub_644390((__int64)v105, v79);
    sub_644390((__int64)v104, v80);
    v25 = v148;
    v26 = _mm_load_si128(&v85);
    *(_QWORD *)v147 = v148;
    *(__m128i *)&v147[8] = v26;
    if ( *(_QWORD *)&v140[8] )
    {
      v85.m128i_i64[0] = (__int64)v148;
      sub_63DE60((__int64)v147, v88);
      v25 = (_BYTE *)v85.m128i_i64[0];
    }
    v27 = _mm_loadu_si128(&v142);
    v85.m128i_i64[0] = (__int64)v25;
    v28 = 29;
    v149 = v27;
    v29 = _mm_loadu_si128(&v143);
    v152 = v145;
    v150 = v29;
    v30 = _mm_loadu_si128(&v144);
    v153 = v146;
    v151 = v30;
    v70 = _mm_load_si128(&v102);
    v66 = _mm_load_si128(&v128);
    v68 = _mm_load_si128(&v129);
    v31 = _mm_load_si128(&v130);
    sub_6474F0(
      (__int64)v81,
      0x1Du,
      v72.m128i_i64[0],
      (_QWORD *)v72.m128i_i64[1],
      v90,
      v91,
      v66.m128i_i64[0],
      v66.m128i_i64[1],
      v68.m128i_i64[0],
      v68.m128i_i64[1],
      v31.m128i_i64[0],
      v31.m128i_i64[1],
      v131,
      v70.m128i_i64[0],
      v70.m128i_i64[1],
      v103,
      (__int64)v147,
      (__int64 *)&v94,
      v104,
      v77,
      (__int64)v76,
      (__int64)&v115,
      v89);
    if ( *(_QWORD *)v147 != v85.m128i_i64[0] )
      free(*(void **)v147);
    sub_6441A0(v104);
    sub_6441A0(v77);
    sub_6441A0(v84);
    sub_647CF0(v76);
    if ( v115 != v82 )
    {
      v28 = v117[0] + 1LL;
      operator delete(v115, v117[0] + 1LL);
    }
    v32 = qword_4993198;
  }
  *v81 = v32 + 2;
  if ( *(_BYTE **)v140 != v86 )
    free(*(void **)v140);
  sub_6441A0(v80);
  sub_6441A0(v79);
  sub_6441A0(v75);
  sub_647CF0(v74);
  std::string::_M_dispose();
  v33 = *(void (__fastcall ****)(_QWORD))(v83 + 16);
  *(_QWORD *)(v83 + 16) = v81;
  if ( v33 )
    (**v33)(v33);
  v34 = v81;
  v35 = v81[11];
  if ( v35 && (unsigned int)(*(_DWORD *)(v35 + 356) - 2) <= 0x13 && (v36 = sub_FC8C50(v35, v28)) != 0 )
    sub_FC8D50(v36, v34);
  else
    sub_64B900(v11 + 184, (__int64)v81);
LABEL_8:
  if ( ptr != &v134 )
    free(ptr);
  if ( v109 != &v111 )
    operator delete(v109, v111 + 1);
  sub_6441A0(v119);
  sub_647CF0(v73);
  sub_6441A0(v97);
  sub_6441A0(v96);
  sub_646A80((__int64 *)&v94);
  if ( v154 != v156 )
    free(v154);
  if ( v106 != &v108 )
    operator delete(v106, v108 + 1);
}

