__int64 __fastcall sub_CBC70(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ebp
  __int64 v5; // rsi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbp
  int v9; // ebp
  int v10; // [rsp+4h] [rbp-24h]

  if ( (_DWORD)a2 == 5 )
  {
LABEL_10:
    *(_BYTE *)(a1 + 261) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 80) == 8 )
    return (unsigned int)-1;
  if ( (_DWORD)a2 != 2 )
  {
    *(_DWORD *)(a1 + 216) = a2;
    if ( (int)a2 > 4 || (*(_DWORD *)(a1 + 80) & byte_1D46C2[(int)a2]) != 0 )
    {
      v2 = TProgram::application;
      switch ( a2 )
      {
        case 0LL:
          v3 = sub_9E0A0();
          if ( v3 <= 0 )
            return (unsigned int)v3;
          goto LABEL_30;
        case 1LL:
          v3 = sub_9E0A0();
          if ( v3 > 0 )
          {
LABEL_30:
            *(_DWORD *)(a1 + 80) = 4;
            byte_2515A1 = 0;
          }
          return (unsigned int)v3;
        case 3LL:
          v5 = 9;
          v3 = sub_9E0A0();
          goto LABEL_25;
        case 4LL:
          v5 = 5;
          v3 = sub_9E0A0();
LABEL_25:
          if ( v3 <= 0 )
            goto LABEL_22;
          v6 = *(_DWORD *)(a1 + 136);
          byte_2515A1 = 1;
          v7 = v6 & 0xFFFFFFF;
          if ( v7 != 2 && v7 != 12 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 136) + 216LL))(v2 + 136, v5);
          goto LABEL_17;
        case 6LL:
          if ( *(_DWORD *)(a1 + 80) == 4 )
          {
            sub_C28F0(a1);
            *(_DWORD *)a1 = -1;
          }
          return *(_DWORD *)(a1 + 80) != 4;
        case 7LL:
        case 8LL:
        case 9LL:
        case 10LL:
        case 13LL:
        case 14LL:
        case 15LL:
        case 16LL:
        case 17LL:
        case 19LL:
        case 20LL:
        case 22LL:
        case 23LL:
        case 25LL:
        case 29LL:
          goto LABEL_21;
        case 11LL:
          v9 = *(_DWORD *)a1;
          if ( (unsigned int)sub_9E0A0() == 1 )
            goto LABEL_53;
          *(_DWORD *)a1 = v9;
          return 1;
        case 12LL:
          if ( *(_QWORD *)(a1 + 56)
            && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 224LL))(TProgram::application + 136LL) )
          {
            return 1;
          }
LABEL_21:
          v3 = sub_9E0A0();
LABEL_22:
          if ( v3 < -1 )
            goto LABEL_23;
          return (unsigned int)v3;
        case 18LL:
          return sub_CBB60(a1, *(__int64 **)a1);
        case 21LL:
          v8 = *(_QWORD *)(a1 + 48) + 48LL;
          if ( (unsigned int)sub_9E0A0() != 1 )
          {
            v10 = -1;
            sub_BAC20(v8, "Debugger plugin does not support an application function call");
          }
          if ( qword_2515B0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 48) + 8LL) = v10;
          return 1;
        case 24LL:
          sub_9E0A0();
          return 1;
        case 26LL:
          v3 = *(unsigned __int8 *)(a1 + 262);
          *(_BYTE *)(a1 + 262) = 0;
          return (unsigned int)v3;
        case 27LL:
          return (unsigned int)sub_9E0A0();
        case 28LL:
          return sub_9E0A0() != 0;
        default:
          if ( under_debugger )
            goto LABEL_57;
          interr();
LABEL_53:
          *(_DWORD *)a1 = v10;
          return 1;
      }
    }
LABEL_8:
    if ( under_debugger )
LABEL_57:
      BUG();
    interr();
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a1 + 216) == 12 )
    return 1;
  *(_DWORD *)(a1 + 216) = 2;
  if ( (*(_DWORD *)(a1 + 80) & 2) == 0 )
    goto LABEL_8;
  v5 = 11;
  v2 = TProgram::application;
  v3 = sub_9E0A0();
  if ( v3 < -1 )
  {
LABEL_23:
    byte_251536 = 1;
    *(_DWORD *)(a1 + 80) = 8;
  }
  else if ( v3 > 0 )
  {
LABEL_17:
    if ( (qword_251330 & 0xFFFFFFF) == 0xC || (qword_251330 & 0xFFFFFFF) == 2 )
    {
      *(_DWORD *)(a1 + 80) = 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v2 + 136) + 224LL))(v2 + 136, v5) )
    {
      *(_DWORD *)(a1 + 80) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 80) = 4;
    }
  }
  return (unsigned int)v3;
}

