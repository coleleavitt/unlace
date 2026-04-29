__int64 __fastcall sub_1D1A0(__int64 a1, unsigned int a2, _DWORD *a3, unsigned __int16 **a4)
{
  unsigned int v6; // ecx
  unsigned int v7; // r11d
  unsigned __int16 *v8; // rsi
  int v9; // edx
  unsigned __int16 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r11d
  unsigned __int16 *v16; // rcx
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // r9d
  unsigned __int64 v21; // rax
  unsigned __int16 *v22; // rsi
  int v23; // edi
  int v24; // r11d
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int16 *v28; // rsi
  int v29; // edi
  int v30; // eax
  int v31; // r11d
  unsigned __int16 *v32; // rdx
  int v33; // ecx
  int v34; // eax
  bool v35; // zf

  v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 208) + 2LL * (a2 >> 26));
  if ( (unsigned __int16)v6 < 0xFFDDu )
    goto LABEL_9;
  v7 = a2;
  switch ( (__int16)v6 )
  {
    case -35:
      if ( (a2 & 0x38) == 0x20 )
      {
        v30 = -43;
        v8 = (unsigned __int16 *)&unk_53960;
      }
      else
      {
        v11 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_1B2C0)(
                                    a2 & 0x3F,
                                    (char *)&unk_58360 - 928,
                                    &unk_58360,
                                    0xFFFFFFFFLL,
                                    0);
        v8 = v11;
        if ( v11 == (unsigned __int16 *)&unk_58360 || !v11 )
          return 0;
        v30 = *v11;
      }
      while ( 1 )
      {
        if ( !(_WORD)v30 )
          return 0;
        if ( (unsigned __int16)(v30 + 45) > 9u )
          break;
        switch ( v30 )
        {
          case -44:
            v8 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_1B2C0)(
                                       v7,
                                       (char *)&unk_57660 - 512,
                                       &unk_57660,
                                       4294901823LL,
                                       0);
            goto LABEL_73;
          case -43:
            v8 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_1B2C0)(
                                       v7,
                                       (char *)&unk_57FC0 - 256,
                                       &unk_57FC0,
                                       4227858495LL,
                                       0);
            goto LABEL_73;
          case -42:
            v8 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_1B2C0)(
                                       v7,
                                       (char *)&unk_57780 - 288,
                                       &unk_57780,
                                       4292870207LL,
                                       0);
            goto LABEL_73;
          case -41:
            v8 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_1B2C0)(
                                       v7,
                                       (char *)&unk_55220 - 2624,
                                       &unk_55220,
                                       4292870207LL,
                                       0);
            goto LABEL_73;
          case -40:
            switch ( (v7 >> 22) & 0xF )
            {
              case 0u:
                if ( (v7 & 0x3F0000) == 0x3E0000 )
                {
                  v8 = (unsigned __int16 *)&unk_53A20;
                  goto LABEL_7;
                }
                if ( (v7 & 0x300000) == 0 )
                {
                  v8 = (unsigned __int16 *)&unk_539A0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x380000) == 0x200000 )
                {
                  v8 = (unsigned __int16 *)&unk_539C0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x3C0000) == 0x300000 )
                {
                  v8 = (unsigned __int16 *)&unk_539E0;
                  goto LABEL_7;
                }
                v8 = (unsigned __int16 *)&unk_53A00;
                if ( (v7 & 0x3E0000) == 0x380000 )
                  goto LABEL_7;
                return 0;
              case 1u:
                if ( (v7 & 0x3F0000) == 0x3E0000 )
                {
                  v8 = (unsigned __int16 *)&unk_53AC0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x300000) == 0 )
                {
                  v8 = (unsigned __int16 *)&unk_53A40;
                  goto LABEL_7;
                }
                if ( (v7 & 0x380000) == 0x200000 )
                {
                  v8 = (unsigned __int16 *)&unk_53A60;
                  goto LABEL_7;
                }
                if ( (v7 & 0x3C0000) == 0x300000 )
                {
                  v8 = (unsigned __int16 *)&unk_53A80;
                  goto LABEL_7;
                }
                v8 = (unsigned __int16 *)&unk_53AA0;
                if ( (v7 & 0x3E0000) == 0x380000 )
                  goto LABEL_7;
                return 0;
              case 2u:
                if ( (v7 & 0x3F0000) == 0x3E0000 )
                {
                  v8 = (unsigned __int16 *)&unk_53B60;
                  goto LABEL_7;
                }
                if ( (v7 & 0x300000) == 0 )
                {
                  v8 = (unsigned __int16 *)&unk_53AE0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x380000) == 0x200000 )
                {
                  v8 = (unsigned __int16 *)&unk_53B00;
                  goto LABEL_7;
                }
                if ( (v7 & 0x3C0000) == 0x300000 )
                {
                  v8 = (unsigned __int16 *)&unk_53B20;
                  goto LABEL_7;
                }
                v8 = (unsigned __int16 *)&unk_53B40;
                if ( (v7 & 0x3E0000) == 0x380000 )
                  goto LABEL_7;
                return 0;
              case 3u:
                if ( (v7 & 0x300000) == 0 )
                {
                  v8 = (unsigned __int16 *)&unk_53B80;
                  goto LABEL_7;
                }
                if ( (v7 & 0x380000) == 0x200000 )
                {
                  v8 = (unsigned __int16 *)&unk_53BA0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x3C0000) == 0x300000 )
                {
                  v8 = (unsigned __int16 *)&unk_53BC0;
                  goto LABEL_7;
                }
                v8 = (unsigned __int16 *)&unk_53BE0;
                if ( (v7 & 0x3E0000) == 0x380000 )
                  goto LABEL_7;
                return 0;
              case 4u:
                if ( (v7 & 0x300000) != 0 )
                {
                  if ( (v7 & 0x380000) == 0x200000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53C20;
                  }
                  else if ( (v7 & 0x3C0000) == 0x300000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53C40;
                  }
                  else
                  {
                    v8 = (unsigned __int16 *)&unk_53C60;
                    if ( (v7 & 0x3E0000) != 0x380000 )
                      return 0;
                  }
                }
                else
                {
                  v8 = (unsigned __int16 *)&unk_53C00;
                }
                goto LABEL_7;
              case 5u:
                if ( (v7 & 0x300000) == 0 )
                {
                  v8 = (unsigned __int16 *)&unk_53C80;
                  goto LABEL_7;
                }
                if ( (v7 & 0x380000) == 0x200000 )
                {
                  v8 = (unsigned __int16 *)&unk_53CA0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x3C0000) == 0x300000 )
                {
                  v8 = (unsigned __int16 *)&unk_53CC0;
                  goto LABEL_7;
                }
                v8 = (unsigned __int16 *)&unk_53CE0;
                if ( (v7 & 0x3E0000) == 0x380000 )
                  goto LABEL_7;
                v6 = 0;
                break;
              default:
                return 0;
            }
            return v6;
          case -39:
            v8 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_1B2C0)(
                                       v7,
                                       (char *)&unk_57060 - 7744,
                                       &unk_57060,
                                       4292870207LL,
                                       0);
            goto LABEL_73;
          case -38:
            v33 = v7 & 0x3F;
            switch ( (v7 >> 23) & 7 )
            {
              case 0u:
                if ( v33 == 9 )
                {
                  if ( (v7 & 0x780000) == 0x700000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53DC0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x700000) == 0x600000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53D80;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x600000) == 0x400000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53D40;
                    goto LABEL_7;
                  }
                  v8 = (unsigned __int16 *)&unk_53D00;
                  if ( (v7 & 0x400000) == 0 )
                    goto LABEL_7;
                  v6 = 0;
                }
                else
                {
                  if ( v33 != 10 )
                    return 0;
                  if ( (v7 & 0x780000) == 0x700000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53DE0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x700000) == 0x600000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53DA0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x600000) == 0x400000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53D60;
                    goto LABEL_7;
                  }
                  v8 = (unsigned __int16 *)&unk_53D20;
                  if ( (v7 & 0x400000) == 0 )
                    goto LABEL_7;
                  v6 = 0;
                }
                break;
              case 1u:
                if ( v33 == 9 )
                {
                  if ( (v7 & 0x780000) == 0x700000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53EC0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x700000) == 0x600000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53E80;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x600000) == 0x400000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53E40;
                    goto LABEL_7;
                  }
                  v8 = (unsigned __int16 *)&unk_53E00;
                  if ( (v7 & 0x400000) == 0 )
                    goto LABEL_7;
                  v6 = 0;
                }
                else
                {
                  if ( v33 != 10 )
                    return 0;
                  if ( (v7 & 0x780000) == 0x700000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53EE0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x700000) == 0x600000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53EA0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x600000) == 0x400000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53E60;
                    goto LABEL_7;
                  }
                  v8 = (unsigned __int16 *)&unk_53E20;
                  if ( (v7 & 0x400000) == 0 )
                    goto LABEL_7;
                  v6 = 0;
                }
                break;
              case 2u:
                if ( v33 == 9 )
                {
                  if ( (v7 & 0x780000) == 0x700000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53FC0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x700000) == 0x600000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53F80;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x600000) == 0x400000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53F40;
                    goto LABEL_7;
                  }
                  v8 = (unsigned __int16 *)&unk_53F00;
                  if ( (v7 & 0x400000) == 0 )
                    goto LABEL_7;
                  v6 = 0;
                }
                else
                {
                  if ( v33 != 10 )
                    return 0;
                  if ( (v7 & 0x780000) == 0x700000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53FE0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x700000) == 0x600000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53FA0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x600000) == 0x400000 )
                  {
                    v8 = (unsigned __int16 *)&unk_53F60;
                    goto LABEL_7;
                  }
                  v8 = (unsigned __int16 *)&unk_53F20;
                  if ( (v7 & 0x400000) == 0 )
                    goto LABEL_7;
                  v6 = 0;
                }
                break;
              case 3u:
                if ( v33 == 9 )
                {
                  if ( (v7 & 0x780000) == 0x700000 )
                  {
                    v8 = (unsigned __int16 *)&unk_540C0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x700000) == 0x600000 )
                  {
                    v8 = (unsigned __int16 *)&unk_54080;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x600000) == 0x400000 )
                  {
                    v8 = (unsigned __int16 *)&unk_54040;
                    goto LABEL_7;
                  }
                  v8 = (unsigned __int16 *)&unk_54000;
                  if ( (v7 & 0x400000) == 0 )
                    goto LABEL_7;
                  v6 = 0;
                }
                else
                {
                  if ( v33 != 10 )
                    return 0;
                  if ( (v7 & 0x780000) == 0x700000 )
                  {
                    v8 = (unsigned __int16 *)&unk_540E0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x700000) == 0x600000 )
                  {
                    v8 = (unsigned __int16 *)&unk_540A0;
                    goto LABEL_7;
                  }
                  if ( (v7 & 0x600000) == 0x400000 )
                  {
                    v8 = (unsigned __int16 *)&unk_54060;
                    goto LABEL_7;
                  }
                  v8 = (unsigned __int16 *)&unk_54020;
                  if ( (v7 & 0x400000) == 0 )
                    goto LABEL_7;
                  v6 = 0;
                }
                break;
              case 4u:
                if ( v33 != 9 )
                  return 0;
                if ( (v7 & 0x780000) == 0x700000 )
                {
                  v8 = (unsigned __int16 *)&unk_54160;
                  goto LABEL_7;
                }
                if ( (v7 & 0x700000) == 0x600000 )
                {
                  v8 = (unsigned __int16 *)&unk_54140;
                  goto LABEL_7;
                }
                if ( (v7 & 0x600000) == 0x400000 )
                {
                  v8 = (unsigned __int16 *)&unk_54120;
                  goto LABEL_7;
                }
                v8 = (unsigned __int16 *)&unk_54100;
                if ( (v7 & 0x400000) == 0 )
                  goto LABEL_7;
                v6 = 0;
                break;
              case 5u:
                if ( v33 != 9 )
                  return 0;
                if ( (v7 & 0x780000) == 0x700000 )
                {
                  v8 = (unsigned __int16 *)&unk_541E0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x700000) == 0x600000 )
                {
                  v8 = (unsigned __int16 *)&unk_541C0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x600000) == 0x400000 )
                {
                  v8 = (unsigned __int16 *)&unk_541A0;
                  goto LABEL_7;
                }
                v8 = (unsigned __int16 *)&unk_54180;
                if ( (v7 & 0x400000) == 0 )
                  goto LABEL_7;
                v6 = 0;
                break;
              case 6u:
                if ( v33 != 9 )
                  return 0;
                if ( (v7 & 0x780000) == 0x700000 )
                {
                  v8 = (unsigned __int16 *)&unk_54260;
                  goto LABEL_7;
                }
                if ( (v7 & 0x700000) == 0x600000 )
                {
                  v8 = (unsigned __int16 *)&unk_54240;
                  goto LABEL_7;
                }
                if ( (v7 & 0x600000) == 0x400000 )
                {
                  v8 = (unsigned __int16 *)&unk_54220;
                  goto LABEL_7;
                }
                v8 = (unsigned __int16 *)&unk_54200;
                if ( (v7 & 0x400000) == 0 )
                  goto LABEL_7;
                v6 = 0;
                break;
              case 7u:
                if ( v33 != 9 )
                  return 0;
                if ( (v7 & 0x780000) == 0x700000 )
                {
                  v8 = (unsigned __int16 *)&unk_542E0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x700000) == 0x600000 )
                {
                  v8 = (unsigned __int16 *)&unk_542C0;
                  goto LABEL_7;
                }
                if ( (v7 & 0x600000) == 0x400000 )
                {
                  v8 = (unsigned __int16 *)&unk_542A0;
                  goto LABEL_7;
                }
                v8 = (unsigned __int16 *)&unk_54280;
                if ( (v7 & 0x400000) == 0 )
                  goto LABEL_7;
                v6 = 0;
                break;
            }
            return v6;
          case -37:
            v8 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_1B2C0)(
                                       v7,
                                       (char *)&unk_57EC0 - 1536,
                                       &unk_57EC0,
                                       4292870207LL,
                                       0);
            goto LABEL_73;
          case -36:
            v8 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_1B2C0)(
                                       v7,
                                       (char *)&unk_578C0 - 320,
                                       &unk_578C0,
                                       4278190143LL,
                                       0);
            goto LABEL_73;
          default:
            v8 = (unsigned __int16 *)((__int64 (__fastcall *)(_QWORD, char *, void *, __int64, _QWORD))loc_1B2C0)(
                                       v7,
                                       (char *)&unk_57460 - 1024,
                                       &unk_57460,
                                       4294901823LL,
                                       0);
LABEL_73:
            if ( v32 == v8 )
              return 0;
            v30 = *v8;
            break;
        }
      }
      if ( !v8 )
        return 0;
LABEL_7:
      v6 = *v8;
      if ( a4 )
        *a4 = v8;
      goto LABEL_9;
    case -34:
    case -33:
    case -32:
    case -31:
    case -30:
    case -29:
    case -28:
    case -27:
    case -26:
    case -25:
    case -24:
    case -23:
    case -22:
    case -21:
    case -20:
    case -19:
    case -18:
    case -17:
    case -15:
    case -14:
    case -13:
    case -10:
    case -9:
    case -8:
    case -5:
      goto LABEL_9;
    case -16:
      v17 = (a2 >> 21) & 0x1F;
      switch ( a2 >> 26 )
      {
        case 0x12u:
          if ( v17 == 3 )
          {
            LOWORD(v9) = 0;
            v6 = (a2 & 0x80) == 0 ? 0xFFFFFFFE : 0;
            LOWORD(v6) = (a2 & 0x80) == 0 ? 625 : 627;
          }
          else if ( v17 == 7 )
          {
            LOWORD(v9) = 0;
            v6 = (a2 & 0x80) == 0 ? 0xFFFFFFFE : 0;
            LOWORD(v6) = (a2 & 0x80) == 0 ? 626 : 628;
          }
          else
          {
            LOWORD(v9) = 0;
            v6 = 0;
            if ( v17 == 8 )
              v6 = word_54430[HIWORD(a2) & 3];
          }
          break;
        case 0x18u:
          LOWORD(v9) = 0;
          v6 = word_54420[(a2 >> 23) & 7];
          break;
        case 0x19u:
          LOWORD(v9) = 0;
          v6 = word_54410[(a2 >> 23) & 7];
          break;
        case 0x1Bu:
          LOWORD(v9) = 0;
          v6 = word_54400[(a2 >> 23) & 7];
          break;
        case 0x34u:
          switch ( (a2 >> 21) & 0x1F )
          {
            case 0u:
              LOWORD(v9) = 0;
              v6 = word_543C0[BYTE2(a2) & 0x1F];
              goto LABEL_10;
            case 1u:
              LOWORD(v9) = 0;
              v6 = word_54380[BYTE2(a2) & 0x1F];
              goto LABEL_10;
            case 2u:
              LOWORD(v9) = 0;
              v6 = word_54340[BYTE2(a2) & 0x1F];
              goto LABEL_10;
            case 3u:
              LOWORD(v9) = 0;
              v6 = 649;
              goto LABEL_10;
            case 4u:
            case 5u:
            case 6u:
            case 7u:
            case 8u:
            case 9u:
            case 0xAu:
            case 0xBu:
            case 0xCu:
            case 0xDu:
            case 0xEu:
            case 0xFu:
            case 0x16u:
            case 0x17u:
              goto LABEL_51;
            case 0x10u:
              LOWORD(v9) = 0;
              v6 = 656;
              goto LABEL_10;
            case 0x11u:
              LOWORD(v9) = 0;
              v6 = 658;
              goto LABEL_10;
            case 0x12u:
              LOWORD(v9) = 0;
              v6 = 657;
              goto LABEL_10;
            case 0x13u:
              LOWORD(v9) = 0;
              v6 = 655;
              goto LABEL_10;
            case 0x14u:
              LOWORD(v9) = 0;
              v6 = 667;
              goto LABEL_10;
            case 0x15u:
              LOWORD(v9) = 0;
              if ( (a2 & 0x180000) != 0 )
              {
                if ( (BYTE2(a2) & 0x18) != 8 )
                  goto LABEL_66;
                v6 = 643;
              }
              else
              {
                v6 = 644;
              }
              break;
            case 0x18u:
            case 0x19u:
            case 0x1Au:
            case 0x1Bu:
            case 0x1Cu:
            case 0x1Du:
            case 0x1Eu:
            case 0x1Fu:
              LOWORD(v9) = 0;
              v6 = 730;
              goto LABEL_10;
          }
          break;
        case 0x37u:
          LOWORD(v9) = 0;
          v6 = word_54320[(a2 >> 23) & 7];
          break;
        case 0x3Cu:
          v34 = (a2 >> 7) & 1 | (a2 >> 14) & 2;
          switch ( (a2 >> 23) & 7 )
          {
            case 0u:
              LOWORD(v9) = 0;
              LOWORD(v6) = v34 != 0 ? 0x2A8 : 0;
              goto LABEL_10;
            case 1u:
              v6 = word_54318[v34];
              LOWORD(v9) = 0;
              goto LABEL_10;
            case 2u:
              v6 = word_54310[v34];
              LOWORD(v9) = 0;
              goto LABEL_10;
            case 3u:
              v6 = word_54308[v34];
              LOWORD(v9) = 0;
              goto LABEL_10;
            case 4u:
              LOWORD(v9) = 0;
              LOWORD(v6) = v34 != 0 ? 0x2AB : 0;
              goto LABEL_10;
            case 5u:
              v6 = word_54300[v34];
              goto LABEL_9;
            case 6u:
              goto LABEL_51;
            case 7u:
              v9 = HIWORD(a2) & 0x7F;
              if ( v9 == 6 )
              {
                LOWORD(v9) = 0;
                if ( !v34 )
                  goto LABEL_66;
                v6 = 686;
              }
              else if ( (unsigned int)v9 > 6 )
              {
                if ( v9 == 7 )
                {
                  LOWORD(v9) = 0;
                  if ( !v34 )
                    goto LABEL_66;
                  v6 = 681;
                }
                else
                {
                  v6 = 702;
                  v35 = v9 >> 5 == 1;
                  LOWORD(v9) = 0;
                  if ( !v35 )
                    v6 = 0;
                }
              }
              else
              {
                if ( v9 )
                {
                  if ( v9 != 3 )
                    goto LABEL_51;
                  LOWORD(v9) = 0;
                  if ( v34 )
                  {
                    v6 = 677;
                    goto LABEL_10;
                  }
                  goto LABEL_66;
                }
                LOWORD(v9) = 0;
                if ( !v34 )
                  goto LABEL_66;
                v6 = 679;
              }
              break;
          }
          break;
        case 0x3Fu:
          LOWORD(v9) = 0;
          v6 = 0;
          if ( (~a2 & 0xFFFF0000) == 0 )
          {
            v6 = 633;
            if ( a2 != -65536 )
            {
              v6 = a2 != -64499;
              LOWORD(v6) = v6 + 634;
            }
          }
          break;
        default:
          goto LABEL_51;
      }
      goto LABEL_10;
    case -12:
      v18 = 7;
      v19 = 0;
      v20 = a2 & 0x3F;
LABEL_42:
      if ( v19 >= v18 )
        goto LABEL_46;
      while ( 1 )
      {
        v21 = (v18 + v19) >> 1;
        v22 = (unsigned __int16 *)((char *)&unk_54640 + 4 * v21);
        v23 = *v22;
        if ( v20 - v23 < 0 )
        {
          v18 = (v18 + v19) >> 1;
          goto LABEL_42;
        }
        if ( v20 == v23 )
          break;
        v19 = v21 + 1;
        if ( v21 + 1 >= v18 )
          goto LABEL_46;
      }
      if ( v22 )
      {
        v6 = v22[1];
        LOWORD(v9) = 0;
        if ( (_WORD)v6 )
          goto LABEL_10;
      }
LABEL_46:
      v24 = v7 & 0x7FF;
      v25 = 92;
      v26 = 0;
LABEL_47:
      if ( v26 >= v25 )
        goto LABEL_51;
      while ( 1 )
      {
        v27 = (v25 + v26) >> 1;
        v28 = (unsigned __int16 *)((char *)&unk_54660 + 4 * v27);
        v29 = *v28;
        if ( v24 - v29 < 0 )
        {
          v25 = (v25 + v26) >> 1;
          goto LABEL_47;
        }
        if ( v24 == v29 )
          break;
        v26 = v27 + 1;
        if ( v27 + 1 >= v25 )
          goto LABEL_51;
      }
      if ( v28 )
      {
        v6 = v28[1];
        LOWORD(v9) = 0;
      }
      else
      {
LABEL_51:
        LOWORD(v9) = 0;
        v6 = 0;
      }
      goto LABEL_10;
    case -11:
      return 0;
    case -7:
      v12 = a2 & 0x3F;
      v13 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 240) + 2 * v12);
      v14 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))loc_1D060)(a1, v13, v12, v13);
      LOWORD(v9) = 0;
      if ( v14 )
        v6 = *(unsigned __int16 *)(v14 + 2LL * ((v15 >> 6) & 0x1F));
      goto LABEL_10;
    case -6:
      v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 232) + 2LL * (a2 & 0x3F));
      if ( (_WORD)v6 == 0xFFE0 )
      {
        v6 = word_583E0[(a2 >> 6) & 0x1F];
        LOWORD(v9) = *(_WORD *)(a1 + 188) & 2;
        if ( !(_WORD)v9 )
          goto LABEL_10;
        if ( (unsigned __int16)v6 > 0x466u )
        {
          if ( (unsigned __int16)(v6 - 1140) <= 1u && (a2 & 0x1FF800) != 0 )
            return 0;
        }
        else if ( (unsigned __int16)v6 > 0x45Eu && (a2 & 0x1F0000) != 0 )
        {
          return 0;
        }
LABEL_9:
        LOWORD(v9) = 0;
        goto LABEL_10;
      }
      if ( (_WORD)v6 == 0xFFF1 )
      {
        if ( (*(_BYTE *)(a1 + 188) & 2) == 0 || (a2 & 0x7C0) == 0 )
        {
          v31 = (a2 >> 21) & 0x1F;
          if ( !v31 )
          {
            LOWORD(v9) = 0;
            v6 = 610;
            goto LABEL_10;
          }
          if ( v31 == 4 )
          {
            LOWORD(v9) = 0;
            v6 = 611;
            goto LABEL_10;
          }
        }
        return 0;
      }
      if ( (_WORD)v6 != 0xFFDE )
      {
        LOWORD(v9) = 0;
        if ( (a2 & 0x403F) == 0x1F )
          LOWORD(v6) = 545 - ((a2 & 0x2000) != 0);
        goto LABEL_10;
      }
      v6 = word_583A0[(a2 >> 6) & 0x1F];
      LOWORD(v9) = *(_WORD *)(a1 + 188) & 2;
      if ( (_WORD)v9 )
      {
        if ( (a2 & 0x8000) != 0 )
          return 0;
        goto LABEL_9;
      }
LABEL_10:
      if ( a3 )
        *a3 = (unsigned __int16)v9;
      return v6;
    case -4:
      v6 = word_58A60[a2 & 0x3F];
      v9 = 1;
      if ( (_WORD)v6 || (a2 & 0x3E00000) != 0x1000000 )
        goto LABEL_10;
      v16 = (unsigned __int16 *)&unk_58BA0;
      goto LABEL_28;
    case -3:
      v9 = (a2 >> 26) & 3;
      if ( (_WORD)v9 == 3 )
        return 0;
      v16 = (unsigned __int16 *)*(&off_69CF0 + ((a2 >> 26) & 3));
LABEL_28:
      v6 = v16[(a2 >> 21) & 0x1F];
      if ( (_WORD)v6 == 0xFFF6 )
      {
        if ( (unsigned __int16)a2 == 3041 )
        {
          v6 = 756;
        }
        else if ( (unsigned __int16)a2 > 0xBE1u )
        {
          v6 = 509;
          if ( (unsigned __int16)a2 != 24576 )
          {
            v6 = 511;
            if ( (unsigned __int16)a2 != 24608 )
              v6 = 0;
          }
        }
        else
        {
          v6 = 754;
          if ( (unsigned __int16)a2 != 33 )
          {
            v6 = 755;
            if ( (unsigned __int16)a2 != 3009 )
            {
              v6 = 753;
              if ( (unsigned __int16)a2 != 1 )
                v6 = 0;
            }
          }
        }
      }
      else if ( (unsigned __int16)v6 > 0xFFF6u )
      {
        if ( (_WORD)v6 == 0xFFFB )
        {
          v6 = 759;
          if ( (_WORD)v9 )
          {
            if ( (a2 & 0x1C0000) == 0 || (_WORD)v9 == 1 )
            {
              v6 = v9 + (unsigned __int16)aRzv[HIWORD(a2) & 3];
            }
            else
            {
              LOWORD(v9) = 2;
LABEL_66:
              v6 = 0;
            }
          }
        }
      }
      else if ( (_WORD)v6 == 0xFFF2 )
      {
        v6 = (a2 & 0x10000) != 0;
        LOWORD(v6) = v6 + 790;
      }
      else if ( (_WORD)v6 == 0xFFF3 )
      {
        v6 = (a2 & 0x10000) != 0;
        LOWORD(v6) = v6 + 788;
      }
      goto LABEL_10;
    case -2:
      LOWORD(v9) = 0;
      v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 224) + 2LL * (HIWORD(a2) & 0x1F));
      goto LABEL_10;
    case -1:
      v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 216) + 2LL * (a2 & 0x3F));
      LOWORD(v9) = 0;
      if ( (_WORD)v6 != 216 )
        goto LABEL_10;
      if ( (*(_BYTE *)(a1 + 188) & 2) != 0 && (a2 & 0x207C0) != 0 )
        return 0;
      LOWORD(v9) = 0;
      if ( (a2 & 0x10000) == 0 )
        v6 = 215;
      goto LABEL_10;
  }
}
