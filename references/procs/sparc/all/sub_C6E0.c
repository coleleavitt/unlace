__int64 __fastcall sub_C6E0(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 result; // rax
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp

  v2 = *(_WORD *)(a2 + 24);
  if ( v2 > 0x3Bu )
  {
    if ( (unsigned __int16)(v2 - 121) <= 1u )
    {
      if ( (*(_BYTE *)(a2 + 46) & 1) != 0 )
        return 0;
      if ( *(_BYTE *)(a2 + 41) != 7 )
        return 1;
      goto LABEL_11;
    }
  }
  else if ( v2 > 0x39u )
  {
    if ( (*(_BYTE *)(a2 + 86) & 1) != 0 )
      return 0;
  }
  else if ( v2 == 52 )
  {
    return 0;
  }
  if ( *(_BYTE *)(a2 + 41) != 7 )
    return 1;
LABEL_11:
  if ( !(unsigned __int8)is_mapped(*(_QWORD *)(a2 + 56) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL)) )
    return 0;
  if ( *(_WORD *)(a2 + 24) == 52 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 > 0x83 )
    {
      v5 = v4 - 4;
      v6 = v4 - 132;
      while ( 1 )
      {
        result = sub_B8C0(v5);
        if ( (_DWORD)result )
          break;
        v5 -= 4;
        if ( v5 == v6 )
          return result;
      }
    }
  }
  return 1;
}
