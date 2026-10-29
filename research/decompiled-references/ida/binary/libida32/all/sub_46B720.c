__int64 __fastcall sub_46B720(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rdx

  if ( a3 == 1 )
    goto LABEL_5;
  if ( a3 == 2 )
  {
    if ( a2 > *(_QWORD *)(a1 + 48) )
      a2 = *(_QWORD *)(a1 + 48);
    for ( result = a2 - 1; result != -1 && !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 32 * result + 24); --result )
      ;
    return result;
  }
  result = a2;
  if ( a3 )
    return result;
  v4 = *(_QWORD *)(a1 + 48);
  if ( a2 >= v4 )
  {
LABEL_5:
    result = -1;
    if ( a2 != -1 )
    {
      v4 = *(_QWORD *)(a1 + 48);
      goto LABEL_8;
    }
  }
  else if ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 32 * a2 + 24) )
  {
    do
    {
LABEL_8:
      if ( ++a2 >= v4 )
        return -1;
    }
    while ( !*(_BYTE *)(*(_QWORD *)(a1 + 40) + 32 * a2 + 24) );
    return a2;
  }
  return result;
}

