unsigned __int64 __fastcall sub_3EFF80(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  int v7; // esi
  __int64 v8; // rdx
  int v9; // esi

  if ( a3 == 1 )
    goto LABEL_5;
  if ( a3 == 2 )
  {
    if ( a2 > *(_QWORD *)(a1 + 48) )
      a2 = *(_QWORD *)(a1 + 48);
    result = a2 - 1;
    v8 = 80 * a2 - 80;
    while ( result != -1 )
    {
      v9 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + v8);
      v8 -= 80;
      if ( v9 != -1 )
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
  else if ( *(_DWORD *)(*(_QWORD *)(a1 + 40) + 80 * a2) != -1 )
  {
    return result;
  }
  result = a2 + 1;
  v6 = 80 * (a2 + 1);
  while ( result < v5 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + v6);
    v6 += 80;
    if ( v7 != -1 )
      return result;
    ++result;
  }
  return -1;
}

