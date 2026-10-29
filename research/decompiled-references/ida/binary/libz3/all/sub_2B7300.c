bool __fastcall sub_2B7300(_DWORD *a1, __int64 a2)
{
  int *v2; // rax
  int v3; // edx
  bool result; // al

  if ( !a2 )
    return 0;
  v2 = *(int **)(a2 + 24);
  if ( v2 )
  {
    v3 = *v2;
    result = 1;
    if ( v3 == 5 )
      return result;
  }
  else
  {
    v3 = -1;
  }
  result = 1;
  if ( a1[361] != v3 && a1[363] != v3 )
    return a1[365] == v3;
  return result;
}

