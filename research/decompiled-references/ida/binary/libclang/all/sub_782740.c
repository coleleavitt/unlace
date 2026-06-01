bool __fastcall sub_782740(__int64 a1)
{
  bool result; // al
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rsi

  result = 0;
  if ( (*(_BYTE *)(a1 + 29) & 2) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 <= 7 )
    {
      if ( !(_DWORD)v2 )
        return result;
      v3 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
        goto LABEL_4;
    }
    else
    {
      v3 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) == 0 )
        goto LABEL_4;
    }
    v3 = *(_QWORD *)v3;
LABEL_4:
    result = 0;
    if ( ((*(_BYTE *)(v3 + 8) + 72) & 0x7Fu) <= 3 )
      return *(_QWORD *)(v3 - 24) == v2;
  }
  return result;
}

