__int64 __fastcall sub_11550(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        char a5,
        int a6,
        unsigned __int8 a7)
{
  char v8; // di
  unsigned int v11; // r10d
  int v12; // r10d
  __int16 v13; // di
  char v14; // r8
  char v15; // r10
  __int16 v16; // cx
  __int16 v18; // cx
  char v19; // r8
  char v20; // r10
  __int16 v21; // cx
  __int16 v22; // r10
  char v23; // si

  v8 = a5;
  if ( a5 == 6 )
  {
    switch ( (unsigned __int8)a6 >> 1 )
    {
      case ' ':
        v18 = 515;
        v19 = 0;
        goto LABEL_15;
      case '!':
        v13 = 515;
        v14 = 0;
        goto LABEL_5;
      case '"':
        v18 = 516;
        v19 = 0;
        goto LABEL_15;
      case '#':
        v13 = 516;
        v14 = 0;
        goto LABEL_5;
      case '$':
        v18 = 517;
        v19 = 0;
LABEL_15:
        *(_WORD *)(a2 + 24) = v18;
        if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
        {
          v20 = 7;
          v8 = 7;
        }
        else
        {
          v20 = 2;
          v8 = 2;
        }
        *(_BYTE *)(a2 + 45) = v20;
        *(_BYTE *)(a2 + 41) = 1;
        *(_BYTE *)(a2 + 28) = 21;
        *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 64);
        v16 = (char)(((2 * a4) & 0x1E) + ((a3 & 0x8000u) != 0) + 64);
        if ( !v19 )
          goto LABEL_8;
LABEL_18:
        v16 = (char)(((2 * a4) & 0x1E) + ((a3 & 0x8000u) != 0) + 64);
        goto LABEL_19;
      case '%':
        v13 = 517;
        v14 = 0;
        goto LABEL_5;
      case '\'':
        v13 = 518;
        v14 = 0;
LABEL_5:
        *(_WORD *)(a2 + 24) = v13;
        if ( (*(_BYTE *)(a2 + 34) & 4) != 0 )
        {
          v15 = 7;
          v8 = 7;
        }
        else
        {
          v15 = 2;
          v8 = 2;
        }
        *(_BYTE *)(a2 + 41) = 1;
        v16 = a7;
        *(_BYTE *)(a2 + 45) = v15;
        *(_BYTE *)(a2 + 28) = 37;
        *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 64);
        if ( v14 )
        {
LABEL_19:
          *(_BYTE *)(a2 + 121) = 1;
          *(_WORD *)(a2 + 126) = v16;
          *(_BYTE *)(a2 + 125) = v8;
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = (char)(((a4 >> 4) & 0x1F) + 64);
          *(_BYTE *)(a2 + 85) = v8;
        }
        else
        {
LABEL_8:
          *(_BYTE *)(a2 + 81) = 1;
          *(_WORD *)(a2 + 86) = v16;
          *(_BYTE *)(a2 + 85) = v8;
          *(_BYTE *)(a2 + 121) = 1;
          *(_WORD *)(a2 + 126) = (char)(((a4 >> 4) & 0x1F) + 64);
          *(_BYTE *)(a2 + 125) = v8;
        }
        if ( (a6 & 1) == 0 )
          *(_BYTE *)(a2 + 161) = 12;
        v11 = *(unsigned __int16 *)(a2 + 26);
        break;
      default:
LABEL_25:
        v11 = 0;
        break;
    }
  }
  else
  {
    v11 = 0;
    if ( a5 == 7 )
    {
      v12 = a6;
      LOBYTE(v12) = (unsigned __int8)a6 >> 1;
      switch ( v12 )
      {
        case ' ':
          v18 = 519;
          v19 = 0;
          goto LABEL_15;
        case '!':
          v13 = 519;
          v14 = 0;
          goto LABEL_5;
        case '"':
          v18 = 520;
          v19 = 0;
          goto LABEL_15;
        case '#':
          v13 = 520;
          v14 = 0;
          goto LABEL_5;
        case '$':
          v18 = 522;
          v19 = 0;
          goto LABEL_15;
        case '%':
          v13 = 522;
          v14 = 0;
          goto LABEL_5;
        case '\'':
          v13 = 521;
          v14 = 0;
          goto LABEL_5;
        case '(':
          v21 = 523;
          goto LABEL_28;
        case ')':
          v22 = 523;
          goto LABEL_32;
        case '*':
          v21 = 524;
LABEL_28:
          *(_WORD *)(a2 + 24) = v21;
          if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
          {
            a5 = 2;
            v8 = 2;
          }
          *(_BYTE *)(a2 + 41) = 1;
          *(_WORD *)(a2 + 46) = (char)(((a3 >> 7) & 0x1F) + 64);
          *(_BYTE *)(a2 + 45) = a5;
          *(_BYTE *)(a2 + 28) = 85;
          goto LABEL_18;
        case '+':
          v22 = 524;
LABEL_32:
          *(_WORD *)(a2 + 24) = v22;
          v23 = ((a3 >> 7) & 0x1F) + 64;
          if ( (*(_BYTE *)(a2 + 34) & 4) == 0 )
          {
            a5 = 2;
            v8 = 2;
          }
          *(_BYTE *)(a2 + 41) = 1;
          v16 = a7;
          *(_WORD *)(a2 + 46) = v23;
          *(_BYTE *)(a2 + 45) = a5;
          *(_BYTE *)(a2 + 28) = 101;
          goto LABEL_19;
        case ',':
          v18 = 525;
          v19 = 1;
          goto LABEL_15;
        case '-':
          v13 = 525;
          v14 = 1;
          goto LABEL_5;
        case '.':
          v18 = 526;
          v19 = 1;
          goto LABEL_15;
        case '/':
          v13 = 526;
          v14 = 1;
          goto LABEL_5;
        default:
          goto LABEL_25;
      }
    }
  }
  return v11;
}
