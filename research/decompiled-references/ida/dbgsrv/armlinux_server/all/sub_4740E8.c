/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4740E8
// Address: 0x00000000004740E8

//----- (00000000004740E8) ----------------------------------------------------
__int64 __fastcall sub_4740E8(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, __int64 *, __int64),
        unsigned __int8 a4)
{
  int v4; // w19
  __int64 v8; // x20
  __int64 v9; // x21
  unsigned int v10; // w23
  unsigned int v11; // w0
  unsigned __int64 v12; // x19
  unsigned int v13; // w2
  _BOOL4 v15; // w27
  int v16; // w1
  int v17; // w21
  int v18; // w1
  int v19; // w0
  __int64 (__fastcall **v20)(_QWORD, __int64 *, __int64); // x2
  __int64 v21; // x0
  __int64 v22; // x28
  int v23; // w2
  int v24; // w21
  int v25; // w23
  _BOOL4 v26; // w0
  unsigned int v27; // w0
  unsigned int v28; // w21
  bool v29; // zf
  __int64 v30; // x0
  int v32; // w1
  unsigned int v33; // w0
  int v34; // w1
  int v35; // w1
  unsigned __int16 v36; // w21
  __int64 v37; // x27
  __int64 v38; // x0
  unsigned __int64 v39; // x0
  int v40; // w2
  __int64 v41; // x1
  __int64 v42; // x0
  int v43; // w0
  int v44; // [xsp+68h] [xbp-48h]
  _BYTE v45[8]; // [xsp+70h] [xbp-40h] BYREF
  __int64 v46; // [xsp+78h] [xbp-38h]
  int v47; // [xsp+80h] [xbp-30h]
  void *ptr; // [xsp+88h] [xbp-28h]
  __int64 v49; // [xsp+90h] [xbp-20h]
  __int64 v50; // [xsp+98h] [xbp-18h]
  __int64 v51; // [xsp+A0h] [xbp-10h]

  v4 = a4;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)((**a3)(a3, &qword_4C8F88, a2) + 8);
  v10 = ((unsigned int)v9 >> 5) & 1;
  if ( v4 )
    v10 = BYTE3(v9) & 1;
  v11 = *(_BYTE *)(a1 + 32) & 0xF;
  if ( v10 )
  {
    if ( *(_WORD *)(a1 + 24) == 278 )
    {
      v12 = *(_BYTE *)(a1 + 33) | 0x10u | (unsigned __int8)(32 * v11);
    }
    else
    {
      v12 = ((unsigned int)v9 >> 8) & 0xFC | ((unsigned int)v9 >> 25) & 3;
      if ( !(_DWORD)v12 )
        goto LABEL_6;
    }
    v27 = (unsigned int)v12 >> 5;
    if ( (unsigned int)v12 >> 5 == 4 )
    {
LABEL_88:
      v24 = (unsigned int)v9 >> 31;
      goto LABEL_48;
    }
    if ( v27 <= 4 )
    {
      if ( v27 == 2 )
      {
LABEL_80:
        v24 = ((unsigned int)v9 >> 29) & 1;
        goto LABEL_48;
      }
      if ( v27 <= 2 )
      {
        if ( v27 == 1 )
          LODWORD(v9) = v9 ^ 0x40000000;
        goto LABEL_85;
      }
      goto LABEL_90;
    }
    if ( v27 == 6 )
    {
LABEL_47:
      v24 = ((unsigned int)v9 >> 28) & 1;
      goto LABEL_48;
    }
    if ( v27 < 6 )
      goto LABEL_87;
    if ( v27 != 7 )
      goto LABEL_85;
    v28 = v9 ^ 0x10000000;
LABEL_57:
    v24 = (v28 >> 28) & 1;
    goto LABEL_48;
  }
LABEL_6:
  if ( v11 == 7 )
  {
    v12 = 0;
    v28 = v9 ^ 0x10000000;
    goto LABEL_57;
  }
  if ( v11 <= 7 )
  {
    if ( v11 != 3 )
    {
      if ( v11 > 3 )
      {
        if ( v11 != 5 )
        {
          if ( v11 <= 5 )
          {
            v12 = 0;
            v24 = (unsigned int)v9 >> 31;
            goto LABEL_48;
          }
          v12 = 0;
          goto LABEL_47;
        }
        v12 = 0;
LABEL_87:
        LODWORD(v9) = ~(_DWORD)v9;
        goto LABEL_88;
      }
      if ( v11 != 1 )
      {
        if ( v11 <= 1 )
        {
          v12 = 0;
          v24 = ((unsigned int)v9 >> 30) & 1;
          goto LABEL_48;
        }
        v12 = 0;
        goto LABEL_80;
      }
      v12 = 0;
      LODWORD(v9) = v9 ^ 0x40000000;
LABEL_85:
      v24 = ((unsigned int)v9 >> 30) & 1;
      goto LABEL_48;
    }
    v12 = 0;
LABEL_90:
    v24 = (((unsigned int)v9 ^ 0x20000000) >> 29) & 1;
    goto LABEL_48;
  }
  if ( v11 == 11 )
  {
    v12 = 0;
    v24 = ((unsigned int)v9 >> 28) & 1 ^ ((unsigned int)v9 >> 31);
  }
  else
  {
    if ( v11 > 0xB )
    {
      if ( v11 == 13 )
      {
        if ( (v9 & 0x40000000) == 0 && (((unsigned int)v9 >> 28) & 1) == (unsigned int)v9 >> 31 )
          goto LABEL_126;
      }
      else
      {
        if ( v11 >= 0xD )
        {
          if ( v11 != 14 )
            return -1;
          goto LABEL_13;
        }
        if ( (v9 & 0x40000000) != 0 || (((unsigned int)v9 >> 28) & 1) != (unsigned int)v9 >> 31 )
        {
LABEL_126:
          v26 = 0;
          v12 = 0;
          v24 = 0;
          v22 = -1;
LABEL_63:
          if ( (_DWORD)v12 )
            v29 = !v26;
          else
            v29 = 0;
          if ( v29 )
          {
            do
            {
              if ( (unsigned int)(((unsigned __int16 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), __int64))(*a3)[2])(
                                    a3,
                                    v8) >> 11)
                 - 29 <= 2 )
                v30 = 4;
              else
                v30 = 2;
              v8 += v30;
              if ( v24 == ((v12 >> 4) & 1) )
                break;
              v12 = 2 * (unsigned int)(v12 & 0x7F);
            }
            while ( (v12 & 0x1E) != 0 );
            return v8 | 1;
          }
          return v22;
        }
      }
LABEL_13:
      v12 = 0;
      v13 = *(unsigned __int16 *)(a1 + 24);
      goto LABEL_14;
    }
    if ( v11 == 9 )
    {
      v12 = 0;
      v24 = (v9 & 0x60000000) != 0x20000000;
    }
    else
    {
      if ( v11 > 9 )
      {
        v12 = 0;
        v24 = ((unsigned int)v9 >> 28) & 1 ^ ((int)v9 >= 0);
        if ( v24 )
          goto LABEL_49;
LABEL_62:
        v26 = 0;
        v22 = -1;
        goto LABEL_63;
      }
      v12 = 0;
      v24 = (v9 & 0x60000000) == 0x20000000;
    }
  }
LABEL_48:
  if ( !v24 )
    goto LABEL_62;
LABEL_49:
  v13 = *(unsigned __int16 *)(a1 + 24);
LABEL_14:
  v15 = v13 == 41 || v13 == 47;
  if ( v13 == 166 )
  {
    v15 = 1;
LABEL_114:
    v45[0] = 0;
    v46 = -1;
    v47 = -2;
    ptr = (void *)-1LL;
    v49 = 0;
    v50 = 0;
    v51 = 0xFFFFFFFFLL;
    v22 = -1;
    if ( (unsigned __int8)sub_473C48(a1, 0, v10, (__int64)v45, a2, a3) )
    {
      if ( *(_BYTE *)(a1 + 41) == 7 )
        v22 = v46;
      else
        v22 = (__int64)ptr;
    }
    if ( v47 >= -1 && ptr )
    {
      v49 = 0;
      j__free(ptr);
    }
    goto LABEL_33;
  }
  if ( v13 <= 0xA6 )
  {
    if ( v13 == 33 )
    {
      v36 = *(_QWORD *)(a1 + 104);
      if ( (*(_QWORD *)(a1 + 104) & 0x8000) == 0 )
        goto LABEL_92;
      v33 = *(unsigned __int16 *)(a1 + 46);
      if ( v33 > 0xC2 )
      {
        if ( *(_BYTE *)(a1 + 41) != 1 )
          goto LABEL_93;
        goto LABEL_105;
      }
      v37 = 0;
      if ( v33 == 160 )
      {
LABEL_136:
        if ( (*(_DWORD *)(a1 + 28) & 0x90) != 0 || (v38 = -4, *(_WORD *)(a1 + 24) == 42) )
          v38 = (int)(4 * sub_47FD50(v36) - 4);
        v22 = ((unsigned int (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), __int64))(*a3)[3])(
                a3,
                v37 + v38);
        v23 = *(unsigned __int16 *)(a1 + 24);
LABEL_36:
        v24 = v22 & 1;
LABEL_37:
        v25 = v10 ^ 1;
        if ( v23 == 46 )
          v24 = v25;
        if ( !v24 )
          return v22 & 0xFFFFFFFFFFFFFFFCLL;
        v22 |= 1uLL;
        v26 = v22 != -1;
        goto LABEL_63;
      }
      v35 = *(unsigned __int16 *)(a1 + 46);
    }
    else
    {
      if ( v13 <= 0x21 )
      {
        if ( v13 == 1 )
        {
          v22 = *(_QWORD *)((**a3)(a3, &qword_4C8F70, a2) + 8);
          if ( v22 != -1 )
          {
            v23 = *(unsigned __int16 *)(a1 + 24);
            v24 = v10;
            goto LABEL_37;
          }
        }
        else if ( v13 && v13 - 3 <= 1 )
        {
          goto LABEL_114;
        }
        goto LABEL_92;
      }
      if ( v13 != 42 )
      {
        if ( v13 > 0x2A )
        {
          if ( v13 - 46 <= 1 )
            goto LABEL_114;
        }
        else if ( v13 == 41 )
        {
          goto LABEL_114;
        }
        goto LABEL_92;
      }
      v35 = 13;
      v36 = *(_QWORD *)(a1 + 64);
      if ( (*(_QWORD *)(a1 + 64) & 0x8000) == 0 )
        goto LABEL_92;
    }
    v37 = sub_473A80(v10, v35, a2, a3);
    goto LABEL_136;
  }
  if ( v13 > 0x11B )
  {
    if ( v13 < 0x1D4 )
      goto LABEL_92;
    if ( v13 <= 0x1D5 )
    {
      v32 = *(unsigned __int16 *)(a1 + 46);
      if ( v32 == 160 )
      {
        if ( v13 != 468 )
          goto LABEL_92;
      }
      else
      {
        v39 = sub_473A80(v10, v32, a2, a3);
        v40 = *(unsigned __int16 *)(a1 + 24);
        v41 = *(_QWORD *)(a1 + 88);
        if ( v40 != 468 )
        {
          if ( v40 == 469 && ((v39 >> v41) & 1) != 0 )
          {
            v22 = *(_QWORD *)(a1 + 136);
            goto LABEL_33;
          }
          goto LABEL_92;
        }
        if ( ((v39 >> v41) & 1) != 0 )
          goto LABEL_92;
      }
      v22 = *(_QWORD *)(a1 + 136);
      goto LABEL_33;
    }
    if ( v13 <= 0x1D7 )
      goto LABEL_114;
  }
  else if ( v13 >= 0x11A )
  {
    v34 = *(unsigned __int16 *)(a1 + 46);
    if ( v34 == 160 )
    {
      if ( v13 == 282 )
      {
        v22 = *(_QWORD *)(a1 + 96);
        goto LABEL_33;
      }
    }
    else
    {
      v42 = sub_473A80(v10, v34, a2, a3);
      if ( *(_WORD *)(a1 + 24) == 282 )
      {
        if ( !v42 )
        {
          v22 = *(_QWORD *)(a1 + 96);
          goto LABEL_33;
        }
      }
      else if ( v42 )
      {
        v22 = *(_QWORD *)(a1 + 96);
        goto LABEL_33;
      }
    }
  }
  else if ( v13 - 274 <= 1 )
  {
    v16 = *(unsigned __int16 *)(a1 + 46);
    v17 = 0;
    if ( v16 != 160 )
      v17 = sub_473A80(v10, v16, a2, a3);
    v18 = *(unsigned __int8 *)(a1 + 72);
    v19 = 0;
    if ( v18 != 160 )
      v19 = sub_473A80(v10, v18, a2, a3);
    v20 = *a3;
    if ( *(_WORD *)(a1 + 24) == 275 )
      v21 = ((unsigned __int16 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), _QWORD))v20[2])(
              a3,
              (unsigned int)(v17 + 2 * v19));
    else
      v21 = ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64 *, __int64), _QWORD))v20[1])(
              a3,
              (unsigned int)(v19 + v17));
    v22 = v8 + 4 + 2 * v21;
LABEL_33:
    if ( v22 != -1 )
    {
LABEL_34:
      v23 = *(unsigned __int16 *)(a1 + 24);
LABEL_35:
      v24 = v10;
      if ( !v15 )
        goto LABEL_37;
      goto LABEL_36;
    }
  }
LABEL_92:
  if ( *(_BYTE *)(a1 + 41) != 1 )
  {
LABEL_93:
    v26 = 0;
    v24 = 1;
    v22 = -1;
    goto LABEL_63;
  }
  v33 = *(unsigned __int16 *)(a1 + 46);
LABEL_105:
  if ( v33 != 15 )
    goto LABEL_93;
  v45[0] = 0;
  v46 = -1;
  v47 = -2;
  ptr = (void *)-1LL;
  v49 = 0;
  v50 = 0;
  v51 = 0xFFFFFFFFLL;
  v24 = (unsigned __int8)sub_473C48(a1, 1u, v10, (__int64)v45, a2, a3);
  if ( v24 )
  {
    v44 = (int)ptr;
    if ( (unsigned __int8)sub_473C48(a1, 2u, v10, (__int64)v45, a2, a3) )
    {
      v43 = v44;
      LODWORD(v22) = (_DWORD)ptr;
    }
    else
    {
      LODWORD(v22) = v44;
      v43 = v8;
    }
    v23 = *(unsigned __int16 *)(a1 + 24);
    switch ( *(_WORD *)(a1 + 24) )
    {
      case 5:
        v22 = v43 >> v22;
        goto LABEL_165;
      case 6:
        v22 = (unsigned int)(v43 << v22);
        goto LABEL_173;
      case 7:
        v22 = (unsigned int)v43 >> v22;
        goto LABEL_173;
      case 8:
        v22 = sub_47FE40((unsigned int)v43, (unsigned int)-(int)v22, 0x20u, 0);
        goto LABEL_165;
      case 9:
        v22 = -(int)v22;
        goto LABEL_165;
      case 0xA:
        v22 = v43 & (unsigned int)v22;
        goto LABEL_173;
      case 0xB:
        v22 = v43 ^ (unsigned int)v22;
        goto LABEL_173;
      case 0xC:
        goto LABEL_178;
      case 0xD:
        goto LABEL_176;
      case 0xE:
        v22 = (unsigned int)(v43 + v22);
        goto LABEL_173;
      case 0xF:
        v22 = (unsigned int)(v43 + v22 + 125);
        goto LABEL_173;
      case 0x10:
        v43 += 124;
LABEL_178:
        v22 = (unsigned int)(v43 - v22);
        goto LABEL_173;
      case 0x11:
        LODWORD(v22) = v22 + 124;
LABEL_176:
        v22 = (unsigned int)(v22 - v43);
        goto LABEL_173;
      case 0x16:
        v22 = v43 | (unsigned int)v22;
        goto LABEL_173;
      case 0x17:
      case 0x23:
      case 0x2C:
      case 0x50:
      case 0x51:
        goto LABEL_172;
      case 0x18:
        v22 = v43 & (unsigned int)~(_DWORD)v22;
        goto LABEL_173;
      case 0x19:
        LODWORD(v22) = ~(_DWORD)v22;
        goto LABEL_172;
      case 0x1E:
      case 0x1F:
        v15 = v24;
LABEL_172:
        v22 = (unsigned int)v22;
LABEL_173:
        if ( v47 < -1 )
          goto LABEL_35;
        goto LABEL_166;
      default:
        v22 = -1;
LABEL_165:
        if ( v47 >= -1 )
        {
LABEL_166:
          if ( ptr )
          {
            v49 = 0;
            j__free(ptr);
          }
        }
        if ( v22 != -1 )
          goto LABEL_34;
        v26 = 0;
        break;
    }
    goto LABEL_63;
  }
  if ( v47 >= -1 && ptr )
  {
    v49 = 0;
    j__free(ptr);
  }
  return -1;
}
// 4740E8: could not find valid save-restore pair for x27
// 4C8F70: using guessed type __int64 qword_4C8F70;
// 4C8F88: using guessed type __int64 qword_4C8F88;
