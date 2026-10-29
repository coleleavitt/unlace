bool __fastcall sub_A5EB90(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  bool result; // al
  unsigned __int64 v6; // rdx

  if ( ((*(_BYTE *)(a1 + 28) + 85) & 0x7D) == 0 )
    return 0;
  v1 = *(_QWORD *)(a1 + 16);
  v3 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v1 & 4) != 0 )
    v3 = *(_QWORD *)(v3 + 8);
  v4 = sub_B8EAA0(v3);
  result = (*(_BYTE *)(v4 + 8) & 0x7F) == 0 || (*(_BYTE *)(v4 + 8) & 0x7F) == 24;
  if ( !result )
  {
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x2B )
    {
      return 0;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v6 = *(_QWORD *)v6;
      return ((*(_BYTE *)(v6 + 8) + 70) & 0x7Fu) <= 3;
    }
  }
  return result;
}
