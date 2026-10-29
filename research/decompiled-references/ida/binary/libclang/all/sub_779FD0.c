bool __fastcall sub_779FD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rax
  bool result; // al
  unsigned __int64 v9; // rdx

  if ( (*(_BYTE *)(a1 + 28) & 0x7D) == 0x29 )
    return 0;
  v4 = *(_QWORD *)(a1 + 16);
  v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v4 & 4) != 0 )
    v6 = *(_QWORD *)(v6 + 8);
  v7 = sub_79C2A0(v6, a2, a3, a4);
  result = (*(_BYTE *)(v7 + 8) & 0x7F) == 0 || (*(_BYTE *)(v7 + 8) & 0x7F) == 22;
  if ( !result )
  {
    if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x29 )
    {
      return 0;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v9 = *(_QWORD *)v9;
      return ((*(_BYTE *)(v9 + 8) + 72) & 0x7Fu) <= 3;
    }
  }
  return result;
}

