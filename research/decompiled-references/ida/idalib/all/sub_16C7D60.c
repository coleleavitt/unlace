__int64 __fastcall sub_16C7D60(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int16 *v9; // rsi
  unsigned __int16 *v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // edx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r10
  int v36; // eax
  __int64 v37; // rsi
  __int64 v38; // rax
  int v39; // edx
  __int64 v40; // rsi
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  char v43; // dl
  __int64 v44; // rdx
  __int64 v45; // rax
  char v46; // r11
  char v47; // dl
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  char v54; // al
  unsigned int v55; // edx
  unsigned int v56; // eax
  char v57; // al
  unsigned int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  int v68; // edx
  __int64 v69; // rax
  unsigned int v70; // edx
  __int64 v71; // rsi
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned __int8 v77; // al
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned int v80; // edx
  int v81; // ebx
  unsigned int v82; // r12d
  __int64 v83; // rax
  unsigned __int16 *v84; // rax
  bool v85; // bl
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r8
  __int64 v96; // r9
  unsigned int v97; // edx
  int v98; // eax
  unsigned int v99; // eax
  unsigned int v100; // edx
  char v101; // al
  unsigned __int64 v102; // [rsp+0h] [rbp-108h]
  unsigned int v103; // [rsp+0h] [rbp-108h]
  char v104; // [rsp+8h] [rbp-100h]
  __int64 (__fastcall *v105)(__int64, __int64); // [rsp+8h] [rbp-100h]
  char v106; // [rsp+10h] [rbp-F8h]
  __int64 v107; // [rsp+10h] [rbp-F8h]
  unsigned int v108; // [rsp+10h] [rbp-F8h]
  char v109; // [rsp+3Bh] [rbp-CDh] BYREF
  __int64 v110; // [rsp+3Ch] [rbp-CCh]
  int v111; // [rsp+44h] [rbp-C4h]
  __int64 v112; // [rsp+48h] [rbp-C0h]
  unsigned int v113; // [rsp+50h] [rbp-B8h]
  __int64 v114; // [rsp+54h] [rbp-B4h]
  unsigned int v115; // [rsp+5Ch] [rbp-ACh]
  void *v116; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v117; // [rsp+68h] [rbp-A0h]
  char v118; // [rsp+6Ch] [rbp-9Ch]
  char v119; // [rsp+70h] [rbp-98h]
  __int16 v120; // [rsp+80h] [rbp-88h] BYREF
  __int64 v121; // [rsp+88h] [rbp-80h]
  unsigned int v122; // [rsp+90h] [rbp-78h] BYREF
  char v123; // [rsp+94h] [rbp-74h]

  v7 = a4;
  v8 = sub_BFB9F0(a2);
  v120 = 0;
  v9 = &v120;
  v123 &= ~1u;
  v10 = (unsigned __int16 *)v8;
  v121 = 0;
  v122 = 0;
  if ( (unsigned __int8)sub_C3D370(v8, (__int64)&v120, a1, v7, v11, v12) )
  {
    v24 = sub_16B6DF0((__int64)v10, (__int64)&v120, v13, v14);
    v27 = (void *)sub_16BA8C0((int *)&v122, v24, a3, v25, v26);
    goto LABEL_16;
  }
  v17 = *v10;
  LOWORD(v17) = v17 & 0x1FF;
  if ( (_WORD)v17 == 79 )
  {
    if ( ((v10[1] >> 3) & 0x7Fu) - 4 <= 1 )
      goto LABEL_4;
    v29 = sub_16B6DF0((__int64)v10, (__int64)&v120, v13, v14);
    v34 = sub_16C44B0(a1, v29, v30, v31, v32, v33);
    v35 = HIDWORD(v34);
    v36 = (v10[1] >> 3) & 0x7F;
    if ( v36 != 27 && v36 != 38 )
      goto LABEL_22;
    v44 = a3;
    if ( a3 > (unsigned int)v34 )
      v44 = (unsigned int)v34;
    v106 = BYTE4(v34);
    v104 = BYTE4(v34);
    v102 = v34;
    v45 = sub_16C7D60(a1, *((_QWORD *)v10 + 2), v44, v7, a5);
    v34 = v102;
    v46 = v104;
    v112 = v45;
    LOBYTE(v35) = v106;
    if ( v47 )
    {
      if ( (unsigned int)v112 < (unsigned int)v102 )
      {
        LODWORD(v114) = v112;
        if ( BYTE4(v112) )
          v46 = 1;
        LOBYTE(v115) = 1;
        BYTE4(v114) = v46;
        goto LABEL_8;
      }
LABEL_22:
      v116 = (void *)v34;
      BYTE4(v116) = v35;
LABEL_23:
      LOBYTE(v117) = 1;
      v114 = (__int64)v116;
      v115 = v117;
      goto LABEL_8;
    }
LABEL_26:
    LOBYTE(v115) = 0;
    goto LABEL_8;
  }
  if ( (_WORD)v17 == 128 )
  {
    if ( (unsigned __int8)sub_C3D850(*((_QWORD *)v10 + 3), &v109, a1, 0, v15, v16) )
    {
      v19 = a5;
      if ( v109 )
        v18 = *((_QWORD *)v10 + 4);
      else
        v18 = *((_QWORD *)v10 + 5);
LABEL_6:
      v20 = v7;
      v21 = a3;
LABEL_7:
      v114 = sub_16C7D60(a1, v18, v21, v20, v19);
      v115 = v22;
      goto LABEL_8;
    }
    v37 = *((_QWORD *)v10 + 4);
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v38 + 16) == 13 && ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) == 0x1B3 )
      goto LABEL_26;
    v110 = sub_16C7D60(a1, v37, a3, v7, a5);
    v111 = v39;
    if ( !(_BYTE)v39 )
      goto LABEL_26;
    v40 = *((_QWORD *)v10 + 5);
    v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v41 + 16) == 13 && ((*(_WORD *)(v41 + 18) >> 3) & 0x1FF) == 0x1B3 )
      goto LABEL_26;
    v42 = sub_16C7D60(a1, v40, a3, v7, a5);
    if ( !v43 )
      goto LABEL_26;
    v27 = (void *)sub_16B56A0(v110, v42);
    goto LABEL_16;
  }
  v28 = (unsigned int)(v17 + 394);
  LOWORD(v28) = (v17 + 394) & 0x1FF;
  if ( (unsigned __int16)v28 > 1u )
  {
    if ( (_WORD)v17 == 4 )
    {
      switch ( ((*((_BYTE *)v10 + 2) >> 3) + 28) & 0x1F )
      {
        case 0:
        case 1:
          goto LABEL_42;
        case 3:
          v54 = sub_F65360(*(_QWORD *)(*((_QWORD *)v10 + 1) & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v120, v28, v14, v15, v16);
          v19 = a5;
          v18 = *((_QWORD *)v10 + 2);
          v20 = v7;
          v21 = a3;
          if ( v54 )
            goto LABEL_7;
          v116 = (void *)sub_16C7D60(a1, v18, a3, v7, a5);
          v117 = v55;
          if ( !(_BYTE)v55 )
            goto LABEL_26;
          v56 = (_DWORD)v116 + 1;
          break;
        case 4:
          v57 = sub_F65360(*(_QWORD *)(*((_QWORD *)v10 + 1) & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v120, v28, v14, v15, v16);
          v19 = a5;
          v18 = *((_QWORD *)v10 + 2);
          v20 = v7;
          v21 = a3;
          if ( v57 )
            goto LABEL_7;
          v116 = (void *)sub_16C7D60(a1, v18, a3, v7, a5);
          v117 = v58;
          if ( !(_BYTE)v58 )
            goto LABEL_26;
          v56 = (_DWORD)v116 + BYTE4(v116);
          break;
        case 5:
          goto LABEL_43;
        default:
          goto LABEL_4;
      }
      BYTE4(v114) = 0;
      if ( v56 > a3 )
        v56 = a3;
      LOBYTE(v115) = 1;
      LODWORD(v114) = v56;
      goto LABEL_8;
    }
    if ( (_WORD)v17 == 26 )
    {
LABEL_4:
      v18 = *((_QWORD *)v10 + 2);
LABEL_5:
      v19 = a5;
      goto LABEL_6;
    }
    v59 = sub_BFEF90((__int64)v10);
    v64 = v59;
    if ( v59 )
    {
      BYTE4(v114) = sub_F65460(
                      *(_QWORD *)(*(_QWORD *)(v59 + 48) & 0xFFFFFFFFFFFFFFF0LL),
                      (__int64)&v120,
                      v60,
                      v61,
                      v62,
                      v63);
      LODWORD(v114) = sub_B78170(v64);
      LOBYTE(v115) = 1;
      goto LABEL_8;
    }
    v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_16B6DF0((__int64)v10, (__int64)&v120, v60, v61) & 0xFFFFFFFFFFFFFFF0LL)
                                + 8LL)
                    & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v48 + 16) == 13 && ((*(_WORD *)(v48 + 18) >> 3) & 0x1FF) == 0x1B3 )
      goto LABEL_26;
LABEL_42:
    v49 = sub_16B6DF0((__int64)v10, (__int64)v9, v28, v14);
    v27 = (void *)sub_16C44B0(a1, v49, v50, v51, v52, v53);
LABEL_16:
    v116 = v27;
    LOBYTE(v117) = 1;
    v114 = (__int64)v27;
    v115 = v117;
    goto LABEL_8;
  }
  switch ( (v10[1] >> 3) & 0x3F )
  {
    case 0:
    case 1:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1A:
    case 0x1B:
    case 0x1E:
    case 0x1F:
      goto LABEL_42;
    case 2:
      if ( a5 )
        goto LABEL_82;
      v105 = (__int64 (__fastcall *)(__int64, __int64))sub_16B5870;
      goto LABEL_59;
    case 3:
      v91 = sub_16B6DF0((__int64)v10, (__int64)&v120, v28, v14);
      v108 = sub_AAC1F0(a1, v91, v92, v93, v94);
      v112 = sub_16C7D60(a1, *((_QWORD *)v10 + 2), v108, v7, a5);
      v113 = v97;
      if ( !(_BYTE)v97 )
        goto LABEL_26;
      sub_C3EB00((__int64)&v116, *((_QWORD *)v10 + 3), a1, nullptr, v95, v96);
      if ( v119 )
      {
        v98 = sub_C16760((__int64)&v116);
        if ( v117 - 1 - v98 < (unsigned int)v112 )
        {
          v99 = v112 - (v117 - 1) + v98;
          if ( v99 <= a3 )
            a3 = v99;
        }
        else
        {
          a3 = BYTE4(v112) ^ 1;
        }
        LODWORD(v112) = a3;
        v114 = v112;
        v115 = v113;
        sub_98E4B0((__int64)&v116);
      }
      else
      {
        sub_98E4B0((__int64)&v116);
        v116 = (void *)sub_16C7D60(a1, *((_QWORD *)v10 + 3), v108, v7, a5);
        v117 = v100;
        if ( !(_BYTE)v100 )
          goto LABEL_26;
        v101 = BYTE4(v112);
        if ( BYTE4(v112) )
          v101 = BYTE4(v116);
        BYTE4(v114) = v101;
        LOBYTE(v115) = 1;
        LODWORD(v114) = v112;
      }
      goto LABEL_8;
    case 4:
      v105 = (__int64 (__fastcall *)(__int64, __int64))sub_16B58E0;
      goto LABEL_59;
    case 5:
      v105 = (__int64 (__fastcall *)(__int64, __int64))sub_16B5760;
      if ( a5 )
        goto LABEL_82;
      goto LABEL_59;
    case 6:
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 2) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 42 )
        goto LABEL_42;
      if ( a5 )
        goto LABEL_82;
      v105 = (__int64 (__fastcall *)(__int64, __int64))sub_16B57C0;
      goto LABEL_59;
    case 7:
      v84 = (unsigned __int16 *)sub_BFD550(*((_QWORD *)v10 + 2));
      v28 = *v84;
      LOWORD(v28) = v28 & 0x1FF;
      if ( (_WORD)v28 != 52 )
        goto LABEL_42;
      sub_16B6640((__int64)&v116, *((_QWORD *)v84 + 2), *((_DWORD *)v84 + 6));
      v9 = (_WORD *)(&dword_0 + 1);
      v85 = sub_9954A0((__int64)&v116, (int *)((char *)&dword_0 + 1));
      if ( v117 > 0x40 && v116 )
        operator delete[](v116);
      if ( !v85 )
        goto LABEL_42;
      v86 = sub_16B6DF0((__int64)v10, 1, v28, v14);
      BYTE4(v114) = 1;
      LODWORD(v114) = sub_16C44B0(a1, v86, v87, v88, v89, v90);
      LOBYTE(v115) = 1;
      goto LABEL_8;
    case 8:
    case 0x1C:
      v112 = sub_16C7D60(a1, *((_QWORD *)v10 + 2), a3, v7, a5);
      v113 = v80;
      if ( !(_BYTE)v80 )
        goto LABEL_26;
      v81 = v112;
      sub_C3EB00((__int64)&v116, *((_QWORD *)v10 + 3), a1, nullptr, v78, v79);
      if ( !v119 || !v118 && sub_16B6690((__int64 *)&v116) )
        goto LABEL_71;
      v82 = v117;
      if ( v117 > 0x40 )
      {
        if ( v82 - (unsigned int)sub_2206780(&v116) > 0x40 )
          goto LABEL_70;
        v83 = *(_QWORD *)v116;
        if ( (unsigned __int64)(unsigned int)v112 <= *(_QWORD *)v116 )
          goto LABEL_70;
      }
      else
      {
        LODWORD(v83) = (_DWORD)v116;
        if ( (unsigned int)v112 <= (unsigned __int64)v116 )
        {
LABEL_70:
          v81 = BYTE4(v112) ^ 1;
          goto LABEL_71;
        }
      }
      v81 = v112 - v83;
LABEL_71:
      sub_98E4B0((__int64)&v116);
      LODWORD(v112) = v81;
      v114 = v112;
      v115 = v113;
LABEL_8:
      if ( v122 > 1 )
        sub_A4F8E0((int *)&v122);
      return v114;
    case 0xA:
    case 0xB:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x13:
    case 0x14:
LABEL_43:
      LODWORD(v114) = 1;
      BYTE4(v114) = 1;
      LOBYTE(v115) = 1;
      goto LABEL_8;
    case 0x10:
    case 0x1D:
      v105 = (__int64 (__fastcall *)(__int64, __int64))sub_16B5720;
      goto LABEL_59;
    case 0x15:
    case 0x20:
      v18 = *((_QWORD *)v10 + 3);
      goto LABEL_5;
    default:
LABEL_82:
      v105 = (__int64 (__fastcall *)(__int64, __int64))sub_16B56A0;
LABEL_59:
      v107 = sub_16B6DF0((__int64)v10, (__int64)&v120, v28, v14);
      v103 = sub_AAC1F0(a1, v107, v65, v66, v67);
      v110 = sub_16C7D60(a1, *((_QWORD *)v10 + 2), v103, v7, a5);
      v111 = v68;
      if ( !(_BYTE)v68 )
        goto LABEL_26;
      v69 = sub_16C7D60(a1, *((_QWORD *)v10 + 3), v103, v7, a5);
      v112 = v69;
      v113 = v70;
      if ( !(_BYTE)v70 )
        goto LABEL_26;
      v71 = v69;
      v72 = v105(v110, v69);
      v77 = BYTE4(v72) | sub_F65460(*(_QWORD *)(v107 & 0xFFFFFFFFFFFFFFF0LL), v71, v73, v74, v75, v76);
      if ( a3 > (unsigned int)v72 )
        a3 = v72;
      HIDWORD(v116) = (((unsigned __int64)v77 << 32) | a3 | v72 & 0xFFFFFF0000000000LL) >> 32;
      LODWORD(v116) = a3;
      BYTE4(v116) = v77;
      goto LABEL_23;
  }
}
