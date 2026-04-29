void __fastcall sub_3EB130(__int64 a1, __int64 a2, int a3, double a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v7; // dx
  __int64 v8; // rbx
  int v9; // r12d
  unsigned __int16 v10; // ax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp-10h] [rbp-28h]

  v4 = (int)a2;
  v5 = *(_QWORD *)(a1 + 832);
  if ( *(_DWORD *)(v5 + 644) > (int)a2 || *(_DWORD *)(v5 + 672) < (int)a2 )
  {
    if ( !under_debugger )
      sub_37E160(0xCCBEu, a2, a4);
LABEL_44:
    BUG();
  }
  v7 = *(_WORD *)(a1 + 48);
  v8 = a1;
  if ( v7 != 91 )
  {
    if ( v7 <= 0x5Bu )
    {
      if ( (v7 & 0xFFFB) != 0x53 )
        goto LABEL_6;
      v9 = -1;
      if ( a3 == 2 )
        goto LABEL_15;
LABEL_17:
      v11 = *(_QWORD *)(v5 + 760);
      if ( !v11 )
        sub_3E5460(a4, a1, a2);
      v12 = *(int *)(*(_QWORD *)(v5 + 752) + 4 * v11 - 4);
      a2 = 6;
      *(_QWORD *)(v5 + 760) = v11 - 1;
      v9 = v12;
      sub_3EAB70(a1, 6u, 1, v4, 0x3BEA45E214ADDC55LL, v12, 0);
      a1 = v15;
      v4 = v9;
      if ( a3 )
        goto LABEL_19;
      goto LABEL_11;
    }
    if ( v7 != 95 )
    {
LABEL_6:
      if ( !under_debugger )
        sub_37E160(0xCCBFu, a2, a4);
      goto LABEL_44;
    }
  }
  v9 = -1;
  if ( a3 == 2 )
    goto LABEL_17;
  if ( a3 )
  {
LABEL_19:
    v5 = *(_QWORD *)(v8 + 832);
LABEL_15:
    sub_3EAB70(v8, 4u, 1, v4, 0x3BEA45E214ADDC55LL, *(int *)(v5 + 352), 0);
    goto LABEL_16;
  }
LABEL_11:
  v10 = *(_WORD *)(v8 + 48);
  if ( v10 <= 0xC9u )
  {
    if ( v10 <= 0xC5u )
    {
      switch ( *(_WORD *)(v8 + 48) )
      {
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case '[':
        case '\\':
        case ']':
        case '^':
        case '_':
        case '`':
        case 'a':
          v13 = *(_BYTE *)(v8 + 105) != 0;
          goto LABEL_29;
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          goto LABEL_35;
        case 'n':
        case 'o':
        case 'p':
        case 'q':
          goto LABEL_34;
        case 's':
        case 'u':
        case 'v':
          goto LABEL_37;
        default:
          goto LABEL_26;
      }
    }
    goto LABEL_35;
  }
  if ( v10 > 0x341u )
  {
    if ( v10 != 1739 )
    {
      if ( v10 <= 0x6CBu )
      {
        if ( (unsigned __int16)(v10 - 1736) <= 1u )
        {
          v13 = 0;
          goto LABEL_29;
        }
        goto LABEL_26;
      }
      if ( (unsigned __int16)(v10 - 1743) > 0xDu )
      {
LABEL_26:
        if ( !under_debugger )
          sub_37E160(0xCC4Fu, a2, a4);
        goto LABEL_44;
      }
    }
  }
  else
  {
    if ( v10 > 0x33Du )
    {
LABEL_35:
      v13 = 1;
      goto LABEL_29;
    }
    if ( v10 > 0x241u )
    {
      if ( v10 != 821 )
        goto LABEL_26;
      goto LABEL_37;
    }
    if ( v10 <= 0x23Du )
    {
      if ( v10 > 0xCBu && (unsigned __int16)(v10 - 439) > 1u )
        goto LABEL_26;
LABEL_37:
      v13 = 0;
      goto LABEL_29;
    }
  }
LABEL_34:
  v13 = 2;
LABEL_29:
  v14 = v8 + 40 * v13;
  if ( *(_BYTE *)(v14 + 65) != 7 )
    sub_3E5390(a4, a1, a2);
  sub_3EAB70(v8, 0x2Au, 1, v4, 0x3BEA45E214ADDC55LL, *(_QWORD *)(v14 + 80), 0);
LABEL_16:
  sub_3E8540(*(_QWORD *)(v8 + 832), v9);
}
