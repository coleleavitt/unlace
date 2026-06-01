bool __fastcall sub_B99E40(__int64 a1)
{
  bool result; // al
  __int64 v2; // rcx
  __int64 v3; // rdx

  result = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 56) + 23LL) & 0xC0) == 0 )
  {
    v2 = *(_QWORD *)(a1 + 48);
    if ( v2 )
    {
      result = 0;
      if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 34 <= 5 )
      {
        v3 = *(_QWORD *)(v2 + 56);
        if ( (v3 & 4) != 0 )
          return *(_QWORD *)((v3 & 0xFFFFFFFFFFFFFFF8LL) + 40) != 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

