unsigned __int64 __fastcall sub_1D88270(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8,
        unsigned int a9,
        char a10)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdi
  char v31; // r12
  unsigned __int64 v32; // rbp
  __int64 v34; // r9
  __int64 v35; // rdi
  unsigned __int64 v36; // r14
  int v37; // r12d
  __int64 *v38; // rsi
  unsigned __int64 v39; // r14
  unsigned int v40; // eax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r10
  unsigned __int8 v43; // al
  int v44; // edx
  __int64 v45; // rax
  unsigned int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rcx
  __int64 v51; // rdi
  unsigned __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // r9
  __int64 v55; // rsi
  __int64 v56; // r9
  __int64 v57; // r10
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r14
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rdx
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdx
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rax
  __int64 v87; // rcx
  _QWORD *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // r12
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rax
  __int64 v101; // rcx
  _QWORD *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // r10
  __int64 v109; // r12
  __int64 v110; // rax
  _QWORD *v111; // rax
  __int64 v112; // [rsp+0h] [rbp-290h] BYREF
  __int64 v113; // [rsp+8h] [rbp-288h]
  __int64 v114; // [rsp+10h] [rbp-280h]
  __m128i v115; // [rsp+18h] [rbp-278h] BYREF
  __m128 v116; // [rsp+28h] [rbp-268h] BYREF
  __int128 v117; // [rsp+38h] [rbp-258h] BYREF
  void *v118[2]; // [rsp+48h] [rbp-248h]
  __int128 v119; // [rsp+58h] [rbp-238h]
  __int64 v120[2]; // [rsp+68h] [rbp-228h] BYREF
  _QWORD *v121; // [rsp+78h] [rbp-218h]
  unsigned __int8 *v122[11]; // [rsp+88h] [rbp-208h] BYREF
  char v123; // [rsp+E0h] [rbp-1B0h]
  unsigned int v124; // [rsp+E8h] [rbp-1A8h]
  char v125; // [rsp+ECh] [rbp-1A4h]
  __int64 v126; // [rsp+F8h] [rbp-198h] BYREF
  void *ptr; // [rsp+100h] [rbp-190h]
  __int64 v128; // [rsp+108h] [rbp-188h]
  _BYTE v129[64]; // [rsp+110h] [rbp-180h] BYREF
  void *v130[2]; // [rsp+150h] [rbp-140h]
  __int64 v131; // [rsp+160h] [rbp-130h]
  _QWORD *v132; // [rsp+168h] [rbp-128h]
  __int64 v133; // [rsp+170h] [rbp-120h]
  unsigned int v134; // [rsp+178h] [rbp-118h]
  __int64 v135; // [rsp+180h] [rbp-110h] BYREF
  __m128i si128; // [rsp+188h] [rbp-108h]
  __int64 v137; // [rsp+198h] [rbp-F8h]
  __int64 v138; // [rsp+1A8h] [rbp-E8h] BYREF
  __int64 *v139; // [rsp+1B0h] [rbp-E0h]
  __int64 v140; // [rsp+1B8h] [rbp-D8h]
  __int64 v141; // [rsp+1C0h] [rbp-D0h] BYREF
  unsigned __int8 *v142; // [rsp+1C8h] [rbp-C8h] BYREF
  __int128 v143; // [rsp+200h] [rbp-90h]
  __int64 v144; // [rsp+210h] [rbp-80h]
  __int64 v145; // [rsp+218h] [rbp-78h]
  __int64 v146; // [rsp+220h] [rbp-70h]
  unsigned int v147; // [rsp+228h] [rbp-68h]
  char v148; // [rsp+22Ch] [rbp-64h]
  __int64 v149; // [rsp+230h] [rbp-60h] BYREF
  __m128i v150; // [rsp+238h] [rbp-58h]
  __int64 v151; // [rsp+248h] [rbp-48h]

  v115.m128i_i64[0] = a4;
  v115.m128i_i64[1] = a5;
  v117 = 0;
  *(_OWORD *)v118 = 0;
  v119 = 0;
  sub_15AB8B0((__int64)&v117, a4, a5);
  if ( sub_E917A0(v115.m128i_i64[0], a4, v15, v16, v17, v18) && !sub_16A2930(*a1, (__int64)&v117, 0, v19, v20, v21) )
  {
    v32 = sub_AB77C0(*(_QWORD **)(*a1 + 248), a2, v115.m128i_i64[0], a6);
    goto LABEL_16;
  }
  if ( (unsigned int)(a2 - 5) <= 1 )
  {
    v32 = sub_1CD4E00(*a1, a2, a3, (__int64 *)v115.m128i_i64[0], v115.m128i_i64[1], a6, 0.0, a8, a9, a10);
    goto LABEL_16;
  }
  LODWORD(v112) = sub_F58630(a2);
  v22 = (_QWORD *)*a1;
  ptr = v129;
  v132 = v22;
  v128 = 0x800000000LL;
  *(_OWORD *)v130 = 0;
  v134 = a9;
  v126 = 0;
  v131 = 0;
  v133 = a6;
  sub_B85890(&v135, a6);
  v137 = 0x101010000LL;
  si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  sub_1A395A0((__int64)&v126);
  v26 = sub_16A2930(*a1, (__int64)&v117, 0, v23, v24, v25);
  if ( !v26 )
    goto LABEL_5;
  v30 = *a1;
  v113 = v26;
  v31 = sub_169F990(v30, (__int64)&v117, v26);
  if ( v31 )
    goto LABEL_5;
  sub_1A48440(*a1, (__int64)&v126, v113, 0);
  v34 = v113;
  if ( (_DWORD)v126 != 2 )
  {
    if ( (_DWORD)v126 == 5 )
    {
      v32 = 0;
      if ( !BYTE3(v137) )
        goto LABEL_21;
      goto LABEL_33;
    }
    v35 = *a1;
LABEL_27:
    v145 = v35;
    v113 = v34;
    v139 = &v141;
    v140 = 0x800000000LL;
    v143 = 0;
    v147 = a9;
    v138 = 0;
    v144 = 0;
    v146 = a6;
    sub_B85890(&v149, a6);
    v151 = 0x101010000LL;
    v150 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    sub_1A395A0((__int64)&v138);
    sub_1A48440(*a1, (__int64)&v138, v113, 0);
    if ( (unsigned int)(v138 - 2) <= 2 )
    {
      v36 = *v139 & 0xFFFFFFFFFFFFFFF8LL;
      v37 = sub_17A62A0(*a1, v36, v112);
      sub_168B9F0((__int64)v120, (__int64 *)(*a1 + 8), a9, 0x13D4u, 0);
      if ( v123 )
      {
        sub_AE9DF0(v122, v36, 0xAu);
      }
      else
      {
        if ( !v125 )
        {
LABEL_30:
          sub_15F7200(v120);
          sub_168B9F0((__int64)v120, (__int64 *)(*a1 + 8), *(_DWORD *)(v36 + 24), 0x67u, 0);
          sub_15F7200(v120);
LABEL_31:
          v32 = 0;
          sub_169D230((__int64)&v138);
          goto LABEL_6;
        }
        v82 = sub_168B9E0(v120);
        v86 = (__int64)v121;
        if ( v121 )
        {
          v87 = *v121;
          v113 = v82;
          v86 = (*(__int64 (__fastcall **)(_QWORD *))(v87 + 32))(v121);
          v82 = v113;
        }
        v116.m128_u64[0] = v86;
        v88 = sub_1587BC0(v82, (__int64 *)&v116, v82, v83, v84, v85);
        sub_AE9DF0((unsigned __int8 **)(*v88 + 32LL * v124 + 8), v36, 0xAu);
      }
      if ( v123 )
      {
        sub_AE9DF0(v122, v37, 2u);
      }
      else
      {
        if ( !v125 )
          goto LABEL_30;
        v96 = sub_168B9E0(v120);
        v100 = (__int64)v121;
        if ( v121 )
        {
          v101 = *v121;
          v113 = v96;
          v100 = (*(__int64 (__fastcall **)(_QWORD *))(v101 + 32))(v121);
          v96 = v113;
        }
        v116.m128_u64[0] = v100;
        v102 = sub_1587BC0(v96, (__int64 *)&v116, v96, v97, v98, v99);
        sub_AE9DF0((unsigned __int8 **)(*v102 + 32LL * v124 + 8), v37, 2u);
      }
      if ( v123 )
      {
        sub_AE9DF0(v122, (int)v112, 2u);
      }
      else if ( v125 )
      {
        v93 = sub_168B9E0(v120);
        v94 = (__int64)v121;
        if ( v121 )
          v94 = (*(__int64 (__fastcall **)(_QWORD *))(*v121 + 32LL))(v121);
        v116.m128_u64[0] = v94;
        v95 = sub_1587BC0(v93, (__int64 *)&v116, v89, v90, v91, v92);
        sub_AE9DF0((unsigned __int8 **)(*v95 + 32LL * v124 + 8), (int)v112, 2u);
      }
      goto LABEL_30;
    }
    v38 = (__int64 *)(*a1 + 8);
    sub_168B9F0((__int64)v120, v38, a9, 0x10EAu, 0);
    if ( v123 )
    {
      v53 = (int)v112;
      sub_AE9DF0(v122, (int)v112, 2u);
      v54 = v113;
    }
    else
    {
      if ( !v125 )
      {
LABEL_37:
        v39 = sub_E90530(v115.m128i_i64) >> 32;
        v40 = 0;
        if ( v115.m128i_i64[0] )
        {
          v116 = (__m128)_mm_load_si128(&v115);
          v41 = *(_QWORD *)(v115.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v41 )
          {
            v112 = v116.m128_i64[1];
            v116 = _mm_loadh_ps((const double *)&v112);
            while ( (*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v31 = 1;
              v41 = *(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v31 )
              v116.m128_u64[0] = v41;
          }
          v40 = sub_E90530((__int64 *)&v116);
        }
        v116.m128_u64[0] = __PAIR64__(v39, v40);
        sub_1587DB0((__int64)v120, (__int64 *)&v116);
        sub_15F7200(v120);
        goto LABEL_31;
      }
      v74 = sub_168B9E0(v120);
      v77 = v113;
      v78 = v74;
      v79 = (__int64)v121;
      if ( v121 )
      {
        v80 = *v121;
        v114 = v78;
        v79 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64, __int64, __int64, __int64))(v80 + 32))(
                v121,
                v38,
                v80,
                v78,
                v76,
                v113);
        v78 = v114;
        v77 = v113;
      }
      v113 = v77;
      v116.m128_u64[0] = v79;
      v81 = sub_1587BC0(v78, (__int64 *)&v116, v75, v78, v76, v77);
      v53 = (int)v112;
      sub_AE9DF0((unsigned __int8 **)(*v81 + 32LL * v124 + 8), (int)v112, 2u);
      v54 = v113;
    }
    if ( v123 )
    {
      v55 = a6;
      v112 = v54;
      sub_AE9DF0(v122, a6, 5u);
      v56 = v112;
    }
    else
    {
      if ( !v125 )
        goto LABEL_37;
      v112 = v54;
      v66 = sub_168B9E0(v120);
      v69 = v112;
      v70 = v66;
      v71 = (__int64)v121;
      if ( v121 )
      {
        v72 = *v121;
        v113 = v70;
        v71 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64))(v72 + 32))(
                v121,
                v53,
                v72,
                v70,
                v68,
                v112);
        v70 = v113;
        v69 = v112;
      }
      v112 = v69;
      v116.m128_u64[0] = v71;
      v73 = sub_1587BC0(v70, (__int64 *)&v116, v67, v70, v68, v69);
      v55 = a6;
      sub_AE9DF0((unsigned __int8 **)(*v73 + 32LL * v124 + 8), a6, 5u);
      v56 = v112;
    }
    if ( v123 )
    {
      sub_AE9DF0(v122, v56, 0xCu);
    }
    else if ( v125 )
    {
      v112 = v56;
      v58 = sub_168B9E0(v120);
      v62 = v112;
      v63 = v58;
      v64 = (__int64)v121;
      if ( v121 )
      {
        v64 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64))(*v121 + 32LL))(
                v121,
                v55,
                *v121,
                v60,
                v61,
                v112);
        v62 = v112;
      }
      v112 = v62;
      v116.m128_u64[0] = v64;
      v65 = sub_1587BC0(v63, (__int64 *)&v116, v59, v60, v61, v62);
      sub_AE9DF0((unsigned __int8 **)(*v65 + 32LL * v124 + 8), v112, 0xCu);
    }
    goto LABEL_37;
  }
  v42 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
  v43 = *(_BYTE *)(v42 + 28) & 0x7F;
  v44 = v43;
  if ( ((v43 + 52) & 0x7Fu) <= 1 || (unsigned int)v43 - 53 <= 1 )
  {
    v45 = sub_B72ED0(*(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL);
    v34 = v113;
    v42 = v45;
    v44 = *(_BYTE *)(v45 + 28) & 0x7F;
  }
  v35 = *a1;
  if ( (unsigned int)(v44 - 58) > 4 )
    goto LABEL_27;
  v46 = v112;
  v112 = v42;
  if ( !sub_17B1BF0(v35, v42, v46, 0, a9, a6) )
  {
    sub_168B9F0((__int64)&v138, (__int64 *)(*a1 + 8), a3, 0x150Du, 0);
    v57 = v112;
    if ( (_BYTE)v146 )
    {
      sub_AE9DF0(&v142, a6, 5u);
      v57 = v112;
    }
    else if ( v148 )
    {
      v103 = sub_168B9E0(&v138);
      v108 = v112;
      v109 = v103;
      v110 = v140;
      if ( v140 )
      {
        v110 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v140 + 32LL))(v140);
        v108 = v112;
      }
      v112 = v108;
      v120[0] = v110;
      v111 = sub_1587BC0(v109, v120, v104, v105, v106, v107);
      sub_AE9DF0((unsigned __int8 **)(*v111 + 32LL * v147 + 8), a6, 5u);
      v57 = v112;
    }
    v112 = v57;
    sub_15F7200(&v138);
    sub_168B9F0((__int64)&v138, (__int64 *)(*a1 + 8), *(_DWORD *)(v112 + 24), 0x73u, 0);
    sub_15F7200(&v138);
LABEL_5:
    v32 = 0;
    goto LABEL_6;
  }
  v50 = *(_QWORD *)(v112 + 48);
  v51 = *(_QWORD *)(*a1 + 248);
  if ( v50 )
  {
    v52 = v50 & 0xFFFFFFFFFFFFFFF0LL;
  }
  else
  {
    v52 = sub_A7AA70(v51, v112, v47, 0, v48, v49);
    v51 = *(_QWORD *)(*a1 + 248);
  }
  v32 = sub_A76250(v51, a2, v115.m128i_i64[0], v52, 0);
LABEL_6:
  if ( !BYTE3(v137) )
  {
LABEL_21:
    if ( !BYTE4(v137) || (_DWORD)v126 != 5 )
      goto LABEL_10;
LABEL_23:
    sub_1A445B0((__int64)v132, (__int64)&v126, v27, v28, v29);
    goto LABEL_10;
  }
  if ( (_DWORD)v126 == 5 )
  {
LABEL_33:
    if ( !BYTE4(v137) )
      goto LABEL_10;
    goto LABEL_23;
  }
  if ( v130[1] && (*(_BYTE *)(v132[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v132, (__int64)&v126);
    goto LABEL_21;
  }
LABEL_10:
  if ( v130[0] )
    sub_1A39780((char *)v130[0]);
  if ( ptr == v129 )
  {
LABEL_16:
    if ( !HIDWORD(v118[1]) )
      return v32;
    goto LABEL_14;
  }
  free(ptr);
  if ( HIDWORD(v118[1]) )
LABEL_14:
    free(v118[0]);
  return v32;
}
