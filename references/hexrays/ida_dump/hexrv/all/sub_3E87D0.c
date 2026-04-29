__int64 __fastcall sub_3E87D0(__int64 a1, double a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rsi
  __int64 *v6; // rcx
  char v8; // al
  unsigned __int8 v9; // al
  int v10; // eax
  __int64 v11; // rdx
  int v12; // edx
  unsigned __int8 v13; // al
  int v14; // eax
  unsigned __int16 v15; // dx
  __int64 v16; // rcx
  int v17; // ecx
  unsigned __int8 v18; // al
  __int16 v19; // ax
  char v20; // al

  v3 = *(unsigned __int16 *)(a1 + 48);
  v4 = 250;
  v5 = &qword_4C1CC0;
  while ( v4 > 0 )
  {
    while ( 1 )
    {
      v6 = &v5[v4 >> 1];
      if ( *(_WORD *)v6 >= (unsigned __int16)v3 )
        break;
      v5 = v6 + 1;
      v4 = v4 - 1 - (v4 >> 1);
      if ( v4 <= 0 )
        goto LABEL_5;
    }
    v4 >>= 1;
  }
LABEL_5:
  if ( v5 == (__int64 *)&unk_4C2490 || *(_WORD *)v5 != (_WORD)v3 )
    return 0;
  *(_QWORD *)(a1 + 840) = *v5;
  switch ( (int)v3 )
  {
    case 81:
    case 82:
    case 83:
    case 84:
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90:
    case 91:
    case 92:
      if ( (*(_BYTE *)(a1 + 52) & 2) != 0 )
      {
        v9 = *(_BYTE *)(a1 + 53);
        if ( v9 == 3 )
        {
          if ( (_WORD)v3 == 92 )
          {
            *(_WORD *)(a1 + 842) = 16;
            return 1;
          }
          goto LABEL_13;
        }
LABEL_17:
        if ( v9 <= 3u )
        {
          if ( v9 )
          {
            if ( v9 == 1 )
            {
LABEL_20:
              *(_WORD *)(a1 + 842) = 8;
              v10 = 8;
              goto LABEL_21;
            }
            goto LABEL_13;
          }
          goto LABEL_51;
        }
        if ( v9 == 4 )
        {
LABEL_51:
          v10 = 4;
          *(_WORD *)(a1 + 842) = 4;
LABEL_21:
          v11 = *(_QWORD *)(a1 + 832);
          if ( (*(_BYTE *)(a1 + 844) & 1) != 0 )
            v12 = *(_DWORD *)(v11 + 692);
          else
            v12 = *(_DWORD *)(v11 + 80);
          if ( v12 < v10 )
            goto LABEL_24;
          return 1;
        }
LABEL_13:
        *(_WORD *)(a1 + 842) = 0;
        return 0;
      }
      if ( !under_debugger )
        sub_37DDE0(0xCE5Au, (__int64)v5, a2);
      goto LABEL_75;
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 113:
    case 114:
    case 115:
    case 132:
    case 133:
      if ( *(_BYTE *)(a1 + 52) == 2 )
        goto LABEL_11;
      if ( !under_debugger )
        sub_37DDE0(0xCE37u, (__int64)v5, a2);
      goto LABEL_75;
    case 109:
    case 111:
      if ( (*(_BYTE *)(a1 + 52) & 0x2F) != 3 )
      {
        if ( !under_debugger )
          sub_37DDE0(0xCE35u, (__int64)v5, a2);
        goto LABEL_75;
      }
      v8 = *(_BYTE *)(a1 + 54);
      if ( v8 != 1 )
        goto LABEL_12;
      v10 = 8;
      goto LABEL_28;
    case 110:
      if ( (*(_BYTE *)(a1 + 52) & 0x2F) != 0x23 )
      {
        if ( !under_debugger )
          sub_37DDE0(0xCE36u, (__int64)v5, a2);
        goto LABEL_75;
      }
      v18 = *(_BYTE *)(a1 + 54);
      if ( v18 > 1u )
      {
        if ( (unsigned __int8)(v18 - 2) > 1u )
          sub_3E4E30(a2, v3, (__int64)v5);
        v19 = 8;
      }
      else
      {
        v19 = 4;
      }
      *(_WORD *)(a1 + 842) = v19;
      goto LABEL_29;
    case 112:
      v20 = *(_BYTE *)(a1 + 52) & 0x2F;
      switch ( v20 )
      {
        case 3:
          v8 = *(_BYTE *)(a1 + 54);
          *(_DWORD *)(a1 + 844) |= 1u;
          if ( v8 == 1 )
            goto LABEL_20;
          break;
        case 35:
          v9 = *(_BYTE *)(a1 + 53);
          if ( v9 == 3 )
            goto LABEL_13;
          goto LABEL_17;
        case 2:
          *(_DWORD *)(a1 + 844) |= 1u;
LABEL_11:
          v8 = *(_BYTE *)(a1 + 53);
          if ( v8 == 1 )
            goto LABEL_20;
          break;
        default:
          if ( !under_debugger )
            sub_37DDE0(0xCE34u, (__int64)v5, a2);
          goto LABEL_75;
      }
LABEL_12:
      if ( (v8 & 0xFB) != 0 )
        goto LABEL_13;
      v10 = 4;
LABEL_28:
      *(_WORD *)(a1 + 842) = v10;
      if ( (unsigned int)(unsigned __int16)v3 - 109 > 1 )
        goto LABEL_21;
LABEL_29:
      v13 = *(_BYTE *)(a1 + 53);
      if ( v13 > 1u && v13 != 4 )
        return 0;
LABEL_31:
      v14 = *(_DWORD *)(a1 + 844);
      v15 = *(_WORD *)(a1 + 842);
      v16 = *(_QWORD *)(a1 + 832);
      if ( (v14 & 1) != 0 )
        v17 = *(_DWORD *)(v16 + 692);
      else
        v17 = *(_DWORD *)(v16 + 80);
      if ( !v15 )
      {
        if ( (v14 & 6) == 0 )
        {
          *(_WORD *)(a1 + 842) = v17;
          return 1;
        }
        if ( !under_debugger )
          sub_37DDE0(0xCE1Fu, (__int64)v5, a2);
LABEL_75:
        BUG();
      }
      if ( v15 > v17 && ((_WORD)v3 != 92 || v15 != 16) )
      {
LABEL_24:
        sub_32BE10(*(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 40), 0x32u);
        return 0;
      }
      return 1;
    default:
      goto LABEL_31;
  }
}
