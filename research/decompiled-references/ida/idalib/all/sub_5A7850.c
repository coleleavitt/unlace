__int64 __fastcall sub_5A7850(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  if ( a3 == 1 )
    goto LABEL_5;
  if ( a3 == 2 )
  {
    if ( a2 > *(_QWORD *)(a1 + 48) )
      a2 = *(_QWORD *)(a1 + 48);
    for ( result = a2 - 1; result != -1; --result )
    {
      v7 = *(_QWORD *)(a1 + 40) + 32 * result;
      if ( *(_QWORD *)(v7 + 8) > 1u || *(_DWORD *)(v7 + 24) )
        break;
    }
    return result;
  }
  result = a2;
  if ( a3 )
    return result;
  v5 = *(_QWORD *)(a1 + 48);
  if ( a2 >= v5 )
  {
LABEL_5:
    result = -1;
    if ( a2 == -1 )
      return result;
    v5 = *(_QWORD *)(a1 + 48);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 40) + 32 * a2;
    if ( *(_QWORD *)(v8 + 8) > 1u || *(_DWORD *)(v8 + 24) )
      return result;
  }
  result = a2;
  while ( ++result < v5 )
  {
    v6 = *(_QWORD *)(a1 + 40) + 32 * result;
    if ( *(_QWORD *)(v6 + 8) > 1u || *(_DWORD *)(v6 + 24) )
      return result;
  }
  return -1;
}
