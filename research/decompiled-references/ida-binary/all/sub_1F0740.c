__int64 __fastcall sub_1F0740(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rsi
  __int64 result; // rax
  int v7; // ecx

  v5 = *a3;
  if ( *(int *)(a1 + 940) <= 740 )
    result = l_compare(*a2, v5);
  else
    result = l_compare2(*a2, v5, *(_QWORD *)(a1 + 728));
  if ( !(_DWORD)result )
  {
    v7 = *((_DWORD *)a3 + 2);
    result = 1;
    if ( *((_DWORD *)a2 + 2) <= v7 )
      return (unsigned int)-(*((_DWORD *)a2 + 2) < v7);
  }
  return result;
}
