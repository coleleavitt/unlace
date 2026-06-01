__int64 __fastcall sub_805180(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  char v4; // al
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v4 = *(_BYTE *)(v3 + 16);
  switch ( v4 )
  {
    case 13:
      if ( (((*(_WORD *)(v3 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        return 2;
      break;
    case 46:
      v7 = sub_B14A40(v3);
      if ( (*(_BYTE *)(v7 + 74) & 1) == 0 && *(_QWORD *)(v7 + 128) <= 7u )
        return 2;
      break;
    case 10:
      break;
    default:
      return 2;
  }
  v6 = sub_6F6DE0(a2, a1);
  result = 1;
  if ( v6 > 0x40 )
    return 2;
  return result;
}

