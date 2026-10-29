bool __fastcall sub_B73710(__int64 a1)
{
  bool result; // al
  __int64 v2; // rsi
  unsigned __int64 v3; // rcx

  result = 0;
  if ( (*(_BYTE *)(a1 + 29) & 2) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
        v3 = *(_QWORD *)v3;
      result = 0;
      if ( (*(_BYTE *)(v3 + 8) & 0x7Fu) - 59 <= 2 && v3 != 64 )
        return *(_QWORD *)(v3 - 24) == v2;
    }
  }
  return result;
}

