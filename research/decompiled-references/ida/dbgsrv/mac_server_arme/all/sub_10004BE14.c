/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10004BE14
// Address: 0x000000010004BE14

//----- (000000010004BE14) ----------------------------------------------------
__int64 __fastcall sub_10004BE14(__int64 a1, __int64 a2)
{
  int v4; // w23
  char v5; // w20
  int v6; // w8
  char v7; // w26
  bool v8; // w24
  char v9; // w25
  void *v10; // x21
  __int64 v11; // x27
  size_t v12; // x2
  _QWORD v14[3]; // [xsp+0h] [xbp-320h] BYREF
  char v15; // [xsp+18h] [xbp-308h]
  __int128 v16; // [xsp+20h] [xbp-300h]
  __int128 v17; // [xsp+30h] [xbp-2F0h]
  __int128 v18; // [xsp+40h] [xbp-2E0h]
  void *v19; // [xsp+50h] [xbp-2D0h] BYREF
  __int64 v20; // [xsp+58h] [xbp-2C8h]
  __int64 v21; // [xsp+60h] [xbp-2C0h]
  __int64 (__fastcall **v22)(); // [xsp+68h] [xbp-2B8h] BYREF
  void *v23; // [xsp+70h] [xbp-2B0h]
  __int64 v24; // [xsp+78h] [xbp-2A8h]
  __int64 v25; // [xsp+80h] [xbp-2A0h]
  int v26; // [xsp+B0h] [xbp-270h]
  unsigned __int16 v27; // [xsp+B4h] [xbp-26Ch]
  unsigned __int16 v28; // [xsp+B6h] [xbp-26Ah]
  unsigned int v29; // [xsp+BCh] [xbp-264h]
  int v30; // [xsp+C0h] [xbp-260h]
  unsigned __int16 v31; // [xsp+C4h] [xbp-25Ch]
  int v32; // [xsp+2B8h] [xbp-68h]

  v22 = off_10009EED0;
  v23 = nullptr;
  v24 = 0;
  v25 = 0;
  if ( !(unsigned int)sub_10004C46C((__int64)&v22, a2, 1, 1) )
  {
    v5 = 0;
    goto LABEL_49;
  }
  v4 = -1;
  if ( v27 <= 0x265u )
  {
    if ( (unsigned int)v27 - 332 <= 0xB4 )
    {
      switch ( v27 )
      {
        case 0x14Cu:
        case 0x14Du:
        case 0x14Eu:
          goto LABEL_19;
        case 0x162u:
        case 0x163u:
        case 0x166u:
        case 0x168u:
        case 0x169u:
          goto LABEL_5;
        case 0x184u:
          v4 = 24;
          break;
        case 0x1A2u:
        case 0x1A3u:
        case 0x1A4u:
        case 0x1A6u:
        case 0x1A8u:
          v4 = 18;
          break;
        case 0x1C0u:
        case 0x1C2u:
        case 0x1C4u:
          goto LABEL_26;
        case 0x1F0u:
        case 0x1F1u:
        case 0x1F2u:
          v4 = 15;
          break;
        case 0x200u:
          v4 = 31;
          break;
        default:
          goto LABEL_31;
      }
    }
    goto LABEL_31;
  }
  if ( v27 > 0x51Fu )
  {
    if ( v27 <= 0xEBBu )
    {
      if ( v27 == 1312 )
      {
        v4 = 27;
      }
      else if ( v27 == 2560 )
      {
LABEL_26:
        v4 = 13;
      }
    }
    else
    {
      switch ( v27 )
      {
        case 0xEBCu:
          v4 = 57;
          break;
        case 0x8664u:
LABEL_19:
          v4 = 0;
          break;
        case 0x9041u:
          v4 = 37;
          break;
      }
    }
    goto LABEL_31;
  }
  if ( v27 > 0x365u )
  {
    if ( v27 != 870 && v27 != 1126 )
      goto LABEL_31;
  }
  else if ( v27 != 614 )
  {
    if ( v27 == 616 )
      v4 = 7;
    else
      v4 = -1;
    goto LABEL_31;
  }
LABEL_5:
  v4 = 12;
LABEL_31:
  v19 = nullptr;
  v20 = 0;
  v21 = 0;
  if ( v29 )
    sub_100055CA0((__int64)&v19, a2, (unsigned int)(18 * v30) + (unsigned __int64)v29, 0);
  v14[0] = off_10009EEF8;
  v14[1] = a2;
  v14[2] = &v19;
  v15 = 0;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  if ( v26 == 23126 )
    v6 = v32 + 40;
  else
    v6 = v32 + v31 + 24;
  sub_100056114((__int64)&v22, a2, v6, v28, (__int64)v14);
  v7 = v15;
  if ( (unsigned __int64)v18 > 1 )
  {
    qstrncpy((const char *)(a1 + 1034), *((unsigned __int8 **)&v17 + 1), 1024);
    v9 = v15;
    v8 = (unsigned __int64)v18 > 1;
  }
  else
  {
    v8 = 0;
    *(_BYTE *)(a1 + 1034) = 0;
    v9 = v7;
  }
  v11 = *((_QWORD *)&v16 + 1);
  v10 = (void *)v16;
  if ( DWORD2(v16) >= 0x400 )
    v12 = 1024;
  else
    v12 = DWORD2(v16);
  *(_DWORD *)(a1 + 4) = v4;
  *(_WORD *)(a1 + 8) = v12;
  memmove((void *)(a1 + 10), v10, v12);
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 1) = v7;
  v14[0] = off_10009EEF8;
  if ( *((_QWORD *)&v17 + 1) )
  {
    *(_QWORD *)&v18 = 0;
    qfree(*((void **)&v17 + 1));
    *((_QWORD *)&v17 + 1) = 0;
    *((_QWORD *)&v18 + 1) = 0;
    v10 = (void *)v16;
  }
  if ( v10 )
  {
    *((_QWORD *)&v16 + 1) = 0;
    qfree(v10);
  }
  if ( v19 )
  {
    v20 = 0;
    qfree(v19);
  }
  v5 = v9 | v8 | (v11 != 0);
LABEL_49:
  v22 = off_10009EED0;
  if ( v23 )
  {
    v24 = 0;
    qfree(v23);
  }
  return v5 & 1;
}
// 10009EED0: using guessed type __int64 (__fastcall *off_10009EED0[3])();
// 10009EEF8: using guessed type __int64 (__fastcall *off_10009EEF8[3])();
