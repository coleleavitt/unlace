unsigned __int64 __fastcall sub_BA7A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdx

  result = sub_B94670(a1 + 48, a2, a3, a4, a5, a6);
  if ( !result )
    return 0;
  while ( 1 )
  {
    v7 = result & 0xFFFFFFFFFFFFFFF8LL;
    if ( (result & 4) == 0 )
      break;
    if ( !v7 )
      return 0;
    result = *(_QWORD *)v7;
    if ( (*(_BYTE *)(*(_QWORD *)v7 + 28LL) & 0x7F) != 0x32 )
    {
      result = *(_QWORD *)(v7 + 8);
      if ( result )
        continue;
    }
    return result;
  }
  result = 0;
  if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x32 )
    return v7;
  return result;
}
