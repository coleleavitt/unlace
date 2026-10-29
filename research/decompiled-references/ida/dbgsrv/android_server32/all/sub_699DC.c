/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_699DC
// Address: 0x000699DC

//----- (000699DC) --------------------------------------------------------
int __fastcall sub_699DC(int a1, int a2, int (__fastcall ***a3)(_DWORD, char *, int), int a4)
{
  int v7; // r1
  int v8; // r3
  int v9; // r2
  int v10; // r7
  int v11; // r5
  int v12; // r2
  unsigned int v13; // r1
  unsigned int v14; // r1
  int v15; // r2
  int v16; // r0
  _BOOL4 v17; // r2
  int *v18; // r1
  int v19; // r2
  unsigned int v20; // r3
  unsigned int v21; // r6
  int v22; // r0
  const char *v23; // r1
  unsigned int v24; // r6
  int v25; // r2
  int v26; // r3
  const char *v27; // r1
  unsigned int v28; // r2
  int v29; // r0
  const char *v30; // r1
  int v31; // r0
  int *v32; // r0
  unsigned __int16 v33; // r1
  int v34; // r6
  const char *v35; // r1
  int v36; // r0
  int v37; // r1
  int v38; // r1
  int v39; // r0
  int v40; // r2
  int v41; // r1
  int v42; // r1
  int v43; // r0
  unsigned int v44; // r6
  const char *v45; // r1
  int v46; // r0
  int v47; // r1
  int v48; // r6
  int v49; // r0
  int v50; // r1
  int v51; // r0
  int v52; // r1
  unsigned int v53; // r0
  int v54; // r6
  int v55; // r0
  signed int v56; // r1
  int v57; // r3
  int v58; // r2
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r2
  unsigned int v63; // r3
  signed int v64; // r5
  unsigned int v65; // r2
  int v66; // r0
  int v67; // r0
  int v69; // [sp+18h] [bp-50h]
  _BOOL4 v70; // [sp+1Ch] [bp-4Ch]
  int v71; // [sp+1Ch] [bp-4Ch]
  unsigned int v72; // [sp+20h] [bp-48h]
  unsigned __int16 v73; // [sp+20h] [bp-48h]
  int v74; // [sp+20h] [bp-48h]
  int v75; // [sp+20h] [bp-48h]
  unsigned int v76; // [sp+20h] [bp-48h]
  signed int v77; // [sp+28h] [bp-40h]
  int v79; // [sp+30h] [bp-38h]
  int v80; // [sp+34h] [bp-34h]
  int v81; // [sp+38h] [bp-30h]
  int v82; // [sp+3Ch] [bp-2Ch] BYREF
  int v83; // [sp+40h] [bp-28h] BYREF
  int v84; // [sp+44h] [bp-24h]
  int v85; // [sp+4Ch] [bp-1Ch] BYREF
  int v86; // [sp+50h] [bp-18h]
  int v87; // [sp+54h] [bp-14h]
  int v88; // [sp+58h] [bp-10h]
  int v89; // [sp+5Ch] [bp-Ch]
  int v90; // [sp+60h] [bp-8h]

  v77 = *(_DWORD *)(a1 + 8);
  v7 = *(_DWORD *)(((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int)))**a3)(a3) + 8);
  v81 = 1;
  v8 = (v7 & 0x1000000u) >> 24;
  if ( !a4 )
    v8 = (unsigned __int8)(v7 & 0x20) >> 5;
  v79 = v8;
  v9 = *(_BYTE *)(a1 + 20) & 0xF;
  v80 = a1;
  if ( v8 == 1 )
  {
    if ( *(_WORD *)(a1 + 12) == 278 )
      v10 = (32 * v9) | *(unsigned __int8 *)(a1 + 21) | 0x10;
    else
      v10 = (((unsigned int)v7 >> 8) & 0xFC) + ((unsigned int)(32 * v7) >> 30);
    if ( (_BYTE)v10 )
      v9 = (unsigned __int8)v10 >> 5;
  }
  else
  {
    v10 = 0;
  }
  v11 = -1;
  switch ( v9 )
  {
    case 0:
      if ( (v7 & 0x40000000) != 0 )
        goto LABEL_29;
      goto LABEL_54;
    case 1:
      if ( (v7 & 0x40000000) != 0 )
        goto LABEL_54;
      goto LABEL_29;
    case 2:
      if ( (v7 & 0x20000000) == 0 )
        goto LABEL_54;
      goto LABEL_29;
    case 3:
      if ( (v7 & 0x20000000) != 0 )
        goto LABEL_54;
      goto LABEL_29;
    case 4:
      if ( v7 >= 0 )
        goto LABEL_54;
      goto LABEL_29;
    case 5:
      if ( v7 >= 0 )
        goto LABEL_29;
      goto LABEL_54;
    case 6:
      if ( (v7 & 0x10000000) == 0 )
        goto LABEL_54;
      goto LABEL_29;
    case 7:
      if ( (v7 & 0x10000000) == 0 )
        goto LABEL_29;
      goto LABEL_54;
    case 8:
      v14 = v7 & 0x60000000;
      v15 = 0x20000000;
      goto LABEL_28;
    case 9:
      v13 = v7 & 0x60000000;
      v12 = 0x20000000;
      goto LABEL_53;
    case 10:
      goto LABEL_27;
    case 11:
      goto LABEL_14;
    case 12:
      if ( (v7 & 0x40000000) != 0 )
        goto LABEL_54;
LABEL_27:
      v15 = (unsigned int)v7 >> 31;
      v14 = (unsigned int)(8 * v7) >> 31;
LABEL_28:
      if ( v14 == v15 )
        goto LABEL_29;
      goto LABEL_54;
    case 13:
      if ( (v7 & 0x40000000) != 0 )
        goto LABEL_29;
LABEL_14:
      v12 = (unsigned int)v7 >> 31;
      v13 = (unsigned int)(8 * v7) >> 31;
LABEL_53:
      if ( v13 == v12 )
      {
LABEL_54:
        v81 = 0;
        if ( !(v10 << 24) )
          return v11;
LABEL_189:
        if ( v11 == -1 )
        {
          v64 = v77;
          do
          {
            v65 = ((unsigned int)((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), signed int))(*a3)[2])(
                                   a3,
                                   v64) >> 11)
                - 29;
            v66 = 4;
            if ( v65 >= 3 )
              v66 = 2;
            v64 += v66;
            v67 = ((unsigned __int8)(v10 & 0x10) >> 4) ^ v81;
            v10 <<= v67;
          }
          while ( v10 << 27 && v67 );
          return v64 | 1;
        }
        return v11;
      }
LABEL_29:
      v16 = *(unsigned __int16 *)(v80 + 12);
      v17 = 1;
      if ( v16 != 41 )
      {
        v17 = 1;
        if ( v16 != 47 )
          v17 = v16 == 166;
      }
      v70 = v17;
      if ( *(unsigned __int16 *)(v80 + 12) <= 0x111u )
      {
        switch ( *(_WORD *)(v80 + 12) )
        {
          case 1:
            v20 = *(_DWORD *)((**a3)(a3, "LR", a2) + 8);
            if ( v20 == -1 )
              goto LABEL_146;
            goto LABEL_180;
          case 2:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xD:
          case 0xE:
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x1E:
          case 0x1F:
          case 0x20:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x2B:
          case 0x2C:
          case 0x2D:
            goto LABEL_146;
          case 3:
          case 4:
          case 0x29:
          case 0x2E:
          case 0x2F:
            goto LABEL_70;
          case 0x21:
          case 0x2A:
            v18 = (int *)(v80 + 64);
            if ( v16 != 33 )
              v18 = (int *)(v80 + 40);
            v19 = *v18;
            if ( (*v18 & 0x8000) == 0 )
            {
              v20 = -1;
              goto LABEL_145;
            }
            v33 = 13;
            if ( v16 == 33 )
              v33 = *(_WORD *)(v80 + 30);
            v20 = -1;
            if ( v33 > 0xC2u )
              goto LABEL_145;
            v73 = v19;
            v34 = 0;
            if ( v33 == 160 )
              goto LABEL_141;
            if ( v33 < 0x10u || (unsigned int)v33 - 61 < 0x20 )
            {
              v71 = v33;
              v35 = off_DA3A0[v33];
            }
            else
            {
              if ( (v33 | 2) != 0x12 )
              {
                sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
                v34 = 0;
                goto LABEL_141;
              }
              v71 = v33;
              v35 = "PSR";
            }
            v51 = *(_DWORD *)((**a3)(a3, (char *)v35, a2) + 8);
            v52 = 4;
            if ( !v79 )
              v52 = 8;
            v34 = v51 + v52;
            if ( v71 != 15 )
              v34 = v51;
LABEL_141:
            v53 = -4;
            if ( (*(_DWORD *)(v80 + 16) & 0x90) != 0 || *(_WORD *)(v80 + 12) == 42 )
              v53 = 4 * bitcount(v73) - 4;
            v20 = ((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), unsigned int))(*a3)[3])(a3, v53 + v34);
            v70 = 1;
LABEL_145:
            v70 = v70;
            if ( v20 == -1 )
              goto LABEL_146;
            goto LABEL_180;
          default:
            if ( v16 == 166 )
              goto LABEL_70;
            goto LABEL_146;
        }
      }
      if ( *(unsigned __int16 *)(v80 + 12) > 0x1D3u )
      {
        if ( (unsigned int)(v16 - 468) >= 2 )
        {
          if ( (unsigned int)(v16 - 470) < 2 )
          {
LABEL_70:
            LOBYTE(v82) = 0;
            v88 = 0;
            v87 = 0;
            v83 = -1;
            v89 = -1;
            v90 = 0;
            v86 = -1;
            v85 = -1;
            v84 = -2;
            v31 = sub_6A270((char *)v80, 0, v8, &v82, a2, a3);
            v20 = -1;
            if ( v31 )
            {
              v32 = &v83;
              if ( *(_BYTE *)(v80 + 25) != 7 )
                v32 = &v85;
              v20 = *v32;
            }
            if ( v84 >= -1 )
            {
              if ( v85 )
              {
                v72 = v20;
                v86 = 0;
                qfree((void *)v85);
                v87 = 0;
                v85 = 0;
                v20 = v72;
              }
              v84 = -2;
            }
            if ( v20 != -1 )
              goto LABEL_180;
          }
          goto LABEL_146;
        }
        v28 = *(unsigned __int16 *)(v80 + 30);
        v29 = 0;
        if ( v28 == 160 )
          goto LABEL_102;
        if ( v28 < 0x10 || v28 - 61 < 0x20 )
        {
          v30 = off_DA3A0[v28];
        }
        else
        {
          v30 = "PSR";
          if ( (v28 | 2) != 0x12 )
          {
            sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
            v29 = 0;
LABEL_102:
            v40 = *(unsigned __int16 *)(v80 + 12);
            v41 = *(_DWORD *)(v80 + 56);
            if ( v40 == 469 )
            {
              if ( ((1 << v41) & v29) == 0 )
                goto LABEL_146;
            }
            else if ( v40 != 468 || ((1 << v41) & v29) != 0 )
            {
              goto LABEL_146;
            }
            v20 = *(_DWORD *)(v80 + 84);
            if ( v20 == -1 )
              goto LABEL_146;
            goto LABEL_180;
          }
        }
        v74 = *(unsigned __int16 *)(v80 + 30);
        v38 = *(_DWORD *)((**a3)(a3, (char *)v30, a2) + 8);
        v39 = 4;
        if ( !v79 )
          v39 = 8;
        v29 = v38 + v39;
        if ( v74 != 15 )
          v29 = v38;
        goto LABEL_102;
      }
      if ( (unsigned int)(v16 - 274) < 2 )
      {
        v24 = *(unsigned __int16 *)(v80 + 30);
        v25 = 0;
        v26 = 0;
        if ( v24 == 160 )
          goto LABEL_114;
        if ( v24 < 0x10 || v24 - 61 < 0x20 )
        {
          v27 = off_DA3A0[v24];
        }
        else
        {
          if ( (v24 | 2) != 0x12 )
          {
            sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
            v25 = 0;
            v26 = 0;
            goto LABEL_114;
          }
          v27 = "PSR";
        }
        v36 = *(_DWORD *)((**a3)(a3, (char *)v27, a2) + 8);
        v37 = 4;
        if ( !v79 )
          v37 = 8;
        v26 = v36 + v37;
        if ( v24 != 15 )
          v26 = v36;
        v25 = 0;
LABEL_114:
        v44 = *(unsigned __int8 *)(v80 + 44);
        if ( v44 == 160 )
          goto LABEL_125;
        if ( v44 < 0x10 || v44 - 61 < 0x20 )
        {
          v75 = v26;
          v45 = off_DA3A0[v44];
        }
        else
        {
          if ( (v44 | 2) != 0x12 )
          {
            v48 = v26;
            sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
            v26 = v48;
            v25 = 0;
            goto LABEL_125;
          }
          v75 = v26;
          v45 = "PSR";
        }
        v46 = *(_DWORD *)((**a3)(a3, (char *)v45, a2) + 8);
        v47 = 4;
        if ( !v79 )
          v47 = 8;
        v25 = v46 + v47;
        v26 = v75;
        if ( v44 != 15 )
          v25 = v46;
LABEL_125:
        if ( *(_WORD *)(v80 + 12) == 275 )
          v49 = ((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), int))(*a3)[2])(a3, 2 * v25 + v26);
        else
          v49 = ((int (__fastcall *)(int (__fastcall ***)(_DWORD, char *, int), int))(*a3)[1])(a3, v25 + v26);
        v20 = v77 + 2 * v49 + 4;
        if ( v77 + 2 * v49 == -5 )
          goto LABEL_146;
LABEL_180:
        if ( v20 >= 0xFFFF0000 )
          v20 = *(_DWORD *)((**a3)(a3, "LR", a2) + 8);
        v61 = v20 & 1;
        if ( !v70 )
          v61 = v79;
        v62 = v79 ^ 1;
        if ( *(_WORD *)(v80 + 12) != 46 )
          v62 = v61;
        v11 = v20 | 1;
        v63 = v20 & 0xFFFFFFFC;
        if ( !v62 )
          v11 = v63;
LABEL_188:
        if ( !(v10 << 24) )
          return v11;
        goto LABEL_189;
      }
      if ( (unsigned int)(v16 - 282) >= 2 )
        goto LABEL_146;
      v21 = *(unsigned __int16 *)(v80 + 30);
      v22 = 0;
      if ( v21 == 160 )
        goto LABEL_130;
      if ( v21 < 0x10 || v21 - 61 < 0x20 )
      {
        v23 = off_DA3A0[v21];
      }
      else
      {
        if ( (v21 | 2) != 0x12 )
        {
          sub_2BC80((int)"Bad register number passed to arm.get_register_value: %d");
          v22 = 0;
          goto LABEL_130;
        }
        v23 = "PSR";
      }
      v42 = *(_DWORD *)((**a3)(a3, (char *)v23, a2) + 8);
      v43 = 4;
      if ( !v79 )
        v43 = 8;
      v22 = v42 + v43;
      if ( v21 != 15 )
        v22 = v42;
LABEL_130:
      v50 = *(unsigned __int16 *)(v80 + 12);
      if ( !v22 && v50 == 282 || v22 && v50 != 282 )
      {
        v20 = *(_DWORD *)(v80 + 60);
        if ( v20 != -1 )
          goto LABEL_180;
      }
LABEL_146:
      if ( *(_BYTE *)(v80 + 25) != 1 || *(_WORD *)(v80 + 30) != 15 )
        goto LABEL_188;
      LOBYTE(v82) = 0;
      v88 = 0;
      v87 = 0;
      v83 = -1;
      v89 = -1;
      v90 = 0;
      v86 = -1;
      v85 = -1;
      v84 = -2;
      if ( sub_6A270((char *)v80, 1, v79, &v82, a2, a3) )
      {
        v54 = v85;
        v55 = sub_6A270((char *)v80, 2, v79, &v82, a2, a3);
        v56 = v54;
        v57 = v54;
        if ( v55 )
          v57 = v85;
        else
          v56 = v77;
        v58 = 0;
        v76 = -1;
        switch ( *(_WORD *)(v80 + 12) )
        {
          case 5:
            v60 = v56 >> v57;
            goto LABEL_164;
          case 6:
            v60 = v56 << v57;
            goto LABEL_164;
          case 7:
            v60 = (unsigned int)v56 >> v57;
            goto LABEL_164;
          case 8:
            v76 = rotate_left(v56, -v57, 0x20u, 0);
            v58 = 0;
            break;
          case 9:
            v59 = -v57;
            goto LABEL_173;
          case 0xA:
            v57 &= v56;
            goto LABEL_169;
          case 0xB:
            v57 ^= v56;
            goto LABEL_169;
          case 0xC:
            v59 = v56 - v57;
            goto LABEL_173;
          case 0xD:
            v59 = v57 - v56;
            goto LABEL_173;
          case 0xE:
            v59 = v57 + v56;
            goto LABEL_173;
          case 0xF:
            v59 = v57 + v56 + 125;
            goto LABEL_173;
          case 0x10:
            v59 = v56 + 124 - v57;
            goto LABEL_173;
          case 0x11:
            v59 = 124 - v56 + v57;
            goto LABEL_173;
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x1D:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2A:
          case 0x2B:
          case 0x2D:
          case 0x2E:
          case 0x2F:
          case 0x30:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
          case 0x3A:
          case 0x3B:
          case 0x3C:
          case 0x3D:
          case 0x3E:
          case 0x3F:
          case 0x40:
          case 0x41:
          case 0x42:
          case 0x43:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
          case 0x48:
          case 0x49:
          case 0x4A:
          case 0x4B:
          case 0x4C:
          case 0x4D:
          case 0x4E:
          case 0x4F:
            break;
          case 0x16:
            v57 |= v56;
            goto LABEL_169;
          case 0x17:
          case 0x23:
          case 0x2C:
          case 0x50:
          case 0x51:
            goto LABEL_169;
          case 0x18:
            v60 = v56 & ~v57;
LABEL_164:
            v58 = 0;
            v76 = v60;
            break;
          case 0x19:
            v59 = ~v57;
LABEL_173:
            v76 = v59;
            v58 = 0;
            break;
          case 0x1E:
          case 0x1F:
            v70 = 1;
LABEL_169:
            v58 = 0;
            v76 = v57;
            break;
          default:
            v58 = 0;
            v76 = -1;
            break;
        }
      }
      else
      {
        v76 = -1;
        v58 = 1;
      }
      v20 = v76;
      if ( v84 >= -1 )
      {
        if ( v85 )
        {
          v69 = v58;
          v86 = 0;
          qfree((void *)v85);
          v87 = 0;
          v85 = 0;
          v20 = v76;
          v58 = v69;
        }
        v84 = -2;
      }
      if ( !v58 )
      {
        if ( v20 == -1 )
          goto LABEL_188;
        goto LABEL_180;
      }
      return v11;
    case 14:
      goto LABEL_29;
    default:
      goto LABEL_54;
  }
}
// DA3A0: using guessed type char *off_DA3A0[195];
