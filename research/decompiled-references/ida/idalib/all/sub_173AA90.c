__int64 __fastcall sub_173AA90(__int64 **a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbp
  __int64 v14; // r9
  unsigned __int8 v15; // r13
  __int64 *v16; // rbx
  __int64 *v17; // r8
  int v18; // r13d
  __int64 *v19; // rdi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 (__fastcall **v25)(); // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  char v28; // dl
  __int64 v29; // rsi
  __int64 v30; // rsi
  char v31; // cl
  __int64 v32; // r12
  __int64 v33; // rsi
  char *v34; // r15
  __int64 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // rdx
  __m128 v38; // xmm0
  char v39; // dl
  __int64 *v40; // rbx
  __int64 (__fastcall **v41)(); // rdi
  unsigned __int64 v43; // rdi
  __int64 *v44; // rsi
  char v45; // al
  char **v46; // rax
  int v47; // r12d
  __int64 v48; // rsi
  char *v49; // rbx
  char *v50; // rbp
  char *v51; // rdi
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rbx
  __int64 (__fastcall **v55)(); // rbp
  int v56; // ebp
  bool v57; // cl
  bool v58; // r11
  __int64 v59; // rsi
  bool v60; // r10
  bool v61; // r9
  __int64 v62; // rdi
  bool v63; // r8
  bool v64; // al
  __int32 v65; // r12d
  __int32 v66; // r13d
  void *v67; // r15
  __int64 v68; // rdi
  __int64 *v69; // rsi
  _QWORD *v70; // rdi
  __int64 v71; // rax
  __int64 (*v72)(void); // rdx
  __int64 v73; // rcx
  __int64 (*v74)(void); // rax
  char **v75; // rdx
  unsigned __int64 v76; // rax
  char v77; // dl
  __int64 (__fastcall **v78)(); // rbx
  __int64 (__fastcall **v79)(); // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // rax
  int v88; // ebx
  __int64 v89; // rsi
  __int64 *v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r12
  unsigned __int8 v97; // r13
  __int64 v98; // rdx
  __int64 v99; // rbp
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // rdi
  __int64 v105; // rax
  __int64 *v106; // rdx
  __int64 *v107; // rbp
  __int64 *v108; // rbx
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rdx
  __int64 *v112; // [rsp+8h] [rbp-1F0h] BYREF
  __int64 (__fastcall **v113)(); // [rsp+10h] [rbp-1E8h]
  __int128 *v114; // [rsp+18h] [rbp-1E0h]
  __int32 v115; // [rsp+20h] [rbp-1D8h]
  int v116; // [rsp+24h] [rbp-1D4h]
  __m128i v117; // [rsp+28h] [rbp-1D0h]
  __int64 v118; // [rsp+38h] [rbp-1C0h]
  __int64 v119; // [rsp+40h] [rbp-1B8h]
  _QWORD *v120; // [rsp+48h] [rbp-1B0h]
  __m256i *v121; // [rsp+50h] [rbp-1A8h]
  char **v122; // [rsp+58h] [rbp-1A0h]
  __int128 v123; // [rsp+60h] [rbp-198h] BYREF
  __int64 v124; // [rsp+70h] [rbp-188h]
  __int64 (__fastcall **v125)(); // [rsp+80h] [rbp-178h] BYREF
  __int64 (__fastcall **v126)(); // [rsp+88h] [rbp-170h]
  __int64 v127; // [rsp+A8h] [rbp-150h] BYREF
  __m256i v128; // [rsp+C0h] [rbp-138h] BYREF
  __int64 v129; // [rsp+E0h] [rbp-118h]
  __m128i v130; // [rsp+E8h] [rbp-110h] BYREF
  __int64 v131; // [rsp+F8h] [rbp-100h]
  char v132; // [rsp+100h] [rbp-F8h]
  __int64 v133; // [rsp+108h] [rbp-F0h]
  __int64 v134; // [rsp+110h] [rbp-E8h]
  __int64 v135; // [rsp+118h] [rbp-E0h]
  void *ptr[2]; // [rsp+120h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+130h] [rbp-C8h] BYREF
  int v138; // [rsp+140h] [rbp-B8h]
  __m128i v139; // [rsp+148h] [rbp-B0h] BYREF
  __int64 v140; // [rsp+158h] [rbp-A0h]
  char v141; // [rsp+160h] [rbp-98h]
  __int64 v142; // [rsp+168h] [rbp-90h]
  __int64 v143; // [rsp+170h] [rbp-88h]
  __int64 v144; // [rsp+178h] [rbp-80h]

  v7 = sub_19C4DF0(**a1, a2, a3);
  if ( v7 == 1 )
    return 0;
  v12 = v7 & 0xFFFFFFFFFFFFFFFELL;
  v13 = sub_17031A0(v7 & 0xFFFFFFFFFFFFFFFELL, *a1 + 2, v8, v9, v10, v11);
  if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v15 = *(_BYTE *)(v12 + 1);
  v16 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *a1 + 2;
  v18 = (v15 >> 1) & 3;
  if ( a3 )
  {
    v19 = *a1 + 2;
    v112 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    v20 = sub_15B8100(v19, v13);
    v16 = (__int64 *)(v20 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v13 = v20;
      v18 = 1;
    }
    else
    {
      v16 = v112;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v112 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xEF) != 0x22 )
        return 0;
    }
    v17 = *a1 + 2;
  }
  v112 = v17;
  v21 = sub_15B8A80(v17, v13, 0, 0, (__int64)v17, v14);
  v25 = (__int64 (__fastcall **)())sub_15B7F90(v112, v21, v22, v23, (__int64)v112, v24);
  if ( v25 && (*((_BYTE *)v25 + 28) & 0x7Fu) - 58 <= 3 )
  {
    v28 = *(_BYTE *)(a4 + 64);
    v132 = 0;
    if ( v28 )
    {
      v29 = *(_QWORD *)(a4 + 24);
      v128.m256i_i64[0] = *(_QWORD *)a4;
      v128.m256i_i32[2] = *(_DWORD *)(a4 + 8);
      *(__int64 *)((char *)&v128.m256i_i64[1] + 4) = *(_QWORD *)(a4 + 12);
      v128.m256i_i32[5] = *(_DWORD *)(a4 + 20);
      v128.m256i_i64[3] = (__int64)&v130;
      if ( v29 == a4 + 40 )
      {
        v130 = _mm_loadu_si128((const __m128i *)(a4 + 40));
      }
      else
      {
        v128.m256i_i64[3] = v29;
        v130.m128i_i64[0] = *(_QWORD *)(a4 + 40);
      }
      v30 = *(_QWORD *)(a4 + 32);
      *(_QWORD *)(a4 + 24) = a4 + 40;
      v31 = *(_BYTE *)(a4 + 56);
      *(_QWORD *)(a4 + 32) = 0;
      v129 = v30;
      *(_BYTE *)(a4 + 40) = 0;
      LOBYTE(v131) = v31;
      v132 = 1;
    }
    v32 = (__int64)a1[1];
    v33 = 0;
    v34 = (char *)*a1[2];
    v35 = **a1;
    v36 = v16[1];
    if ( (v36 & 8) != 0 )
      v33 = *(__int64 *)((char *)&qword_18 + (v36 & 0xFFFFFFFFFFFFFFF0LL));
    *(_DWORD *)(v32 + 288) = v18;
    v123 = 0;
    *(_BYTE *)(v32 + 292) = 1;
    *(_QWORD *)(v32 + 280) = v33 | ((unsigned __int8)v13 | (unsigned __int8)v36) & 7;
    *(_BYTE *)(v32 + 216) = 1;
    v124 = 0;
    if ( v28 )
    {
      v113 = v25;
      v114 = &v123;
      sub_17120F0((char **)&v123, nullptr, &v128);
      v37 = v124;
      v112 = *((__int64 **)&v123 + 1);
      v25 = v113;
    }
    else
    {
      v37 = 0;
      v112 = nullptr;
      v114 = &v123;
    }
    v38 = _mm_loadh_ps((const double *)&v112);
    si128.m128i_i64[0] = v37;
    v112 = (__int64 *)ptr;
    *(__m128 *)ptr = v38;
    v123 = 0;
    v113 = v25 + 8;
    v124 = 0;
    sub_16FE930(&v125, v32, (__int64)(v25 + 8), v13, (__int64 *)ptr);
    sub_1705410((__int64)v112);
    v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 656) + 8LL) + 8LL);
    sub_1A65010(v35, (_DWORD)v113, 3, (unsigned int)&v125, (v39 & 4) != 0, 1, (v39 & 0x20) != 0);
    if ( (*(_BYTE *)(*(_QWORD *)(v35 + 232) + 1LL) & 8) != 0 && *(_QWORD *)(v32 + 8) != *(_QWORD *)v32 )
    {
      if ( (*(_BYTE *)(*v16 + 17) & 4) != 0 )
      {
LABEL_20:
        v40 = v112;
        ptr[1] = (void *)"template";
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
        v139 = 0;
        ptr[0] = nullptr;
        v138 = 0;
        v140 = 0;
        v141 = v141 & 0x80 | 0x40;
        v142 = 0;
        v143 = 0;
        v144 = 0;
        sub_1706C30(v32, (__int64)v112);
        sub_1705410((__int64)(v40 + 5));
      }
      else
      {
        while ( v34 )
        {
          if ( v34[8] >= 0 )
          {
            v43 = *((_QWORD *)v34 + 45);
            if ( v43 )
            {
              if ( !(unsigned __int8)sub_B8E180(v43) )
                break;
              goto LABEL_20;
            }
          }
          v34 = *(char **)v34;
        }
      }
    }
    v125 = &off_2C4EFD0;
    sub_1705410((__int64)&v127);
    nullsub_1203(&v125);
    sub_1705410((__int64)v114);
    if ( !v132 )
      return 1;
    v41 = (__int64 (__fastcall **)())v128.m256i_i64[3];
    if ( (__m128i *)v128.m256i_i64[3] == &v130 )
      return 1;
LABEL_23:
    operator delete(v41);
    return 1;
  }
  v44 = (__int64 *)*v16;
  v45 = *(_BYTE *)(*v16 + 16);
  if ( v45 == 50 )
  {
    v46 = (char **)a1[2];
    v112 = (__int64 *)ptr;
    v47 = (a3 == 0) + 1;
    sub_1701760((__int64)ptr, v44, *v46);
    sub_173A6C0((__int64)&v125, (__int64)ptr);
    v48 = si128.m128i_u32[0];
    if ( si128.m128i_i32[0] )
    {
      v49 = (char *)ptr[0];
      v50 = (char *)ptr[0] + 64 * (unsigned __int64)si128.m128i_u32[0];
      do
      {
        if ( *(_QWORD *)v49 != -4096 && *(_QWORD *)v49 != -8192 )
        {
          if ( v49[40] )
          {
            v51 = *((char **)v49 + 2);
            if ( v51 != v49 + 32 )
              free(v51);
          }
        }
        v49 += 64;
      }
      while ( v50 != v49 );
      v48 = si128.m128i_u32[0];
    }
    operator delete(ptr[0], v48 << 6, 8);
    v54 = (__int64)v125;
    v55 = v126;
    if ( v125 != v126 )
    {
      v113 = v126;
      v56 = v47;
      v121 = &v128;
      v122 = (char **)&v130;
      v120 = (_QWORD *)a4;
      do
      {
        if ( *(_DWORD *)(v54 + 40) == v56 )
        {
          v69 = *a1;
          v70 = (_QWORD *)(*a1)[1];
          v71 = *v70;
          v72 = *(__int64 (**)(void))(*v70 + 48LL);
          if ( (char *)v72 == (char *)sub_15A1860 )
          {
            v73 = (__int64)(v70 + 3);
          }
          else
          {
            v81 = v72();
            v69 = *a1;
            v73 = v81;
            v70 = (_QWORD *)(*a1)[1];
            v71 = *v70;
          }
          v74 = *(__int64 (**)(void))(v71 + 40);
          if ( (char *)v74 == (char *)sub_15A1850 )
          {
            v75 = (char **)v70[6];
          }
          else
          {
            v114 = (__int128 *)v73;
            v80 = v74();
            v69 = *a1;
            v73 = (__int64)v114;
            v75 = (char **)v80;
          }
          v76 = sub_1701C10(v54, *v69, v75, v73, v52, v53);
          v128.m256i_i64[0] = 0;
          v128.m256i_i64[1] = v76;
          *(__m128i *)&v128.m256i_u64[2] = _mm_load_si128((const __m128i *)&xmmword_23AA960);
          LODWORD(v129) = 0;
          v130 = 0;
          v132 = v132 & 0x80 | 0x40;
          v131 = 0;
          v133 = 0;
          v77 = *((_BYTE *)v120 + 64);
          v134 = 0;
          v135 = 0;
          if ( v77 )
          {
            sub_1712640(v122, nullptr, v120);
            v67 = (void *)v128.m256i_i64[0];
            v66 = v128.m256i_i32[4];
            LODWORD(v114) = v128.m256i_i32[6];
            v118 = v133;
            v115 = v128.m256i_i32[7];
            v119 = v134;
            v65 = v128.m256i_i32[5];
            v116 = v129;
            v62 = v131;
            v59 = v135;
            v117 = v130;
            v77 = v132 & 1;
            v63 = (v132 & 2) != 0;
            v61 = (v132 & 4) != 0;
            v60 = (v132 & 8) != 0;
            v58 = (v132 & 0x10) != 0;
            v57 = (v132 & 0x20) != 0;
            v64 = (v132 & 0x40) != 0;
          }
          else
          {
            v119 = 0;
            v57 = 0;
            v58 = 0;
            v59 = 0;
            v116 = 0;
            v60 = 0;
            v61 = 0;
            v62 = 0;
            v118 = 0;
            v63 = 0;
            v64 = 1;
            v65 = 0;
            v66 = 40;
            v67 = nullptr;
            v117 = 0u;
            v115 = 72;
            LODWORD(v114) = 3;
          }
          v140 = v62;
          ptr[0] = v67;
          v144 = v59;
          si128.m128i_i64[0] = __PAIR64__(v65, v66);
          ptr[1] = (void *)v128.m256i_i64[1];
          si128.m128i_i64[1] = __PAIR64__(v115, (unsigned int)v114);
          v130 = 0u;
          v138 = v116;
          v131 = 0;
          v139 = v117;
          v141 = (v64 << 6)
               | (32 * v57) & 0xBF
               | (16 * v58) & 0xBF
               | (8 * v60) & 0x8F
               | (4 * v61) & 0x8F
               | (2 * v63) & 0x83
               | v141 & 0x80
               | v77 & 1;
          v68 = (__int64)a1[1];
          v142 = v118;
          v143 = v119;
          sub_1706C30(v68, (__int64)v112);
          sub_1705410((__int64)(v112 + 5));
          sub_1705410((__int64)&v121[1].m256i_i64[1]);
        }
        v54 += 56;
      }
      while ( v113 != (__int64 (__fastcall **)())v54 );
      v78 = v126;
      v55 = v125;
      if ( v126 != v125 )
      {
        do
        {
          if ( *((_BYTE *)v55 + 32) )
          {
            v79 = (__int64 (__fastcall **)())v55[1];
            if ( v79 != v55 + 3 )
              free(v79);
          }
          v55 += 7;
        }
        while ( v78 != v55 );
        v55 = v125;
      }
    }
    if ( !v55 )
      return 1;
    v41 = v55;
    goto LABEL_23;
  }
  v82 = *(unsigned __int8 *)(*(_QWORD *)(v44[1] & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( a3 )
  {
    if ( (_BYTE)v82 != 34 )
      return 1;
  }
  else
  {
    if ( (_BYTE)v82 == 34 )
    {
      if ( !*(_BYTE *)(a4 + 64) )
      {
        si128.m128i_i8[4] = 1;
        ptr[0] = &si128.m128i_u64[1];
        ptr[1] = &word_10;
        si128.m128i_i32[0] = 0;
        v91 = *v16;
        v112 = (__int64 *)ptr;
        v92 = sub_F67AB0(v91, (__int64)v44, v82, v26, v27);
        if ( v92 )
        {
          v96 = (__int64)a1[1];
          v97 = *(_BYTE *)a1[4];
          v98 = **a1;
          v99 = *(_QWORD *)(v98 + 544);
          v100 = sub_A5E7C0(v92, (__int64)v44, v98, v94, v95);
          v44 = (__int64 *)sub_9C7D40(v100, (__int64)v44, v101, v102, v103);
          sub_171DC00((__int64)a1[3], (__int64)v44, 1, 1, v99, (__int64)ptr, v96, v97, 0, 1);
        }
        v104 = *v16;
        if ( *(_BYTE *)(*v16 + 16) != 34 )
          v104 = sub_F63050(v104, v44, v93, v94);
        v105 = sub_A5E9B0(v104, (__int64)v44, v93, v94, v95);
        v107 = v106;
        v108 = (__int64 *)v105;
        if ( (__int64 *)v105 != v106 )
        {
          do
          {
            v109 = *v108++;
            sub_171DC00(
              (__int64)a1[3],
              v109,
              1,
              1,
              *(_QWORD *)(**a1 + 544),
              (__int64)v112,
              (__int64)a1[1],
              *(_BYTE *)a1[4],
              0,
              0);
          }
          while ( v107 != v108 );
        }
        if ( !si128.m128i_i8[4] )
          free(ptr[0]);
        return 1;
      }
      return 0;
    }
    v82 = (unsigned int)(v82 - 35);
    if ( (unsigned int)v82 > 1 )
      return 1;
  }
  if ( !*(_BYTE *)(a4 + 64) )
  {
    if ( v45 == 34 || (v44 = (__int64 *)sub_16FF130(*v16, (__int64)v44, v82, v26)) != nullptr )
    {
      v83 = sub_A5E7C0((__int64)v44, (__int64)v44, v82, v26, v27);
      v87 = sub_9C7D40(v83, (__int64)v44, v84, v85, v86);
    }
    else
    {
      v110 = *v16;
      v111 = (unsigned int)*(unsigned __int8 *)(*v16 + 16) - 35;
      if ( (unsigned int)v111 > 1 )
        v110 = sub_F63050(v110, 0, v111, v26);
      v87 = sub_9C7D40(v110, 0, v111, v26, v27);
    }
    if ( v87 )
    {
      v88 = v87 + 48;
      v89 = (__int64)a1[1];
      memset(&v128, 0, 24);
      sub_16FE930(ptr, v89, v87 + 48, v13, v128.m256i_i64);
      sub_1705410((__int64)&v128);
      v90 = a1[1];
      v90[25] = (__int64)sub_16FE620;
      v90[26] = 0;
      LOBYTE(v90) = *(_DWORD *)((*a1)[1] + 8);
      sub_1A65010(
        **a1,
        v88,
        3,
        (unsigned int)ptr,
        ((unsigned __int8)v90 & 4) != 0,
        0,
        ((unsigned __int8)v90 & 0x20) != 0);
      ptr[0] = &off_2C4EFD0;
      sub_1705410((__int64)&v139);
      nullsub_1203(ptr);
    }
    return 1;
  }
  return 0;
}
