unsigned __int64 __fastcall sub_173EAA0(
        __int64 *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  _BYTE *v6; // r15
  int v9; // eax
  int v10; // eax
  char *v11; // r9
  char *v12; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int16 v22; // ax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r12
  char *v26; // r15
  char *v27; // rbx
  _BYTE *i; // rax
  __int64 v29; // rsi
  unsigned int v30; // ecx
  __int64 v31; // rdi
  __int64 *v32; // rbx
  __int64 *v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rdi
  _QWORD *v36; // r15
  _QWORD *v37; // rbp
  _QWORD *v38; // rdi
  _QWORD *v39; // r14
  _QWORD *v40; // rbx
  char *v41; // rdi
  unsigned __int64 v43; // rax
  __int16 v44; // cx
  __int64 v45; // rdx
  _DWORD *v46; // rsi
  _DWORD *v47; // rdi
  unsigned __int64 v48; // rax
  __int64 v49; // rsi
  char v50; // al
  __int64 v51; // rdx
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  const void *v54; // r9
  __int16 v55; // ax
  signed __int64 v56; // rax
  __int64 v57; // r8
  char v58; // al
  char v59; // dl
  void *v60; // rdi
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 *v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rsi
  _QWORD *v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  int v70; // edx
  __int64 v71; // rdi
  char *v72; // rdi
  __int64 v73; // rsi
  unsigned __int64 v74; // rax
  size_t v75; // rdx
  __int64 v76; // r15
  __int64 *v77; // r14
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdx
  unsigned int v86; // [rsp+8h] [rbp-21E0h]
  __int64 v87; // [rsp+10h] [rbp-21D8h]
  int v88; // [rsp+10h] [rbp-21D8h]
  __int64 v89; // [rsp+10h] [rbp-21D8h]
  size_t nb; // [rsp+18h] [rbp-21D0h]
  size_t na; // [rsp+18h] [rbp-21D0h]
  __int64 n; // [rsp+18h] [rbp-21D0h]
  _QWORD *v93; // [rsp+20h] [rbp-21C8h]
  __m128i *v94; // [rsp+30h] [rbp-21B8h]
  size_t v95; // [rsp+38h] [rbp-21B0h]
  void *v96; // [rsp+40h] [rbp-21A8h] BYREF
  __int64 v97; // [rsp+48h] [rbp-21A0h]
  _BYTE v98[64]; // [rsp+50h] [rbp-2198h] BYREF
  void *v99; // [rsp+90h] [rbp-2158h] BYREF
  __int64 v100; // [rsp+98h] [rbp-2150h]
  _BYTE v101[96]; // [rsp+A0h] [rbp-2148h] BYREF
  void *v102; // [rsp+100h] [rbp-20E8h] BYREF
  __int64 v103; // [rsp+108h] [rbp-20E0h]
  _BYTE v104[192]; // [rsp+110h] [rbp-20D8h] BYREF
  __m128i v105; // [rsp+1D0h] [rbp-2018h] BYREF
  __int64 v106; // [rsp+1E0h] [rbp-2008h] BYREF
  _BYTE v107[64]; // [rsp+1E8h] [rbp-2000h] BYREF
  void *v108[2]; // [rsp+228h] [rbp-1FC0h]
  __int64 v109; // [rsp+238h] [rbp-1FB0h]
  _QWORD *v110; // [rsp+240h] [rbp-1FA8h]
  __int64 v111; // [rsp+248h] [rbp-1FA0h]
  unsigned int v112; // [rsp+250h] [rbp-1F98h]
  __int64 v113; // [rsp+258h] [rbp-1F90h] BYREF
  __int128 v114; // [rsp+260h] [rbp-1F88h]
  __int64 v115; // [rsp+270h] [rbp-1F78h]
  __int64 v116; // [rsp+2E0h] [rbp-1F08h]
  _BYTE *v117; // [rsp+2F0h] [rbp-1EF8h] BYREF
  __int64 v118; // [rsp+2F8h] [rbp-1EF0h]
  _BYTE v119[2688]; // [rsp+300h] [rbp-1EE8h] BYREF
  void *v120; // [rsp+D80h] [rbp-1468h]
  __int64 v121; // [rsp+D88h] [rbp-1460h]
  int v122; // [rsp+D90h] [rbp-1458h]
  char v123; // [rsp+D94h] [rbp-1454h]
  _QWORD v124[17]; // [rsp+D98h] [rbp-1450h] BYREF
  int v125; // [rsp+E20h] [rbp-13C8h]
  __int64 v126; // [rsp+E28h] [rbp-13C0h]
  __int64 v127; // [rsp+E30h] [rbp-13B8h]
  void *ptr; // [rsp+E38h] [rbp-13B0h]
  __int64 v129; // [rsp+E40h] [rbp-13A8h]
  _BYTE v130[32]; // [rsp+E48h] [rbp-13A0h] BYREF
  __int64 *v131; // [rsp+E68h] [rbp-1380h]
  __int64 v132; // [rsp+E70h] [rbp-1378h]
  _QWORD v133[2]; // [rsp+E78h] [rbp-1370h] BYREF
  unsigned int v134; // [rsp+E88h] [rbp-1360h]
  int v135; // [rsp+E8Ch] [rbp-135Ch]
  __int64 v136; // [rsp+E90h] [rbp-1358h]
  char v137; // [rsp+E98h] [rbp-1350h]
  int v138; // [rsp+E9Ch] [rbp-134Ch]
  int v139; // [rsp+21A0h] [rbp-48h]

  if ( !a2 )
    return 0;
  v6 = a3;
  if ( (*(_WORD *)a2 & 0x1FF) == 0x13 )
  {
    v9 = *(_DWORD *)(a2 + 4);
    if ( !v9 )
      return 0;
    a2 = *(_QWORD *)(a2 + 8LL * (unsigned int)(v9 - 1) + 24);
    if ( !a1[1] || !a2 )
      return 0;
  }
  else if ( !a1[1] )
  {
    return 0;
  }
  if ( (*(_DWORD *)a2 & 0x10000) != 0 || a4 && !a3 )
    return 0;
  if ( !a4 )
  {
    v11 = (char *)a3;
    goto LABEL_107;
  }
  if ( !*a3 )
    return 0;
  v10 = 0;
  while ( ++v10 != a4 )
  {
    if ( !a3[v10] )
      return 0;
  }
  v11 = (char *)&a3[a4];
  if ( !((__int64)(8 * a4) >> 5) )
  {
    v12 = (char *)a3;
LABEL_104:
    v65 = (v11 - v12) >> 3;
    if ( v65 != 2 )
    {
      if ( v65 != 3 )
      {
        if ( v65 != 1 )
        {
LABEL_107:
          n = v11 - v6;
          v89 = (v11 - v6) >> 3;
          goto LABEL_26;
        }
LABEL_132:
        if ( (**(_DWORD **)v12 & 0x10000) == 0 )
        {
          n = 8 * a4;
          v89 = (__int64)(8 * a4) >> 3;
          goto LABEL_26;
        }
LABEL_96:
        n = v12 - v6;
        v89 = (v12 - v6) >> 3;
        goto LABEL_26;
      }
      if ( (**(_DWORD **)v12 & 0x10000) != 0 )
        goto LABEL_96;
      v12 += 8;
    }
    if ( (**(_DWORD **)v12 & 0x10000) != 0 )
      goto LABEL_96;
    v12 += 8;
    goto LABEL_132;
  }
  if ( (*(_DWORD *)*a3 & 0x10000) != 0 )
  {
    v89 = 0;
    n = 0;
  }
  else if ( (*(_DWORD *)a3[1] & 0x10000) != 0 )
  {
    v89 = 1;
    n = 8;
  }
  else if ( (*(_DWORD *)a3[2] & 0x10000) != 0 )
  {
    n = 16;
    v89 = 2;
  }
  else
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)a3[3] & 0x10000) != 0 )
      {
        n = (char *)(a3 + 3) - v6;
        v89 = n >> 3;
        goto LABEL_26;
      }
      v12 = (char *)(a3 + 4);
      if ( a3 + 4 == (_QWORD *)&v6[32 * ((__int64)(8 * a4) >> 5)] )
        goto LABEL_104;
      if ( (*(_DWORD *)a3[4] & 0x10000) != 0 )
        goto LABEL_96;
      if ( (*(_DWORD *)a3[5] & 0x10000) != 0 )
      {
        n = (char *)(a3 + 5) - v6;
        v89 = n >> 3;
        goto LABEL_26;
      }
      if ( (*(_DWORD *)a3[6] & 0x10000) != 0 )
        break;
      a3 += 4;
    }
    n = (char *)(a3 + 6) - v6;
    v89 = n >> 3;
  }
LABEL_26:
  v103 = 0x800000000LL;
  v102 = v104;
  v13 = sub_BFD550(a2);
  v17 = sub_C00A40(a2, a2, v14, v15, v16);
  v137 = 0;
  v21 = v17;
  v86 = v17;
  v117 = v119;
  v118 = 0x1000000000LL;
  v120 = v124;
  ptr = v130;
  v129 = 0x400000000LL;
  v121 = 16;
  v124[16] = 0;
  v125 = 0;
  v126 = 0;
  v127 = 0;
  v131 = v133;
  v132 = 0;
  v133[0] = 0;
  v133[1] = 1;
  v134 = v17;
  v135 = 5;
  v136 = 0;
  v138 = 0;
  v139 = 0;
  LOWORD(v17) = *(_WORD *)v13;
  v122 = 0;
  v22 = v17 & 0x1FF;
  v123 = 1;
  switch ( v22 )
  {
    case 24:
      sub_1BF4E10(*a1, v13, v6, v89, &v117, 1);
      goto LABEL_28;
    case 23:
      v105.m128i_i64[1] = 0x800000000LL;
      v105.m128i_i64[0] = (__int64)&v106;
      v116 = 0;
      v43 = *(_QWORD *)v13;
      if ( (*(_QWORD *)v13 & 0x80000) == 0 )
        goto LABEL_111;
      v44 = *(_WORD *)v13 & 0x1FF;
      v45 = 8LL * *(unsigned int *)(v13 + 4);
      v46 = (_DWORD *)(v13 + v45 + 80);
      if ( v44 == 24 )
        v46 = (_DWORD *)(v13 + v45 + 64);
      if ( !*v46 )
      {
LABEL_111:
        LODWORD(v94) = 0;
LABEL_77:
        v50 = sub_C95850(v13);
        v51 = 0;
        if ( !v50 )
          v51 = *(_QWORD *)(v13 + 56);
        v100 = 0xC00000000LL;
        v99 = v101;
        sub_17129C0((__int64)&v99, 1u, v51);
        v52 = (unsigned int)v100;
        v53 = (unsigned int)v100 + v89;
        if ( v53 > HIDWORD(v100) )
        {
          sub_2237220(&v99, v101, v53, 8);
          v52 = (unsigned int)v100;
        }
        if ( n )
        {
          memcpy((char *)v99 + 8 * v52, v6, n);
          LODWORD(v52) = v100;
        }
        LODWORD(v100) = v89 + v52;
        v54 = (const void *)(v13 + 80);
        v97 = 0x800000000LL;
        v55 = *(_WORD *)v13;
        v96 = v98;
        if ( (v55 & 0x1FF) == 0x18 )
          v54 = (const void *)(v13 + 64);
        v56 = 8LL * *(unsigned int *)(v13 + 4);
        v57 = v56 >> 3;
        if ( (unsigned __int64)v56 > 0x40 )
        {
          v95 = 8LL * *(unsigned int *)(v13 + 4);
          nb = (size_t)v54;
          v87 = v56 >> 3;
          sub_2237220(&v96, v98, v56 >> 3, 8);
          LODWORD(v57) = v87;
          v54 = (const void *)nb;
          v56 = v95;
          v72 = (char *)v96 + 8 * (unsigned int)v97;
        }
        else
        {
          if ( !v56 )
            goto LABEL_87;
          v72 = v98;
        }
        v88 = v57;
        memcpy(v72, v54, v56);
        LODWORD(v56) = v97;
        LODWORD(v57) = v88;
LABEL_87:
        LODWORD(v97) = v57 + v56;
        v58 = sub_C95850(v13);
        v59 = 0;
        if ( !v58 )
          v59 = *(_QWORD *)(v13 + 56) != 0;
        sub_1BF84A0(*a1, (unsigned int)&v96, (_DWORD)v99, v100, (unsigned int)&v117, (_DWORD)v94, 0, 1, v59);
        if ( v96 != v98 )
          free(v96);
        if ( v99 != v101 )
          free(v99);
        v60 = (void *)v105.m128i_i64[0];
        if ( (__int64 *)v105.m128i_i64[0] == &v106 )
          goto LABEL_28;
        goto LABEL_94;
      }
      v94 = &v105;
      if ( (v43 & 0x80000) == 0 )
        goto LABEL_77;
      v47 = (_DWORD *)(v13 + v45 + 80);
      if ( v44 == 24 )
        v47 = (_DWORD *)(v13 + v45 + 64);
      v48 = v43 >> 16;
      if ( (v48 & 8) != 0 )
      {
        if ( v44 == 24 )
        {
          if ( *(_DWORD *)(v13 + v45 + 64) )
          {
            v49 = v13 + v45 + 16LL * ((v48 & 8) != 0) + 64;
LABEL_76:
            sub_F1EA70(v47, v49, (__int64)&v105);
            v94 = &v105;
            goto LABEL_77;
          }
        }
        else if ( *(_DWORD *)(v13 + v45 + 80) )
        {
          v49 = v13 + v45 + 16LL * ((v48 & 8) != 0) + 80;
          goto LABEL_76;
        }
      }
      v49 = 0;
      goto LABEL_76;
    case 46:
      v21 = *(_QWORD *)(v13 + 24);
      break;
    case 71:
      v21 = *(_QWORD *)(v13 + 16);
      break;
    default:
      goto LABEL_112;
  }
  if ( (*(_BYTE *)(v21 + 28) & 0x7Fu) - 34 <= 5 )
  {
    if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0
      && ((v63 = (__int64 *)(*(_QWORD *)(v21 + 48) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(*v63 + 16) == 26)
       || sub_16FF100(*v63, v21, v61, v62)) )
    {
      v64 = *a1;
      v105.m128i_i64[0] = v21 | (*(_BYTE *)(v21 + 29) >> 5) & 3;
      sub_1BF10B0(v64, v21, v105.m128i_i32[0], (_DWORD)v6, v89, (unsigned int)&v117, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0);
    }
    else
    {
      v105.m128i_i64[1] = v21;
      v105.m128i_i32[0] = 0;
      sub_1706280((__int64)&v102, &v105);
    }
    goto LABEL_28;
  }
LABEL_112:
  v93 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL), v21, 0x800000000LL, v18, v19, v20);
  if ( !v93 )
  {
    v73 = v13;
    v74 = sub_15B6D10((__int64)(a1 + 2), v13);
    na = v75;
    v76 = v74;
    v77 = (__int64 *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (sub_F68450(*v77, v73, (__int64)v77, v78, v79) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      v77 = (__int64 *)(sub_F68450(*v77, v73, v80, v81, v82) & 0xFFFFFFFFFFFFFFF0LL);
    v83 = *v77;
    if ( *(_BYTE *)(*v77 + 16) == 26 || (v83 = sub_16FF100(*v77, v73, v80, v81)) != 0 )
    {
      if ( v89 && *(unsigned __int16 *)(v83 + 22) < (unsigned __int64)(v89 + 1) && *(char *)(v83 + 19) >= 0 )
        goto LABEL_28;
      if ( v76 )
      {
        v105.m128i_i32[0] = 3;
        v105.m128i_i64[1] = v76;
        v106 = na;
        sub_1706280((__int64)&v102, &v105);
        goto LABEL_28;
      }
    }
    else
    {
      v83 = *v77;
      if ( (unsigned int)*(unsigned __int8 *)(*v77 + 16) - 25 > 1 )
      {
        v85 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v83 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
        if ( (unsigned int)v85 > 1 )
          goto LABEL_28;
        v83 = sub_F63050(*v77, v73, v85, v84);
        if ( !v83 )
          goto LABEL_28;
      }
    }
    v105.m128i_i32[0] = 2;
    v105.m128i_i64[1] = v83;
    sub_1706280((__int64)&v102, &v105);
    goto LABEL_28;
  }
  if ( !(unsigned __int8)sub_1E63330(*a1, v86, *(_QWORD *)(v13 + 8), 1, 0) )
  {
    v66 = sub_168B6C0((__int64)a1) + 18264;
    v67 = (_QWORD *)*a1;
    v105.m128i_i64[1] = (__int64)v107;
    v110 = v67;
    v106 = 0x800000000LL;
    v111 = v66 | 6;
    *(_OWORD *)v108 = 0;
    v112 = v86;
    v105.m128i_i64[0] = 0;
    v109 = 0;
    sub_B85890(&v113, v66 | 6);
    v114 = 0;
    v115 = 0x101010000LL;
    sub_1A395A0(&v105);
    sub_1A48440(*a1, &v105, v93 + 8, 0);
    *(_WORD *)((char *)&v115 + 3) = 0;
    v100 = 0xC00000000LL;
    v99 = v101;
    sub_17129C0((__int64)&v99, 1u, v13);
    v68 = (unsigned int)v100;
    v69 = (unsigned int)v100 + v89;
    if ( v69 > HIDWORD(v100) )
    {
      sub_2237220(&v99, v101, v69, 8);
      v68 = (unsigned int)v100;
    }
    v70 = (int)v99;
    if ( n )
    {
      memcpy((char *)v99 + 8 * v68, v6, n);
      v70 = (int)v99;
      LODWORD(v68) = v100;
    }
    v71 = *a1;
    LODWORD(v100) = v89 + v68;
    sub_1BF84A0(v71, (unsigned int)&v105 + 8, v70, v89 + v68, (unsigned int)&v117, 0, 0, 1, 0);
    if ( v99 != v101 )
      free(v99);
    if ( BYTE3(v115) )
    {
      if ( v105.m128i_i32[0] == 5 )
      {
        if ( !BYTE4(v115) )
          goto LABEL_124;
        goto LABEL_152;
      }
      if ( !v108[1] || (*(_BYTE *)(v110[29] + 46LL) & 0x20) == 0 )
      {
LABEL_124:
        if ( v108[0] )
          sub_1A39780(v108[0]);
        v60 = (void *)v105.m128i_i64[1];
        if ( (_BYTE *)v105.m128i_i64[1] == v107 )
          goto LABEL_28;
LABEL_94:
        free(v60);
        goto LABEL_28;
      }
      sub_1663B80(v110, (__int64)&v105);
    }
    if ( !BYTE4(v115) || v105.m128i_i32[0] != 5 )
      goto LABEL_124;
LABEL_152:
    sub_1A445B0(v110, &v105);
    goto LABEL_124;
  }
LABEL_28:
  sub_173E490(*a1, (__int64)&v102, (__int64)&v117, v86, a4);
  v23 = sub_17007F0(*a1, (__int64)v102, (_QWORD *)(unsigned int)v103, (unsigned int)a4, a5, 0);
  v24 = 0;
  if ( (unsigned int)v118 | v125 & 0x3FFFFFFF )
    v24 = v23;
  v25 = v24;
  sub_1BD27A0(&v117);
  v26 = (char *)ptr;
  v27 = (char *)ptr + 8 * (unsigned int)v129;
  if ( ptr != v27 )
  {
    for ( i = ptr; ; i = ptr )
    {
      v29 = 0x40000000000LL;
      v30 = (unsigned int)((v26 - i) >> 3) >> 7;
      if ( v30 <= 0x1D )
        v29 = 4096LL << v30;
      v31 = *(_QWORD *)v26;
      v26 += 8;
      operator delete(v31, v29, 16);
      if ( v27 == v26 )
        break;
    }
  }
  v32 = v131;
  v33 = &v131[2 * (unsigned int)v132];
  if ( v131 != v33 )
  {
    do
    {
      v34 = v32[1];
      v35 = *v32;
      v32 += 2;
      operator delete(v35, v34, 16);
    }
    while ( v33 != v32 );
    v33 = v131;
  }
  if ( v33 != v133 )
    free(v33);
  if ( ptr != v130 )
    free(ptr);
  if ( !v123 )
    free(v120);
  v36 = v117;
  v37 = &v117[168 * (unsigned int)v118];
  if ( v117 != (_BYTE *)v37 )
  {
    do
    {
      while ( 1 )
      {
        v37 -= 21;
        v38 = (_QWORD *)v37[8];
        v39 = (_QWORD *)v37[9];
        v40 = v38;
        if ( v39 != v38 )
        {
          do
          {
            while ( 1 )
            {
              v41 = (char *)v40[3];
              if ( v41 == (char *)(v40 + 5) )
                break;
              operator delete(v41);
              v40 += 8;
              if ( v39 == v40 )
                goto LABEL_49;
            }
            v40 += 8;
          }
          while ( v39 != v40 );
LABEL_49:
          v38 = (_QWORD *)v37[8];
        }
        if ( !v38 )
          break;
        operator delete(v38);
        if ( v36 == v37 )
          goto LABEL_52;
      }
    }
    while ( v36 != v37 );
LABEL_52:
    v37 = v117;
  }
  if ( v37 != (_QWORD *)v119 )
    free(v37);
  if ( v102 != v104 )
    free(v102);
  return v25;
}
