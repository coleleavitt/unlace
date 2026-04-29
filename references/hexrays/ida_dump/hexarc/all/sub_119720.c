char __fastcall sub_119720(__int64 a1, __int64 a2)
{
  char v3; // al
  char result; // al
  __int64 v5; // rdi
  __int64 (*v6)(); // rax
  int v7; // ebx
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  while ( 2 )
  {
    v3 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 == 2 )
      return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) <= 1u;
    if ( v3 == 4 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      switch ( *(_DWORD *)v5 )
      {
        case 5:
          return sub_1198E0(v5 + 32, a2);
        case 6:
        case 0x19:
        case 0x1A:
        case 0x1B:
        case 0x1C:
          return 1;
        case 8:
        case 9:
        case 0xA:
        case 0xB:
          a1 = v5 + 32;
          continue;
        case 0x11:
          result = sub_1196C0((char *)(v5 + 48), v8, 1u);
          if ( result )
            return v8[0] == 2;
          return result;
        case 0x13:
        case 0x15:
          if ( !(unsigned __int8)sub_119720(v5 + 32, a2) )
            return 0;
          goto LABEL_16;
        case 0x14:
          if ( (unsigned __int8)sub_119720(v5 + 32, a2) )
            return 1;
LABEL_16:
          a1 = *(_QWORD *)(a1 + 8) + 48LL;
          continue;
        case 0x17:
          v7 = *(_DWORD *)(v5 + 36);
          result = sub_1196C0((char *)(v5 + 48), v8, 0);
          if ( result )
            return 8 * v7 - 1 == v8[0];
          return result;
        default:
          return (unsigned int)(*(_DWORD *)v5 - 29) <= 0xC;
      }
    }
    break;
  }
  if ( v3 != 1 )
    return 0;
  if ( *(int *)(a1 + 8) <= 7 )
    return 1;
  v6 = *(__int64 (**)())(*(_QWORD *)a2 + 208LL);
  if ( v6 == sub_114D60 )
    return 0;
  else
    return ((__int64 (__fastcall *)(__int64))v6)(a2);
}
