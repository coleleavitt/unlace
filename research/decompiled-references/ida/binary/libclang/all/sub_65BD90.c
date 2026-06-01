void __fastcall sub_65BD90(_QWORD *a1, __int64 a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r15
  int v9; // eax
  __m128i v10; // rax
  __int64 v11; // r12
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __m128i v17; // xmm0
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  void (__fastcall ***v27)(_QWORD); // rdi
  __int64 v28; // rdi
  __int64 v29; // rax
  char v30; // [rsp+D0h] [rbp-838h]
  __int64 v31; // [rsp+D8h] [rbp-830h]
  void *v32; // [rsp+E0h] [rbp-828h]
  void *v33; // [rsp+E8h] [rbp-820h]
  char v34; // [rsp+F7h] [rbp-811h]
  __int64 v35; // [rsp+130h] [rbp-7D8h]
  __int64 v36; // [rsp+138h] [rbp-7D0h]
  __int64 v37; // [rsp+140h] [rbp-7C8h]
  __int64 v38; // [rsp+148h] [rbp-7C0h]
  __int64 v39; // [rsp+150h] [rbp-7B8h]
  __int64 v40; // [rsp+158h] [rbp-7B0h]
  __int64 v41; // [rsp+160h] [rbp-7A8h]
  __int64 v42; // [rsp+168h] [rbp-7A0h]
  __int64 v43; // [rsp+180h] [rbp-788h]
  __int64 v44; // [rsp+190h] [rbp-778h]
  __int64 v45; // [rsp+198h] [rbp-770h]
  _QWORD v46[4]; // [rsp+1C0h] [rbp-748h] BYREF
  __m128 v47; // [rsp+1E0h] [rbp-728h] BYREF
  __int64 v48; // [rsp+1F0h] [rbp-718h]
  __int64 v49[4]; // [rsp+200h] [rbp-708h] BYREF
  __m128i v50; // [rsp+220h] [rbp-6E8h] BYREF
  __int64 v51; // [rsp+230h] [rbp-6D8h]
  __int64 v52; // [rsp+240h] [rbp-6C8h] BYREF
  char v53; // [rsp+250h] [rbp-6B8h]
  __int64 v54[4]; // [rsp+260h] [rbp-6A8h] BYREF
  __m128i v55; // [rsp+280h] [rbp-688h] BYREF
  __int64 v56; // [rsp+290h] [rbp-678h]
  __int64 v57[4]; // [rsp+2A0h] [rbp-668h] BYREF
  __int64 v58[4]; // [rsp+2C0h] [rbp-648h] BYREF
  __m128i v59; // [rsp+2E0h] [rbp-628h] BYREF
  __int64 v60; // [rsp+2F0h] [rbp-618h]
  __int64 v61[4]; // [rsp+300h] [rbp-608h] BYREF
  __int64 v62[4]; // [rsp+320h] [rbp-5E8h] BYREF
  void *v63[2]; // [rsp+340h] [rbp-5C8h] BYREF
  __int64 v64; // [rsp+350h] [rbp-5B8h] BYREF
  char *v65[2]; // [rsp+360h] [rbp-5A8h] BYREF
  _DWORD v66[4]; // [rsp+370h] [rbp-598h] BYREF
  __int64 v67[3]; // [rsp+380h] [rbp-588h] BYREF
  __int64 v68[3]; // [rsp+398h] [rbp-570h] BYREF
  __int64 v69[3]; // [rsp+3B0h] [rbp-558h] BYREF
  __int64 v70[3]; // [rsp+3C8h] [rbp-540h] BYREF
  __int64 v71[3]; // [rsp+3E0h] [rbp-528h] BYREF
  __int64 v72[3]; // [rsp+3F8h] [rbp-510h] BYREF
  _QWORD v73[8]; // [rsp+410h] [rbp-4F8h] BYREF
  __m128i v74; // [rsp+450h] [rbp-4B8h] BYREF
  __m128i v75; // [rsp+460h] [rbp-4A8h] BYREF
  __m128i v76; // [rsp+470h] [rbp-498h] BYREF
  __int64 v77; // [rsp+480h] [rbp-488h]
  void *ptr[3]; // [rsp+490h] [rbp-478h] BYREF
  char v79; // [rsp+4A8h] [rbp-460h] BYREF
  __m128i v80; // [rsp+4C8h] [rbp-440h] BYREF
  __m128i v81; // [rsp+4D8h] [rbp-430h] BYREF
  __m128i v82; // [rsp+4E8h] [rbp-420h] BYREF
  __int16 v83; // [rsp+4F8h] [rbp-410h]
  char v84; // [rsp+4FAh] [rbp-40Eh]
  void *v85; // [rsp+500h] [rbp-408h] BYREF
  __m128i v86; // [rsp+508h] [rbp-400h]
  _BYTE v87[32]; // [rsp+518h] [rbp-3F0h] BYREF
  __m128i v88; // [rsp+538h] [rbp-3D0h] BYREF
  __m128i v89; // [rsp+548h] [rbp-3C0h] BYREF
  __m128i v90; // [rsp+558h] [rbp-3B0h] BYREF
  __int16 v91; // [rsp+568h] [rbp-3A0h]
  char v92; // [rsp+56Ah] [rbp-39Eh]
  void *v93; // [rsp+570h] [rbp-398h] BYREF
  __m128i v94; // [rsp+578h] [rbp-390h]
  _BYTE v95[32]; // [rsp+588h] [rbp-380h] BYREF
  __m128i v96; // [rsp+5A8h] [rbp-360h] BYREF
  __m128i v97; // [rsp+5B8h] [rbp-350h] BYREF
  __m128i v98; // [rsp+5C8h] [rbp-340h] BYREF
  __int16 v99; // [rsp+5D8h] [rbp-330h]
  char v100; // [rsp+5DAh] [rbp-32Eh]
  void *v101; // [rsp+5E0h] [rbp-328h] BYREF
  __m128i v102; // [rsp+5E8h] [rbp-320h]
  _BYTE v103[32]; // [rsp+5F8h] [rbp-310h] BYREF
  __m128i v104; // [rsp+618h] [rbp-2F0h]
  __m128i v105; // [rsp+628h] [rbp-2E0h]
  __m128i v106; // [rsp+638h] [rbp-2D0h]
  __int16 v107; // [rsp+648h] [rbp-2C0h]
  char v108; // [rsp+64Ah] [rbp-2BEh]
  void *v109; // [rsp+650h] [rbp-2B8h] BYREF
  __m128i si128; // [rsp+658h] [rbp-2B0h]
  _BYTE v111[136]; // [rsp+668h] [rbp-2A0h] BYREF
  __m128i v112; // [rsp+6F0h] [rbp-218h] BYREF
  __int64 v113; // [rsp+700h] [rbp-208h]
  _BYTE v114[8]; // [rsp+750h] [rbp-1B8h] BYREF
  int v115; // [rsp+758h] [rbp-1B0h]
  __m128i v116; // [rsp+7E0h] [rbp-128h] BYREF
  __int64 v117[10]; // [rsp+7F0h] [rbp-118h] BYREF
  char *v118; // [rsp+840h] [rbp-C8h] BYREF
  __int64 v119; // [rsp+848h] [rbp-C0h]
  char v120; // [rsp+850h] [rbp-B8h] BYREF

  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 48) + 28LL) & 0x7Fu) - 33 > 3 )
  {
    sub_791DD0(v63, a2 + 40);
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    v109 = v111;
    sub_11240B0(a2, &v109);
    sub_CAE550(v46, *(_QWORD *)(*a1 + 2152LL), *(unsigned int *)(a2 + 24), 1);
    v34 = sub_790090(a2);
    v48 = 0;
    v47 = 0;
    v6 = sub_63DC30(a1, a2);
    if ( v6 )
    {
      v7 = sub_6BB140(*a1, a2);
      sub_AA92F0(&v112, v6, *(_QWORD *)(*a1 + 2152LL), v7);
      a4 = _mm_load_si128(&v112);
      v117[0] = 0;
      v48 = v113;
      v113 = 0;
      v47 = (__m128)a4;
      v116 = 0;
      v112 = 0;
      sub_646A80(v116.m128i_i64);
      sub_646A80(v112.m128i_i64);
    }
    sub_FCD270(v49, a2);
    sub_64B950((__int64)v67, *(_QWORD *)(a2 + 48), 0.0, *(double *)a4.m128i_i64, a5, a6);
    v30 = 0;
    v8 = a1[1];
    if ( *(_DWORD *)(a2 + 24) )
    {
      v9 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
      v30 = v9 != 3 && v9 != 0;
    }
    sub_648F60((__int64)&v112, (_QWORD *)a2);
    sub_FD6EC0(&v50, a2);
    sub_766420(ptr, a2);
    sub_63E5A0((__int64)v73, (__int64)a1, a2);
    v32 = v63[0];
    v33 = v63[1];
    v10.m128i_i64[0] = sub_FC8E80(v8, v109, si128.m128i_i64[0]);
    v11 = v10.m128i_i64[1];
    v12 = v10.m128i_i64[0];
    v116 = v10;
    v117[0] = 0;
    sub_64F120((__int64)&v52, v8 + 160, &v116, v117);
    v31 = v52;
    if ( v117[0] )
      (**(void (__fastcall ***)(__int64))v117[0])(v117[0]);
    if ( v53 )
    {
      v13 = sub_63DDF0(v8, 656, 4);
      v116.m128i_i64[0] = (__int64)v117;
      v14 = (_QWORD *)v13;
      v116.m128i_i64[1] = 0x100000000LL;
      if ( v112.m128i_i32[2] )
        sub_649B50((__int64)&v116, (__int64)&v112);
      v118 = &v120;
      v119 = 0x100000000LL;
      if ( v115 )
        sub_64AB70((__int64)&v118, (__int64)v114);
      sub_646AF0(v69, v67);
      sub_644390((__int64)v70, v68);
      sub_644390((__int64)v54, v49);
      v15 = v51;
      v16 = _mm_load_si128(&v50);
      v51 = 0;
      v56 = v15;
      v55 = v16;
      v85 = v87;
      v50 = 0;
      v86 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( ptr[1] )
        sub_63DE60((__int64)&v85, (unsigned __int8 **)ptr);
      v17 = _mm_loadu_si128(&v80);
      v91 = v83;
      v88 = v17;
      v18 = _mm_loadu_si128(&v81);
      v92 = v84;
      v89 = v18;
      v90 = _mm_loadu_si128(&v82);
      v19 = sub_FC8E80(v8, v32, v33);
      v20 = v73[1];
      v43 = v19;
      v45 = v21;
      v41 = v73[0];
      v39 = v73[2];
      v38 = v73[3];
      v37 = v73[4];
      v44 = v73[5];
      v36 = v73[6];
      v42 = v46[0];
      v40 = v46[1];
      v35 = v46[2];
      sub_646AF0(v71, v69);
      sub_644390((__int64)v72, v70);
      sub_644390((__int64)v58, v54);
      sub_644390((__int64)v57, v55.m128i_i64);
      v93 = v95;
      v94 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( v86.m128i_i64[0] )
        sub_63DE60((__int64)&v93, (unsigned __int8 **)&v85);
      v22 = _mm_loadu_si128(&v88);
      v99 = v91;
      v96 = v22;
      v23 = _mm_loadu_si128(&v89);
      v100 = v92;
      v97 = v23;
      v24 = _mm_loadu_si128(&v90);
      v74.m128i_i64[0] = v41;
      v98 = v24;
      v75.m128i_i64[0] = v39;
      v74.m128i_i64[1] = v20;
      v75.m128i_i64[1] = v38;
      v76.m128i_i64[0] = v37;
      v76.m128i_i64[1] = v44;
      v77 = v36;
      v59.m128i_i64[0] = v42;
      v59.m128i_i64[1] = v40;
      v60 = v35;
      v65[0] = (char *)v66;
      strcpy((char *)v66, "public");
      v65[1] = &byte_6;
      sub_644390((__int64)v61, v58);
      sub_644390((__int64)v62, v57);
      v101 = v103;
      v102 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( v94.m128i_i64[0] )
        sub_63DE60((__int64)&v101, (unsigned __int8 **)&v93);
      v104 = _mm_loadu_si128(&v96);
      v25 = _mm_loadu_si128(&v97);
      v107 = v99;
      v105 = v25;
      v26 = _mm_loadu_si128(&v98);
      v108 = v100;
      v106 = v26;
      sub_644570(
        (__int64)v14,
        0x18u,
        v12,
        v11,
        v43,
        v45,
        (__int128)_mm_load_si128(&v74),
        (__int128)_mm_load_si128(&v75),
        (__int128)_mm_load_si128(&v76),
        v77,
        (__int128)_mm_load_si128(&v59),
        v60,
        (__int64)&v101,
        v34,
        (__int64 *)&v47,
        v62,
        v61,
        v30,
        v65);
      if ( v101 != v103 )
        free(v101);
      sub_6441A0(v62);
      sub_6441A0(v61);
      std::string::_M_dispose();
      *v14 = &off_4992FC8;
      sub_646AF0(v14 + 46, v71);
      sub_644390((__int64)(v14 + 49), v72);
      if ( v93 != v95 )
        free(v93);
      sub_6441A0(v57);
      sub_6441A0(v58);
      sub_6441A0(v72);
      sub_647CF0(v71);
      *v14 = &off_49F4B28;
      v14[52] = v14 + 54;
      v14[53] = 0x100000000LL;
      if ( v116.m128i_i32[2] )
        sub_64A2B0((__int64)(v14 + 52), (__int64)&v116);
      v14[64] = v14 + 66;
      v14[65] = 0x100000000LL;
      if ( (_DWORD)v119 )
        sub_64B430((__int64)(v14 + 64), (__int64 *)&v118);
      if ( v85 != v87 )
        free(v85);
      sub_6441A0(v55.m128i_i64);
      sub_6441A0(v54);
      sub_6441A0(v70);
      sub_647CF0(v69);
      sub_6469C0((__int64)&v118);
      sub_646940((__int64)&v116);
      v27 = *(void (__fastcall ****)(_QWORD))(v31 + 16);
      *(_QWORD *)(v31 + 16) = v14;
      if ( v27 )
        (**v27)(v27);
      v28 = v14[11];
      if ( v28 && (unsigned int)(*(_DWORD *)(v28 + 356) - 2) <= 0x13 && (v29 = sub_FC8C50()) != 0 )
        sub_FC8D50(v29, v14);
      else
        sub_64B900(v8 + 184, (__int64)v14);
    }
    if ( ptr[0] != &v79 )
      free(ptr[0]);
    sub_6441A0(v50.m128i_i64);
    sub_6469C0((__int64)v114);
    sub_646940((__int64)&v112);
    sub_6441A0(v68);
    sub_647CF0(v67);
    sub_6441A0(v49);
    sub_646A80((__int64 *)&v47);
    if ( v109 != v111 )
      free(v109);
    if ( v63[0] != &v64 )
      operator delete(v63[0], v64 + 1);
  }
}

