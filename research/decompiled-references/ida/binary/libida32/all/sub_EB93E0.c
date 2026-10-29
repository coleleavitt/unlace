__m128 *__fastcall sub_EB93E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const char *a6, char a7, char a8)
{
  __int64 v12; // rbx
  __int64 *v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  const char *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE *v25; // rax
  _BYTE *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  char v29; // r12
  bool v30; // al
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r12
  unsigned __int64 i; // r14
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 *v47; // rax
  __int64 *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 *v53; // r14
  __int64 v54; // r12
  int v55; // ecx
  const char *v56; // r9
  int v57; // edx
  int v58; // r8d
  __m128 *result; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r14
  __int64 v65; // r12
  __int64 v66; // rdx
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // r8
  unsigned __int64 v71; // r13
  _QWORD *v72; // rdx
  __int64 v73; // rax
  const char *v74; // r12
  unsigned __int64 v75; // rax
  __int64 v76; // r14
  unsigned __int64 v77; // r12
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  __int64 v80; // r13
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  unsigned int v88; // edx
  __int64 *v89; // rsi
  __int64 v90; // r8
  unsigned __int64 v91; // rax
  _BYTE *v92; // rax
  __int64 v93; // r12
  __int64 v94; // rax
  _BYTE *v95; // rdx
  _BYTE *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  unsigned __int64 v99; // rsi
  __int64 v100; // r12
  _BYTE *v101; // rax
  _BYTE *v102; // rax
  unsigned int v103; // r12d
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 (*v106)(); // rax
  __int64 v107; // rax
  __int64 v108; // rax
  unsigned __int8 (*v109)(void); // rax
  int v110; // esi
  int v111; // r9d
  __int64 v112; // rsi
  __int64 v113; // r8
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 (*v116)(); // rax
  __int64 v117; // rax
  unsigned int v118; // r12d
  __int64 v119; // rax
  _BYTE *v120; // rdx
  _BYTE *v121; // rax
  __int64 v122; // r12
  _BYTE *v123; // rax
  __int64 v124; // r12
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // [rsp-10h] [rbp-118h]
  __m128 *v130; // [rsp-10h] [rbp-118h]
  __int64 v131; // [rsp-8h] [rbp-110h]
  __int64 v133; // [rsp+10h] [rbp-F8h]
  __int64 v134; // [rsp+10h] [rbp-F8h]
  unsigned __int64 v135; // [rsp+18h] [rbp-F0h]
  __int64 v136; // [rsp+18h] [rbp-F0h]
  __int64 *v137; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v138; // [rsp+20h] [rbp-E8h]
  __int64 *v139; // [rsp+28h] [rbp-E0h]
  __int64 v140; // [rsp+28h] [rbp-E0h]
  int v141; // [rsp+28h] [rbp-E0h]
  __int64 v142; // [rsp+28h] [rbp-E0h]
  __int64 v143; // [rsp+38h] [rbp-D0h]
  int v144; // [rsp+40h] [rbp-C8h]
  bool v145; // [rsp+47h] [rbp-C1h]
  bool v147; // [rsp+50h] [rbp-B8h]
  __int64 *v148; // [rsp+58h] [rbp-B0h]
  int v149; // [rsp+58h] [rbp-B0h]
  _BYTE v150[24]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v151[24]; // [rsp+78h] [rbp-90h] BYREF
  __m128 ptr; // [rsp+90h] [rbp-78h] BYREF
  __int128 v153; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE *v154; // [rsp+B0h] [rbp-58h]
  char v155; // [rsp+B8h] [rbp-50h]
  int v156; // [rsp+BCh] [rbp-4Ch]
  _BYTE *v157; // [rsp+C0h] [rbp-48h]

  v12 = a1;
  v13 = (__int64 *)sub_EBA840(a3, a2);
  v14 = 0;
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 < 3 )
    v14 = a2;
  v145 = (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 < 3;
  v133 = v14;
  sub_EB27C0(a1, a4, a5);
  v19 = *(_QWORD *)(a2 + 48);
  if ( v19 )
    v20 = (const char *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
  else
    v20 = (const char *)sub_A56D30(a3, a2, v15, v16, v17, v18);
  sub_F52FB0(a1, v20);
  if ( a6 )
  {
    v25 = *(_BYTE **)(a1 + 32);
    if ( *(_QWORD *)(a1 + 24) <= (unsigned __int64)v25 )
    {
      a1 = sub_2257CD0(a1, 32);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = v25 + 1;
      *v25 = 32;
    }
    v20 = a6;
    sub_971800(a1, a6);
  }
  if ( v133 )
  {
    v20 = *(const char **)(v133 + 104);
    sub_6E4DB0((__int64 *)v20 + 12, (__int64)v20, v21, v22, v23, v24);
    if ( (*(_BYTE *)(*(_QWORD *)(v133 + 128) + 1LL) & 2) != 0 )
    {
      v20 = " (empty)";
      sub_971800(v12, " (empty)");
    }
  }
  v26 = *(_BYTE **)(v12 + 32);
  if ( *(_QWORD *)(v12 + 24) <= (unsigned __int64)v26 )
  {
    v20 = byte_9 + 1;
    sub_2257CD0(v12, 10);
  }
  else
  {
    v27 = (__int64)(v26 + 1);
    *(_QWORD *)(v12 + 32) = v26 + 1;
    *v26 = 10;
  }
  v144 = a5 + 1;
  if ( !v133 )
  {
    result = (__m128 *)sub_B5ABC0(a2, (__int64)v20, v27, v22, v23, v24);
    v64 = (__int64)result;
    if ( !result )
    {
      if ( !a7 )
        return result;
      sub_971800(v12, "           | ");
      sub_2259350(v12, (unsigned int)(2 * a5));
      v114 = sub_971800(v12, "[sizeof=");
      sub_2257BF0(v114, *v13);
      goto LABEL_103;
    }
LABEL_40:
    v65 = v64;
    if ( *(char *)(v64 + 29) < 0 )
      v65 = sub_B4E9E0(v64);
    v66 = *(unsigned int *)(v65 + 68);
    if ( (v66 & 0xFFFFFFF0) == 0 )
    {
      sub_B5AD70(v65, (__int64)v20, v66, v61, v62, v63);
      LODWORD(v66) = *(_DWORD *)(v65 + 68);
    }
    v67 = *(_QWORD *)(v13[6] + 8LL * (((unsigned int)v66 >> 4) - 1));
    v68 = v67;
    v69 = sub_A742B0(a3, v67);
    v71 = v69 + a4;
    v72 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*v72 + 16LL) == 48 )
    {
      v73 = *(_QWORD *)(v64 + 40);
      v74 = &byte_22CD811;
      if ( (v73 & 7) == 0 )
      {
        v75 = v73 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v75 )
          LODWORD(v74) = *(_QWORD *)(v75 + 16) + 16;
      }
      v20 = (const char *)sub_F3D1D0(*v72, v68, v72, a4, v70);
      sub_EB93E0(v12, (_DWORD)v20, a3, v71, v144, (_DWORD)v74, 0, 1);
      v62 = v129;
      v63 = v131;
LABEL_50:
      while ( 1 )
      {
        result = (__m128 *)(*(_QWORD *)(v64 + 8) & 0xFFFFFFFFFFFFFFF8LL);
        v64 = (__int64)result;
        if ( !result )
          goto LABEL_51;
        if ( (result[1].m128_i8[12] & 0x7Fu) - 49 <= 2 )
          goto LABEL_40;
      }
    }
    if ( (*(_BYTE *)(v64 + 68) & 1) != 0 )
    {
      v149 = sub_A74320(a3, v69);
      v141 = sub_B54430(v64);
      v153 = 0;
      *(_QWORD *)v150 = v151;
      *(__m128i *)&v150[8] = _mm_load_si128(xmmword_2384EE0);
      ptr.m128_i32[2] = 2;
      ptr.m128_u64[0] = (unsigned __int64)&off_2BC1F40;
      v155 = 0;
      v157 = v150;
      v156 = 1;
      v154 = nullptr;
      sub_2257B70(&ptr, 0, 0, 0);
      v94 = sub_2257BF0(&ptr, v71);
      v95 = *(_BYTE **)(v94 + 32);
      if ( (unsigned __int64)v95 >= *(_QWORD *)(v94 + 24) )
      {
        sub_2257CD0(v94, 58);
      }
      else
      {
        *(_QWORD *)(v94 + 32) = v95 + 1;
        *v95 = 58;
      }
      if ( v141 )
      {
        v118 = v67 - v149;
        v119 = sub_2257BD0(&ptr, v118);
        v120 = *(_BYTE **)(v119 + 32);
        if ( (unsigned __int64)v120 >= *(_QWORD *)(v119 + 24) )
        {
          v119 = sub_2257CD0(v119, 45);
        }
        else
        {
          *(_QWORD *)(v119 + 32) = v120 + 1;
          *v120 = 45;
        }
        sub_2257BD0(v119, v118 + v141 - 1);
      }
      else
      {
        v96 = v154;
        if ( (unsigned __int64)v154 >= *((_QWORD *)&v153 + 1) )
        {
          sub_2257CD0(&ptr, 45);
        }
        else
        {
          ++v154;
          *v96 = 45;
        }
      }
      ptr.m128_u64[0] = (unsigned __int64)&unk_2C4C288;
      sub_2257A60(&ptr);
      ptr = *(__m128 *)v150;
      *(_QWORD *)&v153 = 0x20000000ALL;
      v97 = sub_2258DF0(v12, &ptr);
      sub_971800(v97, " | ");
      sub_2259350(v12, (unsigned int)(2 * v144));
      if ( *(_BYTE **)v150 != v151 )
        free(*(void **)v150);
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 2320) + 104LL) & 0x20) != 0 )
        goto LABEL_76;
    }
    else
    {
      sub_EB27C0(v12, v69 + a4, v144);
      if ( (*(_BYTE *)(*(_QWORD *)(a3 + 2320) + 104LL) & 0x20) != 0 )
      {
LABEL_76:
        v98 = *(_QWORD *)&byte_8[*(_QWORD *)(v64 + 48) & 0xFFFFFFFFFFFFFFF0LL];
        v99 = v98 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v98 | *(_BYTE *)(v64 + 48)) & 7;
LABEL_77:
        v100 = sub_F52FB0(v12, v99);
        v101 = *(_BYTE **)(v100 + 32);
        if ( (unsigned __int64)v101 >= *(_QWORD *)(v100 + 24) )
        {
          v100 = sub_2257CD0(v100, 32);
        }
        else
        {
          *(_QWORD *)(v100 + 32) = v101 + 1;
          *v101 = 32;
        }
        v20 = (const char *)v100;
        sub_B4EFB0(v64, v100);
        v102 = *(_BYTE **)(v100 + 32);
        if ( (unsigned __int64)v102 >= *(_QWORD *)(v100 + 24) )
        {
          v20 = byte_9 + 1;
          sub_2257CD0(v100, 10);
        }
        else
        {
          v60 = (__int64)(v102 + 1);
          *(_QWORD *)(v100 + 32) = v102 + 1;
          *v102 = 10;
        }
        goto LABEL_50;
      }
    }
    v99 = *(_QWORD *)(v64 + 48);
    goto LABEL_77;
  }
  v28 = v13[9];
  v147 = 0;
  v29 = *(_BYTE *)(v28 + 40) & 1;
  v135 = *(_QWORD *)(v28 + 48) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(__int64 *)(v28 + 32) >= 0 )
    v147 = *(_QWORD *)(v28 + 56) == 0;
  v30 = sub_EB4DA0(v133, (__int64)v20, v27, *(_QWORD *)(v28 + 48) & 0xFFFFFFFFFFFFFFF8LL, v23, v24);
  if ( v135 || !v30 || *(_BYTE *)(*(_QWORD *)(a3 + 17448) + 472LL) )
  {
    if ( v29 )
    {
      sub_EB27C0(v12, a4, v144);
      v92 = *(_BYTE **)(v12 + 32);
      if ( (unsigned __int64)v92 >= *(_QWORD *)(v12 + 24) )
      {
        v93 = sub_2257CD0(v12, 40);
      }
      else
      {
        v93 = v12;
        *(_QWORD *)(v12 + 32) = v92 + 1;
        *v92 = 40;
      }
      sub_B4EFB0(a2, v93);
      v20 = " vftable pointer)\n";
      sub_971800(v93, " vftable pointer)\n");
    }
  }
  else
  {
    sub_EB27C0(v12, a4, v144);
    v123 = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)v123 >= *(_QWORD *)(v12 + 24) )
    {
      v124 = sub_2257CD0(v12, 40);
    }
    else
    {
      v124 = v12;
      *(_QWORD *)(v12 + 32) = v123 + 1;
      *v123 = 40;
    }
    sub_B4EFB0(a2, v124);
    v20 = " vtable pointer)\n";
    sub_971800(v124, " vtable pointer)\n");
  }
  ptr.m128_u64[0] = (unsigned __int64)&v153;
  ptr.m128_u64[1] = 0x400000000LL;
  v34 = sub_A56850(v133, (__int64)v20, v31, (__int64)&v153, v32, v33);
  v38 = v37;
  for ( i = v34; v38 != i; ++ptr.m128_i32[2] )
  {
    while ( (*(_BYTE *)(i + 12) & 1) != 0 )
    {
      i += 24LL;
      if ( v38 == i )
        goto LABEL_27;
    }
    v40 = sub_EB2840(*(__int64 **)(i + 16));
    v41 = sub_F3F530(*(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF0LL));
    v42 = ptr.m128_u32[2];
    v43 = ptr.m128_u32[2] + 1LL;
    if ( v43 > ptr.m128_u32[3] )
    {
      v142 = v41;
      sub_22134E0(&ptr, &v153, v43, 8);
      v42 = ptr.m128_u32[2];
      v41 = v142;
    }
    i += 24LL;
    *(_QWORD *)(ptr.m128_u64[0] + 8 * v42) = v41;
  }
LABEL_27:
  v44 = 8LL * ptr.m128_u32[2];
  v137 = (__int64 *)ptr.m128_u64[0];
  v45 = v44 + ptr.m128_u64[0];
  v139 = (__int64 *)(v44 + ptr.m128_u64[0]);
  v46 = v44 >> 3;
  if ( v44 )
  {
    while ( 1 )
    {
      v47 = (__int64 *)operator new(8 * v46, (const std::nothrow_t *)&std::nothrow);
      if ( v47 )
        break;
      v46 >>= 1;
      if ( !v46 )
        goto LABEL_92;
    }
    v148 = v47;
    sub_EB9300(v137, v139, v47, (void *)v46, v13);
    v48 = v148;
  }
  else
  {
LABEL_92:
    sub_EB7840(v137, v139, v13, v45, v35, v36);
    v48 = nullptr;
  }
  v20 = (const char *)&std::nothrow;
  operator delete(v48, (const std::nothrow_t *)&std::nothrow);
  v52 = (__int64)(v13 + 9);
  v53 = (__int64 *)ptr.m128_u64[0];
  v138 = ptr.m128_u64[0] + 8LL * ptr.m128_u32[2];
  if ( ptr.m128_u64[0] != v138 )
  {
    do
    {
      v54 = *v53;
      v55 = sub_EB7560(v13 + 9, *v53, v49, v52, v50, v51) + a4;
      if ( v135 == v54 )
      {
        v56 = "(primary base)";
        v57 = a3;
        v58 = a5 + 1;
        v20 = (const char *)v135;
      }
      else
      {
        v56 = "(base)";
        v57 = a3;
        v20 = (const char *)v54;
        v58 = a5 + 1;
      }
      ++v53;
      sub_EB93E0(v12, (_DWORD)v20, v57, v55, v58, (_DWORD)v56, 0, 0);
    }
    while ( (__int64 *)v138 != v53 );
  }
  if ( v147 )
  {
    sub_EB27C0(v12, *(_QWORD *)(v13[9] + 32) + a4, v144);
    v121 = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)v121 >= *(_QWORD *)(v12 + 24) )
    {
      v122 = sub_2257CD0(v12, 40);
    }
    else
    {
      v122 = v12;
      *(_QWORD *)(v12 + 32) = v121 + 1;
      *v121 = 40;
    }
    sub_B4EFB0(a2, v122);
    v20 = " vbtable pointer)\n";
    sub_971800(v122, " vbtable pointer)\n");
  }
  if ( (__int128 *)ptr.m128_u64[0] != &v153 )
    free((void *)ptr.m128_u64[0]);
  result = (__m128 *)sub_B5ABC0(a2, (__int64)v20, v49, v52, v50, v51);
  v64 = (__int64)result;
  if ( result )
    goto LABEL_40;
LABEL_51:
  if ( !a8 || !v145 )
  {
    if ( !a7 )
      return result;
    sub_971800(v12, "           | ");
    v103 = 2 * a5;
    sub_2259350(v12, (unsigned int)(2 * a5));
    v104 = sub_971800(v12, "[sizeof=");
    sub_2257BF0(v104, *v13);
    if ( v145 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(a3 + 17448) + 472LL) )
        goto LABEL_87;
LABEL_119:
      v126 = sub_971800(v12, ", dsize=");
      sub_2257BF0(v126, v13[1]);
LABEL_87:
      v105 = sub_971800(v12, ", align=");
      sub_2257BF0(v105, v13[2]);
      v106 = *(__int64 (**)())(**(_QWORD **)(a3 + 17448) + 832LL);
      if ( v106 != sub_A321E0 && (unsigned __int8)v106() )
      {
        v127 = sub_971800(v12, ", preferredalign=");
        sub_2257BF0(v127, v13[3]);
      }
      sub_971800(v12, ",\n");
      sub_971800(v12, "           | ");
      sub_2259350(v12, v103);
      v107 = sub_971800(v12, " nvsize=");
      sub_2257BF0(v107, *(_QWORD *)v13[9]);
      v108 = sub_971800(v12, ", nvalign=");
      sub_2257BF0(v108, *(_QWORD *)(v13[9] + 8));
      v109 = *(unsigned __int8 (**)(void))(**(_QWORD **)(a3 + 17448) + 832LL);
      if ( (char *)v109 != (char *)sub_A321E0 )
      {
        if ( v109() )
        {
          v128 = sub_971800(v12, ", preferrednvalign=");
          sub_2257BF0(v128, *(_QWORD *)(v13[9] + 16));
        }
      }
      return (__m128 *)sub_971800(v12, "]\n");
    }
LABEL_103:
    v115 = sub_971800(v12, ", align=");
    sub_2257BF0(v115, v13[2]);
    v116 = *(__int64 (**)())(**(_QWORD **)(a3 + 17448) + 832LL);
    if ( v116 != sub_A321E0 && (unsigned __int8)v116() )
    {
      v117 = sub_971800(v12, ", preferredalign=");
      sub_2257BF0(v117, v13[3]);
    }
    return (__m128 *)sub_971800(v12, "]\n");
  }
  v76 = v13[9];
  v136 = v76 + 88;
  v77 = sub_A56900(v133, (__int64)v20, v60, v61, v62, v63);
  v140 = v78;
  result = &ptr;
  if ( v77 != v78 )
  {
    while ( 1 )
    {
      v79 = sub_EB2840(*(__int64 **)(v77 + 16));
      v80 = sub_F3F530(*(_QWORD *)(v79 & 0xFFFFFFFFFFFFFFF0LL));
      v85 = sub_EB78C0(v13 + 9, v80, v81, v82, v83, v84);
      v86 = *(_QWORD *)(v76 + 88);
      v134 = a4 + v85;
      v87 = *(unsigned int *)(v76 + 104);
      if ( !(_DWORD)v87 )
        break;
      v88 = (v87 - 1) & (((unsigned int)v80 >> 9) ^ ((unsigned int)v80 >> 4));
      v89 = (__int64 *)(v86 + 24LL * v88);
      v90 = *v89;
      if ( v80 != *v89 )
      {
        v110 = 1;
        if ( v90 == -4096 )
          break;
        while ( 1 )
        {
          v111 = v110 + 1;
          v112 = ((_DWORD)v87 - 1) & (v88 + v110);
          v88 = v112;
          v89 = (__int64 *)(v86 + 24 * v112);
          v113 = *v89;
          if ( v80 == *v89 )
            break;
          v110 = v111;
          if ( v113 == -4096 )
            goto LABEL_96;
        }
      }
      sub_EB5530(&ptr, v89, (_QWORD *)(v86 + 24 * v87), v136, 1);
      v91 = ptr.m128_u64[0];
LABEL_57:
      if ( *(_BYTE *)(v91 + 16) )
      {
        sub_EB27C0(v12, v134 - 4, v144);
        v143 = sub_971800(v12, "(vtordisp for vbase ");
        sub_B4EFB0(v80, v143);
        sub_971800(v143, ")\n");
      }
      if ( v80 == (*(_QWORD *)(v13[9] + 48) & 0xFFFFFFFFFFFFFFF8LL) )
      {
        v77 += 24LL;
        sub_EB93E0(v12, v80, a3, v134, v144, (unsigned int)"(primary virtual base)", 0, 0);
        result = v130;
        if ( v77 == v140 )
          goto LABEL_61;
      }
      else
      {
        v77 += 24LL;
        result = (__m128 *)sub_EB93E0(v12, v80, a3, v134, v144, (unsigned int)"(virtual base)", 0, 0);
        if ( v140 == v77 )
          goto LABEL_61;
      }
    }
LABEL_96:
    sub_EB5530(&ptr, (_QWORD *)(v86 + 24 * v87), (_QWORD *)(v86 + 24 * v87), v136, 1);
    v91 = ptr.m128_u64[0];
    goto LABEL_57;
  }
LABEL_61:
  if ( a7 )
  {
    sub_971800(v12, "           | ");
    v103 = 2 * a5;
    sub_2259350(v12, (unsigned int)(2 * a5));
    v125 = sub_971800(v12, "[sizeof=");
    sub_2257BF0(v125, *v13);
    if ( *(_BYTE *)(*(_QWORD *)(a3 + 17448) + 472LL) )
      goto LABEL_87;
    goto LABEL_119;
  }
  return result;
}

