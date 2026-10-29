__int64 __fastcall sub_1511350(__int64 a1, unsigned int a2, unsigned int a3, char a4, __m128i a5, __m128 a6)
{
  __int64 result; // rax
  __int64 v11; // rbp
  _BYTE *v12; // rax
  signed __int64 v13; // rdx
  _BYTE *v14; // rax
  signed __int64 v15; // rdx
  char v16; // r13
  char v17; // bp
  char v18; // dl
  unsigned int v19; // esi
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  _BYTE *v24; // r13
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 *v29; // r13
  __int16 v30; // ax
  __int64 v31; // r9
  __int16 v32; // ax
  char v33; // r8
  char v34; // bl
  char v35; // r8
  unsigned int v36; // eax
  _BYTE *v37; // rax
  signed __int64 v38; // rdx
  _BYTE *v39; // rax
  signed __int64 v40; // rdx
  char v41; // r13
  char v42; // bl
  char v43; // bl
  char v44; // dl
  __int64 *v45; // rdi
  int v46; // eax
  int v47; // eax
  int v48; // edx
  __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 *v51; // rsi
  int v52; // eax
  __int64 *v53; // rdi
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 *v58; // rdi
  _BYTE *v59; // rax
  signed __int64 v60; // rdx
  _BYTE *v61; // rax
  signed __int64 v62; // rdx
  __int64 *v63; // rdi
  _BYTE *v64; // rax
  signed __int64 v65; // rdx
  __int16 v66; // ax
  char v67; // al
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned int v72; // eax
  unsigned __int64 v73; // rdx
  const __m128i *v74; // rcx
  _BYTE *v75; // rax
  signed __int64 v76; // rdx
  signed __int64 v77; // rdx
  __int64 v78; // rdi
  unsigned __int64 v79; // rax
  __int64 v80; // rax
  _BYTE *v81; // rax
  signed __int64 v82; // rdx
  _BYTE *v83; // rax
  signed __int64 v84; // rdx
  _BYTE *v85; // rax
  signed __int64 v86; // rdx
  _BYTE *v87; // rax
  signed __int64 v88; // rdx
  _BYTE *v89; // rax
  signed __int64 v90; // rdx
  _BYTE *v91; // rax
  signed __int64 v92; // rdx
  _BYTE *v93; // rax
  signed __int64 v94; // rdx
  _BYTE *v95; // rax
  signed __int64 v96; // rdx
  _BYTE *v97; // rax
  signed __int64 v98; // rdx
  _BYTE *v99; // rax
  signed __int64 v100; // rdx
  _BYTE *v101; // rax
  signed __int64 v102; // rdx
  _BYTE *v103; // rax
  signed __int64 v104; // rdx
  _BYTE *v105; // rax
  signed __int64 v106; // rdx
  _BYTE *v107; // rax
  signed __int64 v108; // rdx
  _BYTE *v109; // rax
  signed __int64 v110; // rdx
  _BYTE *v111; // rax
  signed __int64 v112; // rdx
  _BYTE *v113; // rax
  signed __int64 v114; // rdx
  _BYTE *v115; // rax
  signed __int64 v116; // rdx
  _BYTE *v117; // rax
  signed __int64 v118; // rdx
  _BYTE *v119; // rax
  signed __int64 v120; // rdx
  _BYTE *v121; // rax
  signed __int64 v122; // rdx
  _BYTE *v123; // rax
  signed __int64 v124; // rdx
  _BYTE *v125; // rax
  signed __int64 v126; // rdx
  _BYTE *v127; // rax
  signed __int64 v128; // rdx
  _BYTE *v129; // rax
  signed __int64 v130; // rdx
  _BYTE *v131; // rax
  signed __int64 v132; // rdx
  signed __int64 v133; // rdx
  unsigned int v134; // [rsp+8h] [rbp-1D0h]
  __int64 v135; // [rsp+8h] [rbp-1D0h]
  int v136; // [rsp+8h] [rbp-1D0h]
  __int64 v137; // [rsp+8h] [rbp-1D0h]
  char v138; // [rsp+8h] [rbp-1D0h]
  int *v139; // [rsp+10h] [rbp-1C8h]
  __int64 v140; // [rsp+10h] [rbp-1C8h]
  char v141; // [rsp+10h] [rbp-1C8h]
  char v142; // [rsp+10h] [rbp-1C8h]
  char v143; // [rsp+10h] [rbp-1C8h]
  __int64 v144; // [rsp+10h] [rbp-1C8h]
  unsigned int v145; // [rsp+2Ch] [rbp-1ACh]
  int v146; // [rsp+2Ch] [rbp-1ACh]
  int v147; // [rsp+38h] [rbp-1A0h]
  int v149; // [rsp+4Ah] [rbp-18Eh] BYREF
  __int16 v150; // [rsp+4Eh] [rbp-18Ah]
  __int128 v151; // [rsp+70h] [rbp-168h] BYREF
  void *v152[2]; // [rsp+80h] [rbp-158h]
  __int128 v153; // [rsp+90h] [rbp-148h]
  void *v154; // [rsp+A0h] [rbp-138h] BYREF
  __int64 v155; // [rsp+A8h] [rbp-130h]
  __int64 v156; // [rsp+B0h] [rbp-128h] BYREF
  int v157; // [rsp+B8h] [rbp-120h]
  __int16 v158; // [rsp+BCh] [rbp-11Ch]
  __int64 (__fastcall *v159)(__int64); // [rsp+C0h] [rbp-118h]
  __int64 v160; // [rsp+C8h] [rbp-110h]
  __int64 v161; // [rsp+D0h] [rbp-108h]
  __int128 v162; // [rsp+E0h] [rbp-F8h] BYREF
  __int64 v163; // [rsp+F0h] [rbp-E8h]
  int v164; // [rsp+F8h] [rbp-E0h]
  __int16 v165; // [rsp+FCh] [rbp-DCh]
  __int64 (__fastcall *v166)(__int64); // [rsp+100h] [rbp-D8h]
  __int64 v167; // [rsp+108h] [rbp-D0h]
  __int64 v168; // [rsp+110h] [rbp-C8h]
  void *ptr; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v170; // [rsp+138h] [rbp-A0h]
  _BYTE v171[152]; // [rsp+140h] [rbp-98h] BYREF

  *(_DWORD *)(a1 + 2156) = a3;
  if ( a3 == 106 )
  {
    result = 0;
    if ( *(_WORD *)(a1 + 32) != 449 )
    {
      sub_1504CE0(a1, a2);
      return 0;
    }
    return result;
  }
  v134 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 232LL) + 64LL);
  if ( (unsigned __int8)sub_20EC3B0(a2, a3, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 64LL)) )
  {
    switch ( a3 )
    {
      case 0u:
      case 0x11u:
        v17 = 0;
        v139 = (int *)(a1 + 16);
        goto LABEL_86;
      case 1u:
      case 2u:
      case 0xEu:
      case 0x10u:
      case 0x1Eu:
      case 0x27u:
      case 0x3Au:
      case 0x3Cu:
      case 0x41u:
      case 0x54u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x5Cu:
      case 0x5Fu:
      case 0x65u:
      case 0x67u:
      case 0x68u:
      case 0x6Bu:
      case 0x71u:
      case 0x73u:
        v33 = 0;
        v17 = 0;
        goto LABEL_41;
      case 4u:
      case 6u:
      case 7u:
      case 0x12u:
      case 0x13u:
      case 0x16u:
      case 0x1Du:
      case 0x1Fu:
      case 0x20u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x29u:
      case 0x2Du:
      case 0x2Fu:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x37u:
      case 0x43u:
      case 0x52u:
      case 0x55u:
      case 0x5Eu:
      case 0x62u:
      case 0x66u:
      case 0x6Eu:
      case 0x6Fu:
        v42 = 0;
        v17 = 0;
        goto LABEL_66;
      case 5u:
      case 8u:
      case 0xFu:
      case 0x17u:
      case 0x19u:
      case 0x22u:
      case 0x23u:
      case 0x28u:
      case 0x2Au:
      case 0x3Bu:
      case 0x42u:
      case 0x45u:
      case 0x46u:
      case 0x48u:
      case 0x4Bu:
      case 0x4Du:
      case 0x4Fu:
      case 0x51u:
      case 0x59u:
      case 0x60u:
        v33 = 0;
        v17 = 0;
        goto LABEL_73;
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0x14u:
      case 0x21u:
      case 0x53u:
      case 0x5Du:
        v35 = 0;
        v17 = 0;
        goto LABEL_46;
      case 0x15u:
      case 0x1Au:
      case 0x1Cu:
      case 0x4Cu:
      case 0x5Au:
        v34 = 0;
        v17 = 0;
        goto LABEL_49;
      case 0x18u:
        v43 = 0;
        v17 = 0;
        goto LABEL_80;
      case 0x1Bu:
        if ( *(_WORD *)(a1 + 32) != 449 )
          sub_1504CE0(a1, a2);
        return 0;
      case 0x2Bu:
        v44 = 0;
        v17 = 0;
        goto LABEL_84;
      case 0x2Cu:
        v34 = 0;
        v17 = 0;
        goto LABEL_44;
      case 0x31u:
      case 0x6Du:
        result = sub_1509FA0(a1, a3, 0, a5);
        break;
      case 0x38u:
      case 0x64u:
      case 0x69u:
        v17 = 0;
        sub_1564840(&ptr, a1, a1 + 16, 1820);
        v59 = (_BYTE *)sub_20EB760(a3, 0);
        sub_AEC220((unsigned __int8 **)&ptr, v59, v60);
        v61 = (_BYTE *)sub_20EAB70(a2, v134);
        sub_AEC220((unsigned __int8 **)&ptr, v61, v62);
        sub_AEA040((__int64)&ptr);
        goto LABEL_99;
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
        v17 = 0;
        v139 = (int *)(a1 + 16);
        goto LABEL_101;
      case 0x47u:
      case 0x63u:
        v42 = 0;
        v17 = 0;
        goto LABEL_64;
      case 0x49u:
        result = sub_150A1F0(a1, 0);
        break;
      case 0x4Au:
        v11 = a1 + 16;
        if ( a2 == 70 )
          goto LABEL_159;
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 68LL) & 1) != 0 )
        {
          result = sub_1506270(a1, 0x4Au, 0);
        }
        else
        {
          sub_1564840(&ptr, a1, a1 + 16, 1821);
          v127 = (_BYTE *)sub_20EB760(74, 0);
          sub_AEC220((unsigned __int8 **)&ptr, v127, v128);
          v129 = (_BYTE *)sub_20EAB70(a2, v134);
          sub_AEC220((unsigned __int8 **)&ptr, v129, v130);
          sub_AEA040((__int64)&ptr);
          sub_1506270(a1, 0x4Au, 0);
          result = 0;
        }
        break;
      case 0x50u:
        v17 = 0;
        goto LABEL_56;
      case 0x5Bu:
        v41 = 0;
        v17 = 0;
        goto LABEL_59;
      case 0x61u:
        v17 = 0;
        goto LABEL_38;
      case 0x6Cu:
        v16 = 0;
        v17 = 0;
        goto LABEL_10;
      case 0x70u:
        v17 = 0;
        goto LABEL_18;
      default:
        return 0;
    }
    return result;
  }
  v11 = a1 + 16;
  v139 = (int *)(a1 + 16);
  sub_1564840(&ptr, a1, a1 + 16, 1820);
  v12 = (_BYTE *)sub_20EB760(a3, 0);
  sub_AEC220((unsigned __int8 **)&ptr, v12, v13);
  v14 = (_BYTE *)sub_20EAB70(a2, v134);
  sub_AEC220((unsigned __int8 **)&ptr, v14, v15);
  sub_AEA040((__int64)&ptr);
  switch ( a3 )
  {
    case 0u:
    case 0x11u:
      v17 = 1;
LABEL_86:
      v45 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v45, v139);
      v46 = *(_DWORD *)(a1 + 40);
      v163 = a1;
      v165 = 63;
      v146 = v46;
      v47 = *(_DWORD *)(a1 + 16);
      v164 = 1507350;
      v147 = v47;
      v154 = &v156;
      v155 = 0x400000000LL;
      *(_QWORD *)&v162 = a1 + 1952;
      LOBYTE(v47) = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      BYTE8(v162) = v47;
      v166 = sub_146A990;
      v167 = 0;
      v168 = 0;
      sub_1503860((__int64)&v162);
      while ( 1 )
      {
        sub_13D35F0(
          (__int64)&ptr,
          (__int64)v139,
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL),
          nullptr);
        *(_QWORD *)&v151 = sub_20EDA70(ptr, v170);
        DWORD2(v151) = v48;
        if ( ptr != v171 )
          operator delete(ptr);
        if ( (_DWORD)v151 == 103 )
          break;
        if ( (unsigned __int8)sub_FFF100(v151) )
        {
          v49 = (unsigned int)v155;
          v50 = (unsigned int)v155 + 1LL;
          if ( v50 > HIDWORD(v155) )
          {
            sub_2237220(&v154, &v156, v50, 4);
            v49 = (unsigned int)v155;
          }
          v51 = (__int64 *)v139;
          *((_DWORD *)v154 + v49) = v151;
          v52 = *(_DWORD *)(a1 + 16);
          v53 = *(__int64 **)(a1 + 8);
          LODWORD(v155) = v155 + 1;
          *(_DWORD *)(a1 + 40) = v52;
          sub_14634E0(v53, v139);
        }
        else
        {
          sub_1564840(&ptr, a1, v139, 1820);
          v75 = (_BYTE *)sub_20EB760(a3, 0);
          sub_AEC220((unsigned __int8 **)&ptr, v75, v76);
          v51 = (__int64 *)sub_20EAB70(a2, v134);
          sub_AEC220((unsigned __int8 **)&ptr, v51, v77);
          sub_AEA040((__int64)&ptr);
        }
        v57 = *(unsigned int *)(a1 + 16);
        if ( *(_WORD *)(a1 + 32) != 66 )
          goto LABEL_95;
        *(_DWORD *)(a1 + 40) = v57;
        sub_14634E0(*(__int64 **)(a1 + 8), v139);
      }
      if ( *(_WORD *)(a1 + 32) != 449 )
        sub_1504CE0(a1, 2u);
      sub_1564840(&ptr, a1, v139, 1820);
      v131 = (_BYTE *)sub_20EB760(a3, 0);
      sub_AEC220((unsigned __int8 **)&ptr, v131, v132);
      v51 = (__int64 *)sub_20EAB70(a2, v134);
      sub_AEC220((unsigned __int8 **)&ptr, v51, v133);
      sub_AEA040((__int64)&ptr);
      v57 = *(unsigned int *)(a1 + 16);
LABEL_95:
      v136 = v57;
      sub_14808E0((__int64)&v162, v51, v57, v54, v55, v56);
      result = sub_1AF5FD0(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL), a3, (_DWORD)v154, v155, v146, v147, v136);
      v58 = (__int64 *)v154;
      *(_BYTE *)v162 = BYTE8(v162);
      if ( v58 != &v156 )
      {
        v137 = result;
        free(v58);
        result = v137;
      }
      goto LABEL_14;
    case 1u:
    case 2u:
    case 0xEu:
    case 0x10u:
    case 0x1Eu:
    case 0x27u:
    case 0x3Au:
    case 0x3Cu:
    case 0x41u:
    case 0x54u:
    case 0x56u:
    case 0x57u:
    case 0x58u:
    case 0x5Cu:
    case 0x5Fu:
    case 0x65u:
    case 0x67u:
    case 0x68u:
    case 0x6Bu:
    case 0x71u:
    case 0x73u:
      v33 = 1;
      v17 = 1;
LABEL_41:
      if ( a4 )
        goto LABEL_42;
      v141 = v33;
      sub_1564840(&ptr, a1, a1 + 16, 45);
      v101 = (_BYTE *)sub_20EAB70(a2, v134);
      sub_AEC220((unsigned __int8 **)&ptr, v101, v102);
      v103 = (_BYTE *)sub_20EB760(a3, 0);
      sub_AEC220((unsigned __int8 **)&ptr, v103, v104);
      sub_15038B0((unsigned __int8 **)&ptr);
      sub_AEA040((__int64)&ptr);
      sub_1506270(a1, a3, v141);
      return 0;
    case 4u:
    case 6u:
    case 7u:
    case 0x12u:
    case 0x13u:
    case 0x16u:
    case 0x1Du:
    case 0x1Fu:
    case 0x20u:
    case 0x24u:
    case 0x25u:
    case 0x26u:
    case 0x29u:
    case 0x2Du:
    case 0x2Fu:
    case 0x33u:
    case 0x34u:
    case 0x35u:
    case 0x37u:
    case 0x43u:
    case 0x52u:
    case 0x55u:
    case 0x5Eu:
    case 0x62u:
    case 0x66u:
    case 0x6Eu:
    case 0x6Fu:
      v42 = 1;
      v17 = 1;
      goto LABEL_66;
    case 5u:
    case 8u:
    case 0xFu:
    case 0x17u:
    case 0x19u:
    case 0x22u:
    case 0x23u:
    case 0x28u:
    case 0x2Au:
    case 0x3Bu:
    case 0x42u:
    case 0x45u:
    case 0x46u:
    case 0x48u:
    case 0x4Bu:
    case 0x4Du:
    case 0x4Fu:
    case 0x51u:
    case 0x59u:
    case 0x60u:
      v33 = 1;
      v17 = 1;
LABEL_73:
      if ( !a4 )
      {
        v142 = v33;
        v17 = 1;
        sub_1564840(&ptr, a1, a1 + 16, 45);
        v111 = (_BYTE *)sub_20EAB70(a2, v134);
        sub_AEC220((unsigned __int8 **)&ptr, v111, v112);
        v113 = (_BYTE *)sub_20EB760(a3, 0);
        sub_AEC220((unsigned __int8 **)&ptr, v113, v114);
        sub_15038B0((unsigned __int8 **)&ptr);
        sub_AEA040((__int64)&ptr);
        v33 = v142;
      }
      if ( (a3 & 0xFFFFFFFD) == 0x4D )
      {
        v78 = *(_QWORD *)(a1 + 8);
        v79 = *(_QWORD *)(v78 + 2944);
        if ( v79 >= *(unsigned int *)(v78 + 2912) )
        {
          v138 = v33;
          v80 = sub_14180A0(v78, 1u);
          v33 = v138;
        }
        else
        {
          v80 = *(_QWORD *)(v78 + 2904) + 24 * v79;
        }
        if ( *(_WORD *)(v80 + 16) != 22 )
        {
LABEL_42:
          result = sub_1506270(a1, a3, v33);
          goto LABEL_14;
        }
      }
      else if ( ((a3 - 40) & 0xFFFFFFDF) == 0 || a3 == 70 )
      {
        result = sub_150A870(a1, a2, a3, v33, a5);
        goto LABEL_14;
      }
      result = sub_1509A00(a1, a3, v33, a5);
      goto LABEL_14;
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0x14u:
    case 0x21u:
    case 0x53u:
    case 0x5Du:
      v35 = 1;
      v17 = 1;
LABEL_46:
      if ( a4 )
      {
        result = sub_1508610(a1, a3, v35);
        goto LABEL_14;
      }
      v143 = v35;
      sub_1564840(&ptr, a1, a1 + 16, 45);
      v115 = (_BYTE *)sub_20EAB70(a2, v134);
      sub_AEC220((unsigned __int8 **)&ptr, v115, v116);
      v117 = (_BYTE *)sub_20EB760(a3, 0);
      sub_AEC220((unsigned __int8 **)&ptr, v117, v118);
      sub_15038B0((unsigned __int8 **)&ptr);
      sub_AEA040((__int64)&ptr);
      sub_1508610(a1, a3, v143);
      return 0;
    case 0x15u:
    case 0x1Au:
    case 0x1Cu:
    case 0x4Cu:
    case 0x5Au:
      v34 = 1;
      v17 = 1;
LABEL_49:
      v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 64LL);
      if ( v36 > 0x31 && a3 == 21 || a3 == 76 && v36 <= 0x32 || a4 )
      {
LABEL_44:
        result = sub_150A870(a1, a2, a3, v34, a5);
        goto LABEL_14;
      }
      sub_1564840(&ptr, a1, a1 + 16, 45);
      v37 = (_BYTE *)sub_20EAB70(a2, v134);
      sub_AEC220((unsigned __int8 **)&ptr, v37, v38);
      v39 = (_BYTE *)sub_20EB760(a3, 0);
      sub_AEC220((unsigned __int8 **)&ptr, v39, v40);
      sub_15038B0((unsigned __int8 **)&ptr);
      sub_AEA040((__int64)&ptr);
      sub_150A870(a1, a2, a3, v34, a5);
      return 0;
    case 0x18u:
      v43 = 1;
      v17 = 1;
LABEL_80:
      if ( a2 == 107 )
        goto LABEL_124;
      if ( !a4 )
      {
        sub_1564840(&ptr, a1, a1 + 16, 45);
        v119 = (_BYTE *)sub_20EAB70(a2, v134);
        sub_AEC220((unsigned __int8 **)&ptr, v119, v120);
        v121 = (_BYTE *)sub_20EB760(24, 0);
        sub_AEC220((unsigned __int8 **)&ptr, v121, v122);
        sub_15038B0((unsigned __int8 **)&ptr);
        sub_AEA040((__int64)&ptr);
        sub_1506270(a1, 0x18u, v43);
        return 0;
      }
      v18 = v43;
      v19 = 24;
LABEL_13:
      result = sub_1506270(a1, v19, v18);
      goto LABEL_14;
    case 0x1Bu:
      if ( *(_WORD *)(a1 + 32) == 449 )
        return 0;
      sub_1504CE0(a1, a2);
      return 0;
    case 0x2Bu:
      v44 = 1;
      v17 = 1;
LABEL_84:
      result = sub_1509A00(a1, 0x2Bu, v44, a5);
      goto LABEL_14;
    case 0x2Cu:
      sub_150A870(a1, a2, 0x2Cu, 1, a5);
      return 0;
    case 0x31u:
    case 0x6Du:
      v43 = 1;
      v17 = 1;
LABEL_124:
      result = sub_1509FA0(a1, a3, v43, a5);
      goto LABEL_14;
    case 0x38u:
    case 0x64u:
    case 0x69u:
      v17 = 1;
LABEL_99:
      LODWORD(ptr) = 29425730;
      sub_15680D0(a1, &ptr, 2, 2);
      result = 0;
      goto LABEL_14;
    case 0x3Du:
    case 0x3Eu:
    case 0x3Fu:
    case 0x40u:
      v17 = 1;
LABEL_101:
      if ( !a4 )
      {
        v17 = 1;
        sub_1564840(&ptr, a1, v139, 45);
        v93 = (_BYTE *)sub_20EAB70(a2, v134);
        sub_AEC220((unsigned __int8 **)&ptr, v93, v94);
        v95 = (_BYTE *)sub_20EB760(a3, 0);
        sub_AEC220((unsigned __int8 **)&ptr, v95, v96);
        sub_15038B0((unsigned __int8 **)&ptr);
        sub_AEA040((__int64)&ptr);
      }
      v63 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v63, v139);
      result = sub_1AF90C0(
                 *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
                 a3,
                 *(unsigned int *)(a1 + 40),
                 *(unsigned int *)(a1 + 16));
      goto LABEL_14;
    case 0x47u:
    case 0x63u:
      v42 = 1;
      v17 = 1;
LABEL_64:
      if ( !a4 )
      {
        sub_1564840(&ptr, a1, a1 + 16, 45);
        v85 = (_BYTE *)sub_20EAB70(a2, v134);
        sub_AEC220((unsigned __int8 **)&ptr, v85, v86);
        v87 = (_BYTE *)sub_20EB760(a3, 0);
        sub_AEC220((unsigned __int8 **)&ptr, v87, v88);
        sub_15038B0((unsigned __int8 **)&ptr);
        v17 = 1;
        sub_AEA040((__int64)&ptr);
      }
LABEL_66:
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 64LL) > 0x33u && a2 == 47 && a3 == 22 )
      {
        sub_1564840(&ptr, a1, a1 + 16, 2170);
        sub_AEA040((__int64)&ptr);
      }
      result = sub_150F9E0(a1, a2, a3, v42);
      goto LABEL_14;
    case 0x49u:
      sub_150A1F0(a1, 1);
      return 0;
    case 0x4Au:
      if ( a2 == 70 )
      {
LABEL_159:
        sub_1564840(&ptr, a1, v11, 1820);
        v123 = (_BYTE *)sub_20EB760(74, 0);
        sub_AEC220((unsigned __int8 **)&ptr, v123, v124);
        v125 = (_BYTE *)sub_20EAB70(70, v134);
        sub_AEC220((unsigned __int8 **)&ptr, v125, v126);
        sub_AEA040((__int64)&ptr);
      }
      sub_1564840(&ptr, a1, v11, 2049);
      v64 = (_BYTE *)sub_20EB760(74, 0);
      sub_AEC220((unsigned __int8 **)&ptr, v64, v65);
      sub_1503D30((unsigned __int8 **)&ptr, (__int64)"target teams");
      sub_AEA040((__int64)&ptr);
      sub_1506270(a1, 0x4Au, 1);
      return 0;
    case 0x50u:
      v17 = 1;
LABEL_56:
      if ( a4 )
      {
        result = sub_15112A0(a1, a5);
        goto LABEL_14;
      }
      sub_1564840(&ptr, a1, a1 + 16, 45);
      v97 = (_BYTE *)sub_20EAB70(a2, v134);
      sub_AEC220((unsigned __int8 **)&ptr, v97, v98);
      v99 = (_BYTE *)sub_20EB760(80, 0);
      sub_AEC220((unsigned __int8 **)&ptr, v99, v100);
      sub_15038B0((unsigned __int8 **)&ptr);
      sub_AEA040((__int64)&ptr);
      sub_15112A0(a1, a5);
      return 0;
    case 0x5Bu:
      v41 = 1;
      v17 = 1;
LABEL_59:
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 64LL) <= 0x3Bu )
      {
        v17 = 1;
        sub_1564840(&ptr, a1, a1 + 16, 1795);
        v109 = (_BYTE *)sub_20EAB70(61, v134);
        sub_AEC220((unsigned __int8 **)&ptr, v109, v110);
        sub_AEA040((__int64)&ptr);
      }
      if ( a4 )
      {
        result = sub_1506270(a1, 0x5Bu, v41);
        goto LABEL_14;
      }
      sub_1564840(&ptr, a1, a1 + 16, 45);
      v105 = (_BYTE *)sub_20EAB70(a2, v134);
      sub_AEC220((unsigned __int8 **)&ptr, v105, v106);
      v107 = (_BYTE *)sub_20EB760(91, 0);
      sub_AEC220((unsigned __int8 **)&ptr, v107, v108);
      sub_15038B0((unsigned __int8 **)&ptr);
      sub_AEA040((__int64)&ptr);
      sub_1506270(a1, 0x5Bu, v41);
      return 0;
    case 0x61u:
      v17 = 1;
LABEL_38:
      if ( a4 )
      {
        result = sub_15111F0(a1, a5);
        goto LABEL_14;
      }
      sub_1564840(&ptr, a1, a1 + 16, 45);
      v89 = (_BYTE *)sub_20EAB70(a2, v134);
      sub_AEC220((unsigned __int8 **)&ptr, v89, v90);
      v91 = (_BYTE *)sub_20EB760(97, 0);
      sub_AEC220((unsigned __int8 **)&ptr, v91, v92);
      sub_15038B0((unsigned __int8 **)&ptr);
      sub_AEA040((__int64)&ptr);
      sub_15111F0(a1, a5);
      return 0;
    case 0x6Cu:
      v16 = 1;
      v17 = 1;
LABEL_10:
      if ( !a4 )
      {
        v17 = 1;
        sub_1564840(&ptr, a1, a1 + 16, 45);
        v81 = (_BYTE *)sub_20EAB70(a2, v134);
        sub_AEC220((unsigned __int8 **)&ptr, v81, v82);
        v83 = (_BYTE *)sub_20EB760(108, 0);
        sub_AEC220((unsigned __int8 **)&ptr, v83, v84);
        sub_15038B0((unsigned __int8 **)&ptr);
        sub_AEA040((__int64)&ptr);
      }
      v18 = v16;
      v19 = 108;
      if ( a2 != 17 )
        goto LABEL_13;
      result = sub_1508610(a1, 0x6Cu, v16);
      goto LABEL_14;
    case 0x70u:
      v17 = 1;
LABEL_18:
      v145 = *(_DWORD *)(a1 + 16);
      sub_1504200(a1);
      v154 = (void *)(a1 + 1952);
      v20 = *(_BYTE *)(a1 + 1952);
      *(_BYTE *)(a1 + 1952) = 1;
      LOBYTE(v155) = v20;
      v159 = sub_146A990;
      v156 = a1;
      v157 = 1507350;
      v158 = 449;
      v160 = 0;
      v161 = 0;
      if ( (unsigned __int8)sub_156A040(&v154, 1625, "uses_allocator", 0) )
      {
        result = 0;
        goto LABEL_36;
      }
      ptr = v171;
      v170 = 0x400000000LL;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    v21 = *(_QWORD *)(a1 + 8);
    v151 = 0;
    *(_OWORD *)v152 = 0;
    v153 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(v21 + 56) + 1LL) & 8) != 0 )
      v22 = sub_14D2870(a1, 0, 0.0, a6);
    else
      v22 = sub_14D2560(a1, (__int64)&v151, 0, (__m128i)0LL, a6);
    if ( v22 == 1 )
    {
      v25 = (__int64 *)&v162;
      LODWORD(v162) = 1507394;
      WORD2(v162) = 449;
      sub_15680D0(a1, &v162, 3, 2);
      goto LABEL_156;
    }
    v24 = ptr;
    v25 = (__int64 *)((char *)ptr + 24 * (unsigned int)v170);
    if ( (unsigned int)v170 >= (unsigned __int64)HIDWORD(v170) )
    {
      v73 = (unsigned int)v170 + 1LL;
      v74 = (const __m128i *)&v162;
      v162 = 0;
      v163 = 0;
      if ( HIDWORD(v170) < v73 )
      {
        v144 = v22;
        if ( ptr > &v162 || v25 <= (__int64 *)&v162 )
        {
          sub_2237220(&ptr, v171, v73, 24);
          v22 = v144;
          v25 = (__int64 *)((char *)ptr + 24 * (unsigned int)v170);
          v74 = (const __m128i *)&v162;
        }
        else
        {
          sub_2237220(&ptr, v171, v73, 24);
          v22 = v144;
          v74 = (const __m128i *)((char *)ptr + (char *)&v162 - v24);
          v25 = (__int64 *)((char *)ptr + 24 * (unsigned int)v170);
        }
      }
      a6 = (__m128)_mm_loadu_si128(v74);
      *(__m128 *)v25 = a6;
      v25[2] = v74[1].m128i_i64[0];
      v27 = 3LL * (unsigned int)(v170 + 1);
      LODWORD(v170) = v170 + 1;
      v28 = (__int64)ptr;
      v29 = (unsigned __int64 *)((char *)ptr + 8 * v27 - 24);
    }
    else
    {
      v26 = (unsigned int)(v170 + 1);
      *(_OWORD *)v25 = 0;
      v27 = 3 * v26;
      v25[2] = 0;
      LODWORD(v170) = v26;
      v28 = (__int64)ptr;
      v29 = (unsigned __int64 *)((char *)ptr + 8 * v27 - 24);
    }
    *v29 = v22 & 0xFFFFFFFFFFFFFFFELL;
    v30 = *(_WORD *)(a1 + 32);
    if ( v30 == 22 )
      break;
LABEL_26:
    if ( v30 != 23 && v30 != 66 )
    {
      sub_1564840(&v162, a1, a1 + 16, 1803);
      v25 = (__int64 *)"uses_allocators";
      sub_1503D30((unsigned __int8 **)&v162, (__int64)"uses_allocators");
      sub_15038B0((unsigned __int8 **)&v162);
      sub_AEA040((__int64)&v162);
      v30 = *(_WORD *)(a1 + 32);
    }
    if ( v30 == 66 )
      sub_1504200(a1);
    v31 = HIDWORD(v152[1]);
    if ( HIDWORD(v152[1]) )
    {
      free(v152[0]);
      v66 = *(_WORD *)(a1 + 32);
      if ( v66 == 449 || v66 == 23 )
        goto LABEL_34;
    }
    else
    {
      v32 = *(_WORD *)(a1 + 32);
      if ( v32 == 23 || v32 == 449 )
        goto LABEL_34;
    }
  }
  v163 = a1;
  v164 = 1507350;
  *(_QWORD *)&v162 = a1 + 1952;
  v67 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  BYTE8(v162) = v67;
  v165 = 449;
  v166 = sub_146A990;
  v167 = 0;
  v168 = 0;
  sub_1503860((__int64)&v162);
  v25 = nullptr;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 8) != 0 )
    v68 = sub_14D2870(a1, 0, 0.0, a6);
  else
    v68 = sub_14BFC10((const __m128i *)a1, 0, (__m128i)0LL);
  v140 = v68;
  sub_14808E0((__int64)&v162, nullptr, v68, v69, v70, v71);
  if ( v140 != 1 )
  {
    v72 = v168;
    v29[1] = v140 & 0xFFFFFFFFFFFFFFFELL;
    v28 = BYTE8(v162);
    v29[2] = __PAIR64__(HIDWORD(v168), v72);
    *(_BYTE *)v162 = v28;
    v30 = *(_WORD *)(a1 + 32);
    goto LABEL_26;
  }
  v25 = (__int64 *)&v149;
  v149 = 1507394;
  v150 = 449;
  sub_15680D0(a1, &v149, 3, 2);
  v28 = BYTE8(v162);
  *(_BYTE *)v162 = BYTE8(v162);
LABEL_156:
  v23 = HIDWORD(v152[1]);
  if ( HIDWORD(v152[1]) )
    free(v152[0]);
LABEL_34:
  sub_14808E0((__int64)&v154, v25, v28, v27, v23, v31);
  result = sub_1B440A0(
             *(_QWORD *)(*(_QWORD *)(a1 + 96) + 760LL),
             v145,
             (unsigned int)v161,
             HIDWORD(v161),
             ptr,
             (unsigned int)v170,
             0.0);
  if ( ptr != v171 )
  {
    v135 = result;
    free(ptr);
    result = v135;
  }
LABEL_36:
  *(_BYTE *)v154 = v155;
LABEL_14:
  if ( v17 )
    return 0;
  return result;
}
