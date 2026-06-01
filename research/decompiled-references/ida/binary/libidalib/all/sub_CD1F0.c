__int64 __fastcall sub_CD1F0(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v3; // r12
  __int64 v5; // rsi
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbp
  __int64 *v9; // rbp
  __int64 v10; // [rsp+0h] [rbp-28h]

  if ( (_DWORD)a2 == 5 )
  {
LABEL_10:
    *(_BYTE *)(a1 + 277) = 1;
    return 1;
  }
  if ( *(_DWORD *)(a1 + 88) == 8 )
    return (unsigned int)-1;
  if ( (_DWORD)a2 != 2 )
  {
    *(_DWORD *)(a1 + 232) = a2;
    if ( (int)a2 > 4 || (*(_DWORD *)(a1 + 88) & byte_1D56C2[(int)a2]) != 0 )
    {
      v3 = TProgram::application;
      switch ( a2 )
      {
        case 0LL:
          v2 = sub_9E1E0();
          if ( v2 <= 0 )
            return (unsigned int)v2;
          goto LABEL_30;
        case 1LL:
          v2 = sub_9E1E0();
          if ( v2 > 0 )
          {
LABEL_30:
            *(_DWORD *)(a1 + 88) = 4;
            byte_252749 = 0;
          }
          return (unsigned int)v2;
        case 3LL:
          v5 = 9;
          v2 = sub_9E1E0();
          goto LABEL_25;
        case 4LL:
          v5 = 5;
          v2 = sub_9E1E0();
LABEL_25:
          if ( v2 <= 0 )
            goto LABEL_22;
          v6 = *(_DWORD *)(a1 + 148);
          byte_252749 = 1;
          v7 = v6 & 0xFFFFFFF;
          if ( v7 != 2 && v7 != 12 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 136) + 216LL))(v3 + 136, v5);
          goto LABEL_17;
        case 6LL:
          if ( *(_DWORD *)(a1 + 88) == 4 )
          {
            sub_C3AE0(a1);
            *(_DWORD *)a1 = -1;
          }
          return *(_DWORD *)(a1 + 88) != 4;
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
          v9 = *(__int64 **)a1;
          if ( (unsigned int)sub_9E1E0() == 1 )
            v9 = (__int64 *)v10;
          *(_QWORD *)a1 = v9;
          return 1;
        case 12LL:
          if ( *(_QWORD *)(a1 + 64)
            && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(TProgram::application + 136LL) + 224LL))(TProgram::application + 136LL) )
          {
            return 1;
          }
LABEL_21:
          v2 = sub_9E1E0();
LABEL_22:
          if ( v2 < -1 )
            goto LABEL_23;
          return (unsigned int)v2;
        case 18LL:
          return sub_CD0E0(a1, *(__int64 **)a1);
        case 21LL:
          v8 = *(_QWORD *)(a1 + 56) + 56LL;
          if ( (unsigned int)sub_9E1E0() != 1 )
          {
            v10 = -1;
            sub_BB240(v8, "Debugger plugin does not support an application function call");
          }
          if ( qword_252758 )
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL) = v10;
          return 1;
        case 24LL:
          sub_9E1E0();
          return 1;
        case 26LL:
          v2 = *(unsigned __int8 *)(a1 + 278);
          *(_BYTE *)(a1 + 278) = 0;
          return (unsigned int)v2;
        case 27LL:
          return (unsigned int)sub_9E1E0();
        case 28LL:
          return sub_9E1E0() != 0;
        default:
          if ( under_debugger )
            goto LABEL_57;
          interr();
          goto LABEL_54;
      }
    }
LABEL_8:
    if ( under_debugger )
LABEL_57:
      BUG();
    interr();
    goto LABEL_10;
  }
  if ( *(_DWORD *)(a1 + 232) == 12 )
    return 1;
  *(_DWORD *)(a1 + 232) = 2;
  if ( (*(_DWORD *)(a1 + 88) & 2) == 0 )
    goto LABEL_8;
  v5 = 11;
  v3 = TProgram::application;
  v2 = sub_9E1E0();
  if ( v2 < -1 )
  {
LABEL_23:
    byte_2526BA = 1;
    *(_DWORD *)(a1 + 88) = 8;
  }
  else if ( v2 > 0 )
  {
LABEL_17:
    if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) == 0xC || (HIDWORD(qword_2524B0) & 0xFFFFFFF) == 2 )
    {
LABEL_54:
      *(_DWORD *)(a1 + 88) = 1;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 136) + 224LL))(v3 + 136, v5) )
    {
      *(_DWORD *)(a1 + 88) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 88) = 4;
    }
  }
  return (unsigned int)v2;
}

