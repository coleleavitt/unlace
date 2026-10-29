bool __fastcall sub_10AE590(__int64 a1, char a2)
{
  __int64 v2; // rdx
  bool result; // al

  v2 = *(_QWORD *)(a1 + 88);
  if ( a2 )
    return (v2 != 0) + 1LL == *(unsigned int *)(a1 + 24);
  result = 0;
  if ( !v2 )
    return *(_DWORD *)(a1 + 24) == 1;
  return result;
}

