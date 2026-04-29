unsigned __int64 __fastcall sub_3EA220(__int64 a1, int a2, unsigned int a3, int a4, double a5)
{
  __int64 v5; // r8
  unsigned __int16 v7; // ax
  unsigned int v8; // edi
  int v9; // eax

  v5 = a4;
  v7 = *(_WORD *)(a1 + 48);
  if ( v7 <= 0x3Au )
  {
    if ( v7 > 0x13u )
    {
      switch ( *(_WORD *)(a1 + 48) )
      {
        case 0x14:
        case 0x1F:
        case 0x3A:
          v8 = 40;
          v9 = 0;
          goto LABEL_8;
        case 0x15:
        case 0x20:
          v8 = 35;
          v9 = 0;
          goto LABEL_8;
        default:
          break;
      }
    }
LABEL_12:
    if ( !under_debugger )
      sub_37DDE0(0xCE21u, a3, a5);
LABEL_21:
    BUG();
  }
  switch ( *(_WORD *)(a1 + 48) )
  {
    case 0x71:
      v8 = 33;
      v9 = -1;
      goto LABEL_8;
    case 0x72:
      v9 = -1;
      v8 = 35;
      goto LABEL_8;
    case 0x73:
      v8 = 37;
      v9 = -1;
      goto LABEL_8;
    case 0x80:
      v8 = 33;
      goto LABEL_6;
    case 0x81:
      v8 = 32;
      goto LABEL_6;
    case 0x82:
      v8 = 40;
      goto LABEL_6;
    case 0x83:
      v8 = 38;
LABEL_6:
      if ( a4 != -1 )
      {
        if ( !under_debugger )
          sub_37DDE0(0xCE22u, a3, a5);
        goto LABEL_21;
      }
      v5 = **(int **)(*(_QWORD *)(a1 + 832) + 632LL);
      v9 = 0;
LABEL_8:
      sub_3E8D60(a1, v8, *(unsigned __int16 *)(a1 + 842), (int)a3, v5, a2, v9);
      return sub_3EA150(a1, 1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL), a2, a2, 0, a5);
    default:
      goto LABEL_12;
  }
}
