__int64 __fastcall sub_D5B0(int a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  char v12; // cl
  int v14; // ecx
  int v15; // r11d
  char *v16; // r8

  if ( a2 <= 569 )
  {
    if ( a2 > 540 )
    {
      v12 = a2 - 29;
      switch ( a2 )
      {
        case 541:
        case 542:
          v15 = 8;
          goto LABEL_17;
        case 549:
        case 551:
          if ( ((1LL << v12) & 0xC00402) != 0 )
          {
            v15 = 1;
LABEL_26:
            v14 = (unsigned __int16)word_89598;
            v16 = "PAGEOFF";
          }
          else
          {
            if ( a2 != 549 )
              goto LABEL_14;
            v14 = (unsigned __int16)word_8959A;
            v15 = 1;
            v16 = "HI12";
          }
          break;
        case 562:
        case 563:
        case 564:
          v15 = 10;
LABEL_17:
          if ( ((1LL << v12) & 0xC00402) != 0 )
            goto LABEL_26;
          if ( ((1LL << v12) & 0x200001) != 0 )
          {
            v14 = (unsigned __int16)word_8959C;
            v16 = "PAGE";
          }
          else
          {
            v14 = 12;
            LODWORD(v16) = 0;
          }
          goto LABEL_11;
        case 569:
          return 1;
        default:
          return 0;
      }
      goto LABEL_11;
    }
    if ( a2 != 186 )
      return 0;
    goto LABEL_14;
  }
  if ( a2 == 1029 )
  {
    v14 = 12;
    v15 = 4;
    LODWORD(v16) = 0;
    goto LABEL_11;
  }
  if ( a2 <= 1029 )
  {
    if ( a2 != 1028 )
      return 0;
    v14 = 12;
    v15 = 2;
    LODWORD(v16) = 0;
  }
  else
  {
    if ( a2 == 1030 )
    {
LABEL_14:
      v14 = 12;
      v15 = 1;
      LODWORD(v16) = 0;
      goto LABEL_11;
    }
    if ( a2 != 1031 )
      return 0;
    v14 = 12;
    v15 = 5;
    LODWORD(v16) = 0;
  }
LABEL_11:
  sub_2EE90(a1, v15, 1, v14, (_DWORD)v16, a3, a4, a5, a6, a7, a8);
  return 1;
}
