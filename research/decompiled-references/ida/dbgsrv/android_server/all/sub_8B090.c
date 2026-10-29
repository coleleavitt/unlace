/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8B090
// Address: 0x000000000008B090

//----- (000000000008B090) ----------------------------------------------------
bool __fastcall sub_8B090(__int64 a1, __int64 a2)
{
  int v4; // w23
  _BOOL4 v5; // w19
  int v6; // w8
  char v7; // w20
  pthread_mutex_t *v8; // x0
  void *v9; // x1
  int v10; // w8
  _QWORD v12[3]; // [xsp+0h] [xbp-310h] BYREF
  char v13; // [xsp+18h] [xbp-2F8h]
  void *v14; // [xsp+20h] [xbp-2F0h]
  __int64 v15; // [xsp+28h] [xbp-2E8h]
  __int64 v16; // [xsp+30h] [xbp-2E0h]
  void *ptr; // [xsp+38h] [xbp-2D8h]
  unsigned __int64 v18; // [xsp+40h] [xbp-2D0h]
  __int64 v19; // [xsp+48h] [xbp-2C8h]
  void *v20; // [xsp+50h] [xbp-2C0h] BYREF
  __int64 v21; // [xsp+58h] [xbp-2B8h]
  __int64 v22; // [xsp+60h] [xbp-2B0h]
  _UNKNOWN **v23; // [xsp+68h] [xbp-2A8h] BYREF
  void *v24; // [xsp+70h] [xbp-2A0h]
  __int64 v25; // [xsp+78h] [xbp-298h]
  __int64 v26; // [xsp+80h] [xbp-290h]
  int v27; // [xsp+B0h] [xbp-260h]
  unsigned __int16 v28; // [xsp+B4h] [xbp-25Ch]
  unsigned __int16 v29; // [xsp+B6h] [xbp-25Ah]
  unsigned int v30; // [xsp+BCh] [xbp-254h]
  int v31; // [xsp+C0h] [xbp-250h]
  unsigned __int16 v32; // [xsp+C4h] [xbp-24Ch]
  __int64 v33; // [xsp+2B8h] [xbp-58h]
  __int64 v34; // [xsp+2C8h] [xbp-48h]

  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v23 = &off_15DF48;
  v24 = nullptr;
  v25 = 0;
  v26 = 0;
  if ( (sub_8B428((__int64)&v23, a2, 1, 1) & 1) == 0 )
  {
    v5 = 0;
    goto LABEL_48;
  }
  v4 = -1;
  if ( v28 <= 0x265u )
  {
    switch ( v28 )
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
        goto LABEL_4;
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
        goto LABEL_24;
      case 0x1F0u:
      case 0x1F1u:
      case 0x1F2u:
        v4 = 15;
        break;
      case 0x200u:
        v4 = 31;
        break;
      default:
        goto LABEL_29;
    }
    goto LABEL_29;
  }
  if ( v28 > 0x51Fu )
  {
    if ( v28 <= 0xEBBu )
    {
      if ( v28 == 1312 )
      {
        v4 = 27;
      }
      else if ( v28 == 2560 )
      {
LABEL_24:
        v4 = 13;
      }
    }
    else
    {
      switch ( v28 )
      {
        case 0xEBCu:
          v4 = 57;
          break;
        case 0x8664u:
LABEL_17:
          v4 = 0;
          break;
        case 0x9041u:
          v4 = 37;
          break;
      }
    }
    goto LABEL_29;
  }
  if ( v28 > 0x365u )
  {
    if ( v28 != 870 && v28 != 1126 )
      goto LABEL_29;
  }
  else if ( v28 != 614 )
  {
    if ( v28 == 616 )
      v4 = 7;
    goto LABEL_29;
  }
LABEL_4:
  v4 = 12;
LABEL_29:
  v20 = nullptr;
  v21 = 0;
  v22 = 0;
  if ( v30 )
    sub_965AC((__int64)&v20, a2, (unsigned int)(18 * v31) + (unsigned __int64)v30, 0);
  v12[2] = &v20;
  v12[0] = off_15DFC8;
  v12[1] = a2;
  v13 = 0;
  v18 = 0;
  v19 = 0;
  v16 = 0;
  ptr = nullptr;
  v14 = nullptr;
  v15 = 0;
  if ( v27 == 23126 )
    v6 = v33 + 40;
  else
    v6 = v33 + v32 + 24;
  sub_969F8((__int64)&v23, a2, v6, v29, (__int64)v12);
  v7 = v13;
  v8 = (pthread_mutex_t *)(a1 + 1034);
  if ( v18 > 1 )
    qstrncpy(v8, (char *)ptr, 4096);
  else
    v8->__size[0] = 0;
  v9 = v14;
  v10 = v15;
  *(_DWORD *)(a1 + 4) = v4;
  if ( (unsigned __int64)v10 > 0x400 )
    v10 = 1024;
  *(_WORD *)(a1 + 8) = v10;
  memmove((void *)(a1 + 10), v9, v10);
  *(_BYTE *)a1 = 0;
  *(_BYTE *)(a1 + 1) = v7;
  v5 = 1;
  if ( !v13 && !v15 )
    v5 = v18 > 1;
  v12[0] = off_15DFC8;
  if ( ptr )
  {
    v18 = 0;
    qfree(ptr);
    ptr = nullptr;
    v19 = 0;
  }
  if ( v14 )
  {
    v15 = 0;
    qfree(v14);
    v14 = nullptr;
    v16 = 0;
  }
  if ( v20 )
  {
    v21 = 0;
    qfree(v20);
    v20 = nullptr;
    v22 = 0;
  }
LABEL_48:
  v23 = &off_15DF48;
  if ( v24 )
  {
    v25 = 0;
    qfree(v24);
    v24 = nullptr;
    v26 = 0;
  }
  return v5;
}
// 15DF48: using guessed type _UNKNOWN *off_15DF48;
// 15DFC8: using guessed type __int64 (__fastcall *off_15DFC8[4])();
