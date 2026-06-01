bool __fastcall sub_9B0850(__int64 a1, __int64 a2)
{
  void *v2; // r13
  bool v4; // al

  v2 = qword_1C7F2C0;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 || (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a1, a2) )
      return 0;
  }
  else if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 || (*(_BYTE *)(a2 + 20) & 1) != 0 )
    v4 = (unsigned int)sub_182C7B0(v2, a1 + 16, a2 + 16) == 0;
  else
    v4 = *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16);
  if ( !v4 )
    return 0;
  return sub_3ED680((__int64)qword_1C7F2C0, a1 + 32, a2 + 32);
}

