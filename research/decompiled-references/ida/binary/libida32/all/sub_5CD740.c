__int64 __fastcall sub_5CD740(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v5; // rsi

  v2 = *(_QWORD *)(a1 + 112);
  if ( (*(_BYTE *)(v2 + 186) & 0xF) != 0xC )
    return set_qerrno(47, a2);
  v3 = 0;
  if ( *(int *)(v2 + 64) <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8 * v3);
    if ( !(unsigned __int8)sub_5CD650(a1, v5) )
      break;
    if ( *(_DWORD *)(v2 + 64) <= (int)++v3 )
      return 0;
  }
  return set_qerrno(1681, v5);
}

