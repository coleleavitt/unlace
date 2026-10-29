void __fastcall sub_1A32910(__int64 a1, unsigned int *a2, __int64 *a3, __int64 a4, __m128 a5, __m128i a6)
{
  __int64 v9; // rdi
  int v10; // r11d
  unsigned int v11; // r12d
  __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  char v17; // r13
  _QWORD *v18; // r12
  __int64 v19; // rsi
  bool v20; // zf
  unsigned __int8 v21; // al
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128i *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // rbx
  __int64 i; // r12
  char v44; // al
  __int64 v45; // r13
  __int64 v46; // r9
  unsigned __int64 *v47; // r13
  unsigned __int64 *v48; // rbx
  __int64 v49; // r12
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r13
  __int64 v59; // rax
  __int64 *v60; // r9
  unsigned __int64 v61; // r15
  __int64 v62; // rdx
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // r13
  __int64 v66; // r12
  unsigned __int64 v67; // rax
  __int64 *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rbx
  unsigned int v72; // eax
  __int64 v73; // rax
  __int64 v74; // r9
  unsigned int v75; // r8d
  unsigned __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // r13
  bool v79; // al
  char v80; // cl
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // r8
  __int64 v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __m128i *v97; // [rsp+8h] [rbp-170h]
  __int64 v98; // [rsp+10h] [rbp-168h]
  __int64 v99; // [rsp+18h] [rbp-160h]
  __int64 *v100; // [rsp+18h] [rbp-160h]
  __int64 v101; // [rsp+18h] [rbp-160h]
  __int64 v102; // [rsp+18h] [rbp-160h]
  __int64 v103; // [rsp+18h] [rbp-160h]
  unsigned int v104; // [rsp+20h] [rbp-158h]
  unsigned int *v105; // [rsp+20h] [rbp-158h]
  __int64 v106; // [rsp+20h] [rbp-158h]
  __int64 v107; // [rsp+30h] [rbp-148h]
  __int64 v108; // [rsp+30h] [rbp-148h]
  bool v109; // [rsp+30h] [rbp-148h]
  __int64 v110; // [rsp+30h] [rbp-148h]
  unsigned int v111; // [rsp+38h] [rbp-140h]
  unsigned int v112; // [rsp+38h] [rbp-140h]
  char v113; // [rsp+38h] [rbp-140h]
  char v114; // [rsp+38h] [rbp-140h]
  __int64 v115; // [rsp+38h] [rbp-140h]
  __int64 v116; // [rsp+40h] [rbp-138h]
  __int64 v117; // [rsp+40h] [rbp-138h]
  char v118; // [rsp+40h] [rbp-138h]
  __int64 v119; // [rsp+58h] [rbp-120h] BYREF
  void *ptr; // [rsp+60h] [rbp-118h] BYREF
  __int64 v121; // [rsp+68h] [rbp-110h]
  _BYTE v122[64]; // [rsp+70h] [rbp-108h] BYREF
  __m128i v123; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v124; // [rsp+C0h] [rbp-B8h]
  __int64 v125; // [rsp+C8h] [rbp-B0h]
  __int64 v126; // [rsp+D0h] [rbp-A8h]
  __int64 v127; // [rsp+D8h] [rbp-A0h]
  __int64 v128; // [rsp+E0h] [rbp-98h]
  __int64 v129; // [rsp+E8h] [rbp-90h]
  __int64 v130; // [rsp+F0h] [rbp-88h]
  __int64 v131; // [rsp+F8h] [rbp-80h]
  int v132; // [rsp+100h] [rbp-78h]
  __int64 v133; // [rsp+108h] [rbp-70h]
  __int64 v134; // [rsp+110h] [rbp-68h]
  __int64 v135; // [rsp+118h] [rbp-60h]
  __int64 v136; // [rsp+120h] [rbp-58h]

  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 40) - 8);
  v98 = v9;
  *(_BYTE *)(*(_QWORD *)(v9 + 1592) + 84LL) = (*(_BYTE *)(a4 + 4) >> 4) & 3
                                            | *(_BYTE *)(*(_QWORD *)(v9 + 1592) + 84LL) & 0xFC;
  v10 = *((_DWORD *)a3 + 34);
  ptr = v122;
  v121 = 0x800000000LL;
  if ( !v10 )
  {
    v11 = a2[1];
    v99 = *(_QWORD *)(v9 + 1584);
    v104 = v11;
    v97 = *(__m128i **)(v9 + 1592);
LABEL_3:
    v12 = sub_A64670(*(_QWORD *)(a1 + 248), 0, 1, 0);
    LODWORD(v124) = 0;
    v123.m128i_i16[0] = v12;
    LODWORD(v125) = 0;
    v126 = 0;
    v127 = 0;
    v128 = 0;
    v129 = 0;
    v130 = 0;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    v135 = 0;
    v136 = 0;
    v123.m128i_i16[1] = v123.m128i_i16[1] & 0xF000 | 2;
    v123.m128i_i64[1] = 1;
    v13 = sub_15F1720(a1);
    if ( v13 )
      v123.m128i_i64[1] = v123.m128i_i64[1] & 0xFFFFFFFF000001FFLL | (unsigned int)(v13 << 9);
    v14 = *(_QWORD *)(a1 + 248);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x20) != 0 )
    {
      v91 = sub_A75AF0(v14);
      v14 = *(_QWORD *)(a1 + 248);
      v15 = v91;
    }
    else
    {
      v15 = *(_QWORD *)(v14 + 19072);
    }
    v16 = sub_A73610(v14, v15, nullptr, 0, &v123, 0);
    v17 = 0;
    v18 = sub_A81910(*(_QWORD **)(a1 + 248), v16, v11);
    goto LABEL_8;
  }
  sub_147B3A0((__int64)a3, &v123);
  v11 = *(_DWORD *)(a3[16] + 144LL * v123.m128i_u32[0] + 4);
  if ( !v11 )
    v11 = *((_DWORD *)a3 + 23);
  v104 = *((_DWORD *)a3 + 23);
  v97 = *(__m128i **)(v9 + 1592);
  v99 = *(_QWORD *)(v9 + 1584);
  v113 = *(_BYTE *)*a3 & 7;
  if ( !*((_DWORD *)a3 + 34) )
    goto LABEL_3;
  sub_184FA10(a1, (__int64)a3);
  v123.m128i_i32[0] = 0;
  sub_147B3A0((__int64)a3, &v123);
  v78 = a3[16] + 144LL * v123.m128i_u32[0];
  v79 = sub_15AC5E0((__int64)a3);
  v80 = *(_BYTE *)(v78 + 57) & 2;
  v109 = v80 != 0;
  if ( !*(_DWORD *)(v78 + 84) && v113 != 3 && !v79 )
  {
    v81 = *(_QWORD *)(v78 + 104);
    if ( !v81 )
    {
      v118 = *(_BYTE *)(v78 + 57) & 2;
      v115 = operator new(0x520u);
      sub_15DCD40(v115);
      *(_QWORD *)(v78 + 112) = v115;
      v95 = operator new(0x128u);
      v96 = *(_QWORD *)(v78 + 112);
      v81 = v95;
      *(_QWORD *)v95 &= 0xFFFFFFC000000000LL;
      *(_QWORD *)(v95 + 40) = v95 + 56;
      *(_QWORD *)(v95 + 72) = v96;
      *(_QWORD *)(v95 + 16) = 0;
      *(_QWORD *)(v95 + 24) = 0;
      *(_QWORD *)(v95 + 32) = 0;
      *(_QWORD *)(v95 + 48) = 0x200000000LL;
      *(_QWORD *)(v95 + 80) = v95 + 96;
      *(_QWORD *)(v95 + 88) = 0x200000000LL;
      *(_QWORD *)(v95 + 112) = 0;
      *(_QWORD *)(v95 + 120) = 0;
      *(_QWORD *)(v95 + 128) = 0;
      *(_QWORD *)(v95 + 136) = 0;
      *(_QWORD *)(v95 + 144) = 0;
      *(_QWORD *)(v95 + 152) = 0;
      *(_QWORD *)(v95 + 160) = 0;
      *(_QWORD *)(v95 + 168) = 0;
      *(_QWORD *)(v95 + 176) = 0;
      *(_QWORD *)(v95 + 184) = 0;
      *(_QWORD *)(v95 + 192) = 0;
      *(_QWORD *)(v95 + 200) = 0;
      *(_QWORD *)(v95 + 208) = 0;
      *(_QWORD *)(v95 + 216) = 0;
      *(_QWORD *)(v95 + 224) = 0;
      *(_QWORD *)(v95 + 232) = 0;
      *(_QWORD *)(v95 + 240) = 0;
      *(_QWORD *)(v95 + 248) = 0;
      *(_QWORD *)(v95 + 256) = 0;
      *(_QWORD *)(v95 + 264) = 0;
      *(_QWORD *)(v95 + 272) = 0;
      *(_WORD *)(v95 + 280) &= 0xF000u;
      v80 = v118;
      *(_QWORD *)(v95 + 288) = 0;
      *(_QWORD *)(v78 + 104) = v95;
    }
    v114 = v80;
    sub_15AF570(v81, 1, v11);
    v80 = v114;
  }
  if ( v80 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) != 0 && (*(_QWORD *)(v78 + 128) & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v82 = *(_QWORD *)&byte_8[*(_QWORD *)(v78 + 128) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v82 & 8) != 0 )
      {
        if ( (*(_DWORD *)((char *)&qword_18 + (v82 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v82 & 7)) >> 9 )
        {
          sub_168B9F0((__int64)&v123, (__int64 *)(a1 + 8), *(_DWORD *)(v78 + 136), 0x1359u, 0);
          sub_15F7200(&v123);
        }
      }
    }
  }
  v17 = v109;
  v18 = (_QWORD *)sub_1E85170(a1, a3);
  if ( (*(_BYTE *)(*(_QWORD *)(*v18 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1) != 0 )
    sub_1E535C0(a1, *a2, v18, 2);
LABEL_8:
  *(_BYTE *)(v98 + 1633) = *((_DWORD *)a3 + 34) != 0;
  if ( !(unsigned __int8)sub_147B3A0((__int64)a3, &v123)
    || (v123.m128i_i32[0] = 0,
        sub_147B3A0((__int64)a3, &v123),
        v73 = a3[16] + 144LL * v123.m128i_u32[0],
        *(_DWORD *)(v73 + 72) == 1)
    && (*(_BYTE *)(v73 + 56) & 2) == 0
    && (v92 = *(_QWORD **)(v73 + 96), !*v92)
    && (v93 = v92[2]) != 0
    && (v94 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v93 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL),
        *(_BYTE *)(v94 + 16) == 13)
    && ((*(_WORD *)(v94 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    LODWORD(v19) = v121;
    goto LABEL_10;
  }
  v123.m128i_i32[0] = 0;
  sub_147B3A0((__int64)a3, &v123);
  v19 = (unsigned int)v121;
  v74 = a3[16] + 144LL * v123.m128i_u32[0];
  if ( HIDWORD(v121) < (unsigned int)v121 )
  {
    v110 = a3[16] + 144LL * v123.m128i_u32[0];
    sub_2237220(&ptr, v122, (unsigned int)v121, 8);
    v19 = (unsigned int)v121;
    v74 = v110;
  }
  if ( *(_DWORD *)(v74 + 72) )
  {
    v75 = 0;
    while ( 1 )
    {
      v77 = *(_QWORD *)(*(_QWORD *)(v74 + 96) + 32LL * v75 + 16);
      *(_DWORD *)(v77 + 96) &= 0xFFF01FFF;
      if ( (unsigned int)v19 <= 0xFE )
      {
        *(_WORD *)(v77 + 98) = (16 * (unsigned __int8)v19) | *(_WORD *)(v77 + 98) & 0xF00F;
        v76 = v19 + 1;
        if ( v19 + 1 <= (unsigned __int64)HIDWORD(v121) )
          goto LABEL_67;
LABEL_70:
        v117 = v74;
        v112 = v75;
        v108 = v77;
        sub_2237220(&ptr, v122, v76, 8);
        v74 = v117;
        *((_QWORD *)ptr + (unsigned int)v121) = v108;
        v75 = v112 + 1;
        v19 = (unsigned int)(v121 + 1);
        LODWORD(v121) = v121 + 1;
        if ( *(_DWORD *)(v117 + 72) <= v112 + 1 )
          break;
      }
      else
      {
        v116 = v74;
        v111 = v75;
        v107 = v77;
        sub_B74850(v77, v19);
        v19 = (unsigned int)v121;
        v77 = v107;
        v75 = v111;
        v76 = (unsigned int)v121 + 1LL;
        v74 = v116;
        if ( v76 > HIDWORD(v121) )
          goto LABEL_70;
LABEL_67:
        ++v75;
        *((_QWORD *)ptr + v19) = v77;
        v19 = (unsigned int)(v121 + 1);
        LODWORD(v121) = v121 + 1;
        if ( *(_DWORD *)(v74 + 72) <= v75 )
          break;
      }
    }
  }
LABEL_10:
  v20 = (*(_BYTE *)*a3 & 7) == 3;
  v21 = *(_BYTE *)(*a3 + 4);
  v22 = a3[103];
  v123.m128i_i32[2] = 0;
  v123.m128i_i64[0] = v22;
  sub_1A2D870(
    a1,
    (__int64)v97,
    *a2,
    v104,
    (__int64)&v123,
    (__int64)v18,
    (v21 >> 4) & 3,
    2 * v20,
    (__int64 *)ptr,
    (unsigned int)v19,
    v17);
  sub_1868580(a1, (__int64)v97);
  sub_16668D0(a1, (__int64)v97, v23, v24, v25, v26);
  v30 = sub_17A47F0(a1, (__int64)v97, 1u, v27, v28, v29);
  if ( v30 )
    sub_B8CC60((__int64)v97, (__int64)v30, v31, v32, v33, v34);
  sub_1836CB0((__int64 *)a1, *(_QWORD *)(a1 + 608), v97, a3, a5, a6);
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 3) <= 2 )
    sub_1632CB0(*(_WORD **)(a1 + 632), v97, v35, v36, v37, v38);
  v39 = *(_QWORD *)(a1 + 232);
  if ( (*(_BYTE *)(v39 + 60) & 0x10) != 0 )
  {
    sub_178F7B0(*(_QWORD *)(a1 + 664), (__int64)v97, v35, v36, v37, v38);
    if ( !*(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL) )
      goto LABEL_16;
  }
  else if ( !*(_DWORD *)(v39 + 64) )
  {
    goto LABEL_16;
  }
  sub_1AF4050(*(_QWORD *)(a1 + 760), v97);
LABEL_16:
  LOBYTE(v125) = 0;
  v40 = v99;
  sub_1A2FD60(a1, v99, (__int64)v97, v36, v37, v38, v123.m128i_i64[0], v123.m128i_i64[1], v124, 0);
  v42 = *(_QWORD *)(v98 + 1320);
  for ( i = v42 + 32LL * *(unsigned int *)(v98 + 1328); i != v42; v42 += 32 )
  {
    v44 = *(_BYTE *)(v42 + 24);
    if ( (v44 & 8) == 0 && (v44 & 3) != 3 )
    {
      v45 = *(_QWORD *)v42;
      if ( *(_QWORD *)v42 )
      {
        if ( (unsigned __int8)sub_B79970(*(_QWORD *)v42) )
        {
          v40 = v45;
          sub_17B7670(a1, v45, *(_QWORD *)(a1 + 608), 0, v41, v46);
        }
      }
    }
  }
  v47 = (unsigned __int64 *)ptr;
  v48 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v121);
  if ( ptr != v48 )
  {
    do
    {
      v49 = *v47;
      v50 = *(_QWORD *)(*v47 + 40);
      if ( (v50 & 7) != 0 )
        goto LABEL_33;
      v51 = v50 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v50 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_33;
      v52 = *((_QWORD *)a2 + 2);
      v53 = v52 + 48LL * a2[6];
      if ( v52 != v53 )
      {
        v54 = v52 + 48;
        if ( *(_QWORD *)(v52 + 8) == v51 )
        {
LABEL_53:
          v101 = v52;
          sub_168B9F0((__int64)&v123, (__int64 *)(a1 + 8), *(_DWORD *)(v49 + 24), 0x12BBu, 0);
          sub_15F7200(&v123);
          sub_168B9F0((__int64)&v123, (__int64 *)(a1 + 8), *(_DWORD *)(v101 + 4), 0x193Fu, 0);
          v70 = sub_169D880((__int64)&v123, (__int64 *)(v101 + 8));
          if ( *(_BYTE *)(v70 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v70 + 32), 1, 2u);
          }
          else if ( *(_BYTE *)(v70 + 132) )
          {
            v102 = v70;
            v83 = sub_168B9E0((_QWORD *)v70);
            v86 = v102;
            v87 = v83;
            v88 = *(_QWORD *)(v102 + 16);
            if ( v88 )
            {
              v106 = v87;
              v88 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 32LL))(v88);
              v87 = v106;
              v86 = v102;
            }
            v103 = v86;
            v119 = v88;
            v89 = sub_1587BC0(v87, &v119, v86, v87, v84, v85);
            sub_AE9DF0((unsigned __int8 **)(*v89 + 32LL * *(unsigned int *)(v103 + 128) + 8), 1, 2u);
          }
          sub_15F7200(&v123);
          goto LABEL_32;
        }
        while ( 1 )
        {
          v52 = v54;
          if ( v53 == v54 )
            break;
          v54 += 48;
          if ( v51 == *(_QWORD *)(v54 - 40) )
            goto LABEL_53;
        }
      }
      sub_17DE630(a1, *(_QWORD *)(a1 + 608), *v47, v53, v41, v52);
LABEL_32:
      v40 = v49;
      sub_17B7670(a1, v49, *(_QWORD *)(a1 + 608), 1, v55, v56);
LABEL_33:
      ++v47;
    }
    while ( v48 != v47 );
  }
  v57 = *(_QWORD *)(v98 + 1656);
  if ( !v57 )
  {
    v90 = *(unsigned int *)(v98 + 1544);
    if ( !(_DWORD)v90 )
      goto LABEL_49;
    v40 = 0;
    v57 = sub_BC21A0(
            *(_QWORD **)(a1 + 248),
            0,
            *(_DWORD *)(v98 + 1636),
            *(_QWORD *)(v98 + 1536),
            v90,
            *(unsigned int *)(v98 + 1640),
            (_DWORD *)(*(_QWORD *)(v98 + 1648) & 0xFFFFFFFFFFFFFFFELL));
    *(_QWORD *)(v98 + 1656) = v57;
    if ( !v57 )
      goto LABEL_49;
  }
  v58 = v57 + 24;
  v59 = *(_DWORD *)(v57 + 20) & 0x1FFFFFFF;
  if ( v58 + 8 * v59 == v58 )
    goto LABEL_49;
  v105 = a2;
  v60 = (__int64 *)v58;
  v61 = v58 + 8 * v59;
LABEL_38:
  while ( 2 )
  {
    v62 = *(_QWORD *)(*v60 + 40);
    if ( (v62 & 7) == 0 && (v62 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v63 = *((_QWORD *)v105 + 2);
      v64 = v105[6];
      if ( v63 != v63 + 48 * v64 )
      {
        v100 = v60;
        v65 = *v60;
        v66 = v63 + 48 * v64;
        while ( 1 )
        {
          v67 = v62 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v62 & 7) != 0 )
            v67 = 0;
          if ( *(_QWORD *)(v63 + 8) == v67 )
          {
            sub_168B9F0((__int64)&v123, (__int64 *)(a1 + 8), *(_DWORD *)(v63 + 4), 0x141Cu, 0);
            v68 = (__int64 *)(v63 + 8);
            v63 += 48;
            sub_169D880((__int64)&v123, v68);
            sub_15F7200(&v123);
            v40 = v65;
            sub_1CC6E20(a1, v65);
            if ( v66 == v63 )
            {
LABEL_48:
              v60 = v100 + 1;
              if ( (__int64 *)v61 == v100 + 1 )
                goto LABEL_49;
              goto LABEL_38;
            }
          }
          else
          {
            v63 += 48;
            if ( v66 == v63 )
              goto LABEL_48;
          }
          v62 = *(_QWORD *)(v65 + 40);
        }
      }
    }
    if ( (__int64 *)v61 != ++v60 )
      continue;
    break;
  }
LABEL_49:
  v69 = v97[3].m128i_i64[1];
  if ( (v69 & 4) != 0 )
  {
    v71 = v69 & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)((v69 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
    {
      if ( !sub_B77A30((__int64)v97) && !(unsigned __int8)sub_B8E340((__int64)v97) )
      {
        v72 = sub_EEB7E0(*(_QWORD *)(v71 + 40), v40, *(double *)a5.m128_u64);
        sub_168B9F0((__int64)&v123, (__int64 *)(a1 + 8), v72, 0xDA9u, 0);
        sub_15F7200(&v123);
      }
    }
  }
  sub_18C7FE0(a1, 6, *(_QWORD *)(v98 + 1592));
  if ( ptr != v122 )
    free(ptr);
}
