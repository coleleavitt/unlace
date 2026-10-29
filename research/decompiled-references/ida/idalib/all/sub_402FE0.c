__int64 __fastcall sub_402FE0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rsi

  if ( a3 == 1 )
    goto LABEL_5;
  if ( a3 == 2 )
  {
    if ( a2 > *(_QWORD *)(a1 + 48) )
      a2 = *(_QWORD *)(a1 + 48);
    result = a2 - 1;
    v9 = 88 * a2 - 88;
    while ( result != -1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + v9);
      v9 -= 88;
      if ( v10 != -1 )
        break;
      --result;
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
  else if ( *(_QWORD *)(*(_QWORD *)(a1 + 40) + 88 * a2) != -1 )
  {
    return result;
  }
  v6 = a2 + 1;
  v7 = 88 * v6;
  while ( 1 )
  {
    if ( v6 >= v5 )
      return -1;
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + v7);
    v7 += 88;
    if ( v8 != -1 )
      break;
    ++v6;
  }
  return v6;
}
