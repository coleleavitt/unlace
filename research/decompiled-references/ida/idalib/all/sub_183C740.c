__int64 __fastcall sub_183C740(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  unsigned __int8 v3; // al
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD v9[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v2 = (__int64)a2;
  v3 = a2[7] & 0x7F;
  if ( (unsigned int)v3 - 35 <= 3 )
  {
    if ( v3 == 38 )
    {
      if ( sub_B98FC0((__int64)a2, (__int64)a2) )
        return 0;
      v9[0] = 0;
      if ( sub_B98FE0((__int64)a2, v9, v4, v5) )
        return 1;
      a2 = v9;
      v9[0] = 0;
      if ( sub_B99060(v2, v9, v7, v8) )
        return 2;
    }
    if ( sub_B98230((_QWORD *)v2, (__int64)a2) )
      return 3;
    if ( sub_B98360((_QWORD *)v2, (__int64)a2) )
      return 4;
    if ( (*(_BYTE *)(v2 + 28) & 0x7F) == 0x24 )
      return 5;
  }
  if ( (*(_DWORD *)(v2 + 40) & 7) != 6 )
    return 6;
  switch ( *(_DWORD *)(*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFFFFFF8LL) )
  {
    case 0x10:
    case 0x11:
    case 0x20:
    case 0x21:
      if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
        return 6;
      result = 1030;
      break;
    case 0x1E:
      result = 262;
      break;
    case 0x1F:
      result = 774;
      break;
    case 0x22:
      if ( *(char *)(*(_QWORD *)(a1 + 232) + 1LL) >= 0 )
        return 6;
      result = 518;
      break;
    default:
      return 6;
  }
  return result;
}
