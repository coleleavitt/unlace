__int64 __fastcall sub_462260(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  if ( a3 == 1 )
    goto LABEL_5;
  if ( a3 == 2 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    result = a2;
    if ( a2 > v5 )
      result = *(_QWORD *)(a1 + 48);
    while ( result )
    {
      if ( --result < v5 && *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * result) )
        return result;
    }
    return -1;
  }
  result = -1;
  if ( !a3 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    if ( a2 >= v4 )
    {
LABEL_5:
      if ( a2 == -1 )
        return -1;
      v4 = *(_QWORD *)(a1 + 48);
LABEL_7:
      result = a2;
      while ( ++result < v4 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * result) )
          return result;
      }
      return -1;
    }
    result = a2;
    if ( !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * a2) )
      goto LABEL_7;
  }
  return result;
}
