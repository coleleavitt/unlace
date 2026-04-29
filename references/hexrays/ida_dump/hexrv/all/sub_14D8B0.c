char __fastcall sub_14D8B0(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  _QWORD v7[5]; // [rsp+0h] [rbp-28h] BYREF

  v7[3] = __readfsqword(0x28u);
  switch ( *(_BYTE *)a1 )
  {
    case 1:
    case 5:
    case 6:
    case 9:
    case 0xA:
    case 0xE:
      result = *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 84);
      break;
    case 2:
      v4 = *(unsigned int *)(a1 + 4);
      if ( (_DWORD)v4 != *(_DWORD *)(a2 + 84) )
        goto LABEL_5;
      v6 = sub_325910(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v4, 0);
      if ( v6 <= 0xFFF )
        goto LABEL_5;
      result = v6 != -1 && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL) + 16LL) != v6;
      break;
    case 4:
      result = sub_14D9B0(*(_QWORD *)(a1 + 8));
      break;
    case 0xF:
      v5 = *(_QWORD *)(a1 + 8);
      v7[0] = off_4B0708;
      v7[1] = 4;
      result = (unsigned int)((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD, _QWORD))visit_subtypes)(
                               v7,
                               0,
                               v5 + 48,
                               0,
                               0) != 0;
      break;
    default:
LABEL_5:
      result = 0;
      break;
  }
  return result;
}
