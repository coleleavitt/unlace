unsigned __int64 __fastcall sub_1B4A200(
        __int64 *a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  __int64 v24; // r15
  unsigned __int64 v25; // rbp
  __int64 v27; // rdi
  char v28; // r11
  __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // r14
  int v32; // r15d
  char v33; // r11
  unsigned __int64 v34; // r14
  unsigned int v35; // eax
  char v36; // r11
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rdi
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  char v51; // r11
  __int64 v52; // r14
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  char v67; // r11
  __int64 v68; // r14
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  char v76; // r11
  __int64 v77; // r14
  __int64 v78; // rax
  _QWORD *v79; // rax
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
  __int64 v91; // rax
  __int64 v92; // rcx
  _QWORD *v93; // rax
  unsigned __int64 v94; // [rsp+0h] [rbp-290h] BYREF
  __int64 v95; // [rsp+8h] [rbp-288h]
  __int64 v96; // [rsp+10h] [rbp-280h] BYREF
  __m128i v97; // [rsp+18h] [rbp-278h] BYREF
  __m128 v98; // [rsp+28h] [rbp-268h] BYREF
  __int128 v99; // [rsp+38h] [rbp-258h] BYREF
  void *ptr[2]; // [rsp+48h] [rbp-248h]
  __int128 v101; // [rsp+58h] [rbp-238h]
  _QWORD v102[2]; // [rsp+68h] [rbp-228h] BYREF
  __int64 v103; // [rsp+78h] [rbp-218h]
  unsigned __int8 *v104[11]; // [rsp+88h] [rbp-208h] BYREF
  char v105; // [rsp+E0h] [rbp-1B0h]
  unsigned int v106; // [rsp+E8h] [rbp-1A8h]
  char v107; // [rsp+ECh] [rbp-1A4h]
  __int64 v108; // [rsp+F8h] [rbp-198h] BYREF
  _QWORD *v109; // [rsp+100h] [rbp-190h]
  __int64 v110; // [rsp+108h] [rbp-188h]
  _OWORD v111[5]; // [rsp+110h] [rbp-180h] BYREF
  __int64 v112; // [rsp+160h] [rbp-130h]
  __int64 v113; // [rsp+168h] [rbp-128h]
  __int64 v114; // [rsp+170h] [rbp-120h]
  unsigned int v115; // [rsp+178h] [rbp-118h]
  __int64 v116; // [rsp+180h] [rbp-110h] BYREF
  __m128i si128; // [rsp+188h] [rbp-108h]
  __int64 v118; // [rsp+198h] [rbp-F8h]
  int v119; // [rsp+1A8h] [rbp-E8h] BYREF
  _QWORD *v120; // [rsp+1B0h] [rbp-E0h]

  v97.m128i_i64[0] = a4;
  v97.m128i_i64[1] = a5;
  v96 = a6;
  v99 = 0;
  *(_OWORD *)ptr = 0;
  v101 = 0;
  sub_15AB8B0((__int64)&v99, a4, a5);
  if ( !sub_E917A0(v97.m128i_i64[0], a4, v12, v13, v14, v15) || sub_16A2930(*a1, (__int64)&v99, 0, v16, v17, v18) )
  {
    if ( (unsigned int)(a2 - 5) <= 1 )
    {
      v25 = sub_1CD4E00(*a1, a2, a3, v97.m128i_i32[0], v97.m128i_i32[2], v96, a7, a8);
      if ( !HIDWORD(ptr[1]) )
        return v25;
LABEL_10:
      free(ptr[0]);
      return v25;
    }
    LODWORD(v94) = sub_F58630(a2);
    v19 = *a1;
    v109 = v111;
    v113 = v19;
    v110 = 0x800000000LL;
    v114 = v96;
    v111[4] = 0;
    v115 = a7;
    v108 = 0;
    v112 = 0;
    sub_B85890(&v116, v96);
    v118 = 0x101010000LL;
    si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    sub_1A395A0((__int64)&v108);
    v23 = sub_16A2930(*a1, (__int64)&v99, 0, v20, v21, v22);
    v24 = v23;
    if ( !v23 || (unsigned __int8)sub_169F990(*a1, (__int64)&v99, v23) )
    {
LABEL_5:
      v25 = 0;
LABEL_6:
      sub_169D230((__int64)&v108);
      goto LABEL_7;
    }
    v27 = *a1;
    LOBYTE(v95) = 0;
    sub_1A48440(v27, (__int64)&v108, v24, 0);
    v28 = 0;
    if ( (_DWORD)v108 == 2 )
    {
      v38 = sub_16C47B0(*v109 & 0xFFFFFFFFFFFFFFF8LL);
      v29 = *a1;
      v30 = v96;
      v39 = v38;
      v28 = v95;
      if ( (*(_BYTE *)(v38 + 28) & 0x7Fu) - 58 <= 4 )
      {
        if ( sub_17B1BF0(v29, v38, v94, 0, a7, v96) )
        {
          v43 = *(_QWORD *)(v39 + 48);
          v44 = *(_QWORD *)(*a1 + 248);
          if ( v43 )
          {
            v45 = v43 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v45 = sub_A7AA70(v44, v39, v40, 0, v41, v42);
            v44 = *(_QWORD *)(*a1 + 248);
          }
          v25 = sub_A76250(v44, a2, v97.m128i_i64[0], v45, 0);
          goto LABEL_6;
        }
        sub_168B9F0((__int64)&v119, (__int64 *)(*a1 + 8), a3, 0x150Du, 0);
        sub_17AE460((__int64)&v119, &v96);
        sub_15F7200(&v119);
        sub_168B9F0((__int64)&v119, (__int64 *)(*a1 + 8), *(_DWORD *)(v39 + 24), 0x73u, 0);
        sub_15F7200(&v119);
        goto LABEL_5;
      }
    }
    else
    {
      v25 = 0;
      if ( (_DWORD)v108 == 5 )
        goto LABEL_6;
      v29 = *a1;
      v30 = v96;
    }
    LOBYTE(v95) = v28;
    sub_1AE96C0((__int64)&v119, v29, v30, a7, 1);
    sub_1A48440(*a1, (__int64)&v119, v24, 0);
    if ( (unsigned int)(v119 - 2) <= 2 )
    {
      v31 = *v120 & 0xFFFFFFFFFFFFFFF8LL;
      v32 = sub_17A62A0(*a1, v31, v94);
      sub_168B9F0((__int64)v102, (__int64 *)(*a1 + 8), a7, 0x13D4u, 0);
      if ( v105 )
      {
        sub_AE9DF0(v104, v31, 0xAu);
      }
      else
      {
        if ( !v107 )
        {
LABEL_19:
          sub_15F7200(v102);
          sub_168B9F0((__int64)v102, (__int64 *)(*a1 + 8), *(_DWORD *)(v31 + 24), 0x67u, 0);
          sub_15F7200(v102);
LABEL_20:
          v25 = 0;
          sub_169D230((__int64)&v119);
          goto LABEL_6;
        }
        v55 = sub_168B9E0(v102);
        v59 = v103;
        if ( v103 )
        {
          v60 = *(_QWORD *)v103;
          v95 = v55;
          v59 = (*(__int64 (__fastcall **)(__int64))(v60 + 32))(v103);
          v55 = v95;
        }
        v98.m128_u64[0] = v59;
        v61 = sub_1587BC0(v55, (__int64 *)&v98, v55, v56, v57, v58);
        sub_AE9DF0((unsigned __int8 **)(*v61 + 32LL * v106 + 8), v31, 0xAu);
      }
      if ( v105 )
      {
        sub_AE9DF0(v104, v32, 2u);
      }
      else
      {
        if ( !v107 )
          goto LABEL_19;
        v87 = sub_168B9E0(v102);
        v91 = v103;
        if ( v103 )
        {
          v92 = *(_QWORD *)v103;
          v95 = v87;
          v91 = (*(__int64 (__fastcall **)(__int64))(v92 + 32))(v103);
          v87 = v95;
        }
        v98.m128_u64[0] = v91;
        v93 = sub_1587BC0(v87, (__int64 *)&v98, v87, v88, v89, v90);
        sub_AE9DF0((unsigned __int8 **)(*v93 + 32LL * v106 + 8), v32, 2u);
      }
      if ( v105 )
      {
        sub_AE9DF0(v104, (int)v94, 2u);
      }
      else if ( v107 )
      {
        v84 = sub_168B9E0(v102);
        v85 = v103;
        if ( v103 )
          v85 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 32LL))(v103);
        v98.m128_u64[0] = v85;
        v86 = sub_1587BC0(v84, (__int64 *)&v98, v80, v81, v82, v83);
        sub_AE9DF0((unsigned __int8 **)(*v86 + 32LL * v106 + 8), (int)v94, 2u);
      }
      goto LABEL_19;
    }
    sub_168B9F0((__int64)v102, (__int64 *)(*a1 + 8), a7, 0x10EAu, 0);
    v33 = v95;
    if ( v105 )
    {
      sub_AE9DF0(v104, (int)v94, 2u);
      v33 = v95;
    }
    else
    {
      if ( !v107 )
      {
LABEL_23:
        LOBYTE(v94) = v33;
        v34 = sub_E90530(v97.m128i_i64) >> 32;
        v35 = 0;
        if ( v97.m128i_i64[0] )
        {
          v98 = (__m128)_mm_load_si128(&v97);
          v36 = v94;
          v37 = *(_QWORD *)(v97.m128i_i64[0] + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v37 )
          {
            v94 = v98.m128_u64[1];
            v98 = _mm_loadh_ps((const double *)&v94);
            while ( (*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            {
              v36 = 1;
              v37 = *(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            }
            if ( v36 )
              v98.m128_u64[0] = v37;
          }
          v35 = sub_E90530((__int64 *)&v98);
        }
        v98.m128_u64[0] = __PAIR64__(v34, v35);
        sub_1587DB0((__int64)v102, (__int64 *)&v98);
        sub_15F7200(v102);
        goto LABEL_20;
      }
      v46 = sub_168B9E0(v102);
      v51 = v95;
      v52 = v46;
      v53 = v103;
      if ( v103 )
      {
        v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 32LL))(v103);
        v51 = v95;
      }
      LOBYTE(v95) = v51;
      v98.m128_u64[0] = v53;
      v54 = sub_1587BC0(v52, (__int64 *)&v98, v47, v48, v49, v50);
      sub_AE9DF0((unsigned __int8 **)(*v54 + 32LL * v106 + 8), (int)v94, 2u);
      v33 = v95;
    }
    if ( v105 )
    {
      LOBYTE(v94) = v33;
      sub_AE9DF0(v104, v96, 5u);
      v33 = v94;
    }
    else
    {
      if ( !v107 )
        goto LABEL_23;
      LOBYTE(v94) = v33;
      v71 = sub_168B9E0(v102);
      v76 = v94;
      v77 = v71;
      v78 = v103;
      if ( v103 )
      {
        v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 32LL))(v103);
        v76 = v94;
      }
      LOBYTE(v94) = v76;
      v98.m128_u64[0] = v78;
      v79 = sub_1587BC0(v77, (__int64 *)&v98, v72, v73, v74, v75);
      sub_AE9DF0((unsigned __int8 **)(*v79 + 32LL * v106 + 8), v96, 5u);
      v33 = v94;
    }
    if ( v105 )
    {
      LOBYTE(v94) = v33;
      sub_AE9DF0(v104, v24, 0xCu);
      v33 = v94;
    }
    else if ( v107 )
    {
      LOBYTE(v94) = v33;
      v62 = sub_168B9E0(v102);
      v67 = v94;
      v68 = v62;
      v69 = v103;
      if ( v103 )
      {
        v69 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 32LL))(v103);
        v67 = v94;
      }
      LOBYTE(v94) = v67;
      v98.m128_u64[0] = v69;
      v70 = sub_1587BC0(v68, (__int64 *)&v98, v63, v64, v65, v66);
      sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v106 + 8), v24, 0xCu);
      v33 = v94;
    }
    goto LABEL_23;
  }
  v25 = sub_AB77C0(*(_QWORD **)(*a1 + 248), a2, v97.m128i_i64[0], v96);
LABEL_7:
  if ( HIDWORD(ptr[1]) )
    goto LABEL_10;
  return v25;
}
