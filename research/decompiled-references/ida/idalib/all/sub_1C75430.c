unsigned __int64 __fastcall sub_1C75430(
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
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  char v29; // r12
  unsigned __int64 v30; // rbp
  __int64 v32; // r9
  __int64 v33; // rdi
  unsigned __int64 v34; // r14
  int v35; // r12d
  __int64 *v36; // rsi
  unsigned __int64 v37; // r14
  unsigned int v38; // eax
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r10
  unsigned __int8 v41; // al
  int v42; // edx
  __int64 v43; // rax
  unsigned int v44; // edx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // rdi
  unsigned __int64 v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // r9
  __int64 v53; // rsi
  __int64 v54; // r9
  __int64 v55; // r10
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r14
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  _QWORD *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  __int64 v85; // rcx
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r12
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rax
  __int64 v99; // rcx
  _QWORD *v100; // rax
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // r10
  __int64 v107; // r12
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // [rsp+0h] [rbp-290h] BYREF
  __int64 v111; // [rsp+8h] [rbp-288h]
  __int64 v112; // [rsp+10h] [rbp-280h]
  __m128i v113; // [rsp+18h] [rbp-278h] BYREF
  __m128 v114; // [rsp+28h] [rbp-268h] BYREF
  __int128 v115; // [rsp+38h] [rbp-258h] BYREF
  void *v116[2]; // [rsp+48h] [rbp-248h]
  __int128 v117; // [rsp+58h] [rbp-238h]
  __int64 v118[2]; // [rsp+68h] [rbp-228h] BYREF
  _QWORD *v119; // [rsp+78h] [rbp-218h]
  unsigned __int8 *v120[11]; // [rsp+88h] [rbp-208h] BYREF
  char v121; // [rsp+E0h] [rbp-1B0h]
  unsigned int v122; // [rsp+E8h] [rbp-1A8h]
  char v123; // [rsp+ECh] [rbp-1A4h]
  __int64 v124; // [rsp+F8h] [rbp-198h] BYREF
  void *ptr; // [rsp+100h] [rbp-190h]
  __int64 v126; // [rsp+108h] [rbp-188h]
  _BYTE v127[64]; // [rsp+110h] [rbp-180h] BYREF
  void *v128[2]; // [rsp+150h] [rbp-140h]
  __int64 v129; // [rsp+160h] [rbp-130h]
  _QWORD *v130; // [rsp+168h] [rbp-128h]
  __int64 v131; // [rsp+170h] [rbp-120h]
  unsigned int v132; // [rsp+178h] [rbp-118h]
  __int64 v133; // [rsp+180h] [rbp-110h] BYREF
  __m128i si128; // [rsp+188h] [rbp-108h]
  __int64 v135; // [rsp+198h] [rbp-F8h]
  __int64 v136; // [rsp+1A8h] [rbp-E8h] BYREF
  __int64 *v137; // [rsp+1B0h] [rbp-E0h]
  __int64 v138; // [rsp+1B8h] [rbp-D8h]
  __int64 v139; // [rsp+1C0h] [rbp-D0h] BYREF
  unsigned __int8 *v140; // [rsp+1C8h] [rbp-C8h] BYREF
  __int128 v141; // [rsp+200h] [rbp-90h]
  __int64 v142; // [rsp+210h] [rbp-80h]
  __int64 v143; // [rsp+218h] [rbp-78h]
  __int64 v144; // [rsp+220h] [rbp-70h]
  unsigned int v145; // [rsp+228h] [rbp-68h]
  char v146; // [rsp+22Ch] [rbp-64h]
  __int64 v147; // [rsp+230h] [rbp-60h] BYREF
  __m128i v148; // [rsp+238h] [rbp-58h]
  __int64 v149; // [rsp+248h] [rbp-48h]

  v113.m128i_i64[0] = a4;
  v113.m128i_i64[1] = a5;
  v115 = 0;
  *(_OWORD *)v116 = 0;
  v117 = 0;
  sub_15AB8B0((__int64)&v115, a4, a5);
  if ( sub_E917A0(v113.m128i_i64[0], a4, v13, v14, v15, v16) && !sub_16A2930(*a1, (__int64)&v115, 0, v17, v18, v19) )
  {
    v30 = sub_AB77C0(*(_QWORD **)(*a1 + 248), a2, v113.m128i_i64[0], a6);
    goto LABEL_16;
  }
  if ( (unsigned int)(a2 - 5) <= 1 )
  {
    v30 = sub_1CD4E00(*a1, a2, a3, v113.m128i_i32[0], v113.m128i_i32[2], a6, a7, a8);
    goto LABEL_16;
  }
  LODWORD(v110) = sub_F58630(a2);
  v20 = (_QWORD *)*a1;
  ptr = v127;
  v130 = v20;
  v126 = 0x800000000LL;
  *(_OWORD *)v128 = 0;
  v132 = a7;
  v124 = 0;
  v129 = 0;
  v131 = a6;
  sub_B85890(&v133, a6);
  v135 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  sub_1A395A0((__int64)&v124);
  v24 = sub_16A2930(*a1, (__int64)&v115, 0, v21, v22, v23);
  if ( !v24 )
    goto LABEL_5;
  v28 = *a1;
  v111 = v24;
  v29 = sub_169F990(v28, (__int64)&v115, v24);
  if ( v29 )
    goto LABEL_5;
  sub_1A48440(*a1, (__int64)&v124, v111, 0);
  v32 = v111;
  if ( (_DWORD)v124 != 2 )
  {
    if ( (_DWORD)v124 == 5 )
    {
      v30 = 0;
      if ( !BYTE3(v135) )
        goto LABEL_21;
      goto LABEL_33;
    }
    v33 = *a1;
LABEL_27:
    v143 = v33;
    v111 = v32;
    v137 = &v139;
    v138 = 0x800000000LL;
    v141 = 0;
    v145 = a7;
    v136 = 0;
    v142 = 0;
    v144 = a6;
    sub_B85890(&v147, a6);
    v149 = 0x101010000LL;
    v148 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    sub_1A395A0((__int64)&v136);
    sub_1A48440(*a1, (__int64)&v136, v111, 0);
    if ( (unsigned int)(v136 - 2) <= 2 )
    {
      v34 = *v137 & 0xFFFFFFFFFFFFFFF8LL;
      v35 = sub_17A62A0(*a1, v34, v110);
      sub_168B9F0((__int64)v118, (__int64 *)(*a1 + 8), a7, 0x13D4u, 0);
      if ( v121 )
      {
        sub_AE9DF0(v120, v34, 0xAu);
      }
      else
      {
        if ( !v123 )
        {
LABEL_30:
          sub_15F7200(v118);
          sub_168B9F0((__int64)v118, (__int64 *)(*a1 + 8), *(_DWORD *)(v34 + 24), 0x67u, 0);
          sub_15F7200(v118);
LABEL_31:
          v30 = 0;
          sub_169D230((__int64)&v136);
          goto LABEL_6;
        }
        v80 = sub_168B9E0(v118);
        v84 = (__int64)v119;
        if ( v119 )
        {
          v85 = *v119;
          v111 = v80;
          v84 = (*(__int64 (__fastcall **)(_QWORD *))(v85 + 32))(v119);
          v80 = v111;
        }
        v114.m128_u64[0] = v84;
        v86 = sub_1587BC0(v80, (__int64 *)&v114, v80, v81, v82, v83);
        sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * v122 + 8), v34, 0xAu);
      }
      if ( v121 )
      {
        sub_AE9DF0(v120, v35, 2u);
      }
      else
      {
        if ( !v123 )
          goto LABEL_30;
        v94 = sub_168B9E0(v118);
        v98 = (__int64)v119;
        if ( v119 )
        {
          v99 = *v119;
          v111 = v94;
          v98 = (*(__int64 (__fastcall **)(_QWORD *))(v99 + 32))(v119);
          v94 = v111;
        }
        v114.m128_u64[0] = v98;
        v100 = sub_1587BC0(v94, (__int64 *)&v114, v94, v95, v96, v97);
        sub_AE9DF0((unsigned __int8 **)(*v100 + 32LL * v122 + 8), v35, 2u);
      }
      if ( v121 )
      {
        sub_AE9DF0(v120, (int)v110, 2u);
      }
      else if ( v123 )
      {
        v91 = sub_168B9E0(v118);
        v92 = (__int64)v119;
        if ( v119 )
          v92 = (*(__int64 (__fastcall **)(_QWORD *))(*v119 + 32LL))(v119);
        v114.m128_u64[0] = v92;
        v93 = sub_1587BC0(v91, (__int64 *)&v114, v87, v88, v89, v90);
        sub_AE9DF0((unsigned __int8 **)(*v93 + 32LL * v122 + 8), (int)v110, 2u);
      }
      goto LABEL_30;
    }
    v36 = (__int64 *)(*a1 + 8);
    sub_168B9F0((__int64)v118, v36, a7, 0x10EAu, 0);
    if ( v121 )
    {
      v51 = (int)v110;
      sub_AE9DF0(v120, (int)v110, 2u);
      v52 = v111;
    }
    else
    {
      if ( !v123 )
      {
LABEL_37:
        v37 = sub_E90530(v113.m128i_i64) >> 32;
        v38 = 0;
        if ( v113.m128i_i64[0] )
        {
          v114 = (__m128)_mm_load_si128(&v113);
          v39 = *(_QWORD *)(v113.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v39 )
          {
            v110 = v114.m128_i64[1];
            v114 = _mm_loadh_ps((const double *)&v110);
            while ( (*(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v29 = 1;
              v39 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v29 )
              v114.m128_u64[0] = v39;
          }
          v38 = sub_E90530((__int64 *)&v114);
        }
        v114.m128_u64[0] = __PAIR64__(v37, v38);
        sub_1587DB0((__int64)v118, (__int64 *)&v114);
        sub_15F7200(v118);
        goto LABEL_31;
      }
      v72 = sub_168B9E0(v118);
      v75 = v111;
      v76 = v72;
      v77 = (__int64)v119;
      if ( v119 )
      {
        v78 = *v119;
        v112 = v76;
        v77 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, __int64, __int64, __int64))(v78 + 32))(
                v119,
                v36,
                v78,
                v76,
                v74,
                v111);
        v76 = v112;
        v75 = v111;
      }
      v111 = v75;
      v114.m128_u64[0] = v77;
      v79 = sub_1587BC0(v76, (__int64 *)&v114, v73, v76, v74, v75);
      v51 = (int)v110;
      sub_AE9DF0((unsigned __int8 **)(*v79 + 32LL * v122 + 8), (int)v110, 2u);
      v52 = v111;
    }
    if ( v121 )
    {
      v53 = a6;
      v110 = v52;
      sub_AE9DF0(v120, a6, 5u);
      v54 = v110;
    }
    else
    {
      if ( !v123 )
        goto LABEL_37;
      v110 = v52;
      v64 = sub_168B9E0(v118);
      v67 = v110;
      v68 = v64;
      v69 = (__int64)v119;
      if ( v119 )
      {
        v70 = *v119;
        v111 = v68;
        v69 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(v70 + 32))(
                v119,
                v51,
                v70,
                v68,
                v66,
                v110);
        v68 = v111;
        v67 = v110;
      }
      v110 = v67;
      v114.m128_u64[0] = v69;
      v71 = sub_1587BC0(v68, (__int64 *)&v114, v65, v68, v66, v67);
      v53 = a6;
      sub_AE9DF0((unsigned __int8 **)(*v71 + 32LL * v122 + 8), a6, 5u);
      v54 = v110;
    }
    if ( v121 )
    {
      sub_AE9DF0(v120, v54, 0xCu);
    }
    else if ( v123 )
    {
      v110 = v54;
      v56 = sub_168B9E0(v118);
      v60 = v110;
      v61 = v56;
      v62 = (__int64)v119;
      if ( v119 )
      {
        v62 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64))(*v119 + 32LL))(
                v119,
                v53,
                *v119,
                v58,
                v59,
                v110);
        v60 = v110;
      }
      v110 = v60;
      v114.m128_u64[0] = v62;
      v63 = sub_1587BC0(v61, (__int64 *)&v114, v57, v58, v59, v60);
      sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v122 + 8), v110, 0xCu);
    }
    goto LABEL_37;
  }
  v40 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v41 = *(_BYTE *)(v40 + 28) & 0x7F;
  v42 = v41;
  if ( ((v41 + 52) & 0x7Fu) <= 1 || (unsigned int)v41 - 53 <= 1 )
  {
    v43 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
    v32 = v111;
    v40 = v43;
    v42 = *(_BYTE *)(v43 + 28) & 0x7F;
  }
  v33 = *a1;
  if ( (unsigned int)(v42 - 58) > 4 )
    goto LABEL_27;
  v44 = v110;
  v110 = v40;
  if ( !sub_17B1BF0(v33, v40, v44, 0, a7, a6) )
  {
    sub_168B9F0((__int64)&v136, (__int64 *)(*a1 + 8), a3, 0x150Du, 0);
    v55 = v110;
    if ( (_BYTE)v144 )
    {
      sub_AE9DF0(&v140, a6, 5u);
      v55 = v110;
    }
    else if ( v146 )
    {
      v101 = sub_168B9E0(&v136);
      v106 = v110;
      v107 = v101;
      v108 = v138;
      if ( v138 )
      {
        v108 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v138 + 32LL))(v138);
        v106 = v110;
      }
      v110 = v106;
      v118[0] = v108;
      v109 = sub_1587BC0(v107, v118, v102, v103, v104, v105);
      sub_AE9DF0((unsigned __int8 **)(*v109 + 32LL * v145 + 8), a6, 5u);
      v55 = v110;
    }
    v110 = v55;
    sub_15F7200(&v136);
    sub_168B9F0((__int64)&v136, (__int64 *)(*a1 + 8), *(_DWORD *)(v110 + 24), 0x73u, 0);
    sub_15F7200(&v136);
LABEL_5:
    v30 = 0;
    goto LABEL_6;
  }
  v48 = *(_QWORD *)(v110 + 48);
  v49 = *(_QWORD *)(*a1 + 248);
  if ( v48 )
  {
    v50 = v48 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v50 = sub_A7AA70(v49, v110, v45, 0, v46, v47);
    v49 = *(_QWORD *)(*a1 + 248);
  }
  v30 = sub_A76250(v49, a2, v113.m128i_i64[0], v50, 0);
LABEL_6:
  if ( !BYTE3(v135) )
  {
LABEL_21:
    if ( !BYTE4(v135) || (_DWORD)v124 != 5 )
      goto LABEL_10;
LABEL_23:
    sub_1A445B0((__int64)v130, (__int64)&v124, v25, v26, v27);
    goto LABEL_10;
  }
  if ( (_DWORD)v124 == 5 )
  {
LABEL_33:
    if ( !BYTE4(v135) )
      goto LABEL_10;
    goto LABEL_23;
  }
  if ( v128[1] && (*(_BYTE *)(v130[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v130, (__int64)&v124);
    goto LABEL_21;
  }
LABEL_10:
  if ( v128[0] )
    sub_1A39780((char *)v128[0]);
  if ( ptr == v127 )
  {
LABEL_16:
    if ( !HIDWORD(v116[1]) )
      return v30;
    goto LABEL_14;
  }
  free(ptr);
  if ( HIDWORD(v116[1]) )
LABEL_14:
    free(v116[0]);
  return v30;
}
