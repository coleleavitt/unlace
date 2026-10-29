void __fastcall sub_6627C0(_QWORD *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  __m128i v11; // xmm0
  bool v12; // r14
  __int64 v13; // r12
  int v14; // eax
  __m128i v15; // rax
  __int64 v16; // rax
  char v17; // al
  __m128i v18; // xmm1
  __m128i v19; // xmm1
  _QWORD *v20; // rax
  __m128i v21; // xmm1
  __m128i v22; // xmm1
  __m128i v23; // xmm1
  __m128i v24; // xmm1
  __int64 v25; // rdx
  unsigned __int8 **v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  void (__fastcall ***v31)(_QWORD); // rdi
  _QWORD *v32; // r15
  __int64 v33; // rdi
  __int64 v34; // rax
  __m128i v35; // [rsp+0h] [rbp-638h]
  __m128i v36; // [rsp+10h] [rbp-628h]
  __m128i v37; // [rsp+38h] [rbp-600h]
  __m128i v38; // [rsp+90h] [rbp-5A8h] BYREF
  __int64 *v39; // [rsp+A0h] [rbp-598h]
  __int64 *v40; // [rsp+A8h] [rbp-590h]
  __int64 *v41; // [rsp+B0h] [rbp-588h]
  __m128i *v42; // [rsp+B8h] [rbp-580h]
  _QWORD *v43; // [rsp+C0h] [rbp-578h]
  __int64 v44; // [rsp+C8h] [rbp-570h]
  char *v45; // [rsp+D0h] [rbp-568h]
  void *v46; // [rsp+D8h] [rbp-560h]
  __int64 *v47; // [rsp+E0h] [rbp-558h]
  __int64 *v48; // [rsp+E8h] [rbp-550h]
  __int64 *v49; // [rsp+F0h] [rbp-548h]
  __int64 *v50; // [rsp+F8h] [rbp-540h]
  __int64 *v51; // [rsp+100h] [rbp-538h]
  __int64 *v52; // [rsp+108h] [rbp-530h]
  _QWORD *v53; // [rsp+110h] [rbp-528h]
  __int64 v54; // [rsp+118h] [rbp-520h]
  _BYTE *v55; // [rsp+120h] [rbp-518h]
  __int64 *v56; // [rsp+128h] [rbp-510h]
  unsigned __int8 **v57; // [rsp+130h] [rbp-508h]
  unsigned __int8 **v58; // [rsp+138h] [rbp-500h]
  __m128i v59; // [rsp+140h] [rbp-4F8h] BYREF
  __int64 v60; // [rsp+150h] [rbp-4E8h]
  __m128i v61; // [rsp+160h] [rbp-4D8h] BYREF
  __int64 v62; // [rsp+170h] [rbp-4C8h]
  _BYTE v63[32]; // [rsp+180h] [rbp-4B8h] BYREF
  _BYTE v64[32]; // [rsp+1A0h] [rbp-498h] BYREF
  __int64 v65; // [rsp+1C0h] [rbp-478h] BYREF
  char v66; // [rsp+1D0h] [rbp-468h]
  _BYTE v67[32]; // [rsp+1E0h] [rbp-458h] BYREF
  _BYTE v68[32]; // [rsp+200h] [rbp-438h] BYREF
  __m128i v69; // [rsp+220h] [rbp-418h] BYREF
  __int64 v70; // [rsp+230h] [rbp-408h]
  __int64 v71[4]; // [rsp+240h] [rbp-3F8h] BYREF
  _BYTE v72[32]; // [rsp+260h] [rbp-3D8h] BYREF
  void *v73[2]; // [rsp+280h] [rbp-3B8h] BYREF
  __int64 v74; // [rsp+290h] [rbp-3A8h] BYREF
  void *v75[2]; // [rsp+2A0h] [rbp-398h] BYREF
  __int64 v76; // [rsp+2B0h] [rbp-388h] BYREF
  __int64 v77[2]; // [rsp+2C0h] [rbp-378h] BYREF
  char v78; // [rsp+2D0h] [rbp-368h] BYREF
  char v79; // [rsp+2E0h] [rbp-358h] BYREF
  _BYTE v80[24]; // [rsp+300h] [rbp-338h] BYREF
  __int64 v81[3]; // [rsp+318h] [rbp-320h] BYREF
  _QWORD v82[3]; // [rsp+330h] [rbp-308h] BYREF
  _BYTE v83[24]; // [rsp+348h] [rbp-2F0h] BYREF
  __int64 v84[3]; // [rsp+360h] [rbp-2D8h] BYREF
  _BYTE v85[24]; // [rsp+378h] [rbp-2C0h] BYREF
  __m128i v86; // [rsp+390h] [rbp-2A8h] BYREF
  __m128i v87; // [rsp+3A0h] [rbp-298h] BYREF
  __m128i v88; // [rsp+3B0h] [rbp-288h] BYREF
  __int64 v89; // [rsp+3C0h] [rbp-278h]
  __m128i v90; // [rsp+3D0h] [rbp-268h] BYREF
  __m128i v91; // [rsp+3E0h] [rbp-258h] BYREF
  __m128i v92; // [rsp+3F0h] [rbp-248h] BYREF
  __int64 v93; // [rsp+400h] [rbp-238h]
  void *ptr[3]; // [rsp+410h] [rbp-228h] BYREF
  char v95; // [rsp+428h] [rbp-210h] BYREF
  __m128i v96; // [rsp+448h] [rbp-1F0h] BYREF
  __m128i v97; // [rsp+458h] [rbp-1E0h] BYREF
  __m128i v98; // [rsp+468h] [rbp-1D0h] BYREF
  __int16 v99; // [rsp+478h] [rbp-1C0h]
  char v100; // [rsp+47Ah] [rbp-1BEh]
  _BYTE v101[24]; // [rsp+480h] [rbp-1B8h] BYREF
  _BYTE v102[32]; // [rsp+498h] [rbp-1A0h] BYREF
  __m128i v103; // [rsp+4B8h] [rbp-180h] BYREF
  __m128i v104; // [rsp+4C8h] [rbp-170h] BYREF
  __m128i v105; // [rsp+4D8h] [rbp-160h] BYREF
  __int16 v106; // [rsp+4E8h] [rbp-150h]
  char v107; // [rsp+4EAh] [rbp-14Eh]
  void *v108[3]; // [rsp+4F0h] [rbp-148h] BYREF
  _BYTE v109[32]; // [rsp+508h] [rbp-130h] BYREF
  __m128i v110; // [rsp+528h] [rbp-110h]
  __m128i v111; // [rsp+538h] [rbp-100h]
  __m128i v112; // [rsp+548h] [rbp-F0h]
  __int16 v113; // [rsp+558h] [rbp-E0h]
  char v114; // [rsp+55Ah] [rbp-DEh]
  void *v115; // [rsp+560h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+568h] [rbp-D0h]
  _BYTE v117[192]; // [rsp+578h] [rbp-C0h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 2) == 0 )
  {
    v7 = a2;
    sub_791DD0(v73, a2 + 40);
    v115 = v117;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    sub_11240B0(a2, &v115);
    sub_CAE550(&v59, *(_QWORD *)(*a1 + 2152LL), *(unsigned int *)(a2 + 24), 1);
    v8 = *a1;
    v62 = 0;
    v61 = 0;
    v9 = sub_6B37C0(v8);
    if ( v9
      || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
      && (v16 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (a2 = v16) != 0)
      && (v17 = *(_BYTE *)(v16 + 74), (v17 & 4) != 0)
      && (v17 & 1) != 0
      && (v9 = sub_6B37C0(*a1)) != 0
      || (a2 = v7, (v9 = sub_6F4910(*a1, v7, 0)) != 0) )
    {
      v10 = sub_6BB140(*a1, a2);
      sub_AA92F0(v101, v9, *(_QWORD *)(*a1 + 2152LL), v10);
      v11 = _mm_load_si128((const __m128i *)v101);
      v62 = *(_QWORD *)&v101[16];
      v61 = v11;
      v42 = (__m128i *)v108;
      memset(v108, 0, sizeof(v108));
      memset(v101, 0, sizeof(v101));
      sub_646A80((__int64 *)v108);
      sub_646A80((__int64 *)v101);
    }
    else
    {
      v42 = (__m128i *)v108;
    }
    v12 = 0;
    v41 = (__int64 *)v63;
    sub_FD9050(v63, v7);
    v39 = (__int64 *)v64;
    sub_FCD270(v64, v7);
    v40 = (__int64 *)v80;
    sub_64CD90((__int64)v80, v7, 0.0, a4, a5, a6);
    sub_643500((__int64 *)v75, v7);
    v13 = a1[1];
    if ( *(_DWORD *)(v7 + 24) )
    {
      v14 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
      v12 = v14 != 3 && v14 != 0;
    }
    sub_766420(ptr, v7);
    sub_63E5A0((__int64)&v86, (__int64)a1, v7);
    v45 = (char *)v73[0];
    v46 = v73[1];
    v15.m128i_i64[0] = sub_FC8E80(v13, v115, si128.m128i_i64[0]);
    v108[2] = nullptr;
    v38 = v15;
    *(__m128i *)v108 = _mm_load_si128(&v38);
    sub_64F120((__int64)&v65, v13 + 160, v42, (__int64 *)&v108[2]);
    v44 = v65;
    if ( v108[2] )
      (**(void (__fastcall ***)(void *))v108[2])(v108[2]);
    if ( v66 )
    {
      v43 = (_QWORD *)sub_63DDF0(v13, 416, 4);
      v48 = v77;
      v77[0] = (__int64)&v78;
      sub_63E170(v77, (_BYTE *)v75[0], (__int64)v75[0] + (unsigned __int64)v75[1]);
      v52 = v82;
      sub_646AF0(v82, v40);
      v47 = (__int64 *)v83;
      sub_644390((__int64)v83, v81);
      v50 = (__int64 *)v67;
      sub_644390((__int64)v67, v39);
      v51 = (__int64 *)v68;
      sub_644390((__int64)v68, v41);
      v57 = (unsigned __int8 **)v101;
      v55 = v102;
      *(_QWORD *)v101 = v102;
      *(__m128i *)&v101[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( ptr[1] )
        sub_63DE60((__int64)v57, (unsigned __int8 **)ptr);
      v18 = _mm_loadu_si128(&v96);
      v106 = v99;
      v103 = v18;
      v19 = _mm_loadu_si128(&v97);
      v107 = v100;
      v104 = v19;
      v105 = _mm_loadu_si128(&v98);
      v20 = (_QWORD *)sub_FC8E80(v13, v45, v46);
      v21 = _mm_load_si128(&v86);
      v53 = v20;
      v90 = v21;
      v22 = _mm_load_si128(&v87);
      v93 = v89;
      v91 = v22;
      v23 = _mm_load_si128(&v88);
      v70 = v60;
      v92 = v23;
      v24 = _mm_load_si128(&v59);
      v54 = v25;
      v69 = v24;
      v45 = &v79;
      std::string::basic_string();
      sub_646AF0(v84, v52);
      v56 = (__int64 *)v85;
      sub_644390((__int64)v85, v47);
      v49 = (__int64 *)v72;
      sub_644390((__int64)v72, v50);
      sub_644390((__int64)v71, v51);
      v26 = (unsigned __int8 **)v109;
      v108[0] = v109;
      *(__m128i *)&v108[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( *(_QWORD *)&v101[8] )
      {
        v58 = (unsigned __int8 **)v109;
        sub_63DE60((__int64)v42, v57);
        v26 = v58;
      }
      v27 = _mm_loadu_si128(&v103);
      v57 = v26;
      v110 = v27;
      v28 = _mm_loadu_si128(&v104);
      v113 = v106;
      v111 = v28;
      v29 = _mm_loadu_si128(&v105);
      v114 = v107;
      v112 = v29;
      v37 = _mm_load_si128(&v69);
      v35 = _mm_load_si128(&v90);
      v36 = _mm_load_si128(&v91);
      v30 = _mm_load_si128(&v92);
      sub_6474F0(
        (__int64)v43,
        0x1Eu,
        v38.m128i_i64[0],
        (_QWORD *)v38.m128i_i64[1],
        v53,
        v54,
        v35.m128i_i64[0],
        v35.m128i_i64[1],
        v36.m128i_i64[0],
        v36.m128i_i64[1],
        v30.m128i_i64[0],
        v30.m128i_i64[1],
        v93,
        v37.m128i_i64[0],
        v37.m128i_i64[1],
        v70,
        (__int64)v42,
        v61.m128i_i64,
        v71,
        v49,
        (__int64)v84,
        (__int64)v45,
        v12);
      if ( v108[0] != v57 )
        free(v108[0]);
      sub_6441A0(v71);
      sub_6441A0(v49);
      sub_6441A0(v56);
      sub_647CF0(v84);
      std::string::_M_dispose();
      *v43 = &off_4993158;
      if ( *(_BYTE **)v101 != v55 )
        free(*(void **)v101);
      sub_6441A0(v51);
      sub_6441A0(v50);
      sub_6441A0(v47);
      sub_647CF0(v52);
      std::string::_M_dispose();
      v31 = *(void (__fastcall ****)(_QWORD))(v44 + 16);
      *(_QWORD *)(v44 + 16) = v43;
      if ( v31 )
        (**v31)(v31);
      v32 = v43;
      v33 = v43[11];
      if ( v33 && (unsigned int)(*(_DWORD *)(v33 + 356) - 2) <= 0x13 && (v34 = sub_FC8C50(v33, 30)) != 0 )
        sub_FC8D50(v34, v32);
      else
        sub_64B900(v13 + 184, (__int64)v43);
    }
    if ( ptr[0] != &v95 )
      free(ptr[0]);
    if ( v75[0] != &v76 )
      operator delete(v75[0], v76 + 1);
    sub_6441A0(v81);
    sub_647CF0(v40);
    sub_6441A0(v39);
    sub_6441A0(v41);
    sub_646A80(v61.m128i_i64);
    if ( v115 != v117 )
      free(v115);
    if ( v73[0] != &v74 )
      operator delete(v73[0], v74 + 1);
  }
}

