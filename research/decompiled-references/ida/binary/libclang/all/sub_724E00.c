__int64 __fastcall sub_724E00(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rdi
  const char *v8; // rsi
  __int64 v9; // rax
  const char *v11; // rsi
  __int64 v12; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v4 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v4 = sub_C4A760(a1);
  if ( v4 != 1 )
  {
    if ( v4 == 2 )
    {
      sub_5FF0F0(a2, "[[gnu::interrupt");
      sub_5FF0F0(a2, "(");
      v6 = sub_5FF0F0(a2, "\"");
      switch ( *(_DWORD *)(a1 + 36) )
      {
        case 0:
          goto LABEL_14;
        case 1:
          goto LABEL_13;
        case 2:
          goto LABEL_12;
        case 3:
          goto LABEL_11;
        case 4:
          goto LABEL_9;
        case 5:
          goto LABEL_15;
        default:
          goto LABEL_23;
      }
    }
    sub_5FF0F0(a2, "__attribute__((interrupt");
    sub_5FF0F0(a2, "(");
    v7 = sub_5FF0F0(a2, "\"");
    switch ( *(_DWORD *)(a1 + 36) )
    {
      case 0:
        v11 = "IRQ";
        goto LABEL_17;
      case 1:
        v11 = "FIQ";
        goto LABEL_17;
      case 2:
        v11 = "SWI";
        goto LABEL_17;
      case 3:
        v11 = "ABORT";
        goto LABEL_17;
      case 4:
        v11 = "UNDEF";
        goto LABEL_17;
      case 5:
        v11 = &byte_3B9466E;
LABEL_17:
        v12 = sub_5FF0F0(v7, v11);
        sub_5FF0F0(v12, "\"");
        sub_5FF0F0(a2, ")");
        return sub_5FF0F0(a2, "))");
      default:
        goto LABEL_23;
    }
  }
  sub_5FF0F0(a2, "[[gnu::interrupt");
  sub_5FF0F0(a2, "(");
  v6 = sub_5FF0F0(a2, "\"");
  switch ( *(_DWORD *)(a1 + 36) )
  {
    case 0:
LABEL_14:
      v8 = "IRQ";
      break;
    case 1:
LABEL_13:
      v8 = "FIQ";
      break;
    case 2:
LABEL_12:
      v8 = "SWI";
      break;
    case 3:
LABEL_11:
      v8 = "ABORT";
      break;
    case 4:
LABEL_9:
      v8 = "UNDEF";
      break;
    case 5:
LABEL_15:
      v8 = &byte_3B9466E;
      break;
    default:
LABEL_23:
      *(_QWORD *)&dword_0 = v5;
      BUG();
  }
  v9 = sub_5FF0F0(v6, v8);
  sub_5FF0F0(v9, "\"");
  sub_5FF0F0(a2, ")");
  return sub_5FF0F0(a2, "]]");
}

