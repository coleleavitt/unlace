__int64 __fastcall sub_17FE280(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  int v11; // r14d
  int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // r11
  int *v23; // r9
  char v24; // al
  __int64 v25; // r15
  int v26; // eax
  __m128 v27; // xmm0
  __m128i v28; // xmm1
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 *v34; // r15
  __int64 v35; // rdx
  char v36; // di
  __int64 v37; // r8
  __int64 *v38; // rsi
  unsigned __int64 v39; // rax
  int v40; // eax
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r15
  __int64 v52; // rdi
  __int64 v53; // r14
  int v55; // eax
  unsigned __int64 v56; // rdi
  __int64 v57; // rcx
  bool v58; // zf
  bool v59; // r15
  _BOOL8 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // r12
  unsigned __int8 v66; // cl
  int v67; // eax
  __int64 v68; // r15
  __int64 v69; // r12
  _DWORD *v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rax
  char v73; // al
  unsigned __int8 v74; // al
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r13
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 *v86; // [rsp+0h] [rbp-1E8h]
  bool v88; // [rsp+10h] [rbp-1D8h]
  unsigned __int64 v89; // [rsp+10h] [rbp-1D8h]
  __int64 v90; // [rsp+10h] [rbp-1D8h]
  char v91; // [rsp+18h] [rbp-1D0h]
  __int64 *v92; // [rsp+18h] [rbp-1D0h]
  int v93; // [rsp+18h] [rbp-1D0h]
  char v94; // [rsp+18h] [rbp-1D0h]
  int v95; // [rsp+20h] [rbp-1C8h]
  __int64 v96; // [rsp+20h] [rbp-1C8h]
  __int64 v97; // [rsp+28h] [rbp-1C0h]
  _BYTE v98[9]; // [rsp+3Fh] [rbp-1A9h] BYREF
  int v99[2]; // [rsp+48h] [rbp-1A0h] BYREF
  __m128i v100; // [rsp+50h] [rbp-198h] BYREF
  __int64 v101; // [rsp+60h] [rbp-188h]
  __int64 v102[18]; // [rsp+70h] [rbp-178h] BYREF
  int v103[2]; // [rsp+100h] [rbp-E8h] BYREF
  __int64 *v104; // [rsp+108h] [rbp-E0h] BYREF
  __int64 v105; // [rsp+110h] [rbp-D8h]
  __int64 v106; // [rsp+118h] [rbp-D0h] BYREF
  unsigned __int8 *v107; // [rsp+120h] [rbp-C8h] BYREF
  void *v108[2]; // [rsp+158h] [rbp-90h]
  __int64 v109; // [rsp+168h] [rbp-80h]
  __int64 v110; // [rsp+170h] [rbp-78h]
  __m128i v111; // [rsp+178h] [rbp-70h]
  __int64 v112; // [rsp+188h] [rbp-60h]
  __int64 v113; // [rsp+190h] [rbp-58h]
  __int64 v114; // [rsp+198h] [rbp-50h]
  __int16 v115; // [rsp+1A0h] [rbp-48h]
  char v116; // [rsp+1A2h] [rbp-46h]
  bool v117; // [rsp+1A3h] [rbp-45h]
  bool v118; // [rsp+1A4h] [rbp-44h]
  char v119; // [rsp+1A5h] [rbp-43h]
  __int16 v120; // [rsp+1A6h] [rbp-42h]

  sub_17B41B0((__int64)&v100, (__int64 *)a1, (unsigned int *)(a3 + 56), a7, (__int64)a4, a5, a6);
  v11 = *(_DWORD *)(a3 + 104);
  *(_QWORD *)&v98[1] = v100.m128i_i64[0];
  if ( v11 )
    return sub_1857FB0(a1);
  if ( !v100.m128i_i64[0] )
  {
    if ( (*(_BYTE *)(a3 + 720) & 1) == 0 && ((**(_DWORD **)a3 >> 12) & 0x7F) != 0x45 )
    {
      v51 = 0;
      sub_168B9F0((__int64)v103, (__int64 *)(a1 + 8), *(_DWORD *)(*(_QWORD *)a3 + 160LL), 0xDFAu, 0);
      *(_QWORD *)v99 = *(_QWORD *)(*(_QWORD *)a3 + 160LL);
      v61 = sub_1587DB0((__int64)v103, (__int64 *)v99);
      v102[0] = *(_QWORD *)(a3 + 88);
      sub_1587DB0(v61, v102);
      sub_15F7200(v103);
      return v51;
    }
    return 0;
  }
  if ( (unsigned __int8)sub_1E536B0(a1, &v100, 2) )
    return 0;
  v12 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)v99 = *(_QWORD *)(a1 + 544);
  v13 = *(_QWORD *)(a3 + 16);
  if ( v12 && *(_DWORD *)(a3 + 12) )
  {
    if ( !v13 )
    {
      *(_BYTE *)(a3 + 720) |= 1u;
      goto LABEL_21;
    }
  }
  else if ( !v13 )
  {
    goto LABEL_21;
  }
  if ( (unsigned __int8)sub_1E53090(a1, a3 + 8, 10) )
    return 0;
  v16 = *(unsigned int *)(*(_QWORD *)a3 + 264LL);
  v88 = (_DWORD)v16 == 0;
  v17 = sub_16A2930(a1, a3 + 8, (_DWORD)v16 == 0, v14, v15, v16);
  *(_QWORD *)v99 = v17;
  if ( !v17 || (*(_BYTE *)(v17 + 8) & 0x7F) == 0x3E )
  {
    sub_168B9F0((__int64)v103, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 80), 0x1420u, 0);
    v53 = *(_QWORD *)(a3 + 16);
    if ( v111.m128i_i8[0] )
    {
      sub_AE9DF0(&v107, *(_QWORD *)(a3 + 16), 0xBu);
    }
    else if ( v111.m128i_i8[12] )
    {
      v79 = sub_168B9E0(v103);
      v80 = v105;
      if ( v105 )
        v80 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v105 + 32LL))(v105);
      v102[0] = v80;
      v81 = sub_1587BC0(v79, v102, v75, v76, v77, v78);
      sub_AE9DF0((unsigned __int8 **)(*v81 + 32LL * v111.m128i_u32[2] + 8), v53, 0xBu);
    }
    v102[0] = *(_QWORD *)(a3 + 8);
    sub_1587DB0((__int64)v103, v102);
    sub_15F7200(v103);
    return 0;
  }
  v22 = sub_B8E180(v17);
  if ( !v22 )
  {
    v73 = sub_169F990(a1, a3 + 8, *(unsigned __int64 *)v99);
    v22 = 0;
    if ( v73 )
      return 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)v99 + 8LL) & 0x7Fu) - 59 <= 2 && !*(_QWORD *)(*(_QWORD *)v99 + 64LL) )
  {
    v94 = v22;
    sub_7052B0(
      (__int64 *)(*(_QWORD *)(*(_QWORD *)v99 + 40LL) + 96LL),
      *(_QWORD *)(*(_QWORD *)v99 + 40LL),
      v18,
      v19,
      v20,
      v21);
    v51 = *(_QWORD *)(*(_QWORD *)v99 + 64LL);
    v22 = v94;
    if ( !v51 )
    {
      sub_168B9F0((__int64)v103, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 80), 0x1032u, 0);
      v71 = sub_17B3DD0((__int64)v103, (__int64 *)&v98[1]);
      v72 = sub_17BABD0(v71, (__int64 *)v99);
      v102[0] = *(_QWORD *)(a3 + 8);
      sub_1587DB0(v72, v102);
      sub_15F7200(v103);
      return v51;
    }
  }
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 264LL) )
  {
    v23 = nullptr;
    if ( *(_DWORD *)(a3 + 56) == 7 )
      v23 = *(int **)(a3 + 64);
    v91 = v22;
    v24 = sub_17CFA00(a1, a3 + 8, *(__int64 *)v99, *(__int64 *)&v98[1], *(unsigned int *)(a3 + 80), v23, 0);
    v22 = v91;
    if ( v24 )
    {
      if ( ((*(_BYTE *)(*(_QWORD *)v99 + 8LL) + 70) & 0x7Fu) <= 3 )
        return 0;
      *(_BYTE *)(a3 + 720) |= 1u;
    }
  }
  if ( a5 != 0 && v88 && v22 )
  {
    v62 = *(_QWORD *)&v98[1];
    v90 = *(_QWORD *)(a1 + 544);
    v63 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = 0;
    v97 = v63;
    v64 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 9944) = 0;
    v106 = v64;
    v95 = *(_DWORD *)(a1 + 80);
    v93 = *(_DWORD *)(a1 + 2632);
    *(_QWORD *)(a1 + 544) = *(_QWORD *)v99;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
    v65 = *(_QWORD *)a3;
    v66 = ((**(_DWORD **)a3 >> 12) + 100) & 0x7F;
    if ( v66 <= 0x1Au )
    {
      if ( ((1LL << v66) & 0x43FFFCB) != 0 )
      {
        v102[0] = 0;
        v82 = sub_1E5F010(*(_QWORD *)(v65 + 8), v102);
        if ( (v82 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (*(_BYTE *)(*(_QWORD *)(v82 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 2) != 0 )
        {
          if ( !v102[0] )
            v102[0] = (__int64)sub_A81910(*(_QWORD **)(a1 + 248), v82, *(_DWORD *)(v65 + 192));
          v83 = (_QWORD *)sub_1CF6720(a1, v102[0], *(unsigned int *)(a3 + 80), v62);
          v102[0] = (__int64)v83;
          if ( !v83 )
            goto LABEL_115;
          *(_QWORD *)(v65 + 8) = sub_1E61050(a1, *v83, v83, a7, a8);
        }
      }
      else if ( ((1LL << v66) & 0x34) != 0 )
      {
        v84 = sub_1CF3AB0(a1, *(_QWORD *)(v65 + 8));
        if ( v84 == 1 )
          goto LABEL_115;
        *(_QWORD *)(v65 + 8) = v84 & 0xFFFFFFFFFFFFFFFELL;
      }
    }
    v67 = *(_DWORD *)(a3 + 136);
    if ( !v67 )
      goto LABEL_116;
    v68 = 0;
    v69 = 16 * (9LL * (unsigned int)(v67 - 1) + 9);
    while ( 1 )
    {
      v70 = (_DWORD *)(v68 + *(_QWORD *)(a3 + 128));
      if ( *v70 == 5 )
      {
        if ( (unsigned __int8)sub_1D05010(a1, v70 + 16) )
          break;
      }
      v68 += 144;
      if ( v68 == v69 )
        goto LABEL_116;
    }
LABEL_115:
    *(_BYTE *)(a3 + 720) |= 1u;
LABEL_116:
    if ( v90 )
    {
      *(_QWORD *)(a1 + 544) = v90;
      *(_QWORD *)(a1 + 512) = v97;
      *(_QWORD *)(a1 + 9944) = v106;
      *(_DWORD *)(a1 + 80) = v95;
      *(_DWORD *)(a1 + 2632) = v93;
    }
  }
LABEL_21:
  v92 = (__int64 *)sub_1E85170(a1, a3);
  v25 = *v92;
  if ( (unsigned __int8)sub_1E535C0(a1, *(unsigned int *)(a3 + 80), v92, 2) )
    *(_BYTE *)(a3 + 720) |= 1u;
  v26 = sub_1A3A250(a1);
  v27 = 0;
  v28 = _mm_load_si128(&v100);
  v104 = &v106;
  LOBYTE(v115) = v26 != 0;
  HIBYTE(v115) = v26 == 2;
  *(_QWORD *)v103 = 0;
  v105 = 0x800000000LL;
  *(_OWORD *)v108 = 0;
  v109 = 0;
  v110 = a1;
  v111 = v28;
  v112 = v101;
  v113 = 0;
  v114 = 0;
  v116 = 1;
  v117 = v26 == 0;
  v118 = v26 == 0;
  v119 = 0;
  v120 = 0;
  sub_1A395A0(v103);
  v89 = v25 & 0xFFFFFFFFFFFFFFF0LL;
  if ( !*(_QWORD *)(a3 + 16) )
  {
    v55 = **(_BYTE **)a3 & 7;
    if ( v55 == 1 )
      goto LABEL_101;
    v56 = *(_QWORD *)(a1 + 544);
    v57 = *(_BYTE *)(v56 + 8) & 0x7F;
    if ( (unsigned __int8)v57 > 0x12u )
    {
      v57 = ((_BYTE)v57 + 94) & 0x7F;
      if ( (unsigned __int8)v57 > 5u )
        goto LABEL_104;
    }
    else
    {
      v29 = 1LL << v57;
      if ( ((1LL << v57) & 0x40182) == 0 )
        goto LABEL_104;
    }
    if ( v55 == 2
      || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
       - 25 <= 1 )
    {
      v58 = (*(_BYTE *)(sub_B916A0(v56, 0x800000000LL, v29, v57, v30, v31) + 8) & 0x7F) == 0;
      v103[0] = 0;
      LODWORD(v105) = 0;
      v59 = v58;
      if ( v108[0] )
        sub_1A39780(v108[0]);
      v27 = 0;
      LOBYTE(v120) = 0;
      *(_OWORD *)v108 = 0;
      LODWORD(v114) = 9;
      sub_1A395A0(v103);
      v115 = 257;
      sub_1A395A0(v103);
      v60 = v59;
      goto LABEL_102;
    }
LABEL_104:
    if ( (*(_BYTE *)(sub_B8EAA0(v56) + 8) & 0x7F) == 0 )
    {
      v60 = (**(_BYTE **)a3 & 7) != 3;
      goto LABEL_102;
    }
LABEL_101:
    v60 = 0;
LABEL_102:
    sub_1A49A10(a1, v103, a2, v60, 0);
    goto LABEL_35;
  }
  sub_1A48440(a1, v103, *(_QWORD *)v99, 0);
  v34 = v104;
  v35 = (unsigned int)v105;
  v36 = 0;
  v37 = 0x8060000010000000LL;
  v38 = &v104[(unsigned int)v105];
  if ( v38 != v104 )
  {
    do
    {
      v32 = (__int64)v34;
      while ( 1 )
      {
        v34 = (__int64 *)v32;
        v32 += 8;
        v35 = *v34 & 0xFFFFFFFFFFFFFFF8LL;
        v39 = *(_QWORD *)(v35 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        v33 = *(_QWORD *)(v35 + 16) & 4LL;
        if ( (*(_QWORD *)(v35 + 16) & 4) != 0 )
          v39 = *(_QWORD *)v39;
        v40 = *(_BYTE *)(v39 + 8) & 0x7F;
        if ( v40 )
        {
          if ( v40 != 24 )
          {
            v41 = *(_BYTE *)(v35 + 28) & 0x7F;
            if ( (unsigned __int8)v41 <= 0x3Fu )
            {
              if ( _bittest64(&v37, v41) )
                break;
            }
          }
        }
        if ( (__int64 *)v32 == v38 )
          goto LABEL_33;
      }
      v102[1] = (__int64)v34;
      sub_17A18A0((__int64 *)&v104, v34);
      v36 = 1;
      v35 = (unsigned int)v105;
      v37 = 0x8060000010000000LL;
      v38 = &v104[(unsigned int)v105];
    }
    while ( v38 != v34 );
  }
LABEL_33:
  if ( v36 )
    sub_17A2370((unsigned int *)v103);
LABEL_35:
  if ( v103[0] == 2 )
  {
    v42 = sub_16C47B0(*v104 & 0xFFFFFFFFFFFFFFF8LL);
    v35 = v42;
    if ( v42 && ((v43 = *(_BYTE *)(v42 + 28) & 0x7F, v32 = (v43 + 61) & 0x7F, (unsigned __int8)v32 <= 1u) || v43 == 47) )
    {
      if ( (*(_BYTE *)(a3 + 720) & 1) == 0 && ((**(_DWORD **)a3 >> 12) & 0x7F) != 0x45 )
      {
        v44 = 0;
        v45 = *(_QWORD *)(a2 + 64);
        if ( v45 && *(_WORD *)(*(_QWORD *)(a2 + 72) + 12LL) < *(_WORD *)(v45 + 12) )
        {
          v96 = v35;
          v74 = sub_A5F460(v45 + 80, v35);
          v35 = v96;
          v44 = v74;
        }
        sub_1CC2540(a1, *(unsigned int *)(a3 + 80), v35, v44);
      }
      v103[0] = 0;
      LODWORD(v105) = 0;
      if ( v108[0] )
        sub_1A39780(v108[0]);
      v27 = 0;
      LOBYTE(v120) = 0;
      *(_OWORD *)v108 = 0;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1 )
        goto LABEL_48;
    }
    else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                               + 16LL)
            - 25 <= 1 )
    {
      goto LABEL_91;
    }
  }
  else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                             + 16LL)
          - 25 <= 1 )
  {
    goto LABEL_50;
  }
  if ( (unsigned __int8)sub_17B40D0(a1, *(__int64 *)v99, v35, v32, v37, v33, v100.m128i_i64[0], v100.m128i_u32[2]) )
  {
    v103[0] = 0;
    LODWORD(v105) = 0;
    if ( !v108[0] )
    {
LABEL_97:
      v27 = 0;
      LOBYTE(v120) = 0;
      *(_OWORD *)v108 = 0;
      goto LABEL_50;
    }
    sub_1A39780(v108[0]);
    v27 = 0;
    v46 = v103[0];
    LOBYTE(v120) = 0;
    *(_OWORD *)v108 = 0;
    goto LABEL_49;
  }
LABEL_48:
  v46 = v103[0];
LABEL_49:
  if ( v46 != 2 )
    goto LABEL_50;
  v35 = sub_16C47B0(*v104 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_91:
  if ( (*(_BYTE *)(v35 + 28) & 0x7Fu) - 58 <= 4
    && (**(_BYTE **)a3 & 7) != 1
    && (!a5
     || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
      - 25 <= 1) )
  {
    v103[0] = 0;
    LODWORD(v105) = 0;
    if ( v108[0] )
      sub_1A39780(v108[0]);
    goto LABEL_97;
  }
LABEL_50:
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
    sub_186C8D0(a1, a3);
  v98[0] = 1;
  v86 = *(__int64 **)(a2 + 72);
  if ( (**(_BYTE **)a3 & 7) != 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v89 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
       - 25 > 1 )
      v51 = (__int64)sub_17E5540(
                       (__int64 *)a1,
                       (__int64)v86,
                       a3,
                       *(__int64 *)v99,
                       v92,
                       (__int64)v103,
                       v27,
                       a4,
                       a5,
                       v98,
                       nullptr,
                       0);
    else
      v51 = sub_17F7EC0(a1, (int)v86, a3, v99[0], (int)v92, (int)v103, a4, a5, (__int64)v98);
LABEL_55:
    if ( v51 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) == 0 && (*(_BYTE *)(v51 + 28) & 0x7Fu) - 26 <= 0x1A )
        sub_17AE510(a1, v51, v47, v48, v49, v50);
      if ( *(_QWORD *)(v51 + 40) && v98[0] )
        sub_17B7670(a1, v51, (__int64)v86, 1, v49, v50);
      v52 = *(_QWORD *)(a1 + 760);
      if ( *(_DWORD *)(v52 + 24) )
        sub_1B21670(v52, 0, v51, 0);
    }
    goto LABEL_64;
  }
  if ( !a5 )
  {
    v51 = sub_17DF910(
            (__int64 *)a1,
            v86,
            a3,
            *(__int64 *)v99,
            (__int64)v92,
            (__int64)v103,
            (__m128i)v27,
            *(double *)v28.m128i_i64);
    goto LABEL_55;
  }
  v51 = 0;
  sub_168B9F0((__int64)v102, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 80), 0x142Fu, 0);
  sub_15F7200(v102);
LABEL_64:
  sub_169D230((__int64)v103);
  return v51;
}
