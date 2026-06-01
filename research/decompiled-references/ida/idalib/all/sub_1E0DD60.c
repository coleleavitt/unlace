unsigned __int64 __fastcall sub_1E0DD60(
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
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int8 **v26; // rax
  __int64 v27; // rdi
  char v28; // bp
  unsigned __int64 v29; // r12
  unsigned __int8 **v31; // r9
  __int64 v32; // rdi
  unsigned __int64 v33; // r14
  int v34; // r15d
  __int64 *v35; // rsi
  unsigned __int64 v36; // r14
  unsigned int v37; // eax
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r10
  unsigned __int8 v40; // dl
  int v41; // eax
  __int64 v42; // rax
  unsigned int v43; // edx
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
  __int64 *v54; // rsi
  __int64 v55; // r10
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r15
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbp
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // r14
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r15
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // r15
  __int64 v92; // rax
  _QWORD *v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rbp
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rax
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
  unsigned __int8 **v111; // [rsp+8h] [rbp-288h]
  _BYTE *v112; // [rsp+10h] [rbp-280h]
  __m128i v113; // [rsp+18h] [rbp-278h] BYREF
  __m128 v114; // [rsp+28h] [rbp-268h] BYREF
  __int128 v115; // [rsp+38h] [rbp-258h] BYREF
  void *ptr[2]; // [rsp+48h] [rbp-248h]
  __int128 v117; // [rsp+58h] [rbp-238h]
  __int64 v118[2]; // [rsp+68h] [rbp-228h] BYREF
  _QWORD *v119; // [rsp+78h] [rbp-218h]
  unsigned __int8 *v120[11]; // [rsp+88h] [rbp-208h] BYREF
  char v121; // [rsp+E0h] [rbp-1B0h]
  unsigned int v122; // [rsp+E8h] [rbp-1A8h]
  char v123; // [rsp+ECh] [rbp-1A4h]
  __int64 v124; // [rsp+F8h] [rbp-198h] BYREF
  _QWORD *v125; // [rsp+100h] [rbp-190h]
  __int64 v126; // [rsp+108h] [rbp-188h]
  _OWORD v127[5]; // [rsp+110h] [rbp-180h] BYREF
  __int64 v128; // [rsp+160h] [rbp-130h]
  __int64 v129; // [rsp+168h] [rbp-128h]
  __int64 v130; // [rsp+170h] [rbp-120h]
  unsigned int v131; // [rsp+178h] [rbp-118h]
  __int64 v132; // [rsp+180h] [rbp-110h] BYREF
  __m128i si128; // [rsp+188h] [rbp-108h]
  __int64 v134; // [rsp+198h] [rbp-F8h]
  __int64 v135; // [rsp+1A8h] [rbp-E8h] BYREF
  char *v136; // [rsp+1B0h] [rbp-E0h]
  __int64 v137; // [rsp+1B8h] [rbp-D8h]
  char v138; // [rsp+1C0h] [rbp-D0h] BYREF
  __int128 v139; // [rsp+200h] [rbp-90h]
  __int64 v140; // [rsp+210h] [rbp-80h]
  __int64 v141; // [rsp+218h] [rbp-78h]
  __int64 v142; // [rsp+220h] [rbp-70h]
  unsigned int v143; // [rsp+228h] [rbp-68h]
  char v144; // [rsp+22Ch] [rbp-64h]
  __int64 v145; // [rsp+230h] [rbp-60h] BYREF
  __m128i v146; // [rsp+238h] [rbp-58h]
  __int64 v147; // [rsp+248h] [rbp-48h]

  v113.m128i_i64[0] = a4;
  v113.m128i_i64[1] = a5;
  v115 = 0;
  *(_OWORD *)ptr = 0;
  v117 = 0;
  sub_15AB8B0((__int64)&v115, a4, a5);
  if ( !sub_E917A0(v113.m128i_i64[0], a4, v15, v16, v17, v18) || sub_16A2930(*a1, (__int64)&v115, 0, v19, v20, v21) )
  {
    if ( (unsigned int)(a2 - 5) <= 1 )
    {
      v29 = sub_1CD4E00(*a1, a2, a3, (__int64 *)v113.m128i_i64[0], v113.m128i_i64[1], a6, 0.0, a8, a9, a10);
      if ( !HIDWORD(ptr[1]) )
        return v29;
LABEL_10:
      free(ptr[0]);
      return v29;
    }
    LODWORD(v110) = sub_F58630(a2);
    v22 = *a1;
    v126 = 0x800000000LL;
    v129 = v22;
    v125 = v127;
    v127[4] = 0;
    v131 = a9;
    v124 = 0;
    v128 = 0;
    v130 = a6;
    sub_B85890(&v132, a6);
    v134 = 0x101010000LL;
    si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    sub_1A395A0((__int64)&v124);
    v26 = (unsigned __int8 **)sub_16A2930(*a1, (__int64)&v115, 0, v23, v24, v25);
    if ( !v26 || (v27 = *a1, v111 = v26, (v28 = sub_169F990(v27, (__int64)&v115, (unsigned __int64)v26)) != 0) )
    {
LABEL_5:
      v29 = 0;
LABEL_6:
      sub_169D230((__int64)&v124);
      goto LABEL_7;
    }
    sub_1A48440(*a1, (__int64)&v124, (__int64)v111, 0);
    v31 = v111;
    if ( (_DWORD)v124 == 2 )
    {
      v39 = *v125 & 0xFFFFFFFFFFFFFFF8LL;
      v40 = *(_BYTE *)(v39 + 28) & 0x7F;
      v41 = v40;
      if ( (unsigned int)v40 - 53 <= 1 || ((v40 + 52) & 0x7Fu) <= 1 )
      {
        v42 = sub_B72ED0(*v125 & 0xFFFFFFFFFFFFFFF8LL);
        v31 = v111;
        v39 = v42;
        v41 = *(_BYTE *)(v42 + 28) & 0x7F;
      }
      v32 = *a1;
      if ( (unsigned int)(v41 - 58) <= 4 )
      {
        v43 = v110;
        v110 = v39;
        if ( sub_17B1BF0(v32, v39, v43, 0, a9, a6) )
        {
          v47 = *(_QWORD *)(v110 + 48);
          v48 = *(_QWORD *)(*a1 + 248);
          if ( v47 )
          {
            v49 = v47 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v49 = sub_A7AA70(v48, v110, v44, 0, v45, v46);
            v48 = *(_QWORD *)(*a1 + 248);
          }
          v29 = sub_A76250(v48, a2, v113.m128i_i64[0], v49, 0);
          goto LABEL_6;
        }
        v54 = (__int64 *)(*a1 + 8);
        v111 = (unsigned __int8 **)&v135;
        sub_168B9F0((__int64)&v135, v54, a3, 0x150Du, 0);
        v55 = v110;
        if ( (_BYTE)v142 )
        {
          sub_AE9DF0(v111 + 4, a6, 5u);
          v55 = v110;
        }
        else if ( v144 )
        {
          v101 = sub_168B9E0(v111);
          v106 = v110;
          v107 = v101;
          v108 = v137;
          if ( v137 )
          {
            v108 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v137 + 32LL))(v137);
            v106 = v110;
          }
          v110 = v106;
          v118[0] = v108;
          v109 = sub_1587BC0(v107, v118, v102, v103, v104, v105);
          sub_AE9DF0((unsigned __int8 **)(*v109 + 32LL * v143 + 8), a6, 5u);
          v55 = v110;
        }
        v110 = v55;
        sub_15F7200(v111);
        sub_168B9F0((__int64)v111, (__int64 *)(*a1 + 8), *(_DWORD *)(v110 + 24), 0x73u, 0);
        sub_15F7200(v111);
        goto LABEL_5;
      }
    }
    else
    {
      v29 = 0;
      if ( (_DWORD)v124 == 5 )
        goto LABEL_6;
      v32 = *a1;
    }
    v112 = v31;
    v136 = &v138;
    v137 = 0x800000000LL;
    v141 = v32;
    v111 = (unsigned __int8 **)&v135;
    v139 = 0;
    v143 = a9;
    v135 = 0;
    v140 = 0;
    v142 = a6;
    sub_B85890(&v145, a6);
    v147 = 0x101010000LL;
    v146 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    sub_1A395A0((__int64)&v135);
    sub_1A48440(*a1, (__int64)&v135, (__int64)v112, 0);
    if ( (unsigned int)(v135 - 2) <= 2 )
    {
      v33 = *(_QWORD *)v136 & 0xFFFFFFFFFFFFFFF8LL;
      v34 = sub_17A62A0(*a1, v33, v110);
      sub_168B9F0((__int64)v118, (__int64 *)(*a1 + 8), a9, 0x13D4u, 0);
      if ( v121 )
      {
        sub_AE9DF0(v120, v33, 0xAu);
      }
      else
      {
        if ( !v123 )
        {
LABEL_19:
          sub_15F7200(v118);
          sub_168B9F0((__int64)v118, (__int64 *)(*a1 + 8), *(_DWORD *)(v33 + 24), 0x67u, 0);
          sub_15F7200(v118);
LABEL_20:
          v29 = 0;
          sub_169D230((__int64)v111);
          goto LABEL_6;
        }
        v66 = sub_168B9E0(v118);
        v69 = (__int64)v119;
        if ( v119 )
          v69 = (*(__int64 (__fastcall **)(_QWORD *))(*v119 + 32LL))(v119);
        v114.m128_u64[0] = v69;
        v70 = sub_1587BC0(v66, (__int64 *)&v114, v64, v65, v67, v68);
        sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v122 + 8), v33, 0xAu);
      }
      if ( v121 )
      {
        sub_AE9DF0(v120, v34, 2u);
      }
      else
      {
        if ( !v123 )
          goto LABEL_19;
        v96 = sub_168B9E0(v118);
        v99 = (__int64)v119;
        if ( v119 )
          v99 = (*(__int64 (__fastcall **)(_QWORD *))(*v119 + 32LL))(v119);
        v114.m128_u64[0] = v99;
        v100 = sub_1587BC0(v96, (__int64 *)&v114, v94, v95, v97, v98);
        sub_AE9DF0((unsigned __int8 **)(*v100 + 32LL * v122 + 8), v34, 2u);
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
      goto LABEL_19;
    }
    v35 = (__int64 *)(*a1 + 8);
    sub_168B9F0((__int64)v118, v35, a9, 0x10EAu, 0);
    if ( v121 )
    {
      v50 = (int)v110;
      sub_AE9DF0(v120, (int)v110, 2u);
      v51 = (__int64)v112;
    }
    else
    {
      if ( !v123 )
      {
LABEL_23:
        v36 = sub_E90530(v113.m128i_i64) >> 32;
        v37 = 0;
        if ( v113.m128i_i64[0] )
        {
          v114 = (__m128)_mm_load_si128(&v113);
          v38 = *(_QWORD *)(v113.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v38 )
          {
            v110 = v114.m128_i64[1];
            v114 = _mm_loadh_ps((const double *)&v110);
            while ( (*(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v28 = 1;
              v38 = *(_QWORD *)(v38 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v28 )
              v114.m128_u64[0] = v38;
          }
          v37 = sub_E90530((__int64 *)&v114);
        }
        v114.m128_u64[0] = __PAIR64__(v36, v37);
        sub_1587DB0((__int64)v118, (__int64 *)&v114);
        sub_15F7200(v118);
        goto LABEL_20;
      }
      v56 = sub_168B9E0(v118);
      v60 = (__int64)v112;
      v61 = v56;
      v62 = (__int64)v119;
      if ( v119 )
      {
        v62 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, _QWORD, __int64, __int64, _BYTE *))(*v119 + 32LL))(
                v119,
                v35,
                *v119,
                v58,
                v59,
                v112);
        v60 = (__int64)v112;
      }
      v112 = (_BYTE *)v60;
      v114.m128_u64[0] = v62;
      v63 = sub_1587BC0(v61, (__int64 *)&v114, v57, v58, v59, v60);
      v50 = (int)v110;
      sub_AE9DF0((unsigned __int8 **)(*v63 + 32LL * v122 + 8), (int)v110, 2u);
      v51 = (__int64)v112;
    }
    if ( v121 )
    {
      v52 = a6;
      v110 = v51;
      sub_AE9DF0(v120, a6, 5u);
      v53 = v110;
    }
    else
    {
      if ( !v123 )
        goto LABEL_23;
      v110 = v51;
      v79 = sub_168B9E0(v118);
      v83 = v110;
      v84 = v79;
      v85 = (__int64)v119;
      if ( v119 )
      {
        v85 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64))(*v119 + 32LL))(
                v119,
                v50,
                *v119,
                v81,
                v82,
                v110);
        v83 = v110;
      }
      v110 = v83;
      v114.m128_u64[0] = v85;
      v86 = sub_1587BC0(v84, (__int64 *)&v114, v80, v81, v82, v83);
      v52 = a6;
      sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * v122 + 8), a6, 5u);
      v53 = v110;
    }
    if ( v121 )
    {
      sub_AE9DF0(v120, v53, 0xCu);
    }
    else if ( v123 )
    {
      v110 = v53;
      v71 = sub_168B9E0(v118);
      v75 = v110;
      v76 = v71;
      v77 = (__int64)v119;
      if ( v119 )
      {
        v77 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64))(*v119 + 32LL))(
                v119,
                v52,
                *v119,
                v73,
                v74,
                v110);
        v75 = v110;
      }
      v110 = v75;
      v114.m128_u64[0] = v77;
      v78 = sub_1587BC0(v76, (__int64 *)&v114, v72, v73, v74, v75);
      sub_AE9DF0((unsigned __int8 **)(*v78 + 32LL * v122 + 8), v110, 0xCu);
    }
    goto LABEL_23;
  }
  v29 = sub_AB77C0(*(_QWORD **)(*a1 + 248), a2, v113.m128i_i64[0], a6);
LABEL_7:
  if ( HIDWORD(ptr[1]) )
    goto LABEL_10;
  return v29;
}
