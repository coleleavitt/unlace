__int64 __fastcall sub_108A0(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned __int16 a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  __int16 v14; // cx
  unsigned __int64 v15; // r9
  char v16; // dl
  unsigned __int64 v17; // rdx
  __int16 v18; // si
  char v19; // dl
  char v20; // si
  char v21; // cl
  __int16 v22; // cx
  char v23; // dl
  __int16 v24; // si
  __int16 v25; // si
  __int16 v26; // di
  __int16 v27; // di
  int v28; // edx
  __int16 v29; // si
  __int16 v30; // si
  __int16 v31; // cx
  char v32; // dl
  char v33; // dl

  if ( (unsigned __int8)(a5 - 2) <= 1u )
  {
    *(_WORD *)(a2 + 46) = a7;
    *(_BYTE *)(a2 + 41) = 1;
    *(_WORD *)(a2 + 24) = (a5 != 2) + 433;
    v14 = *(_WORD *)(a2 + 34);
    *(_BYTE *)(a2 + 81) = 1;
    *(_WORD *)(a2 + 86) = a8;
    *(_BYTE *)(a2 + 121) = 5;
    *(_BYTE *)(a2 + 125) = 0;
    v15 = a6 >> 1;
    *(_BYTE *)(a2 + 161) = 5;
    v16 = (v14 & 4) == 0 ? 2 : 7;
    *(_QWORD *)(a2 + 128) = v15;
    *(_BYTE *)(a2 + 45) = v16;
    *(_BYTE *)(a2 + 85) = v16;
    *(_BYTE *)(a2 + 165) = 0;
    v17 = (a4 >> 4) & 0x3F;
    *(_QWORD *)(a2 + 168) = v17;
    if ( v15 < v17 )
      return 0;
  }
  else
  {
    switch ( a6 )
    {
      case 0u:
      case 1u:
      case 2u:
      case 3u:
        *(_WORD *)(a2 + 24) = 430;
        v18 = *(_WORD *)(a2 + 34);
        *(_WORD *)(a2 + 46) = a7;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = a8;
        *(_BYTE *)(a2 + 121) = 1;
        v19 = (v18 & 4) == 0 ? 2 : 7;
        *(_WORD *)(a2 + 126) = a9;
        *(_BYTE *)(a2 + 45) = v19;
        *(_BYTE *)(a2 + 85) = v19;
        *(_BYTE *)(a2 + 125) = v19;
        *(_BYTE *)(a2 + 161) = 5;
        *(_BYTE *)(a2 + 165) = 0;
        *(_QWORD *)(a2 + 168) = (a4 >> 9) & 3;
        return *(unsigned __int16 *)(a2 + 26);
      case 4u:
        v29 = 509;
        goto LABEL_25;
      case 5u:
        v29 = 510;
        goto LABEL_25;
      case 6u:
        v29 = 511;
        goto LABEL_25;
      case 8u:
      case 9u:
        v24 = 431;
        goto LABEL_14;
      case 0xAu:
        v24 = 432;
        goto LABEL_14;
      case 0xCu:
        v29 = 512;
        goto LABEL_25;
      case 0xDu:
        v29 = 513;
        goto LABEL_25;
      case 0xEu:
        v29 = 514;
LABEL_25:
        *(_WORD *)(a2 + 24) = v29;
        v30 = *(_WORD *)(a2 + 34);
        *(_WORD *)(a2 + 46) = a7;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = a8;
        *(_BYTE *)(a2 + 121) = 1;
        LOBYTE(v28) = (v30 & 4) == 0 ? 2 : 7;
        *(_WORD *)(a2 + 126) = a9;
        *(_BYTE *)(a2 + 45) = v28;
        *(_BYTE *)(a2 + 85) = v28;
        goto LABEL_26;
      case 0x10u:
        v25 = 500;
        goto LABEL_19;
      case 0x11u:
        v25 = 503;
        goto LABEL_19;
      case 0x12u:
        v25 = 502;
        goto LABEL_19;
      case 0x13u:
        v25 = 505;
        goto LABEL_19;
      case 0x14u:
        v25 = 501;
        goto LABEL_19;
      case 0x15u:
        v25 = 504;
        goto LABEL_19;
      case 0x20u:
        v25 = 441;
        goto LABEL_19;
      case 0x21u:
        v25 = 442;
LABEL_19:
        v26 = *(_WORD *)(a2 + 34);
        *(_WORD *)(a2 + 46) = a7;
        v27 = v26 & 4;
        *(_WORD *)(a2 + 24) = v25;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = a8;
        v28 = v27 == 0 ? 2 : 7;
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 45) = v27 == 0 ? 2 : 7;
        *(_BYTE *)(a2 + 85) = v27 == 0 ? 2 : 7;
        *(_WORD *)(a2 + 126) = a9;
        switch ( v25 )
        {
          case 504:
            goto LABEL_48;
          case 505:
            goto LABEL_23;
          case 501:
LABEL_48:
            *(_BYTE *)(a2 + 125) = 1;
            *(_BYTE *)(a2 + 85) = 1;
            break;
          case 502:
LABEL_23:
            *(_BYTE *)(a2 + 125) = 2;
            *(_BYTE *)(a2 + 85) = 2;
            break;
          default:
LABEL_26:
            *(_BYTE *)(a2 + 125) = v28;
            break;
        }
        return *(unsigned __int16 *)(a2 + 26);
      case 0x40u:
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 24) = 439;
        *(_WORD *)(a2 + 46) = a7;
        if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
        {
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = a8;
          *(_BYTE *)(a2 + 85) = 7;
        }
        else
        {
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = a8;
          *(_BYTE *)(a2 + 85) = 2;
        }
        return *(unsigned __int16 *)(a2 + 26);
      case 0x41u:
        v24 = 437;
        goto LABEL_14;
      case 0x42u:
        v24 = 435;
        goto LABEL_14;
      case 0x43u:
        v24 = 436;
        goto LABEL_14;
      case 0x44u:
      case 0x45u:
        *(_WORD *)(a2 + 24) = 440;
        if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
        {
          v20 = 7;
          v21 = 7;
        }
        else
        {
          v20 = 2;
          v21 = 2;
        }
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = a7;
        *(_BYTE *)(a2 + 45) = v20;
        *(_BYTE *)(a2 + 81) = 1;
        *(_WORD *)(a2 + 86) = a8;
        *(_BYTE *)(a2 + 85) = v21;
        goto LABEL_10;
      case 0x48u:
        v24 = 438;
LABEL_14:
        *(_WORD *)(a2 + 24) = v24;
        *(_BYTE *)(a2 + 41) = 1;
        *(_WORD *)(a2 + 46) = a7;
        if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
        {
          *(_BYTE *)(a2 + 45) = 7;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = a8;
          *(_BYTE *)(a2 + 85) = 7;
          if ( v24 == 431 )
          {
LABEL_10:
            *(_BYTE *)(a2 + 121) = 5;
            *(_BYTE *)(a2 + 125) = 0;
            *(_QWORD *)(a2 + 128) = (a4 >> 4) & 0x3F;
            return *(unsigned __int16 *)(a2 + 26);
          }
        }
        else
        {
          *(_BYTE *)(a2 + 45) = 2;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = a8;
          *(_BYTE *)(a2 + 85) = 2;
          if ( v24 == 431 )
          {
            *(_BYTE *)(a2 + 121) = 5;
            *(_BYTE *)(a2 + 125) = 0;
            *(_QWORD *)(a2 + 128) = (a4 >> 4) & 0x1F;
            return *(unsigned __int16 *)(a2 + 26);
          }
        }
        if ( v24 == 432 )
        {
          *(_BYTE *)(a2 + 85) = 2;
          *(_BYTE *)(a2 + 121) = 5;
          *(_BYTE *)(a2 + 125) = 0;
          *(_QWORD *)(a2 + 128) = a9;
        }
        break;
      case 0x50u:
      case 0x60u:
        *(_WORD *)(a2 + 24) = 506;
        if ( a6 == 80 )
        {
          *(_BYTE *)(a2 + 30) = 8;
          v31 = *(_WORD *)(a2 + 34);
          *(_WORD *)(a2 + 28) = 1043;
          v32 = *(_BYTE *)(a1 + 468);
          *(_BYTE *)(a2 + 41) = 1;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = a8;
          *(_WORD *)(a2 + 46) = (char)((((unsigned __int16)a3 >> 7) & 0x1F) + 32 * ((v32 & 8) == 0));
          v33 = (v31 & 4) == 0 ? 2 : 7;
          *(_BYTE *)(a2 + 45) = v33;
          *(_BYTE *)(a2 + 85) = v33;
        }
        else
        {
          v22 = *(_WORD *)(a2 + 34);
          *(_BYTE *)(a2 + 30) = 4;
          *(_WORD *)(a2 + 28) = 2083;
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = a7;
          *(_BYTE *)(a2 + 45) = (v22 & 4) == 0 ? 2 : 7;
          v23 = *(_BYTE *)(a1 + 468);
          *(_BYTE *)(a2 + 81) = 1;
          *(_BYTE *)(a2 + 85) = (v22 & 4) == 0 ? 2 : 7;
          *(_WORD *)(a2 + 86) = (char)((a3 < 0) + 32 * ((v23 & 8) == 0) + ((2 * a4) & 0x1E));
        }
        return *(unsigned __int16 *)(a2 + 26);
      default:
        return 0;
    }
  }
  return *(unsigned __int16 *)(a2 + 26);
}
