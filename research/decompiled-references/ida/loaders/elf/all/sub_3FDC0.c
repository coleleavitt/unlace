char *__fastcall sub_3FDC0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int16 v5; // ax
  _QWORD *v6; // rbx
  char *v7; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  char v18; // [rsp+Ch] [rbp-2Ch]
  char v19; // [rsp+Ch] [rbp-2Ch]

  v5 = *(_WORD *)(a3 + 18);
  if ( v5 <= 0xF9u )
  {
    if ( v5 > 1u )
    {
      switch ( *(_WORD *)(a3 + 18) )
      {
        case 2:
        case 0x12:
        case 0x2B:
          v6 = (_QWORD *)operator new(0x160u);
          sub_229D0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "sparcb";
          goto LABEL_13;
        case 3:
        case 6:
          v6 = (_QWORD *)operator new(0x160u);
          sub_18F30((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          if ( *(_WORD *)(a3 + 16) == 1 )
            *(_QWORD *)(a1 + 512) = 0x8000000;
          goto LABEL_26;
        case 4:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_14440((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v11 = *(_DWORD *)(a3 + 48);
          v7 = "ColdFire";
          if ( (v11 & 0x3818000) != 0x8000 && !(_BYTE)v11 )
            v7 = "68040";
          goto LABEL_13;
        case 7:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "860xp";
          goto LABEL_13;
        case 8:
        case 0x19:
        case 0x1E:
        case 0xF9:
          v6 = (_QWORD *)operator new(0x1BCu);
          sub_154B0((__int64)v6, a1, a2);
          v7 = "mipsl";
          *(_QWORD *)(a1 + 240) = v6;
          if ( a4 )
            v7 = "mipsb";
          goto LABEL_13;
        case 0xF:
          v6 = (_QWORD *)operator new(0x160u);
          sub_132F0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "hppa";
          goto LABEL_13;
        case 0x13:
          v7 = "i960";
          v10 = operator new(0x15Cu);
          *(_QWORD *)(v10 + 24) = 0;
          v6 = (_QWORD *)v10;
          *(_QWORD *)(v10 + 8) = a1;
          *(_QWORD *)(v10 + 272) = 0;
          *(_QWORD *)(v10 + 16) = a2;
          memset(
            (void *)((v10 + 32) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * (((unsigned int)v10 - (((_DWORD)v10 + 32) & 0xFFFFFFF8) + 280) >> 3));
          *(_QWORD *)(v10 + 280) = 0;
          *(_QWORD *)(v10 + 320) = 0;
          *(_QWORD *)(v10 + 328) = 0;
          *(_QWORD *)(v10 + 336) = 0;
          *(_DWORD *)(v10 + 344) = 2;
          *(_QWORD *)v10 = off_87BD8;
          *(_QWORD *)(a1 + 240) = v10;
          *(_OWORD *)(v10 + 288) = 0;
          *(_OWORD *)(v10 + 304) = 0;
          goto LABEL_13;
        case 0x14:
          v18 = a4;
          v6 = (_QWORD *)operator new(0x178u);
          sub_1C2D0((__int64)v6, a1, a2);
          goto LABEL_54;
        case 0x15:
          v18 = a4;
          v6 = (_QWORD *)operator new(0x198u);
          sub_1C3F0((__int64)v6, a1, a2);
LABEL_54:
          v7 = "ppcl";
          *(_QWORD *)(a1 + 240) = v6;
          if ( v18 )
            v7 = "ppc";
          goto LABEL_13;
        case 0x16:
          goto LABEL_82;
        case 0x17:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "spu";
          goto LABEL_13;
        case 0x24:
          v6 = (_QWORD *)operator new(0x160u);
          sub_240B0((__int64)v6, a1, a2, 1);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "RH850";
          goto LABEL_13;
        case 0x27:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "mcore";
          goto LABEL_13;
        case 0x28:
          v19 = a4;
          v6 = (_QWORD *)operator new(0x160u);
          sub_11890((__int64)v6, a1, a2);
          goto LABEL_70;
        case 0x2A:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_21F10((__int64)v6, a1, a2);
          v7 = "sh4";
          *(_QWORD *)(a1 + 240) = v6;
          if ( a4 )
            v7 = "sh4b";
          goto LABEL_13;
        case 0x2C:
          v7 = "TRICORE";
          v12 = operator new(0x160u);
          *(_QWORD *)(v12 + 24) = 0;
          v6 = (_QWORD *)v12;
          *(_QWORD *)(v12 + 8) = a1;
          *(_QWORD *)(v12 + 272) = 0;
          *(_QWORD *)(v12 + 16) = a2;
          memset(
            (void *)((v12 + 32) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * (((unsigned int)v12 - (((_DWORD)v12 + 32) & 0xFFFFFFF8) + 280) >> 3));
          *(_QWORD *)(v12 + 280) = 0;
          *(_QWORD *)(v12 + 320) = 0;
          *(_QWORD *)(v12 + 328) = 0;
          *(_QWORD *)v12 = off_88AD8;
          *(_QWORD *)(v12 + 336) = 0;
          *(_DWORD *)(v12 + 344) = 2;
          *(_WORD *)(v12 + 348) = 0x8000;
          *(_QWORD *)(a1 + 240) = v12;
          *(_OWORD *)(v12 + 288) = 0;
          *(_OWORD *)(v12 + 304) = 0;
          goto LABEL_13;
        case 0x2D:
          v7 = "arc";
          v13 = operator new(0x15Cu);
          *(_QWORD *)(v13 + 24) = 0;
          v6 = (_QWORD *)v13;
          *(_QWORD *)(v13 + 8) = a1;
          *(_QWORD *)(v13 + 272) = 0;
          *(_QWORD *)(v13 + 16) = a2;
          memset(
            (void *)((v13 + 32) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * (((unsigned int)v13 - (((_DWORD)v13 + 32) & 0xFFFFFFF8) + 280) >> 3));
          *(_QWORD *)(v13 + 280) = 0;
          *(_QWORD *)(v13 + 320) = 0;
          *(_QWORD *)(v13 + 328) = 0;
          *(_QWORD *)(v13 + 336) = 0;
          *(_DWORD *)(v13 + 344) = 2;
          *(_QWORD *)v13 = off_87518;
          *(_QWORD *)(a1 + 240) = v13;
          *(_OWORD *)(v13 + 288) = 0;
          *(_OWORD *)(v13 + 304) = 0;
          goto LABEL_13;
        case 0x2E:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_12BC0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "h8300";
          goto LABEL_13;
        case 0x2F:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_12BC0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "h8300a";
          goto LABEL_13;
        case 0x30:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_12BC0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "h8s300a";
          goto LABEL_13;
        case 0x31:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "h8500";
          goto LABEL_13;
        case 0x32:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_136A0((__int64)v6, a1, a2);
          v7 = "ia64l";
          *(_QWORD *)(a1 + 240) = v6;
          if ( a4 )
            v7 = "ia64b";
          goto LABEL_13;
        case 0x35:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_141D0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "6812";
          goto LABEL_13;
        case 0x3E:
          v6 = (_QWORD *)operator new(0x160u);
          sub_24180((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
LABEL_26:
          v7 = "metapc";
          goto LABEL_13;
        case 0x40:
        case 0x41:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "pdp11";
          goto LABEL_13;
        case 0x43:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_22DC0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "st9";
          goto LABEL_13;
        case 0x44:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "st7";
          goto LABEL_13;
        case 0x45:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "6816";
          goto LABEL_13;
        case 0x46:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_141D0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "6811";
          goto LABEL_13;
        case 0x47:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_141D0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "6808";
          goto LABEL_13;
        case 0x48:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_141D0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "6806";
          goto LABEL_13;
        case 0x53:
          *(_BYTE *)(a1 + 525) = 1;
          v6 = (_QWORD *)operator new(0x168u);
          sub_12250((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "avr";
          goto LABEL_13;
        case 0x54:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_12620((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "fr";
          goto LABEL_13;
        case 0x57:
          v6 = (_QWORD *)operator new(0x160u);
          sub_240B0((__int64)v6, a1, a2, 0);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "V850";
          goto LABEL_13;
        case 0x58:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_13E50((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "m32r";
          goto LABEL_13;
        case 0x59:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_18710((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "mn10300";
          goto LABEL_13;
        case 0x5A:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_18680((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "mn102l00";
          goto LABEL_13;
        case 0x5D:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_F880((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "arcmpct";
          goto LABEL_13;
        case 0x5E:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "XTENSA";
          goto LABEL_13;
        case 0x69:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "msp430";
          goto LABEL_13;
        case 0x74:
          v7 = "c166";
          v9 = operator new(0x15Cu);
          *(_QWORD *)(v9 + 24) = 0;
          v6 = (_QWORD *)v9;
          *(_QWORD *)(v9 + 8) = a1;
          *(_QWORD *)(v9 + 272) = 0;
          *(_QWORD *)(v9 + 16) = a2;
          memset(
            (void *)((v9 + 32) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * (((unsigned int)v9 - (((_DWORD)v9 + 32) & 0xFFFFFFF8) + 280) >> 3));
          *(_QWORD *)(v9 + 280) = 0;
          *(_QWORD *)(v9 + 320) = 0;
          *(_QWORD *)(v9 + 328) = 0;
          *(_QWORD *)(v9 + 336) = 0;
          *(_DWORD *)(v9 + 344) = 2;
          *(_QWORD *)v9 = off_878D8;
          *(_QWORD *)(a1 + 240) = v9;
          *(_OWORD *)(v9 + 288) = 0;
          *(_OWORD *)(v9 + 304) = 0;
          goto LABEL_13;
        case 0x75:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_13A50((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "m16c60";
          goto LABEL_13;
        case 0x78:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_13A50((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "m32c80";
          goto LABEL_13;
        case 0x8C:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "TMS320C6";
          goto LABEL_13;
        case 0xA4:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "QDSP6";
          goto LABEL_13;
        case 0xA7:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_18D10((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "nds32";
          goto LABEL_13;
        case 0xAD:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_210F0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "rx";
          goto LABEL_13;
        case 0xB7:
          v19 = a4;
          v6 = (_QWORD *)operator new(0x160u);
          sub_D580(v6);
LABEL_70:
          v7 = "arm";
          *(_QWORD *)(a1 + 240) = v6;
          if ( v19 )
            v7 = "armb";
          break;
        case 0xC3:
          v6 = (_QWORD *)operator new(0x15Cu);
          sub_F880((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "arcv2";
          break;
        case 0xC5:
          v6 = *(_QWORD **)(a1 + 240);
          v7 = "rl78";
          break;
        case 0xF3:
          v6 = (_QWORD *)operator new(0x19Cu);
          sub_1FEF0((__int64)v6, a1, a2);
          *(_QWORD *)(a1 + 240) = v6;
          v7 = "riscv";
          break;
        default:
          goto LABEL_12;
      }
      goto LABEL_13;
    }
LABEL_12:
    v6 = *(_QWORD **)(a1 + 240);
    v7 = nullptr;
    goto LABEL_13;
  }
  if ( v5 == 29646 )
    goto LABEL_19;
  if ( v5 <= 0x73CEu )
  {
    if ( v5 == 28927 )
    {
      v6 = *(_QWORD **)(a1 + 240);
      v7 = "V850";
      goto LABEL_13;
    }
    if ( v5 == 29162 )
      goto LABEL_10;
    if ( v5 != 28924 )
      goto LABEL_12;
LABEL_19:
    v6 = *(_QWORD **)(a1 + 240);
    v7 = "V850e1";
    goto LABEL_13;
  }
  if ( v5 != 0x9026 )
  {
    if ( v5 > 0x9026u )
    {
      if ( v5 == 0xA390 )
      {
LABEL_82:
        v6 = (_QWORD *)operator new(0x164u);
        sub_211A0((__int64)v6, a1, a2);
        *(_QWORD *)(a1 + 240) = v6;
        v7 = "s390";
        if ( *(_BYTE *)(a3 + 4) == 2 )
          v7 = "s390x";
        goto LABEL_13;
      }
      goto LABEL_12;
    }
    if ( v5 > 0x7400u )
    {
      if ( v5 != 29947 )
        goto LABEL_12;
    }
    else if ( v5 <= 0x73FCu )
    {
      goto LABEL_12;
    }
LABEL_10:
    v6 = *(_QWORD **)(a1 + 240);
    v7 = "V850e2m";
    goto LABEL_13;
  }
  v6 = (_QWORD *)operator new(0x164u);
  sub_F070((__int64)v6, a1, a2);
  v7 = "alphal";
  *(_QWORD *)(a1 + 240) = v6;
  if ( a4 )
    v7 = "alphab";
LABEL_13:
  if ( !v6 )
  {
    v14 = operator new(0x15Cu);
    *(_QWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 8) = a1;
    *(_QWORD *)(v14 + 272) = 0;
    *(_QWORD *)(v14 + 16) = a2;
    memset(
      (void *)((v14 + 32) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)v14 - (((_DWORD)v14 + 32) & 0xFFFFFFF8) + 280) >> 3));
    *(_QWORD *)(v14 + 280) = 0;
    *(_QWORD *)v14 = off_87228;
    *(_QWORD *)(v14 + 320) = 0;
    *(_QWORD *)(v14 + 328) = 0;
    *(_QWORD *)(v14 + 336) = 0;
    *(_DWORD *)(v14 + 344) = 2;
    *(_QWORD *)(a1 + 240) = v14;
    *(_OWORD *)(v14 + 288) = 0;
    *(_OWORD *)(v14 + 304) = 0;
  }
  return v7;
}

