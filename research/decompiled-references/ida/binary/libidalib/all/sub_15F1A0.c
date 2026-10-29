bool __fastcall sub_15F1A0(__int64 a1)
{
  bool result; // al
  int v2; // edx

  result = 0;
  if ( *(_QWORD *)(a1 + 280) )
  {
    if ( *(int *)(a1 + 908) > 740 )
      v2 = l_compare2();
    else
      v2 = l_compare();
    result = 1;
    if ( !v2 )
      return *(_DWORD *)(a1 + 288) != *(_DWORD *)(a1 + 312);
  }
  return result;
}

