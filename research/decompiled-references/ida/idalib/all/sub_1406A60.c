void __fastcall sub_1406A60(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbp
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int8 *v19; // rbx
  _BOOL8 v20; // rdx
  unsigned __int8 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rbx
  int v26; // esi
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  _BYTE *v33; // r13
  size_t v34; // r12
  int v35; // r14d
  __int64 v36; // rax
  __int64 v37; // r9
  char v38; // al
  char v39; // bl
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // rax
  const __m128i *v47; // r14
  __int64 v48; // rbp
  const __m128i *v49; // r12
  unsigned __int64 v50; // rbp
  __int64 v51; // rax
  __m128i *v52; // rbx
  __int32 v53; // eax
  __int64 *v54; // rdi
  __int32 *v55; // rax
  size_t v56; // rax
  int v57; // eax
  int v58; // eax
  __int64 v59; // rdx
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  char v65; // al
  __int64 v66; // rdx
  int v67; // esi
  _QWORD *v68; // rdi
  signed __int64 *v69; // rax
  signed __int64 i; // rdx
  unsigned __int64 v71; // rdx
  signed __int64 v72; // rdx
  size_t v73; // rax
  unsigned int v74; // ebx
  _DWORD *v75; // rax
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned __int64 v78; // r12
  __int64 v79; // r13
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // r12
  __int64 v83; // rbp
  __int64 v84; // rax
  int *v85; // rsi
  __int64 v86; // rdi
  char v87; // dl
  __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rdi
  unsigned int v91; // esi
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // r15
  unsigned __int8 *v97; // r14
  __int64 v98; // rbx
  __int64 v99; // rbp
  _BOOL8 v100; // r13
  void *v101; // rdi
  __int64 v102; // rax
  size_t v103; // rax
  __int64 v104; // [rsp+8h] [rbp-F0h]
  __int64 v105; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v106; // [rsp+8h] [rbp-F0h]
  int v107; // [rsp+8h] [rbp-F0h]
  __int64 v108; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v109; // [rsp+10h] [rbp-E8h]
  __int64 v110; // [rsp+10h] [rbp-E8h]
  __int64 v111; // [rsp+10h] [rbp-E8h]
  __int64 v112; // [rsp+18h] [rbp-E0h]
  __int64 v113; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v114; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v115; // [rsp+28h] [rbp-D0h]
  _BOOL8 v116; // [rsp+28h] [rbp-D0h]
  __int64 v117; // [rsp+28h] [rbp-D0h]
  __int64 v118; // [rsp+30h] [rbp-C8h]
  void *v119; // [rsp+40h] [rbp-B8h] BYREF
  signed __int64 v120; // [rsp+48h] [rbp-B0h]
  _BYTE v121[16]; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int8 *v122; // [rsp+60h] [rbp-98h] BYREF
  __int64 v123; // [rsp+68h] [rbp-90h]
  __int64 v124; // [rsp+70h] [rbp-88h]
  __int64 v125; // [rsp+78h] [rbp-80h]
  __int64 v126; // [rsp+80h] [rbp-78h]
  __int64 v127; // [rsp+88h] [rbp-70h]
  __int64 v128; // [rsp+90h] [rbp-68h]
  __int64 v129; // [rsp+98h] [rbp-60h]
  __int64 v130; // [rsp+A0h] [rbp-58h]
  __int64 v131; // [rsp+A8h] [rbp-50h]
  __int64 v132; // [rsp+B0h] [rbp-48h]
  __int64 v133; // [rsp+B8h] [rbp-40h]

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)a2;
  if ( !sub_9B4AA0(*(_QWORD *)a2, "*") )
  {
    sub_1404830(a1, a2);
    return;
  }
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 96);
  v5 = *(_QWORD *)(a1 + 48);
  v112 = v5;
  v6 = *(unsigned int *)(a2 + 8);
  if ( (unsigned int)v6 <= 1 )
    goto LABEL_22;
  *(_QWORD *)(a1 + 48) = 0;
  v7 = 0;
  v8 = 0;
  v104 = (unsigned int)(v6 - 2);
  v9 = 0;
  while ( 1 )
  {
    v16 = (__int64 *)(40 * v7 + *(_QWORD *)v3);
    v17 = v16[1];
    v18 = *v16;
    if ( !v8 )
      break;
    v10 = sub_FF2620(v8, v18, v17);
    if ( !v10 )
      goto LABEL_11;
LABEL_5:
    *(_QWORD *)(v2 + 48) = v10;
    if ( !v7 )
      v9 = v10;
    v15 = v7 + 1;
    if ( v104 == v7 )
      goto LABEL_17;
LABEL_8:
    v8 = *(_QWORD *)(v2 + 48);
    v7 = v15;
  }
  v10 = sub_13F8CB0(*(_QWORD *)(v2 + 16), v18, v17);
  if ( v10 )
    goto LABEL_5;
LABEL_11:
  sub_FC70B0((__int64)&v122, *(_QWORD *)(v2 + 8), *(_DWORD *)(*(_QWORD *)v3 + 40 * v7 + 32), 1087);
  sub_AEC220(&v122, *(_BYTE **)(*(_QWORD *)v3 + 40 * v7), *(_QWORD *)(*(_QWORD *)v3 + 40 * v7 + 8));
  v19 = v122;
  v20 = *(_QWORD *)(v2 + 48) != 0;
  if ( !v122 )
  {
    v88 = v123;
    v89 = *(_DWORD *)(v123 + 14976);
    if ( v89 )
    {
      v92 = (unsigned int)(v89 - 1);
      *(_DWORD *)(v123 + 14976) = v92;
      v19 = *(unsigned __int8 **)(v88 + 8 * v92 + 14848);
      v93 = *((unsigned int *)v19 + 134);
      *v19 = 0;
      v94 = *((_QWORD *)v19 + 66);
      *((_DWORD *)v19 + 106) = 0;
      v95 = v94 + (v93 << 6);
      if ( v94 != v95 )
      {
        v117 = v2;
        v96 = v7;
        v97 = v19;
        v98 = v95;
        v118 = v3;
        v99 = v94;
        v100 = v20;
        do
        {
          while ( 1 )
          {
            v98 -= 64;
            v101 = *(void **)(v98 + 24);
            if ( v101 == (void *)(v98 + 40) )
              break;
            operator delete(v101);
            if ( v99 == v98 )
              goto LABEL_95;
          }
        }
        while ( v99 != v98 );
LABEL_95:
        v20 = v100;
        v19 = v97;
        v3 = v118;
        v7 = v96;
        v2 = v117;
      }
      *((_DWORD *)v19 + 134) = 0;
    }
    else
    {
      v116 = *(_QWORD *)(v2 + 48) != 0;
      v19 = (unsigned __int8 *)operator new(0x3A0u);
      *v19 = 0;
      *((_QWORD *)v19 + 12) = v19 + 112;
      *((_QWORD *)v19 + 16) = v19 + 144;
      *((_QWORD *)v19 + 20) = v19 + 176;
      *((_QWORD *)v19 + 24) = v19 + 208;
      *((_QWORD *)v19 + 28) = v19 + 240;
      *((_QWORD *)v19 + 32) = v19 + 272;
      *((_QWORD *)v19 + 36) = v19 + 304;
      *((_QWORD *)v19 + 40) = v19 + 336;
      *((_QWORD *)v19 + 44) = v19 + 368;
      *((_QWORD *)v19 + 48) = v19 + 400;
      *((_QWORD *)v19 + 52) = v19 + 432;
      *((_QWORD *)v19 + 13) = 0;
      v19[112] = 0;
      *((_QWORD *)v19 + 17) = 0;
      v19[144] = 0;
      *((_QWORD *)v19 + 21) = 0;
      v19[176] = 0;
      *((_QWORD *)v19 + 25) = 0;
      v19[208] = 0;
      *((_QWORD *)v19 + 29) = 0;
      v19[240] = 0;
      *((_QWORD *)v19 + 33) = 0;
      v19[272] = 0;
      *((_QWORD *)v19 + 37) = 0;
      v19[304] = 0;
      *((_QWORD *)v19 + 41) = 0;
      v19[336] = 0;
      *((_QWORD *)v19 + 45) = 0;
      v19[368] = 0;
      *((_QWORD *)v19 + 49) = 0;
      v19[400] = 0;
      *((_QWORD *)v19 + 53) = 0x800000000LL;
      v20 = v116;
      *((_QWORD *)v19 + 66) = v19 + 544;
      *((_QWORD *)v19 + 67) = 0x600000000LL;
    }
    v122 = v19;
  }
  v19[*v19 + 1] = 2;
  v21 = v122;
  v22 = *v122;
  *v122 = v22 + 1;
  *(_QWORD *)&v21[8 * v22 + 16] = v20;
  v23 = *(_QWORD *)(v2 + 48);
  if ( v23 )
  {
    v24 = (__int64 *)sub_FEEE40(v23);
    sub_FEEE60((__int64)&v119, v24, 0);
  }
  else
  {
    v119 = v121;
    v56 = j__strlen(&byte_22F0C30);
    sub_13F28B0(&v119, &byte_22F0C30, (__int64)(&byte_22F0C30 + v56));
  }
  sub_AEC220(&v122, v119, v120);
  if ( v119 != v121 )
    operator delete(v119);
  sub_AEA040((__int64)&v122);
  *(_BYTE *)(v2 + 41) = 1;
  v15 = v7 + 1;
  if ( v104 != v7 )
    goto LABEL_8;
LABEL_17:
  v25 = *(_QWORD *)(v2 + 16);
  if ( !v9 )
    goto LABEL_20;
  v26 = *(_DWORD *)(v9 + 32);
  v27 = 0;
  if ( v26 )
  {
    v90 = *(_QWORD *)v25;
    v91 = v26 & 0x7FFFFFFF;
    if ( v91 < *(_DWORD *)(*(_QWORD *)v25 + 476LL) || v91 >= *(_DWORD *)(v90 + 480) )
    {
      v27 = sub_101D590(v90, v91);
      v25 = *(_QWORD *)(v2 + 16);
    }
    else
    {
      v27 = *(_DWORD *)(v90 + 472);
    }
  }
  if ( v27 == *(_DWORD *)(v2 + 24) )
  {
LABEL_20:
    v5 = *(_QWORD *)(v2 + 48);
    v4 = *(_QWORD *)v3;
    v6 = *(unsigned int *)(v3 + 8);
    goto LABEL_23;
  }
  v28 = sub_1366CC0(*(_QWORD **)v2, *(_DWORD *)(v2 + 24), v11, v12, v13, v14);
  sub_1406830(v25, v9, v28, v29, v30, v31);
  v5 = *(_QWORD *)(v2 + 48);
  v4 = *(_QWORD *)v3;
  v6 = *(unsigned int *)(v3 + 8);
LABEL_22:
  v25 = *(_QWORD *)(v2 + 16);
LABEL_23:
  v32 = v4 + 40 * v6 - 40;
  v33 = *(_BYTE **)v32;
  v34 = *(_QWORD *)(v32 + 8);
  v35 = *(_DWORD *)(v32 + 32);
  v36 = sub_13F8D70(v25, *(_QWORD *)v32, v34, v5);
  v37 = v36;
  if ( !v36 )
  {
    v61 = sub_13FCE90(
            *(_QWORD *)(v2 + 16),
            v33,
            v34,
            *(_QWORD *)(v2 + 48),
            (*(_BYTE *)(v3 + 128) & 2) != 0,
            *(_BYTE *)(v3 + 128) & 1);
    *(_QWORD *)(v2 + 48) = v61;
    goto LABEL_53;
  }
  v38 = *(_BYTE *)(v36 + 904);
  v39 = 1;
  v40 = *(_BYTE *)(v37 + 905) & 1;
  v41 = v38 & 8;
  if ( (*(_BYTE *)(v3 + 128) & 2) == 0 && (v38 & 0x10) == 0 )
  {
    v42 = *(_QWORD *)(v37 + 40);
    if ( v42 )
    {
      while ( (*(_BYTE *)(v42 + 904) & 0x10) == 0 )
      {
        v42 = *(_QWORD *)(v42 + 40);
        if ( !v42 )
          goto LABEL_29;
      }
      v39 = 1;
    }
    else
    {
LABEL_29:
      v39 = 0;
    }
  }
  v43 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL);
  if ( *(_BYTE *)(v43 + 201) >> 5 == 1 && v34 == *(_QWORD *)(v43 + 496) )
  {
    if ( !v34
      || (v113 = v37,
          v109 = *(_BYTE *)(v37 + 905) & 1,
          v106 = v41,
          v57 = memcmp(*(const void **)(v43 + 488), v33, v34),
          v41 = v106,
          v40 = v109,
          v37 = v113,
          !v57) )
    {
      v115 = v40;
      v114 = v41;
      v110 = v37;
      v107 = sub_A80750(*(_QWORD *)v2, *(_DWORD *)(v37 + 32));
      v58 = sub_A80750(*(_QWORD *)v2, v35);
      v37 = v110;
      v41 = v114;
      v40 = v115;
      if ( v58 != v107 )
        goto LABEL_43;
    }
  }
  LOBYTE(v41) = v40 | v41;
  if ( (_BYTE)v41 || *(_DWORD *)(v37 + 32) == v35 || v39 )
    goto LABEL_43;
  if ( *(_QWORD *)(v37 + 40)
    || (v59 = *(_QWORD *)(v2 + 16),
        v122 = (unsigned __int8 *)v37,
        v111 = v37,
        v108 = v59,
        v60 = sub_13FCC40(v59 + 472, (__int64 *)&v122, v59, v40, v41, v37),
        v37 = v111,
        *(_DWORD *)v60 >= *(_DWORD *)(v108 + 464)) )
  {
    v105 = v37;
    sub_FC70B0((__int64)&v122, *(_QWORD *)(v2 + 8), v35, 1089);
    sub_AEC220(&v122, v33, v34);
    sub_AEA040((__int64)&v122);
    sub_FC70B0((__int64)&v122, *(_QWORD *)(v2 + 8), *(_DWORD *)(v105 + 32), 1271);
    sub_AEA040((__int64)&v122);
    *(_BYTE *)(v2 + 41) = 1;
  }
  else
  {
    v61 = sub_13FCF10(*(_QWORD *)(v2 + 16), v33, v34, (*(_BYTE *)(v3 + 128) & 2) != 0, v111);
    *(_QWORD *)(v2 + 48) = v61;
LABEL_53:
    *(_DWORD *)(v61 + 32) = v35;
    v65 = *(_BYTE *)(v3 + 100);
    if ( (v65 & 1) != 0 || *(_BYTE *)(v2 + 40) )
    {
      *(_BYTE *)(*(_QWORD *)(v2 + 48) + 904LL) |= 0x40u;
      v65 = *(_BYTE *)(v3 + 100);
    }
    v66 = *(_QWORD *)(v2 + 48);
    if ( (v65 & 2) != 0 )
    {
      *(_BYTE *)(v66 + 904) |= 0x80u;
      v65 = *(_BYTE *)(v3 + 100);
      v66 = *(_QWORD *)(v2 + 48);
    }
    if ( (v65 & 8) != 0 )
    {
      *(_BYTE *)(v66 + 905) |= 0x20u;
      v66 = *(_QWORD *)(v2 + 48);
    }
    v67 = *(_DWORD *)(v2 + 24);
    v68 = *(_QWORD **)v2;
    *(_QWORD *)(v66 + 48) = *(_QWORD *)(v2 + 32);
    v69 = (signed __int64 *)sub_1366CC0(v68, v67, v66, v62, v63, v64);
    for ( i = v69[1]; i; i = *(_QWORD *)(v71 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v71 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v71 )
        break;
      v69 = (signed __int64 *)v71;
    }
    v72 = *v69;
    v119 = v69 + 4;
    v120 = v72;
    v73 = j__strlen("module.private.modulemap");
    if ( sub_9EC680(&v119, "module.private.modulemap", v73)
      || (v103 = j__strlen("module_private.map"), sub_9EC680(&v119, "module_private.map", v103)) )
    {
      *(_BYTE *)(*(_QWORD *)(v2 + 48) + 905LL) |= 0x40u;
    }
    v74 = 0;
    v75 = (_DWORD *)sub_101FFD0(*(_QWORD *)v2, *(_DWORD *)(*(_QWORD *)v2 + 520LL));
    if ( v75 )
      v74 = *v75 & 0x7FFFFFFF;
    if ( (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(v2 + 16) + 32LL) + 280LL) & 2) != 0 )
    {
      v78 = *(_QWORD *)(v2 + 8);
      v79 = *(_QWORD *)(v78 + 32);
      if ( (unsigned __int8)sub_FD3830(v79, 0x552u, v74, v78, v76, v77) != 1
        && (unsigned __int8)sub_FD3830(v79, 0x551u, v74, v78, v80, v81) != 1
        && (*(_BYTE *)(*(_QWORD *)(v2 + 48) + 905LL) & 0x40) != 0 )
      {
        sub_13FD6B0(v2, *(_DWORD *)(v3 + 96));
      }
    }
    v82 = *(_QWORD *)(v3 + 104);
    v83 = *(_QWORD *)(v3 + 112);
    if ( v82 != v83 )
    {
      v122 = (unsigned __int8 *)v2;
      v123 = v2;
      v124 = v2;
      v125 = v2;
      v126 = v2;
      v127 = v2;
      v128 = v2;
      v129 = v2;
      v130 = v2;
      v131 = v2;
      v132 = v2;
      v133 = v2;
      v84 = *(unsigned __int8 *)(v82 + 136);
      if ( (_BYTE)v84 == 0xFF )
LABEL_106:
        abort();
      while ( 1 )
      {
        v85 = (int *)v82;
        v82 += 144;
        ((void (__fastcall *)(__int64, int *))funcs_1407222[v84])((__int64)&v122, v85);
        if ( v83 == v82 )
          break;
        v122 = (unsigned __int8 *)v2;
        v123 = v2;
        v124 = v2;
        v125 = v2;
        v126 = v2;
        v127 = v2;
        v128 = v2;
        v129 = v2;
        v130 = v2;
        v131 = v2;
        v132 = v2;
        v133 = v2;
        v84 = *(unsigned __int8 *)(v82 + 136);
        if ( (_BYTE)v84 == 0xFF )
          goto LABEL_106;
      }
    }
    v86 = *(_QWORD *)(v2 + 48);
    v87 = *(_BYTE *)(v86 + 904);
    if ( (v87 & 0x10) != 0 )
    {
      v102 = *(_QWORD *)(v86 + 40);
      if ( !v102 )
      {
LABEL_102:
        if ( !*(_DWORD *)(v86 + 1608) )
        {
          sub_13FB450(v86);
          v86 = *(_QWORD *)(v2 + 48);
          v87 = *(_BYTE *)(v86 + 904);
        }
        goto LABEL_78;
      }
      while ( (*(_BYTE *)(v102 + 904) & 0x10) == 0 )
      {
        v102 = *(_QWORD *)(v102 + 40);
        if ( !v102 )
          goto LABEL_102;
      }
      if ( (*(_BYTE *)(v86 + 904) & 5) == 0 )
      {
LABEL_37:
        v44 = sub_FEEE40(v86);
        sub_FEF280(v44, 0);
        v45 = sub_FEEE40(*(_QWORD *)(v2 + 48));
        v46 = *(_QWORD *)(v2 + 48);
        v47 = *(const __m128i **)(v46 + 704);
        v48 = 5LL * *(unsigned int *)(v46 + 712);
        v49 = &v47[v48];
        v50 = 0xCCCCCCCCCCCCCCCDLL * ((v48 * 16) >> 4);
        v51 = *(unsigned int *)(v45 + 712);
        if ( v50 + v51 > *(unsigned int *)(v45 + 716) )
        {
          sub_13FB900(v45 + 704, v50 + v51);
          v51 = *(unsigned int *)(v45 + 712);
        }
        v52 = (__m128i *)(*(_QWORD *)(v45 + 704) + 80 * v51);
        if ( v47 != v49 )
        {
          do
          {
            v53 = v47->m128i_i32[0];
            v54 = &v52->m128i_i64[1];
            v47 += 5;
            v52->m128i_i32[0] = v53;
            v52->m128i_i32[1] = v47[-5].m128i_i32[1];
            v55 = &v52[1].m128i_i32[2];
            v52 += 5;
            v52[-5].m128i_i64[1] = (__int64)v55;
            sub_13F27F0(v54, (_BYTE *)v47[-5].m128i_i64[1], v47[-5].m128i_i64[1] + v47[-4].m128i_i64[0]);
            v52[-3].m128i_i8[8] = v47[-3].m128i_i8[8];
            v52[-3].m128i_i8[9] = v47[-3].m128i_i8[9];
            v52[-2] = _mm_loadu_si128(v47 - 2);
            v52[-1] = _mm_loadu_si128(v47 - 1);
          }
          while ( v49 != v47 );
          LODWORD(v51) = *(_DWORD *)(v45 + 712);
        }
        *(_DWORD *)(v45 + 712) = v50 + v51;
      }
    }
    else
    {
LABEL_78:
      if ( (v87 & 5) == 0 && *(_QWORD *)(v86 + 40) )
        goto LABEL_37;
    }
LABEL_43:
    *(_QWORD *)(v2 + 48) = v112;
  }
}
