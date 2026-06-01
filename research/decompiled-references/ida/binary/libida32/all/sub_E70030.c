__int64 __fastcall sub_E70030(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rax

  v2 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v3 = *(_QWORD *)(*v2 + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v3;
  if ( *(_BYTE *)(*(_QWORD *)v3 + 16LL) != 13 )
    return 0;
  v5 = sub_F46EC0(*v2);
  if ( v5 )
  {
    v6 = v5 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (unsigned __int8)sub_E6FD70((__int64)a1, v5 & 0xFFFFFFFFFFFFFFF0LL, "BOOL", 4u, a1 + 84) )
      return 0x10000000CLL;
    if ( (unsigned __int8)sub_E6FD70((__int64)a1, v6, "NSInteger", 9u, a1 + 85) )
      return 0x10000000DLL;
    if ( (unsigned __int8)sub_E6FD70((__int64)a1, v6, "NSUInteger", 0xAu, a1 + 86) )
      return 0x10000000ELL;
  }
  v8 = *(unsigned __int16 *)(v4 + 18);
  LOWORD(v8) = (unsigned __int16)v8 >> 3;
  v9 = (unsigned int)(v8 + 76);
  LOWORD(v9) = v9 & 0x1FF;
  switch ( v9 )
  {
    case 0LL:
      return 0x10000000CLL;
    case 1LL:
    case 2LL:
      result = 0x100000001LL;
      break;
    case 7LL:
      result = 0x100000003LL;
      break;
    case 8LL:
      result = 0x100000005LL;
      break;
    case 9LL:
      result = 0x100000007LL;
      break;
    case 10LL:
      result = 0x100000009LL;
      break;
    case 12LL:
    case 13LL:
      result = 0x100000000LL;
      break;
    case 15LL:
      result = 0x100000002LL;
      break;
    case 16LL:
      result = 0x100000004LL;
      break;
    case 17LL:
      result = 0x100000006LL;
      break;
    case 18LL:
      result = 0x100000008LL;
      break;
    case 45LL:
      result = 0x10000000ALL;
      break;
    case 46LL:
      result = 0x10000000BLL;
      break;
    default:
      return 0;
  }
  return result;
}

