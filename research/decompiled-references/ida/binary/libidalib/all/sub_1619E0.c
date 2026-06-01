__int64 __fastcall sub_1619E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // ecx

  if ( *(int *)(a1 + 908) <= 740 )
    result = l_compare();
  else
    result = l_compare2();
  if ( !(_DWORD)result )
  {
    v5 = *(_DWORD *)(a3 + 8);
    result = 1;
    if ( *(_DWORD *)(a2 + 8) <= v5 )
      return (unsigned int)-(*(_DWORD *)(a2 + 8) < v5);
  }
  return result;
}

