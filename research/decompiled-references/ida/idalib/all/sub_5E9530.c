__int64 __fastcall sub_5E9530(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx

  v1 = *(_QWORD *)(a1 + 120);
  if ( (*(_BYTE *)(v1 + 186) & 0xF) != 0xC )
    return set_qerrno(47);
  v2 = 0;
  if ( *(int *)(v1 + 64) <= 0 )
    return 0;
  while ( (unsigned __int8)sub_5E9440(a1, *(_QWORD *)(*(_QWORD *)(v1 + 56) + 8 * v2)) )
  {
    if ( *(_DWORD *)(v1 + 64) <= (int)++v2 )
      return 0;
  }
  return set_qerrno(1681);
}
