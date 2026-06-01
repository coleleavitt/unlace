unsigned __int64 __fastcall sub_7B6070(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx

  for ( result = sub_7A0650(a1 + 48, a2); result; result = *(_QWORD *)(v3 + 8) )
  {
    v3 = result & 0xFFFFFFFFFFFFFFF8LL;
    if ( (result & 4) == 0 )
    {
      result = 0;
      if ( (*(_BYTE *)(v3 + 28) & 0x7F) == 0x30 )
        return v3;
      return result;
    }
    if ( !v3 )
      BUG();
    result = *(_QWORD *)v3;
    if ( (*(_BYTE *)(*(_QWORD *)v3 + 28LL) & 0x7F) == 0x30 )
      return result;
  }
  return result;
}

