/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_595E4
// Address: 0x000595E4

//----- (000595E4) --------------------------------------------------------
int __fastcall sub_595E4(int a1, int *a2)
{
  int v3; // r2
  int v4; // r6
  __int64 v5; // r2
  int v6; // r2
  _BYTE *v7; // r0
  char v8; // r4
  size_t v9; // r2
  int v10; // r7
  int v12; // [sp+8h] [bp-294h]
  int v13; // [sp+14h] [bp-288h]
  _DWORD *v15[3]; // [sp+20h] [bp-27Ch] BYREF
  char v16; // [sp+2Ch] [bp-270h]
  void *v17; // [sp+30h] [bp-26Ch]
  size_t v18; // [sp+34h] [bp-268h]
  int v19; // [sp+38h] [bp-264h]
  unsigned __int8 *v20; // [sp+3Ch] [bp-260h]
  unsigned int v21; // [sp+40h] [bp-25Ch]
  int v22; // [sp+44h] [bp-258h]
  void *v23; // [sp+48h] [bp-254h] BYREF
  int v24; // [sp+4Ch] [bp-250h]
  int v25; // [sp+50h] [bp-24Ch]
  _UNKNOWN **v26; // [sp+54h] [bp-248h] BYREF
  void *v27; // [sp+58h] [bp-244h]
  int v28; // [sp+5Ch] [bp-240h]
  int v29; // [sp+60h] [bp-23Ch]
  int v30; // [sp+8Ch] [bp-210h]
  unsigned __int16 v31; // [sp+90h] [bp-20Ch]
  unsigned __int16 v32; // [sp+92h] [bp-20Ah]
  int v33; // [sp+98h] [bp-204h]
  int v34; // [sp+9Ch] [bp-200h]
  unsigned __int16 v35; // [sp+A0h] [bp-1FCh]
  int v36; // [sp+290h] [bp-Ch]

  v27 = nullptr;
  v26 = &off_DA024;
  v28 = 0;
  v29 = 0;
  if ( !sub_59A30((int)&v26, (int)a2, 1, 1) )
  {
    v4 = 0;
    goto LABEL_50;
  }
  v3 = -1;
  if ( v31 <= 0x265u )
  {
    switch ( v31 )
    {
      case 0x14Cu:
      case 0x14Du:
      case 0x14Eu:
        goto LABEL_17;
      case 0x162u:
      case 0x163u:
      case 0x166u:
      case 0x168u:
      case 0x169u:
        goto LABEL_5;
      case 0x184u:
        v3 = 24;
        break;
      case 0x1A2u:
      case 0x1A3u:
      case 0x1A4u:
      case 0x1A6u:
      case 0x1A8u:
        v3 = 18;
        break;
      case 0x1C0u:
      case 0x1C2u:
      case 0x1C4u:
        goto LABEL_24;
      case 0x1F0u:
      case 0x1F1u:
      case 0x1F2u:
        v3 = 15;
        break;
      case 0x200u:
        v3 = 31;
        break;
      default:
        goto LABEL_29;
    }
    goto LABEL_29;
  }
  if ( v31 > 0x51Fu )
  {
    if ( v31 <= 0xEBBu )
    {
      if ( v31 == 1312 )
      {
        v3 = 27;
      }
      else if ( v31 == 2560 )
      {
LABEL_24:
        v3 = 13;
      }
    }
    else
    {
      switch ( v31 )
      {
        case 0xEBCu:
          v3 = 57;
          break;
        case 0x8664u:
LABEL_17:
          v3 = 0;
          break;
        case 0x9041u:
          v3 = 37;
          break;
      }
    }
    goto LABEL_29;
  }
  if ( v31 > 0x365u )
  {
    if ( v31 != 870 && v31 != 1126 )
      goto LABEL_29;
  }
  else if ( v31 != 614 )
  {
    if ( v31 == 616 )
      v3 = 7;
    goto LABEL_29;
  }
LABEL_5:
  v3 = 12;
LABEL_29:
  v12 = v3;
  v24 = 0;
  v23 = nullptr;
  v25 = 0;
  if ( v33 )
  {
    LODWORD(v5) = 18 * v34 + v33;
    HIDWORD(v5) = __CFADD__(18 * v34, v33);
    sub_6214C((int)&v23, a2, v5, 0);
  }
  v16 = 0;
  v15[1] = a2;
  v15[2] = &v23;
  v22 = 0;
  v21 = 0;
  v20 = nullptr;
  v19 = 0;
  v18 = 0;
  v17 = nullptr;
  v15[0] = &off_DA038;
  v13 = 1;
  if ( v30 == 23126 )
    v6 = v36 + 40;
  else
    v6 = v36 + v35 + 24;
  sub_624E0((unsigned int)&v26, a2, v6, v32, v15);
  v7 = (_BYTE *)(a1 + 1034);
  v8 = v16;
  if ( v21 > 1 )
    qstrncpy((unsigned int)v7, v20, 4096);
  else
    *v7 = 0;
  v9 = v18;
  *(_DWORD *)(a1 + 4) = v12;
  v10 = 1;
  if ( v9 >> 10 )
    v9 = 1024;
  *(_WORD *)(a1 + 8) = v9;
  memmove((void *)(a1 + 10), v17, v9);
  *(_BYTE *)(a1 + 1) = v8;
  *(_BYTE *)a1 = 0;
  if ( !v16 && !v18 )
  {
    if ( v21 <= 1 )
      v10 = 0;
    v13 = v10;
  }
  v15[0] = &off_DA038;
  if ( v20 )
  {
    v21 = 0;
    qfree(v20);
    v22 = 0;
    v20 = nullptr;
  }
  if ( v17 )
  {
    v18 = 0;
    qfree(v17);
    v19 = 0;
    v17 = nullptr;
  }
  v4 = v13;
  if ( v23 )
  {
    v24 = 0;
    qfree(v23);
    v25 = 0;
    v23 = nullptr;
  }
LABEL_50:
  v26 = &off_DA024;
  if ( v27 )
  {
    v28 = 0;
    qfree(v27);
    v29 = 0;
    v27 = nullptr;
  }
  return v4;
}
// DA024: using guessed type _UNKNOWN *off_DA024;
// DA038: using guessed type _UNKNOWN *off_DA038;
