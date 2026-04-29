__int64 __fastcall sub_3C9CF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax

  if ( !a1 )
    return 0x7FFFFFFFFFFFFFFFLL;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)(a2 + 48);
  if ( v6 != *(_QWORD *)(a2 + 56) )
  {
    if ( v6 == v7 )
    {
      LODWORD(result) = a5 + 6;
      if ( *(_DWORD *)a1 != *(_DWORD *)(a2 + 32) )
        LODWORD(result) = a5 + 4;
      return (int)result;
    }
    if ( *(_QWORD *)(a3 + 24) && rangeset_t_find_range(a3 + 16, v6) )
      return *(_QWORD *)(a2 + 56) - *(_QWORD *)(a1 + 24);
    return 0x7FFFFFFFFFFFFFFFLL;
  }
  if ( v6 == v7 )
  {
    LODWORD(result) = a5 + 14;
    if ( *(_DWORD *)a1 != *(_DWORD *)(a2 + 32) )
      LODWORD(result) = a5 + 12;
  }
  else
  {
    LODWORD(result) = a5 + 8;
  }
  return (int)result;
}
