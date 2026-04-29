__int64 __fastcall sub_3CFA90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int v9; // r8d

  if ( !*(_QWORD *)(a3 + 24) || !rangeset_t_find_range(a3 + 16, a1) )
    return 0x7FFFFFFFFFFFFFFFLL;
  v7 = *(_QWORD *)(a2 + 56);
  v8 = *(_QWORD *)(a2 + 48);
  if ( a1 == v7 )
  {
    v9 = a5 + 12;
    if ( v8 != a1 )
      return a5 + 8;
    return v9;
  }
  else
  {
    result = v7 - a1;
    if ( a1 == v8 )
      return a5 + 4;
  }
  return result;
}
