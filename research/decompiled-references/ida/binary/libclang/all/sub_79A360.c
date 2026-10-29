__int64 __fastcall sub_79A360(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v3; // rax
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdi
  bool v9; // al
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax

  v1 = 0x1F00003F03FF01FFLL;
  while ( 1 )
  {
LABEL_2:
    v3 = *(_BYTE *)(a1 + 28) & 0x7F;
    if ( (unsigned __int8)v3 > 0x3Cu )
    {
LABEL_5:
      if ( (_BYTE)v3 != 63 )
        goto LABEL_56;
      v5 = *(_QWORD *)(a1 + 88);
      if ( !v5 )
        goto LABEL_12;
LABEL_7:
      if ( *(_QWORD *)(v5 + 56) )
        return (unsigned int)sub_7D2900() + 1;
      v4 = *(_BYTE *)(a1 + 28) & 0x7F;
      goto LABEL_9;
    }
    v4 = (unsigned __int8)v3;
    if ( _bittest64(&v1, v3) )
      break;
    if ( (unsigned int)(unsigned __int8)v3 - 38 <= 6 )
    {
      v5 = sub_77CBA0(a1);
      goto LABEL_18;
    }
    if ( (_BYTE)v3 == 59 )
    {
LABEL_20:
      if ( *(_QWORD *)(a1 + 184) )
        return (unsigned int)sub_7D2900() + 1;
      goto LABEL_10;
    }
LABEL_9:
    if ( (unsigned int)(v4 - 57) > 2 )
      goto LABEL_12;
LABEL_10:
    v6 = *(_QWORD *)(a1 + 128);
    if ( !v6 )
      goto LABEL_12;
    if ( (*(_BYTE *)(v6 + 10) & 0x20) == 0 )
      goto LABEL_12;
    if ( (*(_BYTE *)(v6 + 104) & 3) != 1 )
      goto LABEL_12;
    v11 = sub_7A4600(a1);
    if ( !v11 )
      goto LABEL_12;
    a1 = v11;
  }
  switch ( (char)v3 )
  {
    case 0:
    case 3:
    case 4:
      v13 = *(_BYTE *)(a1 + 48) & 0x7F;
      if ( (*(_BYTE *)(a1 + 48) & 0x7F) != 0 )
        goto LABEL_39;
      return 0;
    case 1:
    case 2:
    case 5:
    case 6:
    case 7:
    case 8:
      v12 = *(_BYTE *)(a1 + 48) & 0x7F;
      if ( v12 != 22 )
        goto LABEL_28;
      return 0;
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 60:
      v12 = *(_BYTE *)(a1 + 72) & 0x7F;
      if ( v12 == 22 )
        return 0;
      goto LABEL_28;
    case 16:
    case 17:
    case 18:
    case 20:
    case 22:
    case 23:
      v12 = *(_BYTE *)(a1 + 56) & 0x7F;
      if ( v12 == 22 )
        return 0;
      goto LABEL_28;
    case 19:
    case 21:
      v13 = *(_BYTE *)(a1 + 56) & 0x7F;
      if ( (*(_BYTE *)(a1 + 56) & 0x7F) == 0 )
        return 0;
LABEL_39:
      if ( v13 != 22 )
        goto LABEL_9;
      return 0;
    case 24:
      v12 = *(_BYTE *)(a1 + 64) & 0x7F;
      if ( v12 == 22 )
        return 0;
LABEL_28:
      if ( !v12 )
        return 0;
      goto LABEL_9;
    case 32:
    case 33:
    case 34:
    case 36:
    case 37:
      if ( (*(_BYTE *)(a1 + 80) & 0x7F) != 0x16 && (*(_BYTE *)(a1 + 80) & 0x7F) != 0 )
        goto LABEL_34;
      return 0;
    case 35:
      if ( (*(_BYTE *)(a1 + 80) & 0x7F) == 0 || (*(_BYTE *)(a1 + 80) & 0x7F) == 0x16 )
        return 0;
LABEL_34:
      v5 = sub_780E20(a1);
      goto LABEL_18;
    case 57:
    case 58:
      if ( (*(_BYTE *)(a1 + 72) & 0x7F) != 0x16 && (*(_BYTE *)(a1 + 72) & 0x7F) != 0 )
        goto LABEL_45;
      return 0;
    case 59:
      if ( (*(_BYTE *)(a1 + 72) & 0x7F) != 0 && (*(_BYTE *)(a1 + 72) & 0x7F) != 0x16 )
      {
LABEL_45:
        v5 = sub_7A47A0(a1);
LABEL_18:
        if ( v5 )
          goto LABEL_7;
        LOBYTE(v3) = *(_BYTE *)(a1 + 28) & 0x7F;
        if ( (_BYTE)v3 == 59 )
          goto LABEL_20;
        if ( (_BYTE)v3 != 40 )
        {
LABEL_56:
          v4 = (unsigned __int8)v3;
          goto LABEL_9;
        }
        if ( *(_QWORD *)(a1 + 144) )
          return (unsigned int)sub_7D2900() + 1;
LABEL_12:
        v7 = *(_QWORD *)(a1 + 16);
        v8 = (_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
        v9 = ((v7 >> 2) & 1) == 0;
        if ( (*(_WORD *)(a1 + 30) & 0x180) != 0 )
        {
          if ( !v9 )
            v8 = (_QWORD *)v8[1];
        }
        else if ( !v9 )
        {
          v8 = (_QWORD *)*v8;
        }
        a1 = sub_79A2E0((__int64)v8);
        goto LABEL_2;
      }
      return 0;
    default:
      goto LABEL_5;
  }
}

