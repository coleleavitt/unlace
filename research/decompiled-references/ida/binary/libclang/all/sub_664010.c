void __fastcall sub_664010(_QWORD *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __m128i v11; // xmm0
  bool v12; // r13
  __int64 v13; // rbx
  int v14; // eax
  __m128i v15; // rax
  __int64 v16; // rax
  char v17; // al
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rdx
  unsigned __int8 **v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  void (__fastcall ***v32)(_QWORD); // rdi
  _QWORD *v33; // r14
  __int64 v34; // rdi
  __int64 v35; // rax
  int v36; // eax
  _DWORD *v37; // rdi
  _DWORD *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdi
  __m128i v42; // [rsp+0h] [rbp-638h]
  __m128i v43; // [rsp+10h] [rbp-628h]
  __m128i v44; // [rsp+38h] [rbp-600h]
  int v45; // [rsp+80h] [rbp-5B8h]
  __m128i v46; // [rsp+90h] [rbp-5A8h] BYREF
  __int64 *v47; // [rsp+A0h] [rbp-598h]
  __int64 *v48; // [rsp+A8h] [rbp-590h]
  __int64 *v49; // [rsp+B0h] [rbp-588h]
  __m128i *v50; // [rsp+B8h] [rbp-580h]
  _QWORD *v51; // [rsp+C0h] [rbp-578h]
  __int64 v52; // [rsp+C8h] [rbp-570h]
  __int64 *v53; // [rsp+D0h] [rbp-568h]
  void *v54; // [rsp+D8h] [rbp-560h]
  __int64 *v55; // [rsp+E0h] [rbp-558h]
  __int64 *v56; // [rsp+E8h] [rbp-550h]
  __int64 *v57; // [rsp+F0h] [rbp-548h]
  __int64 *v58; // [rsp+F8h] [rbp-540h]
  _QWORD *v59; // [rsp+100h] [rbp-538h]
  __int64 v60; // [rsp+108h] [rbp-530h]
  _QWORD *v61; // [rsp+110h] [rbp-528h]
  _BYTE *v62; // [rsp+118h] [rbp-520h]
  __int64 *v63; // [rsp+120h] [rbp-518h]
  __int64 *v64; // [rsp+128h] [rbp-510h]
  unsigned __int8 **v65; // [rsp+130h] [rbp-508h]
  unsigned __int8 **v66; // [rsp+138h] [rbp-500h]
  __m128i v67; // [rsp+140h] [rbp-4F8h] BYREF
  __int64 v68; // [rsp+150h] [rbp-4E8h]
  __m128i v69; // [rsp+160h] [rbp-4D8h] BYREF
  __int64 v70; // [rsp+170h] [rbp-4C8h]
  _BYTE v71[32]; // [rsp+180h] [rbp-4B8h] BYREF
  _BYTE v72[32]; // [rsp+1A0h] [rbp-498h] BYREF
  __int64 v73; // [rsp+1C0h] [rbp-478h] BYREF
  char v74; // [rsp+1D0h] [rbp-468h]
  _BYTE v75[32]; // [rsp+1E0h] [rbp-458h] BYREF
  _BYTE v76[32]; // [rsp+200h] [rbp-438h] BYREF
  __m128i v77; // [rsp+220h] [rbp-418h] BYREF
  __int64 v78; // [rsp+230h] [rbp-408h]
  __int64 v79[4]; // [rsp+240h] [rbp-3F8h] BYREF
  __int64 v80[4]; // [rsp+260h] [rbp-3D8h] BYREF
  void *v81[2]; // [rsp+280h] [rbp-3B8h] BYREF
  __int64 v82; // [rsp+290h] [rbp-3A8h] BYREF
  void *v83[2]; // [rsp+2A0h] [rbp-398h] BYREF
  __int64 v84; // [rsp+2B0h] [rbp-388h] BYREF
  _QWORD *v85; // [rsp+2C0h] [rbp-378h] BYREF
  __int64 v86; // [rsp+2C8h] [rbp-370h]
  _QWORD v87[2]; // [rsp+2D0h] [rbp-368h] BYREF
  _QWORD v88[2]; // [rsp+2E0h] [rbp-358h] BYREF
  _QWORD v89[2]; // [rsp+2F0h] [rbp-348h] BYREF
  _BYTE v90[24]; // [rsp+300h] [rbp-338h] BYREF
  __int64 v91[3]; // [rsp+318h] [rbp-320h] BYREF
  _QWORD v92[3]; // [rsp+330h] [rbp-308h] BYREF
  _BYTE v93[24]; // [rsp+348h] [rbp-2F0h] BYREF
  _QWORD v94[3]; // [rsp+360h] [rbp-2D8h] BYREF
  _BYTE v95[24]; // [rsp+378h] [rbp-2C0h] BYREF
  __m128i v96; // [rsp+390h] [rbp-2A8h] BYREF
  __m128i v97; // [rsp+3A0h] [rbp-298h] BYREF
  __m128i v98; // [rsp+3B0h] [rbp-288h] BYREF
  __int64 v99; // [rsp+3C0h] [rbp-278h]
  __m128i v100; // [rsp+3D0h] [rbp-268h] BYREF
  __m128i v101; // [rsp+3E0h] [rbp-258h] BYREF
  __m128i v102; // [rsp+3F0h] [rbp-248h] BYREF
  __int64 v103; // [rsp+400h] [rbp-238h]
  void *ptr[3]; // [rsp+410h] [rbp-228h] BYREF
  char v105; // [rsp+428h] [rbp-210h] BYREF
  __m128i v106; // [rsp+448h] [rbp-1F0h] BYREF
  __m128i v107; // [rsp+458h] [rbp-1E0h] BYREF
  __m128i v108; // [rsp+468h] [rbp-1D0h] BYREF
  __int16 v109; // [rsp+478h] [rbp-1C0h]
  char v110; // [rsp+47Ah] [rbp-1BEh]
  _BYTE v111[24]; // [rsp+480h] [rbp-1B8h] BYREF
  _BYTE v112[32]; // [rsp+498h] [rbp-1A0h] BYREF
  __m128i v113; // [rsp+4B8h] [rbp-180h] BYREF
  __m128i v114; // [rsp+4C8h] [rbp-170h] BYREF
  __m128i v115; // [rsp+4D8h] [rbp-160h] BYREF
  __int16 v116; // [rsp+4E8h] [rbp-150h]
  char v117; // [rsp+4EAh] [rbp-14Eh]
  void *v118[3]; // [rsp+4F0h] [rbp-148h] BYREF
  _BYTE v119[32]; // [rsp+508h] [rbp-130h] BYREF
  __m128i v120; // [rsp+528h] [rbp-110h]
  __m128i v121; // [rsp+538h] [rbp-100h]
  __m128i v122; // [rsp+548h] [rbp-F0h]
  __int16 v123; // [rsp+558h] [rbp-E0h]
  char v124; // [rsp+55Ah] [rbp-DEh]
  void *v125; // [rsp+560h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+568h] [rbp-D0h]
  _BYTE v127[192]; // [rsp+578h] [rbp-C0h] BYREF

  if ( (*(_BYTE *)(a2 + 29) & 2) == 0 )
  {
    v7 = a2;
    sub_791DD0(v81, a2 + 40);
    v125 = v127;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
    sub_11240B0(a2, &v125);
    sub_CAE550(&v67, *(_QWORD *)(*a1 + 2152LL), *(unsigned int *)(a2 + 24), 1);
    v8 = *a1;
    v70 = 0;
    v69 = 0;
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
      sub_AA92F0(v111, v9, *(_QWORD *)(*a1 + 2152LL), v10);
      v11 = _mm_load_si128((const __m128i *)v111);
      v70 = *(_QWORD *)&v111[16];
      v69 = v11;
      v50 = (__m128i *)v118;
      memset(v118, 0, sizeof(v118));
      memset(v111, 0, sizeof(v111));
      sub_646A80((__int64 *)v118);
      sub_646A80((__int64 *)v111);
    }
    else
    {
      v50 = (__m128i *)v118;
    }
    v12 = 0;
    v48 = (__int64 *)v71;
    sub_FD9050(v71, v7);
    v49 = (__int64 *)v72;
    sub_FCD270(v72, v7);
    v47 = (__int64 *)v90;
    sub_64C370((__int64)v90, v7, 0.0, a4, a5, a6);
    sub_643500((__int64 *)v83, v7);
    v13 = a1[1];
    if ( *(_DWORD *)(v7 + 24) )
    {
      v14 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
      v12 = v14 != 3 && v14 != 0;
    }
    sub_766420(ptr, v7);
    sub_63E5A0((__int64)&v96, (__int64)a1, v7);
    v53 = (__int64 *)v81[0];
    v54 = v81[1];
    v15.m128i_i64[0] = sub_FC8E80(v13, v125, si128.m128i_i64[0]);
    v118[2] = nullptr;
    v46 = v15;
    *(__m128i *)v118 = _mm_load_si128(&v46);
    sub_64F120((__int64)&v73, v13 + 160, v50, (__int64 *)&v118[2]);
    v52 = v73;
    if ( v118[2] )
      (**(void (__fastcall ***)(void *))v118[2])(v118[2]);
    if ( v74 )
    {
      v51 = (_QWORD *)sub_63DDF0(v13, 416, 4);
      v63 = (__int64 *)&v85;
      v85 = v87;
      sub_63E170((__int64 *)&v85, (_BYTE *)v83[0], (__int64)v83[0] + (unsigned __int64)v83[1]);
      v56 = v92;
      sub_646AF0(v92, v47);
      v57 = (__int64 *)v93;
      sub_644390((__int64)v93, v91);
      v55 = (__int64 *)v75;
      sub_644390((__int64)v75, v49);
      v58 = (__int64 *)v76;
      sub_644390((__int64)v76, v48);
      v65 = (unsigned __int8 **)v111;
      v62 = v112;
      *(_QWORD *)v111 = v112;
      *(__m128i *)&v111[8] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( ptr[1] )
        sub_63DE60((__int64)v65, (unsigned __int8 **)ptr);
      v18 = _mm_loadu_si128(&v106);
      v116 = v109;
      v113 = v18;
      v19 = _mm_loadu_si128(&v107);
      v117 = v110;
      v114 = v19;
      v115 = _mm_loadu_si128(&v108);
      v20 = (_QWORD *)sub_FC8E80(v13, v53, v54);
      v21 = v86;
      v22 = _mm_load_si128(&v96);
      v59 = v20;
      v100 = v22;
      v23 = _mm_load_si128(&v97);
      v103 = v99;
      v101 = v23;
      v24 = _mm_load_si128(&v98);
      v78 = v68;
      LODWORD(v61) = v12;
      v102 = v24;
      v25 = _mm_load_si128(&v67);
      v60 = v26;
      v88[0] = v89;
      v77 = v25;
      if ( v85 == v87 )
      {
        v36 = v86 + 1;
        v37 = v89;
        v38 = v87;
        if ( (unsigned int)(v86 + 1) >= 8 )
        {
          LODWORD(v40) = 0;
          do
          {
            v41 = (unsigned int)v40;
            v40 = (unsigned int)(v40 + 8);
            *(_QWORD *)((char *)v89 + v41) = *(_QWORD *)((char *)v87 + v41);
          }
          while ( (unsigned int)v40 < (v36 & 0xFFFFFFF8) );
          v37 = (_DWORD *)((char *)v89 + v40);
          v38 = (_DWORD *)((char *)v87 + v40);
        }
        v39 = 0;
        if ( (v36 & 4) != 0 )
        {
          *v37 = *v38;
          v39 = 4;
        }
        if ( (v36 & 2) != 0 )
        {
          *(_WORD *)((char *)v37 + v39) = *(_WORD *)((char *)v38 + v39);
          v39 += 2;
        }
        if ( (v36 & 1) != 0 )
          *((_BYTE *)v37 + v39) = *((_BYTE *)v38 + v39);
      }
      else
      {
        v88[0] = v85;
        v89[0] = v87[0];
      }
      v88[1] = v21;
      v53 = v94;
      v85 = v87;
      v86 = 0;
      LOBYTE(v87[0]) = 0;
      sub_646AF0(v94, v56);
      v64 = (__int64 *)v95;
      sub_644390((__int64)v95, v57);
      sub_644390((__int64)v80, v55);
      sub_644390((__int64)v79, v58);
      v27 = (unsigned __int8 **)v119;
      v118[0] = v119;
      *(__m128i *)&v118[1] = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
      if ( *(_QWORD *)&v111[8] )
      {
        v66 = (unsigned __int8 **)v119;
        sub_63DE60((__int64)v50, v65);
        v27 = v66;
      }
      v28 = _mm_loadu_si128(&v113);
      v65 = v27;
      v120 = v28;
      v29 = _mm_loadu_si128(&v114);
      v123 = v116;
      v121 = v29;
      v30 = _mm_loadu_si128(&v115);
      v124 = v117;
      v122 = v30;
      v45 = (int)v61;
      v61 = v88;
      v44 = _mm_load_si128(&v77);
      v42 = _mm_load_si128(&v100);
      v43 = _mm_load_si128(&v101);
      v31 = _mm_load_si128(&v102);
      sub_6474F0(
        (__int64)v51,
        0x1Fu,
        v46.m128i_i64[0],
        (_QWORD *)v46.m128i_i64[1],
        v59,
        v60,
        v42.m128i_i64[0],
        v42.m128i_i64[1],
        v43.m128i_i64[0],
        v43.m128i_i64[1],
        v31.m128i_i64[0],
        v31.m128i_i64[1],
        v103,
        v44.m128i_i64[0],
        v44.m128i_i64[1],
        v78,
        (__int64)v50,
        v69.m128i_i64,
        v79,
        v80,
        (__int64)v53,
        (__int64)v88,
        v45);
      if ( v118[0] != v65 )
        free(v118[0]);
      sub_6441A0(v79);
      sub_6441A0(v80);
      sub_6441A0(v64);
      sub_647CF0(v53);
      std::string::_M_dispose();
      *v51 = &off_4993180;
      if ( *(_BYTE **)v111 != v62 )
        free(*(void **)v111);
      sub_6441A0(v58);
      sub_6441A0(v55);
      sub_6441A0(v57);
      sub_647CF0(v56);
      std::string::_M_dispose();
      v32 = *(void (__fastcall ****)(_QWORD))(v52 + 16);
      *(_QWORD *)(v52 + 16) = v51;
      if ( v32 )
        (**v32)(v32);
      v33 = v51;
      v34 = v51[11];
      if ( v34 && (unsigned int)(*(_DWORD *)(v34 + 356) - 2) <= 0x13 && (v35 = sub_FC8C50(v34, 31)) != 0 )
        sub_FC8D50(v35, v33);
      else
        sub_64B900(v13 + 184, (__int64)v51);
    }
    if ( ptr[0] != &v105 )
      free(ptr[0]);
    if ( v83[0] != &v84 )
      operator delete(v83[0], v84 + 1);
    sub_6441A0(v91);
    sub_647CF0(v47);
    sub_6441A0(v49);
    sub_6441A0(v48);
    sub_646A80(v69.m128i_i64);
    if ( v125 != v127 )
      free(v125);
    if ( v81[0] != &v82 )
      operator delete(v81[0], v82 + 1);
  }
}

