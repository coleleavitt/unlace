__int64 __fastcall sub_743B0(__int64 a1, __int64 a2, signed int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v7; // r12d
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // r12d
  int v15; // eax
  int v16; // edx
  int v17; // edx
  int v18; // edx
  char v19; // al
  int v20; // edx
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdi
  int v24; // edx
  int v26; // esi
  char v27; // r13
  __int64 v28; // r8
  int v29; // r11d
  char v30; // r12
  int v31; // r10d
  int v32; // edx
  int v33; // edx
  char v34; // cl
  __int16 v35; // cx
  int v36; // eax
  int v37; // ecx
  unsigned int v38; // edx
  unsigned __int8 v39; // si
  int v40; // edx
  char v41; // cl
  int v42; // r11d

  v7 = HIBYTE(a3);
  if ( *(_DWORD *)(a1 + 216)
    && (!*(_DWORD *)(a1 + 212) || (unsigned __int64)(get_sreg(*(_QWORD *)(a2 + 16), 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL) )
  {
    v10 = v7 & 0xEF;
    v11 = (unsigned int)a3 >> 28;
    if ( v10 == 239 )
      return sub_6A990((_DWORD *)a1, a2, a3, v11 & 1, a5, a6);
    v12 = *(unsigned __int8 *)(a1 + 289);
    if ( !(_BYTE)v12 || (v7 & 0xEE) != 0xEC && v10 != 238 )
      goto LABEL_7;
    if ( (a3 & 0x800) != 0 )
      goto LABEL_7;
    v22 = ((unsigned int)a3 >> 8) & 0xF;
    if ( !_bittest(&v12, v22) )
      goto LABEL_7;
    v23 = (a3 >> 28) & 1;
    if ( (a3 & 0xF000000) == 0xE000000 )
    {
      v37 = (a3 >> 6) & 1 | ((unsigned int)a3 >> 21) & 6;
      v38 = (unsigned int)a3 >> 12;
      if ( v37 >= 4 )
        LOBYTE(v38) = a3;
      v39 = v38 & 0xF;
      if ( (v38 & 0xF) == 0xD )
        return 0;
      if ( ((a3 >> 6) & 1) != 0 )
      {
        if ( v39 == 14 || (v38 & 1) != 0 )
          return 0;
        *(_BYTE *)(a2 + 41) = 1;
        v28 = a2 + 120;
        *(_WORD *)(a2 + 46) = v39;
        *(_BYTE *)(a2 + 45) = 2;
        *(_WORD *)(a2 + 86) = (unsigned __int8)(v39 + 1);
        *(_BYTE *)(a2 + 81) = 1;
        *(_BYTE *)(a2 + 85) = 2;
      }
      else
      {
        *(_BYTE *)(a2 + 41) = 1;
        v28 = a2 + 80;
        *(_WORD *)(a2 + 46) = v39;
        *(_BYTE *)(a2 + 45) = 2;
      }
      if ( v37 <= 1 )
      {
        v33 = a3 & 0x3F | ((unsigned int)a3 >> 1) & 0x40 | ((unsigned int)a3 >> 9) & 0x1F80;
      }
      else
      {
        if ( (BYTE2(a3) & 0xF) == 0xD )
          return 0;
        *(_BYTE *)(v28 + 1) = 1;
        *(_WORD *)(v28 + 6) = BYTE2(a3) & 0xF;
        *(_BYTE *)(v28 + 5) = 2;
        if ( v37 <= 3 )
        {
          v28 += 40;
          v33 = a3 & 0x3F | ((unsigned int)a3 >> 13) & 0x180 | ((unsigned int)a3 >> 1) & 0x40;
        }
        else
        {
          if ( (unsigned __int16)a3 >> 12 == 13 )
            return 0;
          *(_BYTE *)(v28 + 41) = 1;
          v28 += 80;
          *(_WORD *)(v28 - 34) = (unsigned __int16)a3 >> 12;
          *(_BYTE *)(v28 - 35) = 2;
          v33 = (a3 >> 4) & 3 | ((unsigned int)a3 >> 17) & 0x38 | ((unsigned int)a3 >> 5) & 4;
        }
      }
      v35 = word_8EC60[2 * v37 + v23];
      goto LABEL_57;
    }
    if ( (a3 & 0xE000000) != 0xC000000 || (a3 & 0xA00000) == 0 )
      return 0;
    v24 = *(_DWORD *)(a1 + 208);
    if ( v24 != 2 && ((a3 & 0x40) != 0 ? v24 == 0 : *(_DWORD *)(a1 + 200) == 0) )
      return 0;
    v26 = (a3 >> 20) & 1 | ((unsigned int)a3 >> 22) & 2;
    if ( (a3 & 0x40) != 0 )
    {
      if ( (a3 & 0x401000) != 0 )
        return 0;
      if ( v26 )
      {
        if ( (a3 & 0x21) != 0 )
          return 0;
        if ( v26 != 1 )
        {
          if ( (a3 & 0x10080) != 0 )
            return 0;
          v27 = 8;
          v28 = a2 + 160;
          LOWORD(v29) = ((unsigned __int16)a3 >> 13) + 45;
          v30 = 8;
          v31 = (((unsigned int)a3 >> 17) & 7) + 45;
          LOWORD(v32) = ((a3 & 0xF) >> 1) + 45;
          goto LABEL_53;
        }
        *(_BYTE *)(a2 + 41) = 1;
        v28 = a2 + 120;
        v41 = 8;
        *(_BYTE *)(a2 + 45) = 8;
        *(_WORD *)(a2 + 46) = ((unsigned __int16)a3 >> 13) + 45;
        LOWORD(v40) = ((a3 & 0xF) >> 1) + 45;
LABEL_95:
        *(_WORD *)(a2 + 86) = v40;
        *(_BYTE *)(a2 + 85) = v41;
        *(_BYTE *)(a2 + 81) = 1;
        v33 = ((a3 >> 4) & 1) + (((unsigned int)a3 >> 6) & 2 | ((unsigned int)a3 >> 14) & 0x3C);
        v34 = 6;
        goto LABEL_54;
      }
      *(_BYTE *)(a2 + 41) = 1;
      v28 = a2 + 80;
      *(_BYTE *)(a2 + 45) = 8;
      *(_WORD *)(a2 + 46) = ((unsigned __int16)a3 >> 13) + 45;
LABEL_92:
      v33 = (a3 & 0x3F) + (((unsigned int)a3 >> 1) & 0x40 | ((unsigned int)a3 >> 9) & 0x780);
      v34 = 11;
      goto LABEL_54;
    }
    if ( (a3 & 0x1000000) != 0 )
    {
      if ( (a3 & 0x400000) != 0 )
        return 0;
      if ( v26 )
      {
        if ( (a3 & 0x20) != 0 )
          return 0;
        if ( v26 != 1 )
        {
          if ( (a3 & 0x80u) != 0 )
            return 0;
          v27 = 4;
          v28 = a2 + 160;
          LOWORD(v29) = ((unsigned __int16)a3 >> 12) + 61;
          LOWORD(v32) = (a3 & 0xF) + 61;
          v30 = 4;
          LOWORD(v31) = (BYTE2(a3) & 0xF) + 61;
          goto LABEL_53;
        }
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 4;
      *(_WORD *)(a2 + 46) = ((unsigned __int16)a3 >> 12) + 61;
      if ( v26 == 1 )
      {
        v28 = a2 + 120;
        v41 = 4;
        LOWORD(v40) = (a3 & 0xF) + 61;
        goto LABEL_95;
      }
    }
    else
    {
      if ( v26 > 1 )
      {
        HIWORD(v42) = HIWORD(a3);
        LOWORD(v42) = (unsigned __int16)a3 >> 12;
        v28 = a2 + 160;
        v27 = 3;
        v29 = ((a3 >> 22) & 1) + 2 * v42 + 93;
        v31 = ((a3 >> 7) & 1) + 2 * (HIWORD(a3) & 0xF) + 93;
        v32 = ((a3 >> 5) & 1) + 2 * (a3 & 0xF) + 93;
        v30 = 3;
LABEL_53:
        *(_WORD *)(a2 + 126) = v32;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = v29;
        *(_BYTE *)(a2 + 45) = v27;
        v33 = (a3 >> 4) & 1 | (2 * (unsigned __int8)(a3 >> 20)) & 6;
        v34 = 3;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = v31;
        *(_BYTE *)(a2 + 85) = v30;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = v30;
LABEL_54:
        if ( (a3 & 0x40) != 0 )
          v33 |= ((a3 >> 24) & 1) << v34;
        v35 = word_8EC40[2 * v26 + v23];
LABEL_57:
        *(_DWORD *)(a2 + 28) |= 0x4000u;
        *(_WORD *)(a2 + 24) = v35;
        *(_BYTE *)(a2 + 72) = v22;
        *(_BYTE *)(v28 + 1) = 5;
        *(_QWORD *)(v28 + 8) = v33;
        *(_BYTE *)(v28 + 5) = 2;
        return 1;
      }
      *(_BYTE *)(a2 + 41) = 1;
      *(_BYTE *)(a2 + 45) = 3;
      *(_WORD *)(a2 + 46) = ((a3 >> 22) & 1) + 2 * ((unsigned __int16)a3 >> 12) + 93;
      if ( v26 == 1 )
      {
        v28 = a2 + 120;
        v40 = ((a3 >> 5) & 1) + 2 * (a3 & 0xF) + 93;
        v41 = 3;
        goto LABEL_95;
      }
    }
    v28 = a2 + 80;
    goto LABEL_92;
  }
  if ( (v7 & 0xFE) == 0xF2 )
  {
    v11 = HIBYTE(a3);
    return sub_6A990((_DWORD *)a1, a2, a3, v11 & 1, a5, a6);
  }
LABEL_7:
  v13 = v7 & 0xF;
  if ( v13 == 13 )
  {
LABEL_16:
    if ( (a3 & 0x800000) == 0 )
      *(_DWORD *)(a2 + 28) |= 0x10u;
    if ( (a3 & 0x1000000) == 0 )
      *(_DWORD *)(a2 + 28) |= 0x80u;
    if ( (unsigned __int8)sub_73B00(a1, a2, a3) )
      return 1;
    *(_BYTE *)(a2 + 41) = 11;
    *(_BYTE *)(a2 + 45) = 2;
    *(_BYTE *)(a2 + 81) = 4;
    *(_BYTE *)(a2 + 85) = 2;
    *(_WORD *)(a2 + 24) = (a3 & 0x100000) == 0 ? 87 : 85;
    v15 = *(_DWORD *)(a2 + 28);
    v16 = v15;
    LOBYTE(v16) = v15 & 0x7F;
    v17 = v16 | 0x20;
    if ( (a3 & 0x1200000) == 0x1200000 )
      v15 = v17;
    v18 = v15;
    if ( (a3 & 0x400000) != 0 )
    {
      BYTE1(v18) = BYTE1(v15) | 1;
      v15 = v18;
    }
    BYTE1(v15) |= 0x40u;
    *(_DWORD *)(a2 + 28) = v15;
    *(_BYTE *)(a2 + 72) = BYTE1(a3) & 0xF;
    *(_WORD *)(a2 + 46) = (unsigned __int16)a3 >> 12;
    *(_WORD *)(a2 + 86) = BYTE2(a3) & 0xF;
    if ( (a3 & 0x1200000) != 0 )
    {
      *(_QWORD *)(a2 + 96) = (4 * (_WORD)a3) & 0x3FC;
    }
    else
    {
      *(_QWORD *)(a2 + 96) = 0;
      *(_BYTE *)(a2 + 121) = 5;
      *(_BYTE *)(a2 + 125) = 2;
      *(_QWORD *)(a2 + 128) = (unsigned __int8)a3;
      *(_BYTE *)(a2 + 153) = 0;
      *(_QWORD *)(a2 + 144) = 0;
    }
    sub_1E470(a1, a2, a2 + 80, 1);
    v19 = *(_BYTE *)(a2 + 32);
    goto LABEL_28;
  }
  if ( v13 != 14 )
  {
    if ( v13 != 12 )
      return 0;
    if ( (a3 & 0xFE00000) == 0xC400000 )
    {
      if ( !(unsigned __int8)sub_73B00(a1, a2, a3) )
      {
        v36 = a3 & 0x100000;
        if ( *(_BYTE *)(a2 + 32) == 15 )
        {
          *(_BYTE *)(a2 + 32) = 14;
          *(_WORD *)(a2 + 24) = 167 - ((v36 == 0) - 1);
        }
        else
        {
          *(_WORD *)(a2 + 24) = 93 - ((v36 == 0) - 1);
        }
        *(_DWORD *)(a2 + 28) |= 0x4000u;
        *(_BYTE *)(a2 + 41) = 5;
        *(_BYTE *)(a2 + 45) = 2;
        *(_BYTE *)(a2 + 72) = BYTE1(a3) & 0xF;
        *(_BYTE *)(a2 + 73) = 0;
        *(_QWORD *)(a2 + 64) = 0;
        *(_QWORD *)(a2 + 48) = (unsigned __int8)a3 >> 4;
        *(_BYTE *)(a2 + 81) = 10;
        *(_WORD *)(a2 + 86) = (unsigned __int16)a3 >> 12;
        *(_BYTE *)(a2 + 113) = a3 & 0xF;
        *(_BYTE *)(a2 + 112) = BYTE2(a3) & 0xF;
      }
      return 1;
    }
    goto LABEL_16;
  }
  if ( !(unsigned __int8)sub_73B00(a1, a2, a3) )
  {
    v19 = *(_BYTE *)(a2 + 32);
    if ( (a3 & 0x10) != 0 )
    {
      v20 = a3 & 0x100000;
      if ( v19 == 15 )
      {
        *(_BYTE *)(a2 + 32) = 14;
        *(_WORD *)(a2 + 24) = v20 == 0 ? 92 : 90;
        v19 = 14;
      }
      else
      {
        *(_WORD *)(a2 + 24) = v20 == 0 ? 91 : 89;
      }
      v21 = ((unsigned int)a3 >> 21) & 0xF;
    }
    else
    {
      *(_WORD *)(a2 + 24) = 83;
      v21 = ((unsigned int)a3 >> 20) & 0xF;
    }
    *(_QWORD *)(a2 + 48) = v21;
    *(_DWORD *)(a2 + 28) |= 0x4000u;
    *(_BYTE *)(a2 + 41) = 5;
    *(_BYTE *)(a2 + 72) = BYTE1(a3) & 0xF;
    *(_BYTE *)(a2 + 45) = 2;
    *(_WORD *)(a2 + 86) = (unsigned __int16)a3 >> 12;
    *(_BYTE *)(a2 + 73) = 0;
    *(_QWORD *)(a2 + 64) = 0;
    *(_BYTE *)(a2 + 112) = BYTE2(a3) & 0xF;
    *(_BYTE *)(a2 + 81) = 10;
    *(_BYTE *)(a2 + 113) = a3 & 0xF;
    *(_BYTE *)(a2 + 121) = 5;
    *(_BYTE *)(a2 + 125) = 2;
    *(_BYTE *)(a2 + 153) = 0;
    *(_QWORD *)(a2 + 144) = 0;
    *(_QWORD *)(a2 + 128) = (unsigned __int8)a3 >> 5;
LABEL_28:
    if ( v19 == 15 )
    {
      ++*(_WORD *)(a2 + 24);
      *(_BYTE *)(a2 + 32) = 14;
    }
  }
  return 1;
}
