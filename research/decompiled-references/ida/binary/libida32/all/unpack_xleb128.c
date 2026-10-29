char __fastcall unpack_xleb128(_DWORD *a1, int a2, char a3, char **a4, unsigned __int64 a5)
{
  __int64 v5; // r11
  int v9; // edi
  int v11; // r9d
  char *v12; // rsi
  char v13; // r10
  unsigned __int8 v14; // dl
  int v15; // ecx
  char result; // al
  char v17; // cl
  char v18; // cl

  v5 = 0;
  v9 = 0;
  v11 = a2;
  v12 = *a4;
  while ( 1 )
  {
    if ( (unsigned __int64)v12 >= a5 )
      return 0;
    v13 = *v12++;
    v14 = v13 & 0x7F;
    if ( v11 <= 6 )
      break;
LABEL_10:
    v17 = v9;
    v9 += 7;
    v5 |= (unsigned __int64)v14 << v17;
    if ( v13 >= 0 )
    {
      if ( a1 )
      {
        if ( a3 )
          goto LABEL_14;
        goto LABEL_16;
      }
LABEL_7:
      *a4 = v12;
      return 1;
    }
    v11 -= 7;
    if ( a2 <= v9 )
      return 0;
  }
  v15 = (255 << v11) & v14;
  result = a3 & ((unsigned __int8)~v13 >> 7);
  if ( !result )
  {
    if ( v15 )
      return result;
    goto LABEL_10;
  }
  if ( (v15 & 0x3F) == 0 )
  {
    if ( a1 )
    {
      v18 = v9;
      LOBYTE(v9) = v9 + 7;
      v5 |= (unsigned __int64)v14 << v18;
LABEL_14:
      if ( (v13 & 0x40) != 0 )
        v5 |= -1LL << v9;
LABEL_16:
      switch ( a2 )
      {
        case 32:
          *a1 = v5;
          break;
        case 64:
          *(_QWORD *)a1 = v5;
          break;
        case 16:
          *(_WORD *)a1 = v5;
          break;
        default:
          if ( !under_debugger )
            interr(1187);
          BUG();
      }
    }
    goto LABEL_7;
  }
  return 0;
}

