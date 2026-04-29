__int64 __fastcall sub_3E7480(__int64 a1, char a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  int v7; // eax
  __int64 v9; // rsi
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebp
  __int16 v14; // ax
  int dtype_size; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r14d
  int v19; // r15d
  int v20; // esi
  int v21; // eax
  __int64 v22; // r13
  char v23; // al
  unsigned __int64 v24; // rax
  signed int v25; // r11d
  __int64 v26; // rsi
  _QWORD *v27; // r15
  unsigned __int64 v28; // rsi
  _QWORD *v29; // r12
  _QWORD *v30; // rbp
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rax
  _WORD *v36; // rax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  char v40; // al
  int v41; // r13d
  char v42; // al
  __int64 v43; // r15
  int v44; // eax
  __int64 v45; // r14
  unsigned int v46; // ebp
  int v47; // eax
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // eax
  __int64 v54; // rbp
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // r14
  int v58; // eax
  __int64 v59; // rbp
  int v60; // eax
  int v61; // eax
  __int64 v62; // r12
  int v63; // eax
  int v64; // eax
  __int64 v65; // r14
  unsigned int v66; // r13d
  int v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  __int64 v71; // rax
  __int64 v72; // rbp
  int v73; // eax
  unsigned __int8 v74; // r9
  __int64 v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned int v80; // r13d
  int v81; // eax
  int v82; // esi
  int v83; // eax
  int v84; // esi
  int v85; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  int v90; // eax
  unsigned int v91; // ebp
  int v92; // eax
  __int64 v93; // rcx
  __int64 v94; // r14
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // esi
  int v99; // esi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  char v104; // al
  unsigned int v105; // r11d
  char v106; // al
  __int64 v107; // rsi
  char v108; // al
  __int64 v109; // rax
  int v110; // eax
  int v111; // eax
  unsigned int v112; // ebp
  int v113; // eax
  int v114; // eax
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // [rsp-10h] [rbp-98h]
  __int64 v118; // [rsp-10h] [rbp-98h]
  __int64 v119; // [rsp-10h] [rbp-98h]
  __int64 v120; // [rsp-10h] [rbp-98h]
  __int64 v121; // [rsp-8h] [rbp-90h]
  int v122; // [rsp+Ch] [rbp-7Ch]
  signed int v123; // [rsp+Ch] [rbp-7Ch]
  signed int v124; // [rsp+Ch] [rbp-7Ch]
  signed int v125; // [rsp+Ch] [rbp-7Ch]
  unsigned __int8 v126; // [rsp+10h] [rbp-78h]
  _BOOL4 v127; // [rsp+10h] [rbp-78h]
  signed int v128; // [rsp+10h] [rbp-78h]
  unsigned __int64 v129; // [rsp+10h] [rbp-78h]
  signed int v130; // [rsp+18h] [rbp-70h]
  unsigned __int64 v131; // [rsp+18h] [rbp-70h]
  signed int v132; // [rsp+18h] [rbp-70h]
  signed int v133; // [rsp+18h] [rbp-70h]
  int v134; // [rsp+18h] [rbp-70h]
  signed int v135; // [rsp+18h] [rbp-70h]
  signed int v136; // [rsp+18h] [rbp-70h]
  signed int v137; // [rsp+18h] [rbp-70h]
  signed int v138; // [rsp+18h] [rbp-70h]
  signed int v139; // [rsp+18h] [rbp-70h]
  signed int v140; // [rsp+18h] [rbp-70h]
  signed int v141; // [rsp+18h] [rbp-70h]
  signed int v142; // [rsp+18h] [rbp-70h]
  signed int v143; // [rsp+18h] [rbp-70h]
  signed int v144; // [rsp+18h] [rbp-70h]
  signed int v145; // [rsp+18h] [rbp-70h]
  signed int v146; // [rsp+18h] [rbp-70h]
  int v147; // [rsp+18h] [rbp-70h]
  signed int v148; // [rsp+18h] [rbp-70h]
  _QWORD v149[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v150[11]; // [rsp+30h] [rbp-58h] BYREF

  v150[3] = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 384) )
    return 0;
  v7 = *(unsigned __int16 *)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 800);
  if ( (unsigned __int16)v7 <= 4u )
  {
    v10 = 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 52) & 0x1F;
    if ( (*(_DWORD *)(a1 + 52) & 0x10) != 0 )
    {
      v10 = 16;
    }
    else
    {
      v10 = (unsigned __int8)v10;
      v11 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 16LL);
      v12 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
      if ( v12 != v11 )
      {
        v11 &= v12;
        if ( v12 == -1 )
          v11 = -1;
      }
      if ( (unsigned __int16)(v7 - 17) <= 1u || (unsigned __int16)(v7 - 14) <= 1u )
      {
        if ( (unsigned __int8)sub_3E6030((_QWORD *)a1, v150, v11) )
        {
          v13 = v150[0];
          if ( !LODWORD(v150[0]) )
          {
            v14 = *(_WORD *)(a1 + 48);
            if ( v14 == 14 || v14 == 17 )
            {
              dtype_size = get_dtype_size(0);
              sub_1CF210(a1, 0x3Au, dtype_size, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
            }
          }
          return v13;
        }
        v9 = *(_QWORD *)(a1 + 800);
        v7 = *(unsigned __int16 *)(a1 + 48);
      }
    }
  }
  v16 = *(_QWORD *)(v9 + 8);
  v17 = *(unsigned int *)(v16 + 104);
  v126 = *(_BYTE *)(a1 + 69);
  if ( v7 < (int)v17 || v7 >= *(_DWORD *)(v16 + 108) )
  {
    if ( *(_BYTE *)(a1 + 65) == 1 )
    {
      v19 = 2;
      LOWORD(v18) = 0;
      v20 = 1;
      v122 = sub_3E5930(a1, 0, v16, v17, a6);
    }
    else
    {
      v122 = 272;
      v19 = 2;
      LOWORD(v18) = 0;
      v20 = 1;
    }
LABEL_46:
    v22 = 280;
    if ( *(_BYTE *)(a1 + 40LL * v20 + 65) == 1 )
      goto LABEL_20;
    goto LABEL_21;
  }
  v18 = *(_DWORD *)(*(_QWORD *)(v16 + 112) + 16LL * (v7 - (int)v17) + 8);
  if ( (v18 & 0x100) != 0 )
  {
    v19 = 2;
    v20 = 1;
    v122 = sub_3E5930(a1, 0, v16, v17, a6);
    v21 = 512;
    goto LABEL_19;
  }
  v40 = *(_BYTE *)(a1 + 65);
  v41 = v18 & 0x30C;
  if ( v40 != 1 )
  {
    if ( v41 != 12 )
    {
      v19 = 2;
      v21 = 512;
      v20 = 1;
      v122 = 272;
LABEL_19:
      if ( (v21 & v18) != 0 )
      {
LABEL_20:
        v22 = (int)sub_3E5930(a1, v20, v16, v17, a6);
        goto LABEL_21;
      }
      goto LABEL_46;
    }
    v122 = 272;
    goto LABEL_63;
  }
  v122 = sub_3E5930(a1, 0, v16, v17, a6);
  if ( v41 != 12 )
    goto LABEL_64;
  v40 = *(_BYTE *)(a1 + 65);
  if ( v40 != 1 )
  {
LABEL_63:
    if ( v40 == 5 && !*(_QWORD *)(a1 + 72) && !*(_BYTE *)(a1 + 105) )
      goto LABEL_69;
LABEL_64:
    v19 = 2;
    v21 = 512;
    v20 = 1;
    goto LABEL_19;
  }
  v42 = *(_BYTE *)(a1 + 105);
  if ( v42 == 1 )
  {
    if ( !*(_BYTE *)(a1 + 136) )
      goto LABEL_64;
LABEL_69:
    v19 = 3;
    v21 = 1024;
    v20 = 2;
    goto LABEL_19;
  }
  if ( !v42 )
    goto LABEL_69;
  v19 = 2;
  if ( (v18 & 0x200) != 0 )
  {
    v20 = 1;
    goto LABEL_20;
  }
  v22 = 280;
LABEL_21:
  v23 = *(_BYTE *)(a1 + 40LL * v19 + 65);
  if ( v23 && v23 != 7 )
  {
    v37 = sub_3E5930(a1, v19, v16, v17, a6);
    v25 = v22;
    v22 = v37;
  }
  else
  {
    v24 = *(unsigned __int16 *)(a1 + 48);
    v25 = v122;
    if ( (unsigned __int16)v24 <= 0x1Du )
    {
      v16 = 536875200;
      if ( _bittest64(&v16, v24) )
      {
        v38 = get_dtype_size(2);
        sub_1CF210(a1, 3u, v38, 1, 0x3BEA45E214ADDC55LL, 280, 0);
        v25 = v22;
        v16 = v121;
        v22 = 280;
      }
    }
  }
  if ( v10 == 16 )
    goto LABEL_30;
  v16 = *(unsigned __int16 *)(a1 + 48);
  v26 = *(unsigned int *)(a1 + 52);
  if ( (_WORD)v16 != 43 && (unsigned __int16)v16 > 4u && (v26 & 0x10) != 0 )
    goto LABEL_30;
  v36 = &unk_407840;
  v17 = (__int64)&unk_4078AA;
  while ( (_WORD)v16 != *v36 )
  {
    if ( &unk_4078AA == (_UNKNOWN *)++v36 )
      goto LABEL_30;
  }
  if ( (_DWORD)v22 == -1 || v25 == -1 )
  {
LABEL_30:
    v27 = *(_QWORD **)(a1 + 8);
    v28 = *(_QWORD *)(a1 + 40);
    v29 = (_QWORD *)v27[127];
    v30 = v27 + 126;
    if ( !v29 )
    {
      v129 = *(_QWORD *)(a1 + 40);
      if ( v30 != (_QWORD *)v27[128] )
      {
        v148 = v25;
        v109 = std::_Rb_tree_decrement(v27 + 126, v28, v16, v17, a6);
        v25 = v148;
        if ( *(_QWORD *)(v109 + 32) >= v129 )
          goto LABEL_41;
      }
      v127 = 1;
      v29 = v27 + 126;
      goto LABEL_40;
    }
    while ( 1 )
    {
      v31 = v29[4];
      v32 = 0;
      v33 = (_QWORD *)v29[3];
      if ( v28 < v31 )
      {
        v33 = (_QWORD *)v29[2];
        v32 = 1;
      }
      if ( !v33 )
        break;
      v29 = v33;
    }
    if ( (_BYTE)v32 )
    {
      if ( v29 == (_QWORD *)v27[128] )
      {
LABEL_38:
        v127 = 1;
        if ( v29 != v30 )
          v127 = v28 < v29[4];
LABEL_40:
        v130 = v25;
        v34 = operator new(0x28u);
        *(_QWORD *)(v34 + 32) = *(_QWORD *)(a1 + 40);
        std::_Rb_tree_insert_and_rebalance(v127, v34, v29, v27 + 126);
        ++v27[130];
        v25 = v130;
        goto LABEL_41;
      }
      v131 = *(_QWORD *)(a1 + 40);
      v128 = v25;
      v39 = std::_Rb_tree_decrement(v29, v28, v31, v32, a6);
      v28 = v131;
      v25 = v128;
      v31 = *(_QWORD *)(v39 + 32);
    }
    if ( v31 >= v28 )
    {
LABEL_41:
      sub_3E63B0(a1, v18, v122, v25, v22);
      return 0;
    }
    goto LABEL_38;
  }
  switch ( (__int16)v16 )
  {
    case 1:
    case 27:
      if ( (unsigned __int8)sub_3E6C20(a1, (unsigned int)v22, v16, (__int64)&unk_4078AA, a6, a7, a3) )
        return 0;
      v48 = 4;
      sub_3E4100(a1, 4u, v126, (int)v22, 0x3BEA45E214ADDC55LL, v122, 0);
      v51 = v119;
      v52 = a1;
      goto LABEL_74;
    case 3:
      sub_3E5D60(a1, 1, v122, 0xFFFFFFFFLL, a6, a3);
      return 0;
    case 6:
    case 7:
      v135 = v25;
      sub_3E7240(a1, v22, v22);
      v75 = (int)v22;
      if ( (unsigned __int8)sub_3E2770(a1 + 24, (unsigned int)v22, v76, v77, v78, v79) )
      {
        v121 = a1 + 24;
        sub_3E4100(a1, 0x1Cu, v126, v135, (int)v22, 0, 0);
      }
      v80 = 23;
      if ( *(_WORD *)(a1 + 48) == 6 )
        v80 = 24;
      v81 = get_dtype_size(v126);
      sub_1CF210(a1, v80, v81, v135, v75, v122, 0);
      v50 = v118;
      v48 = v121;
      goto LABEL_74;
    case 8:
    case 9:
      v48 = *(unsigned __int8 *)(a1 + 109);
      v74 = 1;
      goto LABEL_93;
    case 10:
    case 11:
      v48 = *(unsigned __int8 *)(a1 + 109);
      v74 = 0;
LABEL_93:
      sub_1CF640(a1, v48, 2u, v22, v25, v74);
      goto LABEL_74;
    case 12:
      v146 = v25;
      sub_3E7240(a1, v22, v22);
      v104 = sub_3E2770(a1 + 24, (unsigned int)v22, v100, v101, v102, v103);
      v105 = v146;
      if ( v104 )
      {
        sub_3E4100(a1, 0x1Cu, v126, v146, (int)v22, 0, 0);
        v105 = v146;
      }
      v48 = 1;
      sub_1CF9F0(a1, 1u, v126, v105, v22, v122);
      goto LABEL_74;
    case 14:
    case 17:
      goto LABEL_82;
    case 15:
    case 18:
      v123 = v25;
      if ( (unsigned __int8)sub_3E6C20(a1, (unsigned int)v25, v16, (__int64)&unk_4078AA, a6, a7, a3) )
        goto LABEL_136;
      v59 = *(_QWORD *)(a1 + 32) + *(unsigned __int16 *)(a1 + 50);
      v60 = get_dtype_size(2);
      sub_1CF210(a1, 3u, v60, v59, 0x3BEA45E214ADDC55LL, 132, 0);
      v25 = v123;
LABEL_82:
      if ( *(_BYTE *)(a1 + 65) == 7 )
      {
        if ( !(unsigned __int8)sub_1CF0C0(a1) )
        {
          v115 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
          v116 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
          if ( v115 != v116 )
          {
            if ( v115 == -1 )
              v116 = -1;
            else
              v116 &= v115;
          }
          sub_3E4100(a1, 0x37u, v126, v116, 0x3BEA45E214ADDC55LL, 0x3BEA45E214ADDC55LL, 0);
        }
        return 0;
      }
      v124 = v25;
      if ( !(unsigned __int8)sub_3E6C20(a1, (unsigned int)v25, v16, v17, a6, a7, a3) )
      {
        v61 = get_dtype_size(2);
        sub_1CF210(a1, 0x36u, v61, 0x3BEA45E214ADDC55LL, 296, v124, 4);
        return 0;
      }
LABEL_136:
      v13 = 1;
      break;
    case 16:
      sub_3E6E40((_QWORD *)a1);
      goto LABEL_136;
    case 19:
      v54 = (int)v22;
      v57 = v25;
      goto LABEL_77;
    case 20:
      v147 = v25;
      v108 = sub_3E2770(a1 + 24, v26, v16, (__int64)&unk_4078AA, a6, a7);
      v48 = v126;
      sub_1CF710(a1, v126, v147, v22, v122, 288, v108 == 0 ? -1 : 0x110);
      goto LABEL_74;
    case 21:
      v43 = (int)v22;
      v45 = v122;
      v46 = v126;
      v22 = v25;
      goto LABEL_71;
    case 22:
      v48 = (unsigned int)(char)v126;
      sub_3E7170(a1, v48, (unsigned int)v25, (unsigned int)v22, (unsigned int)v122, a7);
      goto LABEL_74;
    case 23:
      v94 = v122;
      v91 = v126;
      goto LABEL_111;
    case 24:
      goto LABEL_106;
    case 25:
      v91 = v126;
      v141 = v25;
      v92 = get_dtype_size(v126);
      v93 = (int)v22;
      v22 = 280;
      sub_1CF210(a1, 7u, v92, v93, 0x3BEA45E214ADDC55LL, 280, 0);
      v94 = v122;
      v25 = v141;
      goto LABEL_111;
    case 26:
      goto LABEL_104;
    case 28:
      return 0;
    case 29:
      goto LABEL_107;
    case 34:
      if ( *(_BYTE *)(a1 + 145) )
      {
LABEL_107:
        v140 = v25;
        sub_3E7240(a1, v22, v22);
        if ( (unsigned __int8)sub_3E2770(a1 + 24, (unsigned int)v22, v86, v87, v88, v89) )
        {
          v114 = get_dtype_size(v126);
          sub_1CF210(a1, 0x1Bu, v114, v140, v22, 0, 0);
        }
        v90 = get_dtype_size(v126);
        v48 = 22;
        sub_1CF210(a1, 0x16u, v90, v140, v22, v122, 0);
      }
      else
      {
        v54 = (int)v22;
        v25 = v22;
        v57 = (int)v22;
LABEL_77:
        v134 = v25;
        if ( (unsigned __int8)sub_3E2770(a1 + 24, v26, v16, v17, a6, a7) )
          sub_3E6180(a1, v126, v134, v22, 0);
        v58 = get_dtype_size(v126);
        v48 = 12;
        sub_1CF210(a1, 0xCu, v58, v57, v54, v122, 0);
        v49 = v121;
      }
      goto LABEL_74;
    case 35:
    case 36:
      sub_3E7000(a1, 236, 244, v25, v22, (_WORD)v16 == 35);
      v149[0] = 0xFFFFFFFF00000000LL;
      v149[1] = 0;
      sub_11EBE0((__int64)v149, 238, 244, 2);
      v150[1] = 240;
      v150[0] = 0x400000001LL;
      sub_1CF350(a1, 4, (unsigned __int8 *)v149, nullptr, (unsigned __int8 *)v150);
      sub_1166E0((__int64)v150);
      sub_1166E0((__int64)v149);
      return 0;
    case 41:
    case 42:
      v125 = v25;
      v62 = (int)v22;
      v63 = get_dtype_size(2);
      sub_1CF210(a1, 3u, v63, 31, 0x3BEA45E214ADDC55LL, 288, 1);
      v64 = get_dtype_size(2);
      v65 = 288;
      v66 = 44;
      sub_1CF210(a1, 0x14u, v64, v62, 288, v62, 0);
      v67 = get_dtype_size(2);
      sub_1CF210(a1, 3u, v67, 1, 0x3BEA45E214ADDC55LL, 288, 1);
      v68 = get_dtype_size(2);
      sub_1CF210(a1, 0x16u, v68, 288, v62, 288, 0);
      v69 = get_dtype_size(2);
      sub_1CF210(a1, 0x14u, v69, v125, 288, 288, 0);
      v70 = get_dtype_size(v126);
      sub_1CF210(a1, 3u, v70, 0, 0x3BEA45E214ADDC55LL, v62, 0);
      if ( *(_WORD *)(a1 + 48) != 41 )
LABEL_86:
        v66 = 43;
LABEL_87:
      if ( a2 )
      {
        v112 = sub_3274A0(v66 - 11);
        v113 = get_dtype_size(2);
        sub_1CF210(a1, v112, v113, v65, v62, 7, 0);
      }
      else
      {
        v71 = *(_QWORD *)(a1 + 160) + 16LL * *(_QWORD *)(a1 + 24);
        v72 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
        if ( v71 != v72 )
        {
          v72 &= v71;
          if ( v71 == -1 )
            v72 = -1;
        }
        v73 = get_dtype_size(2);
        sub_1CF210(a1, v66, v73, v65, v62, v72, 0);
      }
      return 0;
    case 43:
      v106 = v26 & 0x1F;
      v107 = v26 & 0x10;
      if ( !(_DWORD)v107 )
      {
        switch ( v106 )
        {
          case 1:
            v62 = (int)v22;
            v65 = v25;
            v66 = 44;
            goto LABEL_87;
          case 2:
            v65 = v25;
            v62 = (int)v22;
            goto LABEL_86;
          case 5:
            v62 = (int)v22;
            v65 = v25;
            v66 = 46;
            goto LABEL_87;
          case 6:
            v62 = (int)v22;
            v65 = v25;
            v66 = 47;
            goto LABEL_87;
          case 10:
            v62 = (int)v22;
            v65 = v25;
            v66 = 50;
            goto LABEL_87;
          case 11:
            v62 = (int)v22;
            v65 = v25;
            v66 = 51;
            goto LABEL_87;
          default:
            break;
        }
      }
      if ( !under_debugger )
        sub_37B760(0xC822u, v107, a3);
      BUG();
    case 44:
      sub_3E6820(a1, 120, *(unsigned __int16 *)(a1 + 70), 193);
      return 0;
    case 45:
      sub_3E6820(a1, 120, *(unsigned __int16 *)(a1 + 70), 80);
      return 0;
    case 47:
    case 48:
    case 49:
      v133 = v25;
      v54 = 288;
      sub_3E5360(a1, (unsigned __int8 *)(a1 + 144), 2u, (unsigned __int16)v16 - 46, 288);
      v55 = get_dtype_size(2);
      v56 = (int)v22;
      v26 = 22;
      LODWORD(v22) = 288;
      sub_1CF210(a1, 0x16u, v55, v56, 288, 288, 0);
      v57 = v133;
      v25 = v133;
      goto LABEL_77;
    case 50:
      v99 = v22;
      v145 = v25;
      v22 = 288;
      sub_3E72C0(a1, v99, 288, 1);
      v94 = v122;
      v91 = v126;
      v25 = v145;
      goto LABEL_111;
    case 51:
      v144 = v25;
      sub_3E7390(a1, v22, 288);
      v22 = 288;
      v94 = v122;
      v91 = v126;
      v25 = v144;
      goto LABEL_111;
    case 52:
      v84 = v22;
      v138 = v25;
      v22 = 288;
      sub_3E72C0(a1, v84, 288, 0);
      v25 = v138;
LABEL_106:
      v139 = v25;
      v85 = get_dtype_size(v126);
      v48 = 19;
      sub_1CF210(a1, 0x13u, v85, v139, v22, v122, 0);
      goto LABEL_74;
    case 53:
      v98 = v22;
      v143 = v25;
      v22 = 288;
      v94 = 272;
      sub_3E72C0(a1, v98, 288, 0);
      v91 = v126;
      v25 = v143;
      v122 = 272;
      goto LABEL_111;
    case 54:
      v82 = v22;
      v136 = v25;
      v22 = 288;
      sub_3E72C0(a1, v82, 288, 0);
      v25 = v136;
LABEL_104:
      v137 = v25;
      v83 = get_dtype_size(v126);
      sub_1CF210(a1, 0x15u, v83, v137, v22, v122, 0);
      v50 = v120;
      v48 = v121;
      goto LABEL_74;
    case 55:
      v43 = (int)v22;
      v46 = v126;
      v22 = v25;
      v122 = 272;
      v45 = 272;
      goto LABEL_71;
    case 61:
      v46 = v126;
      v43 = (int)v22;
      v22 = 280;
      v97 = get_dtype_size(v126);
      v26 = 3;
      sub_1CF210(a1, 3u, v97, 0, 0x3BEA45E214ADDC55LL, 280, 0);
      v45 = v122;
      a6 = v121;
      goto LABEL_71;
    case 62:
      v96 = get_dtype_size(v126);
      v48 = 7;
      sub_1CF210(a1, 7u, v96, (int)v22, 0x3BEA45E214ADDC55LL, v122, 0);
      v49 = v121;
      goto LABEL_74;
    case 63:
      v122 = 272;
      v46 = v126;
      v43 = v25;
      v45 = 272;
      goto LABEL_71;
    case 64:
      v45 = v122;
      v46 = v126;
      v43 = v25;
      goto LABEL_71;
    case 66:
    case 67:
    case 68:
      v132 = v25;
      v43 = 288;
      sub_3E5360(a1, (unsigned __int8 *)(a1 + 144), 2u, (unsigned __int16)v16 - 65, 288);
      v44 = get_dtype_size(2);
      v26 = 22;
      sub_1CF210(a1, 0x16u, v44, (int)v22, 288, 288, 0);
      v22 = v132;
      v45 = v122;
      v46 = v126;
      a7 = v117;
LABEL_71:
      if ( (unsigned __int8)sub_3E2770(a1 + 24, v26, v16, v17, a6, a7) )
      {
        v110 = get_dtype_size(v46);
        sub_1CF210(a1, 0x23u, v110, v22, v43, 0, 0);
        v111 = get_dtype_size(v46);
        sub_1CF210(a1, 0x1Eu, v111, v22, v43, 3, 0);
      }
      v47 = get_dtype_size(v46);
      v48 = 13;
      sub_1CF210(a1, 0xDu, v47, v22, v43, v45, 0);
      goto LABEL_74;
    case 71:
      v122 = 272;
      v91 = v126;
      v94 = 272;
LABEL_111:
      v142 = v25;
      v95 = get_dtype_size(v91);
      v48 = 20;
      sub_1CF210(a1, 0x14u, v95, v142, v22, v94, 0);
      v51 = v121;
LABEL_74:
      if ( (unsigned __int8)sub_3E2770(a1 + 24, v48, v49, v50, v51, v52) )
      {
        sub_3E5F30(a1, 33, v122, v126, 1);
        v53 = get_dtype_size(v126);
        sub_1CF210(a1, 0x1Du, v53, v122, 0x3BEA45E214ADDC55LL, 2, 0);
      }
      return 0;
    default:
      goto LABEL_30;
  }
  return v13;
}
