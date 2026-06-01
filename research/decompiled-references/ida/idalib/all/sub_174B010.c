unsigned __int64 __fastcall sub_174B010(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  char v26; // r12
  unsigned __int64 v27; // rbp
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // r14
  int v34; // r12d
  __int64 *v35; // rsi
  unsigned __int64 v36; // r14
  unsigned int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r10
  unsigned __int8 v40; // al
  int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rdi
  unsigned __int64 v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // r9
  __int64 v54; // r10
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // r14
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rdx
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // rcx
  _QWORD *v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // r12
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // rcx
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  __int64 v105; // r10
  __int64 v106; // r12
  __int64 v107; // rax
  _QWORD *v108; // rax
  __int64 v109; // [rsp+0h] [rbp-290h] BYREF
  __int64 v110; // [rsp+8h] [rbp-288h]
  __int64 v111; // [rsp+10h] [rbp-280h]
  __m128i v112; // [rsp+18h] [rbp-278h] BYREF
  __m128 v113; // [rsp+28h] [rbp-268h] BYREF
  __int128 v114; // [rsp+38h] [rbp-258h] BYREF
  void *v115[2]; // [rsp+48h] [rbp-248h]
  __int128 v116; // [rsp+58h] [rbp-238h]
  __int64 v117[2]; // [rsp+68h] [rbp-228h] BYREF
  _QWORD *v118; // [rsp+78h] [rbp-218h]
  unsigned __int8 *v119[11]; // [rsp+88h] [rbp-208h] BYREF
  char v120; // [rsp+E0h] [rbp-1B0h]
  unsigned int v121; // [rsp+E8h] [rbp-1A8h]
  char v122; // [rsp+ECh] [rbp-1A4h]
  __int64 v123; // [rsp+F8h] [rbp-198h] BYREF
  void *ptr; // [rsp+100h] [rbp-190h]
  __int64 v125; // [rsp+108h] [rbp-188h]
  _BYTE v126[64]; // [rsp+110h] [rbp-180h] BYREF
  void *v127[2]; // [rsp+150h] [rbp-140h]
  __int64 v128; // [rsp+160h] [rbp-130h]
  _QWORD *v129; // [rsp+168h] [rbp-128h]
  __int64 v130; // [rsp+170h] [rbp-120h]
  unsigned int v131; // [rsp+178h] [rbp-118h]
  __int64 v132; // [rsp+180h] [rbp-110h] BYREF
  __m128i si128; // [rsp+188h] [rbp-108h]
  __int64 v134; // [rsp+198h] [rbp-F8h]
  __int64 v135; // [rsp+1A8h] [rbp-E8h] BYREF
  __int64 *v136; // [rsp+1B0h] [rbp-E0h]
  __int64 v137; // [rsp+1B8h] [rbp-D8h]
  __int64 v138; // [rsp+1C0h] [rbp-D0h] BYREF
  unsigned __int8 *v139; // [rsp+1C8h] [rbp-C8h] BYREF
  __int128 v140; // [rsp+200h] [rbp-90h]
  __int64 v141; // [rsp+210h] [rbp-80h]
  __int64 v142; // [rsp+218h] [rbp-78h]
  __int64 v143; // [rsp+220h] [rbp-70h]
  unsigned int v144; // [rsp+228h] [rbp-68h]
  char v145; // [rsp+22Ch] [rbp-64h]
  __int64 v146; // [rsp+230h] [rbp-60h] BYREF
  __m128i v147; // [rsp+238h] [rbp-58h]
  __int64 v148; // [rsp+248h] [rbp-48h]

  v112.m128i_i64[0] = a4;
  v112.m128i_i64[1] = a5;
  v114 = 0;
  *(_OWORD *)v115 = 0;
  v116 = 0;
  sub_15AB8B0((__int64)&v114, a4, a5);
  if ( sub_E917A0(v112.m128i_i64[0], a4, v13, v14, v15, v16) && !sub_16A2930(*a1, (__int64)&v114, 0, v17, v18, v19) )
  {
    v27 = sub_AB77C0(*(_QWORD **)(*a1 + 248), a2, v112.m128i_i64[0], a6);
    goto LABEL_16;
  }
  if ( (unsigned int)(a2 - 5) <= 1 )
  {
    v27 = sub_1CD4E00(*a1, a2, a3, v112.m128i_i32[0], v112.m128i_i32[2], a6, a7, a8);
    goto LABEL_16;
  }
  LODWORD(v109) = sub_F58630(a2);
  v20 = (_QWORD *)*a1;
  ptr = v126;
  v129 = v20;
  v125 = 0x800000000LL;
  *(_OWORD *)v127 = 0;
  v131 = a7;
  v123 = 0;
  v128 = 0;
  v130 = a6;
  sub_B85890(&v132, a6);
  v134 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  sub_1A395A0(&v123);
  v24 = sub_16A2930(*a1, (__int64)&v114, 0, v21, v22, v23);
  if ( !v24 )
    goto LABEL_5;
  v25 = *a1;
  v110 = v24;
  v26 = sub_169F990(v25, (__int64)&v114, v24);
  if ( v26 )
    goto LABEL_5;
  sub_1A48440(*a1, &v123, v110, 0);
  v29 = v110;
  if ( (_DWORD)v123 != 2 )
  {
    if ( (_DWORD)v123 == 5 )
    {
      v27 = 0;
      if ( !BYTE3(v134) )
        goto LABEL_21;
      goto LABEL_33;
    }
    v30 = *a1;
LABEL_27:
    v142 = v30;
    v110 = v29;
    v136 = &v138;
    v137 = 0x800000000LL;
    v140 = 0;
    v144 = a7;
    v135 = 0;
    v141 = 0;
    v143 = a6;
    sub_B85890(&v146, a6);
    v148 = 0x101010000LL;
    v147 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    sub_1A395A0(&v135);
    sub_1A48440(*a1, &v135, v110, 0);
    if ( (unsigned int)(v135 - 2) <= 2 )
    {
      v33 = *v136 & 0xFFFFFFFFFFFFFFF8LL;
      v34 = sub_17A62A0(*a1, v33, (unsigned int)v109, v31, v32, v110);
      sub_168B9F0((__int64)v117, (__int64 *)(*a1 + 8), a7, 0x13D4u, 0);
      if ( v120 )
      {
        sub_AE9DF0(v119, v33, 0xAu);
      }
      else
      {
        if ( !v122 )
        {
LABEL_30:
          sub_15F7200(v117);
          sub_168B9F0((__int64)v117, (__int64 *)(*a1 + 8), *(_DWORD *)(v33 + 24), 0x67u, 0);
          sub_15F7200(v117);
LABEL_31:
          v27 = 0;
          sub_169D230((__int64)&v135);
          goto LABEL_6;
        }
        v79 = sub_168B9E0(v117);
        v83 = (__int64)v118;
        if ( v118 )
        {
          v84 = *v118;
          v110 = v79;
          v83 = (*(__int64 (__fastcall **)(_QWORD *))(v84 + 32))(v118);
          v79 = v110;
        }
        v113.m128_u64[0] = v83;
        v85 = sub_1587BC0(v79, (__int64 *)&v113, v79, v80, v81, v82);
        sub_AE9DF0((unsigned __int8 **)(*v85 + 32LL * v121 + 8), v33, 0xAu);
      }
      if ( v120 )
      {
        sub_AE9DF0(v119, v34, 2u);
      }
      else
      {
        if ( !v122 )
          goto LABEL_30;
        v93 = sub_168B9E0(v117);
        v97 = (__int64)v118;
        if ( v118 )
        {
          v98 = *v118;
          v110 = v93;
          v97 = (*(__int64 (__fastcall **)(_QWORD *))(v98 + 32))(v118);
          v93 = v110;
        }
        v113.m128_u64[0] = v97;
        v99 = sub_1587BC0(v93, (__int64 *)&v113, v93, v94, v95, v96);
        sub_AE9DF0((unsigned __int8 **)(*v99 + 32LL * v121 + 8), v34, 2u);
      }
      if ( v120 )
      {
        sub_AE9DF0(v119, (int)v109, 2u);
      }
      else if ( v122 )
      {
        v90 = sub_168B9E0(v117);
        v91 = (__int64)v118;
        if ( v118 )
          v91 = (*(__int64 (__fastcall **)(_QWORD *))(*v118 + 32LL))(v118);
        v113.m128_u64[0] = v91;
        v92 = sub_1587BC0(v90, (__int64 *)&v113, v86, v87, v88, v89);
        sub_AE9DF0((unsigned __int8 **)(*v92 + 32LL * v121 + 8), (int)v109, 2u);
      }
      goto LABEL_30;
    }
    v35 = (__int64 *)(*a1 + 8);
    sub_168B9F0((__int64)v117, v35, a7, 0x10EAu, 0);
    if ( v120 )
    {
      v50 = (int)v109;
      sub_AE9DF0(v119, (int)v109, 2u);
      v51 = v110;
    }
    else
    {
      if ( !v122 )
      {
LABEL_37:
        v36 = sub_E90530(v112.m128i_i64) >> 32;
        v37 = 0;
        if ( v112.m128i_i64[0] )
        {
          v113 = (__m128)_mm_load_si128(&v112);
          v38 = *(_QWORD *)(v112.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v38 )
          {
            v109 = v113.m128_i64[1];
            v113 = _mm_loadh_ps((const double *)&v109);
            while ( (*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v26 = 1;
              v38 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v26 )
              v113.m128_u64[0] = v38;
          }
          v37 = sub_E90530((__int64 *)&v113);
        }
        v113.m128_u64[0] = __PAIR64__(v36, v37);
        sub_1587DB0((__int64)v117, (__int64 *)&v113);
        sub_15F7200(v117);
        goto LABEL_31;
      }
      v71 = sub_168B9E0(v117);
      v74 = v110;
      v75 = v71;
      v76 = (__int64)v118;
      if ( v118 )
      {
        v77 = *v118;
        v111 = v75;
        v76 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, __int64, __int64, __int64))(v77 + 32))(
                v118,
                v35,
                v77,
                v75,
                v73,
                v110);
        v75 = v111;
        v74 = v110;
      }
      v110 = v74;
      v113.m128_u64[0] = v76;
      v78 = sub_1587BC0(v75, (__int64 *)&v113, v72, v75, v73, v74);
      v50 = (int)v109;
      sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * v121 + 8), (int)v109, 2u);
      v51 = v110;
    }
    if ( v120 )
    {
      v52 = a6;
      v109 = v51;
      sub_AE9DF0(v119, a6, 5u);
      v53 = v109;
    }
    else
    {
      if ( !v122 )
        goto LABEL_37;
      v109 = v51;
      v63 = sub_168B9E0(v117);
      v66 = v109;
      v67 = v63;
      v68 = (__int64)v118;
      if ( v118 )
      {
        v69 = *v118;
        v110 = v67;
        v68 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(v69 + 32))(
                v118,
                v50,
                v69,
                v67,
                v65,
                v109);
        v67 = v110;
        v66 = v109;
      }
      v109 = v66;
      v113.m128_u64[0] = v68;
      v70 = sub_1587BC0(v67, (__int64 *)&v113, v64, v67, v65, v66);
      v52 = a6;
      sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v121 + 8), a6, 5u);
      v53 = v109;
    }
    if ( v120 )
    {
      sub_AE9DF0(v119, v53, 0xCu);
    }
    else if ( v122 )
    {
      v109 = v53;
      v55 = sub_168B9E0(v117);
      v59 = v109;
      v60 = v55;
      v61 = (__int64)v118;
      if ( v118 )
      {
        v61 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64))(*v118 + 32LL))(
                v118,
                v52,
                *v118,
                v57,
                v58,
                v109);
        v59 = v109;
      }
      v109 = v59;
      v113.m128_u64[0] = v61;
      v62 = sub_1587BC0(v60, (__int64 *)&v113, v56, v57, v58, v59);
      sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v121 + 8), v109, 0xCu);
    }
    goto LABEL_37;
  }
  v39 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v40 = *(_BYTE *)(v39 + 28) & 0x7F;
  v41 = v40;
  if ( ((v40 + 52) & 0x7Fu) <= 1 || (unsigned int)v40 - 53 <= 1 )
  {
    v42 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
    v29 = v110;
    v39 = v42;
    v41 = *(_BYTE *)(v42 + 28) & 0x7F;
  }
  v30 = *a1;
  if ( (unsigned int)(v41 - 58) > 4 )
    goto LABEL_27;
  v43 = (unsigned int)v109;
  v109 = v39;
  if ( !(unsigned __int8)sub_17B1BF0(v30, v39, v43, 0, a7, a6) )
  {
    sub_168B9F0((__int64)&v135, (__int64 *)(*a1 + 8), a3, 0x150Du, 0);
    v54 = v109;
    if ( (_BYTE)v143 )
    {
      sub_AE9DF0(&v139, a6, 5u);
      v54 = v109;
    }
    else if ( v145 )
    {
      v100 = sub_168B9E0(&v135);
      v105 = v109;
      v106 = v100;
      v107 = v137;
      if ( v137 )
      {
        v107 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v137 + 32LL))(v137);
        v105 = v109;
      }
      v109 = v105;
      v117[0] = v107;
      v108 = sub_1587BC0(v106, v117, v101, v102, v103, v104);
      sub_AE9DF0((unsigned __int8 **)(*v108 + 32LL * v144 + 8), a6, 5u);
      v54 = v109;
    }
    v109 = v54;
    sub_15F7200(&v135);
    sub_168B9F0((__int64)&v135, (__int64 *)(*a1 + 8), *(_DWORD *)(v109 + 24), 0x73u, 0);
    sub_15F7200(&v135);
LABEL_5:
    v27 = 0;
    goto LABEL_6;
  }
  v47 = *(_QWORD *)(v109 + 48);
  v48 = *(_QWORD *)(*a1 + 248);
  if ( v47 )
  {
    v49 = v47 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v49 = sub_A7AA70(v48, v109, v44, 0, v45, v46);
    v48 = *(_QWORD *)(*a1 + 248);
  }
  v27 = sub_A76250(v48, a2, v112.m128i_i64[0], v49, 0);
LABEL_6:
  if ( !BYTE3(v134) )
  {
LABEL_21:
    if ( !BYTE4(v134) || (_DWORD)v123 != 5 )
      goto LABEL_10;
LABEL_23:
    sub_1A445B0(v129, &v123);
    goto LABEL_10;
  }
  if ( (_DWORD)v123 == 5 )
  {
LABEL_33:
    if ( !BYTE4(v134) )
      goto LABEL_10;
    goto LABEL_23;
  }
  if ( v127[1] && (*(_BYTE *)(v129[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v129, (__int64)&v123);
    goto LABEL_21;
  }
LABEL_10:
  if ( v127[0] )
    sub_1A39780(v127[0]);
  if ( ptr == v126 )
  {
LABEL_16:
    if ( !HIDWORD(v115[1]) )
      return v27;
    goto LABEL_14;
  }
  free(ptr);
  if ( HIDWORD(v115[1]) )
LABEL_14:
    free(v115[0]);
  return v27;
}
